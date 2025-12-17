#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2854634098_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2854634098_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2854634098_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2854634098_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2854634098
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2854634098_, RHO, CCP);
  // st `.get_urls_from_DESCRIPTION_Description_field` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner2854634098_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2854634098 dynamic dispatch ([v])

  return Rsh_Fir_user_version_inner2854634098_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2854634098_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2854634098 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2854634098/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_v;  // v
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_v1_;  // v1
  SEXP Rsh_Fir_reg_v2_;  // v2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_urls;  // urls
  SEXP Rsh_Fir_reg_urls1_;  // urls1
  SEXP Rsh_Fir_reg_gregexpr;  // gregexpr
  SEXP Rsh_Fir_reg_pattern;  // pattern
  SEXP Rsh_Fir_reg_pattern1_;  // pattern1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_v3_;  // v3
  SEXP Rsh_Fir_reg_v4_;  // v4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_urls2_;  // urls2
  SEXP Rsh_Fir_reg_urls3_;  // urls3
  SEXP Rsh_Fir_reg__gregexec_at_pos;  // _gregexec_at_pos
  SEXP Rsh_Fir_reg_pattern2_;  // pattern2
  SEXP Rsh_Fir_reg_pattern3_;  // pattern3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_v5_;  // v5
  SEXP Rsh_Fir_reg_v6_;  // v6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_regmatches__;  // regmatches__
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_gregexpr1_;  // gregexpr1
  SEXP Rsh_Fir_reg_pattern4_;  // pattern4
  SEXP Rsh_Fir_reg_pattern5_;  // pattern5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_v7_;  // v7
  SEXP Rsh_Fir_reg_v8_;  // v8
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_urls4_;  // urls4
  SEXP Rsh_Fir_reg_urls5_;  // urls5
  SEXP Rsh_Fir_reg__gregexec_at_pos1_;  // _gregexec_at_pos1
  SEXP Rsh_Fir_reg_pattern6_;  // pattern6
  SEXP Rsh_Fir_reg_pattern7_;  // pattern7
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_v9_;  // v9
  SEXP Rsh_Fir_reg_v10_;  // v10
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_regmatches__1_;  // regmatches__1
  SEXP Rsh_Fir_reg_m6_;  // m6
  SEXP Rsh_Fir_reg_m7_;  // m7
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_gregexpr2_;  // gregexpr2
  SEXP Rsh_Fir_reg_pattern8_;  // pattern8
  SEXP Rsh_Fir_reg_pattern9_;  // pattern9
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_v11_;  // v11
  SEXP Rsh_Fir_reg_v12_;  // v12
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_urls6_;  // urls6
  SEXP Rsh_Fir_reg_urls7_;  // urls7
  SEXP Rsh_Fir_reg__gregexec_at_pos2_;  // _gregexec_at_pos2
  SEXP Rsh_Fir_reg_pattern10_;  // pattern10
  SEXP Rsh_Fir_reg_pattern11_;  // pattern11
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_v13_;  // v13
  SEXP Rsh_Fir_reg_v14_;  // v14
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_m8_;  // m8
  SEXP Rsh_Fir_reg_m9_;  // m9
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_urls8_;  // urls8
  SEXP Rsh_Fir_reg_urls9_;  // urls9

  // Bind parameters
  Rsh_Fir_reg_v = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st v = v
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_v, RHO);
  (void)(Rsh_Fir_reg_v);
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L0_:;
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L12() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // st pattern = "<(URL: *)?((https?|ftp)://[^[:space:]]+)[[:space:]]*>"
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // gregexpr = ldf gregexpr
  Rsh_Fir_reg_gregexpr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L3_:;
  // st urls = r10
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // l = ld v
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // regmatches__ = ldf `regmatches<-`
  Rsh_Fir_reg_regmatches__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L24() else D11()
  // L24()
  goto L24_;

L4_:;
  // st urls = r22
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // l1 = ld v
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // regmatches__1 = ldf `regmatches<-`
  Rsh_Fir_reg_regmatches__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L34() else D19()
  // L34()
  goto L34_;

L5_:;
  // st urls = r34
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // urls8 = ld urls
  Rsh_Fir_reg_urls8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L44() else D27()
  // L44()
  goto L44_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // st urls = r
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // v1 = ld v
  Rsh_Fir_reg_v1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r1 = dyn base(<sym v>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D2_:;
  // deopt 6 [v1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_v1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // v2 = force? v1
  Rsh_Fir_reg_v2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v1_);
  // checkMissing(v2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_v2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r3 = dyn is_na(v2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_v2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L12_:;
  // urls = ld urls
  Rsh_Fir_reg_urls = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 10 [urls]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_urls;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // urls1 = force? urls
  Rsh_Fir_reg_urls1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_urls);
  // checkMissing(urls1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_urls1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return urls1
  return Rsh_Fir_reg_urls1_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   pattern = ld pattern;
  //   pattern1 = force? pattern;
  //   checkMissing(pattern1);
  //   return pattern1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_, CCP, RHO);
  // p1 = prom<V +>{
  //   v3 = ld v;
  //   v4 = force? v3;
  //   checkMissing(v4);
  //   return v4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_1, CCP, RHO);
  // r8 = dyn gregexpr(p, p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gregexpr, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 22 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // st m = r8
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // urls2 = ld urls
  Rsh_Fir_reg_urls2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

L19_:;
  // r9 = dyn base1(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 3)>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L3_;

D7_:;
  // deopt 26 [urls2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_urls2_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // urls3 = force? urls2
  Rsh_Fir_reg_urls3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_urls2_);
  // checkMissing(urls3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_urls3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // _gregexec_at_pos = ldf `.gregexec_at_pos`
  Rsh_Fir_reg__gregexec_at_pos = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p2 = prom<V +>{
  //   pattern2 = ld pattern;
  //   pattern3 = force? pattern2;
  //   checkMissing(pattern3);
  //   return pattern3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_2, CCP, RHO);
  // p3 = prom<V +>{
  //   v5 = ld v;
  //   v6 = force? v5;
  //   checkMissing(v6);
  //   return v6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_3, CCP, RHO);
  // p4 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_4, CCP, RHO);
  // r14 = dyn _gregexec_at_pos(p2, p3, p4, 3)
  SEXP Rsh_Fir_array_args15[4];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__gregexec_at_pos, 4, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 34 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r15 = dyn c1(urls3, r14)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_urls3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r15_;
  goto L3_;

D11_:;
  // deopt 41 ["", l, ""]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_const(CCP, 14);
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L24_:;
  // p5 = prom<V +>{
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   return m3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_5, CCP, RHO);
  // r17 = dyn regmatches__(l, NULL, p5, "")
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regmatches__, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L25() else D12()
  // L25()
  goto L25_;

D12_:;
  // deopt 44 ["", r17]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L25_:;
  // st v = r17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // st pattern = "([^>\"?])((https?|ftp)://[[:alnum:]/.:@+\\_~%#?=&;,-]+[[:alnum:]/])"
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 16), RHO);
  (void)(Rsh_const(CCP, 16));
  // gregexpr1 = ldf gregexpr
  Rsh_Fir_reg_gregexpr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L26() else D13()
  // L26()
  goto L26_;

D13_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p6 = prom<V +>{
  //   pattern4 = ld pattern;
  //   pattern5 = force? pattern4;
  //   checkMissing(pattern5);
  //   return pattern5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_6, CCP, RHO);
  // p7 = prom<V +>{
  //   v7 = ld v;
  //   v8 = force? v7;
  //   checkMissing(v8);
  //   return v8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_7, CCP, RHO);
  // r20 = dyn gregexpr1(p6, p7)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gregexpr1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L27() else D14()
  // L27()
  goto L27_;

D14_:;
  // deopt 53 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L27_:;
  // st m = r20
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // urls4 = ld urls
  Rsh_Fir_reg_urls4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L30() else D15()
  // L30()
  goto L30_;

L29_:;
  // r21 = dyn base2(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 3)>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r21)
  // L4(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L4_;

D15_:;
  // deopt 57 [urls4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_urls4_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L30_:;
  // urls5 = force? urls4
  Rsh_Fir_reg_urls5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_urls4_);
  // checkMissing(urls5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_urls5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // _gregexec_at_pos1 = ldf `.gregexec_at_pos`
  Rsh_Fir_reg__gregexec_at_pos1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L31() else D16()
  // L31()
  goto L31_;

D16_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p8 = prom<V +>{
  //   pattern6 = ld pattern;
  //   pattern7 = force? pattern6;
  //   checkMissing(pattern7);
  //   return pattern7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_8, CCP, RHO);
  // p9 = prom<V +>{
  //   v9 = ld v;
  //   v10 = force? v9;
  //   checkMissing(v10);
  //   return v10;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_9, CCP, RHO);
  // p10 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_10, CCP, RHO);
  // r26 = dyn _gregexec_at_pos1(p8, p9, p10, 3)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__gregexec_at_pos1_, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L32() else D17()
  // L32()
  goto L32_;

D17_:;
  // deopt 65 [r26]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L32_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r27 = dyn c2(urls5, r26)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_urls5_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L33() else D18()
  // L33()
  goto L33_;

D18_:;
  // deopt 67 [r27]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L4(r27)
  // L4(r27)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r27_;
  goto L4_;

D19_:;
  // deopt 72 ["", l1, ""]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 14);
  Rsh_Fir_deopt(72, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L34_:;
  // p11 = prom<V +>{
  //   m6 = ld m;
  //   m7 = force? m6;
  //   checkMissing(m7);
  //   return m7;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_11, CCP, RHO);
  // r29 = dyn regmatches__1(l1, NULL, p11, "")
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regmatches__1_, 4, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L35() else D20()
  // L35()
  goto L35_;

D20_:;
  // deopt 75 ["", r29]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L35_:;
  // st v = r29
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // st pattern = "<([A-Za-z][A-Za-z0-9.+-]*:[^>]+)>"
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 17), RHO);
  (void)(Rsh_const(CCP, 17));
  // gregexpr2 = ldf gregexpr
  Rsh_Fir_reg_gregexpr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L36() else D21()
  // L36()
  goto L36_;

D21_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p12 = prom<V +>{
  //   pattern8 = ld pattern;
  //   pattern9 = force? pattern8;
  //   checkMissing(pattern9);
  //   return pattern9;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_12, CCP, RHO);
  // p13 = prom<V +>{
  //   v11 = ld v;
  //   v12 = force? v11;
  //   checkMissing(v12);
  //   return v12;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_13, CCP, RHO);
  // r32 = dyn gregexpr2(p12, p13)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gregexpr2_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L37() else D22()
  // L37()
  goto L37_;

D22_:;
  // deopt 84 [r32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L37_:;
  // st m = r32
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // urls6 = ld urls
  Rsh_Fir_reg_urls6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L40() else D23()
  // L40()
  goto L40_;

L39_:;
  // r33 = dyn base3(<sym urls>, <lang .gregexec_at_pos(pattern, v, m, 2)>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r33)
  // L5(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L5_;

D23_:;
  // deopt 88 [urls6]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_urls6_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L40_:;
  // urls7 = force? urls6
  Rsh_Fir_reg_urls7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_urls6_);
  // checkMissing(urls7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_urls7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // _gregexec_at_pos2 = ldf `.gregexec_at_pos`
  Rsh_Fir_reg__gregexec_at_pos2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L41() else D24()
  // L41()
  goto L41_;

D24_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p14 = prom<V +>{
  //   pattern10 = ld pattern;
  //   pattern11 = force? pattern10;
  //   checkMissing(pattern11);
  //   return pattern11;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_14, CCP, RHO);
  // p15 = prom<V +>{
  //   v13 = ld v;
  //   v14 = force? v13;
  //   checkMissing(v14);
  //   return v14;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_15, CCP, RHO);
  // p16 = prom<V +>{
  //   m8 = ld m;
  //   m9 = force? m8;
  //   checkMissing(m9);
  //   return m9;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2854634098_16, CCP, RHO);
  // r38 = dyn _gregexec_at_pos2(p14, p15, p16, 2)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__gregexec_at_pos2_, 4, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L42() else D25()
  // L42()
  goto L42_;

D25_:;
  // deopt 96 [r38]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L42_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r39 = dyn c3(urls7, r38)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_urls7_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L43() else D26()
  // L43()
  goto L43_;

D26_:;
  // deopt 98 [r39]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L5(r39)
  // L5(r39)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r39_;
  goto L5_;

D27_:;
  // deopt 100 [urls8]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_urls8_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L44_:;
  // urls9 = force? urls8
  Rsh_Fir_reg_urls9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_urls8_);
  // checkMissing(urls9)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_urls9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return urls9
  return Rsh_Fir_reg_urls9_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_(SEXP CCP, SEXP RHO) {
  // pattern = ld pattern
  Rsh_Fir_reg_pattern = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern1 = force? pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern);
  // checkMissing(pattern1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_pattern1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return pattern1
  return Rsh_Fir_reg_pattern1_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_1(SEXP CCP, SEXP RHO) {
  // v3 = ld v
  Rsh_Fir_reg_v3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // v4 = force? v3
  Rsh_Fir_reg_v4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v3_);
  // checkMissing(v4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_v4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return v4
  return Rsh_Fir_reg_v4_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_2(SEXP CCP, SEXP RHO) {
  // pattern2 = ld pattern
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern3 = force? pattern2
  Rsh_Fir_reg_pattern3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern2_);
  // checkMissing(pattern3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_pattern3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return pattern3
  return Rsh_Fir_reg_pattern3_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_3(SEXP CCP, SEXP RHO) {
  // v5 = ld v
  Rsh_Fir_reg_v5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // v6 = force? v5
  Rsh_Fir_reg_v6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v5_);
  // checkMissing(v6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_v6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return v6
  return Rsh_Fir_reg_v6_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_4(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_5(SEXP CCP, SEXP RHO) {
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return m3
  return Rsh_Fir_reg_m3_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_6(SEXP CCP, SEXP RHO) {
  // pattern4 = ld pattern
  Rsh_Fir_reg_pattern4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern5 = force? pattern4
  Rsh_Fir_reg_pattern5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern4_);
  // checkMissing(pattern5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_pattern5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return pattern5
  return Rsh_Fir_reg_pattern5_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_7(SEXP CCP, SEXP RHO) {
  // v7 = ld v
  Rsh_Fir_reg_v7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // v8 = force? v7
  Rsh_Fir_reg_v8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v7_);
  // checkMissing(v8)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_v8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return v8
  return Rsh_Fir_reg_v8_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_8(SEXP CCP, SEXP RHO) {
  // pattern6 = ld pattern
  Rsh_Fir_reg_pattern6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern7 = force? pattern6
  Rsh_Fir_reg_pattern7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern6_);
  // checkMissing(pattern7)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_pattern7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return pattern7
  return Rsh_Fir_reg_pattern7_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_9(SEXP CCP, SEXP RHO) {
  // v9 = ld v
  Rsh_Fir_reg_v9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // v10 = force? v9
  Rsh_Fir_reg_v10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v9_);
  // checkMissing(v10)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_v10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return v10
  return Rsh_Fir_reg_v10_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_10(SEXP CCP, SEXP RHO) {
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_11(SEXP CCP, SEXP RHO) {
  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return m7
  return Rsh_Fir_reg_m7_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_12(SEXP CCP, SEXP RHO) {
  // pattern8 = ld pattern
  Rsh_Fir_reg_pattern8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern9 = force? pattern8
  Rsh_Fir_reg_pattern9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern8_);
  // checkMissing(pattern9)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_pattern9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return pattern9
  return Rsh_Fir_reg_pattern9_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_13(SEXP CCP, SEXP RHO) {
  // v11 = ld v
  Rsh_Fir_reg_v11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // v12 = force? v11
  Rsh_Fir_reg_v12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v11_);
  // checkMissing(v12)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_v12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return v12
  return Rsh_Fir_reg_v12_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_14(SEXP CCP, SEXP RHO) {
  // pattern10 = ld pattern
  Rsh_Fir_reg_pattern10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern11 = force? pattern10
  Rsh_Fir_reg_pattern11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern10_);
  // checkMissing(pattern11)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_pattern11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return pattern11
  return Rsh_Fir_reg_pattern11_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_15(SEXP CCP, SEXP RHO) {
  // v13 = ld v
  Rsh_Fir_reg_v13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // v14 = force? v13
  Rsh_Fir_reg_v14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v13_);
  // checkMissing(v14)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_v14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return v14
  return Rsh_Fir_reg_v14_;
}
SEXP Rsh_Fir_user_promise_inner2854634098_16(SEXP CCP, SEXP RHO) {
  // m8 = ld m
  Rsh_Fir_reg_m8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // m9 = force? m8
  Rsh_Fir_reg_m9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m8_);
  // checkMissing(m9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_m9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return m9
  return Rsh_Fir_reg_m9_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
