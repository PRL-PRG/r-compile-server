#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3421086882_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3421086882_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3421086882_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3421086882_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner3421086882
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3421086882_, RHO, CCP);
  // st findFuzzyMatches = r
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
SEXP Rsh_Fir_user_function_inner3421086882_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3421086882 dynamic dispatch ([pattern, values])

  return Rsh_Fir_user_version_inner3421086882_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3421086882_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3421086882 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3421086882/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_pattern;  // pattern
  SEXP Rsh_Fir_reg_values;  // values
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_rc_getOption;  // rc_getOption
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ffun;  // ffun
  SEXP Rsh_Fir_reg_pattern1_;  // pattern1
  SEXP Rsh_Fir_reg_pattern2_;  // pattern2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_values1_;  // values1
  SEXP Rsh_Fir_reg_values2_;  // values2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_findExactMatches;  // findExactMatches
  SEXP Rsh_Fir_reg_pattern3_;  // pattern3
  SEXP Rsh_Fir_reg_pattern4_;  // pattern4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_values3_;  // values3
  SEXP Rsh_Fir_reg_values4_;  // values4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_exact_matches;  // exact_matches
  SEXP Rsh_Fir_reg_exact_matches1_;  // exact_matches1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_pattern5_;  // pattern5
  SEXP Rsh_Fir_reg_pattern6_;  // pattern6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_gsub1_;  // gsub1
  SEXP Rsh_Fir_reg_normalizedPattern;  // normalizedPattern
  SEXP Rsh_Fir_reg_normalizedPattern1_;  // normalizedPattern1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_gsub2_;  // gsub2
  SEXP Rsh_Fir_reg_values5_;  // values5
  SEXP Rsh_Fir_reg_values6_;  // values6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_values7_;  // values7
  SEXP Rsh_Fir_reg_values8_;  // values8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_values10_;  // values10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_normalizedPattern2_;  // normalizedPattern2
  SEXP Rsh_Fir_reg_normalizedPattern3_;  // normalizedPattern3
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_normalizedValues;  // normalizedValues
  SEXP Rsh_Fir_reg_normalizedValues1_;  // normalizedValues1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_exact_matches2_;  // exact_matches2
  SEXP Rsh_Fir_reg_exact_matches3_;  // exact_matches3

  // Bind parameters
  Rsh_Fir_reg_pattern = PARAMS[0];
  Rsh_Fir_reg_values = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pattern = pattern
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_pattern, RHO);
  (void)(Rsh_Fir_reg_pattern);
  // st values = values
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_values, RHO);
  (void)(Rsh_Fir_reg_values);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L10() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // findExactMatches = ldf findExactMatches
  Rsh_Fir_reg_findExactMatches = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L3_:;
  // r15 = `==`(r13, 0.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L21() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L21()
    goto L21_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // exact_matches2 = ld `exact.matches`
  Rsh_Fir_reg_exact_matches2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L35() else D17()
  // L35()
  goto L35_;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L6_:;
  // rc_getOption = ldf `rc.getOption`
  Rsh_Fir_reg_rc_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<lang `<-`(ffun, rc.getOption("fuzzy.match.fun"))>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r2 = dyn rc_getOption("fuzzy.match.fun")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rc_getOption, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st ffun = r2
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // c = `==`(r2, NULL)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L10_:;
  // ffun = ldf ffun
  Rsh_Fir_reg_ffun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p = prom<V +>{
  //   pattern1 = ld pattern;
  //   pattern2 = force? pattern1;
  //   checkMissing(pattern2);
  //   return pattern2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_, CCP, RHO);
  // p1 = prom<V +>{
  //   values1 = ld values;
  //   values2 = force? values1;
  //   checkMissing(values2);
  //   return values2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_1, CCP, RHO);
  // r6 = dyn ffun(p, p1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ffun, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p2 = prom<V +>{
  //   pattern3 = ld pattern;
  //   pattern4 = force? pattern3;
  //   checkMissing(pattern4);
  //   return pattern4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_2, CCP, RHO);
  // p3 = prom<V +>{
  //   values3 = ld values;
  //   values4 = force? values3;
  //   checkMissing(values4);
  //   return values4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_3, CCP, RHO);
  // r11 = dyn findExactMatches(p2, p3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findExactMatches, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 20 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // st `exact.matches` = r11
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // exact_matches = ld `exact.matches`
  Rsh_Fir_reg_exact_matches = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L18_:;
  // r12 = dyn base1(<sym exact.matches>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L3_;

D6_:;
  // deopt 24 [exact_matches]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_exact_matches;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // exact_matches1 = force? exact_matches
  Rsh_Fir_reg_exact_matches1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exact_matches);
  // checkMissing(exact_matches1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_exact_matches1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r14 = dyn length(exact_matches1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_exact_matches1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 27 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L3_;

L21_:;
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p4 = prom<V +>{
  //   pattern5 = ld pattern;
  //   pattern6 = force? pattern5;
  //   checkMissing(pattern6);
  //   return pattern6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_4, CCP, RHO);
  // r17 = dyn gsub[, , , perl]("(?<!\\^)(?<=.)(\\\\\\.|_)(?!$)", "", p4, TRUE)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

D9_:;
  // deopt 37 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L23_:;
  // st normalizedPattern = r17
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // gsub1 = ldf gsub
  Rsh_Fir_reg_gsub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L24() else D10()
  // L24()
  goto L24_;

D10_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p5 = prom<V +>{
  //   normalizedPattern = ld normalizedPattern;
  //   normalizedPattern1 = force? normalizedPattern;
  //   checkMissing(normalizedPattern1);
  //   return normalizedPattern1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_5, CCP, RHO);
  // r19 = dyn gsub1("(\\\\\\.|_)$", ".", p5)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub1_, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D11()
  // L25()
  goto L25_;

D11_:;
  // deopt 44 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // st normalizedPattern = r19
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // gsub2 = ldf gsub
  Rsh_Fir_reg_gsub2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

D12_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p6 = prom<V +>{
  //   values5 = ld values;
  //   values6 = force? values5;
  //   checkMissing(values6);
  //   return values6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_6, CCP, RHO);
  // r21 = dyn gsub2[, , , perl]("(?<=.)[._]", "", p6, TRUE)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub2_, 4, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D13()
  // L27()
  goto L27_;

D13_:;
  // deopt 53 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // st normalizedValues = r21
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // values7 = ld values
  Rsh_Fir_reg_values7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L28() else D14()
  // L28()
  goto L28_;

D14_:;
  // deopt 55 [values7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_values7_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // values8 = force? values7
  Rsh_Fir_reg_values8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values7_);
  // checkMissing(values8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_values8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(values8)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_values8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c3 then L29() else L30(values8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L30(values8)
    Rsh_Fir_reg_values10_ = Rsh_Fir_reg_values8_;
    goto L30_;
  }

L29_:;
  // dr = tryDispatchBuiltin.1("[", values8)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_values8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc then L31() else L30(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr)
    Rsh_Fir_reg_values10_ = Rsh_Fir_reg_dr;
    goto L30_;
  }

L30_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L32() else D15()
  // L32()
  goto L32_;

L31_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D15_:;
  // deopt 58 [values10]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_values10_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // p7 = prom<V +>{
  //   normalizedPattern2 = ld normalizedPattern;
  //   normalizedPattern3 = force? normalizedPattern2;
  //   checkMissing(normalizedPattern3);
  //   return normalizedPattern3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_7, CCP, RHO);
  // p8 = prom<V +>{
  //   normalizedValues = ld normalizedValues;
  //   normalizedValues1 = force? normalizedValues;
  //   checkMissing(normalizedValues1);
  //   return normalizedValues1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3421086882_8, CCP, RHO);
  // r24 = dyn grep[, , `ignore.case`](p7, p8, TRUE)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L33() else D16()
  // L33()
  goto L33_;

D16_:;
  // deopt 63 [values10, r24]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_values10_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r25 = dyn __(values10, r24)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_values10_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r25)
  // L5(r25)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r25_;
  goto L5_;

D17_:;
  // deopt 65 [exact_matches2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_exact_matches2_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L35_:;
  // exact_matches3 = force? exact_matches2
  Rsh_Fir_reg_exact_matches3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exact_matches2_);
  // checkMissing(exact_matches3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_exact_matches3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return exact_matches3
  return Rsh_Fir_reg_exact_matches3_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_(SEXP CCP, SEXP RHO) {
  // pattern1 = ld pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // pattern2 = force? pattern1
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern1_);
  // checkMissing(pattern2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_pattern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return pattern2
  return Rsh_Fir_reg_pattern2_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_1(SEXP CCP, SEXP RHO) {
  // values1 = ld values
  Rsh_Fir_reg_values1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // values2 = force? values1
  Rsh_Fir_reg_values2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values1_);
  // checkMissing(values2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_values2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return values2
  return Rsh_Fir_reg_values2_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_2(SEXP CCP, SEXP RHO) {
  // pattern3 = ld pattern
  Rsh_Fir_reg_pattern3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // pattern4 = force? pattern3
  Rsh_Fir_reg_pattern4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern3_);
  // checkMissing(pattern4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_pattern4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return pattern4
  return Rsh_Fir_reg_pattern4_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_3(SEXP CCP, SEXP RHO) {
  // values3 = ld values
  Rsh_Fir_reg_values3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // values4 = force? values3
  Rsh_Fir_reg_values4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values3_);
  // checkMissing(values4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_values4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return values4
  return Rsh_Fir_reg_values4_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_4(SEXP CCP, SEXP RHO) {
  // pattern5 = ld pattern
  Rsh_Fir_reg_pattern5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // pattern6 = force? pattern5
  Rsh_Fir_reg_pattern6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern5_);
  // checkMissing(pattern6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_pattern6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return pattern6
  return Rsh_Fir_reg_pattern6_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_5(SEXP CCP, SEXP RHO) {
  // normalizedPattern = ld normalizedPattern
  Rsh_Fir_reg_normalizedPattern = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // normalizedPattern1 = force? normalizedPattern
  Rsh_Fir_reg_normalizedPattern1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normalizedPattern);
  // checkMissing(normalizedPattern1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_normalizedPattern1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return normalizedPattern1
  return Rsh_Fir_reg_normalizedPattern1_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_6(SEXP CCP, SEXP RHO) {
  // values5 = ld values
  Rsh_Fir_reg_values5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // values6 = force? values5
  Rsh_Fir_reg_values6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values5_);
  // checkMissing(values6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_values6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return values6
  return Rsh_Fir_reg_values6_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_7(SEXP CCP, SEXP RHO) {
  // normalizedPattern2 = ld normalizedPattern
  Rsh_Fir_reg_normalizedPattern2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // normalizedPattern3 = force? normalizedPattern2
  Rsh_Fir_reg_normalizedPattern3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normalizedPattern2_);
  // checkMissing(normalizedPattern3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_normalizedPattern3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return normalizedPattern3
  return Rsh_Fir_reg_normalizedPattern3_;
}
SEXP Rsh_Fir_user_promise_inner3421086882_8(SEXP CCP, SEXP RHO) {
  // normalizedValues = ld normalizedValues
  Rsh_Fir_reg_normalizedValues = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // normalizedValues1 = force? normalizedValues
  Rsh_Fir_reg_normalizedValues1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normalizedValues);
  // checkMissing(normalizedValues1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_normalizedValues1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return normalizedValues1
  return Rsh_Fir_reg_normalizedValues1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
