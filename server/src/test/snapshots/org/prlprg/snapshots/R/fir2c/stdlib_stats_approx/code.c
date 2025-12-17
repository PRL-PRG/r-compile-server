#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3081670869_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3081670869_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3081670869_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3081670869_13(SEXP CCP, SEXP RHO);
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
  // r = clos inner3081670869
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3081670869_, RHO, CCP);
  // st approx = r
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
SEXP Rsh_Fir_user_function_inner3081670869_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3081670869 dynamic dispatch ([x, y, xout, method, n, yleft, yright, rule, f, ties, `na.rm`])

  return Rsh_Fir_user_version_inner3081670869_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3081670869_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3081670869 version 0 (*, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 11) Rsh_error("FIŘ arity mismatch for inner3081670869/0: expected 11, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_xout;  // xout
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_yleft;  // yleft
  SEXP Rsh_Fir_reg_yright;  // yright
  SEXP Rsh_Fir_reg_rule;  // rule
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_ties;  // ties
  SEXP Rsh_Fir_reg_na_rm;  // na_rm
  SEXP Rsh_Fir_reg_y_isMissing;  // y_isMissing
  SEXP Rsh_Fir_reg_y_orDefault;  // y_orDefault
  SEXP Rsh_Fir_reg_method_isMissing;  // method_isMissing
  SEXP Rsh_Fir_reg_method_orDefault;  // method_orDefault
  SEXP Rsh_Fir_reg_n_isMissing;  // n_isMissing
  SEXP Rsh_Fir_reg_n_orDefault;  // n_orDefault
  SEXP Rsh_Fir_reg_rule_isMissing;  // rule_isMissing
  SEXP Rsh_Fir_reg_rule_orDefault;  // rule_orDefault
  SEXP Rsh_Fir_reg_f_isMissing;  // f_isMissing
  SEXP Rsh_Fir_reg_f_orDefault;  // f_orDefault
  SEXP Rsh_Fir_reg_ties_isMissing;  // ties_isMissing
  SEXP Rsh_Fir_reg_ties_orDefault;  // ties_orDefault
  SEXP Rsh_Fir_reg_mean;  // mean
  SEXP Rsh_Fir_reg_mean1_;  // mean1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_na_rm_isMissing;  // na_rm_isMissing
  SEXP Rsh_Fir_reg_na_rm_orDefault;  // na_rm_orDefault
  SEXP Rsh_Fir_reg_pmatch;  // pmatch
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_method3_;  // method3
  SEXP Rsh_Fir_reg_method4_;  // method4
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_rule1_;  // rule1
  SEXP Rsh_Fir_reg_rule2_;  // rule2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_rule3_;  // rule3
  SEXP Rsh_Fir_reg_rule4_;  // rule4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_lenR;  // lenR
  SEXP Rsh_Fir_reg_lenR1_;  // lenR1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_lenR2_;  // lenR2
  SEXP Rsh_Fir_reg_lenR3_;  // lenR3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_rule5_;  // rule5
  SEXP Rsh_Fir_reg_rule6_;  // rule6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_rule8_;  // rule8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_rule11_;  // rule11
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_regularize_values;  // regularize_values
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_ties1_;  // ties1
  SEXP Rsh_Fir_reg_ties2_;  // ties2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_na_rm1_;  // na_rm1
  SEXP Rsh_Fir_reg_na_rm2_;  // na_rm2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_na_rm3_;  // na_rm3
  SEXP Rsh_Fir_reg_na_rm4_;  // na_rm4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_noNA;  // noNA
  SEXP Rsh_Fir_reg_noNA1_;  // noNA1
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_nx;  // nx
  SEXP Rsh_Fir_reg_nx1_;  // nx1
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_nx2_;  // nx2
  SEXP Rsh_Fir_reg_nx3_;  // nx3
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_method5_;  // method5
  SEXP Rsh_Fir_reg_method6_;  // method6
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_nx4_;  // nx4
  SEXP Rsh_Fir_reg_nx5_;  // nx5
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_rule12_;  // rule12
  SEXP Rsh_Fir_reg_rule13_;  // rule13
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_rule15_;  // rule15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_missing2_;  // missing2
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_rule16_;  // rule16
  SEXP Rsh_Fir_reg_rule17_;  // rule17
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_rule19_;  // rule19
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_y8_;  // y8
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_y13_;  // y13
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_y14_;  // y14
  SEXP Rsh_Fir_reg_y15_;  // y15
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_stopifnot1_;  // stopifnot1
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_yleft1_;  // yleft1
  SEXP Rsh_Fir_reg_yleft2_;  // yleft2
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_yright1_;  // yright1
  SEXP Rsh_Fir_reg_yright2_;  // yright2
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_missing3_;  // missing3
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_stop4_;  // stop4
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_noNA2_;  // noNA2
  SEXP Rsh_Fir_reg_noNA3_;  // noNA3
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_nx6_;  // nx6
  SEXP Rsh_Fir_reg_nx7_;  // nx7
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_xout1_;  // xout1
  SEXP Rsh_Fir_reg_xout2_;  // xout2
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_xout4_;  // xout4
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_xout5_;  // xout5
  SEXP Rsh_Fir_reg_xout6_;  // xout6
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_xout8_;  // xout8
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_xout11_;  // xout11
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_xout12_;  // xout12
  SEXP Rsh_Fir_reg_xout13_;  // xout13
  SEXP Rsh_Fir_reg_length6_;  // length6
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_seq_int1_;  // seq_int1
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_y16_;  // y16
  SEXP Rsh_Fir_reg_y17_;  // y17
  SEXP Rsh_Fir_reg_as_double1_;  // as_double1
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_C_ApproxTest;  // C_ApproxTest
  SEXP Rsh_Fir_reg_C_ApproxTest1_;  // C_ApproxTest1
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_y18_;  // y18
  SEXP Rsh_Fir_reg_y19_;  // y19
  SEXP Rsh_Fir_reg_method7_;  // method7
  SEXP Rsh_Fir_reg_method8_;  // method8
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_f4_;  // f4
  SEXP Rsh_Fir_reg_na_rm5_;  // na_rm5
  SEXP Rsh_Fir_reg_na_rm6_;  // na_rm6
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_C_Approx;  // C_Approx
  SEXP Rsh_Fir_reg_C_Approx1_;  // C_Approx1
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_y20_;  // y20
  SEXP Rsh_Fir_reg_y21_;  // y21
  SEXP Rsh_Fir_reg_xout14_;  // xout14
  SEXP Rsh_Fir_reg_xout15_;  // xout15
  SEXP Rsh_Fir_reg_method9_;  // method9
  SEXP Rsh_Fir_reg_method10_;  // method10
  SEXP Rsh_Fir_reg_yleft3_;  // yleft3
  SEXP Rsh_Fir_reg_yleft4_;  // yleft4
  SEXP Rsh_Fir_reg_yright3_;  // yright3
  SEXP Rsh_Fir_reg_yright4_;  // yright4
  SEXP Rsh_Fir_reg_f5_;  // f5
  SEXP Rsh_Fir_reg_f6_;  // f6
  SEXP Rsh_Fir_reg_na_rm7_;  // na_rm7
  SEXP Rsh_Fir_reg_na_rm8_;  // na_rm8
  SEXP Rsh_Fir_reg_vargs1_;  // vargs1
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_xout16_;  // xout16
  SEXP Rsh_Fir_reg_xout17_;  // xout17
  SEXP Rsh_Fir_reg_yout;  // yout
  SEXP Rsh_Fir_reg_yout1_;  // yout1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r153_;  // r153

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_xout = PARAMS[2];
  Rsh_Fir_reg_method = PARAMS[3];
  Rsh_Fir_reg_n = PARAMS[4];
  Rsh_Fir_reg_yleft = PARAMS[5];
  Rsh_Fir_reg_yright = PARAMS[6];
  Rsh_Fir_reg_rule = PARAMS[7];
  Rsh_Fir_reg_f = PARAMS[8];
  Rsh_Fir_reg_ties = PARAMS[9];
  Rsh_Fir_reg_na_rm = PARAMS[10];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if y_isMissing then L0(NULL) else L0(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_y_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L0_;
  }

L0_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // st xout = xout
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_xout, RHO);
  (void)(Rsh_Fir_reg_xout);
  // method_isMissing = missing.0(method)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_method;
  Rsh_Fir_reg_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if method_isMissing then L1("linear") else L1(method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_method_isMissing)) {
  // L1("linear")
    Rsh_Fir_reg_method_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(method)
    Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_method;
    goto L1_;
  }

L1_:;
  // st method = method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_method_orDefault);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if n_isMissing then L2(50.0) else L2(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L2(50.0)
    Rsh_Fir_reg_n_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L2_;
  }

L2_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // st yleft = yleft
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_yleft, RHO);
  (void)(Rsh_Fir_reg_yleft);
  // st yright = yright
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_yright, RHO);
  (void)(Rsh_Fir_reg_yright);
  // rule_isMissing = missing.0(rule)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_rule;
  Rsh_Fir_reg_rule_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if rule_isMissing then L3(1.0) else L3(rule)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rule_isMissing)) {
  // L3(1.0)
    Rsh_Fir_reg_rule_orDefault = Rsh_const(CCP, 11);
    goto L3_;
  } else {
  // L3(rule)
    Rsh_Fir_reg_rule_orDefault = Rsh_Fir_reg_rule;
    goto L3_;
  }

L3_:;
  // st rule = rule_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_rule_orDefault, RHO);
  (void)(Rsh_Fir_reg_rule_orDefault);
  // f_isMissing = missing.0(f)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_f;
  Rsh_Fir_reg_f_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if f_isMissing then L4(0.0) else L4(f)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_f_isMissing)) {
  // L4(0.0)
    Rsh_Fir_reg_f_orDefault = Rsh_const(CCP, 13);
    goto L4_;
  } else {
  // L4(f)
    Rsh_Fir_reg_f_orDefault = Rsh_Fir_reg_f;
    goto L4_;
  }

L4_:;
  // st f = f_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_f_orDefault, RHO);
  (void)(Rsh_Fir_reg_f_orDefault);
  // ties_isMissing = missing.0(ties)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ties;
  Rsh_Fir_reg_ties_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if ties_isMissing then L5() else L6(ties)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ties_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(ties)
    Rsh_Fir_reg_ties_orDefault = Rsh_Fir_reg_ties;
    goto L6_;
  }

L5_:;
  // p = prom<V +>{
  //   mean = ld mean;
  //   mean1 = force? mean;
  //   checkMissing(mean1);
  //   return mean1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_, CCP, RHO);
  // goto L6(p)
  // L6(p)
  Rsh_Fir_reg_ties_orDefault = Rsh_Fir_reg_p;
  goto L6_;

L6_:;
  // st ties = ties_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_ties_orDefault, RHO);
  (void)(Rsh_Fir_reg_ties_orDefault);
  // na_rm_isMissing = missing.0(na_rm)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_na_rm;
  Rsh_Fir_reg_na_rm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if na_rm_isMissing then L7(TRUE) else L7(na_rm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_rm_isMissing)) {
  // L7(TRUE)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_const(CCP, 17);
    goto L7_;
  } else {
  // L7(na_rm)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_Fir_reg_na_rm;
    goto L7_;
  }

L7_:;
  // st `na.rm` = na_rm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_na_rm_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_rm_orDefault);
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L60() else D0()
  // L60()
  goto L60_;

L8_:;
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c1 then L66() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L66()
    goto L66_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L70() else D6()
  // L70()
  goto L70_;

L11_:;
  // goto L14()
  // L14()
  goto L14_;

L12_:;
  // st rule = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L14()
  // L14()
  goto L14_;

L13_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r28 = dyn __(rule11, r26)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_rule11_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r28_;
  goto L12_;

L14_:;
  // regularize_values = ldf `regularize.values`
  Rsh_Fir_reg_regularize_values = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L82() else D11()
  // L82()
  goto L82_;

L15_:;
  // st noNA = c8
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_c8_, RHO);
  (void)(Rsh_Fir_reg_c8_);
  // noNA = ld noNA
  Rsh_Fir_reg_noNA = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L102() else D17()
  // L102()
  goto L102_;

L16_:;
  // sym7 = ldf sum
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base7 = ldf sum in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard7 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L17_:;
  // goto L18(r55)
  // L18(r55)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
  goto L18_;

L18_:;
  // st nx = r57
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard8 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L19_:;
  // c20 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c20 then L121() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L121()
    goto L121_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // nx2 = ld nx
  Rsh_Fir_reg_nx2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L125() else D26()
  // L125()
  goto L125_;

L22_:;
  // goto L27()
  // L27()
  goto L27_;

L23_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // nx4 = ld nx
  Rsh_Fir_reg_nx4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L132() else D30()
  // L132()
  goto L132_;

L25_:;
  // goto L26(NULL)
  // L26(NULL)
  Rsh_Fir_reg_r76_ = Rsh_const(CCP, 2);
  goto L26_;

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // sym9 = ldf missing
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base9 = ldf missing in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard9 then L138() else L139()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L138()
    goto L138_;
  } else {
  // L139()
    goto L139_;
  }

L28_:;
  // c24 = `as.logical`(r79)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c24 then L140() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L140()
    goto L140_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // goto L33()
  // L33()
  goto L33_;

L30_:;
  // r82 = `==`(dx12, 1.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c26 then L145() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L145()
    goto L145_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L147() else D34()
  // L147()
  goto L147_;

L32_:;
  // st yleft = r83
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // sym10 = ldf missing
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base10 = ldf missing in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard10 then L152() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L152()
    goto L152_;
  } else {
  // L153()
    goto L153_;
  }

L34_:;
  // c28 = `as.logical`(r87)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c28 then L154() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L154()
    goto L154_;
  } else {
  // L35()
    goto L35_;
  }

L35_:;
  // goto L40()
  // L40()
  goto L40_;

L36_:;
  // r90 = `==`(dx15, 1.0)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c30 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c30 then L159() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L159()
    goto L159_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L161() else D36()
  // L161()
  goto L161_;

L38_:;
  // st yright = r91
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r91_, RHO);
  (void)(Rsh_Fir_reg_r91_);
  // goto L40()
  // L40()
  goto L40_;

L39_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r95 = dyn __4(y13, r93)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_y13_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L38(r95)
  // L38(r95)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r95_;
  goto L38_;

L40_:;
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L170() else D39()
  // L170()
  goto L170_;

L41_:;
  // c32 = `as.logical`(r114)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r114_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c32 then L174() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L174()
    goto L174_;
  } else {
  // L42()
    goto L42_;
  }

L42_:;
  // goto L54()
  // L54()
  goto L54_;

L43_:;
  // goto L44()
  // L44()
  goto L44_;

L44_:;
  // noNA2 = ld noNA
  Rsh_Fir_reg_noNA2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L180() else D44()
  // L180()
  goto L180_;

L45_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L196() else D50()
  // L196()
  goto L196_;

L46_:;
  // goto L49(r120)
  // L49(r120)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r120_;
  goto L49_;

L47_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L188() else D46()
  // L188()
  goto L188_;

L48_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L193() else D48()
  // L193()
  goto L193_;

L49_:;
  // st xout = r124
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r124_, RHO);
  (void)(Rsh_Fir_reg_r124_);
  // goto L54()
  // L54()
  goto L54_;

L50_:;
  // st xout = dx22
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx22_, RHO);
  (void)(Rsh_Fir_reg_dx22_);
  // sym17 = ldf `seq.int`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base17 = ldf `seq.int` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard17 then L205() else L206()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L205()
    goto L205_;
  } else {
  // L206()
    goto L206_;
  }

L51_:;
  // xout5 = ld xout
  Rsh_Fir_reg_xout5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L211() else D53()
  // L211()
  goto L211_;

L52_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L219() else D56()
  // L219()
  goto L219_;

L53_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r136 = dyn __9(xout11, r134)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_xout11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L52(r136)
  // L52(r136)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r136_;
  goto L52_;

L54_:;
  // sym19 = ldf `as.double`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base19 = ldf `as.double` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard19 then L222() else L223()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L222()
    goto L222_;
  } else {
  // L223()
    goto L223_;
  }

L55_:;
  // st x = r140
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r140_, RHO);
  (void)(Rsh_Fir_reg_r140_);
  // sym20 = ldf `as.double`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base20 = ldf `as.double` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard20 then L226() else L227()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L226()
    goto L226_;
  } else {
  // L227()
    goto L227_;
  }

L56_:;
  // st y = r143
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r143_, RHO);
  (void)(Rsh_Fir_reg_r143_);
  // sym21 = ldf `.Call`
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base21 = ldf `.Call` in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard21 then L230() else L231()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L230()
    goto L230_;
  } else {
  // L231()
    goto L231_;
  }

L57_:;
  // sym22 = ldf `.Call`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base22 = ldf `.Call` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard22 then L238() else L239()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L238()
    goto L238_;
  } else {
  // L239()
    goto L239_;
  }

L58_:;
  // st yout = r149
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r149_, RHO);
  (void)(Rsh_Fir_reg_r149_);
  // sym23 = ldf list
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base23 = ldf list in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard23 then L249() else L250()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L249()
    goto L249_;
  } else {
  // L250()
    goto L250_;
  }

L59_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r152
  return Rsh_Fir_reg_r152_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p1 = prom<V +>{
  //   method1 = ld method;
  //   method2 = force? method1;
  //   checkMissing(method2);
  //   return method2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   c = ldf c in base;
  //   r4 = dyn c("linear", "constant");
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base("linear", "constant");
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_2, CCP, RHO);
  // r6 = dyn pmatch(p1, p2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L61() else D1()
  // L61()
  goto L61_;

D1_:;
  // deopt 4 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L61_:;
  // st method = r6
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L62_:;
  // method3 = ld method
  Rsh_Fir_reg_method3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L64() else D2()
  // L64()
  goto L64_;

L63_:;
  // r7 = dyn base1(<sym method>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r7)
  // L8(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L8_;

D2_:;
  // deopt 8 [method3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_method3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L64_:;
  // method4 = force? method3
  Rsh_Fir_reg_method4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method3_);
  // checkMissing(method4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_method4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r9 = dyn is_na(method4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_method4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L65() else D3()
  // L65()
  goto L65_;

D3_:;
  // deopt 11 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L8(r9)
  // L8(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L8_;

L66_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L67() else D4()
  // L67()
  goto L67_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r10 = dyn stop("invalid interpolation method")
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L68() else D5()
  // L68()
  goto L68_;

D5_:;
  // deopt 15 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L10()
  // L10()
  goto L10_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p3 = prom<V +>{
  //   sym2 = ldf `is.numeric`;
  //   base2 = ldf `is.numeric` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   rule1 = ld rule;
  //   rule2 = force? rule1;
  //   checkMissing(rule2);
  //   is_numeric = ldf `is.numeric` in base;
  //   r14 = dyn is_numeric(rule2);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base2(<sym rule>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym3 = ldf length;
  //   base3 = ldf length in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   st lenR = r17;
  //   r19 = `>=`(r17, 1);
  //   return r19;
  // L1():
  //   rule3 = ld rule;
  //   rule4 = force? rule3;
  //   checkMissing(rule4);
  //   length = ldf length in base;
  //   r18 = dyn length(rule4);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3(<sym rule>);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_4, CCP, RHO);
  // p5 = prom<V +>{
  //   lenR = ld lenR;
  //   lenR1 = force? lenR;
  //   checkMissing(lenR1);
  //   r21 = `<=`(lenR1, 2);
  //   return r21;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_5, CCP, RHO);
  // r23 = dyn stopifnot(p3, p4, p5)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L71() else D7()
  // L71()
  goto L71_;

D7_:;
  // deopt 23 [r23]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L71_:;
  // lenR2 = ld lenR
  Rsh_Fir_reg_lenR2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L72() else D8()
  // L72()
  goto L72_;

D8_:;
  // deopt 24 [lenR2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_lenR2_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L72_:;
  // lenR3 = force? lenR2
  Rsh_Fir_reg_lenR3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lenR2_);
  // checkMissing(lenR3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_lenR3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r24 = `==`(lenR3, 1.0)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_lenR3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c2 then L73() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L73()
    goto L73_;
  } else {
  // L11()
    goto L11_;
  }

L73_:;
  // rule5 = ld rule
  Rsh_Fir_reg_rule5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L74() else D9()
  // L74()
  goto L74_;

D9_:;
  // deopt 28 [rule5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_rule5_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L74_:;
  // rule6 = force? rule5
  Rsh_Fir_reg_rule6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rule5_);
  // checkMissing(rule6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_rule6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(rule6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_rule6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c3 then L75() else L76(rule6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L75()
    goto L75_;
  } else {
  // L76(rule6)
    Rsh_Fir_reg_rule8_ = Rsh_Fir_reg_rule6_;
    goto L76_;
  }

L75_:;
  // dr = tryDispatchBuiltin.1("[", rule6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_rule6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc then L77() else L76(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L77()
    goto L77_;
  } else {
  // L76(dr)
    Rsh_Fir_reg_rule8_ = Rsh_Fir_reg_dr;
    goto L76_;
  }

L76_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard4 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L77_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L12(dx)
  // L12(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L12_;

L78_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r27 = dyn c4(1.0, 1.0)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L80() else D10()
  // L80()
  goto L80_;

L79_:;
  // r25 = dyn base4(1.0, 1.0)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(rule8, r25)
  // L13(rule8, r25)
  Rsh_Fir_reg_rule11_ = Rsh_Fir_reg_rule8_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L13_;

D10_:;
  // deopt 35 [rule8, r27]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_rule8_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L13(rule8, r27)
  // L13(rule8, r27)
  Rsh_Fir_reg_rule11_ = Rsh_Fir_reg_rule8_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L13_;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L82_:;
  // p6 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_6, CCP, RHO);
  // p7 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_7, CCP, RHO);
  // p8 = prom<V +>{
  //   ties1 = ld ties;
  //   ties2 = force? ties1;
  //   checkMissing(ties2);
  //   return ties2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_8, CCP, RHO);
  // p9 = prom<V +>{
  //   sym5 = ldf missing;
  //   base5 = ldf missing in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r33):
  //   return r33;
  // L1():
  //   missing = ldf missing in base;
  //   r34 = dyn missing(<sym ties>);
  //   goto L0(r34);
  // L2():
  //   r32 = dyn base5(<sym ties>);
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_9, CCP, RHO);
  // p10 = prom<V +>{
  //   na_rm1 = ld `na.rm`;
  //   na_rm2 = force? na_rm1;
  //   checkMissing(na_rm2);
  //   return na_rm2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_10, CCP, RHO);
  // r37 = dyn regularize_values[, , , , `na.rm`](p6, p7, p8, p9, p10)
  SEXP Rsh_Fir_array_args70[5];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args70[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args70[4] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names18[5];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regularize_values, 5, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L83() else D12()
  // L83()
  goto L83_;

D12_:;
  // deopt 48 [r37]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L83_:;
  // st r = r37
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // r38 = ld r
  Rsh_Fir_reg_r38_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L84() else D13()
  // L84()
  goto L84_;

D13_:;
  // deopt 50 [r38]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L84_:;
  // r39 = force? r38
  Rsh_Fir_reg_r39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r38_);
  // checkMissing(r39)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(r39)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c5 then L86() else L87(r39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L86()
    goto L86_;
  } else {
  // L87(r39)
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
    goto L87_;
  }

L85_:;
  // st y = dx4
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // r43 = ld r
  Rsh_Fir_reg_r43_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L89() else D14()
  // L89()
  goto L89_;

L86_:;
  // dr2 = tryDispatchBuiltin.1("$", r39)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc1 then L88() else L87(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L88()
    goto L88_;
  } else {
  // L87(dr2)
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_dr2_;
    goto L87_;
  }

L87_:;
  // r42 = `$`(r41, <sym y>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L85(r42)
  // L85(r42)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r42_;
  goto L85_;

L88_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L85(dx3)
  // L85(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L85_;

D14_:;
  // deopt 54 [r43]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L89_:;
  // r44 = force? r43
  Rsh_Fir_reg_r44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r43_);
  // checkMissing(r44)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(r44)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c6 then L91() else L92(r44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L91()
    goto L91_;
  } else {
  // L92(r44)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    goto L92_;
  }

L90_:;
  // st x = dx6
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // na_rm3 = ld `na.rm`
  Rsh_Fir_reg_na_rm3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L94() else D15()
  // L94()
  goto L94_;

L91_:;
  // dr4 = tryDispatchBuiltin.1("$", r44)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc2 then L93() else L92(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L93()
    goto L93_;
  } else {
  // L92(dr4)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_dr4_;
    goto L92_;
  }

L92_:;
  // r47 = `$`(r46, <sym x>)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L90(r47)
  // L90(r47)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r47_;
  goto L90_;

L93_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L90(dx5)
  // L90(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L90_;

D15_:;
  // deopt 58 [na_rm3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_na_rm3_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L94_:;
  // na_rm4 = force? na_rm3
  Rsh_Fir_reg_na_rm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm3_);
  // checkMissing(na_rm4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_na_rm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c7 = `as.logical`(na_rm4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_na_rm4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c7 then L15(c7) else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L15(c7)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c7_;
    goto L15_;
  } else {
  // L95()
    goto L95_;
  }

L95_:;
  // r48 = ld r
  Rsh_Fir_reg_r48_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L96() else D16()
  // L96()
  goto L96_;

D16_:;
  // deopt 60 [c7, r48]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L96_:;
  // r49 = force? r48
  Rsh_Fir_reg_r49_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r48_);
  // checkMissing(r49)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r49_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(r49)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c10 then L98() else L99(c7, r49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L98()
    goto L98_;
  } else {
  // L99(c7, r49)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r49_;
    goto L99_;
  }

L97_:;
  // r53 = `!`(dx8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // c16 = `||`(c14, c15)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L15(c16)
  // L15(c16)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c16_;
  goto L15_;

L98_:;
  // dr6 = tryDispatchBuiltin.1("$", r49)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc3 then L100() else L99(c7, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L100()
    goto L100_;
  } else {
  // L99(c7, dr6)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_dr6_;
    goto L99_;
  }

L99_:;
  // r52 = `$`(r51, <sym keptNA>)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L97(c12, r52)
  // L97(c12, r52)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r52_;
  goto L97_;

L100_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L97(c7, dx7)
  // L97(c7, dx7)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L97_;

D17_:;
  // deopt 66 [noNA]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_noNA;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L102_:;
  // noNA1 = force? noNA
  Rsh_Fir_reg_noNA1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_noNA);
  // checkMissing(noNA1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_noNA1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(noNA1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_noNA1_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if c18 then L103() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L103()
    goto L103_;
  } else {
  // L16()
    goto L16_;
  }

L103_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard6 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L104_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L106() else D18()
  // L106()
  goto L106_;

L105_:;
  // r54 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L17(r54)
  // L17(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L17_;

D18_:;
  // deopt 70 [x3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L106_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r56 = dyn length1(x4)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L107() else D19()
  // L107()
  goto L107_;

D19_:;
  // deopt 73 [r56]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L17(r56)
  // L17(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L17_;

L109_:;
  // r59 = ld r
  Rsh_Fir_reg_r59_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L111() else D20()
  // L111()
  goto L111_;

L110_:;
  // r58 = dyn base7(<lang `$`(r, notNA)>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L18(r58)
  // L18(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L18_;

D20_:;
  // deopt 76 [r59]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L111_:;
  // r60 = force? r59
  Rsh_Fir_reg_r60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r59_);
  // checkMissing(r60)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r60_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(r60)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c19 then L113() else L114(r60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L113()
    goto L113_;
  } else {
  // L114(r60)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r60_;
    goto L114_;
  }

L112_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r64 = dyn sum(dx10)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L116() else D21()
  // L116()
  goto L116_;

L113_:;
  // dr8 = tryDispatchBuiltin.1("$", r60)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc4 then L115() else L114(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L115()
    goto L115_;
  } else {
  // L114(dr8)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_dr8_;
    goto L114_;
  }

L114_:;
  // r63 = `$`(r62, <sym notNA>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L112(r63)
  // L112(r63)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r63_;
  goto L112_;

L115_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L112(dx9)
  // L112(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L112_;

D21_:;
  // deopt 80 [r64]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L18(r64)
  // L18(r64)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r64_;
  goto L18_;

L117_:;
  // nx = ld nx
  Rsh_Fir_reg_nx = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L119() else D22()
  // L119()
  goto L119_;

L118_:;
  // r65 = dyn base8(<sym nx>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L19(r65)
  // L19(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L19_;

D22_:;
  // deopt 84 [nx]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_nx;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L119_:;
  // nx1 = force? nx
  Rsh_Fir_reg_nx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx);
  // checkMissing(nx1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_nx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r67 = dyn is_na1(nx1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_nx1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L120() else D23()
  // L120()
  goto L120_;

D23_:;
  // deopt 87 [r67]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L19(r67)
  // L19(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L19_;

L121_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L122() else D24()
  // L122()
  goto L122_;

D24_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L122_:;
  // r68 = dyn stop1("invalid length(x)")
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L123() else D25()
  // L123()
  goto L123_;

D25_:;
  // deopt 91 [r68]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L21()
  // L21()
  goto L21_;

D26_:;
  // deopt 94 [nx2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nx2_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L125_:;
  // nx3 = force? nx2
  Rsh_Fir_reg_nx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx2_);
  // checkMissing(nx3)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_nx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // r70 = `<=`(nx3, 1.0)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_nx3_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c21 then L126() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L126()
    goto L126_;
  } else {
  // L22()
    goto L22_;
  }

L126_:;
  // method5 = ld method
  Rsh_Fir_reg_method5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L127() else D27()
  // L127()
  goto L127_;

D27_:;
  // deopt 98 [method5]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_method5_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L127_:;
  // method6 = force? method5
  Rsh_Fir_reg_method6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method5_);
  // checkMissing(method6)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_method6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // r71 = `==`(method6, 1.0)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_method6_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // c22 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c22 then L128() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L128()
    goto L128_;
  } else {
  // L23()
    goto L23_;
  }

L128_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L129() else D28()
  // L129()
  goto L129_;

D28_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L129_:;
  // r72 = dyn stop2("need at least two non-NA values to interpolate")
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L130() else D29()
  // L130()
  goto L130_;

D29_:;
  // deopt 105 [r72]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L130_:;
  // goto L24()
  // L24()
  goto L24_;

D30_:;
  // deopt 108 [nx4]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_nx4_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L132_:;
  // nx5 = force? nx4
  Rsh_Fir_reg_nx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx4_);
  // checkMissing(nx5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_nx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // r74 = `==`(nx5, 0.0)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_nx5_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r74)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c23 then L133() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L133()
    goto L133_;
  } else {
  // L25()
    goto L25_;
  }

L133_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L134() else D31()
  // L134()
  goto L134_;

D31_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L134_:;
  // r75 = dyn stop3("zero non-NA points")
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L135() else D32()
  // L135()
  goto L135_;

D32_:;
  // deopt 115 [r75]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L135_:;
  // goto L26(r75)
  // L26(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L26_;

L138_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r80 = dyn missing1(<sym yleft>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L28(r80)
  // L28(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L28_;

L139_:;
  // r78 = dyn base9(<sym yleft>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L28(r78)
  // L28(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L28_;

L140_:;
  // rule12 = ld rule
  Rsh_Fir_reg_rule12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L141() else D33()
  // L141()
  goto L141_;

D33_:;
  // deopt 123 [rule12]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_rule12_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L141_:;
  // rule13 = force? rule12
  Rsh_Fir_reg_rule13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rule12_);
  // checkMissing(rule13)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_rule13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(rule13)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_rule13_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if c25 then L142() else L143(rule13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L142()
    goto L142_;
  } else {
  // L143(rule13)
    Rsh_Fir_reg_rule15_ = Rsh_Fir_reg_rule13_;
    goto L143_;
  }

L142_:;
  // dr10 = tryDispatchBuiltin.1("[", rule13)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_rule13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc5 then L144() else L143(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L144()
    goto L144_;
  } else {
  // L143(dr10)
    Rsh_Fir_reg_rule15_ = Rsh_Fir_reg_dr10_;
    goto L143_;
  }

L143_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r81 = dyn __1(rule15, 1)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_rule15_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L30(r81)
  // L30(r81)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r81_;
  goto L30_;

L144_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L30(dx11)
  // L30(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L30_;

L145_:;
  // goto L32(NA_LGL)
  // L32(NA_LGL)
  Rsh_Fir_reg_r83_ = Rsh_const(CCP, 51);
  goto L32_;

D34_:;
  // deopt 132 [y3]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L147_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(y4)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c27 then L148() else L149(y4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L148()
    goto L148_;
  } else {
  // L149(y4)
    Rsh_Fir_reg_y6_ = Rsh_Fir_reg_y4_;
    goto L149_;
  }

L148_:;
  // dr12 = tryDispatchBuiltin.1("[", y4)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_y4_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc6 then L150() else L149(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L150()
    goto L150_;
  } else {
  // L149(dr12)
    Rsh_Fir_reg_y6_ = Rsh_Fir_reg_dr12_;
    goto L149_;
  }

L149_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r84 = dyn __2(y6, 1)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_y6_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L32(r84)
  // L32(r84)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L32_;

L150_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L32(dx13)
  // L32(dx13)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_dx13_;
  goto L32_;

L152_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r88 = dyn missing2(<sym yright>)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L34(r88)
  // L34(r88)
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r88_;
  goto L34_;

L153_:;
  // r86 = dyn base10(<sym yright>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L34(r86)
  // L34(r86)
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r86_;
  goto L34_;

L154_:;
  // rule16 = ld rule
  Rsh_Fir_reg_rule16_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L155() else D35()
  // L155()
  goto L155_;

D35_:;
  // deopt 143 [rule16]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_rule16_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L155_:;
  // rule17 = force? rule16
  Rsh_Fir_reg_rule17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rule16_);
  // checkMissing(rule17)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_rule17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(rule17)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_rule17_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c29 then L156() else L157(rule17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L156()
    goto L156_;
  } else {
  // L157(rule17)
    Rsh_Fir_reg_rule19_ = Rsh_Fir_reg_rule17_;
    goto L157_;
  }

L156_:;
  // dr14 = tryDispatchBuiltin.1("[", rule17)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_rule17_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc7 then L158() else L157(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L158()
    goto L158_;
  } else {
  // L157(dr14)
    Rsh_Fir_reg_rule19_ = Rsh_Fir_reg_dr14_;
    goto L157_;
  }

L157_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r89 = dyn __3(rule19, 2)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_rule19_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L36(r89)
  // L36(r89)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r89_;
  goto L36_;

L158_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L36(dx14)
  // L36(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L36_;

L159_:;
  // goto L38(NA_LGL)
  // L38(NA_LGL)
  Rsh_Fir_reg_r91_ = Rsh_const(CCP, 51);
  goto L38_;

D36_:;
  // deopt 152 [y7]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L161_:;
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(y8)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_y8_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c31 then L162() else L163(y8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L162()
    goto L162_;
  } else {
  // L163(y8)
    Rsh_Fir_reg_y10_ = Rsh_Fir_reg_y8_;
    goto L163_;
  }

L162_:;
  // dr16 = tryDispatchBuiltin.1("[", y8)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_y8_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc8 then L164() else L163(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L164()
    goto L164_;
  } else {
  // L163(dr16)
    Rsh_Fir_reg_y10_ = Rsh_Fir_reg_dr16_;
    goto L163_;
  }

L163_:;
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args149);
  // if guard11 then L165() else L166()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L165()
    goto L165_;
  } else {
  // L166()
    goto L166_;
  }

L164_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L38(dx16)
  // L38(dx16)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_dx16_;
  goto L38_;

L165_:;
  // y14 = ld y
  Rsh_Fir_reg_y14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L167() else D37()
  // L167()
  goto L167_;

L166_:;
  // r92 = dyn base11(<sym y>)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L39(y10, r92)
  // L39(y10, r92)
  Rsh_Fir_reg_y13_ = Rsh_Fir_reg_y10_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L39_;

D37_:;
  // deopt 156 [y10, y14]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_y10_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_y14_;
  Rsh_Fir_deopt(156, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L167_:;
  // y15 = force? y14
  Rsh_Fir_reg_y15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y14_);
  // checkMissing(y15)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_y15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r94 = dyn length2(y15)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_y15_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L168() else D38()
  // L168()
  goto L168_;

D38_:;
  // deopt 159 [y10, r94]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_y10_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(159, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L168_:;
  // goto L39(y10, r94)
  // L39(y10, r94)
  Rsh_Fir_reg_y13_ = Rsh_Fir_reg_y10_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r94_;
  goto L39_;

D39_:;
  // deopt 165 []
  Rsh_Fir_deopt(165, 0, NULL, CCP, RHO);
  return R_NilValue;

L170_:;
  // p11 = prom<V +>{
  //   sym12 = ldf length;
  //   base12 = ldf length in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L1() else L2();
  // L0(r98):
  //   r100 = `==`(r98, 1);
  //   return r100;
  // L1():
  //   yleft1 = ld yleft;
  //   yleft2 = force? yleft1;
  //   checkMissing(yleft2);
  //   length3 = ldf length in base;
  //   r99 = dyn length3(yleft2);
  //   goto L0(r99);
  // L2():
  //   r97 = dyn base12(<sym yleft>);
  //   goto L0(r97);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_11, CCP, RHO);
  // p12 = prom<V +>{
  //   sym13 = ldf length;
  //   base13 = ldf length in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r103):
  //   r105 = `==`(r103, 1);
  //   return r105;
  // L1():
  //   yright1 = ld yright;
  //   yright2 = force? yright1;
  //   checkMissing(yright2);
  //   length4 = ldf length in base;
  //   r104 = dyn length4(yright2);
  //   goto L0(r104);
  // L2():
  //   r102 = dyn base13(<sym yright>);
  //   goto L0(r102);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_12, CCP, RHO);
  // p13 = prom<V +>{
  //   sym14 = ldf length;
  //   base14 = ldf length in base;
  //   guard14 = `==`.4(sym14, base14);
  //   if guard14 then L1() else L2();
  // L0(r108):
  //   r110 = `==`(r108, 1);
  //   return r110;
  // L1():
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   length5 = ldf length in base;
  //   r109 = dyn length5(f2);
  //   goto L0(r109);
  // L2():
  //   r107 = dyn base14(<sym f>);
  //   goto L0(r107);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3081670869_13, CCP, RHO);
  // r112 = dyn stopifnot1(p11, p12, p13)
  SEXP Rsh_Fir_array_args169[3];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args169[2] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 3, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L171() else D40()
  // L171()
  goto L171_;

D40_:;
  // deopt 169 [r112]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L171_:;
  // sym15 = ldf missing
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base15 = ldf missing in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args170);
  // if guard15 then L172() else L173()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L172()
    goto L172_;
  } else {
  // L173()
    goto L173_;
  }

L172_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r115 = dyn missing3(<sym xout>)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L41(r115)
  // L41(r115)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r115_;
  goto L41_;

L173_:;
  // r113 = dyn base15(<sym xout>)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L41(r113)
  // L41(r113)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r113_;
  goto L41_;

L174_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L175() else D41()
  // L175()
  goto L175_;

D41_:;
  // deopt 173 [n1]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(173, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L175_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // r116 = `<=`(n2, 0.0)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // c33 = `as.logical`(r116)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if c33 then L176() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L176()
    goto L176_;
  } else {
  // L43()
    goto L43_;
  }

L176_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L177() else D42()
  // L177()
  goto L177_;

D42_:;
  // deopt 178 []
  Rsh_Fir_deopt(178, 0, NULL, CCP, RHO);
  return R_NilValue;

L177_:;
  // r117 = dyn stop4("'approx' requires n >= 1")
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L178() else D43()
  // L178()
  goto L178_;

D43_:;
  // deopt 180 [r117]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L178_:;
  // goto L44()
  // L44()
  goto L44_;

D44_:;
  // deopt 183 [noNA2]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_noNA2_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L180_:;
  // noNA3 = force? noNA2
  Rsh_Fir_reg_noNA3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_noNA2_);
  // checkMissing(noNA3)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_noNA3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // c34 = `as.logical`(noNA3)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_noNA3_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if c34 then L181() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L181()
    goto L181_;
  } else {
  // L45()
    goto L45_;
  }

L181_:;
  // sym16 = ldf `seq.int`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base16 = ldf `seq.int` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args179);
  // if guard16 then L182() else L183()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L182()
    goto L182_;
  } else {
  // L183()
    goto L183_;
  }

L182_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L184() else D45()
  // L184()
  goto L184_;

L183_:;
  // r119 = dyn base16[, , `length.out`](<lang `[`(x, 1)>, <lang `[`(x, nx)>, <sym n>)
  SEXP Rsh_Fir_array_args180[3];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args180[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 3, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L46(r119)
  // L46(r119)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r119_;
  goto L46_;

D45_:;
  // deopt 187 [x5]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L184_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(x6)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if c35 then L185() else L186(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L185()
    goto L185_;
  } else {
  // L186(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L186_;
  }

L185_:;
  // dr18 = tryDispatchBuiltin.1("[", x6)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args183);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc9 then L187() else L186(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L187()
    goto L187_;
  } else {
  // L186(dr18)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr18_;
    goto L186_;
  }

L186_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r121 = dyn __5(x8, 1)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args185[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L47(r121)
  // L47(r121)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r121_;
  goto L47_;

L187_:;
  // dx17 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L47(dx17)
  // L47(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L47_;

D46_:;
  // deopt 192 [x9]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L188_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(x10)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // if c36 then L189() else L190(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L189()
    goto L189_;
  } else {
  // L190(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L190_;
  }

L189_:;
  // dr20 = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args189);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if dc10 then L191() else L190(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L191()
    goto L191_;
  } else {
  // L190(dr20)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr20_;
    goto L190_;
  }

L190_:;
  // nx6 = ld nx
  Rsh_Fir_reg_nx6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L192() else D47()
  // L192()
  goto L192_;

L191_:;
  // dx19 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // goto L48(dx19)
  // L48(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L48_;

D47_:;
  // deopt 194 [x12, nx6]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_nx6_;
  Rsh_Fir_deopt(194, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L192_:;
  // nx7 = force? nx6
  Rsh_Fir_reg_nx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx6_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r122 = dyn __6(x12, nx7)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_nx7_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L48(r122)
  // L48(r122)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r122_;
  goto L48_;

D48_:;
  // deopt 197 [n3]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L193_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r123 = dyn seq_int(dx18, dx20, n4)
  SEXP Rsh_Fir_array_args194[3];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_args194[2] = Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L194() else D49()
  // L194()
  goto L194_;

D49_:;
  // deopt 201 [r123]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L194_:;
  // goto L46(r123)
  // L46(r123)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r123_;
  goto L46_;

D50_:;
  // deopt 202 [x13]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(202, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L196_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(x14)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // if c37 then L197() else L198(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L197()
    goto L197_;
  } else {
  // L198(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L198_;
  }

L197_:;
  // dr22 = tryDispatchBuiltin.1("[", x14)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args197);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if dc11 then L199() else L198(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L199()
    goto L199_;
  } else {
  // L198(dr22)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr22_;
    goto L198_;
  }

L198_:;
  // r125 = ld r
  Rsh_Fir_reg_r125_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L200() else D51()
  // L200()
  goto L200_;

L199_:;
  // dx21 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty());
  // goto L50(dx21)
  // L50(dx21)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L50_;

D51_:;
  // deopt 204 [x16, r125]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(204, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L200_:;
  // r126 = force? r125
  Rsh_Fir_reg_r126_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r125_);
  // checkMissing(r126)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_r126_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(r126)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if c38 then L202() else L203(x16, r126)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L202()
    goto L202_;
  } else {
  // L203(x16, r126)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r126_;
    goto L203_;
  }

L201_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r130 = dyn __7(x20, dx24)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args202[1] = Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L50(r130)
  // L50(r130)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r130_;
  goto L50_;

L202_:;
  // dr24 = tryDispatchBuiltin.1("$", r126)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args203);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // if dc12 then L204() else L203(x16, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L204()
    goto L204_;
  } else {
  // L203(x16, dr24)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    Rsh_Fir_reg_r128_ = Rsh_Fir_reg_dr24_;
    goto L203_;
  }

L203_:;
  // r129 = `$`(r128, <sym notNA>)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_r128_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // goto L201(x18, r129)
  // L201(x18, r129)
  Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r129_;
  goto L201_;

L204_:;
  // dx23 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // goto L201(x16, dx23)
  // L201(x16, dx23)
  Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L201_;

L205_:;
  // xout1 = ld xout
  Rsh_Fir_reg_xout1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L207() else D52()
  // L207()
  goto L207_;

L206_:;
  // r131 = dyn base17[, , `length.out`](<lang `[`(xout, 1)>, <lang `[`(xout, length(xout))>, <sym n>)
  SEXP Rsh_Fir_array_args207[3];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args207[1] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args207[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names52[3];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 3, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L49(r131)
  // L49(r131)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r131_;
  goto L49_;

D52_:;
  // deopt 211 [xout1]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_xout1_;
  Rsh_Fir_deopt(211, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L207_:;
  // xout2 = force? xout1
  Rsh_Fir_reg_xout2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xout1_);
  // checkMissing(xout2)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_xout2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(xout2)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_xout2_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if c39 then L208() else L209(xout2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L208()
    goto L208_;
  } else {
  // L209(xout2)
    Rsh_Fir_reg_xout4_ = Rsh_Fir_reg_xout2_;
    goto L209_;
  }

L208_:;
  // dr26 = tryDispatchBuiltin.1("[", xout2)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_xout2_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args210);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // if dc13 then L210() else L209(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L210()
    goto L210_;
  } else {
  // L209(dr26)
    Rsh_Fir_reg_xout4_ = Rsh_Fir_reg_dr26_;
    goto L209_;
  }

L209_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r132 = dyn __8(xout4, 1)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_xout4_;
  Rsh_Fir_array_args212[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L51(r132)
  // L51(r132)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r132_;
  goto L51_;

L210_:;
  // dx25 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // goto L51(dx25)
  // L51(dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L51_;

D53_:;
  // deopt 216 [xout5]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_xout5_;
  Rsh_Fir_deopt(216, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L211_:;
  // xout6 = force? xout5
  Rsh_Fir_reg_xout6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xout5_);
  // checkMissing(xout6)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_xout6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(xout6)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_xout6_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // if c40 then L212() else L213(xout6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L212()
    goto L212_;
  } else {
  // L213(xout6)
    Rsh_Fir_reg_xout8_ = Rsh_Fir_reg_xout6_;
    goto L213_;
  }

L212_:;
  // dr28 = tryDispatchBuiltin.1("[", xout6)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_xout6_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args216);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // if dc14 then L214() else L213(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L214()
    goto L214_;
  } else {
  // L213(dr28)
    Rsh_Fir_reg_xout8_ = Rsh_Fir_reg_dr28_;
    goto L213_;
  }

L213_:;
  // sym18 = ldf length
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base18 = ldf length in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args218);
  // if guard18 then L215() else L216()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L215()
    goto L215_;
  } else {
  // L216()
    goto L216_;
  }

L214_:;
  // dx27 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // goto L52(dx27)
  // L52(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L52_;

L215_:;
  // xout12 = ld xout
  Rsh_Fir_reg_xout12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L217() else D54()
  // L217()
  goto L217_;

L216_:;
  // r133 = dyn base18(<sym xout>)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L53(xout8, r133)
  // L53(xout8, r133)
  Rsh_Fir_reg_xout11_ = Rsh_Fir_reg_xout8_;
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r133_;
  goto L53_;

D54_:;
  // deopt 220 [xout8, xout12]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_xout8_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_xout12_;
  Rsh_Fir_deopt(220, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L217_:;
  // xout13 = force? xout12
  Rsh_Fir_reg_xout13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xout12_);
  // checkMissing(xout13)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_xout13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r135 = dyn length6(xout13)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_xout13_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L218() else D55()
  // L218()
  goto L218_;

D55_:;
  // deopt 223 [xout8, r135]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_xout8_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r135_;
  Rsh_Fir_deopt(223, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L218_:;
  // goto L53(xout8, r135)
  // L53(xout8, r135)
  Rsh_Fir_reg_xout11_ = Rsh_Fir_reg_xout8_;
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r135_;
  goto L53_;

D56_:;
  // deopt 225 [n5]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L219_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // seq_int1 = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r137 = dyn seq_int1(dx26, dx28, n6)
  SEXP Rsh_Fir_array_args224[3];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_array_args224[2] = Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_array_arg_names56[3];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int1_, 3, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L220() else D57()
  // L220()
  goto L220_;

D57_:;
  // deopt 229 [r137]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_deopt(229, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L220_:;
  // goto L49(r137)
  // L49(r137)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r137_;
  goto L49_;

L222_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L224() else D58()
  // L224()
  goto L224_;

L223_:;
  // r139 = dyn base19(<sym x>)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args225, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L55(r139)
  // L55(r139)
  Rsh_Fir_reg_r140_ = Rsh_Fir_reg_r139_;
  goto L55_;

D58_:;
  // deopt 235 [x21]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L224_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r141 = dyn as_double(x22)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L225() else D59()
  // L225()
  goto L225_;

D59_:;
  // deopt 238 [r141]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(238, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L225_:;
  // goto L55(r141)
  // L55(r141)
  Rsh_Fir_reg_r140_ = Rsh_Fir_reg_r141_;
  goto L55_;

L226_:;
  // y16 = ld y
  Rsh_Fir_reg_y16_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L228() else D60()
  // L228()
  goto L228_;

L227_:;
  // r142 = dyn base20(<sym y>)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args228, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L56(r142)
  // L56(r142)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r142_;
  goto L56_;

D60_:;
  // deopt 242 [y16]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_y16_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L228_:;
  // y17 = force? y16
  Rsh_Fir_reg_y17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y16_);
  // checkMissing(y17)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_y17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r144 = dyn as_double1(y17)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_y17_;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L229() else D61()
  // L229()
  goto L229_;

D61_:;
  // deopt 245 [r144]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r144_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L229_:;
  // goto L56(r144)
  // L56(r144)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r144_;
  goto L56_;

L230_:;
  // C_ApproxTest = ld C_ApproxTest
  Rsh_Fir_reg_C_ApproxTest = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L232() else D62()
  // L232()
  goto L232_;

L231_:;
  // r145 = dyn base21(<sym C_ApproxTest>, <sym x>, <sym y>, <sym method>, <sym f>, <sym na.rm>)
  SEXP Rsh_Fir_array_args231[6];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args231[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args231[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args231[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args231[5] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names61[6];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_array_arg_names61[2] = R_MissingArg;
  Rsh_Fir_array_arg_names61[3] = R_MissingArg;
  Rsh_Fir_array_arg_names61[4] = R_MissingArg;
  Rsh_Fir_array_arg_names61[5] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 6, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L57()
  // L57()
  goto L57_;

D62_:;
  // deopt 248 [C_ApproxTest]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_C_ApproxTest;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L232_:;
  // C_ApproxTest1 = force? C_ApproxTest
  Rsh_Fir_reg_C_ApproxTest1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_ApproxTest);
  // checkMissing(C_ApproxTest1)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_C_ApproxTest1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty()));
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L233() else D63()
  // L233()
  goto L233_;

D63_:;
  // deopt 249 [C_ApproxTest1, x23]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_C_ApproxTest1_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(249, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L233_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty()));
  // y18 = ld y
  Rsh_Fir_reg_y18_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L234() else D64()
  // L234()
  goto L234_;

D64_:;
  // deopt 250 [C_ApproxTest1, x24, y18]
  SEXP Rsh_Fir_array_deopt_stack55[3];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_C_ApproxTest1_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_y18_;
  Rsh_Fir_deopt(250, 3, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L234_:;
  // y19 = force? y18
  Rsh_Fir_reg_y19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y18_);
  // checkMissing(y19)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_y19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty()));
  // method7 = ld method
  Rsh_Fir_reg_method7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L235() else D65()
  // L235()
  goto L235_;

D65_:;
  // deopt 251 [C_ApproxTest1, x24, y19, method7]
  SEXP Rsh_Fir_array_deopt_stack56[4];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_C_ApproxTest1_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_y19_;
  Rsh_Fir_array_deopt_stack56[3] = Rsh_Fir_reg_method7_;
  Rsh_Fir_deopt(251, 4, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L235_:;
  // method8 = force? method7
  Rsh_Fir_reg_method8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method7_);
  // checkMissing(method8)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_method8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty()));
  // f3 = ld f
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L236() else D66()
  // L236()
  goto L236_;

D66_:;
  // deopt 252 [C_ApproxTest1, x24, y19, method8, f3]
  SEXP Rsh_Fir_array_deopt_stack57[5];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_C_ApproxTest1_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_deopt_stack57[2] = Rsh_Fir_reg_y19_;
  Rsh_Fir_array_deopt_stack57[3] = Rsh_Fir_reg_method8_;
  Rsh_Fir_array_deopt_stack57[4] = Rsh_Fir_reg_f3_;
  Rsh_Fir_deopt(252, 5, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L236_:;
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // na_rm5 = ld `na.rm`
  Rsh_Fir_reg_na_rm5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L237() else D67()
  // L237()
  goto L237_;

D67_:;
  // deopt 253 [C_ApproxTest1, x24, y19, method8, f4, na_rm5]
  SEXP Rsh_Fir_array_deopt_stack58[6];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_C_ApproxTest1_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_y19_;
  Rsh_Fir_array_deopt_stack58[3] = Rsh_Fir_reg_method8_;
  Rsh_Fir_array_deopt_stack58[4] = Rsh_Fir_reg_f4_;
  Rsh_Fir_array_deopt_stack58[5] = Rsh_Fir_reg_na_rm5_;
  Rsh_Fir_deopt(253, 6, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L237_:;
  // na_rm6 = force? na_rm5
  Rsh_Fir_reg_na_rm6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm5_);
  // checkMissing(na_rm6)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_na_rm6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // vargs = dots[x24, y19, method8, f4, na_rm6]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_y19_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_method8_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_f4_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_na_rm6_;
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r147 = `.Call`(C_ApproxTest1, vargs, <missing>)
  SEXP Rsh_Fir_array_args238[3];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_C_ApproxTest1_;
  Rsh_Fir_array_args238[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args238[2] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // goto L57()
  // L57()
  goto L57_;

L238_:;
  // C_Approx = ld C_Approx
  Rsh_Fir_reg_C_Approx = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // check L240() else D68()
  // L240()
  goto L240_;

L239_:;
  // r148 = dyn base22(<sym C_Approx>, <sym x>, <sym y>, <sym xout>, <sym method>, <sym yleft>, <sym yright>, <sym f>, <sym na.rm>)
  SEXP Rsh_Fir_array_args239[9];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args239[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args239[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args239[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args239[4] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args239[5] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args239[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args239[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args239[8] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names62[9];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_array_arg_names62[2] = R_MissingArg;
  Rsh_Fir_array_arg_names62[3] = R_MissingArg;
  Rsh_Fir_array_arg_names62[4] = R_MissingArg;
  Rsh_Fir_array_arg_names62[5] = R_MissingArg;
  Rsh_Fir_array_arg_names62[6] = R_MissingArg;
  Rsh_Fir_array_arg_names62[7] = R_MissingArg;
  Rsh_Fir_array_arg_names62[8] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 9, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L58(r148)
  // L58(r148)
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r148_;
  goto L58_;

D68_:;
  // deopt 257 [C_Approx]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_C_Approx;
  Rsh_Fir_deopt(257, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L240_:;
  // C_Approx1 = force? C_Approx
  Rsh_Fir_reg_C_Approx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_Approx);
  // checkMissing(C_Approx1)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_C_Approx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L241() else D69()
  // L241()
  goto L241_;

D69_:;
  // deopt 258 [C_Approx1, x25]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(258, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L241_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // y20 = ld y
  Rsh_Fir_reg_y20_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L242() else D70()
  // L242()
  goto L242_;

D70_:;
  // deopt 259 [C_Approx1, x26, y20]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_y20_;
  Rsh_Fir_deopt(259, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L242_:;
  // y21 = force? y20
  Rsh_Fir_reg_y21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y20_);
  // checkMissing(y21)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_y21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // xout14 = ld xout
  Rsh_Fir_reg_xout14_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L243() else D71()
  // L243()
  goto L243_;

D71_:;
  // deopt 260 [C_Approx1, x26, y21, xout14]
  SEXP Rsh_Fir_array_deopt_stack62[4];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_deopt_stack62[2] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_deopt_stack62[3] = Rsh_Fir_reg_xout14_;
  Rsh_Fir_deopt(260, 4, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L243_:;
  // xout15 = force? xout14
  Rsh_Fir_reg_xout15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xout14_);
  // checkMissing(xout15)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_xout15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty()));
  // method9 = ld method
  Rsh_Fir_reg_method9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L244() else D72()
  // L244()
  goto L244_;

D72_:;
  // deopt 261 [C_Approx1, x26, y21, xout15, method9]
  SEXP Rsh_Fir_array_deopt_stack63[5];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_deopt_stack63[3] = Rsh_Fir_reg_xout15_;
  Rsh_Fir_array_deopt_stack63[4] = Rsh_Fir_reg_method9_;
  Rsh_Fir_deopt(261, 5, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L244_:;
  // method10 = force? method9
  Rsh_Fir_reg_method10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method9_);
  // checkMissing(method10)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_method10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty()));
  // yleft3 = ld yleft
  Rsh_Fir_reg_yleft3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L245() else D73()
  // L245()
  goto L245_;

D73_:;
  // deopt 262 [C_Approx1, x26, y21, xout15, method10, yleft3]
  SEXP Rsh_Fir_array_deopt_stack64[6];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_xout15_;
  Rsh_Fir_array_deopt_stack64[4] = Rsh_Fir_reg_method10_;
  Rsh_Fir_array_deopt_stack64[5] = Rsh_Fir_reg_yleft3_;
  Rsh_Fir_deopt(262, 6, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L245_:;
  // yleft4 = force? yleft3
  Rsh_Fir_reg_yleft4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yleft3_);
  // checkMissing(yleft4)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_yleft4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty()));
  // yright3 = ld yright
  Rsh_Fir_reg_yright3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L246() else D74()
  // L246()
  goto L246_;

D74_:;
  // deopt 263 [C_Approx1, x26, y21, xout15, method10, yleft4, yright3]
  SEXP Rsh_Fir_array_deopt_stack65[7];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_deopt_stack65[3] = Rsh_Fir_reg_xout15_;
  Rsh_Fir_array_deopt_stack65[4] = Rsh_Fir_reg_method10_;
  Rsh_Fir_array_deopt_stack65[5] = Rsh_Fir_reg_yleft4_;
  Rsh_Fir_array_deopt_stack65[6] = Rsh_Fir_reg_yright3_;
  Rsh_Fir_deopt(263, 7, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L246_:;
  // yright4 = force? yright3
  Rsh_Fir_reg_yright4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yright3_);
  // checkMissing(yright4)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_yright4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty()));
  // f5 = ld f
  Rsh_Fir_reg_f5_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L247() else D75()
  // L247()
  goto L247_;

D75_:;
  // deopt 264 [C_Approx1, x26, y21, xout15, method10, yleft4, yright4, f5]
  SEXP Rsh_Fir_array_deopt_stack66[8];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_deopt_stack66[2] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_deopt_stack66[3] = Rsh_Fir_reg_xout15_;
  Rsh_Fir_array_deopt_stack66[4] = Rsh_Fir_reg_method10_;
  Rsh_Fir_array_deopt_stack66[5] = Rsh_Fir_reg_yleft4_;
  Rsh_Fir_array_deopt_stack66[6] = Rsh_Fir_reg_yright4_;
  Rsh_Fir_array_deopt_stack66[7] = Rsh_Fir_reg_f5_;
  Rsh_Fir_deopt(264, 8, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L247_:;
  // f6 = force? f5
  Rsh_Fir_reg_f6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f5_);
  // checkMissing(f6)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_f6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty()));
  // na_rm7 = ld `na.rm`
  Rsh_Fir_reg_na_rm7_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L248() else D76()
  // L248()
  goto L248_;

D76_:;
  // deopt 265 [C_Approx1, x26, y21, xout15, method10, yleft4, yright4, f6, na_rm7]
  SEXP Rsh_Fir_array_deopt_stack67[9];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_deopt_stack67[2] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_deopt_stack67[3] = Rsh_Fir_reg_xout15_;
  Rsh_Fir_array_deopt_stack67[4] = Rsh_Fir_reg_method10_;
  Rsh_Fir_array_deopt_stack67[5] = Rsh_Fir_reg_yleft4_;
  Rsh_Fir_array_deopt_stack67[6] = Rsh_Fir_reg_yright4_;
  Rsh_Fir_array_deopt_stack67[7] = Rsh_Fir_reg_f6_;
  Rsh_Fir_array_deopt_stack67[8] = Rsh_Fir_reg_na_rm7_;
  Rsh_Fir_deopt(265, 9, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L248_:;
  // na_rm8 = force? na_rm7
  Rsh_Fir_reg_na_rm8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm7_);
  // checkMissing(na_rm8)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_na_rm8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // vargs1 = dots[x26, y21, xout15, method10, yleft4, yright4, f6, na_rm8]
  SEXP Rsh_Fir_array_vector_values1[8];
  Rsh_Fir_array_vector_values1[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_array_vector_values1[1] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_vector_values1[2] = Rsh_Fir_reg_xout15_;
  Rsh_Fir_array_vector_values1[3] = Rsh_Fir_reg_method10_;
  Rsh_Fir_array_vector_values1[4] = Rsh_Fir_reg_yleft4_;
  Rsh_Fir_array_vector_values1[5] = Rsh_Fir_reg_yright4_;
  Rsh_Fir_array_vector_values1[6] = Rsh_Fir_reg_f6_;
  Rsh_Fir_array_vector_values1[7] = Rsh_Fir_reg_na_rm8_;
  SEXP Rsh_Fir_array_vector_names1[8];
  Rsh_Fir_array_vector_names1[0] = R_MissingArg;
  Rsh_Fir_array_vector_names1[1] = R_MissingArg;
  Rsh_Fir_array_vector_names1[2] = R_MissingArg;
  Rsh_Fir_array_vector_names1[3] = R_MissingArg;
  Rsh_Fir_array_vector_names1[4] = R_MissingArg;
  Rsh_Fir_array_vector_names1[5] = R_MissingArg;
  Rsh_Fir_array_vector_names1[6] = R_MissingArg;
  Rsh_Fir_array_vector_names1[7] = R_MissingArg;
  Rsh_Fir_reg_vargs1_ = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 8, Rsh_Fir_array_vector_values1, NULL);
  // r150 = `.Call`(C_Approx1, vargs1, <missing>)
  SEXP Rsh_Fir_array_args249[3];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_vargs1_;
  Rsh_Fir_array_args249[2] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // goto L58(r150)
  // L58(r150)
  Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r150_;
  goto L58_;

L249_:;
  // xout16 = ld xout
  Rsh_Fir_reg_xout16_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L251() else D77()
  // L251()
  goto L251_;

L250_:;
  // r151 = dyn base23[x, y](<sym xout>, <sym yout>)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args250[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names63[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args250, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L59(r151)
  // L59(r151)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r151_;
  goto L59_;

D77_:;
  // deopt 271 [xout16]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_xout16_;
  Rsh_Fir_deopt(271, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L251_:;
  // xout17 = force? xout16
  Rsh_Fir_reg_xout17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xout16_);
  // checkMissing(xout17)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_xout17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty()));
  // yout = ld yout
  Rsh_Fir_reg_yout = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L252() else D78()
  // L252()
  goto L252_;

D78_:;
  // deopt 274 [yout]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_yout;
  Rsh_Fir_deopt(274, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L252_:;
  // yout1 = force? yout
  Rsh_Fir_reg_yout1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yout);
  // checkMissing(yout1)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_yout1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r153 = dyn list(xout17, yout1)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_xout17_;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_yout1_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L253() else D79()
  // L253()
  goto L253_;

D79_:;
  // deopt 278 [r153]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r153_;
  Rsh_Fir_deopt(278, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L253_:;
  // goto L59(r153)
  // L59(r153)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r153_;
  goto L59_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_(SEXP CCP, SEXP RHO) {
  // mean = ld mean
  Rsh_Fir_reg_mean = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // mean1 = force? mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mean);
  // checkMissing(mean1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_mean1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return mean1
  return Rsh_Fir_reg_mean1_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_1(SEXP CCP, SEXP RHO) {
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return method2
  return Rsh_Fir_reg_method2_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_2(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r4 = dyn c("linear", "constant")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base("linear", "constant")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_3(SEXP CCP, SEXP RHO) {
  // sym2 = ldf `is.numeric`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base2 = ldf `is.numeric` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // rule1 = ld rule
  Rsh_Fir_reg_rule1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // rule2 = force? rule1
  Rsh_Fir_reg_rule2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rule1_);
  // checkMissing(rule2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_rule2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r14 = dyn is_numeric(rule2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_rule2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base2(<sym rule>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_4(SEXP CCP, SEXP RHO) {
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st lenR = r17
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // r19 = `>=`(r17, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // rule3 = ld rule
  Rsh_Fir_reg_rule3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // rule4 = force? rule3
  Rsh_Fir_reg_rule4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rule3_);
  // checkMissing(rule4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_rule4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r18 = dyn length(rule4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_rule4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3(<sym rule>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_5(SEXP CCP, SEXP RHO) {
  // lenR = ld lenR
  Rsh_Fir_reg_lenR = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // lenR1 = force? lenR
  Rsh_Fir_reg_lenR1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lenR);
  // checkMissing(lenR1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_lenR1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r21 = `<=`(lenR1, 2)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_lenR1_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_6(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_7(SEXP CCP, SEXP RHO) {
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_8(SEXP CCP, SEXP RHO) {
  // ties1 = ld ties
  Rsh_Fir_reg_ties1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // ties2 = force? ties1
  Rsh_Fir_reg_ties2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ties1_);
  // checkMissing(ties2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_ties2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return ties2
  return Rsh_Fir_reg_ties2_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_9(SEXP CCP, SEXP RHO) {
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r34 = dyn missing(<sym ties>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // r32 = dyn base5(<sym ties>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_10(SEXP CCP, SEXP RHO) {
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return na_rm2
  return Rsh_Fir_reg_na_rm2_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_11(SEXP CCP, SEXP RHO) {
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args154);
  // if guard12 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r100 = `==`(r98, 1)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // return r100
  return Rsh_Fir_reg_r100_;

L1_:;
  // yleft1 = ld yleft
  Rsh_Fir_reg_yleft1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // yleft2 = force? yleft1
  Rsh_Fir_reg_yleft2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yleft1_);
  // checkMissing(yleft2)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_yleft2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r99 = dyn length3(yleft2)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_yleft2_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r99)
  // L0(r99)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r99_;
  goto L0_;

L2_:;
  // r97 = dyn base12(<sym yleft>)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r97)
  // L0(r97)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_12(SEXP CCP, SEXP RHO) {
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r105 = `==`(r103, 1)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // return r105
  return Rsh_Fir_reg_r105_;

L1_:;
  // yright1 = ld yright
  Rsh_Fir_reg_yright1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // yright2 = force? yright1
  Rsh_Fir_reg_yright2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yright1_);
  // checkMissing(yright2)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_yright2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r104 = dyn length4(yright2)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_yright2_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r104)
  // L0(r104)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r104_;
  goto L0_;

L2_:;
  // r102 = dyn base13(<sym yright>)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r102)
  // L0(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3081670869_13(SEXP CCP, SEXP RHO) {
  // sym14 = ldf length
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base14 = ldf length in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args164);
  // if guard14 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r110 = `==`(r108, 1)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_array_args165[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // return r110
  return Rsh_Fir_reg_r110_;

L1_:;
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r109 = dyn length5(f2)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r109)
  // L0(r109)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r109_;
  goto L0_;

L2_:;
  // r107 = dyn base14(<sym f>)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L0(r107)
  // L0(r107)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r107_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
