#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1648651840_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1648651840_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1648651840_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1648651840
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1648651840_, RHO, CCP);
  // st `qr.qy` = r
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
SEXP Rsh_Fir_user_function_inner1648651840_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1648651840 dynamic dispatch ([qr, y])

  return Rsh_Fir_user_version_inner1648651840_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1648651840_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1648651840 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1648651840/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_qr;  // qr
  SEXP Rsh_Fir_reg_y;  // y
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
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_qr7_;  // qr7
  SEXP Rsh_Fir_reg_qr8_;  // qr8
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_qr_qy_cmplx;  // qr_qy_cmplx
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_isTRUE;  // isTRUE
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_qr9_;  // qr9
  SEXP Rsh_Fir_reg_qr10_;  // qr10
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_qr11_;  // qr11
  SEXP Rsh_Fir_reg_qr12_;  // qr12
  SEXP Rsh_Fir_reg_as_matrix1_;  // as_matrix1
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_qr_qy_real;  // qr_qy_real
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_qr13_;  // qr13
  SEXP Rsh_Fir_reg_qr14_;  // qr14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_qr16_;  // qr16
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_qr17_;  // qr17
  SEXP Rsh_Fir_reg_qr18_;  // qr18
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_qr20_;  // qr20
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_NCOL;  // NCOL
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_as_integer2_;  // as_integer2
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_ny;  // ny
  SEXP Rsh_Fir_reg_ny1_;  // ny1
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_y8_;  // y8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg__F_dqrqy;  // _F_dqrqy
  SEXP Rsh_Fir_reg__F_dqrqy1_;  // _F_dqrqy1
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_qr21_;  // qr21
  SEXP Rsh_Fir_reg_qr22_;  // qr22
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_qr24_;  // qr24
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_qr25_;  // qr25
  SEXP Rsh_Fir_reg_qr26_;  // qr26
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_qr28_;  // qr28
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_as_double1_;  // as_double1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_ny2_;  // ny2
  SEXP Rsh_Fir_reg_ny3_;  // ny3
  SEXP Rsh_Fir_reg_y11_;  // y11
  SEXP Rsh_Fir_reg_y12_;  // y12
  SEXP Rsh_Fir_reg__Fortran;  // _Fortran
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r71_;  // r71

  // Bind parameters
  Rsh_Fir_reg_qr = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st qr = qr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_qr, RHO);
  (void)(Rsh_Fir_reg_qr);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // is_qr = ldf `is.qr`
  Rsh_Fir_reg_is_qr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // sym = ldf `is.complex`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `is.complex` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L2_:;
  // c3 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c3 then L36() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L36()
    goto L36_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L6_:;
  // sym4 = ldf `as.integer`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base4 = ldf `as.integer` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

L9_:;
  // st n = r28
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard5 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L10_:;
  // c6 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c6 then L65() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L65()
    goto L65_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym6 = ldf `as.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base6 = ldf `as.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard6 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L13_:;
  // st k = r39
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym7 = ldf `as.integer`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base7 = ldf `as.integer` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard7 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L14_:;
  // st ny = r43
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard8 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L15_:;
  // c8 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c8 then L86() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L86()
    goto L86_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L90() else D31()
  // L90()
  goto L90_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym9 = ldf `.Fortran`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base9 = ldf `.Fortran` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard9 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L20_:;
  // c12 = `is.object`(r59)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c12 then L125() else L126(r59)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L125()
    goto L125_;
  } else {
  // L126(r59)
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r59_;
    goto L126_;
  }

L21_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L110() else D41()
  // L110()
  goto L110_;

L22_:;
  // y9 = ld y
  Rsh_Fir_reg_y9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L120() else D45()
  // L120()
  goto L120_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p = prom<V +>{
  //   qr1 = ld qr;
  //   qr2 = force? qr1;
  //   checkMissing(qr2);
  //   return qr2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_, CCP, RHO);
  // r1 = dyn is_qr(p)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_qr, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L25() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L0()
    goto L0_;
  }

L25_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // r3 = dyn stop("argument is not a QR decomposition")
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L1()
  // L1()
  goto L1_;

L29_:;
  // qr3 = ld qr
  Rsh_Fir_reg_qr3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

L30_:;
  // r5 = dyn base(<lang `$`(qr, qr)>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D4_:;
  // deopt 12 [qr3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_qr3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // qr4 = force? qr3
  Rsh_Fir_reg_qr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr3_);
  // checkMissing(qr4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_qr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(qr4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c1 then L33() else L34(qr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L34(qr4)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_qr4_;
    goto L34_;
  }

L32_:;
  // c2 = `is.complex`(dx1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L2(c2)
  // L2(c2)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_c2_;
  goto L2_;

L33_:;
  // dr = tryDispatchBuiltin.1("$", qr4)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L35() else L34(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_dr;
    goto L34_;
  }

L34_:;
  // r7 = `$`(qr6, <sym qr>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_qr6_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L32(r7)
  // L32(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L32_;

L35_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L32(dx)
  // L32(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L32_;

L36_:;
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard1 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // qr7 = ld qr
  Rsh_Fir_reg_qr7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

L38_:;
  // r8 = dyn base1(<lang qr_qy_cmplx(qr, as.matrix(y), FALSE)>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

D5_:;
  // deopt 18 [qr7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_qr7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L39_:;
  // qr8 = force? qr7
  Rsh_Fir_reg_qr8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr7_);
  // checkMissing(qr8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_qr8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p1 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_1, CCP, RHO);
  // r11 = dyn as_matrix(p1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

D7_:;
  // deopt 23 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // qr_qy_cmplx = ldf qr_qy_cmplx in base
  Rsh_Fir_reg_qr_qy_cmplx = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r12 = dyn qr_qy_cmplx(qr8, r11, FALSE)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_qr8_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_qy_cmplx, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

D8_:;
  // deopt 26 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r12_;
  goto L4_;

D9_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p2 = prom<V +>{
  //   sym2 = ldf attr;
  //   base2 = ldf attr in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   qr9 = ld qr;
  //   qr10 = force? qr9;
  //   checkMissing(qr10);
  //   attr = ldf attr in base;
  //   r17 = dyn attr(qr10, "useLAPACK");
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base2(<sym qr>, "useLAPACK");
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_2, CCP, RHO);
  // r19 = dyn isTRUE(p2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D10_:;
  // deopt 33 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L46_:;
  // c4 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L47() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L47()
    goto L47_;
  } else {
  // L6()
    goto L6_;
  }

L47_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // qr11 = ld qr
  Rsh_Fir_reg_qr11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

L49_:;
  // r20 = dyn base3(<lang qr_qy_real(qr, as.matrix(y), FALSE)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L7_;

D11_:;
  // deopt 36 [qr11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_qr11_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // qr12 = force? qr11
  Rsh_Fir_reg_qr12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr11_);
  // checkMissing(qr12)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_qr12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // as_matrix1 = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

D12_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p3 = prom<V +>{
  //   y3 = ld y;
  //   y4 = force? y3;
  //   checkMissing(y4);
  //   return y4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_3, CCP, RHO);
  // r23 = dyn as_matrix1(p3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L52() else D13()
  // L52()
  goto L52_;

D13_:;
  // deopt 41 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L52_:;
  // qr_qy_real = ldf qr_qy_real in base
  Rsh_Fir_reg_qr_qy_real = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r24 = dyn qr_qy_real(qr12, r23, FALSE)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_qr12_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_qy_real, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

D14_:;
  // deopt 44 [r24]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L7(r24)
  // L7(r24)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r24_;
  goto L7_;

L56_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

L57_:;
  // r27 = dyn base4(<lang nrow(`$`(qr, qr))>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r27)
  // L9(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L9_;

D15_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p4 = prom<V +>{
  //   qr13 = ld qr;
  //   qr14 = force? qr13;
  //   checkMissing(qr14);
  //   c5 = `is.object`(qr14);
  //   if c5 then L1() else L2(qr14);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", qr14);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(qr16):
  //   r29 = `$`(qr16, <sym qr>);
  //   goto L0(r29);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_4, CCP, RHO);
  // r31 = dyn nrow(p4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

D16_:;
  // deopt 53 [r31]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L59_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r32 = dyn as_integer(r31)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 55 [r32]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L9(r32)
  // L9(r32)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r32_;
  goto L9_;

L61_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L63() else D18()
  // L63()
  goto L63_;

L62_:;
  // r33 = dyn base5(<sym n>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L10_;

D18_:;
  // deopt 59 [n]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L63_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r35 = dyn is_na(n1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L64() else D19()
  // L64()
  goto L64_;

D19_:;
  // deopt 62 [r35]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L10(r35)
  // L10(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L10_;

L65_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D20_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // r36 = dyn stop1("invalid nrow(qr$qr)")
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

D21_:;
  // deopt 66 [r36]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L12()
  // L12()
  goto L12_;

L69_:;
  // qr17 = ld qr
  Rsh_Fir_reg_qr17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D22()
  // L71()
  goto L71_;

L70_:;
  // r38 = dyn base6(<lang `$`(qr, rank)>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L13_;

D22_:;
  // deopt 71 [qr17]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_qr17_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L71_:;
  // qr18 = force? qr17
  Rsh_Fir_reg_qr18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr17_);
  // checkMissing(qr18)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_qr18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(qr18)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_qr18_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c7 then L73() else L74(qr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L73()
    goto L73_;
  } else {
  // L74(qr18)
    Rsh_Fir_reg_qr20_ = Rsh_Fir_reg_qr18_;
    goto L74_;
  }

L72_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r41 = dyn as_integer1(dx5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L76() else D23()
  // L76()
  goto L76_;

L73_:;
  // dr4 = tryDispatchBuiltin.1("$", qr18)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_qr18_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc2 then L75() else L74(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L75()
    goto L75_;
  } else {
  // L74(dr4)
    Rsh_Fir_reg_qr20_ = Rsh_Fir_reg_dr4_;
    goto L74_;
  }

L74_:;
  // r40 = `$`(qr20, <sym rank>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_qr20_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L72(r40)
  // L72(r40)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r40_;
  goto L72_;

L75_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L72(dx4)
  // L72(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L72_;

D23_:;
  // deopt 75 [r41]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L13(r41)
  // L13(r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L13_;

L77_:;
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L79() else D24()
  // L79()
  goto L79_;

L78_:;
  // r42 = dyn base7(<lang NCOL(y)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L14(r42)
  // L14(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L14_;

D24_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p5 = prom<V +>{
  //   y5 = ld y;
  //   y6 = force? y5;
  //   checkMissing(y6);
  //   return y6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_5, CCP, RHO);
  // r45 = dyn NCOL(p5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L80() else D25()
  // L80()
  goto L80_;

D25_:;
  // deopt 82 [r45]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L80_:;
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r46 = dyn as_integer2(r45)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L81() else D26()
  // L81()
  goto L81_;

D26_:;
  // deopt 84 [r46]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L81_:;
  // goto L14(r46)
  // L14(r46)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r46_;
  goto L14_;

L82_:;
  // ny = ld ny
  Rsh_Fir_reg_ny = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L84() else D27()
  // L84()
  goto L84_;

L83_:;
  // r47 = dyn base8(<sym ny>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L15(r47)
  // L15(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L15_;

D27_:;
  // deopt 88 [ny]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_ny;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L84_:;
  // ny1 = force? ny
  Rsh_Fir_reg_ny1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny);
  // checkMissing(ny1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_ny1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r49 = dyn is_na1(ny1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_ny1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L85() else D28()
  // L85()
  goto L85_;

D28_:;
  // deopt 91 [r49]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L15(r49)
  // L15(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L15_;

L86_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L87() else D29()
  // L87()
  goto L87_;

D29_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // r50 = dyn stop2("invalid NCOL(y)")
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L88() else D30()
  // L88()
  goto L88_;

D30_:;
  // deopt 95 [r50]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L17()
  // L17()
  goto L17_;

D31_:;
  // deopt 101 ["double", l, "double"]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_const(CCP, 34);
  Rsh_Fir_deopt(101, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L90_:;
  // r52 = dyn storage_mode__(l, NULL, "double")
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L91() else D32()
  // L91()
  goto L91_;

D32_:;
  // deopt 103 ["double", r52]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L91_:;
  // st y = r52
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L92() else D33()
  // L92()
  goto L92_;

D33_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // p6 = prom<V +>{
  //   y7 = ld y;
  //   y8 = force? y7;
  //   checkMissing(y8);
  //   return y8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_6, CCP, RHO);
  // r54 = dyn NROW(p6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L93() else D34()
  // L93()
  goto L93_;

D34_:;
  // deopt 108 [r54]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L93_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L94() else D35()
  // L94()
  goto L94_;

D35_:;
  // deopt 108 [r54, n2]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L94_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r55 = `!=`(r54, n3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c9 then L95() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L95()
    goto L95_;
  } else {
  // L18()
    goto L18_;
  }

L95_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L96() else D36()
  // L96()
  goto L96_;

D36_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L96_:;
  // r56 = dyn stop3("'qr' and 'y' must have the same number of rows")
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L97() else D37()
  // L97()
  goto L97_;

D37_:;
  // deopt 114 [r56]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L19()
  // L19()
  goto L19_;

L99_:;
  // _F_dqrqy = ld `.F_dqrqy`
  Rsh_Fir_reg__F_dqrqy = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L101() else D38()
  // L101()
  goto L101_;

L100_:;
  // r58 = dyn base9[, , , , , , , qy](<sym .F_dqrqy>, <lang as.double(`$`(qr, qr))>, <sym n>, <sym k>, <lang as.double(`$`(qr, qraux))>, <sym y>, <sym ny>, <sym y>)
  SEXP Rsh_Fir_array_args78[8];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args78[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args78[4] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args78[5] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args78[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args78[7] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names29[8];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_array_arg_names29[5] = R_MissingArg;
  Rsh_Fir_array_arg_names29[6] = R_MissingArg;
  Rsh_Fir_array_arg_names29[7] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 8, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L20(r58)
  // L20(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L20_;

D38_:;
  // deopt 119 [_F_dqrqy]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg__F_dqrqy;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L101_:;
  // _F_dqrqy1 = force? _F_dqrqy
  Rsh_Fir_reg__F_dqrqy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__F_dqrqy);
  // checkMissing(_F_dqrqy1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg__F_dqrqy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // sym10 = ldf `as.double`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base10 = ldf `as.double` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard10 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L102_:;
  // qr21 = ld qr
  Rsh_Fir_reg_qr21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L104() else D39()
  // L104()
  goto L104_;

L103_:;
  // r60 = dyn base10(<lang `$`(qr, qr)>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L21(r60)
  // L21(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L21_;

D39_:;
  // deopt 123 [qr21]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_qr21_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L104_:;
  // qr22 = force? qr21
  Rsh_Fir_reg_qr22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr21_);
  // checkMissing(qr22)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_qr22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(qr22)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_qr22_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c10 then L106() else L107(qr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L106()
    goto L106_;
  } else {
  // L107(qr22)
    Rsh_Fir_reg_qr24_ = Rsh_Fir_reg_qr22_;
    goto L107_;
  }

L105_:;
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r63 = dyn as_double(dx7)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L109() else D40()
  // L109()
  goto L109_;

L106_:;
  // dr6 = tryDispatchBuiltin.1("$", qr22)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_qr22_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc3 then L108() else L107(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L108()
    goto L108_;
  } else {
  // L107(dr6)
    Rsh_Fir_reg_qr24_ = Rsh_Fir_reg_dr6_;
    goto L107_;
  }

L107_:;
  // r62 = `$`(qr24, <sym qr>)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_qr24_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L105(r62)
  // L105(r62)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r62_;
  goto L105_;

L108_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L105(dx6)
  // L105(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L105_;

D40_:;
  // deopt 127 [r63]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L21(r63)
  // L21(r63)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r63_;
  goto L21_;

D41_:;
  // deopt 128 [n4]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L110_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L111() else D42()
  // L111()
  goto L111_;

D42_:;
  // deopt 130 [k]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L111_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // sym11 = ldf `as.double`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base11 = ldf `as.double` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard11 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L112_:;
  // qr25 = ld qr
  Rsh_Fir_reg_qr25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L114() else D43()
  // L114()
  goto L114_;

L113_:;
  // r64 = dyn base11(<lang `$`(qr, qraux)>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L22(r64)
  // L22(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L22_;

D43_:;
  // deopt 134 [qr25]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_qr25_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L114_:;
  // qr26 = force? qr25
  Rsh_Fir_reg_qr26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr25_);
  // checkMissing(qr26)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_qr26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(qr26)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_qr26_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c11 then L116() else L117(qr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L116()
    goto L116_;
  } else {
  // L117(qr26)
    Rsh_Fir_reg_qr28_ = Rsh_Fir_reg_qr26_;
    goto L117_;
  }

L115_:;
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r67 = dyn as_double1(dx9)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L119() else D44()
  // L119()
  goto L119_;

L116_:;
  // dr8 = tryDispatchBuiltin.1("$", qr26)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_qr26_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc4 then L118() else L117(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L118()
    goto L118_;
  } else {
  // L117(dr8)
    Rsh_Fir_reg_qr28_ = Rsh_Fir_reg_dr8_;
    goto L117_;
  }

L117_:;
  // r66 = `$`(qr28, <sym qraux>)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_qr28_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L115(r66)
  // L115(r66)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r66_;
  goto L115_;

L118_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L115(dx8)
  // L115(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L115_;

D44_:;
  // deopt 138 [r67]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L22(r67)
  // L22(r67)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r67_;
  goto L22_;

D45_:;
  // deopt 139 [y9]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L120_:;
  // y10 = force? y9
  Rsh_Fir_reg_y10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y9_);
  // checkMissing(y10)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_y10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // ny2 = ld ny
  Rsh_Fir_reg_ny2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L121() else D46()
  // L121()
  goto L121_;

D46_:;
  // deopt 141 [ny2]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ny2_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L121_:;
  // ny3 = force? ny2
  Rsh_Fir_reg_ny3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny2_);
  // checkMissing(ny3)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_ny3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // y11 = ld y
  Rsh_Fir_reg_y11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L122() else D47()
  // L122()
  goto L122_;

D47_:;
  // deopt 143 [y11]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_y11_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L122_:;
  // y12 = force? y11
  Rsh_Fir_reg_y12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y11_);
  // checkMissing(y12)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_y12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // _Fortran = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r68 = dyn _Fortran(_F_dqrqy1, r61, n5, k1, r65, y10, ny3, y12)
  SEXP Rsh_Fir_array_args103[8];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg__F_dqrqy1_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args103[3] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args103[4] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args103[5] = Rsh_Fir_reg_y10_;
  Rsh_Fir_array_args103[6] = Rsh_Fir_reg_ny3_;
  Rsh_Fir_array_args103[7] = Rsh_Fir_reg_y12_;
  SEXP Rsh_Fir_array_arg_names34[8];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_array_arg_names34[4] = R_MissingArg;
  Rsh_Fir_array_arg_names34[5] = R_MissingArg;
  Rsh_Fir_array_arg_names34[6] = R_MissingArg;
  Rsh_Fir_array_arg_names34[7] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran, 8, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L123() else D48()
  // L123()
  goto L123_;

D48_:;
  // deopt 147 [r68]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L20(r68)
  // L20(r68)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r68_;
  goto L20_;

L124_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx11
  return Rsh_Fir_reg_dx11_;

L125_:;
  // dr10 = tryDispatchBuiltin.1("$", r59)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc5 then L127() else L126(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L127()
    goto L127_;
  } else {
  // L126(dr10)
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_dr10_;
    goto L126_;
  }

L126_:;
  // r71 = `$`(r70, <sym qy>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L124(r71)
  // L124(r71)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r71_;
  goto L124_;

L127_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L124(dx10)
  // L124(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L124_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_(SEXP CCP, SEXP RHO) {
  // qr1 = ld qr
  Rsh_Fir_reg_qr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr2 = force? qr1
  Rsh_Fir_reg_qr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr1_);
  // checkMissing(qr2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_qr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return qr2
  return Rsh_Fir_reg_qr2_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_1(SEXP CCP, SEXP RHO) {
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_2(SEXP CCP, SEXP RHO) {
  // sym2 = ldf attr
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf attr in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // qr9 = ld qr
  Rsh_Fir_reg_qr9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr10 = force? qr9
  Rsh_Fir_reg_qr10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr9_);
  // checkMissing(qr10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_qr10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r17 = dyn attr(qr10, "useLAPACK")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_qr10_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base2(<sym qr>, "useLAPACK")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_3(SEXP CCP, SEXP RHO) {
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return y4
  return Rsh_Fir_reg_y4_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_4(SEXP CCP, SEXP RHO) {
  // qr13 = ld qr
  Rsh_Fir_reg_qr13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr14 = force? qr13
  Rsh_Fir_reg_qr14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr13_);
  // checkMissing(qr14)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_qr14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(qr14)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_qr14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(qr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(qr14)
    Rsh_Fir_reg_qr16_ = Rsh_Fir_reg_qr14_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", qr14)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_qr14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_qr16_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r29 = `$`(qr16, <sym qr>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_qr16_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r29_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_5(SEXP CCP, SEXP RHO) {
  // y5 = ld y
  Rsh_Fir_reg_y5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y6 = force? y5
  Rsh_Fir_reg_y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y5_);
  // checkMissing(y6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return y6
  return Rsh_Fir_reg_y6_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_6(SEXP CCP, SEXP RHO) {
  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return y8
  return Rsh_Fir_reg_y8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
