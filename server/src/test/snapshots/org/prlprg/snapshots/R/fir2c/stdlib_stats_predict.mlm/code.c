#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2786829008_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2786829008_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2786829008_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2786829008_18(SEXP CCP, SEXP RHO);
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
  // r = clos inner2786829008
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2786829008_, RHO, CCP);
  // st `predict.mlm` = r
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
SEXP Rsh_Fir_user_function_inner2786829008_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2786829008 dynamic dispatch ([object, newdata, `se.fit`, `na.action`, `...`])

  return Rsh_Fir_user_version_inner2786829008_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2786829008_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2786829008 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2786829008/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_newdata;  // newdata
  SEXP Rsh_Fir_reg_se_fit;  // se_fit
  SEXP Rsh_Fir_reg_na_action;  // na_action
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_se_fit_isMissing;  // se_fit_isMissing
  SEXP Rsh_Fir_reg_se_fit_orDefault;  // se_fit_orDefault
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
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_se_fit1_;  // se_fit1
  SEXP Rsh_Fir_reg_se_fit2_;  // se_fit2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_model_matrix;  // model_matrix
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_terms;  // terms
  SEXP Rsh_Fir_reg_object11_;  // object11
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_delete_response;  // delete_response
  SEXP Rsh_Fir_reg_tt;  // tt
  SEXP Rsh_Fir_reg_tt1_;  // tt1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_model_frame;  // model_frame
  SEXP Rsh_Fir_reg_Terms;  // Terms
  SEXP Rsh_Fir_reg_Terms1_;  // Terms1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_newdata1_;  // newdata1
  SEXP Rsh_Fir_reg_newdata2_;  // newdata2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_na_action1_;  // na_action1
  SEXP Rsh_Fir_reg_na_action2_;  // na_action2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_Terms2_;  // Terms2
  SEXP Rsh_Fir_reg_Terms3_;  // Terms3
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg__checkMFClasses;  // _checkMFClasses
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_model_matrix1_;  // model_matrix1
  SEXP Rsh_Fir_reg_Terms4_;  // Terms4
  SEXP Rsh_Fir_reg_Terms5_;  // Terms5
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_tt2_;  // tt2
  SEXP Rsh_Fir_reg_tt3_;  // tt3
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_tt4_;  // tt4
  SEXP Rsh_Fir_reg_tt5_;  // tt5
  SEXP Rsh_Fir_reg_attr2_;  // attr2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_off_num;  // off_num
  SEXP Rsh_Fir_reg_off_num1_;  // off_num1
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_newdata3_;  // newdata3
  SEXP Rsh_Fir_reg_newdata4_;  // newdata4
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_object21_;  // object21
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_eval1_;  // eval1
  SEXP Rsh_Fir_reg_object25_;  // object25
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_newdata5_;  // newdata5
  SEXP Rsh_Fir_reg_newdata6_;  // newdata6
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_qr_lm;  // qr_lm
  SEXP Rsh_Fir_reg_object29_;  // object29
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_seq;  // seq
  SEXP Rsh_Fir_reg_object31_;  // object31
  SEXP Rsh_Fir_reg_object32_;  // object32
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_object34_;  // object34
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_piv;  // piv
  SEXP Rsh_Fir_reg_piv1_;  // piv1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_object35_;  // object35
  SEXP Rsh_Fir_reg_object36_;  // object36
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_object38_;  // object38
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_piv2_;  // piv2
  SEXP Rsh_Fir_reg_piv3_;  // piv3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_offset;  // offset
  SEXP Rsh_Fir_reg_offset1_;  // offset1
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_pred;  // pred
  SEXP Rsh_Fir_reg_pred1_;  // pred1
  SEXP Rsh_Fir_reg_offset2_;  // offset2
  SEXP Rsh_Fir_reg_offset3_;  // offset3
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_object39_;  // object39
  SEXP Rsh_Fir_reg_object40_;  // object40
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_pred2_;  // pred2
  SEXP Rsh_Fir_reg_pred3_;  // pred3
  SEXP Rsh_Fir_reg_pred4_;  // pred4
  SEXP Rsh_Fir_reg_pred5_;  // pred5
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r87_;  // r87

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_newdata = PARAMS[1];
  Rsh_Fir_reg_se_fit = PARAMS[2];
  Rsh_Fir_reg_na_action = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st newdata = newdata
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_newdata, RHO);
  (void)(Rsh_Fir_reg_newdata);
  // se_fit_isMissing = missing.0(se_fit)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_se_fit;
  Rsh_Fir_reg_se_fit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if se_fit_isMissing then L0(FALSE) else L0(se_fit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_se_fit_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_se_fit_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(se_fit)
    Rsh_Fir_reg_se_fit_orDefault = Rsh_Fir_reg_se_fit;
    goto L0_;
  }

L0_:;
  // st `se.fit` = se_fit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_se_fit_orDefault, RHO);
  (void)(Rsh_Fir_reg_se_fit_orDefault);
  // na_action_isMissing = missing.0(na_action)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_na_action;
  Rsh_Fir_reg_na_action_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if na_action_isMissing then L1() else L2(na_action)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_action_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(na_action)
    Rsh_Fir_reg_na_action_orDefault = Rsh_Fir_reg_na_action;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   na_pass = ld `na.pass`;
  //   na_pass1 = force? na_pass;
  //   checkMissing(na_pass1);
  //   return na_pass1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_na_action_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st `na.action` = na_action_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_na_action_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_action_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L3_:;
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L32() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L32()
    goto L32_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // se_fit1 = ld `se.fit`
  Rsh_Fir_reg_se_fit1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L40() else D1()
  // L40()
  goto L40_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L8_:;
  // c3 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c3 then L47() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L47()
    goto L47_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // terms = ldf terms
  Rsh_Fir_reg_terms = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L56() else D7()
  // L56()
  goto L56_;

L10_:;
  // qr_lm = ldf `qr.lm`
  Rsh_Fir_reg_qr_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L95() else D26()
  // L95()
  goto L95_;

L11_:;
  // r30 = `!`(r26)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c7 then L68() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L68()
    goto L68_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // st cl = r28
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // c6 = `==`(r28, NULL)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L11(c6)
  // L11(c6)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c6_;
  goto L11_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // model_matrix1 = ldf `model.matrix`
  Rsh_Fir_reg_model_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L72() else D17()
  // L72()
  goto L72_;

L15_:;
  // r45 = `!`(r41)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c10 then L80() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L80()
    goto L80_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // st `off.num` = r43
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // c9 = `==`(r43, NULL)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L15(c9)
  // L15(c9)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_c9_;
  goto L15_;

L17_:;
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard7 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L18_:;
  // st offset = r56
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // goto L10()
  // L10()
  goto L10_;

L19_:;
  // r60 = `!`(r58)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c14 then L91() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L91()
    goto L91_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L18(NULL)
  // L18(NULL)
  Rsh_Fir_reg_r56_ = Rsh_const(CCP, 12);
  goto L18_;

L21_:;
  // st piv = dx24
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx24_, RHO);
  (void)(Rsh_Fir_reg_dx24_);
  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L106() else D30()
  // L106()
  goto L106_;

L22_:;
  // object35 = ld object
  Rsh_Fir_reg_object35_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L111() else D32()
  // L111()
  goto L111_;

L23_:;
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r78 = dyn ___(dx28, dx34)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_dx34_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L120() else D34()
  // L120()
  goto L120_;

L24_:;
  // r81 = `!`(r80)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c24 then L124() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L124()
    goto L124_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // sym9 = ldf inherits
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base9 = ldf inherits in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard9 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L27_:;
  // c25 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c25 then L132() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L132()
    goto L132_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // pred4 = ld pred
  Rsh_Fir_reg_pred4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L135() else D41()
  // L135()
  goto L135_;

L29_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx36
  return Rsh_Fir_reg_dx36_;

L30_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r3 = dyn missing(<sym newdata>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L3_;

L31_:;
  // r1 = dyn base(<sym newdata>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r1)
  // L3(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L3_;

L32_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D0()
  // L33()
  goto L33_;

D0_:;
  // deopt 3 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L33_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L36(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L36(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L36_;
  }

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L35_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L36_;
  }

L36_:;
  // r4 = `$`(object4, <sym fitted.values>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L34(r4)
  // L34(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L34_;

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L34(dx)
  // L34(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L34_;

D1_:;
  // deopt 9 [se_fit1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_se_fit1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L40_:;
  // se_fit2 = force? se_fit1
  Rsh_Fir_reg_se_fit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_se_fit1_);
  // checkMissing(se_fit2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_se_fit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(se_fit2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_se_fit2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c2 then L41() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L6()
    goto L6_;
  }

L41_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L42() else D2()
  // L42()
  goto L42_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // r7 = dyn stop("the 'se.fit' argument is not yet implemented for \"mlm\" objects")
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L43() else D3()
  // L43()
  goto L43_;

D3_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L7()
  // L7()
  goto L7_;

L45_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r11 = dyn missing1(<sym newdata>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L8(r11)
  // L8(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L8_;

L46_:;
  // r9 = dyn base1(<sym newdata>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L8(r9)
  // L8(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L8_;

L47_:;
  // model_matrix = ldf `model.matrix`
  Rsh_Fir_reg_model_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L48() else D4()
  // L48()
  goto L48_;

D4_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p1 = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   return object6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_1, CCP, RHO);
  // r13 = dyn model_matrix(p1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_matrix, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L49() else D5()
  // L49()
  goto L49_;

D5_:;
  // deopt 23 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L49_:;
  // st X = r13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D6()
  // L50()
  goto L50_;

D6_:;
  // deopt 25 [object7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L50_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(object8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c4 then L52() else L53(object8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L52()
    goto L52_;
  } else {
  // L53(object8)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_object8_;
    goto L53_;
  }

L51_:;
  // st offset = dx3
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L10()
  // L10()
  goto L10_;

L52_:;
  // dr2 = tryDispatchBuiltin.1("$", object8)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc1 then L54() else L53(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L54()
    goto L54_;
  } else {
  // L53(dr2)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_dr2_;
    goto L53_;
  }

L53_:;
  // r14 = `$`(object10, <sym offset>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L51(r14)
  // L51(r14)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L51_;

L54_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L51(dx2)
  // L51(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L51_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p2 = prom<V +>{
  //   object11 = ld object;
  //   object12 = force? object11;
  //   checkMissing(object12);
  //   return object12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_2, CCP, RHO);
  // r16 = dyn terms(p2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L57() else D8()
  // L57()
  goto L57_;

D8_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L57_:;
  // st tt = r16
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // delete_response = ldf `delete.response`
  Rsh_Fir_reg_delete_response = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L58() else D9()
  // L58()
  goto L58_;

D9_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p3 = prom<V +>{
  //   tt = ld tt;
  //   tt1 = force? tt;
  //   checkMissing(tt1);
  //   return tt1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_3, CCP, RHO);
  // r18 = dyn delete_response(p3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_delete_response, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L59() else D10()
  // L59()
  goto L59_;

D10_:;
  // deopt 37 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L59_:;
  // st Terms = r18
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // model_frame = ldf `model.frame`
  Rsh_Fir_reg_model_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L60() else D11()
  // L60()
  goto L60_;

D11_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p4 = prom<V +>{
  //   Terms = ld Terms;
  //   Terms1 = force? Terms;
  //   checkMissing(Terms1);
  //   return Terms1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_4, CCP, RHO);
  // p5 = prom<V +>{
  //   newdata1 = ld newdata;
  //   newdata2 = force? newdata1;
  //   checkMissing(newdata2);
  //   return newdata2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_5, CCP, RHO);
  // p6 = prom<V +>{
  //   na_action1 = ld `na.action`;
  //   na_action2 = force? na_action1;
  //   checkMissing(na_action2);
  //   return na_action2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_6, CCP, RHO);
  // p7 = prom<V +>{
  //   object13 = ld object;
  //   object14 = force? object13;
  //   checkMissing(object14);
  //   c5 = `is.object`(object14);
  //   if c5 then L1() else L2(object14);
  // L0(dx6):
  //   return dx6;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", object14);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(object16):
  //   r22 = `$`(object16, <sym xlevels>);
  //   goto L0(r22);
  // L3():
  //   dx5 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx5);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_7, CCP, RHO);
  // r24 = dyn model_frame[, , `na.action`, xlev](p4, p5, p6, p7)
  SEXP Rsh_Fir_array_args55[4];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args55[3] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_frame, 4, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L61() else D12()
  // L61()
  goto L61_;

D12_:;
  // deopt 47 [r24]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L61_:;
  // st m = r24
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard2 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L62_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard3 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L63_:;
  // r25 = dyn base2(<lang `<-`(cl, attr(Terms, "dataClasses"))>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

L64_:;
  // Terms2 = ld Terms
  Rsh_Fir_reg_Terms2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L66() else D13()
  // L66()
  goto L66_;

L65_:;
  // r27 = dyn base3(<sym Terms>, "dataClasses")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

D13_:;
  // deopt 52 [Terms2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_Terms2_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L66_:;
  // Terms3 = force? Terms2
  Rsh_Fir_reg_Terms3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Terms2_);
  // checkMissing(Terms3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_Terms3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r29 = dyn attr(Terms3, "dataClasses")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_Terms3_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L67() else D14()
  // L67()
  goto L67_;

D14_:;
  // deopt 56 [r29]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L12(r29)
  // L12(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L12_;

L68_:;
  // _checkMFClasses = ldf `.checkMFClasses`
  Rsh_Fir_reg__checkMFClasses = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L69() else D15()
  // L69()
  goto L69_;

D15_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p8 = prom<V +>{
  //   cl = ld cl;
  //   cl1 = force? cl;
  //   checkMissing(cl1);
  //   return cl1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_8, CCP, RHO);
  // p9 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_9, CCP, RHO);
  // r33 = dyn _checkMFClasses(p8, p9)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__checkMFClasses, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L70() else D16()
  // L70()
  goto L70_;

D16_:;
  // deopt 64 [r33]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L14()
  // L14()
  goto L14_;

D17_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // p10 = prom<V +>{
  //   Terms4 = ld Terms;
  //   Terms5 = force? Terms4;
  //   checkMissing(Terms5);
  //   return Terms5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_10, CCP, RHO);
  // p11 = prom<V +>{
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   return m3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_11, CCP, RHO);
  // p12 = prom<V +>{
  //   object17 = ld object;
  //   object18 = force? object17;
  //   checkMissing(object18);
  //   c8 = `is.object`(object18);
  //   if c8 then L1() else L2(object18);
  // L0(dx8):
  //   return dx8;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", object18);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(object20):
  //   r37 = `$`(object20, <sym contrasts>);
  //   goto L0(r37);
  // L3():
  //   dx7 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx7);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_12, CCP, RHO);
  // r39 = dyn model_matrix1[, , `contrasts.arg`](p10, p11, p12)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_matrix1_, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L73() else D18()
  // L73()
  goto L73_;

D18_:;
  // deopt 73 [r39]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L73_:;
  // st X = r39
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard4 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard5 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L75_:;
  // r40 = dyn base4(<lang `<-`(off.num, attr(tt, "offset"))>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(r40)
  // L15(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L15_;

L76_:;
  // tt2 = ld tt
  Rsh_Fir_reg_tt2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L78() else D19()
  // L78()
  goto L78_;

L77_:;
  // r42 = dyn base5(<sym tt>, "offset")
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L16(r42)
  // L16(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L16_;

D19_:;
  // deopt 78 [tt2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_tt2_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L78_:;
  // tt3 = force? tt2
  Rsh_Fir_reg_tt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt2_);
  // checkMissing(tt3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_tt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r44 = dyn attr1(tt3, "offset")
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L79() else D20()
  // L79()
  goto L79_;

D20_:;
  // deopt 82 [r44]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L16(r44)
  // L16(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L16_;

L80_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L81() else D21()
  // L81()
  goto L81_;

D21_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p13 = prom<V +>{
  //   sym6 = ldf attr;
  //   base6 = ldf attr in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L2() else L3();
  // L0(r47):
  //   c11 = `is.object`(r47);
  //   if c11 then L4() else L5(r47);
  // L2():
  //   tt4 = ld tt;
  //   tt5 = force? tt4;
  //   checkMissing(tt5);
  //   attr2 = ldf attr in base;
  //   r48 = dyn attr2(tt5, "variables");
  //   goto L0(r48);
  // L3():
  //   r46 = dyn base6(<sym tt>, "variables");
  //   goto L0(r46);
  // L1(dx10):
  //   return dx10;
  // L4():
  //   dr8 = tryDispatchBuiltin.1("[[", r47);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L6() else L5(dr8);
  // L5(r50):
  //   off_num = ld `off.num`;
  //   off_num1 = force? off_num;
  //   checkMissing(off_num1);
  //   r51 = `+`(off_num1, 1.0);
  //   __ = ldf `[[` in base;
  //   r52 = dyn __(r50, r51);
  //   goto L1(r52);
  // L6():
  //   dx9 = getTryDispatchBuiltinValue(dr8);
  //   goto L1(dx9);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_13, CCP, RHO);
  // p14 = prom<V +>{
  //   newdata3 = ld newdata;
  //   newdata4 = force? newdata3;
  //   checkMissing(newdata4);
  //   return newdata4;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_14, CCP, RHO);
  // r55 = dyn eval(p13, p14)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L82() else D22()
  // L82()
  goto L82_;

D22_:;
  // deopt 90 [r55]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L18(r55)
  // L18(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L18_;

L84_:;
  // object21 = ld object
  Rsh_Fir_reg_object21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L86() else D23()
  // L86()
  goto L86_;

L85_:;
  // r57 = dyn base7(<lang `$`(object, offset)>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L19(r57)
  // L19(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L19_;

D23_:;
  // deopt 92 [object21]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_object21_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L86_:;
  // object22 = force? object21
  Rsh_Fir_reg_object22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object21_);
  // checkMissing(object22)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_object22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(object22)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if c12 then L88() else L89(object22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L88()
    goto L88_;
  } else {
  // L89(object22)
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_object22_;
    goto L89_;
  }

L87_:;
  // c13 = `==`(dx12, NULL)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L19(c13)
  // L19(c13)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_c13_;
  goto L19_;

L88_:;
  // dr10 = tryDispatchBuiltin.1("$", object22)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc5 then L90() else L89(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L90()
    goto L90_;
  } else {
  // L89(dr10)
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_dr10_;
    goto L89_;
  }

L89_:;
  // r59 = `$`(object24, <sym offset>)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L87(r59)
  // L87(r59)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r59_;
  goto L87_;

L90_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L87(dx11)
  // L87(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L87_;

L91_:;
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L92() else D24()
  // L92()
  goto L92_;

D24_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // p15 = prom<V +>{
  //   object25 = ld object;
  //   object26 = force? object25;
  //   checkMissing(object26);
  //   c15 = `is.object`(object26);
  //   if c15 then L1() else L2(object26);
  // L0(dx14):
  //   c16 = `is.object`(dx14);
  //   if c16 then L5() else L6(dx14);
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", object26);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(object28):
  //   r61 = `$`(object28, <sym call>);
  //   goto L0(r61);
  // L3():
  //   dx13 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx13);
  // L4(dx18):
  //   return dx18;
  // L5():
  //   dr14 = tryDispatchBuiltin.1("$", dx14);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L7() else L6(dr14);
  // L6(dx16):
  //   r62 = `$`(dx16, <sym offset>);
  //   goto L4(r62);
  // L7():
  //   dx17 = getTryDispatchBuiltinValue(dr14);
  //   goto L4(dx17);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_15, CCP, RHO);
  // p16 = prom<V +>{
  //   newdata5 = ld newdata;
  //   newdata6 = force? newdata5;
  //   checkMissing(newdata6);
  //   return newdata6;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_16, CCP, RHO);
  // r65 = dyn eval1(p15, p16)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L93() else D25()
  // L93()
  goto L93_;

D25_:;
  // deopt 101 [r65]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L18(r65)
  // L18(r65)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r65_;
  goto L18_;

D26_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // p17 = prom<V +>{
  //   object29 = ld object;
  //   object30 = force? object29;
  //   checkMissing(object30);
  //   return object30;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_17, CCP, RHO);
  // r67 = dyn qr_lm(p17)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_lm, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L96() else D27()
  // L96()
  goto L96_;

D27_:;
  // deopt 108 [r67]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L96_:;
  // c17 = `is.object`(r67)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c17 then L98() else L99(r67)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L98()
    goto L98_;
  } else {
  // L99(r67)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r67_;
    goto L99_;
  }

L97_:;
  // c18 = `is.object`(dx20)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c18 then L101() else L102(dx20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L101()
    goto L101_;
  } else {
  // L102(dx20)
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx20_;
    goto L102_;
  }

L98_:;
  // dr16 = tryDispatchBuiltin.1("$", r67)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args118);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc8 then L100() else L99(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L100()
    goto L100_;
  } else {
  // L99(dr16)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_dr16_;
    goto L99_;
  }

L99_:;
  // r70 = `$`(r69, <sym pivot>)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L97(r70)
  // L97(r70)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r70_;
  goto L97_;

L100_:;
  // dx19 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L97(dx19)
  // L97(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L97_;

L101_:;
  // dr18 = tryDispatchBuiltin.1("[", dx20)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args122);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if dc9 then L103() else L102(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L103()
    goto L103_;
  } else {
  // L102(dr18)
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dr18_;
    goto L102_;
  }

L102_:;
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L104() else D28()
  // L104()
  goto L104_;

L103_:;
  // dx23 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L21(dx23)
  // L21(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L21_;

D28_:;
  // deopt 111 [dx22]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L104_:;
  // p18 = prom<V +>{
  //   object31 = ld object;
  //   object32 = force? object31;
  //   checkMissing(object32);
  //   c19 = `is.object`(object32);
  //   if c19 then L1() else L2(object32);
  // L0(dx26):
  //   return dx26;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("$", object32);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(object34):
  //   r71 = `$`(object34, <sym rank>);
  //   goto L0(r71);
  // L3():
  //   dx25 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx25);
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2786829008_18, CCP, RHO);
  // r73 = dyn seq(p18)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L105() else D29()
  // L105()
  goto L105_;

D29_:;
  // deopt 113 [dx22, r73]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L105_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r74 = dyn __1(dx22, r73)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L21(r74)
  // L21(r74)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r74_;
  goto L21_;

D30_:;
  // deopt 117 [X]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_X;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L106_:;
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(X1)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c20 then L107() else L108(X1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L107()
    goto L107_;
  } else {
  // L108(X1)
    Rsh_Fir_reg_X3_ = Rsh_Fir_reg_X1_;
    goto L108_;
  }

L107_:;
  // dr22 = tryDispatchBuiltin.1("[", X1)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_X1_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc11 then L109() else L108(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L109()
    goto L109_;
  } else {
  // L108(dr22)
    Rsh_Fir_reg_X3_ = Rsh_Fir_reg_dr22_;
    goto L108_;
  }

L108_:;
  // piv = ld piv
  Rsh_Fir_reg_piv = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L110() else D31()
  // L110()
  goto L110_;

L109_:;
  // dx27 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L22(dx27)
  // L22(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L22_;

D31_:;
  // deopt 120 [X3, piv]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_X3_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_piv;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L110_:;
  // piv1 = force? piv
  Rsh_Fir_reg_piv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_piv);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r75 = dyn __2(X1, <missing>, piv1, FALSE)
  SEXP Rsh_Fir_array_args138[4];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args138[2] = Rsh_Fir_reg_piv1_;
  Rsh_Fir_array_args138[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 4, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L22(r75)
  // L22(r75)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r75_;
  goto L22_;

D32_:;
  // deopt 126 [object35]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_object35_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L111_:;
  // object36 = force? object35
  Rsh_Fir_reg_object36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object35_);
  // checkMissing(object36)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_object36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(object36)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_object36_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c21 then L113() else L114(object36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L113()
    goto L113_;
  } else {
  // L114(object36)
    Rsh_Fir_reg_object38_ = Rsh_Fir_reg_object36_;
    goto L114_;
  }

L112_:;
  // c22 = `is.object`(dx30)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if c22 then L116() else L117(dx30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L116()
    goto L116_;
  } else {
  // L117(dx30)
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx30_;
    goto L117_;
  }

L113_:;
  // dr24 = tryDispatchBuiltin.1("$", object36)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_object36_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args142);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc12 then L115() else L114(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L115()
    goto L115_;
  } else {
  // L114(dr24)
    Rsh_Fir_reg_object38_ = Rsh_Fir_reg_dr24_;
    goto L114_;
  }

L114_:;
  // r76 = `$`(object38, <sym coefficients>)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_object38_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L112(r76)
  // L112(r76)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r76_;
  goto L112_;

L115_:;
  // dx29 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L112(dx29)
  // L112(dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L112_;

L116_:;
  // dr26 = tryDispatchBuiltin.1("[", dx30)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args146);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if dc13 then L118() else L117(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L118()
    goto L118_;
  } else {
  // L117(dr26)
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dr26_;
    goto L117_;
  }

L117_:;
  // piv2 = ld piv
  Rsh_Fir_reg_piv2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L119() else D33()
  // L119()
  goto L119_;

L118_:;
  // dx33 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L23(dx33)
  // L23(dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L23_;

D33_:;
  // deopt 129 [dx32, piv2]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_piv2_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L119_:;
  // piv3 = force? piv2
  Rsh_Fir_reg_piv3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_piv2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r77 = dyn __3(dx30, piv3, <missing>)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_piv3_;
  Rsh_Fir_array_args149[2] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L23(r77)
  // L23(r77)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r77_;
  goto L23_;

D34_:;
  // deopt 135 [r78]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L120_:;
  // st pred = r78
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args150);
  // if guard8 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L121_:;
  // offset = ld offset
  Rsh_Fir_reg_offset = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L123() else D35()
  // L123()
  goto L123_;

L122_:;
  // r79 = dyn base8(<sym offset>)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L24(r79)
  // L24(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L24_;

D35_:;
  // deopt 138 [offset]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_offset;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L123_:;
  // offset1 = force? offset
  Rsh_Fir_reg_offset1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset);
  // checkMissing(offset1)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_offset1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // c23 = `==`(offset1, NULL)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_offset1_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L24(c23)
  // L24(c23)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_c23_;
  goto L24_;

L124_:;
  // pred = ld pred
  Rsh_Fir_reg_pred = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L125() else D36()
  // L125()
  goto L125_;

D36_:;
  // deopt 142 [pred]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_pred;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L125_:;
  // pred1 = force? pred
  Rsh_Fir_reg_pred1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pred);
  // checkMissing(pred1)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_pred1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // offset2 = ld offset
  Rsh_Fir_reg_offset2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L126() else D37()
  // L126()
  goto L126_;

D37_:;
  // deopt 143 [pred1, offset2]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_pred1_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_offset2_;
  Rsh_Fir_deopt(143, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L126_:;
  // offset3 = force? offset2
  Rsh_Fir_reg_offset3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset2_);
  // checkMissing(offset3)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_offset3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // r82 = `+`(pred1, offset3)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_pred1_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_offset3_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // st pred = r82
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // goto L26()
  // L26()
  goto L26_;

L128_:;
  // object39 = ld object
  Rsh_Fir_reg_object39_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L130() else D38()
  // L130()
  goto L130_;

L129_:;
  // r84 = dyn base9(<sym object>, "mlm")
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L27(r84)
  // L27(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L27_;

D38_:;
  // deopt 151 [object39]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_object39_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L130_:;
  // object40 = force? object39
  Rsh_Fir_reg_object40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object39_);
  // checkMissing(object40)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_object40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r86 = dyn inherits(object40, "mlm", FALSE)
  SEXP Rsh_Fir_array_args159[3];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_object40_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args159[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L131() else D39()
  // L131()
  goto L131_;

D39_:;
  // deopt 156 [r86]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L27(r86)
  // L27(r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_;
  goto L27_;

L132_:;
  // pred2 = ld pred
  Rsh_Fir_reg_pred2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L133() else D40()
  // L133()
  goto L133_;

D40_:;
  // deopt 157 [pred2]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_pred2_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L133_:;
  // pred3 = force? pred2
  Rsh_Fir_reg_pred3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pred2_);
  // checkMissing(pred3)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_pred3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return pred3
  return Rsh_Fir_reg_pred3_;

D41_:;
  // deopt 159 [pred4]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_pred4_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L135_:;
  // pred5 = force? pred4
  Rsh_Fir_reg_pred5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pred4_);
  // checkMissing(pred5)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_pred5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(pred5)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_pred5_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // if c26 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L136_:;
  // dr28 = tryDispatchBuiltin.1("[", pred5)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_pred5_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args163);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // if dc14 then L138() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L138()
    goto L138_;
  } else {
  // L137()
    goto L137_;
  }

L137_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r87 = dyn __4(pred5, <missing>, 1)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_pred5_;
  Rsh_Fir_array_args165[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args165[2] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L29(r87)
  // L29(r87)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r87_;
  goto L29_;

L138_:;
  // dx35 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // goto L29(dx35)
  // L29(dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L29_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_(SEXP CCP, SEXP RHO) {
  // na_pass = ld `na.pass`
  Rsh_Fir_reg_na_pass = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // na_pass1 = force? na_pass
  Rsh_Fir_reg_na_pass1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_pass);
  // checkMissing(na_pass1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_na_pass1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return na_pass1
  return Rsh_Fir_reg_na_pass1_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_1(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return object6
  return Rsh_Fir_reg_object6_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_2(SEXP CCP, SEXP RHO) {
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return object12
  return Rsh_Fir_reg_object12_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_3(SEXP CCP, SEXP RHO) {
  // tt = ld tt
  Rsh_Fir_reg_tt = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // tt1 = force? tt
  Rsh_Fir_reg_tt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt);
  // checkMissing(tt1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_tt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return tt1
  return Rsh_Fir_reg_tt1_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_4(SEXP CCP, SEXP RHO) {
  // Terms = ld Terms
  Rsh_Fir_reg_Terms = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // Terms1 = force? Terms
  Rsh_Fir_reg_Terms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Terms);
  // checkMissing(Terms1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_Terms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return Terms1
  return Rsh_Fir_reg_Terms1_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_5(SEXP CCP, SEXP RHO) {
  // newdata1 = ld newdata
  Rsh_Fir_reg_newdata1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // newdata2 = force? newdata1
  Rsh_Fir_reg_newdata2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdata1_);
  // checkMissing(newdata2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_newdata2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return newdata2
  return Rsh_Fir_reg_newdata2_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_6(SEXP CCP, SEXP RHO) {
  // na_action1 = ld `na.action`
  Rsh_Fir_reg_na_action1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // na_action2 = force? na_action1
  Rsh_Fir_reg_na_action2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_action1_);
  // checkMissing(na_action2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_na_action2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return na_action2
  return Rsh_Fir_reg_na_action2_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_7(SEXP CCP, SEXP RHO) {
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(object14)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L2_;
  }

L0_:;
  // return dx6
  return Rsh_Fir_reg_dx6_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r22 = `$`(object16, <sym xlevels>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r22_;
  goto L0_;

L3_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L0(dx5)
  // L0(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_8(SEXP CCP, SEXP RHO) {
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return cl1
  return Rsh_Fir_reg_cl1_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_9(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_10(SEXP CCP, SEXP RHO) {
  // Terms4 = ld Terms
  Rsh_Fir_reg_Terms4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // Terms5 = force? Terms4
  Rsh_Fir_reg_Terms5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Terms4_);
  // checkMissing(Terms5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_Terms5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return Terms5
  return Rsh_Fir_reg_Terms5_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_11(SEXP CCP, SEXP RHO) {
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return m3
  return Rsh_Fir_reg_m3_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_12(SEXP CCP, SEXP RHO) {
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(object18)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object18)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L2_;
  }

L0_:;
  // return dx8
  return Rsh_Fir_reg_dx8_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r37 = `$`(object20, <sym contrasts>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r37_;
  goto L0_;

L3_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L0(dx7)
  // L0(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_13(SEXP CCP, SEXP RHO) {
  // sym6 = ldf attr
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base6 = ldf attr in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard6 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c11 = `is.object`(r47)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c11 then L4() else L5(r47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L4()
    goto L4_;
  } else {
  // L5(r47)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r47_;
    goto L5_;
  }

L1_:;
  // return dx10
  return Rsh_Fir_reg_dx10_;

L2_:;
  // tt4 = ld tt
  Rsh_Fir_reg_tt4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // tt5 = force? tt4
  Rsh_Fir_reg_tt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt4_);
  // checkMissing(tt5)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_tt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r48 = dyn attr2(tt5, "variables")
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L3_:;
  // r46 = dyn base6(<sym tt>, "variables")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;

L4_:;
  // dr8 = tryDispatchBuiltin.1("[[", r47)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc4 then L6() else L5(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr8)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_dr8_;
    goto L5_;
  }

L5_:;
  // off_num = ld `off.num`
  Rsh_Fir_reg_off_num = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // off_num1 = force? off_num
  Rsh_Fir_reg_off_num1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_off_num);
  // checkMissing(off_num1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_off_num1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // r51 = `+`(off_num1, 1.0)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_off_num1_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r52 = dyn __(r50, r51)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L1(r52)
  // L1(r52)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r52_;
  goto L1_;

L6_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L1(dx9)
  // L1(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_14(SEXP CCP, SEXP RHO) {
  // newdata3 = ld newdata
  Rsh_Fir_reg_newdata3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // newdata4 = force? newdata3
  Rsh_Fir_reg_newdata4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdata3_);
  // checkMissing(newdata4)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_newdata4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return newdata4
  return Rsh_Fir_reg_newdata4_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_15(SEXP CCP, SEXP RHO) {
  // object25 = ld object
  Rsh_Fir_reg_object25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object26 = force? object25
  Rsh_Fir_reg_object26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object25_);
  // checkMissing(object26)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_object26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(object26)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(object26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object26)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_object26_;
    goto L2_;
  }

L0_:;
  // c16 = `is.object`(dx14)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c16 then L5() else L6(dx14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx14)
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx14_;
    goto L6_;
  }

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", object26)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r61 = `$`(object28, <sym call>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_object28_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L0(r61)
  // L0(r61)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r61_;
  goto L0_;

L3_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L0(dx13)
  // L0(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L0_;

L4_:;
  // return dx18
  return Rsh_Fir_reg_dx18_;

L5_:;
  // dr14 = tryDispatchBuiltin.1("$", dx14)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if dc7 then L7() else L6(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr14)
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dr14_;
    goto L6_;
  }

L6_:;
  // r62 = `$`(dx16, <sym offset>)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L4(r62)
  // L4(r62)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r62_;
  goto L4_;

L7_:;
  // dx17 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L4(dx17)
  // L4(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_16(SEXP CCP, SEXP RHO) {
  // newdata5 = ld newdata
  Rsh_Fir_reg_newdata5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // newdata6 = force? newdata5
  Rsh_Fir_reg_newdata6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newdata5_);
  // checkMissing(newdata6)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_newdata6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return newdata6
  return Rsh_Fir_reg_newdata6_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_17(SEXP CCP, SEXP RHO) {
  // object29 = ld object
  Rsh_Fir_reg_object29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object30 = force? object29
  Rsh_Fir_reg_object30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object29_);
  // checkMissing(object30)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_object30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return object30
  return Rsh_Fir_reg_object30_;
}
SEXP Rsh_Fir_user_promise_inner2786829008_18(SEXP CCP, SEXP RHO) {
  // object31 = ld object
  Rsh_Fir_reg_object31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object32 = force? object31
  Rsh_Fir_reg_object32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object31_);
  // checkMissing(object32)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_object32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(object32)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_object32_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if c19 then L1() else L2(object32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object32)
    Rsh_Fir_reg_object34_ = Rsh_Fir_reg_object32_;
    goto L2_;
  }

L0_:;
  // return dx26
  return Rsh_Fir_reg_dx26_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("$", object32)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_object32_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_object34_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // r71 = `$`(object34, <sym rank>)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_object34_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r71_;
  goto L0_;

L3_:;
  // dx25 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L0(dx25)
  // L0(dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
