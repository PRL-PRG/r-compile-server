#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner586443352_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner586443352_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner586443352_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner586443352_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner586443352
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner586443352_, RHO, CCP);
  // st `qr.Q` = r
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
SEXP Rsh_Fir_user_function_inner586443352_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner586443352 dynamic dispatch ([qr, complete, Dvec])

  return Rsh_Fir_user_version_inner586443352_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner586443352_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner586443352 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner586443352/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_qr;  // qr
  SEXP Rsh_Fir_reg_complete;  // complete
  SEXP Rsh_Fir_reg_Dvec;  // Dvec
  SEXP Rsh_Fir_reg_complete_isMissing;  // complete_isMissing
  SEXP Rsh_Fir_reg_complete_orDefault;  // complete_orDefault
  SEXP Rsh_Fir_reg_is_qr;  // is_qr
  SEXP Rsh_Fir_reg_qr1_;  // qr1
  SEXP Rsh_Fir_reg_qr2_;  // qr2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_qr3_;  // qr3
  SEXP Rsh_Fir_reg_qr4_;  // qr4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_qr6_;  // qr6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_dqr;  // dqr
  SEXP Rsh_Fir_reg_dqr1_;  // dqr1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dqr3_;  // dqr3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_qr7_;  // qr7
  SEXP Rsh_Fir_reg_qr8_;  // qr8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_qr10_;  // qr10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_cmplx;  // cmplx
  SEXP Rsh_Fir_reg_cmplx1_;  // cmplx1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_complete1_;  // complete1
  SEXP Rsh_Fir_reg_complete2_;  // complete2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_dqr4_;  // dqr4
  SEXP Rsh_Fir_reg_dqr5_;  // dqr5
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_complete3_;  // complete3
  SEXP Rsh_Fir_reg_complete4_;  // complete4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_diag;  // diag
  SEXP Rsh_Fir_reg_Dvec1_;  // Dvec1
  SEXP Rsh_Fir_reg_Dvec2_;  // Dvec2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_dqr6_;  // dqr6
  SEXP Rsh_Fir_reg_dqr7_;  // dqr7
  SEXP Rsh_Fir_reg_min1_;  // min1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_diag1_;  // diag1
  SEXP Rsh_Fir_reg_Dvec3_;  // Dvec3
  SEXP Rsh_Fir_reg_Dvec4_;  // Dvec4
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_Dvec6_;  // Dvec6
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_Dvec9_;  // Dvec9
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_ncols;  // ncols
  SEXP Rsh_Fir_reg_ncols1_;  // ncols1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_ncols2_;  // ncols2
  SEXP Rsh_Fir_reg_ncols3_;  // ncols3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_qr_qy;  // qr_qy
  SEXP Rsh_Fir_reg_qr11_;  // qr11
  SEXP Rsh_Fir_reg_qr12_;  // qr12
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_D;  // D
  SEXP Rsh_Fir_reg_D1_;  // D1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r41_;  // r41

  // Bind parameters
  Rsh_Fir_reg_qr = PARAMS[0];
  Rsh_Fir_reg_complete = PARAMS[1];
  Rsh_Fir_reg_Dvec = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st qr = qr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_qr, RHO);
  (void)(Rsh_Fir_reg_qr);
  // complete_isMissing = missing.0(complete)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_complete;
  Rsh_Fir_reg_complete_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if complete_isMissing then L0(FALSE) else L0(complete)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_complete_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_complete_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(complete)
    Rsh_Fir_reg_complete_orDefault = Rsh_Fir_reg_complete;
    goto L0_;
  }

L0_:;
  // st complete = complete_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_complete_orDefault, RHO);
  (void)(Rsh_Fir_reg_complete_orDefault);
  // st Dvec = Dvec
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_Dvec, RHO);
  (void)(Rsh_Fir_reg_Dvec);
  // is_qr = ldf `is.qr`
  Rsh_Fir_reg_is_qr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L3_:;
  // st dqr = r6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // dqr = ld dqr
  Rsh_Fir_reg_dqr = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L4_:;
  // st n = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

L5_:;
  // c4 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L12()
  // L12()
  goto L12_;

L7_:;
  // st Dvec = r18
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // goto L12()
  // L12()
  goto L12_;

L8_:;
  // goto L9(1.0)
  // L9(1.0)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 10);
  goto L9_;

L9_:;
  // complete1 = ld complete
  Rsh_Fir_reg_complete1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

L10_:;
  // sym3 = ldf min
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf min in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L11_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r22 = dyn rep_int(r19, n2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

L12_:;
  // complete3 = ld complete
  Rsh_Fir_reg_complete3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

L13_:;
  // sym4 = ldf min
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf min in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L14_:;
  // st D = r27
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // qr_qy = ldf `qr.qy`
  Rsh_Fir_reg_qr_qy = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L65() else D22()
  // L65()
  goto L65_;

L15_:;
  // st ncols = r29
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // diag1 = ldf diag
  Rsh_Fir_reg_diag1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   qr1 = ld qr;
  //   qr2 = force? qr1;
  //   checkMissing(qr2);
  //   return qr2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_, CCP, RHO);
  // r1 = dyn is_qr(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_qr, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L18() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L1()
    goto L1_;
  }

L18_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r3 = dyn stop("argument is not a QR decomposition")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L2()
  // L2()
  goto L2_;

L22_:;
  // qr3 = ld qr
  Rsh_Fir_reg_qr3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L23_:;
  // r5 = dyn base(<lang `$`(qr, qr)>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D4_:;
  // deopt 13 [qr3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_qr3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L24_:;
  // qr4 = force? qr3
  Rsh_Fir_reg_qr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr3_);
  // checkMissing(qr4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_qr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(qr4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L26() else L27(qr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L27(qr4)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_qr4_;
    goto L27_;
  }

L25_:;
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r8 = dyn dim(dx1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

L26_:;
  // dr = tryDispatchBuiltin.1("$", qr4)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L28() else L27(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L28()
    goto L28_;
  } else {
  // L27(dr)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_dr;
    goto L27_;
  }

L27_:;
  // r7 = `$`(qr6, <sym qr>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_qr6_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L25(r7)
  // L25(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L25_;

L28_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L25(dx)
  // L25(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L25_;

D5_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r8_;
  goto L3_;

D6_:;
  // deopt 19 [dqr]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dqr;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // dqr1 = force? dqr
  Rsh_Fir_reg_dqr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dqr);
  // checkMissing(dqr1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dqr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(dqr1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dqr1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L31() else L32(dqr1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L31()
    goto L31_;
  } else {
  // L32(dqr1)
    Rsh_Fir_reg_dqr3_ = Rsh_Fir_reg_dqr1_;
    goto L32_;
  }

L31_:;
  // dr2 = tryDispatchBuiltin.1("[", dqr1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_dqr1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L33() else L32(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L33()
    goto L33_;
  } else {
  // L32(dr2)
    Rsh_Fir_reg_dqr3_ = Rsh_Fir_reg_dr2_;
    goto L32_;
  }

L32_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r9 = dyn __(dqr3, 1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dqr3_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L4_;

L33_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p1 = prom<V +>{
  //   qr7 = ld qr;
  //   qr8 = force? qr7;
  //   checkMissing(qr8);
  //   c3 = `is.object`(qr8);
  //   if c3 then L1() else L2(qr8);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", qr8);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(qr10):
  //   r10 = `$`(qr10, <sym qr>);
  //   goto L0(r10);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_1, CCP, RHO);
  // r12 = dyn mode(p1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

D8_:;
  // deopt 28 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L35_:;
  // r13 = `==`(r12, "complex")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // st cmplx = r13
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard1 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r16 = dyn missing(<sym Dvec>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L5_;

L37_:;
  // r14 = dyn base1(<sym Dvec>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

L38_:;
  // sym2 = ldf `rep.int`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf `rep.int` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // cmplx = ld cmplx
  Rsh_Fir_reg_cmplx = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L41() else D9()
  // L41()
  goto L41_;

L40_:;
  // r17 = dyn base2(<lang if(cmplx, `+`(1.0, `(`(`+`(0.0, 0.0i))), 1.0)>, <lang if(complete, n, min(dqr))>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L7_;

D9_:;
  // deopt 37 [cmplx]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_cmplx;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L41_:;
  // cmplx1 = force? cmplx
  Rsh_Fir_reg_cmplx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cmplx);
  // checkMissing(cmplx1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_cmplx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(cmplx1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_cmplx1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c5 then L42() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L42()
    goto L42_;
  } else {
  // L8()
    goto L8_;
  }

L42_:;
  // goto L9(1.0+0.0i)
  // L9(1.0+0.0i)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 29);
  goto L9_;

D10_:;
  // deopt 43 [complete1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_complete1_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // complete2 = force? complete1
  Rsh_Fir_reg_complete2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_complete1_);
  // checkMissing(complete2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_complete2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(complete2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_complete2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c6 then L45() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L45()
    goto L45_;
  } else {
  // L10()
    goto L10_;
  }

L45_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D11_:;
  // deopt 45 [n]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // goto L11(n1)
  // L11(n1)
  Rsh_Fir_reg_n2_ = Rsh_Fir_reg_n1_;
  goto L11_;

L48_:;
  // dqr4 = ld dqr
  Rsh_Fir_reg_dqr4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

L49_:;
  // r20 = dyn base3(<sym dqr>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_n2_ = Rsh_Fir_reg_r20_;
  goto L11_;

D12_:;
  // deopt 49 [dqr4]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dqr4_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // dqr5 = force? dqr4
  Rsh_Fir_reg_dqr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dqr4_);
  // checkMissing(dqr5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dqr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r21 = dyn min(dqr5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dqr5_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

D13_:;
  // deopt 52 [r21]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_n2_ = Rsh_Fir_reg_r21_;
  goto L11_;

D14_:;
  // deopt 54 [r22]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r22_;
  goto L7_;

D15_:;
  // deopt 58 [complete3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_complete3_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // complete4 = force? complete3
  Rsh_Fir_reg_complete4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_complete3_);
  // checkMissing(complete4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_complete4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c7 = `as.logical`(complete4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_complete4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c7 then L55() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L55()
    goto L55_;
  } else {
  // L13()
    goto L13_;
  }

L55_:;
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

D16_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p2 = prom<V +>{
  //   Dvec1 = ld Dvec;
  //   Dvec2 = force? Dvec1;
  //   checkMissing(Dvec2);
  //   return Dvec2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_2, CCP, RHO);
  // p3 = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   return n4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_3, CCP, RHO);
  // r26 = dyn diag(p2, p3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

D17_:;
  // deopt 64 [r26]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L14_;

L59_:;
  // dqr6 = ld dqr
  Rsh_Fir_reg_dqr6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

L60_:;
  // r28 = dyn base4(<sym dqr>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L15(r28)
  // L15(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L15_;

D18_:;
  // deopt 67 [dqr6]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dqr6_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L61_:;
  // dqr7 = force? dqr6
  Rsh_Fir_reg_dqr7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dqr6_);
  // checkMissing(dqr7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dqr7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // min1 = ldf min in base
  Rsh_Fir_reg_min1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r30 = dyn min1(dqr7)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dqr7_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

D19_:;
  // deopt 70 [r30]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L15(r30)
  // L15(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L15_;

D20_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p4 = prom<V +>{
  //   Dvec3 = ld Dvec;
  //   Dvec4 = force? Dvec3;
  //   checkMissing(Dvec4);
  //   c8 = `is.object`(Dvec4);
  //   if c8 then L2() else L3(Dvec4);
  // L0(dx7):
  //   return dx7;
  // L2():
  //   dr6 = tryDispatchBuiltin.1("[", Dvec4);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L4() else L3(dr6);
  // L3(Dvec6):
  //   sym5 = ldf seq_len;
  //   base5 = ldf seq_len in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L5() else L6();
  // L1(Dvec9, r32):
  //   __1 = ldf `[` in base;
  //   r34 = dyn __1(Dvec9, r32);
  //   goto L0(r34);
  // L4():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // L5():
  //   ncols = ld ncols;
  //   ncols1 = force? ncols;
  //   checkMissing(ncols1);
  //   r33 = seq_len(ncols1);
  //   goto L1(Dvec6, r33);
  // L6():
  //   r31 = dyn base5(<sym ncols>);
  //   goto L1(Dvec6, r31);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_4, CCP, RHO);
  // p5 = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   return n6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_5, CCP, RHO);
  // p6 = prom<V +>{
  //   ncols2 = ld ncols;
  //   ncols3 = force? ncols2;
  //   checkMissing(ncols3);
  //   return ncols3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_6, CCP, RHO);
  // r38 = dyn diag1[, nrow, ncol](p4, p5, p6)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_arg_names17[2] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag1_, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

D21_:;
  // deopt 79 [r38]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L14(r38)
  // L14(r38)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r38_;
  goto L14_;

D22_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p7 = prom<V +>{
  //   qr11 = ld qr;
  //   qr12 = force? qr11;
  //   checkMissing(qr12);
  //   return qr12;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_7, CCP, RHO);
  // p8 = prom<V +>{
  //   D = ld D;
  //   D1 = force? D;
  //   checkMissing(D1);
  //   return D1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner586443352_8, CCP, RHO);
  // r41 = dyn qr_qy(p7, p8)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_qy, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L66() else D23()
  // L66()
  goto L66_;

D23_:;
  // deopt 85 [r41]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L66_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_promise_inner586443352_(SEXP CCP, SEXP RHO) {
  // qr1 = ld qr
  Rsh_Fir_reg_qr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr2 = force? qr1
  Rsh_Fir_reg_qr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr1_);
  // checkMissing(qr2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_qr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return qr2
  return Rsh_Fir_reg_qr2_;
}
SEXP Rsh_Fir_user_promise_inner586443352_1(SEXP CCP, SEXP RHO) {
  // qr7 = ld qr
  Rsh_Fir_reg_qr7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr8 = force? qr7
  Rsh_Fir_reg_qr8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr7_);
  // checkMissing(qr8)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_qr8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(qr8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_qr8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(qr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(qr8)
    Rsh_Fir_reg_qr10_ = Rsh_Fir_reg_qr8_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", qr8)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_qr8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_qr10_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r10 = `$`(qr10, <sym qr>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_qr10_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r10_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner586443352_2(SEXP CCP, SEXP RHO) {
  // Dvec1 = ld Dvec
  Rsh_Fir_reg_Dvec1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Dvec2 = force? Dvec1
  Rsh_Fir_reg_Dvec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Dvec1_);
  // checkMissing(Dvec2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_Dvec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return Dvec2
  return Rsh_Fir_reg_Dvec2_;
}
SEXP Rsh_Fir_user_promise_inner586443352_3(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return n4
  return Rsh_Fir_reg_n4_;
}
SEXP Rsh_Fir_user_promise_inner586443352_4(SEXP CCP, SEXP RHO) {
  // Dvec3 = ld Dvec
  Rsh_Fir_reg_Dvec3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Dvec4 = force? Dvec3
  Rsh_Fir_reg_Dvec4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Dvec3_);
  // checkMissing(Dvec4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_Dvec4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(Dvec4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_Dvec4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c8 then L2() else L3(Dvec4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L2()
    goto L2_;
  } else {
  // L3(Dvec4)
    Rsh_Fir_reg_Dvec6_ = Rsh_Fir_reg_Dvec4_;
    goto L3_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r34 = dyn __1(Dvec9, r32)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_Dvec9_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // dr6 = tryDispatchBuiltin.1("[", Dvec4)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_Dvec4_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc3 then L4() else L3(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr6)
    Rsh_Fir_reg_Dvec6_ = Rsh_Fir_reg_dr6_;
    goto L3_;
  }

L3_:;
  // sym5 = ldf seq_len
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base5 = ldf seq_len in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard5 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;

L5_:;
  // ncols = ld ncols
  Rsh_Fir_reg_ncols = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ncols1 = force? ncols
  Rsh_Fir_reg_ncols1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols);
  // checkMissing(ncols1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_ncols1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r33 = seq_len(ncols1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_ncols1_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L1(Dvec6, r33)
  // L1(Dvec6, r33)
  Rsh_Fir_reg_Dvec9_ = Rsh_Fir_reg_Dvec6_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L1_;

L6_:;
  // r31 = dyn base5(<sym ncols>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(Dvec6, r31)
  // L1(Dvec6, r31)
  Rsh_Fir_reg_Dvec9_ = Rsh_Fir_reg_Dvec6_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner586443352_5(SEXP CCP, SEXP RHO) {
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return n6
  return Rsh_Fir_reg_n6_;
}
SEXP Rsh_Fir_user_promise_inner586443352_6(SEXP CCP, SEXP RHO) {
  // ncols2 = ld ncols
  Rsh_Fir_reg_ncols2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ncols3 = force? ncols2
  Rsh_Fir_reg_ncols3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols2_);
  // checkMissing(ncols3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_ncols3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return ncols3
  return Rsh_Fir_reg_ncols3_;
}
SEXP Rsh_Fir_user_promise_inner586443352_7(SEXP CCP, SEXP RHO) {
  // qr11 = ld qr
  Rsh_Fir_reg_qr11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr12 = force? qr11
  Rsh_Fir_reg_qr12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr11_);
  // checkMissing(qr12)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_qr12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return qr12
  return Rsh_Fir_reg_qr12_;
}
SEXP Rsh_Fir_user_promise_inner586443352_8(SEXP CCP, SEXP RHO) {
  // D = ld D
  Rsh_Fir_reg_D = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // D1 = force? D
  Rsh_Fir_reg_D1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D);
  // checkMissing(D1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_D1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return D1
  return Rsh_Fir_reg_D1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
