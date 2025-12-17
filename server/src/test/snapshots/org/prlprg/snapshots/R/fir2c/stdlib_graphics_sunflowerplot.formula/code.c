#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1061747026_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1061747026_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1061747026_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1061747026_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner1061747026
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1061747026_, RHO, CCP);
  // st `sunflowerplot.formula` = r
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
SEXP Rsh_Fir_user_function_inner1061747026_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1061747026 dynamic dispatch ([formula, data, xlab, ylab, `...`, subset, `na.action`])

  return Rsh_Fir_user_version_inner1061747026_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1061747026_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1061747026 version 0 (*, *, *, *, dots, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner1061747026/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_formula;  // formula
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_xlab;  // xlab
  SEXP Rsh_Fir_reg_ylab;  // ylab
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_subset;  // subset
  SEXP Rsh_Fir_reg_na_action;  // na_action
  SEXP Rsh_Fir_reg_data_isMissing;  // data_isMissing
  SEXP Rsh_Fir_reg_data_orDefault;  // data_orDefault
  SEXP Rsh_Fir_reg_xlab_isMissing;  // xlab_isMissing
  SEXP Rsh_Fir_reg_xlab_orDefault;  // xlab_orDefault
  SEXP Rsh_Fir_reg_ylab_isMissing;  // ylab_isMissing
  SEXP Rsh_Fir_reg_ylab_orDefault;  // ylab_orDefault
  SEXP Rsh_Fir_reg_na_action_isMissing;  // na_action_isMissing
  SEXP Rsh_Fir_reg_na_action_orDefault;  // na_action_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_formula1_;  // formula1
  SEXP Rsh_Fir_reg_formula2_;  // formula2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_as_data_frame;  // as_data_frame
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_na_action1_;  // na_action1
  SEXP Rsh_Fir_reg_na_action2_;  // na_action2
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_na_action4_;  // na_action4
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_eval1_;  // eval1
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_parent_frame1_;  // parent_frame1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_NCOL;  // NCOL
  SEXP Rsh_Fir_reg_mf;  // mf
  SEXP Rsh_Fir_reg_mf1_;  // mf1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_xlab1_;  // xlab1
  SEXP Rsh_Fir_reg_xlab2_;  // xlab2
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_mf2_;  // mf2
  SEXP Rsh_Fir_reg_mf3_;  // mf3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_ylab1_;  // ylab1
  SEXP Rsh_Fir_reg_ylab2_;  // ylab2
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_mf4_;  // mf4
  SEXP Rsh_Fir_reg_mf5_;  // mf5
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_sunflowerplot;  // sunflowerplot
  SEXP Rsh_Fir_reg_mf6_;  // mf6
  SEXP Rsh_Fir_reg_mf7_;  // mf7
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_mf9_;  // mf9
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_mf10_;  // mf10
  SEXP Rsh_Fir_reg_mf11_;  // mf11
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_mf13_;  // mf13
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_xlab3_;  // xlab3
  SEXP Rsh_Fir_reg_xlab4_;  // xlab4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_ylab3_;  // ylab3
  SEXP Rsh_Fir_reg_ylab4_;  // ylab4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r77_;  // r77

  // Bind parameters
  Rsh_Fir_reg_formula = PARAMS[0];
  Rsh_Fir_reg_data = PARAMS[1];
  Rsh_Fir_reg_xlab = PARAMS[2];
  Rsh_Fir_reg_ylab = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];
  Rsh_Fir_reg_subset = PARAMS[5];
  Rsh_Fir_reg_na_action = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st formula = formula
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_formula, RHO);
  (void)(Rsh_Fir_reg_formula);
  // data_isMissing = missing.0(data)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_data;
  Rsh_Fir_reg_data_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if data_isMissing then L0(NULL) else L0(data)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_data_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_data_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(data)
    Rsh_Fir_reg_data_orDefault = Rsh_Fir_reg_data;
    goto L0_;
  }

L0_:;
  // st data = data_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_data_orDefault, RHO);
  (void)(Rsh_Fir_reg_data_orDefault);
  // xlab_isMissing = missing.0(xlab)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_xlab;
  Rsh_Fir_reg_xlab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if xlab_isMissing then L1(NULL) else L1(xlab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlab_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_xlab_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(xlab)
    Rsh_Fir_reg_xlab_orDefault = Rsh_Fir_reg_xlab;
    goto L1_;
  }

L1_:;
  // st xlab = xlab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_xlab_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlab_orDefault);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if ylab_isMissing then L2(NULL) else L2(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_ylab_orDefault = Rsh_const(CCP, 2);
    goto L2_;
  } else {
  // L2(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L2_;
  }

L2_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st subset = subset
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_subset, RHO);
  (void)(Rsh_Fir_reg_subset);
  // na_action_isMissing = missing.0(na_action)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_na_action;
  Rsh_Fir_reg_na_action_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if na_action_isMissing then L3(NULL) else L3(na_action)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_action_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_na_action_orDefault = Rsh_const(CCP, 2);
    goto L3_;
  } else {
  // L3(na_action)
    Rsh_Fir_reg_na_action_orDefault = Rsh_Fir_reg_na_action;
    goto L3_;
  }

L3_:;
  // st `na.action` = na_action_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_na_action_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_action_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L4_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L5(c) else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L5_;
  } else {
  // L28()
    goto L28_;
  }

L5_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c9 then L34() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L34()
    goto L34_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // r6 = `!=`(r4, 3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L5(c7)
  // L5(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L5_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

L9_:;
  // c11 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c11 then L45() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L45()
    goto L45_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // l3 = ld m
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ___ = ldf `$<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

L12_:;
  // l13 = ld m
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c16 = `is.object`(l13)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c16 then L70() else L71(r39, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L70()
    goto L70_;
  } else {
  // L71(r39, l13)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L71_;
  }

L13_:;
  // st m = dx11
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L73() else D14()
  // L73()
  goto L73_;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard4 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L16_:;
  // c19 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c19 then L84() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L84()
    goto L84_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L20()
  // L20()
  goto L20_;

L18_:;
  // c20 = `is.object`(r58)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c20 then L89() else L90(r58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L89()
    goto L89_;
  } else {
  // L90(r58)
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r58_;
    goto L90_;
  }

L19_:;
  // st xlab = dx13
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard6 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L21_:;
  // c22 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c22 then L96() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L96()
    goto L96_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L25()
  // L25()
  goto L25_;

L23_:;
  // c23 = `is.object`(r66)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c23 then L101() else L102(r66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L101()
    goto L101_;
  } else {
  // L102(r66)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r66_;
    goto L102_;
  }

L24_:;
  // st ylab = dx16
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // sunflowerplot = ldf sunflowerplot
  Rsh_Fir_reg_sunflowerplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L105() else D26()
  // L105()
  goto L105_;

L26_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn missing(<sym formula>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L4_;

L27_:;
  // r = dyn base(<sym formula>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L4_;

L28_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // formula1 = ld formula
  Rsh_Fir_reg_formula1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

L30_:;
  // r3 = dyn base1(<sym formula>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L6(c, r3)
  // L6(c, r3)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L6_;

D0_:;
  // deopt 5 [c, formula1]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_formula1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L31_:;
  // formula2 = force? formula1
  Rsh_Fir_reg_formula2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula1_);
  // checkMissing(formula2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_formula2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r5 = dyn length(formula2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_formula2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

D1_:;
  // deopt 8 [c, r5]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L6(c, r5)
  // L6(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L6_;

L34_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // r7 = dyn stop("formula missing or incorrect")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

D3_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L8()
  // L8()
  goto L8_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r9 = dyn match_call[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

D5_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L39_:;
  // st m = r9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym2 = ldf `is.matrix`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf `is.matrix` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L42() else D6()
  // L42()
  goto L42_;

L41_:;
  // r10 = dyn base2(<lang eval(`$`(m, data), parent.frame())>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(r10)
  // L9(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L9_;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   c10 = `is.object`(m1);
  //   if c10 then L1() else L2(m1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", m1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(m3):
  //   r12 = `$`(m3, <sym data>);
  //   goto L0(r12);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_, CCP, RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r14 = dyn parent_frame();
  //   return r14;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_1, CCP, RHO);
  // r16 = dyn eval(p, p1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

D7_:;
  // deopt 30 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L43_:;
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r17 = dyn is_matrix(r16)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

D8_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r17_;
  goto L9_;

L45_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

D9_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p2 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_2, CCP, RHO);
  // r19 = dyn as_data_frame(p2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

D10_:;
  // deopt 36 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c12 = `is.object`(l)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c12 then L49() else L50(r19, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L49()
    goto L49_;
  } else {
  // L50(r19, l)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L50_;
  }

L48_:;
  // st m = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L11()
  // L11()
  goto L11_;

L49_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l, r19)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args39);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc1 then L51() else L50(r19, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L51()
    goto L51_;
  } else {
  // L50(r19, dr2)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L50_;
  }

L50_:;
  // r24 = `$<-`(l2, <sym data>, r19)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L48(r21, r24)
  // L48(r21, r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L48_;

L51_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L48(r19, dx2)
  // L48(r19, dx2)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L48_;

D11_:;
  // deopt 45 [NULL, l3, NULL]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_const(CCP, 2);
  Rsh_Fir_deopt(45, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L53_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r26 = dyn ___[, , `...`, ](l3, NULL, ddd1, NULL)
  SEXP Rsh_Fir_array_args43[4];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

D12_:;
  // deopt 48 [NULL, r26]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L54_:;
  // st m = r26
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // l4 = ld m
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c13 = `is.object`(l4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c13 then L56() else L57(NULL, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L56()
    goto L56_;
  } else {
  // L57(NULL, l4)
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L57_;
  }

L55_:;
  // st m = dx5
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // l7 = ld m
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c14 = `is.object`(l7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c14 then L60() else L61(r30, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L60()
    goto L60_;
  } else {
  // L61(r30, l7)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L61_;
  }

L56_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l4, NULL)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args46);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc2 then L58() else L57(NULL, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L58()
    goto L58_;
  } else {
  // L57(NULL, dr4)
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L57_;
  }

L57_:;
  // r31 = `$<-`(l6, <sym ylab>, NULL)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L55(r28, r31)
  // L55(r28, r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r31_;
  goto L55_;

L58_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L55(NULL, dx4)
  // L55(NULL, dx4)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L55_;

L59_:;
  // st m = dx7
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // na_action1 = ld `na.action`
  Rsh_Fir_reg_na_action1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L63() else D13()
  // L63()
  goto L63_;

L60_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l7, r30)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args50);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc3 then L62() else L61(r30, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L62()
    goto L62_;
  } else {
  // L61(r30, dr6)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr6_;
    goto L61_;
  }

L61_:;
  // r36 = `$<-`(l9, <sym xlab>, r30)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L59(r36)
  // L59(r36)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r36_;
  goto L59_;

L62_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L59(dx6)
  // L59(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L59_;

D13_:;
  // deopt 56 [na_action1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_na_action1_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L63_:;
  // na_action2 = force? na_action1
  Rsh_Fir_reg_na_action2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_action1_);
  // checkMissing(na_action2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_na_action2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // l10 = ld m
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c15 = `is.object`(l10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c15 then L65() else L66(na_action2, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L65()
    goto L65_;
  } else {
  // L66(na_action2, l10)
    Rsh_Fir_reg_na_action4_ = Rsh_Fir_reg_na_action2_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L66_;
  }

L64_:;
  // st m = dx9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym3 = ldf quote
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf quote in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard3 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L65_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l10, na_action2)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_na_action2_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args57);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc4 then L67() else L66(na_action2, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L67()
    goto L67_;
  } else {
  // L66(na_action2, dr8)
    Rsh_Fir_reg_na_action4_ = Rsh_Fir_reg_na_action2_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr8_;
    goto L66_;
  }

L66_:;
  // r37 = `$<-`(l12, <sym na.action>, na_action2)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_na_action2_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L64(r37)
  // L64(r37)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r37_;
  goto L64_;

L67_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L64(dx8)
  // L64(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L64_;

L68_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r40 = dyn quote(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L12(r40)
  // L12(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L12_;

L69_:;
  // r38 = dyn base3(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r38)
  // L12(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L12_;

L70_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l13, r39)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args63);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc5 then L72() else L71(r39, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L72()
    goto L72_;
  } else {
  // L71(r39, dr10)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr10_;
    goto L71_;
  }

L71_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r45 = dyn ____(l15, r39, 1)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(r45)
  // L13(r45)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r45_;
  goto L13_;

L72_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L13(dx10)
  // L13(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L13_;

D14_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // p3 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_3, CCP, RHO);
  // p4 = prom<V +>{
  //   parent_frame1 = ldf `parent.frame`;
  //   r47 = dyn parent_frame1();
  //   return r47;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_4, CCP, RHO);
  // r49 = dyn eval1(p3, p4)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L74() else D15()
  // L74()
  goto L74_;

D15_:;
  // deopt 73 [r49]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L74_:;
  // st mf = r49
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L75() else D16()
  // L75()
  goto L75_;

D16_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p5 = prom<V +>{
  //   mf = ld mf;
  //   mf1 = force? mf;
  //   checkMissing(mf1);
  //   return mf1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_5, CCP, RHO);
  // r51 = dyn NCOL(p5)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L76() else D17()
  // L76()
  goto L76_;

D17_:;
  // deopt 78 [r51]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L76_:;
  // r52 = `!=`(r51, 2)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c17 then L77() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L77()
    goto L77_;
  } else {
  // L14()
    goto L14_;
  }

L77_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L78() else D18()
  // L78()
  goto L78_;

D18_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // r53 = dyn stop1("'formula' should specify exactly two variables")
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L79() else D19()
  // L79()
  goto L79_;

D19_:;
  // deopt 84 [r53]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L15()
  // L15()
  goto L15_;

L81_:;
  // xlab1 = ld xlab
  Rsh_Fir_reg_xlab1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L83() else D20()
  // L83()
  goto L83_;

L82_:;
  // r55 = dyn base4(<sym xlab>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r55)
  // L16(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L16_;

D20_:;
  // deopt 88 [xlab1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_xlab1_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L83_:;
  // xlab2 = force? xlab1
  Rsh_Fir_reg_xlab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlab1_);
  // checkMissing(xlab2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_xlab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c18 = `==`(xlab2, NULL)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_xlab2_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L16(c18)
  // L16(c18)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_c18_;
  goto L16_;

L84_:;
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard5 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L85_:;
  // mf2 = ld mf
  Rsh_Fir_reg_mf2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L87() else D21()
  // L87()
  goto L87_;

L86_:;
  // r57 = dyn base5(<sym mf>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L18(r57)
  // L18(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L18_;

D21_:;
  // deopt 93 [mf2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_mf2_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L87_:;
  // mf3 = force? mf2
  Rsh_Fir_reg_mf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf2_);
  // checkMissing(mf3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_mf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r59 = dyn names(mf3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_mf3_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L88() else D22()
  // L88()
  goto L88_;

D22_:;
  // deopt 96 [r59]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L18(r59)
  // L18(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L18_;

L89_:;
  // dr12 = tryDispatchBuiltin.1("[", r58)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc6 then L91() else L90(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L91()
    goto L91_;
  } else {
  // L90(dr12)
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_dr12_;
    goto L90_;
  }

L90_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r62 = dyn __(r61, 2)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(r62)
  // L19(r62)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r62_;
  goto L19_;

L91_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L19(dx12)
  // L19(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L19_;

L93_:;
  // ylab1 = ld ylab
  Rsh_Fir_reg_ylab1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

L94_:;
  // r63 = dyn base6(<sym ylab>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L21(r63)
  // L21(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L21_;

D23_:;
  // deopt 104 [ylab1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_ylab1_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L95_:;
  // ylab2 = force? ylab1
  Rsh_Fir_reg_ylab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab1_);
  // checkMissing(ylab2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_ylab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // c21 = `==`(ylab2, NULL)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ylab2_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L21(c21)
  // L21(c21)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_c21_;
  goto L21_;

L96_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard7 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L97_:;
  // mf4 = ld mf
  Rsh_Fir_reg_mf4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L99() else D24()
  // L99()
  goto L99_;

L98_:;
  // r65 = dyn base7(<sym mf>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L23(r65)
  // L23(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L23_;

D24_:;
  // deopt 109 [mf4]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_mf4_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L99_:;
  // mf5 = force? mf4
  Rsh_Fir_reg_mf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf4_);
  // checkMissing(mf5)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_mf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r67 = dyn names1(mf5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_mf5_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L100() else D25()
  // L100()
  goto L100_;

D25_:;
  // deopt 112 [r67]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L23(r67)
  // L23(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L23_;

L101_:;
  // dr14 = tryDispatchBuiltin.1("[", r66)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc7 then L103() else L102(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L103()
    goto L103_;
  } else {
  // L102(dr14)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_dr14_;
    goto L102_;
  }

L102_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r70 = dyn __1(r69, 1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L24(r70)
  // L24(r70)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r70_;
  goto L24_;

L103_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L24(dx15)
  // L24(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L24_;

D26_:;
  // deopt 120 []
  Rsh_Fir_deopt(120, 0, NULL, CCP, RHO);
  return R_NilValue;

L105_:;
  // p6 = prom<V +>{
  //   mf6 = ld mf;
  //   mf7 = force? mf6;
  //   checkMissing(mf7);
  //   c24 = `is.object`(mf7);
  //   if c24 then L1() else L2(mf7);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[[", mf7);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(mf9):
  //   __2 = ldf `[[` in base;
  //   r71 = dyn __2(mf9, 2);
  //   goto L0(r71);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_6, CCP, RHO);
  // p7 = prom<V +>{
  //   mf10 = ld mf;
  //   mf11 = force? mf10;
  //   checkMissing(mf11);
  //   c25 = `is.object`(mf11);
  //   if c25 then L1() else L2(mf11);
  // L0(dx21):
  //   return dx21;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[[", mf11);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(mf13):
  //   __3 = ldf `[[` in base;
  //   r73 = dyn __3(mf13, 1);
  //   goto L0(r73);
  // L3():
  //   dx20 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_7, CCP, RHO);
  // p8 = prom<V +>{
  //   xlab3 = ld xlab;
  //   xlab4 = force? xlab3;
  //   checkMissing(xlab4);
  //   return xlab4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_8, CCP, RHO);
  // p9 = prom<V +>{
  //   ylab3 = ld ylab;
  //   ylab4 = force? ylab3;
  //   checkMissing(ylab4);
  //   return ylab4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1061747026_9, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r77 = dyn sunflowerplot[, , xlab, ylab, `...`](p6, p7, p8, p9, ddd2)
  SEXP Rsh_Fir_array_args110[5];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args110[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args110[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args110[4] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names27[5];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names27[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names27[4] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sunflowerplot, 5, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L106() else D27()
  // L106()
  goto L106_;

D27_:;
  // deopt 128 [r77]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L106_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r77
  return Rsh_Fir_reg_r77_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(m1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c10 then L1() else L2(m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L1()
    goto L1_;
  } else {
  // L2(m1)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_m1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", m1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r12 = `$`(m3, <sym data>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_1(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // r14 = dyn parent_frame()
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_2(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_3(SEXP CCP, SEXP RHO) {
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_4(SEXP CCP, SEXP RHO) {
  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // r47 = dyn parent_frame1()
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 0, NULL, NULL, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_5(SEXP CCP, SEXP RHO) {
  // mf = ld mf
  Rsh_Fir_reg_mf = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // mf1 = force? mf
  Rsh_Fir_reg_mf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf);
  // checkMissing(mf1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_mf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return mf1
  return Rsh_Fir_reg_mf1_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_6(SEXP CCP, SEXP RHO) {
  // mf6 = ld mf
  Rsh_Fir_reg_mf6_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // mf7 = force? mf6
  Rsh_Fir_reg_mf7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf6_);
  // checkMissing(mf7)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_mf7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(mf7)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_mf7_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c24 then L1() else L2(mf7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf7)
    Rsh_Fir_reg_mf9_ = Rsh_Fir_reg_mf7_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[[", mf7)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_mf7_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_mf9_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r71 = dyn __2(mf9, 2)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_mf9_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r71_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_7(SEXP CCP, SEXP RHO) {
  // mf10 = ld mf
  Rsh_Fir_reg_mf10_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // mf11 = force? mf10
  Rsh_Fir_reg_mf11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf10_);
  // checkMissing(mf11)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_mf11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(mf11)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_mf11_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c25 then L1() else L2(mf11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf11)
    Rsh_Fir_reg_mf13_ = Rsh_Fir_reg_mf11_;
    goto L2_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[[", mf11)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_mf11_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_mf13_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r73 = dyn __3(mf13, 1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_mf13_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r73)
  // L0(r73)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r73_;
  goto L0_;

L3_:;
  // dx20 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_8(SEXP CCP, SEXP RHO) {
  // xlab3 = ld xlab
  Rsh_Fir_reg_xlab3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // xlab4 = force? xlab3
  Rsh_Fir_reg_xlab4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlab3_);
  // checkMissing(xlab4)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_xlab4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return xlab4
  return Rsh_Fir_reg_xlab4_;
}
SEXP Rsh_Fir_user_promise_inner1061747026_9(SEXP CCP, SEXP RHO) {
  // ylab3 = ld ylab
  Rsh_Fir_reg_ylab3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ylab4 = force? ylab3
  Rsh_Fir_reg_ylab4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab3_);
  // checkMissing(ylab4)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_ylab4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return ylab4
  return Rsh_Fir_reg_ylab4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
