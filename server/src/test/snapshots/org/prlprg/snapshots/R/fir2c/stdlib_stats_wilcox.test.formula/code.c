#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2860930212_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2860930212_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2860930212_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2860930212_17(SEXP CCP, SEXP RHO);
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
  // r = clos inner2860930212
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2860930212_, RHO, CCP);
  // st `wilcox.test.formula` = r
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
SEXP Rsh_Fir_user_function_inner2860930212_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2860930212 dynamic dispatch ([formula, data, subset, `na.action`, `...`])

  return Rsh_Fir_user_version_inner2860930212_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2860930212_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2860930212 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2860930212/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_formula;  // formula
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_subset;  // subset
  SEXP Rsh_Fir_reg_na_action;  // na_action
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_na_action_isMissing;  // na_action_isMissing
  SEXP Rsh_Fir_reg_na_action_orDefault;  // na_action_orDefault
  SEXP Rsh_Fir_reg_na_pass;  // na_pass
  SEXP Rsh_Fir_reg_na_pass1_;  // na_pass1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_formula1_;  // formula1
  SEXP Rsh_Fir_reg_formula2_;  // formula2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg____names;  // ___names
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_terms;  // terms
  SEXP Rsh_Fir_reg_formula3_;  // formula3
  SEXP Rsh_Fir_reg_formula4_;  // formula4
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_formula6_;  // formula6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_formula7_;  // formula7
  SEXP Rsh_Fir_reg_formula8_;  // formula8
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_formula10_;  // formula10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_as_data_frame;  // as_data_frame
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_eval1_;  // eval1
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_parent_frame1_;  // parent_frame1
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_mf;  // mf
  SEXP Rsh_Fir_reg_mf1_;  // mf1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_mf2_;  // mf2
  SEXP Rsh_Fir_reg_mf3_;  // mf3
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_attr2_;  // attr2
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_oneSampleOrPaired;  // oneSampleOrPaired
  SEXP Rsh_Fir_reg_oneSampleOrPaired1_;  // oneSampleOrPaired1
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_factor;  // factor
  SEXP Rsh_Fir_reg_mf4_;  // mf4
  SEXP Rsh_Fir_reg_mf5_;  // mf5
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_mf7_;  // mf7
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_response;  // response
  SEXP Rsh_Fir_reg_response1_;  // response1
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_nlevels;  // nlevels
  SEXP Rsh_Fir_reg_g;  // g
  SEXP Rsh_Fir_reg_g1_;  // g1
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_split;  // split
  SEXP Rsh_Fir_reg_mf8_;  // mf8
  SEXP Rsh_Fir_reg_mf9_;  // mf9
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_mf11_;  // mf11
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_response2_;  // response2
  SEXP Rsh_Fir_reg_response3_;  // response3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_g2_;  // g2
  SEXP Rsh_Fir_reg_g3_;  // g3
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_wilcox_test;  // wilcox_test
  SEXP Rsh_Fir_reg_DATA;  // DATA
  SEXP Rsh_Fir_reg_DATA1_;  // DATA1
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_DATA3_;  // DATA3
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_DATA4_;  // DATA4
  SEXP Rsh_Fir_reg_DATA5_;  // DATA5
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_DATA7_;  // DATA7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_mf12_;  // mf12
  SEXP Rsh_Fir_reg_mf13_;  // mf13
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_mf15_;  // mf15
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_response4_;  // response4
  SEXP Rsh_Fir_reg_response5_;  // response5
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_respVar;  // respVar
  SEXP Rsh_Fir_reg_respVar1_;  // respVar1
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_wilcox_test1_;  // wilcox_test1
  SEXP Rsh_Fir_reg_respVar2_;  // respVar2
  SEXP Rsh_Fir_reg_respVar3_;  // respVar3
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_respVar6_;  // respVar6
  SEXP Rsh_Fir_reg_respVar7_;  // respVar7
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_ddd3_;  // ddd3
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_wilcox_test2_;  // wilcox_test2
  SEXP Rsh_Fir_reg_respVar10_;  // respVar10
  SEXP Rsh_Fir_reg_respVar11_;  // respVar11
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_ddd4_;  // ddd4
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_DNAME;  // DNAME
  SEXP Rsh_Fir_reg_DNAME1_;  // DNAME1
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_DNAME3_;  // DNAME3
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1

  // Bind parameters
  Rsh_Fir_reg_formula = PARAMS[0];
  Rsh_Fir_reg_data = PARAMS[1];
  Rsh_Fir_reg_subset = PARAMS[2];
  Rsh_Fir_reg_na_action = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st formula = formula
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_formula, RHO);
  (void)(Rsh_Fir_reg_formula);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // st subset = subset
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_subset, RHO);
  (void)(Rsh_Fir_reg_subset);
  // na_action_isMissing = missing.0(na_action)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_na_action;
  Rsh_Fir_reg_na_action_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if na_action_isMissing then L0() else L1(na_action)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_action_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(na_action)
    Rsh_Fir_reg_na_action_orDefault = Rsh_Fir_reg_na_action;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   na_pass = ld `na.pass`;
  //   na_pass1 = force? na_pass;
  //   checkMissing(na_pass1);
  //   return na_pass1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_na_action_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st `na.action` = na_action_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_na_action_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_action_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L2_:;
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L3(c) else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L3_;
  } else {
  // L32()
    goto L32_;
  }

L3_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c9 then L38() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L38()
    goto L38_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // r7 = `!=`(r5, 3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L3(c7)
  // L3(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L3_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // st oneSampleOrPaired = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 10), RHO);
  (void)(Rsh_const(CCP, 10));
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L9_:;
  // r26 = `!=`(r18, 1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c12 then L56() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L56()
    goto L56_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r25 = dyn length1(r20)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L55() else D11()
  // L55()
  goto L55_;

L11_:;
  // goto L15()
  // L15()
  goto L15_;

L12_:;
  // r28 = `==`(dx3, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c14 then L61() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L61()
    goto L61_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L63() else D13()
  // L63()
  goto L63_;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L66() else D15()
  // L66()
  goto L66_;

L16_:;
  // c16 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c16 then L73() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L73()
    goto L73_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // sym6 = ldf quote
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf quote in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard6 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L19_:;
  // l3 = ld m
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c18 = `is.object`(l3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c18 then L83() else L84(r50, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L83()
    goto L83_;
  } else {
  // L84(r50, l3)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L84_;
  }

L20_:;
  // st m = dx9
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // l6 = ld m
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // ___ = ldf `$<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L86() else D22()
  // L86()
  goto L86_;

L21_:;
  // st response = r69
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // oneSampleOrPaired = ld oneSampleOrPaired
  Rsh_Fir_reg_oneSampleOrPaired = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L101() else D33()
  // L101()
  goto L101_;

L22_:;
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r73 = dyn attr2(r71, "response")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L100() else D32()
  // L100()
  goto L100_;

L23_:;
  // mf12 = ld mf
  Rsh_Fir_reg_mf12_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L116() else D44()
  // L116()
  goto L116_;

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // split = ldf split
  Rsh_Fir_reg_split = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L111() else D40()
  // L111()
  goto L111_;

L26_:;
  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L131() else D52()
  // L131()
  goto L131_;

L27_:;
  // st respVar = dx19
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // sym10 = ldf inherits
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base10 = ldf inherits in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard10 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L28_:;
  // c26 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c26 then L125() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L125()
    goto L125_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // wilcox_test2 = ldf `wilcox.test`
  Rsh_Fir_reg_wilcox_test2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L129() else D50()
  // L129()
  goto L129_;

L30_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r3 = dyn missing(<sym formula>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L2_;

L31_:;
  // r1 = dyn base(<sym formula>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r1)
  // L2(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L2_;

L32_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // formula1 = ld formula
  Rsh_Fir_reg_formula1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D0()
  // L35()
  goto L35_;

L34_:;
  // r4 = dyn base1(<sym formula>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(c, r4)
  // L4(c, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

D0_:;
  // deopt 5 [c, formula1]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_formula1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L35_:;
  // formula2 = force? formula1
  Rsh_Fir_reg_formula2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula1_);
  // checkMissing(formula2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_formula2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r6 = dyn length(formula2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_formula2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L36() else D1()
  // L36()
  goto L36_;

D1_:;
  // deopt 8 [c, r6]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L4(c, r6)
  // L4(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;

L38_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L39() else D2()
  // L39()
  goto L39_;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // r8 = dyn stop("'formula' missing or incorrect")
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L40() else D3()
  // L40()
  goto L40_;

D3_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6()
  // L6()
  goto L6_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p1 = prom<V +>{
  //   sym2 = ldf `...names`;
  //   base2 = ldf `...names` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   ___names = ldf `...names` in base;
  //   r12 = dyn ___names();
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base2();
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_1, CCP, RHO);
  // r14 = dyn _in_("paired", p1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

D5_:;
  // deopt 22 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L43_:;
  // c10 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c10 then L44() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L44()
    goto L44_;
  } else {
  // L7()
    goto L7_;
  }

L44_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L45() else D6()
  // L45()
  goto L45_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // r15 = dyn stop1("cannot use 'paired' in formula method")
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L46() else D7()
  // L46()
  goto L46_;

D7_:;
  // deopt 26 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L8()
  // L8()
  goto L8_;

L48_:;
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L49_:;
  // r17 = dyn base3(<lang attr(terms(`[`(formula, `-`(2))), "term.labels")>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

L50_:;
  // terms = ldf terms
  Rsh_Fir_reg_terms = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L52() else D8()
  // L52()
  goto L52_;

L51_:;
  // r19 = dyn base4(<lang terms(`[`(formula, `-`(2)))>, "term.labels")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r19)
  // L10(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L10_;

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p2 = prom<V +>{
  //   formula3 = ld formula;
  //   formula4 = force? formula3;
  //   checkMissing(formula4);
  //   c11 = `is.object`(formula4);
  //   if c11 then L1() else L2(formula4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", formula4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(formula6):
  //   __ = ldf `[` in base;
  //   r21 = dyn __(formula6, -2);
  //   goto L0(r21);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_2, CCP, RHO);
  // r23 = dyn terms(p2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L53() else D9()
  // L53()
  goto L53_;

D9_:;
  // deopt 39 [r23]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L53_:;
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r24 = dyn attr(r23, "term.labels")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

D10_:;
  // deopt 42 [r24]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r24_;
  goto L10_;

D11_:;
  // deopt 44 [r25]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r25_;
  goto L9_;

L56_:;
  // formula7 = ld formula
  Rsh_Fir_reg_formula7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L57() else D12()
  // L57()
  goto L57_;

D12_:;
  // deopt 47 [formula7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_formula7_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L57_:;
  // formula8 = force? formula7
  Rsh_Fir_reg_formula8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula7_);
  // checkMissing(formula8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_formula8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(formula8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_formula8_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c13 then L58() else L59(formula8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L58()
    goto L58_;
  } else {
  // L59(formula8)
    Rsh_Fir_reg_formula10_ = Rsh_Fir_reg_formula8_;
    goto L59_;
  }

L58_:;
  // dr2 = tryDispatchBuiltin.1("[[", formula8)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_formula8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc1 then L60() else L59(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L60()
    goto L60_;
  } else {
  // L59(dr2)
    Rsh_Fir_reg_formula10_ = Rsh_Fir_reg_dr2_;
    goto L59_;
  }

L59_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r27 = dyn __1(formula10, 3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_formula10_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r27_;
  goto L12_;

L60_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L12(dx2)
  // L12(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

L61_:;
  // st oneSampleOrPaired = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 41), RHO);
  (void)(Rsh_const(CCP, 41));
  // goto L14(TRUE)
  // L14(TRUE)
  Rsh_Fir_reg_r29_ = Rsh_const(CCP, 41);
  goto L14_;

D13_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // r30 = dyn stop2("'formula' missing or incorrect")
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L64() else D14()
  // L64()
  goto L64_;

D14_:;
  // deopt 60 [r30]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L14(r30)
  // L14(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L14_;

D15_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // r32 = dyn match_call[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L67() else D16()
  // L67()
  goto L67_;

D16_:;
  // deopt 67 [r32]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L67_:;
  // st m = r32
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym5 = ldf `is.matrix`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base5 = ldf `is.matrix` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard5 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L68_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L70() else D17()
  // L70()
  goto L70_;

L69_:;
  // r33 = dyn base5(<lang eval(`$`(m, data), parent.frame())>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L16_;

D17_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p3 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   c15 = `is.object`(m1);
  //   if c15 then L1() else L2(m1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", m1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(m3):
  //   r35 = `$`(m3, <sym data>);
  //   goto L0(r35);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_3, CCP, RHO);
  // p4 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r37 = dyn parent_frame();
  //   return r37;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_4, CCP, RHO);
  // r39 = dyn eval(p3, p4)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L71() else D18()
  // L71()
  goto L71_;

D18_:;
  // deopt 75 [r39]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L71_:;
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r40 = dyn is_matrix(r39)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L72() else D19()
  // L72()
  goto L72_;

D19_:;
  // deopt 77 [r40]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r40_;
  goto L16_;

L73_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L74() else D20()
  // L74()
  goto L74_;

D20_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p5 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_5, CCP, RHO);
  // r42 = dyn as_data_frame(p5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L75() else D21()
  // L75()
  goto L75_;

D21_:;
  // deopt 81 [r42]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L75_:;
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c17 = `is.object`(l)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c17 then L77() else L78(r42, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L77()
    goto L77_;
  } else {
  // L78(r42, l)
    Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r42_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L78_;
  }

L76_:;
  // st m = dx7
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L18()
  // L18()
  goto L18_;

L77_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l, r42)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args63);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc3 then L79() else L78(r42, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L79()
    goto L79_;
  } else {
  // L78(r42, dr6)
    Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r42_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L78_;
  }

L78_:;
  // r47 = `$<-`(l2, <sym data>, r42)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L76(r44, r47)
  // L76(r44, r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r47_;
  goto L76_;

L79_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L76(r42, dx6)
  // L76(r42, dx6)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L76_;

L81_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r51 = dyn quote(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L19(r51)
  // L19(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L19_;

L82_:;
  // r49 = dyn base6(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L19(r49)
  // L19(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L19_;

L83_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l3, r50)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args69);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc4 then L85() else L84(r50, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L85()
    goto L85_;
  } else {
  // L84(r50, dr8)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L84_;
  }

L84_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r56 = dyn ____(l5, r50, 1)
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L20(r56)
  // L20(r56)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r56_;
  goto L20_;

L85_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L20(dx8)
  // L20(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L20_;

D22_:;
  // deopt 98 [NULL, l6, NULL]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 53);
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L86_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r57 = dyn ___[, , `...`, ](l6, NULL, ddd1, NULL)
  SEXP Rsh_Fir_array_args73[4];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args73[3] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L87() else D23()
  // L87()
  goto L87_;

D23_:;
  // deopt 101 [NULL, r57]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L87_:;
  // st m = r57
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L88() else D24()
  // L88()
  goto L88_;

D24_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // p6 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_6, CCP, RHO);
  // p7 = prom<V +>{
  //   parent_frame1 = ldf `parent.frame`;
  //   r59 = dyn parent_frame1();
  //   return r59;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_7, CCP, RHO);
  // r61 = dyn eval1(p6, p7)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L89() else D25()
  // L89()
  goto L89_;

D25_:;
  // deopt 107 [r61]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L89_:;
  // st mf = r61
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L90() else D26()
  // L90()
  goto L90_;

D26_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // p8 = prom<V +>{
  //   sym7 = ldf names;
  //   base7 = ldf names in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r63):
  //   return r63;
  // L1():
  //   mf = ld mf;
  //   mf1 = force? mf;
  //   checkMissing(mf1);
  //   names = ldf names in base;
  //   r64 = dyn names(mf1);
  //   goto L0(r64);
  // L2():
  //   r62 = dyn base7(<sym mf>);
  //   goto L0(r62);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_8, CCP, RHO);
  // r66 = dyn paste[, collapse](p8, " by ")
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L91() else D27()
  // L91()
  goto L91_;

D27_:;
  // deopt 114 [r66]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L91_:;
  // st DNAME = r66
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // l7 = ld mf
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L92() else D28()
  // L92()
  goto L92_;

D28_:;
  // deopt 119 [NULL, l7, NULL]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_const(CCP, 53);
  Rsh_Fir_deopt(119, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L92_:;
  // r67 = dyn names__(l7, NULL, NULL)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L93() else D29()
  // L93()
  goto L93_;

D29_:;
  // deopt 121 [NULL, r67]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L93_:;
  // st mf = r67
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // sym8 = ldf attr
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base8 = ldf attr in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard8 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L94_:;
  // sym9 = ldf attr
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base9 = ldf attr in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard9 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L95_:;
  // r68 = dyn base8(<lang attr(mf, "terms")>, "response")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L21(r68)
  // L21(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L21_;

L96_:;
  // mf2 = ld mf
  Rsh_Fir_reg_mf2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L98() else D30()
  // L98()
  goto L98_;

L97_:;
  // r70 = dyn base9(<sym mf>, "terms")
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L22(r70)
  // L22(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L22_;

D30_:;
  // deopt 127 [mf2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_mf2_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L98_:;
  // mf3 = force? mf2
  Rsh_Fir_reg_mf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf2_);
  // checkMissing(mf3)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_mf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r72 = dyn attr1(mf3, "terms")
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_mf3_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L99() else D31()
  // L99()
  goto L99_;

D31_:;
  // deopt 131 [r72]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L22(r72)
  // L22(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L22_;

D32_:;
  // deopt 134 [r73]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L21(r73)
  // L21(r73)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r73_;
  goto L21_;

D33_:;
  // deopt 136 [oneSampleOrPaired]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_oneSampleOrPaired;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L101_:;
  // oneSampleOrPaired1 = force? oneSampleOrPaired
  Rsh_Fir_reg_oneSampleOrPaired1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oneSampleOrPaired);
  // checkMissing(oneSampleOrPaired1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_oneSampleOrPaired1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r74 = `!`(oneSampleOrPaired1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_oneSampleOrPaired1_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r74)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if c19 then L102() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L102()
    goto L102_;
  } else {
  // L23()
    goto L23_;
  }

L102_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L103() else D34()
  // L103()
  goto L103_;

D34_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

L103_:;
  // p9 = prom<V +>{
  //   mf4 = ld mf;
  //   mf5 = force? mf4;
  //   checkMissing(mf5);
  //   c20 = `is.object`(mf5);
  //   if c20 then L1() else L2(mf5);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[[", mf5);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(mf7):
  //   response = ld response;
  //   response1 = force? response;
  //   checkMissing(response1);
  //   r75 = `-`(<missing>, response1);
  //   __2 = ldf `[[` in base;
  //   r76 = dyn __2(mf7, r75);
  //   goto L0(r76);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_9, CCP, RHO);
  // r78 = dyn factor(p9)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L104() else D35()
  // L104()
  goto L104_;

D35_:;
  // deopt 142 [r78]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L104_:;
  // st g = r78
  Rsh_Fir_store(Rsh_const(CCP, 63), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // nlevels = ldf nlevels
  Rsh_Fir_reg_nlevels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L105() else D36()
  // L105()
  goto L105_;

D36_:;
  // deopt 145 []
  Rsh_Fir_deopt(145, 0, NULL, CCP, RHO);
  return R_NilValue;

L105_:;
  // p10 = prom<V +>{
  //   g = ld g;
  //   g1 = force? g;
  //   checkMissing(g1);
  //   return g1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_10, CCP, RHO);
  // r80 = dyn nlevels(p10)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlevels, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L106() else D37()
  // L106()
  goto L106_;

D37_:;
  // deopt 147 [r80]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L106_:;
  // r81 = `!=`(r80, 2)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c21 then L107() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L107()
    goto L107_;
  } else {
  // L24()
    goto L24_;
  }

L107_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L108() else D38()
  // L108()
  goto L108_;

D38_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

L108_:;
  // r82 = dyn stop3("grouping factor must have exactly 2 levels")
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L109() else D39()
  // L109()
  goto L109_;

D39_:;
  // deopt 153 [r82]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L25()
  // L25()
  goto L25_;

D40_:;
  // deopt 157 []
  Rsh_Fir_deopt(157, 0, NULL, CCP, RHO);
  return R_NilValue;

L111_:;
  // p11 = prom<V +>{
  //   mf8 = ld mf;
  //   mf9 = force? mf8;
  //   checkMissing(mf9);
  //   c22 = `is.object`(mf9);
  //   if c22 then L1() else L2(mf9);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[[", mf9);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(mf11):
  //   response2 = ld response;
  //   response3 = force? response2;
  //   __3 = ldf `[[` in base;
  //   r84 = dyn __3(mf11, response3);
  //   goto L0(r84);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_11, CCP, RHO);
  // p12 = prom<V +>{
  //   g2 = ld g;
  //   g3 = force? g2;
  //   checkMissing(g3);
  //   return g3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_12, CCP, RHO);
  // r87 = dyn split(p11, p12)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L112() else D41()
  // L112()
  goto L112_;

D41_:;
  // deopt 160 [r87]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L112_:;
  // st DATA = r87
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r87_, RHO);
  (void)(Rsh_Fir_reg_r87_);
  // wilcox_test = ldf `wilcox.test`
  Rsh_Fir_reg_wilcox_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L113() else D42()
  // L113()
  goto L113_;

D42_:;
  // deopt 163 []
  Rsh_Fir_deopt(163, 0, NULL, CCP, RHO);
  return R_NilValue;

L113_:;
  // p13 = prom<V +>{
  //   DATA = ld DATA;
  //   DATA1 = force? DATA;
  //   checkMissing(DATA1);
  //   c23 = `is.object`(DATA1);
  //   if c23 then L1() else L2(DATA1);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[[", DATA1);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(DATA3):
  //   __4 = ldf `[[` in base;
  //   r88 = dyn __4(DATA3, 1);
  //   goto L0(r88);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_13, CCP, RHO);
  // p14 = prom<V +>{
  //   DATA4 = ld DATA;
  //   DATA5 = force? DATA4;
  //   checkMissing(DATA5);
  //   c24 = `is.object`(DATA5);
  //   if c24 then L1() else L2(DATA5);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[[", DATA5);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(DATA7):
  //   __5 = ldf `[[` in base;
  //   r90 = dyn __5(DATA7, 2);
  //   goto L0(r90);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_14, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r92 = dyn wilcox_test[x, y, `...`](p13, p14, ddd2)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args125[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_arg_names41[1] = Rsh_const(CCP, 69);
  Rsh_Fir_array_arg_names41[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_wilcox_test, 3, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L114() else D43()
  // L114()
  goto L114_;

D43_:;
  // deopt 169 [r92]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L114_:;
  // st y = r92
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r92_, RHO);
  (void)(Rsh_Fir_reg_r92_);
  // goto L26()
  // L26()
  goto L26_;

D44_:;
  // deopt 171 [mf12]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_mf12_;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L116_:;
  // mf13 = force? mf12
  Rsh_Fir_reg_mf13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf12_);
  // checkMissing(mf13)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_mf13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(mf13)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_mf13_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c25 then L117() else L118(mf13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L117()
    goto L117_;
  } else {
  // L118(mf13)
    Rsh_Fir_reg_mf15_ = Rsh_Fir_reg_mf13_;
    goto L118_;
  }

L117_:;
  // dr18 = tryDispatchBuiltin.1("[[", mf13)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_mf13_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc9 then L119() else L118(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L119()
    goto L119_;
  } else {
  // L118(dr18)
    Rsh_Fir_reg_mf15_ = Rsh_Fir_reg_dr18_;
    goto L118_;
  }

L118_:;
  // response4 = ld response
  Rsh_Fir_reg_response4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L120() else D45()
  // L120()
  goto L120_;

L119_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L27(dx18)
  // L27(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L27_;

D45_:;
  // deopt 173 [mf15, response4]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_mf15_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_response4_;
  Rsh_Fir_deopt(173, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L120_:;
  // response5 = force? response4
  Rsh_Fir_reg_response5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_response4_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r94 = dyn __6(mf15, response5)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_mf15_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_response5_;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L27(r94)
  // L27(r94)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r94_;
  goto L27_;

L121_:;
  // respVar = ld respVar
  Rsh_Fir_reg_respVar = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L123() else D46()
  // L123()
  goto L123_;

L122_:;
  // r95 = dyn base10(<sym respVar>, "Pair")
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L28(r95)
  // L28(r95)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L28_;

D46_:;
  // deopt 179 [respVar]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_respVar;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L123_:;
  // respVar1 = force? respVar
  Rsh_Fir_reg_respVar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_respVar);
  // checkMissing(respVar1)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_respVar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r97 = dyn inherits(respVar1, "Pair", FALSE)
  SEXP Rsh_Fir_array_args134[3];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_respVar1_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args134[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L124() else D47()
  // L124()
  goto L124_;

D47_:;
  // deopt 184 [r97]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L28(r97)
  // L28(r97)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r97_;
  goto L28_;

L125_:;
  // wilcox_test1 = ldf `wilcox.test`
  Rsh_Fir_reg_wilcox_test1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L126() else D48()
  // L126()
  goto L126_;

D48_:;
  // deopt 186 []
  Rsh_Fir_deopt(186, 0, NULL, CCP, RHO);
  return R_NilValue;

L126_:;
  // p15 = prom<V +>{
  //   respVar2 = ld respVar;
  //   respVar3 = force? respVar2;
  //   checkMissing(respVar3);
  //   c27 = `is.object`(respVar3);
  //   if c27 then L1() else L2();
  // L0(dx21):
  //   return dx21;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[", respVar3);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2();
  // L2():
  //   __7 = ldf `[` in base;
  //   r98 = dyn __7(respVar3, <missing>, 1);
  //   goto L0(r98);
  // L3():
  //   dx20 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_15, CCP, RHO);
  // p16 = prom<V +>{
  //   respVar6 = ld respVar;
  //   respVar7 = force? respVar6;
  //   checkMissing(respVar7);
  //   c28 = `is.object`(respVar7);
  //   if c28 then L1() else L2();
  // L0(dx23):
  //   return dx23;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("[", respVar7);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2();
  // L2():
  //   __8 = ldf `[` in base;
  //   r100 = dyn __8(respVar7, <missing>, 2);
  //   goto L0(r100);
  // L3():
  //   dx22 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx22);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_16, CCP, RHO);
  // ddd3 = ld `...`
  Rsh_Fir_reg_ddd3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r102 = dyn wilcox_test1[x, y, paired, `...`](p15, p16, TRUE, ddd3)
  SEXP Rsh_Fir_array_args147[4];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args147[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args147[3] = Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_array_arg_names47[4];
  Rsh_Fir_array_arg_names47[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_arg_names47[1] = Rsh_const(CCP, 69);
  Rsh_Fir_array_arg_names47[2] = Rsh_const(CCP, 71);
  Rsh_Fir_array_arg_names47[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_wilcox_test1_, 4, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L127() else D49()
  // L127()
  goto L127_;

D49_:;
  // deopt 194 [r102]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(194, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L127_:;
  // st y = r102
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r102_, RHO);
  (void)(Rsh_Fir_reg_r102_);
  // goto L26()
  // L26()
  goto L26_;

D50_:;
  // deopt 197 []
  Rsh_Fir_deopt(197, 0, NULL, CCP, RHO);
  return R_NilValue;

L129_:;
  // p17 = prom<V +>{
  //   respVar10 = ld respVar;
  //   respVar11 = force? respVar10;
  //   checkMissing(respVar11);
  //   return respVar11;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2860930212_17, CCP, RHO);
  // ddd4 = ld `...`
  Rsh_Fir_reg_ddd4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r104 = dyn wilcox_test2[x, `...`](p17, ddd4)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_ddd4_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_arg_names48[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_wilcox_test2_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L130() else D51()
  // L130()
  goto L130_;

D51_:;
  // deopt 201 [r104]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L130_:;
  // st y = r104
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r104_, RHO);
  (void)(Rsh_Fir_reg_r104_);
  // goto L26()
  // L26()
  goto L26_;

D52_:;
  // deopt 203 [DNAME]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_DNAME;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L131_:;
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // l8 = ld y
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // c29 = `is.object`(l8)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if c29 then L133() else L134(DNAME1, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L133()
    goto L133_;
  } else {
  // L134(DNAME1, l8)
    Rsh_Fir_reg_DNAME3_ = Rsh_Fir_reg_DNAME1_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L134_;
  }

L132_:;
  // st y = dx25
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L136() else D53()
  // L136()
  goto L136_;

L133_:;
  // dr24 = tryDispatchBuiltin.0("$<-", l8, DNAME1)
  SEXP Rsh_Fir_array_args152[3];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args152[2] = Rsh_Fir_reg_DNAME1_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args152);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc12 then L135() else L134(DNAME1, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L135()
    goto L135_;
  } else {
  // L134(DNAME1, dr24)
    Rsh_Fir_reg_DNAME3_ = Rsh_Fir_reg_DNAME1_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr24_;
    goto L134_;
  }

L134_:;
  // r105 = `$<-`(l10, <sym data.name>, DNAME1)
  SEXP Rsh_Fir_array_args154[3];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args154[2] = Rsh_Fir_reg_DNAME1_;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L132(r105)
  // L132(r105)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r105_;
  goto L132_;

L135_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L132(dx24)
  // L132(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L132_;

D53_:;
  // deopt 208 [y]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L136_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_(SEXP CCP, SEXP RHO) {
  // na_pass = ld `na.pass`
  Rsh_Fir_reg_na_pass = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // na_pass1 = force? na_pass
  Rsh_Fir_reg_na_pass1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_pass);
  // checkMissing(na_pass1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_na_pass1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return na_pass1
  return Rsh_Fir_reg_na_pass1_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf `...names`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base2 = ldf `...names` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // ___names = ldf `...names` in base
  Rsh_Fir_reg____names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r12 = dyn ___names()
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____names, 0, NULL, NULL, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base2()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_2(SEXP CCP, SEXP RHO) {
  // formula3 = ld formula
  Rsh_Fir_reg_formula3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // formula4 = force? formula3
  Rsh_Fir_reg_formula4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula3_);
  // checkMissing(formula4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_formula4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(formula4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_formula4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(formula4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(formula4)
    Rsh_Fir_reg_formula6_ = Rsh_Fir_reg_formula4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", formula4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_formula4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_formula6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r21 = dyn __(formula6, -2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_formula6_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r21_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_3(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(m1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(m1)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_m1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", m1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r35 = `$`(m3, <sym data>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r35_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_4(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // r37 = dyn parent_frame()
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_5(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_6(SEXP CCP, SEXP RHO) {
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_7(SEXP CCP, SEXP RHO) {
  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // r59 = dyn parent_frame1()
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 0, NULL, NULL, CCP, RHO);
  // return r59
  return Rsh_Fir_reg_r59_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_8(SEXP CCP, SEXP RHO) {
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r63
  return Rsh_Fir_reg_r63_;

L1_:;
  // mf = ld mf
  Rsh_Fir_reg_mf = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // mf1 = force? mf
  Rsh_Fir_reg_mf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf);
  // checkMissing(mf1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_mf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r64 = dyn names(mf1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_mf1_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r64)
  // L0(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L0_;

L2_:;
  // r62 = dyn base7(<sym mf>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r62)
  // L0(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_9(SEXP CCP, SEXP RHO) {
  // mf4 = ld mf
  Rsh_Fir_reg_mf4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // mf5 = force? mf4
  Rsh_Fir_reg_mf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf4_);
  // checkMissing(mf5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_mf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(mf5)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_mf5_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c20 then L1() else L2(mf5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf5)
    Rsh_Fir_reg_mf7_ = Rsh_Fir_reg_mf5_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[[", mf5)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_mf5_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_mf7_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // response = ld response
  Rsh_Fir_reg_response = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // response1 = force? response
  Rsh_Fir_reg_response1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_response);
  // checkMissing(response1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_response1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r75 = `-`(<missing>, response1)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_response1_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r76 = dyn __2(mf7, r75)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_mf7_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r76)
  // L0(r76)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r76_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_10(SEXP CCP, SEXP RHO) {
  // g = ld g
  Rsh_Fir_reg_g = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // g1 = force? g
  Rsh_Fir_reg_g1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_g);
  // checkMissing(g1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_g1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // return g1
  return Rsh_Fir_reg_g1_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_11(SEXP CCP, SEXP RHO) {
  // mf8 = ld mf
  Rsh_Fir_reg_mf8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // mf9 = force? mf8
  Rsh_Fir_reg_mf9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf8_);
  // checkMissing(mf9)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_mf9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(mf9)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_mf9_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c22 then L1() else L2(mf9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf9)
    Rsh_Fir_reg_mf11_ = Rsh_Fir_reg_mf9_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[[", mf9)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_mf9_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_mf11_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // response2 = ld response
  Rsh_Fir_reg_response2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // response3 = force? response2
  Rsh_Fir_reg_response3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_response2_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r84 = dyn __3(mf11, response3)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_mf11_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_response3_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r84)
  // L0(r84)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r84_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_12(SEXP CCP, SEXP RHO) {
  // g2 = ld g
  Rsh_Fir_reg_g2_ = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // g3 = force? g2
  Rsh_Fir_reg_g3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_g2_);
  // checkMissing(g3)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_g3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return g3
  return Rsh_Fir_reg_g3_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_13(SEXP CCP, SEXP RHO) {
  // DATA = ld DATA
  Rsh_Fir_reg_DATA = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // DATA1 = force? DATA
  Rsh_Fir_reg_DATA1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DATA);
  // checkMissing(DATA1)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_DATA1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(DATA1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_DATA1_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c23 then L1() else L2(DATA1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L1()
    goto L1_;
  } else {
  // L2(DATA1)
    Rsh_Fir_reg_DATA3_ = Rsh_Fir_reg_DATA1_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[[", DATA1)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_DATA1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args115);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_DATA3_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r88 = dyn __4(DATA3, 1)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_DATA3_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r88)
  // L0(r88)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r88_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_14(SEXP CCP, SEXP RHO) {
  // DATA4 = ld DATA
  Rsh_Fir_reg_DATA4_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // DATA5 = force? DATA4
  Rsh_Fir_reg_DATA5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DATA4_);
  // checkMissing(DATA5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_DATA5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(DATA5)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_DATA5_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if c24 then L1() else L2(DATA5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L1()
    goto L1_;
  } else {
  // L2(DATA5)
    Rsh_Fir_reg_DATA7_ = Rsh_Fir_reg_DATA5_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[[", DATA5)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_DATA5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_DATA7_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r90 = dyn __5(DATA7, 2)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_DATA7_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r90)
  // L0(r90)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r90_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_15(SEXP CCP, SEXP RHO) {
  // respVar2 = ld respVar
  Rsh_Fir_reg_respVar2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // respVar3 = force? respVar2
  Rsh_Fir_reg_respVar3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_respVar2_);
  // checkMissing(respVar3)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_respVar3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(respVar3)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_respVar3_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if c27 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[", respVar3)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_respVar3_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args137);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r98 = dyn __7(respVar3, <missing>, 1)
  SEXP Rsh_Fir_array_args139[3];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_respVar3_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args139[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 3, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r98)
  // L0(r98)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r98_;
  goto L0_;

L3_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_16(SEXP CCP, SEXP RHO) {
  // respVar6 = ld respVar
  Rsh_Fir_reg_respVar6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // respVar7 = force? respVar6
  Rsh_Fir_reg_respVar7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_respVar6_);
  // checkMissing(respVar7)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_respVar7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(respVar7)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_respVar7_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c28 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx23
  return Rsh_Fir_reg_dx23_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("[", respVar7)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_respVar7_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args143);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r100 = dyn __8(respVar7, <missing>, 2)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_respVar7_;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args145[2] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 3, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r100)
  // L0(r100)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r100_;
  goto L0_;

L3_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2860930212_17(SEXP CCP, SEXP RHO) {
  // respVar10 = ld respVar
  Rsh_Fir_reg_respVar10_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // respVar11 = force? respVar10
  Rsh_Fir_reg_respVar11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_respVar10_);
  // checkMissing(respVar11)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_respVar11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return respVar11
  return Rsh_Fir_reg_respVar11_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
