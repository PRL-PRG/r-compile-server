#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2104823373_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2104823373_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2104823373_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2104823373_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2104823373
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2104823373_, RHO, CCP);
  // st `start.default` = r
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
SEXP Rsh_Fir_user_function_inner2104823373_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2104823373 dynamic dispatch ([x, `ts.eps`, `...`])

  return Rsh_Fir_user_version_inner2104823373_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2104823373_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2104823373 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2104823373/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ts_eps;  // ts_eps
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_ts_eps_isMissing;  // ts_eps_isMissing
  SEXP Rsh_Fir_reg_ts_eps_orDefault;  // ts_eps_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_hasTsp;  // hasTsp
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_tsp;  // tsp
  SEXP Rsh_Fir_reg_tsp1_;  // tsp1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_tsp3_;  // tsp3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_tsp4_;  // tsp4
  SEXP Rsh_Fir_reg_tsp5_;  // tsp5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_tsp7_;  // tsp7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_tsp8_;  // tsp8
  SEXP Rsh_Fir_reg_tsp9_;  // tsp9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_tsp11_;  // tsp11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_round;  // round
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_ts_eps1_;  // ts_eps1
  SEXP Rsh_Fir_reg_ts_eps2_;  // ts_eps2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_is1_;  // is1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_is4_;  // is4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_round1_;  // round1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_abs1_;  // abs1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_ts_eps3_;  // ts_eps3
  SEXP Rsh_Fir_reg_ts_eps4_;  // ts_eps4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_tsp12_;  // tsp12
  SEXP Rsh_Fir_reg_tsp13_;  // tsp13
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_tsp15_;  // tsp15
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_ts_eps5_;  // ts_eps5
  SEXP Rsh_Fir_reg_ts_eps6_;  // ts_eps6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_tsp16_;  // tsp16
  SEXP Rsh_Fir_reg_tsp17_;  // tsp17
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_tsp19_;  // tsp19
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_tsp20_;  // tsp20
  SEXP Rsh_Fir_reg_tsp21_;  // tsp21
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_tsp23_;  // tsp23
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_is5_;  // is5
  SEXP Rsh_Fir_reg_is6_;  // is6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_is7_;  // is7
  SEXP Rsh_Fir_reg_is8_;  // is8
  SEXP Rsh_Fir_reg_fs;  // fs
  SEXP Rsh_Fir_reg_fs1_;  // fs1
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_tsp24_;  // tsp24
  SEXP Rsh_Fir_reg_tsp25_;  // tsp25
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_tsp27_;  // tsp27
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r44_;  // r44

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ts_eps = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // ts_eps_isMissing = missing.0(ts_eps)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_ts_eps;
  Rsh_Fir_reg_ts_eps_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if ts_eps_isMissing then L0() else L1(ts_eps)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ts_eps_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(ts_eps)
    Rsh_Fir_reg_ts_eps_orDefault = Rsh_Fir_reg_ts_eps;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("ts.eps");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2104823373_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_ts_eps_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st `ts.eps` = ts_eps_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ts_eps_orDefault, RHO);
  (void)(Rsh_Fir_reg_ts_eps_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L2_:;
  // st tsp = r3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // tsp = ld tsp
  Rsh_Fir_reg_tsp = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

L3_:;
  // tsp4 = ld tsp
  Rsh_Fir_reg_tsp4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

L4_:;
  // r9 = `*`(dx6, dx7)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st is = r9
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym1 = ldf abs
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf abs in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L5_:;
  // ts_eps1 = ld `ts.eps`
  Rsh_Fir_reg_ts_eps1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

L6_:;
  // sym2 = ldf round
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf round in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L7_:;
  // r16 = `-`(dx12, r14)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r17 = dyn abs(r16)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

L8_:;
  // c15 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c15 then L51() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L51()
    goto L51_;
  } else {
  // L11()
    goto L11_;
  }

L9_:;
  // ts_eps3 = ld `ts.eps`
  Rsh_Fir_reg_ts_eps3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L49() else D10()
  // L49()
  goto L49_;

L10_:;
  // r24 = `-`(is4, r22)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_is4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r25 = dyn abs1(r24)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

L11_:;
  // tsp24 = ld tsp
  Rsh_Fir_reg_tsp24_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L76() else D19()
  // L76()
  goto L76_;

L12_:;
  // st is = r28
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym6 = ldf floor
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf floor in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard6 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L13_:;
  // ts_eps5 = ld `ts.eps`
  Rsh_Fir_reg_ts_eps5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

L14_:;
  // st fs = r33
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L15_:;
  // tsp20 = ld tsp
  Rsh_Fir_reg_tsp20_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

L16_:;
  // is5 = ld is
  Rsh_Fir_reg_is5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L69() else D15()
  // L69()
  goto L69_;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx24
  return Rsh_Fir_reg_dx24_;

L19_:;
  // hasTsp = ldf hasTsp
  Rsh_Fir_reg_hasTsp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

L20_:;
  // r2 = dyn base(<lang hasTsp(x)>, "tsp")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2104823373_1, CCP, RHO);
  // r5 = dyn hasTsp(p1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_hasTsp, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 5 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r6 = dyn attr(r5, "tsp")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D2_:;
  // deopt 8 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r6_;
  goto L2_;

D3_:;
  // deopt 10 [tsp]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_tsp;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L24_:;
  // tsp1 = force? tsp
  Rsh_Fir_reg_tsp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tsp);
  // checkMissing(tsp1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_tsp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c = `is.object`(tsp1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_tsp1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c then L25() else L26(tsp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L26(tsp1)
    Rsh_Fir_reg_tsp3_ = Rsh_Fir_reg_tsp1_;
    goto L26_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("[", tsp1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_tsp1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr)
    Rsh_Fir_reg_tsp3_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r7 = dyn __(tsp3, 1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_tsp3_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L3_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D4_:;
  // deopt 14 [dx1, tsp4]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_tsp4_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // tsp5 = force? tsp4
  Rsh_Fir_reg_tsp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tsp4_);
  // checkMissing(tsp5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_tsp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(tsp5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_tsp5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c1 then L29() else L30(dx1, tsp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L29()
    goto L29_;
  } else {
  // L30(dx1, tsp5)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_tsp7_ = Rsh_Fir_reg_tsp5_;
    goto L30_;
  }

L29_:;
  // dr2 = tryDispatchBuiltin.1("[", tsp5)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_tsp5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc1 then L31() else L30(dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L31()
    goto L31_;
  } else {
  // L30(dx1, dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_tsp7_ = Rsh_Fir_reg_dr2_;
    goto L30_;
  }

L30_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r8 = dyn __1(tsp7, 3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_tsp7_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(dx3, r8)
  // L4(dx3, r8)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r8_;
  goto L4_;

L31_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L4(dx1, dx5)
  // L4(dx1, dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L4_;

L32_:;
  // tsp8 = ld tsp
  Rsh_Fir_reg_tsp8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

L33_:;
  // r10 = dyn base1(<lang `-`(`[`(tsp, 3), round(`[`(tsp, 3)))>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

D5_:;
  // deopt 23 [tsp8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_tsp8_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // tsp9 = force? tsp8
  Rsh_Fir_reg_tsp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tsp8_);
  // checkMissing(tsp9)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_tsp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(tsp9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_tsp9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c2 then L35() else L36(tsp9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L35()
    goto L35_;
  } else {
  // L36(tsp9)
    Rsh_Fir_reg_tsp11_ = Rsh_Fir_reg_tsp9_;
    goto L36_;
  }

L35_:;
  // dr4 = tryDispatchBuiltin.1("[", tsp9)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_tsp9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc2 then L37() else L36(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr4)
    Rsh_Fir_reg_tsp11_ = Rsh_Fir_reg_dr4_;
    goto L36_;
  }

L36_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r12 = dyn __2(tsp11, 3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_tsp11_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r12_;
  goto L6_;

L37_:;
  // dx8 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L6(dx8)
  // L6(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L6_;

L38_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r15 = dyn round(<lang `[`(tsp, 3)>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(dx9, r15)
  // L7(dx9, r15)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L39_:;
  // r13 = dyn base2(<lang `[`(tsp, 3)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(dx9, r13)
  // L7(dx9, r13)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D6_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r17_;
  goto L5_;

D7_:;
  // deopt 32 [r11, ts_eps1]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_ts_eps1_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L41_:;
  // ts_eps2 = force? ts_eps1
  Rsh_Fir_reg_ts_eps2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ts_eps1_);
  // checkMissing(ts_eps2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ts_eps2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r18 = `<`(r11, ts_eps2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_ts_eps2_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c3 then L42() else L8(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L42()
    goto L42_;
  } else {
  // L8(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L8_;
  }

L42_:;
  // sym3 = ldf abs
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf abs in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard3 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L43_:;
  // is = ld is
  Rsh_Fir_reg_is = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

L44_:;
  // r19 = dyn base3(<lang `-`(is, round(is))>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(c3, r19)
  // L9(c3, r19)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L9_;

D8_:;
  // deopt 37 [c3, is]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_is;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L45_:;
  // is1 = force? is
  Rsh_Fir_reg_is1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is);
  // checkMissing(is1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_is1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // sym4 = ldf round
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf round in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // round1 = ldf round in base
  Rsh_Fir_reg_round1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r23 = dyn round1(<sym is>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round1_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(c3, is1, r23)
  // L10(c3, is1, r23)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_is4_ = Rsh_Fir_reg_is1_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L10_;

L47_:;
  // r21 = dyn base4(<sym is>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(c3, is1, r21)
  // L10(c3, is1, r21)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_is4_ = Rsh_Fir_reg_is1_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L10_;

D9_:;
  // deopt 43 [c11, r25]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L9(c11, r25)
  // L9(c11, r25)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r25_;
  goto L9_;

D10_:;
  // deopt 43 [c8, r20, ts_eps3]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_ts_eps3_;
  Rsh_Fir_deopt(43, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // ts_eps4 = force? ts_eps3
  Rsh_Fir_reg_ts_eps4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ts_eps3_);
  // checkMissing(ts_eps4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ts_eps4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r26 = `<`(r20, ts_eps4)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_ts_eps4_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c8, c12)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L8(c13)
  // L8(c13)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c13_;
  goto L8_;

L51_:;
  // sym5 = ldf floor
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf floor in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard5 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // tsp12 = ld tsp
  Rsh_Fir_reg_tsp12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L54() else D11()
  // L54()
  goto L54_;

L53_:;
  // r27 = dyn base5(<lang `+`(`[`(tsp, 1), ts.eps)>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

D11_:;
  // deopt 48 [tsp12]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_tsp12_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // tsp13 = force? tsp12
  Rsh_Fir_reg_tsp13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tsp12_);
  // checkMissing(tsp13)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_tsp13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(tsp13)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_tsp13_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c16 then L55() else L56(tsp13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L55()
    goto L55_;
  } else {
  // L56(tsp13)
    Rsh_Fir_reg_tsp15_ = Rsh_Fir_reg_tsp13_;
    goto L56_;
  }

L55_:;
  // dr6 = tryDispatchBuiltin.1("[", tsp13)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_tsp13_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc3 then L57() else L56(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L57()
    goto L57_;
  } else {
  // L56(dr6)
    Rsh_Fir_reg_tsp15_ = Rsh_Fir_reg_dr6_;
    goto L56_;
  }

L56_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r29 = dyn __3(tsp15, 1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_tsp15_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r29)
  // L13(r29)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r29_;
  goto L13_;

L57_:;
  // dx13 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L13(dx13)
  // L13(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L13_;

D12_:;
  // deopt 52 [dx14, ts_eps5]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_ts_eps5_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // ts_eps6 = force? ts_eps5
  Rsh_Fir_reg_ts_eps6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ts_eps5_);
  // checkMissing(ts_eps6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_ts_eps6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r30 = `+`(dx14, ts_eps6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_ts_eps6_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // r31 = floor(r30)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r31_;
  goto L12_;

L59_:;
  // tsp16 = ld tsp
  Rsh_Fir_reg_tsp16_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L61() else D13()
  // L61()
  goto L61_;

L60_:;
  // r32 = dyn base6(<lang `+`(`*`(`[`(tsp, 3), `(`(`-`(`[`(tsp, 1), is))), 0.001)>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r32)
  // L14(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L14_;

D13_:;
  // deopt 58 [tsp16]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_tsp16_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L61_:;
  // tsp17 = force? tsp16
  Rsh_Fir_reg_tsp17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tsp16_);
  // checkMissing(tsp17)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_tsp17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(tsp17)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_tsp17_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c17 then L62() else L63(tsp17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L62()
    goto L62_;
  } else {
  // L63(tsp17)
    Rsh_Fir_reg_tsp19_ = Rsh_Fir_reg_tsp17_;
    goto L63_;
  }

L62_:;
  // dr8 = tryDispatchBuiltin.1("[", tsp17)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_tsp17_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc4 then L64() else L63(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L64()
    goto L64_;
  } else {
  // L63(dr8)
    Rsh_Fir_reg_tsp19_ = Rsh_Fir_reg_dr8_;
    goto L63_;
  }

L63_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r34 = dyn __4(tsp19, 3)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_tsp19_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r34_;
  goto L15_;

L64_:;
  // dx15 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L15(dx15)
  // L15(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L15_;

D14_:;
  // deopt 62 [dx16, tsp20]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_tsp20_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L65_:;
  // tsp21 = force? tsp20
  Rsh_Fir_reg_tsp21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tsp20_);
  // checkMissing(tsp21)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_tsp21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(tsp21)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_tsp21_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c18 then L66() else L67(dx16, tsp21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L66()
    goto L66_;
  } else {
  // L67(dx16, tsp21)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_tsp23_ = Rsh_Fir_reg_tsp21_;
    goto L67_;
  }

L66_:;
  // dr10 = tryDispatchBuiltin.1("[", tsp21)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_tsp21_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc5 then L68() else L67(dx16, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L68()
    goto L68_;
  } else {
  // L67(dx16, dr10)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_tsp23_ = Rsh_Fir_reg_dr10_;
    goto L67_;
  }

L67_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r35 = dyn __5(tsp23, 1)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_tsp23_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(dx18, r35)
  // L16(dx18, r35)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r35_;
  goto L16_;

L68_:;
  // dx20 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L16(dx16, dx20)
  // L16(dx16, dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx20_;
  goto L16_;

D15_:;
  // deopt 66 [dx21, dx22, is5]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_is5_;
  Rsh_Fir_deopt(66, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L69_:;
  // is6 = force? is5
  Rsh_Fir_reg_is6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is5_);
  // checkMissing(is6)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_is6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r36 = `-`(dx22, is6)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_is6_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // r37 = `*`(dx21, r36)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // r38 = `+`(r37, 0.001)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // r39 = floor(r38)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L14(r39)
  // L14(r39)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r39_;
  goto L14_;

L70_:;
  // is7 = ld is
  Rsh_Fir_reg_is7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L72() else D16()
  // L72()
  goto L72_;

L71_:;
  // r40 = dyn base7(<sym is>, <lang `+`(fs, 1.0)>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L17_;

D16_:;
  // deopt 76 [is7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_is7_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // is8 = force? is7
  Rsh_Fir_reg_is8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is7_);
  // checkMissing(is8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_is8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // fs = ld fs
  Rsh_Fir_reg_fs = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L73() else D17()
  // L73()
  goto L73_;

D17_:;
  // deopt 78 [fs]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_fs;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L73_:;
  // fs1 = force? fs
  Rsh_Fir_reg_fs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fs);
  // checkMissing(fs1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_fs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r42 = `+`(fs1, 1.0)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_fs1_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r43 = dyn c19(is8, r42)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_is8_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

D18_:;
  // deopt 83 [r43]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L17(r43)
  // L17(r43)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r43_;
  goto L17_;

D19_:;
  // deopt 84 [tsp24]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_tsp24_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L76_:;
  // tsp25 = force? tsp24
  Rsh_Fir_reg_tsp25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tsp24_);
  // checkMissing(tsp25)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_tsp25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(tsp25)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_tsp25_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c20 then L77() else L78(tsp25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L77()
    goto L77_;
  } else {
  // L78(tsp25)
    Rsh_Fir_reg_tsp27_ = Rsh_Fir_reg_tsp25_;
    goto L78_;
  }

L77_:;
  // dr12 = tryDispatchBuiltin.1("[", tsp25)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_tsp25_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc6 then L79() else L78(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L79()
    goto L79_;
  } else {
  // L78(dr12)
    Rsh_Fir_reg_tsp27_ = Rsh_Fir_reg_dr12_;
    goto L78_;
  }

L78_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r44 = dyn __6(tsp27, 1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_tsp27_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L18(r44)
  // L18(r44)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r44_;
  goto L18_;

L79_:;
  // dx23 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L18(dx23)
  // L18(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L18_;
}
SEXP Rsh_Fir_user_promise_inner2104823373_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn getOption("ts.eps")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2104823373_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
