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
SEXP Rsh_Fir_user_function_inner3811434555_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3811434555_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3811434555_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3811434555_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3811434555_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3811434555_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3811434555_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3811434555_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3811434555_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner799576941_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner799576941_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner799576941_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner799576941_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner799576941_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner799576941_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_require1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_deparse2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_deparse3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_quote1_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_deparse4_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_deparse5_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r31_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3811434555
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3811434555_, RHO, CCP);
  // st deparse = r
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
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf require in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<sym stats>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
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
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L6_:;
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
  // check L7() else D1()
  // L7()
  goto L7_;

L8_:;
  // require1 = ldf require
  Rsh_Fir_reg_require1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r5 = dyn base1(<sym graphics>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1()
  // L1()
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

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0()
  // L0()
  goto L0_;

L10_:;
  // p1 = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r8 = dyn require1(p1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

L12_:;
  // p3 = prom<V +>{
  //   args = ldf args;
  //   p2 = prom<V +>{
  //     lm = ld lm;
  //     lm1 = force? lm;
  //     checkMissing(lm1);
  //     return lm1;
  //   };
  //   r10 = dyn args(p2);
  //   return r10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r12 = dyn deparse(p3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D3_:;
  // deopt 12 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 16 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L1()
  // L1()
  goto L1_;

L13_:;
  // deparse1 = ldf deparse
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p5 = prom<V +>{
  //   args1 = ldf args;
  //   p4 = prom<V +>{
  //     lm2 = ld lm;
  //     lm3 = force? lm2;
  //     checkMissing(lm3);
  //     return lm3;
  //   };
  //   r14 = dyn args1(p4);
  //   return r14;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r16 = dyn deparse1[, `width.cutoff`](p5, 500.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 22 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // r17 = clos inner799576941
  Rsh_Fir_reg_r17_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // st myplot = r17
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym2 = ldf quote
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf quote in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L2_:;
  // st e = r19
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // deparse2 = ldf deparse
  Rsh_Fir_reg_deparse2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

L16_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r20 = dyn quote(<sym `foo bar`>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(r20)
  // L2(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L2_;

L17_:;
  // r18 = dyn base2(<sym `foo bar`>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L2(r18)
  // L2(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L2_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p6 = prom<V +>{
  //   e = ld e;
  //   e1 = force? e;
  //   checkMissing(e1);
  //   return e1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r22 = dyn deparse2(p6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

D9_:;
  // deopt 33 [r22]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // deparse3 = ldf deparse
  Rsh_Fir_reg_deparse3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D10()
  // L20()
  goto L20_;

D10_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p7 = prom<V +>{
  //   e2 = ld e;
  //   e3 = force? e2;
  //   checkMissing(e3);
  //   return e3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r24 = dyn deparse3[, backtick](p7, TRUE)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse3_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L21() else D11()
  // L21()
  goto L21_;

D11_:;
  // deopt 39 [r24]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // sym3 = ldf quote
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf quote in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L3_:;
  // st e = r26
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // deparse4 = ldf deparse
  Rsh_Fir_reg_deparse4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L24() else D12()
  // L24()
  goto L24_;

L22_:;
  // quote1 = ldf quote in base
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r27 = dyn quote1(<lang `+`(`foo bar`, 1.0)>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r27)
  // L3(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L3_;

L23_:;
  // r25 = dyn base3(<lang `+`(`foo bar`, 1.0)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r25)
  // L3(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L3_;

D12_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p8 = prom<V +>{
  //   e4 = ld e;
  //   e5 = force? e4;
  //   checkMissing(e5);
  //   return e5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r29 = dyn deparse4(p8)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse4_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L25() else D13()
  // L25()
  goto L25_;

D13_:;
  // deopt 47 [r29]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // deparse5 = ldf deparse
  Rsh_Fir_reg_deparse5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D14_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p9 = prom<V +>{
  //   e6 = ld e;
  //   e7 = force? e6;
  //   checkMissing(e7);
  //   return e7;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r31 = dyn deparse5[, control](p9, "all")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse5_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L27() else D15()
  // L27()
  goto L27_;

D15_:;
  // deopt 53 [r31]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
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
  SEXP Rsh_Fir_reg_stats;
  SEXP Rsh_Fir_reg_stats1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
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
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_args;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // args = ldf args
  Rsh_Fir_reg_args = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // p2 = prom<V +>{
  //   lm = ld lm;
  //   lm1 = force? lm;
  //   checkMissing(lm1);
  //   return lm1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r10 = dyn args(p2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_args, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm;
  SEXP Rsh_Fir_reg_lm1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm = ld lm
  Rsh_Fir_reg_lm = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // lm1 = force? lm
  Rsh_Fir_reg_lm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm);
  // checkMissing(lm1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_lm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return lm1
  return Rsh_Fir_reg_lm1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // args1 = ldf args
  Rsh_Fir_reg_args1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // p4 = prom<V +>{
  //   lm2 = ld lm;
  //   lm3 = force? lm2;
  //   checkMissing(lm3);
  //   return lm3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r14 = dyn args1(p4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_args1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm2_;
  SEXP Rsh_Fir_reg_lm3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm2 = ld lm
  Rsh_Fir_reg_lm2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // lm3 = force? lm2
  Rsh_Fir_reg_lm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm2_);
  // checkMissing(lm3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_lm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return lm3
  return Rsh_Fir_reg_lm3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e;
  SEXP Rsh_Fir_reg_e1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return e1
  return Rsh_Fir_reg_e1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_reg_e3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e2 = ld e
  Rsh_Fir_reg_e2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // e3 = force? e2
  Rsh_Fir_reg_e3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e2_);
  // checkMissing(e3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_e3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return e3
  return Rsh_Fir_reg_e3_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e4_;
  SEXP Rsh_Fir_reg_e5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e4 = ld e
  Rsh_Fir_reg_e4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // e5 = force? e4
  Rsh_Fir_reg_e5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e4_);
  // checkMissing(e5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_e5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return e5
  return Rsh_Fir_reg_e5_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e6_;
  SEXP Rsh_Fir_reg_e7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e6 = ld e
  Rsh_Fir_reg_e6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // e7 = force? e6
  Rsh_Fir_reg_e7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e6_);
  // checkMissing(e7)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_e7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return e7
  return Rsh_Fir_reg_e7_;
}
SEXP Rsh_Fir_user_function_inner3811434555_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3811434555 dynamic dispatch ([expr, `width.cutoff`, backtick, control, nlines])

  return Rsh_Fir_user_version_inner3811434555_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3811434555_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3811434555 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3811434555/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_expr;
  SEXP Rsh_Fir_reg_width_cutoff;
  SEXP Rsh_Fir_reg_backtick;
  SEXP Rsh_Fir_reg_control;
  SEXP Rsh_Fir_reg_nlines;
  SEXP Rsh_Fir_reg_width_cutoff_isMissing;
  SEXP Rsh_Fir_reg_width_cutoff_orDefault;
  SEXP Rsh_Fir_reg_backtick_isMissing;
  SEXP Rsh_Fir_reg_backtick_orDefault;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_control_isMissing;
  SEXP Rsh_Fir_reg_control_orDefault;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_nlines_isMissing;
  SEXP Rsh_Fir_reg_nlines_orDefault;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_expr3_;
  SEXP Rsh_Fir_reg_expr4_;
  SEXP Rsh_Fir_reg_width_cutoff1_;
  SEXP Rsh_Fir_reg_width_cutoff2_;
  SEXP Rsh_Fir_reg_backtick1_;
  SEXP Rsh_Fir_reg_backtick2_;
  SEXP Rsh_Fir_reg__deparseOpts;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_nlines1_;
  SEXP Rsh_Fir_reg_nlines2_;
  SEXP Rsh_Fir_reg_deparse1;
  SEXP Rsh_Fir_reg_r18_1;

  // Bind parameters
  Rsh_Fir_reg_expr = PARAMS[0];
  Rsh_Fir_reg_width_cutoff = PARAMS[1];
  Rsh_Fir_reg_backtick = PARAMS[2];
  Rsh_Fir_reg_control = PARAMS[3];
  Rsh_Fir_reg_nlines = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // width_cutoff_isMissing = missing.0(width_cutoff)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_width_cutoff;
  Rsh_Fir_reg_width_cutoff_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args28);
  // if width_cutoff_isMissing then L0(60) else L0(width_cutoff)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_width_cutoff_isMissing)) {
  // L0(60)
    Rsh_Fir_reg_width_cutoff_orDefault = Rsh_const(CCP, 18);
    goto L0_;
  } else {
  // L0(width_cutoff)
    Rsh_Fir_reg_width_cutoff_orDefault = Rsh_Fir_reg_width_cutoff;
    goto L0_;
  }

L0_:;
  // st `width.cutoff` = width_cutoff_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_width_cutoff_orDefault, RHO);
  (void)(Rsh_Fir_reg_width_cutoff_orDefault);
  // backtick_isMissing = missing.0(backtick)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_backtick;
  Rsh_Fir_reg_backtick_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args29);
  // if backtick_isMissing then L1() else L2(backtick)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_backtick_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(backtick)
    Rsh_Fir_reg_backtick_orDefault = Rsh_Fir_reg_backtick;
    goto L2_;
  }

L1_:;
  // p3 = prom<V +>{
  //   _in_ = ldf `%in%`;
  //   p1 = prom<V +>{
  //     mode = ldf mode;
  //     p = prom<V +>{
  //       expr1 = ld expr;
  //       expr2 = force? expr1;
  //       checkMissing(expr2);
  //       return expr2;
  //     };
  //     r1 = dyn mode(p);
  //     return r1;
  //   };
  //   p2 = prom<V +>{
  //     sym = ldf c;
  //     base = ldf c in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r4):
  //     return r4;
  //   L1():
  //     c = ldf c in base;
  //     r5 = dyn c("call", "expression", "(", "function");
  //     goto L0(r5);
  //   L2():
  //     r3 = dyn base("call", "expression", "(", "function");
  //     goto L0(r3);
  //   };
  //   r7 = dyn _in_(p1, p2);
  //   return r7;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3811434555_, 0, NULL, CCP, RHO);
  // goto L2(p3)
  // L2(p3)
  Rsh_Fir_reg_backtick_orDefault = Rsh_Fir_reg_p3_1;
  goto L2_;

L2_:;
  // st backtick = backtick_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_backtick_orDefault, RHO);
  (void)(Rsh_Fir_reg_backtick_orDefault);
  // control_isMissing = missing.0(control)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_control;
  Rsh_Fir_reg_control_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args36);
  // if control_isMissing then L3() else L4(control)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_control_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(control)
    Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_control;
    goto L4_;
  }

L3_:;
  // p4 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   c1 = ldf c in base;
  //   r11 = dyn c1("keepNA", "keepInteger", "niceNames", "showAttributes");
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base1("keepNA", "keepInteger", "niceNames", "showAttributes");
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3811434555_4, 0, NULL, CCP, RHO);
  // goto L4(p4)
  // L4(p4)
  Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_p4_1;
  goto L4_;

L4_:;
  // st control = control_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_control_orDefault, RHO);
  (void)(Rsh_Fir_reg_control_orDefault);
  // nlines_isMissing = missing.0(nlines)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_nlines;
  Rsh_Fir_reg_nlines_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args40);
  // if nlines_isMissing then L5() else L6(nlines)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nlines_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(nlines)
    Rsh_Fir_reg_nlines_orDefault = Rsh_Fir_reg_nlines;
    goto L6_;
  }

L5_:;
  // p5 = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3811434555_5, 0, NULL, CCP, RHO);
  // goto L6(p5)
  // L6(p5)
  Rsh_Fir_reg_nlines_orDefault = Rsh_Fir_reg_p5_1;
  goto L6_;

L6_:;
  // st nlines = nlines_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_nlines_orDefault, RHO);
  (void)(Rsh_Fir_reg_nlines_orDefault);
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard2 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

L8_:;
  // expr3 = ld expr
  Rsh_Fir_reg_expr3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r14 = dyn base2(<lang deparse(expr, width.cutoff, backtick, .deparseOpts(control), nlines)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_1;
  goto L7_;

D0_:;
  // deopt 2 [expr3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_expr3_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L10_:;
  // expr4 = force? expr3
  Rsh_Fir_reg_expr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr3_);
  // checkMissing(expr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_expr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // width_cutoff1 = ld `width.cutoff`
  Rsh_Fir_reg_width_cutoff1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 4 [width_cutoff1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_width_cutoff1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L11_:;
  // width_cutoff2 = force? width_cutoff1
  Rsh_Fir_reg_width_cutoff2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_width_cutoff1_);
  // checkMissing(width_cutoff2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_width_cutoff2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // backtick1 = ld backtick
  Rsh_Fir_reg_backtick1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

D2_:;
  // deopt 6 [backtick1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_backtick1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L12_:;
  // backtick2 = force? backtick1
  Rsh_Fir_reg_backtick2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_backtick1_);
  // checkMissing(backtick2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_backtick2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // _deparseOpts = ldf `.deparseOpts`
  Rsh_Fir_reg__deparseOpts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p6 = prom<V +>{
  //   control1 = ld control;
  //   control2 = force? control1;
  //   checkMissing(control2);
  //   return control2;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3811434555_6, 0, NULL, CCP, RHO);
  // r17 = dyn _deparseOpts(p6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__deparseOpts, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 11 [r17]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L14_:;
  // nlines1 = ld nlines
  Rsh_Fir_reg_nlines1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 12 [nlines1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_nlines1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L15_:;
  // nlines2 = force? nlines1
  Rsh_Fir_reg_nlines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlines1_);
  // checkMissing(nlines2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_nlines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // deparse = ldf deparse in base
  Rsh_Fir_reg_deparse1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r18 = dyn deparse(expr4, width_cutoff2, backtick2, r17, nlines2)
  SEXP Rsh_Fir_array_args49[5];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_expr4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_width_cutoff2_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_backtick2_;
  Rsh_Fir_array_args49[3] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_array_args49[4] = Rsh_Fir_reg_nlines2_;
  SEXP Rsh_Fir_array_arg_names24[5];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1, 5, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

D6_:;
  // deopt 15 [r18]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r18_1;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner3811434555_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3811434555/0: expected 0, got %d", NCAPTURES);

  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p1 = prom<V +>{
  //   mode = ldf mode;
  //   p = prom<V +>{
  //     expr1 = ld expr;
  //     expr2 = force? expr1;
  //     checkMissing(expr2);
  //     return expr2;
  //   };
  //   r1 = dyn mode(p);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3811434555_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   c = ldf c in base;
  //   r5 = dyn c("call", "expression", "(", "function");
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base("call", "expression", "(", "function");
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3811434555_3, 0, NULL, CCP, RHO);
  // r7 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner3811434555_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mode;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3811434555/0: expected 0, got %d", NCAPTURES);

  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p = prom<V +>{
  //   expr1 = ld expr;
  //   expr2 = force? expr1;
  //   checkMissing(expr2);
  //   return expr2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3811434555_2, 0, NULL, CCP, RHO);
  // r1 = dyn mode(p)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner3811434555_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_expr1_;
  SEXP Rsh_Fir_reg_expr2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3811434555/0: expected 0, got %d", NCAPTURES);

  // expr1 = ld expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // expr2 = force? expr1
  Rsh_Fir_reg_expr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr1_);
  // checkMissing(expr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_expr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return expr2
  return Rsh_Fir_reg_expr2_;
}
SEXP Rsh_Fir_user_promise_inner3811434555_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3811434555/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_1;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r5 = dyn c("call", "expression", "(", "function")
  SEXP Rsh_Fir_array_args33[4];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L2_:;
  // r3 = dyn base("call", "expression", "(", "function")
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 4, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3811434555_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3811434555/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_1;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r11 = dyn c1("keepNA", "keepInteger", "niceNames", "showAttributes")
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base1("keepNA", "keepInteger", "niceNames", "showAttributes")
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 4, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3811434555_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3811434555/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 30);
}
SEXP Rsh_Fir_user_promise_inner3811434555_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_control1_;
  SEXP Rsh_Fir_reg_control2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3811434555/0: expected 0, got %d", NCAPTURES);

  // control1 = ld control
  Rsh_Fir_reg_control1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // control2 = force? control1
  Rsh_Fir_reg_control2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control1_);
  // checkMissing(control2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_control2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return control2
  return Rsh_Fir_reg_control2_;
}
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner799576941 dynamic dispatch ([x, y])

  return Rsh_Fir_user_version_inner799576941_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner799576941 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner799576941/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_p3_2;
  SEXP Rsh_Fir_reg_p5_2;
  SEXP Rsh_Fir_reg_r14_2;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner799576941_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner799576941_1, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   deparse1 = ldf deparse1;
  //   p2 = prom<V +>{
  //     sym = ldf substitute;
  //     base = ldf substitute in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r3):
  //     return r3;
  //   L1():
  //     substitute = ldf substitute in base;
  //     r4 = dyn substitute(<sym x>);
  //     goto L0(r4);
  //   L2():
  //     r2 = dyn base(<sym x>);
  //     goto L0(r2);
  //   };
  //   r6 = dyn deparse1(p2);
  //   return r6;
  // }
  Rsh_Fir_reg_p3_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner799576941_2, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   deparse2 = ldf deparse1;
  //   p4 = prom<V +>{
  //     sym1 = ldf substitute;
  //     base1 = ldf substitute in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r9):
  //     return r9;
  //   L1():
  //     substitute1 = ldf substitute in base;
  //     r10 = dyn substitute1(<sym y>);
  //     goto L0(r10);
  //   L2():
  //     r8 = dyn base1(<sym y>);
  //     goto L0(r8);
  //   };
  //   r12 = dyn deparse2(p4);
  //   return r12;
  // }
  Rsh_Fir_reg_p5_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner799576941_4, 0, NULL, CCP, RHO);
  // r14 = dyn plot[, , xlab, ylab](p, p1, p3, p5)
  SEXP Rsh_Fir_array_args60[4];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_p3_2;
  Rsh_Fir_array_args60[3] = Rsh_Fir_reg_p5_2;
  SEXP Rsh_Fir_array_arg_names31[4];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names31[3] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r14_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 4, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r14]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r14_2;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_2;
}
SEXP Rsh_Fir_user_promise_inner799576941_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner799576941/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner799576941_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner799576941/0: expected 0, got %d", NCAPTURES);

  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner799576941_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse1_1;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner799576941/0: expected 0, got %d", NCAPTURES);

  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p2 = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   substitute = ldf substitute in base;
  //   r4 = dyn substitute(<sym x>);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base(<sym x>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner799576941_3, 0, NULL, CCP, RHO);
  // r6 = dyn deparse1(p2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_1, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names27, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner799576941_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r4_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner799576941/0: expected 0, got %d", NCAPTURES);

  // sym = ldf substitute
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_1;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r4 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_2;
  goto L0_;

L2_:;
  // r2 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner799576941_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse2_1;
  SEXP Rsh_Fir_reg_p4_2;
  SEXP Rsh_Fir_reg_r12_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner799576941/0: expected 0, got %d", NCAPTURES);

  // deparse2 = ldf deparse1
  Rsh_Fir_reg_deparse2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf substitute;
  //   base1 = ldf substitute in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   substitute1 = ldf substitute in base;
  //   r10 = dyn substitute1(<sym y>);
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base1(<sym y>);
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p4_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner799576941_5, 0, NULL, CCP, RHO);
  // r12 = dyn deparse2(p4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p4_2;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse2_1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names30, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_1;
}
SEXP Rsh_Fir_user_promise_inner799576941_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_2;
  SEXP Rsh_Fir_reg_base1_2;
  SEXP Rsh_Fir_reg_guard1_2;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_substitute1_;
  SEXP Rsh_Fir_reg_r10_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner799576941/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym1_2;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base1_2;
  Rsh_Fir_reg_guard1_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_1;

L1_:;
  // substitute1 = ldf substitute in base
  Rsh_Fir_reg_substitute1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r10 = dyn substitute1(<sym y>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r10_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_2;
  goto L0_;

L2_:;
  // r8 = dyn base1(<sym y>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_2, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
