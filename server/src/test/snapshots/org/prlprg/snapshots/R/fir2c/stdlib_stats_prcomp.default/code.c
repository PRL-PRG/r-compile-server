#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4106172069_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4106172069_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4106172069_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106172069_14(SEXP CCP, SEXP RHO);
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
  // r = clos inner4106172069
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4106172069_, RHO, CCP);
  // st `prcomp.default` = r
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
SEXP Rsh_Fir_user_function_inner4106172069_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4106172069 dynamic dispatch ([x, retx, center, `scale.`, tol, `rank.`, `...`])

  return Rsh_Fir_user_version_inner4106172069_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4106172069_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4106172069 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner4106172069/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_retx;  // retx
  SEXP Rsh_Fir_reg_center;  // center
  SEXP Rsh_Fir_reg_scale_;  // scale_
  SEXP Rsh_Fir_reg_tol;  // tol
  SEXP Rsh_Fir_reg_rank_;  // rank_
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_retx_isMissing;  // retx_isMissing
  SEXP Rsh_Fir_reg_retx_orDefault;  // retx_orDefault
  SEXP Rsh_Fir_reg_center_isMissing;  // center_isMissing
  SEXP Rsh_Fir_reg_center_orDefault;  // center_orDefault
  SEXP Rsh_Fir_reg_scale__isMissing;  // scale__isMissing
  SEXP Rsh_Fir_reg_scale__orDefault;  // scale__orDefault
  SEXP Rsh_Fir_reg_tol_isMissing;  // tol_isMissing
  SEXP Rsh_Fir_reg_tol_orDefault;  // tol_orDefault
  SEXP Rsh_Fir_reg_rank__isMissing;  // rank__isMissing
  SEXP Rsh_Fir_reg_rank__orDefault;  // rank__orDefault
  SEXP Rsh_Fir_reg_chkDots;  // chkDots
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_scale;  // scale
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_center1_;  // center1
  SEXP Rsh_Fir_reg_center2_;  // center2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_scale_1_;  // scale_1
  SEXP Rsh_Fir_reg_scale_2_;  // scale_2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sc;  // sc
  SEXP Rsh_Fir_reg_sc1_;  // sc1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_rank_1_;  // rank_1
  SEXP Rsh_Fir_reg_rank_2_;  // rank_2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_rank_3_;  // rank_3
  SEXP Rsh_Fir_reg_rank_4_;  // rank_4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_rank_5_;  // rank_5
  SEXP Rsh_Fir_reg_rank_6_;  // rank_6
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_rank_7_;  // rank_7
  SEXP Rsh_Fir_reg_rank_8_;  // rank_8
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_rank_9_;  // rank_9
  SEXP Rsh_Fir_reg_rank_10_;  // rank_10
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_min1_;  // min1
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_svd;  // svd
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_tol1_;  // tol1
  SEXP Rsh_Fir_reg_tol2_;  // tol2
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_s5_;  // s5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_s7_;  // s7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_s8_;  // s8
  SEXP Rsh_Fir_reg_s9_;  // s9
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_s11_;  // s11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_tol3_;  // tol3
  SEXP Rsh_Fir_reg_tol4_;  // tol4
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_rank;  // rank
  SEXP Rsh_Fir_reg_rank1_;  // rank1
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_rank2_;  // rank2
  SEXP Rsh_Fir_reg_rank3_;  // rank3
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_s12_;  // s12
  SEXP Rsh_Fir_reg_s13_;  // s13
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_s15_;  // s15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_colnames;  // colnames
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_s16_;  // s16
  SEXP Rsh_Fir_reg_s17_;  // s17
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_s19_;  // s19
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_s20_;  // s20
  SEXP Rsh_Fir_reg_s21_;  // s21
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_s23_;  // s23
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_cen;  // cen
  SEXP Rsh_Fir_reg_cen1_;  // cen1
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_sc2_;  // sc2
  SEXP Rsh_Fir_reg_sc3_;  // sc3
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_retx1_;  // retx1
  SEXP Rsh_Fir_reg_retx2_;  // retx2
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_s24_;  // s24
  SEXP Rsh_Fir_reg_s25_;  // s25
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_s27_;  // s27
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_r129_;  // r129

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_retx = PARAMS[1];
  Rsh_Fir_reg_center = PARAMS[2];
  Rsh_Fir_reg_scale_ = PARAMS[3];
  Rsh_Fir_reg_tol = PARAMS[4];
  Rsh_Fir_reg_rank_ = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // retx_isMissing = missing.0(retx)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_retx;
  Rsh_Fir_reg_retx_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if retx_isMissing then L0(TRUE) else L0(retx)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_retx_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_retx_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(retx)
    Rsh_Fir_reg_retx_orDefault = Rsh_Fir_reg_retx;
    goto L0_;
  }

L0_:;
  // st retx = retx_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_retx_orDefault, RHO);
  (void)(Rsh_Fir_reg_retx_orDefault);
  // center_isMissing = missing.0(center)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_center;
  Rsh_Fir_reg_center_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if center_isMissing then L1(TRUE) else L1(center)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_center_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_center_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(center)
    Rsh_Fir_reg_center_orDefault = Rsh_Fir_reg_center;
    goto L1_;
  }

L1_:;
  // st center = center_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_center_orDefault, RHO);
  (void)(Rsh_Fir_reg_center_orDefault);
  // scale__isMissing = missing.0(scale_)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_scale_;
  Rsh_Fir_reg_scale__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if scale__isMissing then L2(FALSE) else L2(scale_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_scale__isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_scale__orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(scale_)
    Rsh_Fir_reg_scale__orDefault = Rsh_Fir_reg_scale_;
    goto L2_;
  }

L2_:;
  // st `scale.` = scale__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_scale__orDefault, RHO);
  (void)(Rsh_Fir_reg_scale__orDefault);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if tol_isMissing then L3(NULL) else L3(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_tol_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L3_;
  }

L3_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // rank__isMissing = missing.0(rank_)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_rank_;
  Rsh_Fir_reg_rank__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if rank__isMissing then L4(NULL) else L4(rank_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rank__isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_rank__orDefault = Rsh_const(CCP, 7);
    goto L4_;
  } else {
  // L4(rank_)
    Rsh_Fir_reg_rank__orDefault = Rsh_Fir_reg_rank_;
    goto L4_;
  }

L4_:;
  // st `rank.` = rank__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_rank__orDefault, RHO);
  (void)(Rsh_Fir_reg_rank__orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // chkDots = ldf chkDots
  Rsh_Fir_reg_chkDots = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

L5_:;
  // st cen = r8
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L6_:;
  // st sc = r11
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L7_:;
  // c = `as.logical`(r14)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L49() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L49()
    goto L49_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

L10_:;
  // r25 = `!`(r24)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c2 then L60() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L60()
    goto L60_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // sym9 = ldf min
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base9 = ldf min in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard9 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L12_:;
  // goto L14(r42)
  // L14(r42)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r42_;
  goto L14_;

L13_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L69() else D23()
  // L69()
  goto L69_;

L14_:;
  // st k = r47
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // svd = ldf svd
  Rsh_Fir_reg_svd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L78() else D29()
  // L78()
  goto L78_;

L15_:;
  // st j = r54
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L83() else D32()
  // L83()
  goto L83_;

L16_:;
  // r64 = `/`(dx4, r58)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // l = ld s
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c4 then L95() else L96(r64, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L95()
    goto L95_;
  } else {
  // L96(r64, l)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L96_;
  }

L17_:;
  // r63 = sqrt(r60)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L16(dx7, r63)
  // L16(dx7, r63)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r63_;
  goto L16_;

L18_:;
  // r72 = `!`(r71)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c6 then L101() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L101()
    goto L101_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L26()
  // L26()
  goto L26_;

L20_:;
  // st rank = r74
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // rank = ld rank
  Rsh_Fir_reg_rank = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L119() else D40()
  // L119()
  goto L119_;

L21_:;
  // tol3 = ld tol
  Rsh_Fir_reg_tol3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L117() else D38()
  // L117()
  goto L117_;

L22_:;
  // goto L25(NULL)
  // L25(NULL)
  Rsh_Fir_reg_dx38_ = Rsh_const(CCP, 7);
  goto L25_;

L23_:;
  // st j = r83
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // s12 = ld s
  Rsh_Fir_reg_s12_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L125() else D43()
  // L125()
  goto L125_;

L24_:;
  // l3 = ld s
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c13 = `is.object`(l3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c13 then L135() else L136(dx31, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L135()
    goto L135_;
  } else {
  // L136(dx31, l3)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L136_;
  }

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // sym16 = ldf list
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base16 = ldf list in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard16 then L140() else L141()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L140()
    goto L140_;
  } else {
  // L141()
    goto L141_;
  }

L27_:;
  // l6 = ld s
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c14 = `is.object`(l6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c14 then L148() else L149(r89, l6, r89, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L148()
    goto L148_;
  } else {
  // L149(r89, l6, r89, l6)
    Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r89_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r89_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l6_;
    goto L149_;
  }

L28_:;
  // st r = r111
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r111_, RHO);
  (void)(Rsh_Fir_reg_r111_);
  // retx1 = ld retx
  Rsh_Fir_reg_retx1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L174() else D59()
  // L174()
  goto L174_;

L29_:;
  // goto L30()
  // L30()
  goto L30_;

L30_:;
  // l18 = ld r
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L188() else D63()
  // L188()
  goto L188_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // r = dyn chkDots[`...`](ddd1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chkDots, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L32_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_, CCP, RHO);
  // r2 = dyn as_matrix(p)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D3_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L34_:;
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // scale = ldf scale
  Rsh_Fir_reg_scale = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L35() else D4()
  // L35()
  goto L35_;

D4_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_1, CCP, RHO);
  // p2 = prom<V +>{
  //   center1 = ld center;
  //   center2 = force? center1;
  //   checkMissing(center2);
  //   return center2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_2, CCP, RHO);
  // p3 = prom<V +>{
  //   scale_1 = ld `scale.`;
  //   scale_2 = force? scale_1;
  //   checkMissing(scale_2);
  //   return scale_2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_3, CCP, RHO);
  // r6 = dyn scale[, center, scale](p1, p2, p3)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_scale, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

D5_:;
  // deopt 16 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L36_:;
  // st x = r6
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L38_:;
  // r7 = dyn base(<sym x>, "scaled:center")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

D6_:;
  // deopt 20 [x5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L39_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r9 = dyn attr(x6, "scaled:center")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

D7_:;
  // deopt 24 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L5_;

L41_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

L42_:;
  // r10 = dyn base1(<sym x>, "scaled:scale")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

D8_:;
  // deopt 28 [x7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L43_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r12 = dyn attr1(x8, "scaled:scale")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

D9_:;
  // deopt 32 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L6_;

L45_:;
  // sc = ld sc
  Rsh_Fir_reg_sc = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

L46_:;
  // r13 = dyn base2(<lang `==`(sc, 0.0)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D10_:;
  // deopt 36 [sc]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_sc;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // sc1 = force? sc
  Rsh_Fir_reg_sc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc);
  // checkMissing(sc1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r15 = `==`(sc1, 0.0)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sc1_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r16 = dyn any(r15)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

D11_:;
  // deopt 41 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r16_;
  goto L7_;

L49_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

D12_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // r17 = dyn stop("cannot rescale a constant/zero column to unit variance")
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

D13_:;
  // deopt 45 [r17]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L9()
  // L9()
  goto L9_;

D14_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p4 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_4, CCP, RHO);
  // r20 = dyn nrow(p4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

D15_:;
  // deopt 51 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // st n = r20
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L55() else D16()
  // L55()
  goto L55_;

D16_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p5 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_5, CCP, RHO);
  // r22 = dyn ncol(p5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L56() else D17()
  // L56()
  goto L56_;

D17_:;
  // deopt 56 [r22]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L56_:;
  // st p = r22
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // rank_1 = ld `rank.`
  Rsh_Fir_reg_rank_1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L59() else D18()
  // L59()
  goto L59_;

L58_:;
  // r23 = dyn base3(<sym rank.>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L10_;

D18_:;
  // deopt 59 [rank_1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_rank_1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // rank_2 = force? rank_1
  Rsh_Fir_reg_rank_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank_1_);
  // checkMissing(rank_2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_rank_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c1 = `==`(rank_2, NULL)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_rank_2_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L10(c1)
  // L10(c1)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_c1_;
  goto L10_;

L60_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L61() else D19()
  // L61()
  goto L61_;

D19_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p6 = prom<V +>{
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r27):
  //   r29 = `==`(r27, 1.0);
  //   return r29;
  // L1():
  //   rank_3 = ld `rank.`;
  //   rank_4 = force? rank_3;
  //   checkMissing(rank_4);
  //   length = ldf length in base;
  //   r28 = dyn length(rank_4);
  //   goto L0(r28);
  // L2():
  //   r26 = dyn base4(<sym rank.>);
  //   goto L0(r26);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_6, CCP, RHO);
  // p7 = prom<V +>{
  //   sym5 = ldf `is.finite`;
  //   base5 = ldf `is.finite` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   rank_5 = ld `rank.`;
  //   rank_6 = force? rank_5;
  //   checkMissing(rank_6);
  //   is_finite = ldf `is.finite` in base;
  //   r33 = dyn is_finite(rank_6);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base5(<sym rank.>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym6 = ldf `as.integer`;
  //   base6 = ldf `as.integer` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r36):
  //   r38 = `>`(r36, 0.0);
  //   return r38;
  // L1():
  //   rank_7 = ld `rank.`;
  //   rank_8 = force? rank_7;
  //   checkMissing(rank_8);
  //   as_integer = ldf `as.integer` in base;
  //   r37 = dyn as_integer(rank_8);
  //   goto L0(r37);
  // L2():
  //   r35 = dyn base6(<sym rank.>);
  //   goto L0(r35);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_8, CCP, RHO);
  // r40 = dyn stopifnot(p6, p7, p8)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L62() else D20()
  // L62()
  goto L62_;

D20_:;
  // deopt 68 [r40]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L62_:;
  // sym7 = ldf min
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base7 = ldf min in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard7 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // sym8 = ldf `as.integer`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base8 = ldf `as.integer` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard8 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L64_:;
  // r41 = dyn base7(<lang as.integer(rank.)>, <sym n>, <sym p>)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L12(r41)
  // L12(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L12_;

L65_:;
  // rank_9 = ld `rank.`
  Rsh_Fir_reg_rank_9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

L66_:;
  // r43 = dyn base8(<sym rank.>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L13(r43)
  // L13(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L13_;

D21_:;
  // deopt 73 [rank_9]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_rank_9_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L67_:;
  // rank_10 = force? rank_9
  Rsh_Fir_reg_rank_10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank_9_);
  // checkMissing(rank_10)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_rank_10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r45 = dyn as_integer1(rank_10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_rank_10_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L68() else D22()
  // L68()
  goto L68_;

D22_:;
  // deopt 76 [r45]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L13(r45)
  // L13(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L13_;

D23_:;
  // deopt 77 [n]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L69_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L70() else D24()
  // L70()
  goto L70_;

D24_:;
  // deopt 79 [p9]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L70_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r46 = dyn min(r44, n1, p10)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L71() else D25()
  // L71()
  goto L71_;

D25_:;
  // deopt 82 [r46]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L12(r46)
  // L12(r46)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r46_;
  goto L12_;

L73_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L75() else D26()
  // L75()
  goto L75_;

L74_:;
  // r48 = dyn base9(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L14(r48)
  // L14(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L14_;

D26_:;
  // deopt 85 [n2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // p11 = ld p
  Rsh_Fir_reg_p11_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L76() else D27()
  // L76()
  goto L76_;

D27_:;
  // deopt 87 [p11]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L76_:;
  // p12 = force? p11
  Rsh_Fir_reg_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p11_);
  // checkMissing(p12)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // min1 = ldf min in base
  Rsh_Fir_reg_min1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r49 = dyn min1(n3, p12)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min1_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L77() else D28()
  // L77()
  goto L77_;

D28_:;
  // deopt 90 [r49]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L14(r49)
  // L14(r49)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r49_;
  goto L14_;

D29_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // p13 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_9, CCP, RHO);
  // p14 = prom<V +>{
  //   k = ld k;
  //   k1 = force? k;
  //   checkMissing(k1);
  //   return k1;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_10, CCP, RHO);
  // r52 = dyn svd[, nu, nv](p13, 0.0, p14)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_svd, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L79() else D30()
  // L79()
  goto L79_;

D30_:;
  // deopt 99 [r52]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L79_:;
  // st s = r52
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // sym10 = ldf seq_len
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base10 = ldf seq_len in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard10 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L80_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L82() else D31()
  // L82()
  goto L82_;

L81_:;
  // r53 = dyn base10(<sym k>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L15(r53)
  // L15(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L15_;

D31_:;
  // deopt 102 [k2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L82_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // checkMissing(k3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_k3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r55 = seq_len(k3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_k3_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L15(r55)
  // L15(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L15_;

D32_:;
  // deopt 106 [s]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L83_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(s1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c3 then L85() else L86(s1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L85()
    goto L85_;
  } else {
  // L86(s1)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_s1_;
    goto L86_;
  }

L84_:;
  // sym11 = ldf sqrt
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base11 = ldf sqrt in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard11 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L85_:;
  // dr = tryDispatchBuiltin.1("$", s1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc then L87() else L86(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L87()
    goto L87_;
  } else {
  // L86(dr)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_dr;
    goto L86_;
  }

L86_:;
  // r56 = `$`(s3, <sym d>)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L84(r56)
  // L84(r56)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r56_;
  goto L84_;

L87_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L84(dx)
  // L84(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L84_;

L88_:;
  // sym12 = ldf max
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base12 = ldf max in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard12 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L89_:;
  // r57 = dyn base11(<lang max(1.0, `-`(n, 1.0))>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L16(dx1, r57)
  // L16(dx1, r57)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L16_;

L90_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L92() else D33()
  // L92()
  goto L92_;

L91_:;
  // r59 = dyn base12(1.0, <lang `-`(n, 1.0)>)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L17(dx1, r59)
  // L17(dx1, r59)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L17_;

D33_:;
  // deopt 112 [dx1, n4]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L92_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r61 = `-`(n5, 1.0)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r62 = dyn max(1.0, r61)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L93() else D34()
  // L93()
  goto L93_;

D34_:;
  // deopt 117 [dx1, r62]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L17(dx1, r62)
  // L17(dx1, r62)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r62_;
  goto L17_;

L94_:;
  // st s = dx9
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard13 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L95_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l, r64)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args95);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc1 then L97() else L96(r64, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L97()
    goto L97_;
  } else {
  // L96(r64, dr2)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L96_;
  }

L96_:;
  // r69 = `$<-`(l2, <sym d>, r64)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L94(r69)
  // L94(r69)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r69_;
  goto L94_;

L97_:;
  // dx8 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L94(dx8)
  // L94(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L94_;

L98_:;
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L100() else D35()
  // L100()
  goto L100_;

L99_:;
  // r70 = dyn base13(<sym tol>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L18(r70)
  // L18(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L18_;

D35_:;
  // deopt 124 [tol1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_tol1_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L100_:;
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c5 = `==`(tol2, NULL)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_tol2_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L18(c5)
  // L18(c5)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_c5_;
  goto L18_;

L101_:;
  // sym14 = ldf sum
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base14 = ldf sum in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard14 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L102_:;
  // s4 = ld s
  Rsh_Fir_reg_s4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L104() else D36()
  // L104()
  goto L104_;

L103_:;
  // r73 = dyn base14(<lang `>`(`$`(s, d), `(`(`*`(`[`(`$`(s, d), 1), tol)))>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L20(r73)
  // L20(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L20_;

D36_:;
  // deopt 130 [s4]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L104_:;
  // s5 = force? s4
  Rsh_Fir_reg_s5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s4_);
  // checkMissing(s5)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_s5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(s5)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c7 then L106() else L107(s5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L106()
    goto L106_;
  } else {
  // L107(s5)
    Rsh_Fir_reg_s7_ = Rsh_Fir_reg_s5_;
    goto L107_;
  }

L105_:;
  // s8 = ld s
  Rsh_Fir_reg_s8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L109() else D37()
  // L109()
  goto L109_;

L106_:;
  // dr4 = tryDispatchBuiltin.1("$", s5)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_s5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc2 then L108() else L107(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L108()
    goto L108_;
  } else {
  // L107(dr4)
    Rsh_Fir_reg_s7_ = Rsh_Fir_reg_dr4_;
    goto L107_;
  }

L107_:;
  // r75 = `$`(s7, <sym d>)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L105(r75)
  // L105(r75)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r75_;
  goto L105_;

L108_:;
  // dx10 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L105(dx10)
  // L105(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L105_;

D37_:;
  // deopt 132 [dx11, s8]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_s8_;
  Rsh_Fir_deopt(132, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L109_:;
  // s9 = force? s8
  Rsh_Fir_reg_s9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s8_);
  // checkMissing(s9)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_s9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(s9)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_s9_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c8 then L111() else L112(dx11, s9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L111()
    goto L111_;
  } else {
  // L112(dx11, s9)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_s11_ = Rsh_Fir_reg_s9_;
    goto L112_;
  }

L110_:;
  // c9 = `is.object`(dx17)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c9 then L114() else L115(dx16, dx17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L114()
    goto L114_;
  } else {
  // L115(dx16, dx17)
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx17_;
    goto L115_;
  }

L111_:;
  // dr6 = tryDispatchBuiltin.1("$", s9)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_s9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc3 then L113() else L112(dx11, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L113()
    goto L113_;
  } else {
  // L112(dx11, dr6)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_s11_ = Rsh_Fir_reg_dr6_;
    goto L112_;
  }

L112_:;
  // r76 = `$`(s11, <sym d>)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_s11_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L110(dx13, r76)
  // L110(dx13, r76)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r76_;
  goto L110_;

L113_:;
  // dx15 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L110(dx11, dx15)
  // L110(dx11, dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
  goto L110_;

L114_:;
  // dr8 = tryDispatchBuiltin.1("[", dx17)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args117);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc4 then L116() else L115(dx16, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L116()
    goto L116_;
  } else {
  // L115(dx16, dr8)
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dr8_;
    goto L115_;
  }

L115_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r77 = dyn __(dx21, 1)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L21(dx20, r77)
  // L21(dx20, r77)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r77_;
  goto L21_;

L116_:;
  // dx23 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L21(dx16, dx23)
  // L21(dx16, dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L21_;

D38_:;
  // deopt 137 [dx24, dx25, tol3]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_tol3_;
  Rsh_Fir_deopt(137, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L117_:;
  // tol4 = force? tol3
  Rsh_Fir_reg_tol4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol3_);
  // checkMissing(tol4)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_tol4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // r78 = `*`(dx25, tol4)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_tol4_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // r79 = `>`(dx24, r78)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r80 = dyn sum(r79)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L118() else D39()
  // L118()
  goto L118_;

D39_:;
  // deopt 142 [r80]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L118_:;
  // goto L20(r80)
  // L20(r80)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r80_;
  goto L20_;

D40_:;
  // deopt 144 [rank]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_rank;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L119_:;
  // rank1 = force? rank
  Rsh_Fir_reg_rank1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank);
  // checkMissing(rank1)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_rank1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L120() else D41()
  // L120()
  goto L120_;

D41_:;
  // deopt 145 [rank1, k4]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_rank1_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_k4_;
  Rsh_Fir_deopt(145, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L120_:;
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // checkMissing(k5)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_k5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // r81 = `<`(rank1, k5)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_rank1_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_k5_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c10 then L121() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L121()
    goto L121_;
  } else {
  // L22()
    goto L22_;
  }

L121_:;
  // sym15 = ldf seq_len
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base15 = ldf seq_len in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard15 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L122_:;
  // rank2 = ld rank
  Rsh_Fir_reg_rank2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L124() else D42()
  // L124()
  goto L124_;

L123_:;
  // r82 = dyn base15(<lang `<-`(k, rank)>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L23(r82)
  // L23(r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L23_;

D42_:;
  // deopt 149 [rank2]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_rank2_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L124_:;
  // rank3 = force? rank2
  Rsh_Fir_reg_rank3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank2_);
  // checkMissing(rank3)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_rank3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // st k = rank3
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_rank3_, RHO);
  (void)(Rsh_Fir_reg_rank3_);
  // r84 = seq_len(rank3)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_rank3_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L23(r84)
  // L23(r84)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L23_;

D43_:;
  // deopt 154 [s12]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_s12_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L125_:;
  // s13 = force? s12
  Rsh_Fir_reg_s13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s12_);
  // checkMissing(s13)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_s13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(s13)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_s13_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c11 then L127() else L128(s13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L127()
    goto L127_;
  } else {
  // L128(s13)
    Rsh_Fir_reg_s15_ = Rsh_Fir_reg_s13_;
    goto L128_;
  }

L126_:;
  // c12 = `is.object`(dx27)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c12 then L130() else L131(dx27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L130()
    goto L130_;
  } else {
  // L131(dx27)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
    goto L131_;
  }

L127_:;
  // dr10 = tryDispatchBuiltin.1("$", s13)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_s13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args136);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if dc5 then L129() else L128(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L129()
    goto L129_;
  } else {
  // L128(dr10)
    Rsh_Fir_reg_s15_ = Rsh_Fir_reg_dr10_;
    goto L128_;
  }

L128_:;
  // r85 = `$`(s15, <sym v>)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_s15_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L126(r85)
  // L126(r85)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r85_;
  goto L126_;

L129_:;
  // dx26 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L126(dx26)
  // L126(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L126_;

L130_:;
  // dr12 = tryDispatchBuiltin.1("[", dx27)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args140);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if dc6 then L132() else L131(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L132()
    goto L132_;
  } else {
  // L131(dr12)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dr12_;
    goto L131_;
  }

L131_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L133() else D44()
  // L133()
  goto L133_;

L132_:;
  // dx30 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L24(dx30)
  // L24(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L24_;

D44_:;
  // deopt 158 [dx29, j]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L133_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r86 = dyn __1(dx27, <missing>, j1, FALSE)
  SEXP Rsh_Fir_array_args143[4];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args143[2] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_args143[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names36[4];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_array_arg_names36[3] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 4, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L24(r86)
  // L24(r86)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r86_;
  goto L24_;

L134_:;
  // st s = dx37
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // goto L25(dx36)
  // L25(dx36)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx36_;
  goto L25_;

L135_:;
  // dr14 = tryDispatchBuiltin.0("$<-", l3, dx31)
  SEXP Rsh_Fir_array_args144[3];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args144[2] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args144);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if dc7 then L137() else L136(dx31, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L137()
    goto L137_;
  } else {
  // L136(dx31, dr14)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr14_;
    goto L136_;
  }

L136_:;
  // r87 = `$<-`(l5, <sym v>, dx31)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L134(dx33, r87)
  // L134(dx33, r87)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r87_;
  goto L134_;

L137_:;
  // dx35 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L134(dx31, dx35)
  // L134(dx31, dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx35_;
  goto L134_;

L140_:;
  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L142() else D45()
  // L142()
  goto L142_;

L141_:;
  // r88 = dyn base16(<lang colnames(x)>, <lang paste0("PC", j)>)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args148[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L27(r88)
  // L27(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L27_;

D45_:;
  // deopt 174 []
  Rsh_Fir_deopt(174, 0, NULL, CCP, RHO);
  return R_NilValue;

L142_:;
  // p15 = prom<V +>{
  //   x15 = ld x;
  //   x16 = force? x15;
  //   checkMissing(x16);
  //   return x16;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_11, CCP, RHO);
  // r91 = dyn colnames(p15)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L143() else D46()
  // L143()
  goto L143_;

D46_:;
  // deopt 176 [r91]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L143_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L144() else D47()
  // L144()
  goto L144_;

D47_:;
  // deopt 178 []
  Rsh_Fir_deopt(178, 0, NULL, CCP, RHO);
  return R_NilValue;

L144_:;
  // p16 = prom<V +>{
  //   j2 = ld j;
  //   j3 = force? j2;
  //   checkMissing(j3);
  //   return j3;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_12, CCP, RHO);
  // r93 = dyn paste0("PC", p16)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L145() else D48()
  // L145()
  goto L145_;

D48_:;
  // deopt 181 [r93]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L145_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r94 = dyn list(r91, r93)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L146() else D49()
  // L146()
  goto L146_;

D49_:;
  // deopt 183 [r94]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L146_:;
  // goto L27(r94)
  // L27(r94)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r94_;
  goto L27_;

L147_:;
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // check L151() else D50()
  // L151()
  goto L151_;

L148_:;
  // dr16 = tryDispatchBuiltin.1("$", l6)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args154);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if dc8 then L150() else L149(r89, l6, r89, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L150()
    goto L150_;
  } else {
  // L149(r89, l6, r89, dr16)
    Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r89_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r89_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr16_;
    goto L149_;
  }

L149_:;
  // r103 = `$`(l10, <sym v>)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L147(r97, l9, r98, r103)
  // L147(r97, l9, r98, r103)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r103_;
  goto L147_;

L150_:;
  // dx40 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L147(r89, l6, r89, dx40)
  // L147(r89, l6, r89, dx40)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L147_;

D50_:;
  // deopt 188 [r101, l12, dx41, r102]
  SEXP Rsh_Fir_array_deopt_stack40[4];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(188, 4, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L151_:;
  // r104 = dyn dimnames__(dx41, NULL, r102)
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args158[2] = Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L152() else D51()
  // L152()
  goto L152_;

D51_:;
  // deopt 190 [r101, l12, r104]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(190, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L152_:;
  // c15 = `is.object`(l12)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if c15 then L154() else L155(r101, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L154()
    goto L154_;
  } else {
  // L155(r101, l12)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r101_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L155_;
  }

L153_:;
  // st s = dx43
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx43_, RHO);
  (void)(Rsh_Fir_reg_dx43_);
  // sym17 = ldf list
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base17 = ldf list in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args160);
  // if guard17 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L154_:;
  // dr18 = tryDispatchBuiltin.0("$<-", l12, r104)
  SEXP Rsh_Fir_array_args161[3];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args161[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args161);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // if dc9 then L156() else L155(r101, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L156()
    goto L156_;
  } else {
  // L155(r101, dr18)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r101_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr18_;
    goto L155_;
  }

L155_:;
  // r109 = `$<-`(l14, <sym v>, r104)
  SEXP Rsh_Fir_array_args163[3];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args163[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // goto L153(r109)
  // L153(r109)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r109_;
  goto L153_;

L156_:;
  // dx42 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L153(dx42)
  // L153(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L153_;

L157_:;
  // s16 = ld s
  Rsh_Fir_reg_s16_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L159() else D52()
  // L159()
  goto L159_;

L158_:;
  // r110 = dyn base17[sdev, rotation, center, scale](<lang `$`(s, d)>, <lang `$`(s, v)>, <lang `%||%`(cen, FALSE)>, <lang `%||%`(sc, FALSE)>)
  SEXP Rsh_Fir_array_args165[4];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args165[1] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args165[2] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args165[3] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names42[4];
  Rsh_Fir_array_arg_names42[0] = Rsh_const(CCP, 72);
  Rsh_Fir_array_arg_names42[1] = Rsh_const(CCP, 73);
  Rsh_Fir_array_arg_names42[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names42[3] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 4, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L28(r110)
  // L28(r110)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r110_;
  goto L28_;

D52_:;
  // deopt 195 [s16]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_s16_;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L159_:;
  // s17 = force? s16
  Rsh_Fir_reg_s17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s16_);
  // checkMissing(s17)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_s17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(s17)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_s17_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if c16 then L161() else L162(s17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L161()
    goto L161_;
  } else {
  // L162(s17)
    Rsh_Fir_reg_s19_ = Rsh_Fir_reg_s17_;
    goto L162_;
  }

L160_:;
  // s20 = ld s
  Rsh_Fir_reg_s20_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L164() else D53()
  // L164()
  goto L164_;

L161_:;
  // dr20 = tryDispatchBuiltin.1("$", s17)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_s17_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args168);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if dc10 then L163() else L162(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L163()
    goto L163_;
  } else {
  // L162(dr20)
    Rsh_Fir_reg_s19_ = Rsh_Fir_reg_dr20_;
    goto L162_;
  }

L162_:;
  // r112 = `$`(s19, <sym d>)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_s19_;
  Rsh_Fir_array_args170[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L160(r112)
  // L160(r112)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r112_;
  goto L160_;

L163_:;
  // dx44 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // goto L160(dx44)
  // L160(dx44)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L160_;

D53_:;
  // deopt 199 [s20]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_s20_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L164_:;
  // s21 = force? s20
  Rsh_Fir_reg_s21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s20_);
  // checkMissing(s21)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_s21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(s21)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_s21_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if c17 then L166() else L167(s21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L166()
    goto L166_;
  } else {
  // L167(s21)
    Rsh_Fir_reg_s23_ = Rsh_Fir_reg_s21_;
    goto L167_;
  }

L165_:;
  // ____ = ldf `%||%`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // check L169() else D54()
  // L169()
  goto L169_;

L166_:;
  // dr22 = tryDispatchBuiltin.1("$", s21)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_s21_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args174);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc11 then L168() else L167(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L168()
    goto L168_;
  } else {
  // L167(dr22)
    Rsh_Fir_reg_s23_ = Rsh_Fir_reg_dr22_;
    goto L167_;
  }

L167_:;
  // r113 = `$`(s23, <sym v>)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_s23_;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L165(r113)
  // L165(r113)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r113_;
  goto L165_;

L168_:;
  // dx46 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L165(dx46)
  // L165(dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L165_;

D54_:;
  // deopt 204 []
  Rsh_Fir_deopt(204, 0, NULL, CCP, RHO);
  return R_NilValue;

L169_:;
  // p17 = prom<V +>{
  //   cen = ld cen;
  //   cen1 = force? cen;
  //   checkMissing(cen1);
  //   return cen1;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_13, CCP, RHO);
  // r115 = dyn ____(p17, FALSE)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args179[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L170() else D55()
  // L170()
  goto L170_;

D55_:;
  // deopt 207 [r115]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L170_:;
  // ____1 = ldf `%||%`
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // check L171() else D56()
  // L171()
  goto L171_;

D56_:;
  // deopt 210 []
  Rsh_Fir_deopt(210, 0, NULL, CCP, RHO);
  return R_NilValue;

L171_:;
  // p18 = prom<V +>{
  //   sc2 = ld sc;
  //   sc3 = force? sc2;
  //   checkMissing(sc3);
  //   return sc3;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106172069_14, CCP, RHO);
  // r117 = dyn ____1(p18, FALSE)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args181[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 2, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L172() else D57()
  // L172()
  goto L172_;

D57_:;
  // deopt 213 [r117]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L172_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r118 = dyn list1(dx45, dx47, r115, r117)
  SEXP Rsh_Fir_array_args182[4];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_args182[2] = Rsh_Fir_reg_r115_;
  Rsh_Fir_array_args182[3] = Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_array_arg_names45[4];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_array_arg_names45[3] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 4, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L173() else D58()
  // L173()
  goto L173_;

D58_:;
  // deopt 216 [r118]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(216, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L173_:;
  // goto L28(r118)
  // L28(r118)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r118_;
  goto L28_;

D59_:;
  // deopt 218 [retx1]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_retx1_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L174_:;
  // retx2 = force? retx1
  Rsh_Fir_reg_retx2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_retx1_);
  // checkMissing(retx2)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_retx2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(retx2)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_retx2_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if c18 then L175() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L175()
    goto L175_;
  } else {
  // L29()
    goto L29_;
  }

L175_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L176() else D60()
  // L176()
  goto L176_;

D60_:;
  // deopt 221 [x17]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(221, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L176_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // s24 = ld s
  Rsh_Fir_reg_s24_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L177() else D61()
  // L177()
  goto L177_;

D61_:;
  // deopt 223 [s24]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_s24_;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L177_:;
  // s25 = force? s24
  Rsh_Fir_reg_s25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s24_);
  // checkMissing(s25)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_s25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(s25)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_s25_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // if c19 then L179() else L180(s25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L179()
    goto L179_;
  } else {
  // L180(s25)
    Rsh_Fir_reg_s27_ = Rsh_Fir_reg_s25_;
    goto L180_;
  }

L178_:;
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 75), RHO);
  // r120 = dyn ___(x18, dx49)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_dx49_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L182() else D62()
  // L182()
  goto L182_;

L179_:;
  // dr24 = tryDispatchBuiltin.1("$", s25)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_s25_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args189);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if dc12 then L181() else L180(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L181()
    goto L181_;
  } else {
  // L180(dr24)
    Rsh_Fir_reg_s27_ = Rsh_Fir_reg_dr24_;
    goto L180_;
  }

L180_:;
  // r119 = `$`(s27, <sym v>)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_s27_;
  Rsh_Fir_array_args191[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // goto L178(r119)
  // L178(r119)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r119_;
  goto L178_;

L181_:;
  // dx48 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // goto L178(dx48)
  // L178(dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L178_;

D62_:;
  // deopt 227 [r120]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r120_;
  Rsh_Fir_deopt(227, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L182_:;
  // l15 = ld r
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // c20 = `is.object`(l15)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if c20 then L184() else L185(r120, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L184()
    goto L184_;
  } else {
  // L185(r120, l15)
    Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r120_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L185_;
  }

L183_:;
  // st r = dx51
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx51_, RHO);
  (void)(Rsh_Fir_reg_dx51_);
  // goto L30()
  // L30()
  goto L30_;

L184_:;
  // dr26 = tryDispatchBuiltin.0("$<-", l15, r120)
  SEXP Rsh_Fir_array_args194[3];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args194[2] = Rsh_Fir_reg_r120_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args194);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // if dc13 then L186() else L185(r120, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L186()
    goto L186_;
  } else {
  // L185(r120, dr26)
    Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r120_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr26_;
    goto L185_;
  }

L185_:;
  // r125 = `$<-`(l17, <sym x>, r120)
  SEXP Rsh_Fir_array_args196[3];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args196[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args196[2] = Rsh_Fir_reg_r120_;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // goto L183(r122, r125)
  // L183(r122, r125)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r122_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r125_;
  goto L183_;

L186_:;
  // dx50 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // goto L183(r120, dx50)
  // L183(r120, dx50)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r120_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx50_;
  goto L183_;

D63_:;
  // deopt 236 ["prcomp", l18, "prcomp"]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_const(CCP, 76);
  Rsh_Fir_deopt(236, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L188_:;
  // r127 = dyn class__(l18, NULL, "prcomp")
  SEXP Rsh_Fir_array_args198[3];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args198[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args198[2] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L189() else D64()
  // L189()
  goto L189_;

D64_:;
  // deopt 238 ["prcomp", r127]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(238, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L189_:;
  // st r = r127
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r127_, RHO);
  (void)(Rsh_Fir_reg_r127_);
  // r128 = ld r
  Rsh_Fir_reg_r128_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L190() else D65()
  // L190()
  goto L190_;

D65_:;
  // deopt 240 [r128]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r128_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L190_:;
  // r129 = force? r128
  Rsh_Fir_reg_r129_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r128_);
  // checkMissing(r129)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_r129_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r129
  return Rsh_Fir_reg_r129_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_1(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_2(SEXP CCP, SEXP RHO) {
  // center1 = ld center
  Rsh_Fir_reg_center1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // center2 = force? center1
  Rsh_Fir_reg_center2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_center1_);
  // checkMissing(center2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_center2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return center2
  return Rsh_Fir_reg_center2_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_3(SEXP CCP, SEXP RHO) {
  // scale_1 = ld `scale.`
  Rsh_Fir_reg_scale_1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // scale_2 = force? scale_1
  Rsh_Fir_reg_scale_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale_1_);
  // checkMissing(scale_2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_scale_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return scale_2
  return Rsh_Fir_reg_scale_2_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_4(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_5(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_6(SEXP CCP, SEXP RHO) {
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r29 = `==`(r27, 1.0)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // return r29
  return Rsh_Fir_reg_r29_;

L1_:;
  // rank_3 = ld `rank.`
  Rsh_Fir_reg_rank_3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // rank_4 = force? rank_3
  Rsh_Fir_reg_rank_4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank_3_);
  // checkMissing(rank_4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_rank_4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r28 = dyn length(rank_4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_rank_4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r26 = dyn base4(<sym rank.>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_7(SEXP CCP, SEXP RHO) {
  // sym5 = ldf `is.finite`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base5 = ldf `is.finite` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // rank_5 = ld `rank.`
  Rsh_Fir_reg_rank_5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // rank_6 = force? rank_5
  Rsh_Fir_reg_rank_6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank_5_);
  // checkMissing(rank_6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_rank_6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r33 = dyn is_finite(rank_6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_rank_6_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base5(<sym rank.>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_8(SEXP CCP, SEXP RHO) {
  // sym6 = ldf `as.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base6 = ldf `as.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r38 = `>`(r36, 0.0)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // return r38
  return Rsh_Fir_reg_r38_;

L1_:;
  // rank_7 = ld `rank.`
  Rsh_Fir_reg_rank_7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // rank_8 = force? rank_7
  Rsh_Fir_reg_rank_8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank_7_);
  // checkMissing(rank_8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_rank_8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r37 = dyn as_integer(rank_8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_rank_8_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L0_;

L2_:;
  // r35 = dyn base6(<sym rank.>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_9(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_10(SEXP CCP, SEXP RHO) {
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return k1
  return Rsh_Fir_reg_k1_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_11(SEXP CCP, SEXP RHO) {
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return x16
  return Rsh_Fir_reg_x16_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_12(SEXP CCP, SEXP RHO) {
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // checkMissing(j3)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_j3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // return j3
  return Rsh_Fir_reg_j3_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_13(SEXP CCP, SEXP RHO) {
  // cen = ld cen
  Rsh_Fir_reg_cen = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // cen1 = force? cen
  Rsh_Fir_reg_cen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cen);
  // checkMissing(cen1)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_cen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // return cen1
  return Rsh_Fir_reg_cen1_;
}
SEXP Rsh_Fir_user_promise_inner4106172069_14(SEXP CCP, SEXP RHO) {
  // sc2 = ld sc
  Rsh_Fir_reg_sc2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // sc3 = force? sc2
  Rsh_Fir_reg_sc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc2_);
  // checkMissing(sc3)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_sc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // return sc3
  return Rsh_Fir_reg_sc3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
