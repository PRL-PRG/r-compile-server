#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner796660176_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner796660176_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner796660176_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner796660176_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner796660176
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner796660176_, RHO, CCP);
  // st `loess.smooth` = r
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
SEXP Rsh_Fir_user_function_inner796660176_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner796660176 dynamic dispatch ([x, y, span, degree, family, evaluation, `...`])

  return Rsh_Fir_user_version_inner796660176_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner796660176_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner796660176 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner796660176/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_span;  // span
  SEXP Rsh_Fir_reg_degree;  // degree
  SEXP Rsh_Fir_reg_family;  // family
  SEXP Rsh_Fir_reg_evaluation;  // evaluation
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_span_isMissing;  // span_isMissing
  SEXP Rsh_Fir_reg_span_orDefault;  // span_orDefault
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_degree_isMissing;  // degree_isMissing
  SEXP Rsh_Fir_reg_degree_orDefault;  // degree_orDefault
  SEXP Rsh_Fir_reg_family_isMissing;  // family_isMissing
  SEXP Rsh_Fir_reg_family_orDefault;  // family_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_evaluation_isMissing;  // evaluation_isMissing
  SEXP Rsh_Fir_reg_evaluation_orDefault;  // evaluation_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_notna;  // notna
  SEXP Rsh_Fir_reg_notna1_;  // notna1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_notna2_;  // notna2
  SEXP Rsh_Fir_reg_notna3_;  // notna3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_evaluation1_;  // evaluation1
  SEXP Rsh_Fir_reg_evaluation2_;  // evaluation2
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_loess_control;  // loess_control
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_y8_;  // y8
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_family1_;  // family1
  SEXP Rsh_Fir_reg_family2_;  // family2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_family3_;  // family3
  SEXP Rsh_Fir_reg_family4_;  // family4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_control;  // control
  SEXP Rsh_Fir_reg_control1_;  // control1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_control3_;  // control3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_simpleLoess;  // simpleLoess
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_span1_;  // span1
  SEXP Rsh_Fir_reg_span2_;  // span2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_degree1_;  // degree1
  SEXP Rsh_Fir_reg_degree2_;  // degree2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_control4_;  // control4
  SEXP Rsh_Fir_reg_control5_;  // control5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_control7_;  // control7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_iterations;  // iterations
  SEXP Rsh_Fir_reg_iterations1_;  // iterations1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_control8_;  // control8
  SEXP Rsh_Fir_reg_control9_;  // control9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_control11_;  // control11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_control12_;  // control12
  SEXP Rsh_Fir_reg_control13_;  // control13
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_control15_;  // control15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_C_loess_ifit;  // C_loess_ifit
  SEXP Rsh_Fir_reg_C_loess_ifit1_;  // C_loess_ifit1
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_kd;  // kd
  SEXP Rsh_Fir_reg_kd1_;  // kd1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_kd3_;  // kd3
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_kd4_;  // kd4
  SEXP Rsh_Fir_reg_kd5_;  // kd5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_kd7_;  // kd7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_kd8_;  // kd8
  SEXP Rsh_Fir_reg_kd9_;  // kd9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_kd11_;  // kd11
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_kd12_;  // kd12
  SEXP Rsh_Fir_reg_kd13_;  // kd13
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_kd15_;  // kd15
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_as_double1_;  // as_double1
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_kd16_;  // kd16
  SEXP Rsh_Fir_reg_kd17_;  // kd17
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_kd19_;  // kd19
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_as_double2_;  // as_double2
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_evaluation3_;  // evaluation3
  SEXP Rsh_Fir_reg_evaluation4_;  // evaluation4
  SEXP Rsh_Fir_reg_as_integer2_;  // as_integer2
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_new_x;  // new_x
  SEXP Rsh_Fir_reg_new_x1_;  // new_x1
  SEXP Rsh_Fir_reg_as_double3_;  // as_double3
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_double;  // double
  SEXP Rsh_Fir_reg_evaluation5_;  // evaluation5
  SEXP Rsh_Fir_reg_evaluation6_;  // evaluation6
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg__C;  // _C
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_new_x2_;  // new_x2
  SEXP Rsh_Fir_reg_new_x3_;  // new_x3
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r91_;  // r91

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_span = PARAMS[2];
  Rsh_Fir_reg_degree = PARAMS[3];
  Rsh_Fir_reg_family = PARAMS[4];
  Rsh_Fir_reg_evaluation = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // span_isMissing = missing.0(span)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_span;
  Rsh_Fir_reg_span_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if span_isMissing then L0() else L1(span)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_span_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(span)
    Rsh_Fir_reg_span_orDefault = Rsh_Fir_reg_span;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   return 0.6666666666666666;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_span_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st span = span_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_span_orDefault, RHO);
  (void)(Rsh_Fir_reg_span_orDefault);
  // degree_isMissing = missing.0(degree)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_degree;
  Rsh_Fir_reg_degree_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if degree_isMissing then L2(1.0) else L2(degree)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_degree_isMissing)) {
  // L2(1.0)
    Rsh_Fir_reg_degree_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(degree)
    Rsh_Fir_reg_degree_orDefault = Rsh_Fir_reg_degree;
    goto L2_;
  }

L2_:;
  // st degree = degree_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_degree_orDefault, RHO);
  (void)(Rsh_Fir_reg_degree_orDefault);
  // family_isMissing = missing.0(family)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_family;
  Rsh_Fir_reg_family_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if family_isMissing then L3() else L4(family)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_family_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(family)
    Rsh_Fir_reg_family_orDefault = Rsh_Fir_reg_family;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c("symmetric", "gaussian");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base("symmetric", "gaussian");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_1, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_family_orDefault = Rsh_Fir_reg_p1_;
  goto L4_;

L4_:;
  // st family = family_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_family_orDefault, RHO);
  (void)(Rsh_Fir_reg_family_orDefault);
  // evaluation_isMissing = missing.0(evaluation)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_evaluation;
  Rsh_Fir_reg_evaluation_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if evaluation_isMissing then L5(50.0) else L5(evaluation)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_evaluation_isMissing)) {
  // L5(50.0)
    Rsh_Fir_reg_evaluation_orDefault = Rsh_const(CCP, 11);
    goto L5_;
  } else {
  // L5(evaluation)
    Rsh_Fir_reg_evaluation_orDefault = Rsh_Fir_reg_evaluation;
    goto L5_;
  }

L5_:;
  // st evaluation = evaluation_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_evaluation_orDefault, RHO);
  (void)(Rsh_Fir_reg_evaluation_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L6_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L7_:;
  // r14 = `||`(r11, r12)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // r15 = `!`(r14)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // st notna = r15
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L8_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L9_:;
  // st y = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym3 = ldf `seq.int`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf `seq.int` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard3 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L10_:;
  // st `new.x` = r19
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // loess_control = ldf `loess.control`
  Rsh_Fir_reg_loess_control = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

L11_:;
  // sym5 = ldf max
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf max in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard5 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L12_:;
  // evaluation1 = ld evaluation
  Rsh_Fir_reg_evaluation1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

L13_:;
  // st w = r29
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L14_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r33 = dyn rep_len(1.0, r31)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L64() else D18()
  // L64()
  goto L64_;

L15_:;
  // control = ld control
  Rsh_Fir_reg_control = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L70() else D22()
  // L70()
  goto L70_;

L16_:;
  // st iterations = r37
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // simpleLoess = ldf simpleLoess
  Rsh_Fir_reg_simpleLoess = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L75() else D23()
  // L75()
  goto L75_;

L17_:;
  // c14 = `is.object`(r56)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c14 then L136() else L137(r56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L136()
    goto L136_;
  } else {
  // L137(r56)
    Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r56_;
    goto L137_;
  }

L18_:;
  // sym10 = ldf `as.integer`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base10 = ldf `as.integer` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard10 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L19_:;
  // sym11 = ldf `as.double`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base11 = ldf `as.double` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard11 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L20_:;
  // sym12 = ldf `as.double`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base12 = ldf `as.double` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard12 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L21_:;
  // sym13 = ldf `as.double`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base13 = ldf `as.double` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard13 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L22_:;
  // sym14 = ldf `as.integer`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base14 = ldf `as.integer` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard14 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L23_:;
  // sym15 = ldf `as.double`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base15 = ldf `as.double` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard15 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L24_:;
  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L132() else D40()
  // L132()
  goto L132_;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r90
  return Rsh_Fir_reg_r90_;

L26_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r5 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L6_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L28_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r7 = dyn is_na(x2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

D1_:;
  // deopt 5 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L6_;

L30_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

L31_:;
  // r10 = dyn base2(<sym y>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r6, r10)
  // L7(r6, r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
  goto L7_;

D2_:;
  // deopt 7 [r6, y1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r13 = dyn is_na1(y2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

D3_:;
  // deopt 10 [r6, r13]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L7(r6, r13)
  // L7(r6, r13)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L7_;

D4_:;
  // deopt 14 [x3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L36(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L36(x4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    goto L36_;
  }

L35_:;
  // dr = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr;
    goto L36_;
  }

L36_:;
  // notna = ld notna
  Rsh_Fir_reg_notna = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

D5_:;
  // deopt 16 [x6, notna]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_notna;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L38_:;
  // notna1 = force? notna
  Rsh_Fir_reg_notna1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_notna);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r16 = dyn __(x6, notna1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_notna1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L8_;

D6_:;
  // deopt 20 [y3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(y4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c2 then L40() else L41(y4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L40()
    goto L40_;
  } else {
  // L41(y4)
    Rsh_Fir_reg_y6_ = Rsh_Fir_reg_y4_;
    goto L41_;
  }

L40_:;
  // dr2 = tryDispatchBuiltin.1("[", y4)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_y4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc1 then L42() else L41(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L42()
    goto L42_;
  } else {
  // L41(dr2)
    Rsh_Fir_reg_y6_ = Rsh_Fir_reg_dr2_;
    goto L41_;
  }

L41_:;
  // notna2 = ld notna
  Rsh_Fir_reg_notna2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

L42_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D7_:;
  // deopt 22 [y6, notna2]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_y6_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_notna2_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // notna3 = force? notna2
  Rsh_Fir_reg_notna3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_notna2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r17 = dyn __1(y6, notna3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_y6_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_notna3_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L9_;

L44_:;
  // sym4 = ldf min
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base4 = ldf min in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard4 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L45_:;
  // r18 = dyn base3[, , `length.out`](<lang min(x)>, <lang max(x)>, <sym evaluation>)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L10_;

L46_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

L47_:;
  // r20 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

D8_:;
  // deopt 30 [x7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r22 = dyn min(x8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

D9_:;
  // deopt 33 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L11_;

L50_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

L51_:;
  // r23 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

D10_:;
  // deopt 36 [x9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r25 = dyn max(x10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

D11_:;
  // deopt 39 [r25]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

D12_:;
  // deopt 40 [evaluation1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_evaluation1_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // evaluation2 = force? evaluation1
  Rsh_Fir_reg_evaluation2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_evaluation1_);
  // checkMissing(evaluation2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_evaluation2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r26 = dyn seq_int(r21, r24, evaluation2)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_evaluation2_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

D13_:;
  // deopt 44 [r26]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r26_;
  goto L10_;

D14_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // r27 = dyn loess_control[`...`](ddd1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_loess_control, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

D15_:;
  // deopt 49 [r27]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L57_:;
  // st control = r27
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym6 = ldf rep_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base6 = ldf rep_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard6 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard7 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L59_:;
  // r28 = dyn base6(1.0, <lang length(y)>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r28)
  // L13(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L13_;

L60_:;
  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

L61_:;
  // r30 = dyn base7(<sym y>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r30)
  // L14(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L14_;

D16_:;
  // deopt 56 [y7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L62_:;
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r32 = dyn length(y8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

D17_:;
  // deopt 59 [r32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L14(r32)
  // L14(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L14_;

D18_:;
  // deopt 61 [r33]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L13(r33)
  // L13(r33)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r33_;
  goto L13_;

D19_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p2 = prom<V +>{
  //   family1 = ld family;
  //   family2 = force? family1;
  //   checkMissing(family2);
  //   return family2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_2, CCP, RHO);
  // r35 = dyn match_arg(p2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D20_:;
  // deopt 66 [r35]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L66_:;
  // st family = r35
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // family3 = ld family
  Rsh_Fir_reg_family3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

D21_:;
  // deopt 68 [family3]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_family3_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L67_:;
  // family4 = force? family3
  Rsh_Fir_reg_family4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_family3_);
  // checkMissing(family4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_family4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r36 = `==`(family4, "gaussian")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_family4_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c3 then L68() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L68()
    goto L68_;
  } else {
  // L15()
    goto L15_;
  }

L68_:;
  // goto L16(1)
  // L16(1)
  Rsh_Fir_reg_r37_ = Rsh_const(CCP, 37);
  goto L16_;

D22_:;
  // deopt 74 [control]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_control;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L70_:;
  // control1 = force? control
  Rsh_Fir_reg_control1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control);
  // checkMissing(control1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_control1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(control1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_control1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c4 then L72() else L73(control1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L72()
    goto L72_;
  } else {
  // L73(control1)
    Rsh_Fir_reg_control3_ = Rsh_Fir_reg_control1_;
    goto L73_;
  }

L71_:;
  // goto L16(dx5)
  // L16(dx5)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_dx5_;
  goto L16_;

L72_:;
  // dr4 = tryDispatchBuiltin.1("$", control1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_control1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc2 then L74() else L73(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr4)
    Rsh_Fir_reg_control3_ = Rsh_Fir_reg_dr4_;
    goto L73_;
  }

L73_:;
  // r38 = `$`(control3, <sym iterations>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_control3_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L71(r38)
  // L71(r38)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r38_;
  goto L71_;

L74_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L71(dx4)
  // L71(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L71_;

D23_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p3 = prom<V +>{
  //   y9 = ld y;
  //   y10 = force? y9;
  //   checkMissing(y10);
  //   return y10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_3, CCP, RHO);
  // p4 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_4, CCP, RHO);
  // p5 = prom<V +>{
  //   w = ld w;
  //   w1 = force? w;
  //   checkMissing(w1);
  //   return w1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_5, CCP, RHO);
  // p6 = prom<V +>{
  //   span1 = ld span;
  //   span2 = force? span1;
  //   checkMissing(span2);
  //   return span2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_6, CCP, RHO);
  // p7 = prom<V +>{
  //   degree1 = ld degree;
  //   degree2 = force? degree1;
  //   checkMissing(degree2);
  //   return degree2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_7, CCP, RHO);
  // p8 = prom<V +>{
  //   control4 = ld control;
  //   control5 = force? control4;
  //   checkMissing(control5);
  //   c5 = `is.object`(control5);
  //   if c5 then L1() else L2(control5);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", control5);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(control7):
  //   r44 = `$`(control7, <sym cell>);
  //   goto L0(r44);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_8, CCP, RHO);
  // p9 = prom<V +>{
  //   iterations = ld iterations;
  //   iterations1 = force? iterations;
  //   checkMissing(iterations1);
  //   return iterations1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_9, CCP, RHO);
  // p10 = prom<V +>{
  //   control8 = ld control;
  //   control9 = force? control8;
  //   checkMissing(control9);
  //   c6 = `is.object`(control9);
  //   if c6 then L1() else L2(control9);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", control9);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(control11):
  //   r47 = `$`(control11, <sym iterTrace>);
  //   goto L0(r47);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_10, CCP, RHO);
  // p11 = prom<V +>{
  //   control12 = ld control;
  //   control13 = force? control12;
  //   checkMissing(control13);
  //   c7 = `is.object`(control13);
  //   if c7 then L1() else L2(control13);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", control13);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(control15):
  //   r49 = `$`(control15, <sym trace.hat>);
  //   goto L0(r49);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_11, CCP, RHO);
  // r51 = dyn simpleLoess[, , , , degree, parametric, `drop.square`, normalize, statistics, surface, cell, iterations, iterTrace, `trace.hat`](p3, p4, p5, p6, p7, FALSE, FALSE, FALSE, "none", "interpolate", p8, p9, p10, p11)
  SEXP Rsh_Fir_array_args91[14];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args91[3] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args91[4] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args91[5] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args91[6] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args91[7] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args91[8] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args91[9] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args91[10] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args91[11] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args91[12] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args91[13] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names20[14];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names20[5] = Rsh_const(CCP, 45);
  Rsh_Fir_array_arg_names20[6] = Rsh_const(CCP, 46);
  Rsh_Fir_array_arg_names20[7] = Rsh_const(CCP, 47);
  Rsh_Fir_array_arg_names20[8] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names20[9] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names20[10] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names20[11] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names20[12] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names20[13] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_simpleLoess, 14, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L76() else D24()
  // L76()
  goto L76_;

D24_:;
  // deopt 104 [r51]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L76_:;
  // c8 = `is.object`(r51)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c8 then L78() else L79(r51)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L78()
    goto L78_;
  } else {
  // L79(r51)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
    goto L79_;
  }

L77_:;
  // st kd = dx13
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // sym8 = ldf `.C`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base8 = ldf `.C` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard8 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L78_:;
  // dr12 = tryDispatchBuiltin.1("$", r51)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc6 then L80() else L79(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L80()
    goto L80_;
  } else {
  // L79(dr12)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_dr12_;
    goto L79_;
  }

L79_:;
  // r54 = `$`(r53, <sym kd>)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L77(r54)
  // L77(r54)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r54_;
  goto L77_;

L80_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L77(dx12)
  // L77(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L77_;

L81_:;
  // C_loess_ifit = ld C_loess_ifit
  Rsh_Fir_reg_C_loess_ifit = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L83() else D25()
  // L83()
  goto L83_;

L82_:;
  // r55 = dyn base8[, , , , , , , , fit](<sym C_loess_ifit>, <lang as.integer(`$`(kd, parameter))>, <lang as.integer(`$`(kd, a))>, <lang as.double(`$`(kd, xi))>, <lang as.double(`$`(kd, vert))>, <lang as.double(`$`(kd, vval))>, <lang as.integer(evaluation)>, <lang as.double(new.x)>, <lang double(evaluation)>)
  SEXP Rsh_Fir_array_args98[9];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args98[3] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args98[4] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args98[5] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args98[6] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args98[7] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args98[8] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names21[9];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_array_arg_names21[7] = R_MissingArg;
  Rsh_Fir_array_arg_names21[8] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 9, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L17(r55)
  // L17(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L17_;

D25_:;
  // deopt 109 [C_loess_ifit]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_C_loess_ifit;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L83_:;
  // C_loess_ifit1 = force? C_loess_ifit
  Rsh_Fir_reg_C_loess_ifit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_loess_ifit);
  // checkMissing(C_loess_ifit1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_C_loess_ifit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // sym9 = ldf `as.integer`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf `as.integer` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard9 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // kd = ld kd
  Rsh_Fir_reg_kd = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L86() else D26()
  // L86()
  goto L86_;

L85_:;
  // r57 = dyn base9(<lang `$`(kd, parameter)>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L18(r57)
  // L18(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L18_;

D26_:;
  // deopt 113 [kd]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_kd;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L86_:;
  // kd1 = force? kd
  Rsh_Fir_reg_kd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kd);
  // checkMissing(kd1)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_kd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(kd1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_kd1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c9 then L88() else L89(kd1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L88()
    goto L88_;
  } else {
  // L89(kd1)
    Rsh_Fir_reg_kd3_ = Rsh_Fir_reg_kd1_;
    goto L89_;
  }

L87_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r60 = dyn as_integer(dx15)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L91() else D27()
  // L91()
  goto L91_;

L88_:;
  // dr14 = tryDispatchBuiltin.1("$", kd1)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_kd1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc7 then L90() else L89(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L90()
    goto L90_;
  } else {
  // L89(dr14)
    Rsh_Fir_reg_kd3_ = Rsh_Fir_reg_dr14_;
    goto L89_;
  }

L89_:;
  // r59 = `$`(kd3, <sym parameter>)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_kd3_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L87(r59)
  // L87(r59)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r59_;
  goto L87_;

L90_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L87(dx14)
  // L87(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L87_;

D27_:;
  // deopt 117 [r60]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L18(r60)
  // L18(r60)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r60_;
  goto L18_;

L92_:;
  // kd4 = ld kd
  Rsh_Fir_reg_kd4_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L94() else D28()
  // L94()
  goto L94_;

L93_:;
  // r61 = dyn base10(<lang `$`(kd, a)>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L19(r61)
  // L19(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L19_;

D28_:;
  // deopt 120 [kd4]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_kd4_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L94_:;
  // kd5 = force? kd4
  Rsh_Fir_reg_kd5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kd4_);
  // checkMissing(kd5)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_kd5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(kd5)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_kd5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c10 then L96() else L97(kd5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L96()
    goto L96_;
  } else {
  // L97(kd5)
    Rsh_Fir_reg_kd7_ = Rsh_Fir_reg_kd5_;
    goto L97_;
  }

L95_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r64 = dyn as_integer1(dx17)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

L96_:;
  // dr16 = tryDispatchBuiltin.1("$", kd5)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_kd5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc8 then L98() else L97(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L98()
    goto L98_;
  } else {
  // L97(dr16)
    Rsh_Fir_reg_kd7_ = Rsh_Fir_reg_dr16_;
    goto L97_;
  }

L97_:;
  // r63 = `$`(kd7, <sym a>)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_kd7_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L95(r63)
  // L95(r63)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r63_;
  goto L95_;

L98_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L95(dx16)
  // L95(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L95_;

D29_:;
  // deopt 124 [r64]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L19(r64)
  // L19(r64)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r64_;
  goto L19_;

L100_:;
  // kd8 = ld kd
  Rsh_Fir_reg_kd8_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L102() else D30()
  // L102()
  goto L102_;

L101_:;
  // r65 = dyn base11(<lang `$`(kd, xi)>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L20(r65)
  // L20(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L20_;

D30_:;
  // deopt 127 [kd8]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_kd8_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L102_:;
  // kd9 = force? kd8
  Rsh_Fir_reg_kd9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kd8_);
  // checkMissing(kd9)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_kd9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(kd9)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_kd9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if c11 then L104() else L105(kd9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L104()
    goto L104_;
  } else {
  // L105(kd9)
    Rsh_Fir_reg_kd11_ = Rsh_Fir_reg_kd9_;
    goto L105_;
  }

L103_:;
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r68 = dyn as_double(dx19)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L107() else D31()
  // L107()
  goto L107_;

L104_:;
  // dr18 = tryDispatchBuiltin.1("$", kd9)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_kd9_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc9 then L106() else L105(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L106()
    goto L106_;
  } else {
  // L105(dr18)
    Rsh_Fir_reg_kd11_ = Rsh_Fir_reg_dr18_;
    goto L105_;
  }

L105_:;
  // r67 = `$`(kd11, <sym xi>)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_kd11_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 67);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L103(r67)
  // L103(r67)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r67_;
  goto L103_;

L106_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L103(dx18)
  // L103(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L103_;

D31_:;
  // deopt 131 [r68]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L20(r68)
  // L20(r68)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r68_;
  goto L20_;

L108_:;
  // kd12 = ld kd
  Rsh_Fir_reg_kd12_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L110() else D32()
  // L110()
  goto L110_;

L109_:;
  // r69 = dyn base12(<lang `$`(kd, vert)>)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L21(r69)
  // L21(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L21_;

D32_:;
  // deopt 134 [kd12]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_kd12_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L110_:;
  // kd13 = force? kd12
  Rsh_Fir_reg_kd13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kd12_);
  // checkMissing(kd13)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_kd13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(kd13)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_kd13_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c12 then L112() else L113(kd13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L112()
    goto L112_;
  } else {
  // L113(kd13)
    Rsh_Fir_reg_kd15_ = Rsh_Fir_reg_kd13_;
    goto L113_;
  }

L111_:;
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r72 = dyn as_double1(dx21)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L115() else D33()
  // L115()
  goto L115_;

L112_:;
  // dr20 = tryDispatchBuiltin.1("$", kd13)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_kd13_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args129);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc10 then L114() else L113(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L114()
    goto L114_;
  } else {
  // L113(dr20)
    Rsh_Fir_reg_kd15_ = Rsh_Fir_reg_dr20_;
    goto L113_;
  }

L113_:;
  // r71 = `$`(kd15, <sym vert>)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_kd15_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 69);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L111(r71)
  // L111(r71)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r71_;
  goto L111_;

L114_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L111(dx20)
  // L111(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L111_;

D33_:;
  // deopt 138 [r72]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L21(r72)
  // L21(r72)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r72_;
  goto L21_;

L116_:;
  // kd16 = ld kd
  Rsh_Fir_reg_kd16_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L118() else D34()
  // L118()
  goto L118_;

L117_:;
  // r73 = dyn base13(<lang `$`(kd, vval)>)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L22(r73)
  // L22(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L22_;

D34_:;
  // deopt 141 [kd16]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_kd16_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L118_:;
  // kd17 = force? kd16
  Rsh_Fir_reg_kd17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kd16_);
  // checkMissing(kd17)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_kd17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(kd17)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_kd17_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c13 then L120() else L121(kd17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L120()
    goto L120_;
  } else {
  // L121(kd17)
    Rsh_Fir_reg_kd19_ = Rsh_Fir_reg_kd17_;
    goto L121_;
  }

L119_:;
  // as_double2 = ldf `as.double` in base
  Rsh_Fir_reg_as_double2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r76 = dyn as_double2(dx23)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double2_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L123() else D35()
  // L123()
  goto L123_;

L120_:;
  // dr22 = tryDispatchBuiltin.1("$", kd17)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_kd17_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args137);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // if dc11 then L122() else L121(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L122()
    goto L122_;
  } else {
  // L121(dr22)
    Rsh_Fir_reg_kd19_ = Rsh_Fir_reg_dr22_;
    goto L121_;
  }

L121_:;
  // r75 = `$`(kd19, <sym vval>)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_kd19_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L119(r75)
  // L119(r75)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r75_;
  goto L119_;

L122_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L119(dx22)
  // L119(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L119_;

D35_:;
  // deopt 145 [r76]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L22(r76)
  // L22(r76)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r76_;
  goto L22_;

L124_:;
  // evaluation3 = ld evaluation
  Rsh_Fir_reg_evaluation3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L126() else D36()
  // L126()
  goto L126_;

L125_:;
  // r77 = dyn base14(<sym evaluation>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L23(r77)
  // L23(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L23_;

D36_:;
  // deopt 148 [evaluation3]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_evaluation3_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L126_:;
  // evaluation4 = force? evaluation3
  Rsh_Fir_reg_evaluation4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_evaluation3_);
  // checkMissing(evaluation4)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_evaluation4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r79 = dyn as_integer2(evaluation4)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_evaluation4_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L127() else D37()
  // L127()
  goto L127_;

D37_:;
  // deopt 151 [r79]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L127_:;
  // goto L23(r79)
  // L23(r79)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r79_;
  goto L23_;

L128_:;
  // new_x = ld `new.x`
  Rsh_Fir_reg_new_x = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L130() else D38()
  // L130()
  goto L130_;

L129_:;
  // r80 = dyn base15(<sym new.x>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L24(r80)
  // L24(r80)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L24_;

D38_:;
  // deopt 154 [new_x]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_new_x;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L130_:;
  // new_x1 = force? new_x
  Rsh_Fir_reg_new_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_x);
  // checkMissing(new_x1)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_new_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // as_double3 = ldf `as.double` in base
  Rsh_Fir_reg_as_double3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r82 = dyn as_double3(new_x1)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_new_x1_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double3_, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L131() else D39()
  // L131()
  goto L131_;

D39_:;
  // deopt 157 [r82]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L24(r82)
  // L24(r82)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r82_;
  goto L24_;

D40_:;
  // deopt 159 []
  Rsh_Fir_deopt(159, 0, NULL, CCP, RHO);
  return R_NilValue;

L132_:;
  // p12 = prom<V +>{
  //   evaluation5 = ld evaluation;
  //   evaluation6 = force? evaluation5;
  //   checkMissing(evaluation6);
  //   return evaluation6;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner796660176_12, CCP, RHO);
  // r84 = dyn double(p12)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L133() else D41()
  // L133()
  goto L133_;

D41_:;
  // deopt 161 [r84]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L133_:;
  // _C = ldf `.C` in base
  Rsh_Fir_reg__C = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r85 = dyn _C(C_loess_ifit1, r58, r62, r66, r70, r74, r78, r81, r84)
  SEXP Rsh_Fir_array_args149[9];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_C_loess_ifit1_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args149[3] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args149[4] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args149[5] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_args149[6] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args149[7] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_args149[8] = Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_array_arg_names37[9];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_array_arg_names37[4] = R_MissingArg;
  Rsh_Fir_array_arg_names37[5] = R_MissingArg;
  Rsh_Fir_array_arg_names37[6] = R_MissingArg;
  Rsh_Fir_array_arg_names37[7] = R_MissingArg;
  Rsh_Fir_array_arg_names37[8] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__C, 9, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L134() else D42()
  // L134()
  goto L134_;

D42_:;
  // deopt 164 [r85]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L17(r85)
  // L17(r85)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r85_;
  goto L17_;

L135_:;
  // st z = dx25
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // sym16 = ldf list
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base16 = ldf list in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args150);
  // if guard16 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L136_:;
  // dr24 = tryDispatchBuiltin.1("$", r56)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args151);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if dc12 then L138() else L137(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L138()
    goto L138_;
  } else {
  // L137(dr24)
    Rsh_Fir_reg_r87_ = Rsh_Fir_reg_dr24_;
    goto L137_;
  }

L137_:;
  // r88 = `$`(r87, <sym fit>)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L135(r88)
  // L135(r88)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r88_;
  goto L135_;

L138_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L135(dx24)
  // L135(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L135_;

L139_:;
  // new_x2 = ld `new.x`
  Rsh_Fir_reg_new_x2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L141() else D43()
  // L141()
  goto L141_;

L140_:;
  // r89 = dyn base16[x, y](<sym new.x>, <sym z>)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L25(r89)
  // L25(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L25_;

D43_:;
  // deopt 169 [new_x2]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_new_x2_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L141_:;
  // new_x3 = force? new_x2
  Rsh_Fir_reg_new_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_x2_);
  // checkMissing(new_x3)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_new_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L142() else D44()
  // L142()
  goto L142_;

D44_:;
  // deopt 172 [z]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L142_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // r91 = dyn list(new_x3, z1)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_new_x3_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L143() else D45()
  // L143()
  goto L143_;

D45_:;
  // deopt 176 [r91]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L143_:;
  // goto L25(r91)
  // L25(r91)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r91_;
  goto L25_;
}
SEXP Rsh_Fir_user_promise_inner796660176_(SEXP CCP, SEXP RHO) {
  // return 0.6666666666666666
  return Rsh_const(CCP, 3);
}
SEXP Rsh_Fir_user_promise_inner796660176_1(SEXP CCP, SEXP RHO) {
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
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r3 = dyn c("symmetric", "gaussian")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base("symmetric", "gaussian")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner796660176_2(SEXP CCP, SEXP RHO) {
  // family1 = ld family
  Rsh_Fir_reg_family1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // family2 = force? family1
  Rsh_Fir_reg_family2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_family1_);
  // checkMissing(family2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_family2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return family2
  return Rsh_Fir_reg_family2_;
}
SEXP Rsh_Fir_user_promise_inner796660176_3(SEXP CCP, SEXP RHO) {
  // y9 = ld y
  Rsh_Fir_reg_y9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y10 = force? y9
  Rsh_Fir_reg_y10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y9_);
  // checkMissing(y10)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_y10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return y10
  return Rsh_Fir_reg_y10_;
}
SEXP Rsh_Fir_user_promise_inner796660176_4(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner796660176_5(SEXP CCP, SEXP RHO) {
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return w1
  return Rsh_Fir_reg_w1_;
}
SEXP Rsh_Fir_user_promise_inner796660176_6(SEXP CCP, SEXP RHO) {
  // span1 = ld span
  Rsh_Fir_reg_span1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // span2 = force? span1
  Rsh_Fir_reg_span2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_span1_);
  // checkMissing(span2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_span2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return span2
  return Rsh_Fir_reg_span2_;
}
SEXP Rsh_Fir_user_promise_inner796660176_7(SEXP CCP, SEXP RHO) {
  // degree1 = ld degree
  Rsh_Fir_reg_degree1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // degree2 = force? degree1
  Rsh_Fir_reg_degree2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_degree1_);
  // checkMissing(degree2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_degree2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return degree2
  return Rsh_Fir_reg_degree2_;
}
SEXP Rsh_Fir_user_promise_inner796660176_8(SEXP CCP, SEXP RHO) {
  // control4 = ld control
  Rsh_Fir_reg_control4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // control5 = force? control4
  Rsh_Fir_reg_control5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control4_);
  // checkMissing(control5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_control5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(control5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_control5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(control5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(control5)
    Rsh_Fir_reg_control7_ = Rsh_Fir_reg_control5_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", control5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_control5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_control7_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r44 = `$`(control7, <sym cell>)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_control7_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r44_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner796660176_9(SEXP CCP, SEXP RHO) {
  // iterations = ld iterations
  Rsh_Fir_reg_iterations = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // iterations1 = force? iterations
  Rsh_Fir_reg_iterations1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterations);
  // checkMissing(iterations1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_iterations1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return iterations1
  return Rsh_Fir_reg_iterations1_;
}
SEXP Rsh_Fir_user_promise_inner796660176_10(SEXP CCP, SEXP RHO) {
  // control8 = ld control
  Rsh_Fir_reg_control8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // control9 = force? control8
  Rsh_Fir_reg_control9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control8_);
  // checkMissing(control9)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_control9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(control9)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_control9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(control9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(control9)
    Rsh_Fir_reg_control11_ = Rsh_Fir_reg_control9_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", control9)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_control9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_control11_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r47 = `$`(control11, <sym iterTrace>)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_control11_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r47_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner796660176_11(SEXP CCP, SEXP RHO) {
  // control12 = ld control
  Rsh_Fir_reg_control12_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // control13 = force? control12
  Rsh_Fir_reg_control13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control12_);
  // checkMissing(control13)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_control13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(control13)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_control13_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c7 then L1() else L2(control13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(control13)
    Rsh_Fir_reg_control15_ = Rsh_Fir_reg_control13_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", control13)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_control13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_control15_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r49 = `$`(control15, <sym trace.hat>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_control15_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r49_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner796660176_12(SEXP CCP, SEXP RHO) {
  // evaluation5 = ld evaluation
  Rsh_Fir_reg_evaluation5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // evaluation6 = force? evaluation5
  Rsh_Fir_reg_evaluation6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_evaluation5_);
  // checkMissing(evaluation6)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_evaluation6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // return evaluation6
  return Rsh_Fir_reg_evaluation6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
