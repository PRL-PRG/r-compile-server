#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1049911894_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1049911894_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1049911894_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1049911894_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner1049911894
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1049911894_, RHO, CCP);
  // st `confint.glm` = r
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
SEXP Rsh_Fir_user_function_inner1049911894_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1049911894 dynamic dispatch ([object, parm, level, trace, test, `...`])

  return Rsh_Fir_user_version_inner1049911894_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1049911894_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1049911894 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1049911894/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_parm;  // parm
  SEXP Rsh_Fir_reg_level;  // level
  SEXP Rsh_Fir_reg_trace;  // trace
  SEXP Rsh_Fir_reg_test;  // test
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_level_isMissing;  // level_isMissing
  SEXP Rsh_Fir_reg_level_orDefault;  // level_orDefault
  SEXP Rsh_Fir_reg_trace_isMissing;  // trace_isMissing
  SEXP Rsh_Fir_reg_trace_orDefault;  // trace_orDefault
  SEXP Rsh_Fir_reg_test_isMissing;  // test_isMissing
  SEXP Rsh_Fir_reg_test_orDefault;  // test_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_test1_;  // test1
  SEXP Rsh_Fir_reg_test2_;  // test2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_pnames;  // pnames
  SEXP Rsh_Fir_reg_pnames1_;  // pnames1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_parm1_;  // parm1
  SEXP Rsh_Fir_reg_parm2_;  // parm2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_parm3_;  // parm3
  SEXP Rsh_Fir_reg_parm4_;  // parm4
  SEXP Rsh_Fir_reg_pnames2_;  // pnames2
  SEXP Rsh_Fir_reg_pnames3_;  // pnames3
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_message;  // message
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_profile;  // profile
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_parm5_;  // parm5
  SEXP Rsh_Fir_reg_parm6_;  // parm6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_level1_;  // level1
  SEXP Rsh_Fir_reg_level2_;  // level2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_trace1_;  // trace1
  SEXP Rsh_Fir_reg_trace2_;  // trace2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_test3_;  // test3
  SEXP Rsh_Fir_reg_test4_;  // test4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_confint;  // confint
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_parm7_;  // parm7
  SEXP Rsh_Fir_reg_parm8_;  // parm8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_level3_;  // level3
  SEXP Rsh_Fir_reg_level4_;  // level4
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_trace3_;  // trace3
  SEXP Rsh_Fir_reg_trace4_;  // trace4
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_test5_;  // test5
  SEXP Rsh_Fir_reg_test6_;  // test6
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r40_;  // r40

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_parm = PARAMS[1];
  Rsh_Fir_reg_level = PARAMS[2];
  Rsh_Fir_reg_trace = PARAMS[3];
  Rsh_Fir_reg_test = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st parm = parm
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_parm, RHO);
  (void)(Rsh_Fir_reg_parm);
  // level_isMissing = missing.0(level)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_level;
  Rsh_Fir_reg_level_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if level_isMissing then L0(0.95) else L0(level)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_level_isMissing)) {
  // L0(0.95)
    Rsh_Fir_reg_level_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(level)
    Rsh_Fir_reg_level_orDefault = Rsh_Fir_reg_level;
    goto L0_;
  }

L0_:;
  // st level = level_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_level_orDefault, RHO);
  (void)(Rsh_Fir_reg_level_orDefault);
  // trace_isMissing = missing.0(trace)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_trace;
  Rsh_Fir_reg_trace_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if trace_isMissing then L1(FALSE) else L1(trace)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_trace_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_trace_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(trace)
    Rsh_Fir_reg_trace_orDefault = Rsh_Fir_reg_trace;
    goto L1_;
  }

L1_:;
  // st trace = trace_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_trace_orDefault, RHO);
  (void)(Rsh_Fir_reg_trace_orDefault);
  // test_isMissing = missing.0(test)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_test;
  Rsh_Fir_reg_test_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if test_isMissing then L2() else L3(test)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_test_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(test)
    Rsh_Fir_reg_test_orDefault = Rsh_Fir_reg_test;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("LRT", "Rao");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("LRT", "Rao");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_test_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st test = test_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_test_orDefault, RHO);
  (void)(Rsh_Fir_reg_test_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L4_:;
  // st pnames = r7
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L5_:;
  // c1 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // sym4 = ldf `is.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `is.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard4 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L7_:;
  // st parm = r15
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L9_:;
  // c3 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c3 then L29() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L8()
  // L8()
  goto L8_;

L11_:;
  // st parm = r21
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L8()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p1 = prom<V +>{
  //   test1 = ld test;
  //   test2 = force? test1;
  //   checkMissing(test2);
  //   return test2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // st test = r5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L15_:;
  // r6 = dyn base1(<lang coef(object)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L4_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p2 = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   return object2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_2, CCP, RHO);
  // r9 = dyn coef(p2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

D3_:;
  // deopt 10 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r10 = dyn names(r9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 12 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r10_;
  goto L4_;

L19_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r13 = dyn missing(<sym parm>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L5_;

L20_:;
  // r11 = dyn base2(<sym parm>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L5_;

L21_:;
  // sym3 = ldf seq_along
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf seq_along in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // pnames = ld pnames
  Rsh_Fir_reg_pnames = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L23_:;
  // r14 = dyn base3(<sym pnames>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L7_;

D5_:;
  // deopt 18 [pnames]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_pnames;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // pnames1 = force? pnames
  Rsh_Fir_reg_pnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames);
  // checkMissing(pnames1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_pnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r16 = seq_along(pnames1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_pnames1_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L7_;

L26_:;
  // parm1 = ld parm
  Rsh_Fir_reg_parm1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L27_:;
  // r18 = dyn base4(<sym parm>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D6_:;
  // deopt 23 [parm1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_parm1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // parm2 = force? parm1
  Rsh_Fir_reg_parm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm1_);
  // checkMissing(parm2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_parm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c2 = `is.character`(parm2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_parm2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L9(c2)
  // L9(c2)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_c2_;
  goto L9_;

L29_:;
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard5 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // parm3 = ld parm
  Rsh_Fir_reg_parm3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

L31_:;
  // r20 = dyn base5[, , nomatch](<sym parm>, <sym pnames>, 0)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

D7_:;
  // deopt 28 [parm3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_parm3_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // parm4 = force? parm3
  Rsh_Fir_reg_parm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm3_);
  // checkMissing(parm4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_parm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // pnames2 = ld pnames
  Rsh_Fir_reg_pnames2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

D8_:;
  // deopt 30 [pnames2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_pnames2_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // pnames3 = force? pnames2
  Rsh_Fir_reg_pnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames2_);
  // checkMissing(pnames3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_pnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r22 = dyn match(parm4, pnames3, 0, NULL)
  SEXP Rsh_Fir_array_args30[4];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_parm4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_pnames3_;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D9_:;
  // deopt 35 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L11_;

D10_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r23 = dyn message("Waiting for profiling to be done...")
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 42 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L37_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

D12_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r24 = dyn __("utils", "flush.console")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

D13_:;
  // deopt 47 [r24]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // checkFun.0(r24)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r24_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args33));
  // r25 = r24 as cls
  Rsh_Fir_reg_r25_ = Rsh_Fir_cast(Rsh_Fir_reg_r24_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r26 = dyn r25()
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r25_, 0, NULL, NULL, CCP, RHO);
  // check L40() else D14()
  // L40()
  goto L40_;

D14_:;
  // deopt 49 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L40_:;
  // profile = ldf profile
  Rsh_Fir_reg_profile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L41() else D15()
  // L41()
  goto L41_;

D15_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   return object4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_3, CCP, RHO);
  // p4 = prom<V +>{
  //   parm5 = ld parm;
  //   parm6 = force? parm5;
  //   checkMissing(parm6);
  //   return parm6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_4, CCP, RHO);
  // p5 = prom<V +>{
  //   level1 = ld level;
  //   level2 = force? level1;
  //   checkMissing(level2);
  //   r29 = `-`(1.0, level2);
  //   r30 = `/`(r29, 4.0);
  //   return r30;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_5, CCP, RHO);
  // p6 = prom<V +>{
  //   trace1 = ld trace;
  //   trace2 = force? trace1;
  //   checkMissing(trace2);
  //   return trace2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_6, CCP, RHO);
  // p7 = prom<V +>{
  //   test3 = ld test;
  //   test4 = force? test3;
  //   checkMissing(test4);
  //   return test4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_7, CCP, RHO);
  // r34 = dyn profile[, which, alpha, trace, test](p3, p4, p5, p6, p7)
  SEXP Rsh_Fir_array_args41[5];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args41[3] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args41[4] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names14[5];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names14[4] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_profile, 5, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L42() else D16()
  // L42()
  goto L42_;

D16_:;
  // deopt 61 [r34]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // st object = r34
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // confint = ldf confint
  Rsh_Fir_reg_confint = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L43() else D17()
  // L43()
  goto L43_;

D17_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p8 = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   return object6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_8, CCP, RHO);
  // p9 = prom<V +>{
  //   parm7 = ld parm;
  //   parm8 = force? parm7;
  //   checkMissing(parm8);
  //   return parm8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_9, CCP, RHO);
  // p10 = prom<V +>{
  //   level3 = ld level;
  //   level4 = force? level3;
  //   checkMissing(level4);
  //   return level4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_10, CCP, RHO);
  // p11 = prom<V +>{
  //   trace3 = ld trace;
  //   trace4 = force? trace3;
  //   checkMissing(trace4);
  //   return trace4;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_11, CCP, RHO);
  // p12 = prom<V +>{
  //   test5 = ld test;
  //   test6 = force? test5;
  //   checkMissing(test6);
  //   return test6;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1049911894_12, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // r40 = dyn confint[, parm, level, trace, test, `...`](p8, p9, p10, p11, p12, ddd1)
  SEXP Rsh_Fir_array_args47[6];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args47[3] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args47[4] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args47[5] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names15[6];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names15[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names15[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names15[5] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_confint, 6, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L44() else D18()
  // L44()
  goto L44_;

D18_:;
  // deopt 75 [r40]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn c("LRT", "Rao")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("LRT", "Rao")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_1(SEXP CCP, SEXP RHO) {
  // test1 = ld test
  Rsh_Fir_reg_test1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // test2 = force? test1
  Rsh_Fir_reg_test2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test1_);
  // checkMissing(test2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_test2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return test2
  return Rsh_Fir_reg_test2_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_2(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return object2
  return Rsh_Fir_reg_object2_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_3(SEXP CCP, SEXP RHO) {
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return object4
  return Rsh_Fir_reg_object4_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_4(SEXP CCP, SEXP RHO) {
  // parm5 = ld parm
  Rsh_Fir_reg_parm5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // parm6 = force? parm5
  Rsh_Fir_reg_parm6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm5_);
  // checkMissing(parm6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_parm6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return parm6
  return Rsh_Fir_reg_parm6_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_5(SEXP CCP, SEXP RHO) {
  // level1 = ld level
  Rsh_Fir_reg_level1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // level2 = force? level1
  Rsh_Fir_reg_level2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level1_);
  // checkMissing(level2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_level2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r29 = `-`(1.0, level2)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_level2_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // r30 = `/`(r29, 4.0)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_6(SEXP CCP, SEXP RHO) {
  // trace1 = ld trace
  Rsh_Fir_reg_trace1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // trace2 = force? trace1
  Rsh_Fir_reg_trace2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace1_);
  // checkMissing(trace2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_trace2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return trace2
  return Rsh_Fir_reg_trace2_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_7(SEXP CCP, SEXP RHO) {
  // test3 = ld test
  Rsh_Fir_reg_test3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // test4 = force? test3
  Rsh_Fir_reg_test4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test3_);
  // checkMissing(test4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_test4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return test4
  return Rsh_Fir_reg_test4_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_8(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return object6
  return Rsh_Fir_reg_object6_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_9(SEXP CCP, SEXP RHO) {
  // parm7 = ld parm
  Rsh_Fir_reg_parm7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // parm8 = force? parm7
  Rsh_Fir_reg_parm8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm7_);
  // checkMissing(parm8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_parm8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return parm8
  return Rsh_Fir_reg_parm8_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_10(SEXP CCP, SEXP RHO) {
  // level3 = ld level
  Rsh_Fir_reg_level3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // level4 = force? level3
  Rsh_Fir_reg_level4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level3_);
  // checkMissing(level4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_level4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return level4
  return Rsh_Fir_reg_level4_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_11(SEXP CCP, SEXP RHO) {
  // trace3 = ld trace
  Rsh_Fir_reg_trace3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // trace4 = force? trace3
  Rsh_Fir_reg_trace4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace3_);
  // checkMissing(trace4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_trace4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return trace4
  return Rsh_Fir_reg_trace4_;
}
SEXP Rsh_Fir_user_promise_inner1049911894_12(SEXP CCP, SEXP RHO) {
  // test5 = ld test
  Rsh_Fir_reg_test5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // test6 = force? test5
  Rsh_Fir_reg_test6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test5_);
  // checkMissing(test6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_test6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return test6
  return Rsh_Fir_reg_test6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
