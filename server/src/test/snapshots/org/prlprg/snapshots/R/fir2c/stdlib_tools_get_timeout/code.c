#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1148639420_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1148639420_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1148639420_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1148639420_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1148639420_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1148639420_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1148639420_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1148639420_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner1148639420
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1148639420_, RHO, CCP);
  // st get_timeout = r
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
SEXP Rsh_Fir_user_function_inner1148639420_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1148639420 dynamic dispatch ([tlim])

  return Rsh_Fir_user_version_inner1148639420_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1148639420_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1148639420 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1148639420/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_tlim;  // tlim
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_tlim1_;  // tlim1
  SEXP Rsh_Fir_reg_tlim2_;  // tlim2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_endsWith;  // endsWith
  SEXP Rsh_Fir_reg_tlim3_;  // tlim3
  SEXP Rsh_Fir_reg_tlim4_;  // tlim4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_tlim5_;  // tlim5
  SEXP Rsh_Fir_reg_tlim6_;  // tlim6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_endsWith1_;  // endsWith1
  SEXP Rsh_Fir_reg_tlim7_;  // tlim7
  SEXP Rsh_Fir_reg_tlim8_;  // tlim8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sub1_;  // sub1
  SEXP Rsh_Fir_reg_tlim9_;  // tlim9
  SEXP Rsh_Fir_reg_tlim10_;  // tlim10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_as_numeric1_;  // as_numeric1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_endsWith2_;  // endsWith2
  SEXP Rsh_Fir_reg_tlim11_;  // tlim11
  SEXP Rsh_Fir_reg_tlim12_;  // tlim12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sub2_;  // sub2
  SEXP Rsh_Fir_reg_tlim13_;  // tlim13
  SEXP Rsh_Fir_reg_tlim14_;  // tlim14
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_as_numeric2_;  // as_numeric2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_tlim15_;  // tlim15
  SEXP Rsh_Fir_reg_tlim16_;  // tlim16
  SEXP Rsh_Fir_reg_as_numeric3_;  // as_numeric3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_tlim17_;  // tlim17
  SEXP Rsh_Fir_reg_tlim18_;  // tlim18
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_tlim19_;  // tlim19
  SEXP Rsh_Fir_reg_tlim20_;  // tlim20
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_tlim21_;  // tlim21
  SEXP Rsh_Fir_reg_tlim22_;  // tlim22

  // Bind parameters
  Rsh_Fir_reg_tlim = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st tlim = tlim
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_tlim, RHO);
  (void)(Rsh_Fir_reg_tlim);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L18() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L9()
  // L9()
  goto L9_;

L2_:;
  // endsWith1 = ldf endsWith
  Rsh_Fir_reg_endsWith1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L3_:;
  // r12 = `*`(r7, r8)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // st tlim = r12
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L4_;

L4_:;
  // goto L9()
  // L9()
  goto L9_;

L5_:;
  // endsWith2 = ldf endsWith
  Rsh_Fir_reg_endsWith2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

L6_:;
  // r24 = `*`(r19, r20)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st tlim = r24
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L4(r24)
  // L4(r24)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r24_;
  goto L4_;

L7_:;
  // goto L4(NULL)
  // L4(NULL)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 4);
  goto L4_;

L8_:;
  // st tlim = r28
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L4(r28)
  // L4(r28)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r28_;
  goto L4_;

L9_:;
  // sym4 = ldf `as.numeric`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf `as.numeric` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L10_:;
  // st tlim = r34
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L11_:;
  // c5 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c5 then L12(c5) else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L12(c5)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c5_;
    goto L12_;
  } else {
  // L55()
    goto L55_;
  }

L12_:;
  // c11 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c11 then L58() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L58()
    goto L58_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // tlim21 = ld tlim
  Rsh_Fir_reg_tlim21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

L15_:;
  // tlim1 = ld tlim
  Rsh_Fir_reg_tlim1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L16_:;
  // r = dyn base(<sym tlim>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [tlim1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_tlim1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // tlim2 = force? tlim1
  Rsh_Fir_reg_tlim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim1_);
  // checkMissing(tlim2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_tlim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `is.character`(tlim2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_tlim2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L18_:;
  // endsWith = ldf endsWith
  Rsh_Fir_reg_endsWith = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p = prom<V +>{
  //   tlim3 = ld tlim;
  //   tlim4 = force? tlim3;
  //   checkMissing(tlim4);
  //   return tlim4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1148639420_, CCP, RHO);
  // r3 = dyn endsWith(p, "m")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_endsWith, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // c2 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c2 then L21() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L21()
    goto L21_;
  } else {
  // L2()
    goto L2_;
  }

L21_:;
  // sym1 = ldf `as.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `as.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

L23_:;
  // r6 = dyn base1(<lang sub("m$", "", tlim)>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(60.0, r6)
  // L3(60.0, r6)
  Rsh_Fir_reg_r7_ = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
  goto L3_;

D3_:;
  // deopt 13 [60.0]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 10);
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L24_:;
  // p1 = prom<V +>{
  //   tlim5 = ld tlim;
  //   tlim6 = force? tlim5;
  //   checkMissing(tlim6);
  //   return tlim6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1148639420_1, CCP, RHO);
  // r10 = dyn sub("m$", "", p1)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

D4_:;
  // deopt 17 [60.0, r10]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r11 = dyn as_numeric(r10)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

D5_:;
  // deopt 19 [60.0, r11]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L3(60.0, r11)
  // L3(60.0, r11)
  Rsh_Fir_reg_r7_ = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r11_;
  goto L3_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p2 = prom<V +>{
  //   tlim7 = ld tlim;
  //   tlim8 = force? tlim7;
  //   checkMissing(tlim8);
  //   return tlim8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1148639420_2, CCP, RHO);
  // r15 = dyn endsWith1(p2, "h")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_endsWith1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

D7_:;
  // deopt 26 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // c3 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c3 then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

L30_:;
  // sym2 = ldf `as.numeric`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf `as.numeric` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // sub1 = ldf sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

L32_:;
  // r18 = dyn base2(<lang sub("h$", "", tlim)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(3600.0, r18)
  // L6(3600.0, r18)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_;
  goto L6_;

D8_:;
  // deopt 31 [3600.0]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 15);
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // p3 = prom<V +>{
  //   tlim9 = ld tlim;
  //   tlim10 = force? tlim9;
  //   checkMissing(tlim10);
  //   return tlim10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1148639420_3, CCP, RHO);
  // r22 = dyn sub1("h$", "", p3)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub1_, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D9_:;
  // deopt 35 [3600.0, r22]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // as_numeric1 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r23 = dyn as_numeric1(r22)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 37 [3600.0, r23]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L6(3600.0, r23)
  // L6(3600.0, r23)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r23_;
  goto L6_;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p4 = prom<V +>{
  //   tlim11 = ld tlim;
  //   tlim12 = force? tlim11;
  //   checkMissing(tlim12);
  //   return tlim12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1148639420_4, CCP, RHO);
  // r26 = dyn endsWith2(p4, "s")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_endsWith2_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

D12_:;
  // deopt 44 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L38_:;
  // c4 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c4 then L39() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L39()
    goto L39_;
  } else {
  // L7()
    goto L7_;
  }

L39_:;
  // sym3 = ldf `as.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf `as.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // sub2 = ldf sub
  Rsh_Fir_reg_sub2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

L41_:;
  // r27 = dyn base3(<lang sub("s$", "", tlim)>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r27)
  // L8(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L8_;

D13_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p5 = prom<V +>{
  //   tlim13 = ld tlim;
  //   tlim14 = force? tlim13;
  //   checkMissing(tlim14);
  //   return tlim14;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1148639420_5, CCP, RHO);
  // r30 = dyn sub2("s$", "", p5)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub2_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L43() else D14()
  // L43()
  goto L43_;

D14_:;
  // deopt 52 [r30]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L43_:;
  // as_numeric2 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r31 = dyn as_numeric2(r30)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L44() else D15()
  // L44()
  goto L44_;

D15_:;
  // deopt 54 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L8(r31)
  // L8(r31)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r31_;
  goto L8_;

L47_:;
  // tlim15 = ld tlim
  Rsh_Fir_reg_tlim15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

L48_:;
  // r33 = dyn base4(<sym tlim>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L10_;

D16_:;
  // deopt 62 [tlim15]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_tlim15_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L49_:;
  // tlim16 = force? tlim15
  Rsh_Fir_reg_tlim16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim15_);
  // checkMissing(tlim16)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_tlim16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // as_numeric3 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r35 = dyn as_numeric3(tlim16)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_tlim16_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

D17_:;
  // deopt 65 [r35]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L10(r35)
  // L10(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L10_;

L51_:;
  // tlim17 = ld tlim
  Rsh_Fir_reg_tlim17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D18()
  // L53()
  goto L53_;

L52_:;
  // r36 = dyn base5(<sym tlim>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r36)
  // L11(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L11_;

D18_:;
  // deopt 69 [tlim17]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_tlim17_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // tlim18 = force? tlim17
  Rsh_Fir_reg_tlim18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim17_);
  // checkMissing(tlim18)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_tlim18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r38 = dyn is_na(tlim18)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_tlim18_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L54() else D19()
  // L54()
  goto L54_;

D19_:;
  // deopt 72 [r38]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L11(r38)
  // L11(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L11_;

L55_:;
  // tlim19 = ld tlim
  Rsh_Fir_reg_tlim19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D20()
  // L56()
  goto L56_;

D20_:;
  // deopt 73 [c5, tlim19]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_tlim19_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L56_:;
  // tlim20 = force? tlim19
  Rsh_Fir_reg_tlim20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim19_);
  // checkMissing(tlim20)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_tlim20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r39 = `<`(tlim20, 0.0)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_tlim20_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // c9 = `||`(c5, c8)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L12(c9)
  // L12(c9)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c9_;
  goto L12_;

L58_:;
  // st tlim = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 20), RHO);
  (void)(Rsh_const(CCP, 20));
  // goto L14()
  // L14()
  goto L14_;

D21_:;
  // deopt 83 [tlim21]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_tlim21_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L60_:;
  // tlim22 = force? tlim21
  Rsh_Fir_reg_tlim22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim21_);
  // checkMissing(tlim22)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_tlim22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return tlim22
  return Rsh_Fir_reg_tlim22_;
}
SEXP Rsh_Fir_user_promise_inner1148639420_(SEXP CCP, SEXP RHO) {
  // tlim3 = ld tlim
  Rsh_Fir_reg_tlim3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tlim4 = force? tlim3
  Rsh_Fir_reg_tlim4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim3_);
  // checkMissing(tlim4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_tlim4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return tlim4
  return Rsh_Fir_reg_tlim4_;
}
SEXP Rsh_Fir_user_promise_inner1148639420_1(SEXP CCP, SEXP RHO) {
  // tlim5 = ld tlim
  Rsh_Fir_reg_tlim5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tlim6 = force? tlim5
  Rsh_Fir_reg_tlim6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim5_);
  // checkMissing(tlim6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_tlim6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return tlim6
  return Rsh_Fir_reg_tlim6_;
}
SEXP Rsh_Fir_user_promise_inner1148639420_2(SEXP CCP, SEXP RHO) {
  // tlim7 = ld tlim
  Rsh_Fir_reg_tlim7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tlim8 = force? tlim7
  Rsh_Fir_reg_tlim8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim7_);
  // checkMissing(tlim8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_tlim8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return tlim8
  return Rsh_Fir_reg_tlim8_;
}
SEXP Rsh_Fir_user_promise_inner1148639420_3(SEXP CCP, SEXP RHO) {
  // tlim9 = ld tlim
  Rsh_Fir_reg_tlim9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tlim10 = force? tlim9
  Rsh_Fir_reg_tlim10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim9_);
  // checkMissing(tlim10)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_tlim10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return tlim10
  return Rsh_Fir_reg_tlim10_;
}
SEXP Rsh_Fir_user_promise_inner1148639420_4(SEXP CCP, SEXP RHO) {
  // tlim11 = ld tlim
  Rsh_Fir_reg_tlim11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tlim12 = force? tlim11
  Rsh_Fir_reg_tlim12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim11_);
  // checkMissing(tlim12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_tlim12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return tlim12
  return Rsh_Fir_reg_tlim12_;
}
SEXP Rsh_Fir_user_promise_inner1148639420_5(SEXP CCP, SEXP RHO) {
  // tlim13 = ld tlim
  Rsh_Fir_reg_tlim13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tlim14 = force? tlim13
  Rsh_Fir_reg_tlim14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlim13_);
  // checkMissing(tlim14)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_tlim14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return tlim14
  return Rsh_Fir_reg_tlim14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
