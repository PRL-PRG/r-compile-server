#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner744914472_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner744914472_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner744914472_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner744914472_14(SEXP CCP, SEXP RHO);
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
  // r = clos inner744914472
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner744914472_, RHO, CCP);
  // st `ppr.formula` = r
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
SEXP Rsh_Fir_user_function_inner744914472_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner744914472 dynamic dispatch ([formula, data, weights, subset, `na.action`, contrasts, `...`, model])

  return Rsh_Fir_user_version_inner744914472_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner744914472_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner744914472 version 0 (*, *, *, *, *, *, dots, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner744914472/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_formula;  // formula
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_weights;  // weights
  SEXP Rsh_Fir_reg_subset;  // subset
  SEXP Rsh_Fir_reg_na_action;  // na_action
  SEXP Rsh_Fir_reg_contrasts;  // contrasts
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_model;  // model
  SEXP Rsh_Fir_reg_contrasts_isMissing;  // contrasts_isMissing
  SEXP Rsh_Fir_reg_contrasts_orDefault;  // contrasts_orDefault
  SEXP Rsh_Fir_reg_model_isMissing;  // model_isMissing
  SEXP Rsh_Fir_reg_model_orDefault;  // model_orDefault
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_match_call1_;  // match_call1
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_model_matrix;  // model_matrix
  SEXP Rsh_Fir_reg_Terms;  // Terms
  SEXP Rsh_Fir_reg_Terms1_;  // Terms1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_contrasts1_;  // contrasts1
  SEXP Rsh_Fir_reg_contrasts2_;  // contrasts2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_model_response;  // model_response
  SEXP Rsh_Fir_reg_m6_;  // m6
  SEXP Rsh_Fir_reg_m7_;  // m7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_model_weights;  // model_weights
  SEXP Rsh_Fir_reg_m8_;  // m8
  SEXP Rsh_Fir_reg_m9_;  // m9
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_ppr_default;  // ppr_default
  SEXP Rsh_Fir_reg_X2_;  // X2
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_Y;  // Y
  SEXP Rsh_Fir_reg_Y1_;  // Y1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_w2_;  // w2
  SEXP Rsh_Fir_reg_w3_;  // w3
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_m10_;  // m10
  SEXP Rsh_Fir_reg_m11_;  // m11
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_Terms2_;  // Terms2
  SEXP Rsh_Fir_reg_Terms3_;  // Terms3
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_Terms5_;  // Terms5
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_as_name;  // as_name
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_call;  // call
  SEXP Rsh_Fir_reg_call1_;  // call1
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_call3_;  // call3
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_X4_;  // X4
  SEXP Rsh_Fir_reg_X5_;  // X5
  SEXP Rsh_Fir_reg_attr2_;  // attr2
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg__getXlevels;  // _getXlevels
  SEXP Rsh_Fir_reg_Terms8_;  // Terms8
  SEXP Rsh_Fir_reg_Terms9_;  // Terms9
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_m12_;  // m12
  SEXP Rsh_Fir_reg_m13_;  // m13
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_l25_;  // l25
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_model1_;  // model1
  SEXP Rsh_Fir_reg_model2_;  // model2
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_m14_;  // m14
  SEXP Rsh_Fir_reg_m15_;  // m15
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_m17_;  // m17
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_m19_;  // m19
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_structure;  // structure
  SEXP Rsh_Fir_reg_fit;  // fit
  SEXP Rsh_Fir_reg_fit1_;  // fit1
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r84_;  // r84

  // Bind parameters
  Rsh_Fir_reg_formula = PARAMS[0];
  Rsh_Fir_reg_data = PARAMS[1];
  Rsh_Fir_reg_weights = PARAMS[2];
  Rsh_Fir_reg_subset = PARAMS[3];
  Rsh_Fir_reg_na_action = PARAMS[4];
  Rsh_Fir_reg_contrasts = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];
  Rsh_Fir_reg_model = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st formula = formula
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_formula, RHO);
  (void)(Rsh_Fir_reg_formula);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // st weights = weights
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_weights, RHO);
  (void)(Rsh_Fir_reg_weights);
  // st subset = subset
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_subset, RHO);
  (void)(Rsh_Fir_reg_subset);
  // st `na.action` = na_action
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_na_action, RHO);
  (void)(Rsh_Fir_reg_na_action);
  // contrasts_isMissing = missing.0(contrasts)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_contrasts;
  Rsh_Fir_reg_contrasts_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if contrasts_isMissing then L0(NULL) else L0(contrasts)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_contrasts_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_contrasts_orDefault = Rsh_const(CCP, 6);
    goto L0_;
  } else {
  // L0(contrasts)
    Rsh_Fir_reg_contrasts_orDefault = Rsh_Fir_reg_contrasts;
    goto L0_;
  }

L0_:;
  // st contrasts = contrasts_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_contrasts_orDefault, RHO);
  (void)(Rsh_Fir_reg_contrasts_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // model_isMissing = missing.0(model)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_model;
  Rsh_Fir_reg_model_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if model_isMissing then L1(FALSE) else L1(model)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_model_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_model_orDefault = Rsh_const(CCP, 9);
    goto L1_;
  } else {
  // L1(model)
    Rsh_Fir_reg_model_orDefault = Rsh_Fir_reg_model;
    goto L1_;
  }

L1_:;
  // st model = model_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_model_orDefault, RHO);
  (void)(Rsh_Fir_reg_model_orDefault);
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L2_:;
  // l4 = ld m
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c1 = `is.object`(l4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L26() else L27(r9, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L27(r9, l4)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L27_;
  }

L3_:;
  // st m = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L4_:;
  // st Terms = r21
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // l7 = ld Terms
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

L5_:;
  // r35 = `==`(r33, 0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L47() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L47()
    goto L47_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L8()
  // L8()
  goto L8_;

L7_:;
  // st w = r37
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // ppr_default = ldf `ppr.default`
  Rsh_Fir_reg_ppr_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L54() else D23()
  // L54()
  goto L54_;

L9_:;
  // l8 = ld fit
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c3 = `is.object`(l8)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L61() else L62(r47, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L61()
    goto L61_;
  } else {
  // L62(r47, l8)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r47_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L62_;
  }

L10_:;
  // st call = dx9
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // call = ld call
  Rsh_Fir_reg_call = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L74() else D30()
  // L74()
  goto L74_;

L11_:;
  // l20 = ld fit
  Rsh_Fir_reg_l20_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c7 = `is.object`(l20)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c7 then L84() else L85(r63, l20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L84()
    goto L84_;
  } else {
  // L85(r63, l20)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
    goto L85_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L101() else D37()
  // L101()
  goto L101_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r = dyn match_call()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 0, NULL, NULL, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // st call = r
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // match_call1 = ldf `match.call`
  Rsh_Fir_reg_match_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r1 = dyn match_call1[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

D3_:;
  // deopt 8 [r1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // st m = r1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ___ = ldf `$<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 13 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r2 = dyn ___[, , `...`, ](l, NULL, ddd1, NULL)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D5_:;
  // deopt 16 [NULL, r2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // st m = r2
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // l1 = ld m
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c = `is.object`(l1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L21() else L22(NULL, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L22(NULL, l1)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L22_;
  }

L20_:;
  // st m = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf quote
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base = ldf quote in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L21_:;
  // dr = tryDispatchBuiltin.0("$<-", l1, NULL)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(NULL, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(NULL, dr)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // r7 = `$<-`(l3, <sym contrasts>, NULL)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L20(r7)
  // L20(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L20_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L20(dx)
  // L20(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L20_;

L24_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r10 = dyn quote(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L2_;

L25_:;
  // r8 = dyn base(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L2_;

L26_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l4, r9)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L28() else L27(r9, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L28()
    goto L28_;
  } else {
  // L27(r9, dr2)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr2_;
    goto L27_;
  }

L27_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r15 = dyn ____(l6, r9, 1)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L3_;

L28_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_, CCP, RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r17 = dyn parent_frame();
  //   return r17;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_1, CCP, RHO);
  // r19 = dyn eval(p, p1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 33 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // st m = r19
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

L32_:;
  // r20 = dyn base1(<sym m>, "terms")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r20)
  // L4(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L4_;

D8_:;
  // deopt 37 [m2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r22 = dyn attr(m3, "terms")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D9_:;
  // deopt 41 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L4(r22)
  // L4(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L4_;

D10_:;
  // deopt 46 [0, l7, 0]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_const(CCP, 16);
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // r23 = dyn attr__(l7, NULL, "intercept", 0)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

D11_:;
  // deopt 49 [0, r23]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // st Terms = r23
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // model_matrix = ldf `model.matrix`
  Rsh_Fir_reg_model_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p2 = prom<V +>{
  //   Terms = ld Terms;
  //   Terms1 = force? Terms;
  //   checkMissing(Terms1);
  //   return Terms1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_2, CCP, RHO);
  // p3 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_3, CCP, RHO);
  // p4 = prom<V +>{
  //   contrasts1 = ld contrasts;
  //   contrasts2 = force? contrasts1;
  //   checkMissing(contrasts2);
  //   return contrasts2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_4, CCP, RHO);
  // r27 = dyn model_matrix(p2, p3, p4)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_matrix, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

D13_:;
  // deopt 56 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L38_:;
  // st X = r27
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // model_response = ldf `model.response`
  Rsh_Fir_reg_model_response = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L39() else D14()
  // L39()
  goto L39_;

D14_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p5 = prom<V +>{
  //   m6 = ld m;
  //   m7 = force? m6;
  //   checkMissing(m7);
  //   return m7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_5, CCP, RHO);
  // r29 = dyn model_response(p5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_response, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L40() else D15()
  // L40()
  goto L40_;

D15_:;
  // deopt 61 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L40_:;
  // st Y = r29
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // model_weights = ldf `model.weights`
  Rsh_Fir_reg_model_weights = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L41() else D16()
  // L41()
  goto L41_;

D16_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p6 = prom<V +>{
  //   m8 = ld m;
  //   m9 = force? m8;
  //   checkMissing(m9);
  //   return m9;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_6, CCP, RHO);
  // r31 = dyn model_weights(p6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_weights, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L42() else D17()
  // L42()
  goto L42_;

D17_:;
  // deopt 66 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // st w = r31
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L43_:;
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L45() else D18()
  // L45()
  goto L45_;

L44_:;
  // r32 = dyn base2(<sym w>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(r32)
  // L5(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L5_;

D18_:;
  // deopt 70 [w]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_w;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L45_:;
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r34 = dyn length(w1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_w1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L46() else D19()
  // L46()
  goto L46_;

D19_:;
  // deopt 73 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L5(r34)
  // L5(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L5_;

L47_:;
  // sym3 = ldf rep_len
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base3 = ldf rep_len in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

L49_:;
  // r36 = dyn base3(1.0, <lang nrow(X)>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7(r36)
  // L7(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L7_;

D20_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p7 = prom<V +>{
  //   X = ld X;
  //   X1 = force? X;
  //   checkMissing(X1);
  //   return X1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_7, CCP, RHO);
  // r39 = dyn nrow(p7)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L51() else D21()
  // L51()
  goto L51_;

D21_:;
  // deopt 82 [r39]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L51_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r40 = dyn rep_len(1.0, r39)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L52() else D22()
  // L52()
  goto L52_;

D22_:;
  // deopt 84 [r40]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L7(r40)
  // L7(r40)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r40_;
  goto L7_;

D23_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p8 = prom<V +>{
  //   X2 = ld X;
  //   X3 = force? X2;
  //   checkMissing(X3);
  //   return X3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_8, CCP, RHO);
  // p9 = prom<V +>{
  //   Y = ld Y;
  //   Y1 = force? Y;
  //   checkMissing(Y1);
  //   return Y1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_9, CCP, RHO);
  // p10 = prom<V +>{
  //   w2 = ld w;
  //   w3 = force? w2;
  //   checkMissing(w3);
  //   return w3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_10, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r45 = dyn ppr_default[, , , `...`](p8, p9, p10, ddd2)
  SEXP Rsh_Fir_array_args48[4];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args48[3] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ppr_default, 4, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L55() else D24()
  // L55()
  goto L55_;

D24_:;
  // deopt 94 [r45]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // st fit = r45
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // m10 = ld m
  Rsh_Fir_reg_m10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L58() else D25()
  // L58()
  goto L58_;

L57_:;
  // r46 = dyn base4(<sym m>, "na.action")
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L9(r46)
  // L9(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L9_;

D25_:;
  // deopt 98 [m10]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_m10_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L58_:;
  // m11 = force? m10
  Rsh_Fir_reg_m11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m10_);
  // checkMissing(m11)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_m11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r48 = dyn attr1(m11, "na.action")
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_m11_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L59() else D26()
  // L59()
  goto L59_;

D26_:;
  // deopt 102 [r48]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L9(r48)
  // L9(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L9_;

L60_:;
  // st fit = dx5
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // Terms2 = ld Terms
  Rsh_Fir_reg_Terms2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L64() else D27()
  // L64()
  goto L64_;

L61_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l8, r47)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args53);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc2 then L63() else L62(r47, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L63()
    goto L63_;
  } else {
  // L62(r47, dr4)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r47_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr4_;
    goto L62_;
  }

L62_:;
  // r53 = `$<-`(l10, <sym na.action>, r47)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L60(r53)
  // L60(r53)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r53_;
  goto L60_;

L63_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L60(dx4)
  // L60(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L60_;

D27_:;
  // deopt 106 [Terms2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_Terms2_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L64_:;
  // Terms3 = force? Terms2
  Rsh_Fir_reg_Terms3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Terms2_);
  // checkMissing(Terms3)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_Terms3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // l11 = ld fit
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c4 = `is.object`(l11)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c4 then L66() else L67(Terms3, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L66()
    goto L66_;
  } else {
  // L67(Terms3, l11)
    Rsh_Fir_reg_Terms5_ = Rsh_Fir_reg_Terms3_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L67_;
  }

L65_:;
  // st fit = dx7
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // as_name = ldf `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L69() else D28()
  // L69()
  goto L69_;

L66_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l11, Terms3)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_Terms3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args59);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc3 then L68() else L67(Terms3, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L68()
    goto L68_;
  } else {
  // L67(Terms3, dr6)
    Rsh_Fir_reg_Terms5_ = Rsh_Fir_reg_Terms3_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr6_;
    goto L67_;
  }

L67_:;
  // r54 = `$<-`(l13, <sym terms>, Terms3)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_Terms3_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L65(r54)
  // L65(r54)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r54_;
  goto L65_;

L68_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L65(dx6)
  // L65(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L65_;

D28_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // r55 = dyn as_name("ppr")
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L70() else D29()
  // L70()
  goto L70_;

D29_:;
  // deopt 114 [r55]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L70_:;
  // l14 = ld call
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c5 = `is.object`(l14)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c5 then L71() else L72(r55, l14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L71()
    goto L71_;
  } else {
  // L72(r55, l14)
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l14_;
    goto L72_;
  }

L71_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l14, r55)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args65);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc4 then L73() else L72(r55, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L73()
    goto L73_;
  } else {
  // L72(r55, dr8)
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_dr8_;
    goto L72_;
  }

L72_:;
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r60 = dyn ____1(l16, r55, 1)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L10(r60)
  // L10(r60)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r60_;
  goto L10_;

L73_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L10(dx8)
  // L10(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L10_;

D30_:;
  // deopt 120 [call]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_call;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L74_:;
  // call1 = force? call
  Rsh_Fir_reg_call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call);
  // checkMissing(call1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // l17 = ld fit
  Rsh_Fir_reg_l17_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c6 = `is.object`(l17)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c6 then L76() else L77(call1, l17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L76()
    goto L76_;
  } else {
  // L77(call1, l17)
    Rsh_Fir_reg_call3_ = Rsh_Fir_reg_call1_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    goto L77_;
  }

L75_:;
  // st fit = dx11
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard5 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L76_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l17, call1)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_call1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args72);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc5 then L78() else L77(call1, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L78()
    goto L78_;
  } else {
  // L77(call1, dr10)
    Rsh_Fir_reg_call3_ = Rsh_Fir_reg_call1_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_dr10_;
    goto L77_;
  }

L77_:;
  // r61 = `$<-`(l19, <sym call>, call1)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_call1_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L75(r61)
  // L75(r61)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r61_;
  goto L75_;

L78_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L75(dx10)
  // L75(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L75_;

L79_:;
  // X4 = ld X
  Rsh_Fir_reg_X4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L81() else D31()
  // L81()
  goto L81_;

L80_:;
  // r62 = dyn base5(<sym X>, "contrasts")
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L11(r62)
  // L11(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L11_;

D31_:;
  // deopt 127 [X4]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_X4_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // X5 = force? X4
  Rsh_Fir_reg_X5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X4_);
  // checkMissing(X5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_X5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r64 = dyn attr2(X5, "contrasts")
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_X5_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L82() else D32()
  // L82()
  goto L82_;

D32_:;
  // deopt 131 [r64]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L11(r64)
  // L11(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L11_;

L83_:;
  // st fit = dx13
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // _getXlevels = ldf `.getXlevels`
  Rsh_Fir_reg__getXlevels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L87() else D33()
  // L87()
  goto L87_;

L84_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l20, r63)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args79);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc6 then L86() else L85(r63, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L86()
    goto L86_;
  } else {
  // L85(r63, dr12)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_dr12_;
    goto L85_;
  }

L85_:;
  // r69 = `$<-`(l22, <sym contrasts>, r63)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L83(r69)
  // L83(r69)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r69_;
  goto L83_;

L86_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L83(dx12)
  // L83(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L83_;

D33_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p11 = prom<V +>{
  //   Terms8 = ld Terms;
  //   Terms9 = force? Terms8;
  //   checkMissing(Terms9);
  //   return Terms9;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_11, CCP, RHO);
  // p12 = prom<V +>{
  //   m12 = ld m;
  //   m13 = force? m12;
  //   checkMissing(m13);
  //   return m13;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_12, CCP, RHO);
  // r72 = dyn _getXlevels(p11, p12)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getXlevels, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L88() else D34()
  // L88()
  goto L88_;

D34_:;
  // deopt 139 [r72]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L88_:;
  // l23 = ld fit
  Rsh_Fir_reg_l23_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c8 = `is.object`(l23)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c8 then L90() else L91(r72, l23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L90()
    goto L90_;
  } else {
  // L91(r72, l23)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_l23_;
    goto L91_;
  }

L89_:;
  // st fit = dx15
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // model1 = ld model
  Rsh_Fir_reg_model1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L93() else D35()
  // L93()
  goto L93_;

L90_:;
  // dr14 = tryDispatchBuiltin.0("$<-", l23, r72)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args87);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc7 then L92() else L91(r72, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L92()
    goto L92_;
  } else {
  // L91(r72, dr14)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_dr14_;
    goto L91_;
  }

L91_:;
  // r77 = `$<-`(l25, <sym xlevels>, r72)
  SEXP Rsh_Fir_array_args89[3];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args89[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L89(r77)
  // L89(r77)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r77_;
  goto L89_;

L92_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L89(dx14)
  // L89(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L89_;

D35_:;
  // deopt 143 [model1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_model1_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L93_:;
  // model2 = force? model1
  Rsh_Fir_reg_model2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model1_);
  // checkMissing(model2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_model2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(model2)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_model2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c9 then L94() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L94()
    goto L94_;
  } else {
  // L12()
    goto L12_;
  }

L94_:;
  // m14 = ld m
  Rsh_Fir_reg_m14_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L95() else D36()
  // L95()
  goto L95_;

D36_:;
  // deopt 145 [m14]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_m14_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L95_:;
  // m15 = force? m14
  Rsh_Fir_reg_m15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m14_);
  // checkMissing(m15)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_m15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // l26 = ld fit
  Rsh_Fir_reg_l26_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c10 = `is.object`(l26)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c10 then L97() else L98(m15, l26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L97()
    goto L97_;
  } else {
  // L98(m15, l26)
    Rsh_Fir_reg_m17_ = Rsh_Fir_reg_m15_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l26_;
    goto L98_;
  }

L96_:;
  // st fit = dx17
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L13()
  // L13()
  goto L13_;

L97_:;
  // dr16 = tryDispatchBuiltin.0("$<-", l26, m15)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_m15_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args95);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc8 then L99() else L98(m15, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L99()
    goto L99_;
  } else {
  // L98(m15, dr16)
    Rsh_Fir_reg_m17_ = Rsh_Fir_reg_m15_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_dr16_;
    goto L98_;
  }

L98_:;
  // r78 = `$<-`(l28, <sym model>, m15)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_m15_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L96(m17, r78)
  // L96(m17, r78)
  Rsh_Fir_reg_m19_ = Rsh_Fir_reg_m17_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r78_;
  goto L96_;

L99_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L96(m15, dx16)
  // L96(m15, dx16)
  Rsh_Fir_reg_m19_ = Rsh_Fir_reg_m15_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L96_;

D37_:;
  // deopt 153 []
  Rsh_Fir_deopt(153, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // p13 = prom<V +>{
  //   fit = ld fit;
  //   fit1 = force? fit;
  //   checkMissing(fit1);
  //   return fit1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_13, CCP, RHO);
  // p14 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r81):
  //   return r81;
  // L1():
  //   c11 = ldf c in base;
  //   r82 = dyn c11("ppr.form", "ppr");
  //   goto L0(r82);
  // L2():
  //   r80 = dyn base6("ppr.form", "ppr");
  //   goto L0(r80);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner744914472_14, CCP, RHO);
  // r84 = dyn structure[, class](p13, p14)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L102() else D38()
  // L102()
  goto L102_;

D38_:;
  // deopt 157 [r84]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L102_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r84
  return Rsh_Fir_reg_r84_;
}
SEXP Rsh_Fir_user_promise_inner744914472_(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner744914472_1(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // r17 = dyn parent_frame()
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_inner744914472_2(SEXP CCP, SEXP RHO) {
  // Terms = ld Terms
  Rsh_Fir_reg_Terms = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // Terms1 = force? Terms
  Rsh_Fir_reg_Terms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Terms);
  // checkMissing(Terms1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_Terms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return Terms1
  return Rsh_Fir_reg_Terms1_;
}
SEXP Rsh_Fir_user_promise_inner744914472_3(SEXP CCP, SEXP RHO) {
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_inner744914472_4(SEXP CCP, SEXP RHO) {
  // contrasts1 = ld contrasts
  Rsh_Fir_reg_contrasts1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // contrasts2 = force? contrasts1
  Rsh_Fir_reg_contrasts2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contrasts1_);
  // checkMissing(contrasts2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_contrasts2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return contrasts2
  return Rsh_Fir_reg_contrasts2_;
}
SEXP Rsh_Fir_user_promise_inner744914472_5(SEXP CCP, SEXP RHO) {
  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return m7
  return Rsh_Fir_reg_m7_;
}
SEXP Rsh_Fir_user_promise_inner744914472_6(SEXP CCP, SEXP RHO) {
  // m8 = ld m
  Rsh_Fir_reg_m8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // m9 = force? m8
  Rsh_Fir_reg_m9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m8_);
  // checkMissing(m9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_m9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return m9
  return Rsh_Fir_reg_m9_;
}
SEXP Rsh_Fir_user_promise_inner744914472_7(SEXP CCP, SEXP RHO) {
  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return X1
  return Rsh_Fir_reg_X1_;
}
SEXP Rsh_Fir_user_promise_inner744914472_8(SEXP CCP, SEXP RHO) {
  // X2 = ld X
  Rsh_Fir_reg_X2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // X3 = force? X2
  Rsh_Fir_reg_X3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X2_);
  // checkMissing(X3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_X3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return X3
  return Rsh_Fir_reg_X3_;
}
SEXP Rsh_Fir_user_promise_inner744914472_9(SEXP CCP, SEXP RHO) {
  // Y = ld Y
  Rsh_Fir_reg_Y = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // Y1 = force? Y
  Rsh_Fir_reg_Y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y);
  // checkMissing(Y1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_Y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return Y1
  return Rsh_Fir_reg_Y1_;
}
SEXP Rsh_Fir_user_promise_inner744914472_10(SEXP CCP, SEXP RHO) {
  // w2 = ld w
  Rsh_Fir_reg_w2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // w3 = force? w2
  Rsh_Fir_reg_w3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w2_);
  // checkMissing(w3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_w3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return w3
  return Rsh_Fir_reg_w3_;
}
SEXP Rsh_Fir_user_promise_inner744914472_11(SEXP CCP, SEXP RHO) {
  // Terms8 = ld Terms
  Rsh_Fir_reg_Terms8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // Terms9 = force? Terms8
  Rsh_Fir_reg_Terms9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Terms8_);
  // checkMissing(Terms9)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_Terms9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return Terms9
  return Rsh_Fir_reg_Terms9_;
}
SEXP Rsh_Fir_user_promise_inner744914472_12(SEXP CCP, SEXP RHO) {
  // m12 = ld m
  Rsh_Fir_reg_m12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // m13 = force? m12
  Rsh_Fir_reg_m13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m12_);
  // checkMissing(m13)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_m13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return m13
  return Rsh_Fir_reg_m13_;
}
SEXP Rsh_Fir_user_promise_inner744914472_13(SEXP CCP, SEXP RHO) {
  // fit = ld fit
  Rsh_Fir_reg_fit = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // fit1 = force? fit
  Rsh_Fir_reg_fit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit);
  // checkMissing(fit1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_fit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // return fit1
  return Rsh_Fir_reg_fit1_;
}
SEXP Rsh_Fir_user_promise_inner744914472_14(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r81
  return Rsh_Fir_reg_r81_;

L1_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r82 = dyn c11("ppr.form", "ppr")
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r82)
  // L0(r82)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r82_;
  goto L0_;

L2_:;
  // r80 = dyn base6("ppr.form", "ppr")
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r80)
  // L0(r80)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
