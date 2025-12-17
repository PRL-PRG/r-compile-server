#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner669680959_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner669680959_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner669680959_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669680959_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669680959_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669680959_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner669680959_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner669680959
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner669680959_, RHO, CCP);
  // st `sample.int` = r
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
SEXP Rsh_Fir_user_function_inner669680959_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner669680959 dynamic dispatch ([n, size, replace, prob, useHash])

  return Rsh_Fir_user_version_inner669680959_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner669680959_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner669680959 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner669680959/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_replace;  // replace
  SEXP Rsh_Fir_reg_prob;  // prob
  SEXP Rsh_Fir_reg_useHash;  // useHash
  SEXP Rsh_Fir_reg_size_isMissing;  // size_isMissing
  SEXP Rsh_Fir_reg_size_orDefault;  // size_orDefault
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_replace_isMissing;  // replace_isMissing
  SEXP Rsh_Fir_reg_replace_orDefault;  // replace_orDefault
  SEXP Rsh_Fir_reg_prob_isMissing;  // prob_isMissing
  SEXP Rsh_Fir_reg_prob_orDefault;  // prob_orDefault
  SEXP Rsh_Fir_reg_useHash_isMissing;  // useHash_isMissing
  SEXP Rsh_Fir_reg_useHash_orDefault;  // useHash_orDefault
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_replace1_;  // replace1
  SEXP Rsh_Fir_reg_replace2_;  // replace2
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_prob1_;  // prob1
  SEXP Rsh_Fir_reg_prob2_;  // prob2
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_useHash1_;  // useHash1
  SEXP Rsh_Fir_reg_useHash2_;  // useHash2
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_stopifnot1_;  // stopifnot1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_prob3_;  // prob3
  SEXP Rsh_Fir_reg_prob4_;  // prob4
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_replace3_;  // replace3
  SEXP Rsh_Fir_reg_replace4_;  // replace4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_size3_;  // size3
  SEXP Rsh_Fir_reg_size4_;  // size4
  SEXP Rsh_Fir_reg_sample2_;  // sample2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_size5_;  // size5
  SEXP Rsh_Fir_reg_size6_;  // size6
  SEXP Rsh_Fir_reg_replace5_;  // replace5
  SEXP Rsh_Fir_reg_replace6_;  // replace6
  SEXP Rsh_Fir_reg_prob5_;  // prob5
  SEXP Rsh_Fir_reg_prob6_;  // prob6
  SEXP Rsh_Fir_reg_sample3_;  // sample3
  SEXP Rsh_Fir_reg_r25_;  // r25

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_size = PARAMS[1];
  Rsh_Fir_reg_replace = PARAMS[2];
  Rsh_Fir_reg_prob = PARAMS[3];
  Rsh_Fir_reg_useHash = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // size_isMissing = missing.0(size)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_size;
  Rsh_Fir_reg_size_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if size_isMissing then L0() else L1(size)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_size_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(size)
    Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_size;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669680959_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st size = size_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_size_orDefault, RHO);
  (void)(Rsh_Fir_reg_size_orDefault);
  // replace_isMissing = missing.0(replace)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_replace;
  Rsh_Fir_reg_replace_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if replace_isMissing then L2(FALSE) else L2(replace)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_replace_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_replace_orDefault = Rsh_const(CCP, 3);
    goto L2_;
  } else {
  // L2(replace)
    Rsh_Fir_reg_replace_orDefault = Rsh_Fir_reg_replace;
    goto L2_;
  }

L2_:;
  // st replace = replace_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_replace_orDefault, RHO);
  (void)(Rsh_Fir_reg_replace_orDefault);
  // prob_isMissing = missing.0(prob)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_prob;
  Rsh_Fir_reg_prob_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if prob_isMissing then L3(NULL) else L3(prob)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_prob_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_prob_orDefault = Rsh_const(CCP, 5);
    goto L3_;
  } else {
  // L3(prob)
    Rsh_Fir_reg_prob_orDefault = Rsh_Fir_reg_prob;
    goto L3_;
  }

L3_:;
  // st prob = prob_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_prob_orDefault, RHO);
  (void)(Rsh_Fir_reg_prob_orDefault);
  // useHash_isMissing = missing.0(useHash)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_useHash;
  Rsh_Fir_reg_useHash_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if useHash_isMissing then L4() else L5(useHash)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useHash_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(useHash)
    Rsh_Fir_reg_useHash_orDefault = Rsh_Fir_reg_useHash;
    goto L5_;
  }

L4_:;
  // p1 = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   r1 = `>`(n4, 1.0E7);
  //   c = `as.logical`(r1);
  //   if c then L4() else L0(c);
  // L0(c2):
  //   c6 = `as.logical`(c2);
  //   if c6 then L6() else L1(c6);
  // L4():
  //   replace1 = ld replace;
  //   replace2 = force? replace1;
  //   checkMissing(replace2);
  //   r2 = `!`(replace2);
  //   c3 = `as.logical`(r2);
  //   c4 = `&&`(c, c3);
  //   goto L0(c4);
  // L1(c8):
  //   c16 = `as.logical`(c8);
  //   if c16 then L10() else L3(c16);
  // L6():
  //   sym = ldf `is.null`;
  //   base = ldf `is.null` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L7() else L8();
  // L2(c11, r4):
  //   c13 = `as.logical`(r4);
  //   c14 = `&&`(c11, c13);
  //   goto L1(c14);
  // L3(c18):
  //   visible.0();
  //   return c18;
  // L7():
  //   prob1 = ld prob;
  //   prob2 = force? prob1;
  //   checkMissing(prob2);
  //   c12 = `==`(prob2, NULL);
  //   goto L2(c6, c12);
  // L8():
  //   r3 = dyn base(<sym prob>);
  //   goto L2(c6, r3);
  // L10():
  //   size1 = ld size;
  //   size2 = force? size1;
  //   checkMissing(size2);
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   r5 = `/`(n6, 2.0);
  //   r6 = `<=`(size2, r5);
  //   c19 = `as.logical`(r6);
  //   c20 = `&&`(c16, c19);
  //   goto L3(c20);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669680959_1, CCP, RHO);
  // goto L5(p1)
  // L5(p1)
  Rsh_Fir_reg_useHash_orDefault = Rsh_Fir_reg_p1_;
  goto L5_;

L5_:;
  // st useHash = useHash_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_useHash_orDefault, RHO);
  (void)(Rsh_Fir_reg_useHash_orDefault);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L6_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard4 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = prom<V +>{
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r9):
  //   r11 = `==`(r9, 1);
  //   return r11;
  // L1():
  //   n7 = ld n;
  //   n8 = force? n7;
  //   checkMissing(n8);
  //   length = ldf length in base;
  //   r10 = dyn length(n8);
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base1(<sym n>);
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669680959_2, CCP, RHO);
  // r13 = dyn stopifnot(p2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 3 [r13]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // useHash1 = ld useHash
  Rsh_Fir_reg_useHash1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 4 [useHash1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_useHash1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // useHash2 = force? useHash1
  Rsh_Fir_reg_useHash2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useHash1_);
  // checkMissing(useHash2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_useHash2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c22 = `as.logical`(useHash2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_useHash2_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c22 then L12() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L12()
    goto L12_;
  } else {
  // L6()
    goto L6_;
  }

L12_:;
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p3 = prom<V +>{
  //   sym2 = ldf `is.null`;
  //   base2 = ldf `is.null` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   prob3 = ld prob;
  //   prob4 = force? prob3;
  //   checkMissing(prob4);
  //   c23 = `==`(prob4, NULL);
  //   goto L0(c23);
  // L2():
  //   r14 = dyn base2(<sym prob>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669680959_3, CCP, RHO);
  // p4 = prom<V +>{
  //   replace3 = ld replace;
  //   replace4 = force? replace3;
  //   checkMissing(replace4);
  //   r17 = `!`(replace4);
  //   return r17;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner669680959_4, CCP, RHO);
  // r19 = dyn stopifnot1(p3, p4)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 10 [r19]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L16_:;
  // r20 = dyn base3(<lang sample2(n, size)>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L7_;

D5_:;
  // deopt 13 [n9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // size3 = ld size
  Rsh_Fir_reg_size3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 15 [size3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_size3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // size4 = force? size3
  Rsh_Fir_reg_size4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size3_);
  // checkMissing(size4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_size4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // sample2 = ldf sample2 in base
  Rsh_Fir_reg_sample2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r22 = dyn sample2(n10, size4)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_size4_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sample2_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 18 [r22]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L7_;

L21_:;
  // n11 = ld n
  Rsh_Fir_reg_n11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

L22_:;
  // r23 = dyn base4(<lang sample(n, size, replace, prob)>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D8_:;
  // deopt 21 [n11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // n12 = force? n11
  Rsh_Fir_reg_n12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n11_);
  // checkMissing(n12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_n12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // size5 = ld size
  Rsh_Fir_reg_size5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 23 [size5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_size5_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // size6 = force? size5
  Rsh_Fir_reg_size6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size5_);
  // checkMissing(size6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_size6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // replace5 = ld replace
  Rsh_Fir_reg_replace5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 25 [replace5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_replace5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // replace6 = force? replace5
  Rsh_Fir_reg_replace6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_replace5_);
  // checkMissing(replace6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_replace6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // prob5 = ld prob
  Rsh_Fir_reg_prob5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 27 [prob5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_prob5_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L26_:;
  // prob6 = force? prob5
  Rsh_Fir_reg_prob6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob5_);
  // checkMissing(prob6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_prob6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // sample3 = ldf sample in base
  Rsh_Fir_reg_sample3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r25 = dyn sample3(n12, size6, replace6, prob6)
  SEXP Rsh_Fir_array_args52[4];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_size6_;
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_replace6_;
  Rsh_Fir_array_args52[3] = Rsh_Fir_reg_prob6_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sample3_, 4, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

D12_:;
  // deopt 30 [r25]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner669680959_(SEXP CCP, SEXP RHO) {
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_user_promise_inner669680959_1(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // r1 = `>`(n4, 1.0E7)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L4() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L0(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L0_;
  }

L0_:;
  // c6 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c6 then L6() else L1(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L6()
    goto L6_;
  } else {
  // L1(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L1_;
  }

L1_:;
  // c16 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c16 then L10() else L3(c16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L10()
    goto L10_;
  } else {
  // L3(c16)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c16_;
    goto L3_;
  }

L2_:;
  // c13 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c14 = `&&`(c11, c13)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L1(c14)
  // L1(c14)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c14_;
  goto L1_;

L3_:;
  // visible.0()
  (void)(Rsh_Fir_intrinsic_visible_v0(CCP, RHO, 0, NULL));
  // return c18
  return Rsh_Fir_reg_c18_;

L4_:;
  // replace1 = ld replace
  Rsh_Fir_reg_replace1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // replace2 = force? replace1
  Rsh_Fir_reg_replace2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_replace1_);
  // checkMissing(replace2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_replace2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r2 = `!`(replace2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_replace2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L0(c4)
  // L0(c4)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c4_;
  goto L0_;

L6_:;
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // prob1 = ld prob
  Rsh_Fir_reg_prob1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // prob2 = force? prob1
  Rsh_Fir_reg_prob2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob1_);
  // checkMissing(prob2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_prob2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c12 = `==`(prob2, NULL)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_prob2_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L2(c6, c12)
  // L2(c6, c12)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c12_;
  goto L2_;

L8_:;
  // r3 = dyn base(<sym prob>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(c6, r3)
  // L2(c6, r3)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

L10_:;
  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r5 = `/`(n6, 2.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // r6 = `<=`(size2, r5)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c20 = `&&`(c16, c19)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L3(c20)
  // L3(c20)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c20_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner669680959_2(SEXP CCP, SEXP RHO) {
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r11 = `==`(r9, 1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r10 = dyn length(n8)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base1(<sym n>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner669680959_3(SEXP CCP, SEXP RHO) {
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // prob3 = ld prob
  Rsh_Fir_reg_prob3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // prob4 = force? prob3
  Rsh_Fir_reg_prob4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob3_);
  // checkMissing(prob4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_prob4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c23 = `==`(prob4, NULL)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_prob4_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L0(c23)
  // L0(c23)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_c23_;
  goto L0_;

L2_:;
  // r14 = dyn base2(<sym prob>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner669680959_4(SEXP CCP, SEXP RHO) {
  // replace3 = ld replace
  Rsh_Fir_reg_replace3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // replace4 = force? replace3
  Rsh_Fir_reg_replace4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_replace3_);
  // checkMissing(replace4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_replace4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r17 = `!`(replace4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_replace4_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
