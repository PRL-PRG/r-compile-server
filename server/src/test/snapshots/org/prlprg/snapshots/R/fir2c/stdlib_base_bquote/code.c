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
SEXP Rsh_Fir_user_function_inner2350075967_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2350075967_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2350075967_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2350075967_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3708401697_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3708401697_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner19256846_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner19256846_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner19256846_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner19256846_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_bquote;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_bquote1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_bquote3_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_bquote4_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r37_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2350075967
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2350075967_, RHO, CCP);
  // st bquote = r
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
  // st a = 2.0
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // bquote = ldf bquote
  Rsh_Fir_reg_bquote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L4_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
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
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
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
  // check L7() else D1()
  // L7()
  goto L7_;

L8_:;
  // p1 = prom<V +>{
  //   a = ld a;
  //   a1 = force? a;
  //   checkMissing(a1);
  //   a2 = ld a;
  //   a3 = force? a2;
  //   checkMissing(a3);
  //   r5 = `==`(a1, a3);
  //   return r5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn bquote(p1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bquote, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0()
  // L0()
  goto L0_;

L9_:;
  // sym1 = ldf quote
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf quote in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L1_:;
  // bquote1 = ldf bquote
  Rsh_Fir_reg_bquote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L10_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r10 = dyn quote(<lang `==`(a, a)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L11_:;
  // r8 = dyn base1(<lang `==`(a, a)>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   a4 = ld a;
  //   a5 = force? a4;
  //   checkMissing(a5);
  //   __ = ldf `.`;
  //   p2 = prom<V +>{
  //     a6 = ld a;
  //     a7 = force? a6;
  //     checkMissing(a7);
  //     return a7;
  //   };
  //   r12 = dyn __(p2);
  //   r13 = `==`(a5, r12);
  //   return r13;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r15 = dyn bquote1(p3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bquote1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 21 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // sym2 = ldf substitute
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf substitute in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L2_:;
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L14_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r18 = dyn substitute(<lang `==`(a, A)>, <lang list(A=a)>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

L15_:;
  // r16 = dyn base2(<lang `==`(a, A)>, <lang list(A=a)>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p4 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   a8 = ld a;
  //   a9 = force? a8;
  //   checkMissing(a9);
  //   r20 = `*`(a9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
  //   return r20;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   bquote2 = ldf bquote;
  //   p7 = prom<V +>{
  //     a10 = ld a;
  //     a11 = force? a10;
  //     checkMissing(a11);
  //     __1 = ldf `.`;
  //     p6 = prom<V +>{
  //       a12 = ld a;
  //       a13 = force? a12;
  //       checkMissing(a13);
  //       return a13;
  //     };
  //     r23 = dyn __1(p6);
  //     r24 = `==`(a11, r23);
  //     return r24;
  //   };
  //   r26 = dyn bquote2(p7);
  //   return r26;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r28 = dyn plot[, , main](p4, p5, p8)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 31 [r28]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // st default = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_const(CCP, 14), RHO);
  (void)(Rsh_const(CCP, 14));
  // bquote3 = ldf bquote
  Rsh_Fir_reg_bquote3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

D8_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p9 = prom<V +>{
  //   r29 = clos inner19256846;
  //   return r29;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r31 = dyn bquote3(p9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bquote3_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

D9_:;
  // deopt 38 [r31]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // sym3 = ldf expression
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf expression in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard3 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L3_:;
  // st exprs = r33
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // bquote4 = ldf bquote
  Rsh_Fir_reg_bquote4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

L20_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r34 = dyn expression(<lang `<-`(x, 1.0)>, <lang `<-`(y, 2.0)>, <lang `+`(x, y)>)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r34)
  // L3(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L3_;

L21_:;
  // r32 = dyn base3(<lang `<-`(x, 1.0)>, <lang `<-`(y, 2.0)>, <lang `+`(x, y)>)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3(r32)
  // L3(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L3_;

D10_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p10 = prom<V +>{
  //   r35 = clos inner2708337952;
  //   return r35;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r37 = dyn bquote4[, splice](p10, TRUE)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bquote4_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

D11_:;
  // deopt 48 [r37]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
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
  SEXP Rsh_Fir_reg_a;
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_a2_;
  SEXP Rsh_Fir_reg_a3_;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // a2 = ld a
  Rsh_Fir_reg_a2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // a3 = force? a2
  Rsh_Fir_reg_a3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a2_);
  // checkMissing(a3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_a3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // r5 = `==`(a1, a3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_a3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args6);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_a4_;
  SEXP Rsh_Fir_reg_a5_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // a4 = ld a
  Rsh_Fir_reg_a4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // a5 = force? a4
  Rsh_Fir_reg_a5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a4_);
  // checkMissing(a5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_a5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // __ = ldf `.`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p2 = prom<V +>{
  //   a6 = ld a;
  //   a7 = force? a6;
  //   checkMissing(a7);
  //   return a7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r12 = dyn __(p2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // r13 = `==`(a5, r12)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_a5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args14);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_a6_;
  SEXP Rsh_Fir_reg_a7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // a6 = ld a
  Rsh_Fir_reg_a6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // a7 = force? a6
  Rsh_Fir_reg_a7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a6_);
  // checkMissing(a7)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_a7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return a7
  return Rsh_Fir_reg_a7_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 12);
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_a8_;
  SEXP Rsh_Fir_reg_a9_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // a8 = ld a
  Rsh_Fir_reg_a8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // a9 = force? a8
  Rsh_Fir_reg_a9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a8_);
  // checkMissing(a9)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_a9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r20 = `*`(a9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_a9_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args20);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bquote2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bquote2 = ldf bquote
  Rsh_Fir_reg_bquote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p7 = prom<V +>{
  //   a10 = ld a;
  //   a11 = force? a10;
  //   checkMissing(a11);
  //   __1 = ldf `.`;
  //   p6 = prom<V +>{
  //     a12 = ld a;
  //     a13 = force? a12;
  //     checkMissing(a13);
  //     return a13;
  //   };
  //   r23 = dyn __1(p6);
  //   r24 = `==`(a11, r23);
  //   return r24;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r26 = dyn bquote2(p7)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bquote2_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_a10_;
  SEXP Rsh_Fir_reg_a11_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // a10 = ld a
  Rsh_Fir_reg_a10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // a11 = force? a10
  Rsh_Fir_reg_a11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a10_);
  // checkMissing(a11)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_a11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // __1 = ldf `.`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p6 = prom<V +>{
  //   a12 = ld a;
  //   a13 = force? a12;
  //   checkMissing(a13);
  //   return a13;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r23 = dyn __1(p6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // r24 = `==`(a11, r23)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_a11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args24);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_a12_;
  SEXP Rsh_Fir_reg_a13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // a12 = ld a
  Rsh_Fir_reg_a12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // a13 = force? a12
  Rsh_Fir_reg_a13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a12_);
  // checkMissing(a13)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_a13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return a13
  return Rsh_Fir_reg_a13_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r29 = clos inner19256846
  Rsh_Fir_reg_r29_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner19256846_, RHO, CCP);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r35 = clos inner2708337952
  Rsh_Fir_reg_r35_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // return r35
  return Rsh_Fir_reg_r35_;
}
SEXP Rsh_Fir_user_function_inner2350075967_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2350075967 dynamic dispatch ([expr, where, splice])

  return Rsh_Fir_user_version_inner2350075967_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2350075967_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2350075967 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2350075967/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_expr;
  SEXP Rsh_Fir_reg_where;
  SEXP Rsh_Fir_reg_splice;
  SEXP Rsh_Fir_reg_where_isMissing;
  SEXP Rsh_Fir_reg_where_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_splice_isMissing;
  SEXP Rsh_Fir_reg_splice_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_where1_;
  SEXP Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_reg_is_environment;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_where3_;
  SEXP Rsh_Fir_reg_where4_;
  SEXP Rsh_Fir_reg_as_environment;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_unquote;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r17_;

  // Bind parameters
  Rsh_Fir_reg_expr = PARAMS[0];
  Rsh_Fir_reg_where = PARAMS[1];
  Rsh_Fir_reg_splice = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args32);
  // if where_isMissing then L0() else L1(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2350075967_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // splice_isMissing = missing.0(splice)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_splice;
  Rsh_Fir_reg_splice_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args33);
  // if splice_isMissing then L2(FALSE) else L2(splice)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_splice_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_splice_orDefault = Rsh_const(CCP, 26);
    goto L2_;
  } else {
  // L2(splice)
    Rsh_Fir_reg_splice_orDefault = Rsh_Fir_reg_splice;
    goto L2_;
  }

L2_:;
  // st splice = splice_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_splice_orDefault, RHO);
  (void)(Rsh_Fir_reg_splice_orDefault);
  // sym = ldf `is.environment`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `is.environment` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L3_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args35);
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c then L11() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L4()
    goto L4_;
  }

L7_:;
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r2 = dyn base(<sym where>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D0_:;
  // deopt 2 [where1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // r10 = clos inner3708401697
  Rsh_Fir_reg_r10_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // st unquote = r10
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // r11 = clos inner3708401697
  Rsh_Fir_reg_r11_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // st `is.splice.macro` = r11
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // r12 = clos inner3708401697
  Rsh_Fir_reg_r12_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // st `unquote.list` = r12
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r12_1, RHO);
  (void)(Rsh_Fir_reg_r12_1);
  // unquote = ldf unquote
  Rsh_Fir_reg_unquote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L9_:;
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // is_environment = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r4 = dyn is_environment(where2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L11_:;
  // sym1 = ldf `as.environment`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf `as.environment` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // st where = r7
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // goto L6()
  // L6()
  goto L6_;

L10_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_1;
  goto L3_;

L12_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r6 = dyn base1(<sym where>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_;
  goto L5_;

L17_:;
  // p1 = prom<V +>{
  //   sym2 = ldf substitute;
  //   base2 = ldf substitute in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   substitute = ldf substitute in base;
  //   r15 = dyn substitute(<sym expr>);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base2(<sym expr>);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2350075967_1, 0, NULL, CCP, RHO);
  // r17 = dyn unquote(p1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unquote, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D2_:;
  // deopt 9 [where3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 28 [r17]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L14_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r8 = dyn as_environment(where4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_where4_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;

D3_:;
  // deopt 12 [r8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_1;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner2350075967_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2350075967/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2350075967_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_substitute1;
  SEXP Rsh_Fir_reg_r15_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2350075967/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf substitute
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf substitute in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r15 = dyn substitute(<sym expr>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_1;
  goto L0_;

L2_:;
  // r13 = dyn base2(<sym expr>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_1;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_e;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_reg_is_pairlist;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_as_pairlist;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r7_2;
  SEXP Rsh_Fir_reg_sym1_2;
  SEXP Rsh_Fir_reg_base1_2;
  SEXP Rsh_Fir_reg_guard1_2;
  SEXP Rsh_Fir_reg_r8_2;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_e5_;
  SEXP Rsh_Fir_reg_e6_;
  SEXP Rsh_Fir_reg_is_call;
  SEXP Rsh_Fir_reg_r10_2;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym2_2;
  SEXP Rsh_Fir_reg_base2_2;
  SEXP Rsh_Fir_reg_guard2_2;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_2;
  SEXP Rsh_Fir_reg_e7_;
  SEXP Rsh_Fir_reg_e8_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_e10_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r13_2;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r15_2;
  SEXP Rsh_Fir_reg_e11_;
  SEXP Rsh_Fir_reg_e12_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_e14_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_splice1;
  SEXP Rsh_Fir_reg_splice1_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_e19_;
  SEXP Rsh_Fir_reg_e20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_e22_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_e23_;
  SEXP Rsh_Fir_reg_e24_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_e26_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r32_1;
  SEXP Rsh_Fir_reg_r33_1;
  SEXP Rsh_Fir_reg_unquote_list;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_reg_as_call;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r37_1;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_lapply1_;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_as_call1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_e31_;
  SEXP Rsh_Fir_reg_e32_;

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // sym = ldf `is.pairlist`
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base = ldf `is.pairlist` in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // if c then L23() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L23()
    goto L23_;
  } else {
  // L1()
    goto L1_;
  }

L19_:;
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

L20_:;
  // r = dyn base(<sym e>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [e1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_e1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L1_:;
  // sym1 = ldf `is.call`
  Rsh_Fir_reg_sym1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base1 = ldf `is.call` in base
  Rsh_Fir_reg_base1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym1_2;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base1_2;
  Rsh_Fir_reg_guard1_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_2)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L21_:;
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // is_pairlist = ldf `is.pairlist` in base
  Rsh_Fir_reg_is_pairlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r2 = dyn is_pairlist(e2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_pairlist, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

L23_:;
  // as_pairlist = ldf `as.pairlist`
  Rsh_Fir_reg_as_pairlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L24() else D2()
  // L24()
  goto L24_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // if c1 then L31() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L3()
    goto L3_;
  }

L22_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L24_:;
  // p2 = prom<V +>{
  //   lapply = ldf lapply;
  //   p = prom<V +>{
  //     e3 = ld e;
  //     e4 = force? e3;
  //     checkMissing(e4);
  //     return e4;
  //   };
  //   p1 = prom<V +>{
  //     unquote = ld unquote;
  //     unquote1 = force? unquote;
  //     checkMissing(unquote1);
  //     return unquote1;
  //   };
  //   r5 = dyn lapply(p, p1);
  //   return r5;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, 0, NULL, CCP, RHO);
  // r7 = dyn as_pairlist(p2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r7_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_pairlist, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

L27_:;
  // e5 = ld e
  Rsh_Fir_reg_e5_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L28_:;
  // r8 = dyn base1(<sym e>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r8_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_2, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_2;
  goto L2_;

D3_:;
  // deopt 9 [r7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r7_2;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 12 [e5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L3_:;
  // e31 = ld e
  Rsh_Fir_reg_e31_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L84() else D23()
  // L84()
  goto L84_;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_2;

L29_:;
  // e6 = force? e5
  Rsh_Fir_reg_e6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e5_);
  // checkMissing(e6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_e6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // is_call = ldf `is.call` in base
  Rsh_Fir_reg_is_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r10 = dyn is_call(e6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_e6_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r10_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_call, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

L31_:;
  // sym2 = ldf `is.name`
  Rsh_Fir_reg_sym2_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base2 = ldf `is.name` in base
  Rsh_Fir_reg_base2_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym2_2;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base2_2;
  Rsh_Fir_reg_guard2_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard2 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_2)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

D5_:;
  // deopt 15 [r10]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r10_2;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 84 [e31]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_e31_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L4_:;
  // c4 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r12_2;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c4 then L38() else L6(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L6(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L6_;
  }

L30_:;
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_2;
  goto L2_;

L32_:;
  // e7 = ld e
  Rsh_Fir_reg_e7_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

L33_:;
  // r11 = dyn base2(<lang `[[`(e, 1)>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_2, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r12_2 = Rsh_Fir_reg_r11_1;
  goto L4_;

L84_:;
  // e32 = force? e31
  Rsh_Fir_reg_e32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e31_);
  // checkMissing(e32)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_e32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return e32
  return Rsh_Fir_reg_e32_;

D6_:;
  // deopt 17 [e7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_e7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L6_:;
  // c18 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // if c18 then L47() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L47()
    goto L47_;
  } else {
  // L9()
    goto L9_;
  }

L34_:;
  // e8 = force? e7
  Rsh_Fir_reg_e8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e7_);
  // checkMissing(e8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_e8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(e8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_e8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args68);
  // if c2 then L35() else L36(e8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L35()
    goto L35_;
  } else {
  // L36(e8)
    Rsh_Fir_reg_e10_ = Rsh_Fir_reg_e8_;
    goto L36_;
  }

L38_:;
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard3 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L5_:;
  // c3 = `is.symbol`(dx1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(390, RHO, 1, Rsh_Fir_array_args70);
  // goto L4(c3)
  // L4(c3)
  Rsh_Fir_reg_r12_2 = Rsh_Fir_reg_c3_;
  goto L4_;

L7_:;
  // r18 = `==`(r15, ".")
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r15_2;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args71);
  // c15 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // c16 = `&&`(c9, c15)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args73);
  // goto L6(c16)
  // L6(c16)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c16_;
  goto L6_;

L9_:;
  // splice = ld splice
  Rsh_Fir_reg_splice1 = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

L35_:;
  // dr = tryDispatchBuiltin.1("[[", e8)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_e8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr)
    Rsh_Fir_reg_e10_ = Rsh_Fir_reg_dr;
    goto L36_;
  }

L36_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r13 = dyn __(e10, 1)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_e10_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r13_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_2;
  goto L5_;

L39_:;
  // e11 = ld e
  Rsh_Fir_reg_e11_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

L40_:;
  // r14 = dyn base3(<lang `[[`(e, 1.0)>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L7(c4, r14)
  // L7(c4, r14)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r15_2 = Rsh_Fir_reg_r14_1;
  goto L7_;

L47_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

D7_:;
  // deopt 25 [c4, e11]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_e11_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 40 [splice]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_splice1;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L41_:;
  // e12 = force? e11
  Rsh_Fir_reg_e12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e11_);
  // checkMissing(e12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_e12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(e12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_e12_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args80);
  // if c10 then L42() else L43(c4, e12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L42()
    goto L42_;
  } else {
  // L43(c4, e12)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c4_;
    Rsh_Fir_reg_e14_ = Rsh_Fir_reg_e12_;
    goto L43_;
  }

L48_:;
  // p3 = prom<V +>{
  //   e15 = ld e;
  //   e16 = force? e15;
  //   checkMissing(e16);
  //   c19 = `is.object`(e16);
  //   if c19 then L1() else L2(e16);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", e16);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(e18):
  //   __2 = ldf `[[` in base;
  //   r19 = dyn __2(e18, 2);
  //   goto L0(r19);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   where = ld where;
  //   where1 = force? where;
  //   checkMissing(where1);
  //   return where1;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_4, 0, NULL, CCP, RHO);
  // r22 = dyn eval(p3, p4)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L49() else D10()
  // L49()
  goto L49_;

L51_:;
  // splice1 = force? splice
  Rsh_Fir_reg_splice1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_splice1);
  // checkMissing(splice1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_splice1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c20 = `as.logical`(splice1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_splice1_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c20 then L52() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L52()
    goto L52_;
  } else {
  // L10()
    goto L10_;
  }

D10_:;
  // deopt 39 [r22]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L8_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r17 = dyn as_character(dx3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

L10_:;
  // sym7 = ldf `as.call`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base7 = ldf `as.call` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard7 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L42_:;
  // dr2 = tryDispatchBuiltin.1("[[", e12)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_e12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc1 then L44() else L43(c4, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L44()
    goto L44_;
  } else {
  // L43(c4, dr2)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c4_;
    Rsh_Fir_reg_e14_ = Rsh_Fir_reg_dr2_;
    goto L43_;
  }

L43_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r16 = dyn __1(e14, 1.0)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_e14_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L8(c12, r16)
  // L8(c12, r16)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_1;
  goto L8_;

L49_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;

L52_:;
  // sym4 = ldf `is.name`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base4 = ldf `is.name` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard4 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

D8_:;
  // deopt 31 [c14, r17]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L11_:;
  // c23 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args97);
  // if c23 then L59() else L13(c23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L59()
    goto L59_;
  } else {
  // L13(c23)
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c23_;
    goto L13_;
  }

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;

L44_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L8(c4, dx2)
  // L8(c4, dx2)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L45_:;
  // goto L7(c14, r17)
  // L7(c14, r17)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r15_2 = Rsh_Fir_reg_r17_1;
  goto L7_;

L53_:;
  // e19 = ld e
  Rsh_Fir_reg_e19_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L55() else D12()
  // L55()
  goto L55_;

L54_:;
  // r23 = dyn base4(<lang `[[`(e, 1)>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_r23_1;
  goto L11_;

L78_:;
  // lapply1 = ldf lapply
  Rsh_Fir_reg_lapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L80() else D20()
  // L80()
  goto L80_;

L79_:;
  // r37 = dyn base7(<lang lapply(e, unquote)>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r37_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L18(r37)
  // L18(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_1;
  goto L18_;

D12_:;
  // deopt 43 [e19]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_e19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // c37 = `as.logical`(c25)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args101);
  // if c37 then L68() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L68()
    goto L68_;
  } else {
  // L16()
    goto L16_;
  }

L55_:;
  // e20 = force? e19
  Rsh_Fir_reg_e20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e19_);
  // checkMissing(e20)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_e20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(e20)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_e20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args103);
  // if c21 then L56() else L57(e20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L56()
    goto L56_;
  } else {
  // L57(e20)
    Rsh_Fir_reg_e22_ = Rsh_Fir_reg_e20_;
    goto L57_;
  }

L59_:;
  // sym5 = ldf `as.character`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base5 = ldf `as.character` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard5 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L80_:;
  // p6 = prom<V +>{
  //   e29 = ld e;
  //   e30 = force? e29;
  //   checkMissing(e30);
  //   return e30;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_5, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   unquote2 = ld unquote;
  //   unquote3 = force? unquote2;
  //   checkMissing(unquote3);
  //   return unquote3;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_6, 0, NULL, CCP, RHO);
  // r41 = dyn lapply1(p6, p7)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L81() else D21()
  // L81()
  goto L81_;

D21_:;
  // deopt 81 [r41]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L12_:;
  // c22 = `is.symbol`(dx7)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(390, RHO, 1, Rsh_Fir_array_args108);
  // goto L11(c22)
  // L11(c22)
  Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_c22_;
  goto L11_;

L14_:;
  // r30 = `==`(r27, "..")
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args109);
  // c34 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args110);
  // c35 = `&&`(c28, c34)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args111);
  // goto L13(c35)
  // L13(c35)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c35_;
  goto L13_;

L16_:;
  // sym6 = ldf `as.call`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base6 = ldf `as.call` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard6 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L56_:;
  // dr6 = tryDispatchBuiltin.1("[[", e20)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_e20_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc3 then L58() else L57(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr6)
    Rsh_Fir_reg_e22_ = Rsh_Fir_reg_dr6_;
    goto L57_;
  }

L57_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r25 = dyn __3(e22, 1)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_e22_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r25_;
  goto L12_;

L60_:;
  // e23 = ld e
  Rsh_Fir_reg_e23_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L62() else D13()
  // L62()
  goto L62_;

L61_:;
  // r26 = dyn base5(<lang `[[`(e, 1)>)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L14(c23, r26)
  // L14(c23, r26)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_1;
  goto L14_;

L68_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L69() else D15()
  // L69()
  goto L69_;

L81_:;
  // as_call1 = ldf `as.call` in base
  Rsh_Fir_reg_as_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r42 = dyn as_call1(r41)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_call1_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L82() else D22()
  // L82()
  goto L82_;

D13_:;
  // deopt 51 [c23, e23]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_e23_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 83 [r42]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_1;

L58_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L12(dx6)
  // L12(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L12_;

L62_:;
  // e24 = force? e23
  Rsh_Fir_reg_e24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e23_);
  // checkMissing(e24)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_e24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(e24)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_e24_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args120);
  // if c29 then L63() else L64(c23, e24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L63()
    goto L63_;
  } else {
  // L64(c23, e24)
    Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_e26_ = Rsh_Fir_reg_e24_;
    goto L64_;
  }

L69_:;
  // r31 = dyn stop[, `call.`]("can only splice inside a call", FALSE)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L70() else D16()
  // L70()
  goto L70_;

L72_:;
  // unquote_list = ldf `unquote.list`
  Rsh_Fir_reg_unquote_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L74() else D17()
  // L74()
  goto L74_;

L73_:;
  // r32 = dyn base6(<lang unquote.list(e)>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r32_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L17(r32)
  // L17(r32)
  Rsh_Fir_reg_r33_1 = Rsh_Fir_reg_r32_1;
  goto L17_;

L82_:;
  // goto L18(r42)
  // L18(r42)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r42_;
  goto L18_;

D16_:;
  // deopt 66 [r31]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r29 = dyn as_character1(dx9)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L66() else D14()
  // L66()
  goto L66_;

L63_:;
  // dr8 = tryDispatchBuiltin.1("[[", e24)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_e24_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args124);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc4 then L65() else L64(c23, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L65()
    goto L65_;
  } else {
  // L64(c23, dr8)
    Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_e26_ = Rsh_Fir_reg_dr8_;
    goto L64_;
  }

L64_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r28 = dyn __4(e26, 1)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_e26_;
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L15(c31, r28)
  // L15(c31, r28)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r28_1;
  goto L15_;

L70_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_1;

L74_:;
  // p5 = prom<V +>{
  //   e27 = ld e;
  //   e28 = force? e27;
  //   checkMissing(e28);
  //   return e28;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_7, 0, NULL, CCP, RHO);
  // r35 = dyn unquote_list(p5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r35_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unquote_list, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L75() else D18()
  // L75()
  goto L75_;

D14_:;
  // deopt 57 [c33, r29]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 72 [r35]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r35_1;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L65_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L15(c23, dx8)
  // L15(c23, dx8)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L15_;

L66_:;
  // goto L14(c33, r29)
  // L14(c33, r29)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r29_1;
  goto L14_;

L75_:;
  // as_call = ldf `as.call` in base
  Rsh_Fir_reg_as_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r36 = dyn as_call(r35)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_call, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L76() else D19()
  // L76()
  goto L76_;

D19_:;
  // deopt 74 [r36]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L17(r36)
  // L17(r36)
  Rsh_Fir_reg_r33_1 = Rsh_Fir_reg_r36_;
  goto L17_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lapply;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_r5_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p = prom<V +>{
  //   e3 = ld e;
  //   e4 = force? e3;
  //   checkMissing(e4);
  //   return e4;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_1, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   unquote = ld unquote;
  //   unquote1 = force? unquote;
  //   checkMissing(unquote1);
  //   return unquote1;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_2, 0, NULL, CCP, RHO);
  // r5 = dyn lapply(p, p1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_2;
}
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e3_;
  SEXP Rsh_Fir_reg_e4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // e3 = ld e
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return e4
  return Rsh_Fir_reg_e4_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_unquote1;
  SEXP Rsh_Fir_reg_unquote1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // unquote = ld unquote
  Rsh_Fir_reg_unquote1 = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // unquote1 = force? unquote
  Rsh_Fir_reg_unquote1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unquote1);
  // checkMissing(unquote1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_unquote1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return unquote1
  return Rsh_Fir_reg_unquote1_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e15_;
  SEXP Rsh_Fir_reg_e16_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_e18_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // e15 = ld e
  Rsh_Fir_reg_e15_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // e16 = force? e15
  Rsh_Fir_reg_e16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e15_);
  // checkMissing(e16)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_e16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(e16)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_e16_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args82);
  // if c19 then L1() else L2(e16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L1()
    goto L1_;
  } else {
  // L2(e16)
    Rsh_Fir_reg_e18_ = Rsh_Fir_reg_e16_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", e16)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_e16_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_e18_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r19 = dyn __2(e18, 2)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_e18_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where1;
  SEXP Rsh_Fir_reg_where1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // where = ld where
  Rsh_Fir_reg_where1 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // where1 = force? where
  Rsh_Fir_reg_where1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1);
  // checkMissing(where1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_where1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return where1
  return Rsh_Fir_reg_where1_1;
}
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e29_;
  SEXP Rsh_Fir_reg_e30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // e29 = ld e
  Rsh_Fir_reg_e29_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // e30 = force? e29
  Rsh_Fir_reg_e30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e29_);
  // checkMissing(e30)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_e30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return e30
  return Rsh_Fir_reg_e30_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_unquote2_;
  SEXP Rsh_Fir_reg_unquote3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // unquote2 = ld unquote
  Rsh_Fir_reg_unquote2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // unquote3 = force? unquote2
  Rsh_Fir_reg_unquote3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unquote2_);
  // checkMissing(unquote3)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_unquote3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return unquote3
  return Rsh_Fir_reg_unquote3_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e27_;
  SEXP Rsh_Fir_reg_e28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3708401697/0: expected 0, got %d", NCAPTURES);

  // e27 = ld e
  Rsh_Fir_reg_e27_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // e28 = force? e27
  Rsh_Fir_reg_e28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e27_);
  // checkMissing(e28)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_e28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // return e28
  return Rsh_Fir_reg_e28_;
}
SEXP Rsh_Fir_user_function_inner19256846_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner19256846 dynamic dispatch ([x, y])

  return Rsh_Fir_user_version_inner19256846_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner19256846_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner19256846 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner19256846/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y_isMissing;
  SEXP Rsh_Fir_reg_y_orDefault;
  SEXP Rsh_Fir_reg_p1_3;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_r3_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args131);
  // if y_isMissing then L0() else L1(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L1_;
  }

L0_:;
  // p1 = prom<V +>{
  //   __ = ldf `.`;
  //   p = prom<V +>{
  //     default = ld default;
  //     default1 = force? default;
  //     checkMissing(default1);
  //     return default1;
  //   };
  //   r1 = dyn __(p);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_3 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner19256846_, 0, NULL, CCP, RHO);
  // goto L1(p1)
  // L1(p1)
  Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_p1_3;
  goto L1_;

L1_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L2_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 1 [x2, y1]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L3_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // r3 = `+`(x2, y2)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args136);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner19256846_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2;
  SEXP Rsh_Fir_reg_p3;
  SEXP Rsh_Fir_reg_r1_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner19256846/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `.`
  Rsh_Fir_reg___2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p = prom<V +>{
  //   default = ld default;
  //   default1 = force? default;
  //   checkMissing(default1);
  //   return default1;
  // }
  Rsh_Fir_reg_p3 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner19256846_1, 0, NULL, CCP, RHO);
  // r1 = dyn __(p)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_p3;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names48, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_2;
}
SEXP Rsh_Fir_user_promise_inner19256846_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_default;
  SEXP Rsh_Fir_reg_default1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner19256846/0: expected 0, got %d", NCAPTURES);

  // default = ld default
  Rsh_Fir_reg_default = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // default1 = force? default
  Rsh_Fir_reg_default1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_default);
  // checkMissing(default1)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_default1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // return default1
  return Rsh_Fir_reg_default1_;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg___3;
  SEXP Rsh_Fir_reg_p4;
  SEXP Rsh_Fir_reg_r1_3;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // __ = ldf `..`
  Rsh_Fir_reg___3 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   exprs = ld exprs;
  //   exprs1 = force? exprs;
  //   checkMissing(exprs1);
  //   return exprs1;
  // }
  Rsh_Fir_reg_p4 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, 0, NULL, CCP, RHO);
  // r1 = dyn __(p)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_p4;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r1_3 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r1_3;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_3;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_exprs;
  SEXP Rsh_Fir_reg_exprs1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2708337952/0: expected 0, got %d", NCAPTURES);

  // exprs = ld exprs
  Rsh_Fir_reg_exprs = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // exprs1 = force? exprs
  Rsh_Fir_reg_exprs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs);
  // checkMissing(exprs1)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_exprs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // return exprs1
  return Rsh_Fir_reg_exprs1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
