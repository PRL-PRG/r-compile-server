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
SEXP Rsh_Fir_user_promise_inner1648651840_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1648651840_14(SEXP CCP, SEXP RHO);
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
  // st `qr.coef` = r
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
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_qr3_;  // qr3
  SEXP Rsh_Fir_reg_qr4_;  // qr4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_qr6_;  // qr6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_qr7_;  // qr7
  SEXP Rsh_Fir_reg_qr8_;  // qr8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_qr10_;  // qr10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_qr11_;  // qr11
  SEXP Rsh_Fir_reg_qr12_;  // qr12
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_qr14_;  // qr14
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_as_integer2_;  // as_integer2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_is_na2_;  // is_na2
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_im;  // im
  SEXP Rsh_Fir_reg_im1_;  // im1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_ncol1_;  // ncol1
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_as_integer3_;  // as_integer3
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_ny;  // ny
  SEXP Rsh_Fir_reg_ny1_;  // ny1
  SEXP Rsh_Fir_reg_is_na3_;  // is_na3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_stop4_;  // stop4
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_nrow1_;  // nrow1
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_y8_;  // y8
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop5_;  // stop5
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_qr15_;  // qr15
  SEXP Rsh_Fir_reg_qr16_;  // qr16
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_qr18_;  // qr18
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_isC;  // isC
  SEXP Rsh_Fir_reg_isC1_;  // isC1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_ny2_;  // ny2
  SEXP Rsh_Fir_reg_ny3_;  // ny3
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_colnames;  // colnames
  SEXP Rsh_Fir_reg_qr19_;  // qr19
  SEXP Rsh_Fir_reg_qr20_;  // qr20
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_qr22_;  // qr22
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_isC2_;  // isC2
  SEXP Rsh_Fir_reg_isC3_;  // isC3
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_qr23_;  // qr23
  SEXP Rsh_Fir_reg_qr24_;  // qr24
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_qr_coef_cmplx;  // qr_coef_cmplx
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_ix;  // ix
  SEXP Rsh_Fir_reg_ix1_;  // ix1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_qr25_;  // qr25
  SEXP Rsh_Fir_reg_qr26_;  // qr26
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_qr28_;  // qr28
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_isTRUE;  // isTRUE
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_qr29_;  // qr29
  SEXP Rsh_Fir_reg_qr30_;  // qr30
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_qr31_;  // qr31
  SEXP Rsh_Fir_reg_qr32_;  // qr32
  SEXP Rsh_Fir_reg_y11_;  // y11
  SEXP Rsh_Fir_reg_y12_;  // y12
  SEXP Rsh_Fir_reg_qr_coef_real;  // qr_coef_real
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_ix2_;  // ix2
  SEXP Rsh_Fir_reg_ix3_;  // ix3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_qr33_;  // qr33
  SEXP Rsh_Fir_reg_qr34_;  // qr34
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_qr36_;  // qr36
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg__F_dqrcf;  // _F_dqrcf
  SEXP Rsh_Fir_reg__F_dqrcf1_;  // _F_dqrcf1
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_qr37_;  // qr37
  SEXP Rsh_Fir_reg_qr38_;  // qr38
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_qr40_;  // qr40
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_qr41_;  // qr41
  SEXP Rsh_Fir_reg_qr42_;  // qr42
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_qr44_;  // qr44
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_as_double1_;  // as_double1
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_y13_;  // y13
  SEXP Rsh_Fir_reg_y14_;  // y14
  SEXP Rsh_Fir_reg_ny4_;  // ny4
  SEXP Rsh_Fir_reg_ny5_;  // ny5
  SEXP Rsh_Fir_reg_matrix1_;  // matrix1
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_k7_;  // k7
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_ny6_;  // ny6
  SEXP Rsh_Fir_reg_ny7_;  // ny7
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg__Fortran;  // _Fortran
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_stop6_;  // stop6
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_pivotted;  // pivotted
  SEXP Rsh_Fir_reg_pivotted1_;  // pivotted1
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_qr45_;  // qr45
  SEXP Rsh_Fir_reg_qr46_;  // qr46
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_qr48_;  // qr48
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_dx75_;  // dx75
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg_dx77_;  // dx77
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx80_;  // dx80
  SEXP Rsh_Fir_reg_dx81_;  // dx81
  SEXP Rsh_Fir_reg_dx82_;  // dx82
  SEXP Rsh_Fir_reg_dx83_;  // dx83
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_dx90_;  // dx90
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_dx91_;  // dx91
  SEXP Rsh_Fir_reg_dx92_;  // dx92
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg_k11_;  // k11
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_dx93_;  // dx93
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_z11_;  // z11
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx94_;  // dx94
  SEXP Rsh_Fir_reg_dx95_;  // dx95
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_nam;  // nam
  SEXP Rsh_Fir_reg_nam1_;  // nam1
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_pivotted2_;  // pivotted2
  SEXP Rsh_Fir_reg_pivotted3_;  // pivotted3
  SEXP Rsh_Fir_reg_is_na4_;  // is_na4
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_is_unsorted;  // is_unsorted
  SEXP Rsh_Fir_reg_qr49_;  // qr49
  SEXP Rsh_Fir_reg_qr50_;  // qr50
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_qr52_;  // qr52
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx96_;  // dx96
  SEXP Rsh_Fir_reg_dx97_;  // dx97
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_pivotted4_;  // pivotted4
  SEXP Rsh_Fir_reg_pivotted5_;  // pivotted5
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_nam2_;  // nam2
  SEXP Rsh_Fir_reg_nam3_;  // nam3
  SEXP Rsh_Fir_reg_l29_;  // l29
  SEXP Rsh_Fir_reg_rownames;  // rownames
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_nam5_;  // nam5
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx98_;  // dx98
  SEXP Rsh_Fir_reg_nam7_;  // nam7
  SEXP Rsh_Fir_reg_l33_;  // l33
  SEXP Rsh_Fir_reg_dx99_;  // dx99
  SEXP Rsh_Fir_reg_qr53_;  // qr53
  SEXP Rsh_Fir_reg_qr54_;  // qr54
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_nam10_;  // nam10
  SEXP Rsh_Fir_reg_l35_;  // l35
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_nam11_;  // nam11
  SEXP Rsh_Fir_reg_qr56_;  // qr56
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx100_;  // dx100
  SEXP Rsh_Fir_reg_nam14_;  // nam14
  SEXP Rsh_Fir_reg_l37_;  // l37
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_nam15_;  // nam15
  SEXP Rsh_Fir_reg_dx101_;  // dx101
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_rownames__;  // rownames__
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_nam16_;  // nam16
  SEXP Rsh_Fir_reg_nam17_;  // nam17
  SEXP Rsh_Fir_reg_nam18_;  // nam18
  SEXP Rsh_Fir_reg_l38_;  // l38
  SEXP Rsh_Fir_reg_rownames__1_;  // rownames__1
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_im2_;  // im2
  SEXP Rsh_Fir_reg_im3_;  // im3
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_r168_;  // r168
  SEXP Rsh_Fir_reg_colnames1_;  // colnames1
  SEXP Rsh_Fir_reg_y15_;  // y15
  SEXP Rsh_Fir_reg_y16_;  // y16
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_r170_;  // r170
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_nam20_;  // nam20
  SEXP Rsh_Fir_reg_nam21_;  // nam21
  SEXP Rsh_Fir_reg_l39_;  // l39
  SEXP Rsh_Fir_reg_colnames__;  // colnames__
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_im4_;  // im4
  SEXP Rsh_Fir_reg_im5_;  // im5
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_coef1_;  // coef1
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_r174_;  // r174
  SEXP Rsh_Fir_reg_coef2_;  // coef2
  SEXP Rsh_Fir_reg_coef3_;  // coef3
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_r175_;  // r175

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
  // check L70() else D0()
  // L70()
  goto L70_;

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // sym = ldf `as.integer`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `as.integer` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L2_:;
  // st n = r6
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L3_:;
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c2 then L85() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L85()
    goto L85_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf `as.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf `as.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L6_:;
  // st p = r17
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L7_:;
  // c4 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L98() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L98()
    goto L98_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym4 = ldf `as.integer`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base4 = ldf `as.integer` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L10_:;
  // st k = r28
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard5 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L11_:;
  // c6 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c6 then L114() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L114()
    goto L114_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym6 = ldf `is.matrix`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf `is.matrix` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard6 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L14_:;
  // st im = r37
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // im = ld im
  Rsh_Fir_reg_im = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L122() else D26()
  // L122()
  goto L122_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym7 = ldf `as.integer`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base7 = ldf `as.integer` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard7 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

L17_:;
  // st ny = r44
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard8 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L18_:;
  // c8 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c8 then L136() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L136()
    goto L136_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // nrow1 = ldf nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L140() else D36()
  // L140()
  goto L140_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym9 = ldf `is.complex`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base9 = ldf `is.complex` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard9 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L23_:;
  // st isC = r59
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L154() else D42()
  // L154()
  goto L154_;

L24_:;
  // sym13 = ldf seq_len
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base13 = ldf seq_len in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard13 then L168() else L169()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L168()
    goto L168_;
  } else {
  // L169()
    goto L169_;
  }

L25_:;
  // goto L28(r67)
  // L28(r67)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r67_;
  goto L28_;

L26_:;
  // sym12 = ldf rep
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base12 = ldf rep in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard12 then L164() else L165()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L164()
    goto L164_;
  } else {
  // L165()
    goto L165_;
  }

L27_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r74 = dyn c14(r69, r72)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L166() else D47()
  // L166()
  goto L166_;

L28_:;
  // st ix = r75
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // sym14 = ldf `is.null`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base14 = ldf `is.null` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard14 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

L29_:;
  // r83 = `!`(r79)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r83)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c17 then L175() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L175()
    goto L175_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // p18 = ld p
  Rsh_Fir_reg_p18_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L177() else D51()
  // L177()
  goto L177_;

L32_:;
  // isC2 = ld isC
  Rsh_Fir_reg_isC2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L180() else D52()
  // L180()
  goto L180_;

L33_:;
  // sym23 = ldf `is.null`
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base23 = ldf `is.null` in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard23 then L298() else L299()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L298()
    goto L298_;
  } else {
  // L299()
    goto L299_;
  }

L34_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L200() else D58()
  // L200()
  goto L200_;

L35_:;
  // c20 = `is.object`(r88)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c20 then L187() else L188(r88)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L187()
    goto L187_;
  } else {
  // L188(r88)
    Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r88_;
    goto L188_;
  }

L36_:;
  // l = ld coef
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c21 = `is.object`(l)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c21 then L191() else L192(dx11, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L191()
    goto L191_;
  } else {
  // L192(dx11, l)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L192_;
  }

L37_:;
  // st coef = dx17
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L33()
  // L33()
  goto L33_;

L38_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L221() else D65()
  // L221()
  goto L221_;

L39_:;
  // c24 = `is.object`(r101)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c24 then L208() else L209(r101)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L208()
    goto L208_;
  } else {
  // L209(r101)
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r101_;
    goto L209_;
  }

L40_:;
  // l7 = ld coef
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c25 = `is.object`(l7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c25 then L212() else L213(dx29, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L212()
    goto L212_;
  } else {
  // L213(dx29, l7)
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L213_;
  }

L41_:;
  // st coef = dx35
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx35_, RHO);
  (void)(Rsh_Fir_reg_dx35_);
  // goto L33()
  // L33()
  goto L33_;

L42_:;
  // goto L33()
  // L33()
  goto L33_;

L43_:;
  // c30 = `is.object`(r111)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c30 then L253() else L254(r111)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L253()
    goto L253_;
  } else {
  // L254(r111)
    Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r111_;
    goto L254_;
  }

L44_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L236() else D71()
  // L236()
  goto L236_;

L45_:;
  // y13 = ld y
  Rsh_Fir_reg_y13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L246() else D75()
  // L246()
  goto L246_;

L46_:;
  // st z = dx51
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx51_, RHO);
  (void)(Rsh_Fir_reg_dx51_);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L259() else D83()
  // L259()
  goto L259_;

L47_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r133 = dyn __2(r130, r131)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L46(r133)
  // L46(r133)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r133_;
  goto L46_;

L48_:;
  // goto L49()
  // L49()
  goto L49_;

L49_:;
  // k8 = ld k
  Rsh_Fir_reg_k8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L268() else D86()
  // L268()
  goto L268_;

L50_:;
  // z8 = ld z
  Rsh_Fir_reg_z8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L292() else D92()
  // L292()
  goto L292_;

L51_:;
  // st coef = dx61
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx61_, RHO);
  (void)(Rsh_Fir_reg_dx61_);
  // goto L54(dx60)
  // L54(dx60)
  Rsh_Fir_reg_dx93_ = Rsh_Fir_reg_dx60_;
  goto L54_;

L52_:;
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r144 = dyn ___2(l15, dx83, <missing>, dx82)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_dx83_;
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args27[3] = Rsh_Fir_reg_dx82_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L51(dx81, r144)
  // L51(dx81, r144)
  Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_dx81_;
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_r144_;
  goto L51_;

L53_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r143 = dyn __3(dx92, r141)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx92_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L52(dx90, dx91, r143)
  // L52(dx90, dx91, r143)
  Rsh_Fir_reg_dx81_ = Rsh_Fir_reg_dx90_;
  Rsh_Fir_reg_dx82_ = Rsh_Fir_reg_dx91_;
  Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_r143_;
  goto L52_;

L54_:;
  // goto L33()
  // L33()
  goto L33_;

L55_:;
  // r148 = `!`(r147)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c41 = `as.logical`(r148)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c41 then L301() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L301()
    goto L301_;
  } else {
  // L56()
    goto L56_;
  }

L56_:;
  // goto L63()
  // L63()
  goto L63_;

L57_:;
  // c42 = `as.logical`(r150)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c42 then L306() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L306()
    goto L306_;
  } else {
  // L58()
    goto L58_;
  }

L58_:;
  // goto L59()
  // L59()
  goto L59_;

L59_:;
  // pivotted4 = ld pivotted
  Rsh_Fir_reg_pivotted4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L310() else D98()
  // L310()
  goto L310_;

L60_:;
  // nam17 = ld nam
  Rsh_Fir_reg_nam17_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L326() else D105()
  // L326()
  goto L326_;

L61_:;
  // rownames__ = ldf `rownames<-`
  Rsh_Fir_reg_rownames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L323() else D103()
  // L323()
  goto L323_;

L62_:;
  // goto L63()
  // L63()
  goto L63_;

L63_:;
  // im2 = ld im
  Rsh_Fir_reg_im2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L330() else D108()
  // L330()
  goto L330_;

L64_:;
  // c57 = `as.logical`(c49)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c57 then L337() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L337()
    goto L337_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // r171 = `!`(r168)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r168_;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c54 = `as.logical`(r171)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r171_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // c55 = `&&`(c52, c54)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L64(c55)
  // L64(c55)
  Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c55_;
  goto L64_;

L66_:;
  // goto L67()
  // L67()
  goto L67_;

L67_:;
  // im4 = ld im
  Rsh_Fir_reg_im4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L342() else D114()
  // L342()
  goto L342_;

L68_:;
  // sym26 = ldf drop
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base26 = ldf drop in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard26 then L346() else L347()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L346()
    goto L346_;
  } else {
  // L347()
    goto L347_;
  }

L69_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r174
  return Rsh_Fir_reg_r174_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p = prom<V +>{
  //   qr1 = ld qr;
  //   qr2 = force? qr1;
  //   checkMissing(qr2);
  //   return qr2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_, CCP, RHO);
  // r1 = dyn is_qr(p)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_qr, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L71() else D1()
  // L71()
  goto L71_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L71_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c then L72() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L72()
    goto L72_;
  } else {
  // L0()
    goto L0_;
  }

L72_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L73() else D2()
  // L73()
  goto L73_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // r3 = dyn stop("first argument must be a QR decomposition")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L74() else D3()
  // L74()
  goto L74_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L1()
  // L1()
  goto L1_;

L76_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L78() else D4()
  // L78()
  goto L78_;

L77_:;
  // r5 = dyn base(<lang nrow(`$`(qr, qr))>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // p1 = prom<V +>{
  //   qr3 = ld qr;
  //   qr4 = force? qr3;
  //   checkMissing(qr4);
  //   c1 = `is.object`(qr4);
  //   if c1 then L1() else L2(qr4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", qr4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(qr6):
  //   r7 = `$`(qr6, <sym qr>);
  //   goto L0(r7);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_1, CCP, RHO);
  // r9 = dyn nrow(p1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L79() else D5()
  // L79()
  goto L79_;

D5_:;
  // deopt 16 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L79_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn as_integer(r9)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L80() else D6()
  // L80()
  goto L80_;

D6_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r10_;
  goto L2_;

L81_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L83() else D7()
  // L83()
  goto L83_;

L82_:;
  // r11 = dyn base1(<sym n>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

D7_:;
  // deopt 22 [n]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L83_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r13 = dyn is_na(n1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L84() else D8()
  // L84()
  goto L84_;

D8_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L3_;

L85_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L86() else D9()
  // L86()
  goto L86_;

D9_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L86_:;
  // r14 = dyn stop1("invalid nrow(qr$qr)")
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L87() else D10()
  // L87()
  goto L87_;

D10_:;
  // deopt 29 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L5()
  // L5()
  goto L5_;

L89_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L91() else D11()
  // L91()
  goto L91_;

L90_:;
  // r16 = dyn base2(<lang ncol(`$`(qr, qr))>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L6_;

D11_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // p2 = prom<V +>{
  //   qr7 = ld qr;
  //   qr8 = force? qr7;
  //   checkMissing(qr8);
  //   c3 = `is.object`(qr8);
  //   if c3 then L1() else L2(qr8);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", qr8);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(qr10):
  //   r18 = `$`(qr10, <sym qr>);
  //   goto L0(r18);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_2, CCP, RHO);
  // r20 = dyn ncol(p2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L92() else D12()
  // L92()
  goto L92_;

D12_:;
  // deopt 37 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L92_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r21 = dyn as_integer1(r20)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L93() else D13()
  // L93()
  goto L93_;

D13_:;
  // deopt 39 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L6(r21)
  // L6(r21)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r21_;
  goto L6_;

L94_:;
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L96() else D14()
  // L96()
  goto L96_;

L95_:;
  // r22 = dyn base3(<sym p>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L7_;

D14_:;
  // deopt 43 [p3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L96_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r24 = dyn is_na1(p4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L97() else D15()
  // L97()
  goto L97_;

D15_:;
  // deopt 46 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L7(r24)
  // L7(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L7_;

L98_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L99() else D16()
  // L99()
  goto L99_;

D16_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // r25 = dyn stop2("invalid ncol(qr$qr)")
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L100() else D17()
  // L100()
  goto L100_;

D17_:;
  // deopt 50 [r25]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L9()
  // L9()
  goto L9_;

L102_:;
  // qr11 = ld qr
  Rsh_Fir_reg_qr11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L104() else D18()
  // L104()
  goto L104_;

L103_:;
  // r27 = dyn base4(<lang `$`(qr, rank)>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r27)
  // L10(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L10_;

D18_:;
  // deopt 55 [qr11]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_qr11_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L104_:;
  // qr12 = force? qr11
  Rsh_Fir_reg_qr12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr11_);
  // checkMissing(qr12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_qr12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(qr12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_qr12_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c5 then L106() else L107(qr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L106()
    goto L106_;
  } else {
  // L107(qr12)
    Rsh_Fir_reg_qr14_ = Rsh_Fir_reg_qr12_;
    goto L107_;
  }

L105_:;
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r30 = dyn as_integer2(dx5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L109() else D19()
  // L109()
  goto L109_;

L106_:;
  // dr4 = tryDispatchBuiltin.1("$", qr12)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_qr12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc2 then L108() else L107(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L108()
    goto L108_;
  } else {
  // L107(dr4)
    Rsh_Fir_reg_qr14_ = Rsh_Fir_reg_dr4_;
    goto L107_;
  }

L107_:;
  // r29 = `$`(qr14, <sym rank>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_qr14_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L105(r29)
  // L105(r29)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r29_;
  goto L105_;

L108_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L105(dx4)
  // L105(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L105_;

D19_:;
  // deopt 59 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L10(r30)
  // L10(r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r30_;
  goto L10_;

L110_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L112() else D20()
  // L112()
  goto L112_;

L111_:;
  // r31 = dyn base5(<sym k>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r31)
  // L11(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L11_;

D20_:;
  // deopt 63 [k]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L112_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r33 = dyn is_na2(k1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L113() else D21()
  // L113()
  goto L113_;

D21_:;
  // deopt 66 [r33]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L11(r33)
  // L11(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L11_;

L114_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L115() else D22()
  // L115()
  goto L115_;

D22_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L115_:;
  // r34 = dyn stop3("invalid ncol(qr$rank)")
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L116() else D23()
  // L116()
  goto L116_;

D23_:;
  // deopt 70 [r34]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L13()
  // L13()
  goto L13_;

L118_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L120() else D24()
  // L120()
  goto L120_;

L119_:;
  // r36 = dyn base6(<sym y>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L14(r36)
  // L14(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L14_;

D24_:;
  // deopt 75 [y1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L120_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r38 = dyn is_matrix(y2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L121() else D25()
  // L121()
  goto L121_;

D25_:;
  // deopt 78 [r38]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L121_:;
  // goto L14(r38)
  // L14(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L14_;

D26_:;
  // deopt 80 [im]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_im;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L122_:;
  // im1 = force? im
  Rsh_Fir_reg_im1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_im);
  // checkMissing(im1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_im1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r39 = `!`(im1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_im1_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c7 then L123() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L123()
    goto L123_;
  } else {
  // L15()
    goto L15_;
  }

L123_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L124() else D27()
  // L124()
  goto L124_;

D27_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // p5 = prom<V +>{
  //   y3 = ld y;
  //   y4 = force? y3;
  //   checkMissing(y4);
  //   return y4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_3, CCP, RHO);
  // r41 = dyn as_matrix(p5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L125() else D28()
  // L125()
  goto L125_;

D28_:;
  // deopt 86 [r41]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L125_:;
  // st y = r41
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // goto L16()
  // L16()
  goto L16_;

L127_:;
  // ncol1 = ldf ncol
  Rsh_Fir_reg_ncol1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L129() else D29()
  // L129()
  goto L129_;

L128_:;
  // r43 = dyn base7(<lang ncol(y)>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L17(r43)
  // L17(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L17_;

D29_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L129_:;
  // p6 = prom<V +>{
  //   y5 = ld y;
  //   y6 = force? y5;
  //   checkMissing(y6);
  //   return y6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_4, CCP, RHO);
  // r46 = dyn ncol1(p6)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol1_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L130() else D30()
  // L130()
  goto L130_;

D30_:;
  // deopt 95 [r46]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L130_:;
  // as_integer3 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r47 = dyn as_integer3(r46)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer3_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L131() else D31()
  // L131()
  goto L131_;

D31_:;
  // deopt 97 [r47]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L17(r47)
  // L17(r47)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r47_;
  goto L17_;

L132_:;
  // ny = ld ny
  Rsh_Fir_reg_ny = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L134() else D32()
  // L134()
  goto L134_;

L133_:;
  // r48 = dyn base8(<sym ny>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L18(r48)
  // L18(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L18_;

D32_:;
  // deopt 101 [ny]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_ny;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L134_:;
  // ny1 = force? ny
  Rsh_Fir_reg_ny1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny);
  // checkMissing(ny1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_ny1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // is_na3 = ldf `is.na` in base
  Rsh_Fir_reg_is_na3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r50 = dyn is_na3(ny1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_ny1_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na3_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L135() else D33()
  // L135()
  goto L135_;

D33_:;
  // deopt 104 [r50]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L135_:;
  // goto L18(r50)
  // L18(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L18_;

L136_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L137() else D34()
  // L137()
  goto L137_;

D34_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L137_:;
  // r51 = dyn stop4("invalid ncol(y)")
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L138() else D35()
  // L138()
  goto L138_;

D35_:;
  // deopt 108 [r51]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L20()
  // L20()
  goto L20_;

D36_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L140_:;
  // p7 = prom<V +>{
  //   y7 = ld y;
  //   y8 = force? y7;
  //   checkMissing(y8);
  //   return y8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_5, CCP, RHO);
  // r54 = dyn nrow1(p7)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow1_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L141() else D37()
  // L141()
  goto L141_;

D37_:;
  // deopt 114 [r54]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L141_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L142() else D38()
  // L142()
  goto L142_;

D38_:;
  // deopt 114 [r54, n2]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L142_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // r55 = `!=`(r54, n3)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if c9 then L143() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L143()
    goto L143_;
  } else {
  // L21()
    goto L21_;
  }

L143_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L144() else D39()
  // L144()
  goto L144_;

D39_:;
  // deopt 118 []
  Rsh_Fir_deopt(118, 0, NULL, CCP, RHO);
  return R_NilValue;

L144_:;
  // r56 = dyn stop5("'qr' and 'y' must have the same number of rows")
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L145() else D40()
  // L145()
  goto L145_;

D40_:;
  // deopt 120 [r56]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L145_:;
  // goto L22()
  // L22()
  goto L22_;

L147_:;
  // qr15 = ld qr
  Rsh_Fir_reg_qr15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L149() else D41()
  // L149()
  goto L149_;

L148_:;
  // r58 = dyn base9(<lang `$`(qr, qr)>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L23(r58)
  // L23(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L23_;

D41_:;
  // deopt 124 [qr15]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_qr15_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L149_:;
  // qr16 = force? qr15
  Rsh_Fir_reg_qr16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr15_);
  // checkMissing(qr16)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_qr16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(qr16)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_qr16_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c10 then L151() else L152(qr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L151()
    goto L151_;
  } else {
  // L152(qr16)
    Rsh_Fir_reg_qr18_ = Rsh_Fir_reg_qr16_;
    goto L152_;
  }

L150_:;
  // c11 = `is.complex`(dx7)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L23(c11)
  // L23(c11)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_c11_;
  goto L23_;

L151_:;
  // dr6 = tryDispatchBuiltin.1("$", qr16)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_qr16_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc3 then L153() else L152(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L153()
    goto L153_;
  } else {
  // L152(dr6)
    Rsh_Fir_reg_qr18_ = Rsh_Fir_reg_dr6_;
    goto L152_;
  }

L152_:;
  // r60 = `$`(qr18, <sym qr>)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_qr18_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L150(r60)
  // L150(r60)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r60_;
  goto L150_;

L153_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L150(dx6)
  // L150(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L150_;

D42_:;
  // deopt 130 []
  Rsh_Fir_deopt(130, 0, NULL, CCP, RHO);
  return R_NilValue;

L154_:;
  // p8 = prom<V +>{
  //   isC = ld isC;
  //   isC1 = force? isC;
  //   checkMissing(isC1);
  //   c12 = `as.logical`(isC1);
  //   if c12 then L1() else L0();
  // L0():
  //   return NA_REAL;
  // L1():
  //   return NA_CPLX;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_6, CCP, RHO);
  // p11 = prom<V +>{
  //   p9 = ld p;
  //   p10 = force? p9;
  //   checkMissing(p10);
  //   return p10;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_7, CCP, RHO);
  // p12 = prom<V +>{
  //   ny2 = ld ny;
  //   ny3 = force? ny2;
  //   checkMissing(ny3);
  //   return ny3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_8, CCP, RHO);
  // r64 = dyn matrix(p8, p11, p12)
  SEXP Rsh_Fir_array_args114[3];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args114[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L155() else D43()
  // L155()
  goto L155_;

D43_:;
  // deopt 134 [r64]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L155_:;
  // st coef = r64
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // p13 = ld p
  Rsh_Fir_reg_p13_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L156() else D44()
  // L156()
  goto L156_;

D44_:;
  // deopt 136 [p13]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L156_:;
  // p14 = force? p13
  Rsh_Fir_reg_p14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p13_);
  // checkMissing(p14)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L157() else D45()
  // L157()
  goto L157_;

D45_:;
  // deopt 137 [p14, n4]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(137, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L157_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // r65 = `>`(p14, n5)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c13 then L158() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L158()
    goto L158_;
  } else {
  // L24()
    goto L24_;
  }

L158_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard10 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L159_:;
  // sym11 = ldf seq_len
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base11 = ldf seq_len in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args120);
  // if guard11 then L161() else L162()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L161()
    goto L161_;
  } else {
  // L162()
    goto L162_;
  }

L160_:;
  // r66 = dyn base10(<lang seq_len(n)>, <lang rep(NA_LGL, `-`(p, n))>)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L25(r66)
  // L25(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L25_;

L161_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L163() else D46()
  // L163()
  goto L163_;

L162_:;
  // r68 = dyn base11(<sym n>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L26(r68)
  // L26(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L26_;

D46_:;
  // deopt 143 [n6]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L163_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r70 = seq_len(n7)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L26(r70)
  // L26(r70)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L26_;

L164_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r73 = dyn rep(NA_LGL, <lang `-`(p, n)>)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L27(r73)
  // L27(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L27_;

L165_:;
  // r71 = dyn base12(NA_LGL, <lang `-`(p, n)>)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L27(r71)
  // L27(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L27_;

D47_:;
  // deopt 150 [r74]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L166_:;
  // goto L25(r74)
  // L25(r74)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r74_;
  goto L25_;

L168_:;
  // p15 = ld p
  Rsh_Fir_reg_p15_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L170() else D48()
  // L170()
  goto L170_;

L169_:;
  // r76 = dyn base13(<sym p>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L28(r76)
  // L28(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L28_;

D48_:;
  // deopt 152 [p15]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L170_:;
  // p16 = force? p15
  Rsh_Fir_reg_p16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p15_);
  // checkMissing(p16)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_p16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // r77 = seq_len(p16)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L28(r77)
  // L28(r77)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r77_;
  goto L28_;

L171_:;
  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L173() else D49()
  // L173()
  goto L173_;

L172_:;
  // r78 = dyn base14(<lang `<-`(nam, colnames(`$`(qr, qr)))>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L29(r78)
  // L29(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L29_;

D49_:;
  // deopt 158 []
  Rsh_Fir_deopt(158, 0, NULL, CCP, RHO);
  return R_NilValue;

L173_:;
  // p17 = prom<V +>{
  //   qr19 = ld qr;
  //   qr20 = force? qr19;
  //   checkMissing(qr20);
  //   c15 = `is.object`(qr20);
  //   if c15 then L1() else L2(qr20);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", qr20);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(qr22):
  //   r80 = `$`(qr22, <sym qr>);
  //   goto L0(r80);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_9, CCP, RHO);
  // r82 = dyn colnames(p17)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L174() else D50()
  // L174()
  goto L174_;

D50_:;
  // deopt 160 [r82]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L174_:;
  // st nam = r82
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // c16 = `==`(r82, NULL)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L29(c16)
  // L29(c16)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_c16_;
  goto L29_;

L175_:;
  // st pivotted = NA_LGL
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_const(CCP, 51), RHO);
  (void)(Rsh_const(CCP, 51));
  // goto L31()
  // L31()
  goto L31_;

D51_:;
  // deopt 169 [p18]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L177_:;
  // p19 = force? p18
  Rsh_Fir_reg_p19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p18_);
  // checkMissing(p19)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_p19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // r85 = `==`(p19, 0)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if c18 then L178() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L178()
    goto L178_;
  } else {
  // L32()
    goto L32_;
  }

L178_:;
  // st pivotted = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_const(CCP, 57), RHO);
  (void)(Rsh_const(CCP, 57));
  // goto L33()
  // L33()
  goto L33_;

D52_:;
  // deopt 176 [isC2]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_isC2_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L180_:;
  // isC3 = force? isC2
  Rsh_Fir_reg_isC3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isC2_);
  // checkMissing(isC3)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_isC3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c19 = `as.logical`(isC3)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_isC3_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if c19 then L181() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L181()
    goto L181_;
  } else {
  // L34()
    goto L34_;
  }

L181_:;
  // sym15 = ldf `.Internal`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base15 = ldf `.Internal` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args144);
  // if guard15 then L182() else L183()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L182()
    goto L182_;
  } else {
  // L183()
    goto L183_;
  }

L182_:;
  // qr23 = ld qr
  Rsh_Fir_reg_qr23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L184() else D53()
  // L184()
  goto L184_;

L183_:;
  // r87 = dyn base15(<lang qr_coef_cmplx(qr, y)>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L35(r87)
  // L35(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L35_;

D53_:;
  // deopt 180 [qr23]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_qr23_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L184_:;
  // qr24 = force? qr23
  Rsh_Fir_reg_qr24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr23_);
  // checkMissing(qr24)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_qr24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // y9 = ld y
  Rsh_Fir_reg_y9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L185() else D54()
  // L185()
  goto L185_;

D54_:;
  // deopt 182 [y9]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L185_:;
  // y10 = force? y9
  Rsh_Fir_reg_y10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y9_);
  // checkMissing(y10)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_y10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // qr_coef_cmplx = ldf qr_coef_cmplx in base
  Rsh_Fir_reg_qr_coef_cmplx = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r89 = dyn qr_coef_cmplx(qr24, y10)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_qr24_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_coef_cmplx, 2, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L186() else D55()
  // L186()
  goto L186_;

D55_:;
  // deopt 185 [r89]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L186_:;
  // goto L35(r89)
  // L35(r89)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r89_;
  goto L35_;

L187_:;
  // dr10 = tryDispatchBuiltin.1("[", r88)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args149);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if dc5 then L189() else L188(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L189()
    goto L189_;
  } else {
  // L188(dr10)
    Rsh_Fir_reg_r91_ = Rsh_Fir_reg_dr10_;
    goto L188_;
  }

L188_:;
  // ix = ld ix
  Rsh_Fir_reg_ix = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L190() else D56()
  // L190()
  goto L190_;

L189_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // goto L36(dx10)
  // L36(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L36_;

D56_:;
  // deopt 186 [r91, ix]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_ix;
  Rsh_Fir_deopt(186, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L190_:;
  // ix1 = force? ix
  Rsh_Fir_reg_ix1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r92 = dyn __(r88, ix1, <missing>)
  SEXP Rsh_Fir_array_args152[3];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_ix1_;
  Rsh_Fir_array_args152[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L36(r92)
  // L36(r92)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r92_;
  goto L36_;

L191_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l, dx11)
  SEXP Rsh_Fir_array_args153[3];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args153[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args153);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc6 then L193() else L192(dx11, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L193()
    goto L193_;
  } else {
  // L192(dx11, dr12)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr12_;
    goto L192_;
  }

L192_:;
  // qr25 = ld qr
  Rsh_Fir_reg_qr25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L194() else D57()
  // L194()
  goto L194_;

L193_:;
  // dx15 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L37(dx11, dx15)
  // L37(dx11, dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
  goto L37_;

D57_:;
  // deopt 192 [dx13, l2, dx11, qr25]
  SEXP Rsh_Fir_array_deopt_stack43[4];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_qr25_;
  Rsh_Fir_deopt(192, 4, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L194_:;
  // qr26 = force? qr25
  Rsh_Fir_reg_qr26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr25_);
  // checkMissing(qr26)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_qr26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(qr26)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_qr26_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // if c22 then L196() else L197(dx13, l2, dx11, qr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L196()
    goto L196_;
  } else {
  // L197(dx13, l2, dx11, qr26)
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_qr28_ = Rsh_Fir_reg_qr26_;
    goto L197_;
  }

L195_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r94 = dyn ___(l, dx27, <missing>, dx26)
  SEXP Rsh_Fir_array_args158[4];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_args158[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args158[3] = Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_array_arg_names46[4];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_array_arg_names46[3] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L37(dx25, r94)
  // L37(dx25, r94)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r94_;
  goto L37_;

L196_:;
  // dr14 = tryDispatchBuiltin.1("$", qr26)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_qr26_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args159);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if dc7 then L198() else L197(dx13, l2, dx11, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L198()
    goto L198_;
  } else {
  // L197(dx13, l2, dx11, dr14)
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_qr28_ = Rsh_Fir_reg_dr14_;
    goto L197_;
  }

L197_:;
  // r93 = `$`(qr28, <sym pivot>)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_qr28_;
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L195(dx20, dx21, r93)
  // L195(dx20, dx21, r93)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r93_;
  goto L195_;

L198_:;
  // dx24 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // goto L195(dx13, dx11, dx24)
  // L195(dx13, dx11, dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx24_;
  goto L195_;

D58_:;
  // deopt 200 []
  Rsh_Fir_deopt(200, 0, NULL, CCP, RHO);
  return R_NilValue;

L200_:;
  // p20 = prom<V +>{
  //   sym16 = ldf attr;
  //   base16 = ldf attr in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r96):
  //   return r96;
  // L1():
  //   qr29 = ld qr;
  //   qr30 = force? qr29;
  //   checkMissing(qr30);
  //   attr = ldf attr in base;
  //   r97 = dyn attr(qr30, "useLAPACK");
  //   goto L0(r97);
  // L2():
  //   r95 = dyn base16(<sym qr>, "useLAPACK");
  //   goto L0(r95);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_10, CCP, RHO);
  // r99 = dyn isTRUE(p20)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L201() else D59()
  // L201()
  goto L201_;

D59_:;
  // deopt 202 [r99]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(202, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L201_:;
  // c23 = `as.logical`(r99)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if c23 then L202() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L202()
    goto L202_;
  } else {
  // L38()
    goto L38_;
  }

L202_:;
  // sym17 = ldf `.Internal`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base17 = ldf `.Internal` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args169);
  // if guard17 then L203() else L204()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L203()
    goto L203_;
  } else {
  // L204()
    goto L204_;
  }

L203_:;
  // qr31 = ld qr
  Rsh_Fir_reg_qr31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L205() else D60()
  // L205()
  goto L205_;

L204_:;
  // r100 = dyn base17(<lang qr_coef_real(qr, y)>)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L39(r100)
  // L39(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L39_;

D60_:;
  // deopt 205 [qr31]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_qr31_;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L205_:;
  // qr32 = force? qr31
  Rsh_Fir_reg_qr32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr31_);
  // checkMissing(qr32)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_qr32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // y11 = ld y
  Rsh_Fir_reg_y11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L206() else D61()
  // L206()
  goto L206_;

D61_:;
  // deopt 207 [y11]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_y11_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L206_:;
  // y12 = force? y11
  Rsh_Fir_reg_y12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y11_);
  // checkMissing(y12)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_y12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // qr_coef_real = ldf qr_coef_real in base
  Rsh_Fir_reg_qr_coef_real = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r102 = dyn qr_coef_real(qr32, y12)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_qr32_;
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_y12_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_coef_real, 2, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L207() else D62()
  // L207()
  goto L207_;

D62_:;
  // deopt 210 [r102]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(210, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L207_:;
  // goto L39(r102)
  // L39(r102)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r102_;
  goto L39_;

L208_:;
  // dr16 = tryDispatchBuiltin.1("[", r101)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args174);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc8 then L210() else L209(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L210()
    goto L210_;
  } else {
  // L209(dr16)
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_dr16_;
    goto L209_;
  }

L209_:;
  // ix2 = ld ix
  Rsh_Fir_reg_ix2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L211() else D63()
  // L211()
  goto L211_;

L210_:;
  // dx28 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L40(dx28)
  // L40(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L40_;

D63_:;
  // deopt 211 [r104, ix2]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_ix2_;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L211_:;
  // ix3 = force? ix2
  Rsh_Fir_reg_ix3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r105 = dyn __1(r101, ix3, <missing>)
  SEXP Rsh_Fir_array_args177[3];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_ix3_;
  Rsh_Fir_array_args177[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names52[3];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L40(r105)
  // L40(r105)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r105_;
  goto L40_;

L212_:;
  // dr18 = tryDispatchBuiltin.0("[<-", l7, dx29)
  SEXP Rsh_Fir_array_args178[3];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args178[2] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args178);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // if dc9 then L214() else L213(dx29, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L214()
    goto L214_;
  } else {
  // L213(dx29, dr18)
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr18_;
    goto L213_;
  }

L213_:;
  // qr33 = ld qr
  Rsh_Fir_reg_qr33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L215() else D64()
  // L215()
  goto L215_;

L214_:;
  // dx33 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // goto L41(dx29, dx33)
  // L41(dx29, dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx33_;
  goto L41_;

D64_:;
  // deopt 217 [dx31, l9, dx29, qr33]
  SEXP Rsh_Fir_array_deopt_stack49[4];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_deopt_stack49[3] = Rsh_Fir_reg_qr33_;
  Rsh_Fir_deopt(217, 4, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L215_:;
  // qr34 = force? qr33
  Rsh_Fir_reg_qr34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr33_);
  // checkMissing(qr34)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_qr34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(qr34)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_qr34_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if c26 then L217() else L218(dx31, l9, dx29, qr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L217()
    goto L217_;
  } else {
  // L218(dx31, l9, dx29, qr34)
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_qr36_ = Rsh_Fir_reg_qr34_;
    goto L218_;
  }

L216_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r107 = dyn ___1(l7, dx45, <missing>, dx44)
  SEXP Rsh_Fir_array_args183[4];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_args183[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args183[3] = Rsh_Fir_reg_dx44_;
  SEXP Rsh_Fir_array_arg_names53[4];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_array_arg_names53[3] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L41(dx43, r107)
  // L41(dx43, r107)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r107_;
  goto L41_;

L217_:;
  // dr20 = tryDispatchBuiltin.1("$", qr34)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_qr34_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args184);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // if dc10 then L219() else L218(dx31, l9, dx29, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L219()
    goto L219_;
  } else {
  // L218(dx31, l9, dx29, dr20)
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_qr36_ = Rsh_Fir_reg_dr20_;
    goto L218_;
  }

L218_:;
  // r106 = `$`(qr36, <sym pivot>)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_qr36_;
  Rsh_Fir_array_args186[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L216(dx38, dx39, r106)
  // L216(dx38, dx39, r106)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r106_;
  goto L216_;

L219_:;
  // dx42 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // goto L216(dx31, dx29, dx42)
  // L216(dx31, dx29, dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx42_;
  goto L216_;

D65_:;
  // deopt 224 [k2]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L221_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // checkMissing(k3)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_k3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // r108 = `>`(k3, 0)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_k3_;
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r108)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if c27 then L222() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L222()
    goto L222_;
  } else {
  // L42()
    goto L42_;
  }

L222_:;
  // l14 = ld y
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L223() else D66()
  // L223()
  goto L223_;

D66_:;
  // deopt 231 ["double", l14, "double"]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_const(CCP, 69);
  Rsh_Fir_deopt(231, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L223_:;
  // r109 = dyn storage_mode__(l14, NULL, "double")
  SEXP Rsh_Fir_array_args191[3];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args191[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args191[2] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names54[3];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L224() else D67()
  // L224()
  goto L224_;

D67_:;
  // deopt 233 ["double", r109]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(233, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L224_:;
  // st y = r109
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r109_, RHO);
  (void)(Rsh_Fir_reg_r109_);
  // sym18 = ldf `.Fortran`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // base18 = ldf `.Fortran` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args192);
  // if guard18 then L225() else L226()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L225()
    goto L225_;
  } else {
  // L226()
    goto L226_;
  }

L225_:;
  // _F_dqrcf = ld `.F_dqrcf`
  Rsh_Fir_reg__F_dqrcf = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L227() else D68()
  // L227()
  goto L227_;

L226_:;
  // r110 = dyn base18[, , , , , , , coef, info, NAOK](<sym .F_dqrcf>, <lang as.double(`$`(qr, qr))>, <sym n>, <sym k>, <lang as.double(`$`(qr, qraux))>, <sym y>, <sym ny>, <lang matrix(0.0, nrow=k, ncol=ny)>, <lang integer(1)>, TRUE)
  SEXP Rsh_Fir_array_args193[10];
  Rsh_Fir_array_args193[0] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args193[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args193[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args193[4] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args193[5] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args193[6] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args193[7] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args193[8] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args193[9] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names55[10];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_array_arg_names55[3] = R_MissingArg;
  Rsh_Fir_array_arg_names55[4] = R_MissingArg;
  Rsh_Fir_array_arg_names55[5] = R_MissingArg;
  Rsh_Fir_array_arg_names55[6] = R_MissingArg;
  Rsh_Fir_array_arg_names55[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names55[8] = Rsh_const(CCP, 77);
  Rsh_Fir_array_arg_names55[9] = Rsh_const(CCP, 78);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 10, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L43(r110)
  // L43(r110)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r110_;
  goto L43_;

D68_:;
  // deopt 237 [_F_dqrcf]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg__F_dqrcf;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L227_:;
  // _F_dqrcf1 = force? _F_dqrcf
  Rsh_Fir_reg__F_dqrcf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__F_dqrcf);
  // checkMissing(_F_dqrcf1)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg__F_dqrcf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty()));
  // sym19 = ldf `as.double`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base19 = ldf `as.double` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args195);
  // if guard19 then L228() else L229()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L228()
    goto L228_;
  } else {
  // L229()
    goto L229_;
  }

L228_:;
  // qr37 = ld qr
  Rsh_Fir_reg_qr37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L230() else D69()
  // L230()
  goto L230_;

L229_:;
  // r112 = dyn base19(<lang `$`(qr, qr)>)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L44(r112)
  // L44(r112)
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r112_;
  goto L44_;

D69_:;
  // deopt 241 [qr37]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_qr37_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L230_:;
  // qr38 = force? qr37
  Rsh_Fir_reg_qr38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr37_);
  // checkMissing(qr38)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_qr38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(qr38)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_qr38_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if c28 then L232() else L233(qr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L232()
    goto L232_;
  } else {
  // L233(qr38)
    Rsh_Fir_reg_qr40_ = Rsh_Fir_reg_qr38_;
    goto L233_;
  }

L231_:;
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r115 = dyn as_double(dx47)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_dx47_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L235() else D70()
  // L235()
  goto L235_;

L232_:;
  // dr22 = tryDispatchBuiltin.1("$", qr38)
  SEXP Rsh_Fir_array_args200[2];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_qr38_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args200);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if dc11 then L234() else L233(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L234()
    goto L234_;
  } else {
  // L233(dr22)
    Rsh_Fir_reg_qr40_ = Rsh_Fir_reg_dr22_;
    goto L233_;
  }

L233_:;
  // r114 = `$`(qr40, <sym qr>)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_qr40_;
  Rsh_Fir_array_args202[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // goto L231(r114)
  // L231(r114)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r114_;
  goto L231_;

L234_:;
  // dx46 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // goto L231(dx46)
  // L231(dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L231_;

D70_:;
  // deopt 245 [r115]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L235_:;
  // goto L44(r115)
  // L44(r115)
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r115_;
  goto L44_;

D71_:;
  // deopt 246 [n8]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(246, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L236_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L237() else D72()
  // L237()
  goto L237_;

D72_:;
  // deopt 248 [k4]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_k4_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L237_:;
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // checkMissing(k5)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_k5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // sym20 = ldf `as.double`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base20 = ldf `as.double` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args206);
  // if guard20 then L238() else L239()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L238()
    goto L238_;
  } else {
  // L239()
    goto L239_;
  }

L238_:;
  // qr41 = ld qr
  Rsh_Fir_reg_qr41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L240() else D73()
  // L240()
  goto L240_;

L239_:;
  // r116 = dyn base20(<lang `$`(qr, qraux)>)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L45(r116)
  // L45(r116)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L45_;

D73_:;
  // deopt 252 [qr41]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_qr41_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L240_:;
  // qr42 = force? qr41
  Rsh_Fir_reg_qr42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr41_);
  // checkMissing(qr42)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_qr42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(qr42)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_qr42_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if c29 then L242() else L243(qr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L242()
    goto L242_;
  } else {
  // L243(qr42)
    Rsh_Fir_reg_qr44_ = Rsh_Fir_reg_qr42_;
    goto L243_;
  }

L241_:;
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r119 = dyn as_double1(dx49)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_dx49_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L245() else D74()
  // L245()
  goto L245_;

L242_:;
  // dr24 = tryDispatchBuiltin.1("$", qr42)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_qr42_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args211);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // if dc12 then L244() else L243(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L244()
    goto L244_;
  } else {
  // L243(dr24)
    Rsh_Fir_reg_qr44_ = Rsh_Fir_reg_dr24_;
    goto L243_;
  }

L243_:;
  // r118 = `$`(qr44, <sym qraux>)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_qr44_;
  Rsh_Fir_array_args213[1] = Rsh_const(CCP, 81);
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // goto L241(r118)
  // L241(r118)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r118_;
  goto L241_;

L244_:;
  // dx48 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // goto L241(dx48)
  // L241(dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L241_;

D74_:;
  // deopt 256 [r119]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(256, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L45(r119)
  // L45(r119)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r119_;
  goto L45_;

D75_:;
  // deopt 257 [y13]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_y13_;
  Rsh_Fir_deopt(257, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L246_:;
  // y14 = force? y13
  Rsh_Fir_reg_y14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y13_);
  // checkMissing(y14)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_y14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // ny4 = ld ny
  Rsh_Fir_reg_ny4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L247() else D76()
  // L247()
  goto L247_;

D76_:;
  // deopt 259 [ny4]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_ny4_;
  Rsh_Fir_deopt(259, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L247_:;
  // ny5 = force? ny4
  Rsh_Fir_reg_ny5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny4_);
  // checkMissing(ny5)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_ny5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L248() else D77()
  // L248()
  goto L248_;

D77_:;
  // deopt 262 []
  Rsh_Fir_deopt(262, 0, NULL, CCP, RHO);
  return R_NilValue;

L248_:;
  // p21 = prom<V +>{
  //   k6 = ld k;
  //   k7 = force? k6;
  //   checkMissing(k7);
  //   return k7;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_11, CCP, RHO);
  // p22 = prom<V +>{
  //   ny6 = ld ny;
  //   ny7 = force? ny6;
  //   checkMissing(ny7);
  //   return ny7;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_12, CCP, RHO);
  // r122 = dyn matrix1[, nrow, ncol](0.0, p21, p22)
  SEXP Rsh_Fir_array_args219[3];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args219[2] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names60[3];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names60[2] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L249() else D78()
  // L249()
  goto L249_;

D78_:;
  // deopt 268 [r122]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(268, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L249_:;
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // check L250() else D79()
  // L250()
  goto L250_;

D79_:;
  // deopt 271 []
  Rsh_Fir_deopt(271, 0, NULL, CCP, RHO);
  return R_NilValue;

L250_:;
  // r123 = dyn integer(1)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 1, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L251() else D80()
  // L251()
  goto L251_;

D80_:;
  // deopt 273 [r123]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(273, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L251_:;
  // _Fortran = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r124 = dyn _Fortran(_F_dqrcf1, r113, n9, k5, r117, y14, ny5, r122, r123, TRUE)
  SEXP Rsh_Fir_array_args221[10];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg__F_dqrcf1_;
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_args221[2] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_args221[3] = Rsh_Fir_reg_k5_;
  Rsh_Fir_array_args221[4] = Rsh_Fir_reg_r117_;
  Rsh_Fir_array_args221[5] = Rsh_Fir_reg_y14_;
  Rsh_Fir_array_args221[6] = Rsh_Fir_reg_ny5_;
  Rsh_Fir_array_args221[7] = Rsh_Fir_reg_r122_;
  Rsh_Fir_array_args221[8] = Rsh_Fir_reg_r123_;
  Rsh_Fir_array_args221[9] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names62[10];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_array_arg_names62[2] = R_MissingArg;
  Rsh_Fir_array_arg_names62[3] = R_MissingArg;
  Rsh_Fir_array_arg_names62[4] = R_MissingArg;
  Rsh_Fir_array_arg_names62[5] = R_MissingArg;
  Rsh_Fir_array_arg_names62[6] = R_MissingArg;
  Rsh_Fir_array_arg_names62[7] = R_MissingArg;
  Rsh_Fir_array_arg_names62[8] = R_MissingArg;
  Rsh_Fir_array_arg_names62[9] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran, 10, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L252() else D81()
  // L252()
  goto L252_;

D81_:;
  // deopt 278 [r124]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(278, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L252_:;
  // goto L43(r124)
  // L43(r124)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r124_;
  goto L43_;

L253_:;
  // dr26 = tryDispatchBuiltin.1("[", r111)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args222);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if dc13 then L255() else L254(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L255()
    goto L255_;
  } else {
  // L254(dr26)
    Rsh_Fir_reg_r126_ = Rsh_Fir_reg_dr26_;
    goto L254_;
  }

L254_:;
  // sym21 = ldf c
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base21 = ldf c in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args224);
  // if guard21 then L256() else L257()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L256()
    goto L256_;
  } else {
  // L257()
    goto L257_;
  }

L255_:;
  // dx50 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L46(dx50)
  // L46(dx50)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx50_;
  goto L46_;

L256_:;
  // c31 = ldf c in base
  Rsh_Fir_reg_c31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r132 = dyn c31("coef", "info")
  SEXP Rsh_Fir_array_args226[2];
  Rsh_Fir_array_args226[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args226[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c31_, 2, Rsh_Fir_array_args226, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L258() else D82()
  // L258()
  goto L258_;

L257_:;
  // r129 = dyn base21("coef", "info")
  SEXP Rsh_Fir_array_args227[2];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args227[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L47(r126, r129)
  // L47(r126, r129)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r129_;
  goto L47_;

D82_:;
  // deopt 284 [r126, r132]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_r132_;
  Rsh_Fir_deopt(284, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L258_:;
  // goto L47(r126, r132)
  // L47(r126, r132)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r132_;
  goto L47_;

D83_:;
  // deopt 287 [z]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(287, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L259_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(z1)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // if c32 then L261() else L262(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L261()
    goto L261_;
  } else {
  // L262(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L262_;
  }

L260_:;
  // c33 = `as.logical`(dx53)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_dx53_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty());
  // if c33 then L264() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L264()
    goto L264_;
  } else {
  // L48()
    goto L48_;
  }

L261_:;
  // dr28 = tryDispatchBuiltin.1("$", z1)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args231[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args231);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // if dc14 then L263() else L262(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L263()
    goto L263_;
  } else {
  // L262(dr28)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr28_;
    goto L262_;
  }

L262_:;
  // r134 = `$`(z3, <sym info>)
  SEXP Rsh_Fir_array_args233[2];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args233[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L260(r134)
  // L260(r134)
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r134_;
  goto L260_;

L263_:;
  // dx52 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // goto L260(dx52)
  // L260(dx52)
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx52_;
  goto L260_;

L264_:;
  // stop6 = ldf stop
  Rsh_Fir_reg_stop6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L265() else D84()
  // L265()
  goto L265_;

D84_:;
  // deopt 291 []
  Rsh_Fir_deopt(291, 0, NULL, CCP, RHO);
  return R_NilValue;

L265_:;
  // r135 = dyn stop6("exact singularity in 'qr.coef'")
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop6_, 1, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L266() else D85()
  // L266()
  goto L266_;

D85_:;
  // deopt 293 [r135]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_deopt(293, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L266_:;
  // goto L49()
  // L49()
  goto L49_;

D86_:;
  // deopt 296 [k8]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_k8_;
  Rsh_Fir_deopt(296, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L268_:;
  // k9 = force? k8
  Rsh_Fir_reg_k9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k8_);
  // checkMissing(k9)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_k9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // p23 = ld p
  Rsh_Fir_reg_p23_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L269() else D87()
  // L269()
  goto L269_;

D87_:;
  // deopt 297 [k9, p23]
  SEXP Rsh_Fir_array_deopt_stack69[2];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_k9_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_p23_;
  Rsh_Fir_deopt(297, 2, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L269_:;
  // p24 = force? p23
  Rsh_Fir_reg_p24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p23_);
  // checkMissing(p24)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_p24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // r137 = `<`(k9, p24)
  SEXP Rsh_Fir_array_args238[2];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_k9_;
  Rsh_Fir_array_args238[1] = Rsh_Fir_reg_p24_;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // st pivotted = r137
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r137_, RHO);
  (void)(Rsh_Fir_reg_r137_);
  // pivotted = ld pivotted
  Rsh_Fir_reg_pivotted = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L270() else D88()
  // L270()
  goto L270_;

D88_:;
  // deopt 301 [pivotted]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_pivotted;
  Rsh_Fir_deopt(301, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L270_:;
  // pivotted1 = force? pivotted
  Rsh_Fir_reg_pivotted1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pivotted);
  // checkMissing(pivotted1)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_pivotted1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty()));
  // c34 = `as.logical`(pivotted1)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_pivotted1_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty());
  // if c34 then L271() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L271()
    goto L271_;
  } else {
  // L50()
    goto L50_;
  }

L271_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L272() else D89()
  // L272()
  goto L272_;

D89_:;
  // deopt 303 [z4]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(303, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L272_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(z5)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // if c35 then L274() else L275(z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L274()
    goto L274_;
  } else {
  // L275(z5)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L275_;
  }

L273_:;
  // l15 = ld coef
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c36 = `is.object`(l15)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty());
  // if c36 then L277() else L278(dx55, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L277()
    goto L277_;
  } else {
  // L278(dx55, l15)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx55_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L278_;
  }

L274_:;
  // dr30 = tryDispatchBuiltin.1("$", z5)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args244[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args244);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty());
  // if dc15 then L276() else L275(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L276()
    goto L276_;
  } else {
  // L275(dr30)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr30_;
    goto L275_;
  }

L275_:;
  // r138 = `$`(z7, <sym coef>)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args246[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // goto L273(r138)
  // L273(r138)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r138_;
  goto L273_;

L276_:;
  // dx54 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // goto L273(dx54)
  // L273(dx54)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L273_;

L277_:;
  // dr32 = tryDispatchBuiltin.0("[<-", l15, dx55)
  SEXP Rsh_Fir_array_args248[3];
  Rsh_Fir_array_args248[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args248[2] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args248);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // if dc16 then L279() else L278(dx55, dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L279()
    goto L279_;
  } else {
  // L278(dx55, dr32)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx55_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr32_;
    goto L278_;
  }

L278_:;
  // qr45 = ld qr
  Rsh_Fir_reg_qr45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L280() else D90()
  // L280()
  goto L280_;

L279_:;
  // dx59 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty());
  // goto L51(dx55, dx59)
  // L51(dx55, dx59)
  Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx59_;
  goto L51_;

D90_:;
  // deopt 307 [dx57, l17, dx55, qr45]
  SEXP Rsh_Fir_array_deopt_stack72[4];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_dx57_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack72[2] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_array_deopt_stack72[3] = Rsh_Fir_reg_qr45_;
  Rsh_Fir_deopt(307, 4, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L280_:;
  // qr46 = force? qr45
  Rsh_Fir_reg_qr46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr45_);
  // checkMissing(qr46)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_qr46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(qr46)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_qr46_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty());
  // if c37 then L282() else L283(dx57, l17, dx55, qr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L282()
    goto L282_;
  } else {
  // L283(dx57, l17, dx55, qr46)
    Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx55_;
    Rsh_Fir_reg_qr48_ = Rsh_Fir_reg_qr46_;
    goto L283_;
  }

L281_:;
  // c38 = `is.object`(dx71)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty());
  // if c38 then L285() else L286(dx69, l21, dx70, dx71)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L285()
    goto L285_;
  } else {
  // L286(dx69, l21, dx70, dx71)
    Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_dx69_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx70_;
    Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_dx71_;
    goto L286_;
  }

L282_:;
  // dr34 = tryDispatchBuiltin.1("$", qr46)
  SEXP Rsh_Fir_array_args254[2];
  Rsh_Fir_array_args254[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args254[1] = Rsh_Fir_reg_qr46_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args254);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // if dc17 then L284() else L283(dx57, l17, dx55, dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L284()
    goto L284_;
  } else {
  // L283(dx57, l17, dx55, dr34)
    Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx55_;
    Rsh_Fir_reg_qr48_ = Rsh_Fir_reg_dr34_;
    goto L283_;
  }

L283_:;
  // r139 = `$`(qr48, <sym pivot>)
  SEXP Rsh_Fir_array_args256[2];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_qr48_;
  Rsh_Fir_array_args256[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty());
  // goto L281(dx64, l19, dx65, r139)
  // L281(dx64, l19, dx65, r139)
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx64_;
  Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_dx65_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_r139_;
  goto L281_;

L284_:;
  // dx68 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx68_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty());
  // goto L281(dx57, l17, dx55, dx68)
  // L281(dx57, l17, dx55, dx68)
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx57_;
  Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_dx68_;
  goto L281_;

L285_:;
  // dr36 = tryDispatchBuiltin.1("[", dx71)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args258[1] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args258);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // if dc18 then L287() else L286(dx69, l21, dx70, dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L287()
    goto L287_;
  } else {
  // L286(dx69, l21, dx70, dr36)
    Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_dx69_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx70_;
    Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_dr36_;
    goto L286_;
  }

L286_:;
  // sym22 = ldf seq_len
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base22 = ldf seq_len in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args260[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args260);
  // if guard22 then L288() else L289()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L288()
    goto L288_;
  } else {
  // L289()
    goto L289_;
  }

L287_:;
  // dx80 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty());
  // goto L52(dx69, dx70, dx80)
  // L52(dx69, dx70, dx80)
  Rsh_Fir_reg_dx81_ = Rsh_Fir_reg_dx69_;
  Rsh_Fir_reg_dx82_ = Rsh_Fir_reg_dx70_;
  Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx80_;
  goto L52_;

L288_:;
  // k10 = ld k
  Rsh_Fir_reg_k10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L290() else D91()
  // L290()
  goto L290_;

L289_:;
  // r140 = dyn base22(<sym k>)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L53(dx75, l23, dx76, dx77, r140)
  // L53(dx75, l23, dx76, dx77, r140)
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_dx75_;
  Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_dx91_ = Rsh_Fir_reg_dx76_;
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_dx77_;
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r140_;
  goto L53_;

D91_:;
  // deopt 311 [dx75, l23, dx76, dx77, k10]
  SEXP Rsh_Fir_array_deopt_stack73[5];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_dx75_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack73[2] = Rsh_Fir_reg_dx76_;
  Rsh_Fir_array_deopt_stack73[3] = Rsh_Fir_reg_dx77_;
  Rsh_Fir_array_deopt_stack73[4] = Rsh_Fir_reg_k10_;
  Rsh_Fir_deopt(311, 5, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L290_:;
  // k11 = force? k10
  Rsh_Fir_reg_k11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k10_);
  // checkMissing(k11)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_k11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // r142 = seq_len(k11)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_k11_;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty());
  // goto L53(dx75, l23, dx76, dx77, r142)
  // L53(dx75, l23, dx76, dx77, r142)
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_dx75_;
  Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_dx91_ = Rsh_Fir_reg_dx76_;
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_dx77_;
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r142_;
  goto L53_;

D92_:;
  // deopt 319 [z8]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_z8_;
  Rsh_Fir_deopt(319, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L292_:;
  // z9 = force? z8
  Rsh_Fir_reg_z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z8_);
  // checkMissing(z9)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(z9)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // if c39 then L294() else L295(z9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L294()
    goto L294_;
  } else {
  // L295(z9)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_z9_;
    goto L295_;
  }

L293_:;
  // st coef = dx95
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx95_, RHO);
  (void)(Rsh_Fir_reg_dx95_);
  // goto L54(dx95)
  // L54(dx95)
  Rsh_Fir_reg_dx93_ = Rsh_Fir_reg_dx95_;
  goto L54_;

L294_:;
  // dr38 = tryDispatchBuiltin.1("$", z9)
  SEXP Rsh_Fir_array_args267[2];
  Rsh_Fir_array_args267[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args267[1] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args267);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // if dc19 then L296() else L295(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L296()
    goto L296_;
  } else {
  // L295(dr38)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_dr38_;
    goto L295_;
  }

L295_:;
  // r145 = `$`(z11, <sym coef>)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_z11_;
  Rsh_Fir_array_args269[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // goto L293(r145)
  // L293(r145)
  Rsh_Fir_reg_dx95_ = Rsh_Fir_reg_r145_;
  goto L293_;

L296_:;
  // dx94 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx94_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // goto L293(dx94)
  // L293(dx94)
  Rsh_Fir_reg_dx95_ = Rsh_Fir_reg_dx94_;
  goto L293_;

L298_:;
  // nam = ld nam
  Rsh_Fir_reg_nam = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L300() else D93()
  // L300()
  goto L300_;

L299_:;
  // r146 = dyn base23(<sym nam>)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L55(r146)
  // L55(r146)
  Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r146_;
  goto L55_;

D93_:;
  // deopt 326 [nam]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_nam;
  Rsh_Fir_deopt(326, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L300_:;
  // nam1 = force? nam
  Rsh_Fir_reg_nam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam);
  // checkMissing(nam1)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_nam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty()));
  // c40 = `==`(nam1, NULL)
  SEXP Rsh_Fir_array_args273[2];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_nam1_;
  Rsh_Fir_array_args273[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // goto L55(c40)
  // L55(c40)
  Rsh_Fir_reg_r147_ = Rsh_Fir_reg_c40_;
  goto L55_;

L301_:;
  // sym24 = ldf `is.na`
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base24 = ldf `is.na` in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args274[2];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args274[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args274);
  // if guard24 then L302() else L303()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L302()
    goto L302_;
  } else {
  // L303()
    goto L303_;
  }

L302_:;
  // pivotted2 = ld pivotted
  Rsh_Fir_reg_pivotted2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L304() else D94()
  // L304()
  goto L304_;

L303_:;
  // r149 = dyn base24(<sym pivotted>)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args275, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L57(r149)
  // L57(r149)
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r149_;
  goto L57_;

D94_:;
  // deopt 332 [pivotted2]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_pivotted2_;
  Rsh_Fir_deopt(332, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L304_:;
  // pivotted3 = force? pivotted2
  Rsh_Fir_reg_pivotted3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pivotted2_);
  // checkMissing(pivotted3)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_pivotted3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty()));
  // is_na4 = ldf `is.na` in base
  Rsh_Fir_reg_is_na4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r151 = dyn is_na4(pivotted3)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_pivotted3_;
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na4_, 1, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L305() else D95()
  // L305()
  goto L305_;

D95_:;
  // deopt 335 [r151]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_deopt(335, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L305_:;
  // goto L57(r151)
  // L57(r151)
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r151_;
  goto L57_;

L306_:;
  // is_unsorted = ldf `is.unsorted`
  Rsh_Fir_reg_is_unsorted = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // check L307() else D96()
  // L307()
  goto L307_;

D96_:;
  // deopt 337 []
  Rsh_Fir_deopt(337, 0, NULL, CCP, RHO);
  return R_NilValue;

L307_:;
  // p25 = prom<V +>{
  //   qr49 = ld qr;
  //   qr50 = force? qr49;
  //   checkMissing(qr50);
  //   c43 = `is.object`(qr50);
  //   if c43 then L1() else L2(qr50);
  // L0(dx97):
  //   return dx97;
  // L1():
  //   dr40 = tryDispatchBuiltin.1("$", qr50);
  //   dc20 = getTryDispatchBuiltinDispatched(dr40);
  //   if dc20 then L3() else L2(dr40);
  // L2(qr52):
  //   r152 = `$`(qr52, <sym pivot>);
  //   goto L0(r152);
  // L3():
  //   dx96 = getTryDispatchBuiltinValue(dr40);
  //   goto L0(dx96);
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_13, CCP, RHO);
  // r154 = dyn is_unsorted(p25)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_unsorted, 1, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L308() else D97()
  // L308()
  goto L308_;

D97_:;
  // deopt 339 [r154]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(339, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L308_:;
  // st pivotted = r154
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r154_, RHO);
  (void)(Rsh_Fir_reg_r154_);
  // goto L59()
  // L59()
  goto L59_;

D98_:;
  // deopt 343 [pivotted4]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_pivotted4_;
  Rsh_Fir_deopt(343, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L310_:;
  // pivotted5 = force? pivotted4
  Rsh_Fir_reg_pivotted5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pivotted4_);
  // checkMissing(pivotted5)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_pivotted5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty()));
  // c44 = `as.logical`(pivotted5)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_pivotted5_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty());
  // if c44 then L311() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L311()
    goto L311_;
  } else {
  // L60()
    goto L60_;
  }

L311_:;
  // nam2 = ld nam
  Rsh_Fir_reg_nam2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L312() else D99()
  // L312()
  goto L312_;

D99_:;
  // deopt 345 [nam2]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_nam2_;
  Rsh_Fir_deopt(345, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L312_:;
  // nam3 = force? nam2
  Rsh_Fir_reg_nam3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam2_);
  // checkMissing(nam3)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_nam3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // l29 = ld coef
  Rsh_Fir_reg_l29_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // rownames = ldf rownames
  Rsh_Fir_reg_rownames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 89), RHO);
  // check L313() else D100()
  // L313()
  goto L313_;

D100_:;
  // deopt 348 [nam3, l29, nam3]
  SEXP Rsh_Fir_array_deopt_stack81[3];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_nam3_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_deopt_stack81[2] = Rsh_Fir_reg_nam3_;
  Rsh_Fir_deopt(348, 3, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L313_:;
  // r156 = dyn rownames(nam3, NULL)
  SEXP Rsh_Fir_array_args288[2];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_nam3_;
  Rsh_Fir_array_args288[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names71[2];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames, 2, Rsh_Fir_array_args288, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L314() else D101()
  // L314()
  goto L314_;

D101_:;
  // deopt 350 [nam3, l29, nam3, r156]
  SEXP Rsh_Fir_array_deopt_stack82[4];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_nam3_;
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_deopt_stack82[2] = Rsh_Fir_reg_nam3_;
  Rsh_Fir_array_deopt_stack82[3] = Rsh_Fir_reg_r156_;
  Rsh_Fir_deopt(350, 4, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L314_:;
  // c45 = `is.object`(r156)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_r156_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty());
  // if c45 then L315() else L316(nam3, l29, r156)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L315()
    goto L315_;
  } else {
  // L316(nam3, l29, r156)
    Rsh_Fir_reg_nam5_ = Rsh_Fir_reg_nam3_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_l29_;
    Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r156_;
    goto L316_;
  }

L315_:;
  // dr42 = tryDispatchBuiltin.0("[<-", r156, nam3)
  SEXP Rsh_Fir_array_args290[3];
  Rsh_Fir_array_args290[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args290[1] = Rsh_Fir_reg_r156_;
  Rsh_Fir_array_args290[2] = Rsh_Fir_reg_nam3_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args290);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // if dc21 then L317() else L316(nam3, l29, dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L317()
    goto L317_;
  } else {
  // L316(nam3, l29, dr42)
    Rsh_Fir_reg_nam5_ = Rsh_Fir_reg_nam3_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_l29_;
    Rsh_Fir_reg_r158_ = Rsh_Fir_reg_dr42_;
    goto L316_;
  }

L316_:;
  // qr53 = ld qr
  Rsh_Fir_reg_qr53_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L318() else D102()
  // L318()
  goto L318_;

L317_:;
  // dx98 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx98_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // goto L61(nam3, l29, dx98)
  // L61(nam3, l29, dx98)
  Rsh_Fir_reg_nam7_ = Rsh_Fir_reg_nam3_;
  Rsh_Fir_reg_l33_ = Rsh_Fir_reg_l29_;
  Rsh_Fir_reg_dx99_ = Rsh_Fir_reg_dx98_;
  goto L61_;

D102_:;
  // deopt 352 [nam5, l31, r158, nam3, qr53]
  SEXP Rsh_Fir_array_deopt_stack83[5];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_nam5_;
  Rsh_Fir_array_deopt_stack83[1] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_deopt_stack83[2] = Rsh_Fir_reg_r158_;
  Rsh_Fir_array_deopt_stack83[3] = Rsh_Fir_reg_nam3_;
  Rsh_Fir_array_deopt_stack83[4] = Rsh_Fir_reg_qr53_;
  Rsh_Fir_deopt(352, 5, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L318_:;
  // qr54 = force? qr53
  Rsh_Fir_reg_qr54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr53_);
  // checkMissing(qr54)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_qr54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(qr54)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_qr54_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // if c46 then L320() else L321(nam5, l31, r158, nam3, qr54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L320()
    goto L320_;
  } else {
  // L321(nam5, l31, r158, nam3, qr54)
    Rsh_Fir_reg_nam10_ = Rsh_Fir_reg_nam5_;
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_l31_;
    Rsh_Fir_reg_r160_ = Rsh_Fir_reg_r158_;
    Rsh_Fir_reg_nam11_ = Rsh_Fir_reg_nam3_;
    Rsh_Fir_reg_qr56_ = Rsh_Fir_reg_qr54_;
    goto L321_;
  }

L319_:;
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r164 = dyn ___3(r162, nam15, dx101)
  SEXP Rsh_Fir_array_args295[3];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_args295[1] = Rsh_Fir_reg_nam15_;
  Rsh_Fir_array_args295[2] = Rsh_Fir_reg_dx101_;
  SEXP Rsh_Fir_array_arg_names72[3];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_array_arg_names72[2] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args295, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L61(nam14, l37, r164)
  // L61(nam14, l37, r164)
  Rsh_Fir_reg_nam7_ = Rsh_Fir_reg_nam14_;
  Rsh_Fir_reg_l33_ = Rsh_Fir_reg_l37_;
  Rsh_Fir_reg_dx99_ = Rsh_Fir_reg_r164_;
  goto L61_;

L320_:;
  // dr44 = tryDispatchBuiltin.1("$", qr54)
  SEXP Rsh_Fir_array_args296[2];
  Rsh_Fir_array_args296[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args296[1] = Rsh_Fir_reg_qr54_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args296);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty());
  // if dc22 then L322() else L321(nam5, l31, r158, nam3, dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L322()
    goto L322_;
  } else {
  // L321(nam5, l31, r158, nam3, dr44)
    Rsh_Fir_reg_nam10_ = Rsh_Fir_reg_nam5_;
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_l31_;
    Rsh_Fir_reg_r160_ = Rsh_Fir_reg_r158_;
    Rsh_Fir_reg_nam11_ = Rsh_Fir_reg_nam3_;
    Rsh_Fir_reg_qr56_ = Rsh_Fir_reg_dr44_;
    goto L321_;
  }

L321_:;
  // r163 = `$`(qr56, <sym pivot>)
  SEXP Rsh_Fir_array_args298[2];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_qr56_;
  Rsh_Fir_array_args298[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty());
  // goto L319(nam10, l35, r160, nam11, r163)
  // L319(nam10, l35, r160, nam11, r163)
  Rsh_Fir_reg_nam14_ = Rsh_Fir_reg_nam10_;
  Rsh_Fir_reg_l37_ = Rsh_Fir_reg_l35_;
  Rsh_Fir_reg_r162_ = Rsh_Fir_reg_r160_;
  Rsh_Fir_reg_nam15_ = Rsh_Fir_reg_nam11_;
  Rsh_Fir_reg_dx101_ = Rsh_Fir_reg_r163_;
  goto L319_;

L322_:;
  // dx100 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx100_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty());
  // goto L319(nam5, l31, r158, nam3, dx100)
  // L319(nam5, l31, r158, nam3, dx100)
  Rsh_Fir_reg_nam14_ = Rsh_Fir_reg_nam5_;
  Rsh_Fir_reg_l37_ = Rsh_Fir_reg_l31_;
  Rsh_Fir_reg_r162_ = Rsh_Fir_reg_r158_;
  Rsh_Fir_reg_nam15_ = Rsh_Fir_reg_nam3_;
  Rsh_Fir_reg_dx101_ = Rsh_Fir_reg_dx100_;
  goto L319_;

D103_:;
  // deopt 356 [nam7, l33, dx99]
  SEXP Rsh_Fir_array_deopt_stack84[3];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_nam7_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_l33_;
  Rsh_Fir_array_deopt_stack84[2] = Rsh_Fir_reg_dx99_;
  Rsh_Fir_deopt(356, 3, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L323_:;
  // r165 = dyn rownames__(l33, NULL, dx99)
  SEXP Rsh_Fir_array_args300[3];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_l33_;
  Rsh_Fir_array_args300[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args300[2] = Rsh_Fir_reg_dx99_;
  SEXP Rsh_Fir_array_arg_names73[3];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames__, 3, Rsh_Fir_array_args300, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L324() else D104()
  // L324()
  goto L324_;

D104_:;
  // deopt 358 [nam7, r165]
  SEXP Rsh_Fir_array_deopt_stack85[2];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_nam7_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_r165_;
  Rsh_Fir_deopt(358, 2, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L324_:;
  // st coef = r165
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r165_, RHO);
  (void)(Rsh_Fir_reg_r165_);
  // goto L62(nam7)
  // L62(nam7)
  Rsh_Fir_reg_nam16_ = Rsh_Fir_reg_nam7_;
  goto L62_;

D105_:;
  // deopt 360 [nam17]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_nam17_;
  Rsh_Fir_deopt(360, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L326_:;
  // nam18 = force? nam17
  Rsh_Fir_reg_nam18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam17_);
  // checkMissing(nam18)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_nam18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty()));
  // l38 = ld coef
  Rsh_Fir_reg_l38_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // rownames__1 = ldf `rownames<-`
  Rsh_Fir_reg_rownames__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L327() else D106()
  // L327()
  goto L327_;

D106_:;
  // deopt 363 [nam18, l38, nam18]
  SEXP Rsh_Fir_array_deopt_stack87[3];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_nam18_;
  Rsh_Fir_array_deopt_stack87[1] = Rsh_Fir_reg_l38_;
  Rsh_Fir_array_deopt_stack87[2] = Rsh_Fir_reg_nam18_;
  Rsh_Fir_deopt(363, 3, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L327_:;
  // r166 = dyn rownames__1(l38, NULL, nam18)
  SEXP Rsh_Fir_array_args302[3];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_l38_;
  Rsh_Fir_array_args302[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args302[2] = Rsh_Fir_reg_nam18_;
  SEXP Rsh_Fir_array_arg_names74[3];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_array_arg_names74[2] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames__1_, 3, Rsh_Fir_array_args302, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L328() else D107()
  // L328()
  goto L328_;

D107_:;
  // deopt 365 [nam18, r166]
  SEXP Rsh_Fir_array_deopt_stack88[2];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_nam18_;
  Rsh_Fir_array_deopt_stack88[1] = Rsh_Fir_reg_r166_;
  Rsh_Fir_deopt(365, 2, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L328_:;
  // st coef = r166
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r166_, RHO);
  (void)(Rsh_Fir_reg_r166_);
  // goto L62(nam18)
  // L62(nam18)
  Rsh_Fir_reg_nam16_ = Rsh_Fir_reg_nam18_;
  goto L62_;

D108_:;
  // deopt 369 [im2]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_im2_;
  Rsh_Fir_deopt(369, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L330_:;
  // im3 = force? im2
  Rsh_Fir_reg_im3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_im2_);
  // checkMissing(im3)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_im3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty()));
  // c47 = `as.logical`(im3)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_im3_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty());
  // if c47 then L331() else L64(c47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L331()
    goto L331_;
  } else {
  // L64(c47)
    Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c47_;
    goto L64_;
  }

L331_:;
  // sym25 = ldf `is.null`
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base25 = ldf `is.null` in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args305[2];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args305[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args305);
  // if guard25 then L332() else L333()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L332()
    goto L332_;
  } else {
  // L333()
    goto L333_;
  }

L332_:;
  // colnames1 = ldf colnames
  Rsh_Fir_reg_colnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L334() else D109()
  // L334()
  goto L334_;

L333_:;
  // r167 = dyn base25(<lang `<-`(nam, colnames(y))>)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args306, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L65(c47, r167)
  // L65(c47, r167)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r167_;
  goto L65_;

D109_:;
  // deopt 373 [c47]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_deopt(373, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L334_:;
  // p26 = prom<V +>{
  //   y15 = ld y;
  //   y16 = force? y15;
  //   checkMissing(y16);
  //   return y16;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1648651840_14, CCP, RHO);
  // r170 = dyn colnames1(p26)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r170_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames1_, 1, Rsh_Fir_array_args308, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L335() else D110()
  // L335()
  goto L335_;

D110_:;
  // deopt 375 [c47, r170]
  SEXP Rsh_Fir_array_deopt_stack91[2];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack91[1] = Rsh_Fir_reg_r170_;
  Rsh_Fir_deopt(375, 2, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L335_:;
  // st nam = r170
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r170_, RHO);
  (void)(Rsh_Fir_reg_r170_);
  // c53 = `==`(r170, NULL)
  SEXP Rsh_Fir_array_args309[2];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_r170_;
  Rsh_Fir_array_args309[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args309, Rsh_Fir_param_types_empty());
  // goto L65(c47, c53)
  // L65(c47, c53)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_reg_c53_;
  goto L65_;

L337_:;
  // nam20 = ld nam
  Rsh_Fir_reg_nam20_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L338() else D111()
  // L338()
  goto L338_;

D111_:;
  // deopt 380 [nam20]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_nam20_;
  Rsh_Fir_deopt(380, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L338_:;
  // nam21 = force? nam20
  Rsh_Fir_reg_nam21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam20_);
  // checkMissing(nam21)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_nam21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty()));
  // l39 = ld coef
  Rsh_Fir_reg_l39_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // check L339() else D112()
  // L339()
  goto L339_;

D112_:;
  // deopt 383 [nam21, l39, nam21]
  SEXP Rsh_Fir_array_deopt_stack93[3];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_nam21_;
  Rsh_Fir_array_deopt_stack93[1] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_deopt_stack93[2] = Rsh_Fir_reg_nam21_;
  Rsh_Fir_deopt(383, 3, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L339_:;
  // r172 = dyn colnames__(l39, NULL, nam21)
  SEXP Rsh_Fir_array_args311[3];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_args311[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args311[2] = Rsh_Fir_reg_nam21_;
  SEXP Rsh_Fir_array_arg_names77[3];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_array_arg_names77[2] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args311, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L340() else D113()
  // L340()
  goto L340_;

D113_:;
  // deopt 385 [nam21, r172]
  SEXP Rsh_Fir_array_deopt_stack94[2];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_nam21_;
  Rsh_Fir_array_deopt_stack94[1] = Rsh_Fir_reg_r172_;
  Rsh_Fir_deopt(385, 2, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L340_:;
  // st coef = r172
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r172_, RHO);
  (void)(Rsh_Fir_reg_r172_);
  // goto L67()
  // L67()
  goto L67_;

D114_:;
  // deopt 389 [im4]
  SEXP Rsh_Fir_array_deopt_stack95[1];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_im4_;
  Rsh_Fir_deopt(389, 1, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L342_:;
  // im5 = force? im4
  Rsh_Fir_reg_im5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_im4_);
  // checkMissing(im5)
  SEXP Rsh_Fir_array_args312[1];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_im5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args312, Rsh_Fir_param_types_empty()));
  // c58 = `as.logical`(im5)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_im5_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty());
  // if c58 then L343() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L343()
    goto L343_;
  } else {
  // L68()
    goto L68_;
  }

L343_:;
  // coef = ld coef
  Rsh_Fir_reg_coef = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L344() else D115()
  // L344()
  goto L344_;

D115_:;
  // deopt 391 [coef]
  SEXP Rsh_Fir_array_deopt_stack96[1];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_coef;
  Rsh_Fir_deopt(391, 1, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L344_:;
  // coef1 = force? coef
  Rsh_Fir_reg_coef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef);
  // checkMissing(coef1)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_coef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return coef1
  return Rsh_Fir_reg_coef1_;

L346_:;
  // coef2 = ld coef
  Rsh_Fir_reg_coef2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L348() else D116()
  // L348()
  goto L348_;

L347_:;
  // r173 = dyn base26(<sym coef>)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args315, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L69(r173)
  // L69(r173)
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r173_;
  goto L69_;

D116_:;
  // deopt 395 [coef2]
  SEXP Rsh_Fir_array_deopt_stack97[1];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_coef2_;
  Rsh_Fir_deopt(395, 1, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L348_:;
  // coef3 = force? coef2
  Rsh_Fir_reg_coef3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef2_);
  // checkMissing(coef3)
  SEXP Rsh_Fir_array_args316[1];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_coef3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args316, Rsh_Fir_param_types_empty()));
  // drop = ldf drop in base
  Rsh_Fir_reg_drop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r175 = dyn drop(coef3)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_coef3_;
  SEXP Rsh_Fir_array_arg_names79[1];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop, 1, Rsh_Fir_array_args317, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L349() else D117()
  // L349()
  goto L349_;

D117_:;
  // deopt 398 [r175]
  SEXP Rsh_Fir_array_deopt_stack98[1];
  Rsh_Fir_array_deopt_stack98[0] = Rsh_Fir_reg_r175_;
  Rsh_Fir_deopt(398, 1, Rsh_Fir_array_deopt_stack98, CCP, RHO);
  return R_NilValue;

L349_:;
  // goto L69(r175)
  // L69(r175)
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r175_;
  goto L69_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_(SEXP CCP, SEXP RHO) {
  // qr1 = ld qr
  Rsh_Fir_reg_qr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr2 = force? qr1
  Rsh_Fir_reg_qr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr1_);
  // checkMissing(qr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_qr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return qr2
  return Rsh_Fir_reg_qr2_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_1(SEXP CCP, SEXP RHO) {
  // qr3 = ld qr
  Rsh_Fir_reg_qr3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr4 = force? qr3
  Rsh_Fir_reg_qr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr3_);
  // checkMissing(qr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_qr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(qr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(qr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(qr4)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_qr4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", qr4)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_qr4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_qr6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r7 = `$`(qr6, <sym qr>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_qr6_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_2(SEXP CCP, SEXP RHO) {
  // qr7 = ld qr
  Rsh_Fir_reg_qr7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr8 = force? qr7
  Rsh_Fir_reg_qr8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr7_);
  // checkMissing(qr8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_qr8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(qr8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_qr8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
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
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", qr8)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_qr8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_qr10_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r18 = `$`(qr10, <sym qr>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_qr10_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_3(SEXP CCP, SEXP RHO) {
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return y4
  return Rsh_Fir_reg_y4_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_4(SEXP CCP, SEXP RHO) {
  // y5 = ld y
  Rsh_Fir_reg_y5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y6 = force? y5
  Rsh_Fir_reg_y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y5_);
  // checkMissing(y6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return y6
  return Rsh_Fir_reg_y6_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_5(SEXP CCP, SEXP RHO) {
  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return y8
  return Rsh_Fir_reg_y8_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_6(SEXP CCP, SEXP RHO) {
  // isC = ld isC
  Rsh_Fir_reg_isC = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // isC1 = force? isC
  Rsh_Fir_reg_isC1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isC);
  // checkMissing(isC1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_isC1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(isC1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_isC1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // return NA_REAL
  return Rsh_const(CCP, 47);

L1_:;
  // return NA_CPLX
  return Rsh_const(CCP, 48);
}
SEXP Rsh_Fir_user_promise_inner1648651840_7(SEXP CCP, SEXP RHO) {
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return p10
  return Rsh_Fir_reg_p10_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_8(SEXP CCP, SEXP RHO) {
  // ny2 = ld ny
  Rsh_Fir_reg_ny2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // ny3 = force? ny2
  Rsh_Fir_reg_ny3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny2_);
  // checkMissing(ny3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_ny3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return ny3
  return Rsh_Fir_reg_ny3_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_9(SEXP CCP, SEXP RHO) {
  // qr19 = ld qr
  Rsh_Fir_reg_qr19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr20 = force? qr19
  Rsh_Fir_reg_qr20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr19_);
  // checkMissing(qr20)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_qr20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(qr20)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_qr20_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(qr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(qr20)
    Rsh_Fir_reg_qr22_ = Rsh_Fir_reg_qr20_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", qr20)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_qr20_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_qr22_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r80 = `$`(qr22, <sym qr>)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_qr22_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L0(r80)
  // L0(r80)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r80_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_10(SEXP CCP, SEXP RHO) {
  // sym16 = ldf attr
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base16 = ldf attr in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args163);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r96
  return Rsh_Fir_reg_r96_;

L1_:;
  // qr29 = ld qr
  Rsh_Fir_reg_qr29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr30 = force? qr29
  Rsh_Fir_reg_qr30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr29_);
  // checkMissing(qr30)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_qr30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r97 = dyn attr(qr30, "useLAPACK")
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_qr30_;
  Rsh_Fir_array_args165[1] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r97)
  // L0(r97)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r97_;
  goto L0_;

L2_:;
  // r95 = dyn base16(<sym qr>, "useLAPACK")
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r95)
  // L0(r95)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_11(SEXP CCP, SEXP RHO) {
  // k6 = ld k
  Rsh_Fir_reg_k6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // k7 = force? k6
  Rsh_Fir_reg_k7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k6_);
  // checkMissing(k7)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_k7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // return k7
  return Rsh_Fir_reg_k7_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_12(SEXP CCP, SEXP RHO) {
  // ny6 = ld ny
  Rsh_Fir_reg_ny6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // ny7 = force? ny6
  Rsh_Fir_reg_ny7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny6_);
  // checkMissing(ny7)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_ny7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty()));
  // return ny7
  return Rsh_Fir_reg_ny7_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_13(SEXP CCP, SEXP RHO) {
  // qr49 = ld qr
  Rsh_Fir_reg_qr49_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // qr50 = force? qr49
  Rsh_Fir_reg_qr50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr49_);
  // checkMissing(qr50)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_qr50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty()));
  // c43 = `is.object`(qr50)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_qr50_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty());
  // if c43 then L1() else L2(qr50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L1()
    goto L1_;
  } else {
  // L2(qr50)
    Rsh_Fir_reg_qr52_ = Rsh_Fir_reg_qr50_;
    goto L2_;
  }

L0_:;
  // return dx97
  return Rsh_Fir_reg_dx97_;

L1_:;
  // dr40 = tryDispatchBuiltin.1("$", qr50)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args280[1] = Rsh_Fir_reg_qr50_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args280);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty());
  // if dc20 then L3() else L2(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr40)
    Rsh_Fir_reg_qr52_ = Rsh_Fir_reg_dr40_;
    goto L2_;
  }

L2_:;
  // r152 = `$`(qr52, <sym pivot>)
  SEXP Rsh_Fir_array_args282[2];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_qr52_;
  Rsh_Fir_array_args282[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty());
  // goto L0(r152)
  // L0(r152)
  Rsh_Fir_reg_dx97_ = Rsh_Fir_reg_r152_;
  goto L0_;

L3_:;
  // dx96 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx96_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty());
  // goto L0(dx96)
  // L0(dx96)
  Rsh_Fir_reg_dx97_ = Rsh_Fir_reg_dx96_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1648651840_14(SEXP CCP, SEXP RHO) {
  // y15 = ld y
  Rsh_Fir_reg_y15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y16 = force? y15
  Rsh_Fir_reg_y16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y15_);
  // checkMissing(y16)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_y16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty()));
  // return y16
  return Rsh_Fir_reg_y16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
