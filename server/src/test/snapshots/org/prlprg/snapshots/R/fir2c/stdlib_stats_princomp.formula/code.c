#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4130229875_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4130229875_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4130229875_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4130229875_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner4130229875
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4130229875_, RHO, CCP);
  // st `princomp.formula` = r
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
SEXP Rsh_Fir_user_function_inner4130229875_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4130229875 dynamic dispatch ([formula, data, subset, `na.action`, `...`])

  return Rsh_Fir_user_version_inner4130229875_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4130229875_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4130229875 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4130229875/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_formula;  // formula
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_subset;  // subset
  SEXP Rsh_Fir_reg_na_action;  // na_action
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_data_isMissing;  // data_isMissing
  SEXP Rsh_Fir_reg_data_orDefault;  // data_orDefault
  SEXP Rsh_Fir_reg_terms;  // terms
  SEXP Rsh_Fir_reg_formula1_;  // formula1
  SEXP Rsh_Fir_reg_formula2_;  // formula2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_mt;  // mt
  SEXP Rsh_Fir_reg_mt1_;  // mt1
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_match_call1_;  // match_call1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_eval_parent;  // eval_parent
  SEXP Rsh_Fir_reg_mf;  // mf
  SEXP Rsh_Fir_reg_mf1_;  // mf1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg__check_vars_numeric;  // _check_vars_numeric
  SEXP Rsh_Fir_reg_mf2_;  // mf2
  SEXP Rsh_Fir_reg_mf3_;  // mf3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_mf4_;  // mf4
  SEXP Rsh_Fir_reg_mf5_;  // mf5
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_mf6_;  // mf6
  SEXP Rsh_Fir_reg_mf7_;  // mf7
  SEXP Rsh_Fir_reg_attr2_;  // attr2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_model_matrix;  // model_matrix
  SEXP Rsh_Fir_reg_mt2_;  // mt2
  SEXP Rsh_Fir_reg_mt3_;  // mt3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_mf8_;  // mf8
  SEXP Rsh_Fir_reg_mf9_;  // mf9
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_princomp_default;  // princomp_default
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_as_name;  // as_name
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_cl3_;  // cl3
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_na_act;  // na_act
  SEXP Rsh_Fir_reg_na_act1_;  // na_act1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_na_act2_;  // na_act2
  SEXP Rsh_Fir_reg_na_act3_;  // na_act3
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_na_act5_;  // na_act5
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_napredict;  // napredict
  SEXP Rsh_Fir_reg_na_act8_;  // na_act8
  SEXP Rsh_Fir_reg_na_act9_;  // na_act9
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sc;  // sc
  SEXP Rsh_Fir_reg_sc1_;  // sc1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_res4_;  // res4
  SEXP Rsh_Fir_reg_res5_;  // res5

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
  // st subset = subset
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_subset, RHO);
  (void)(Rsh_Fir_reg_subset);
  // st `na.action` = na_action
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_na_action, RHO);
  (void)(Rsh_Fir_reg_na_action);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // terms = ldf terms
  Rsh_Fir_reg_terms = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L1_:;
  // r6 = `>`(r4, 0.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L23() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L23()
    goto L23_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L4_:;
  // l1 = ld mf
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c1 = `is.object`(l1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L36(r13, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L36(r13, l1)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L36_;
  }

L5_:;
  // st mf = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // eval_parent = ldf `eval.parent`
  Rsh_Fir_reg_eval_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym2 = ldf attr
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf attr in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L8_:;
  // st `na.act` = r27
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L9_:;
  // st mt = r30
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // l4 = ld mt
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L54() else D22()
  // L54()
  goto L54_;

L10_:;
  // st cl = dx3
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L65() else D30()
  // L65()
  goto L65_;

L11_:;
  // r47 = `!`(r46)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c6 then L73() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L73()
    goto L73_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L16()
  // L16()
  goto L16_;

L13_:;
  // r52 = `!`(r50)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c10 then L86() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L86()
    goto L86_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15(NULL)
  // L15(NULL)
  Rsh_Fir_reg_r61_ = Rsh_const(CCP, 2);
  goto L15_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // res4 = ld res
  Rsh_Fir_reg_res4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L95() else D36()
  // L95()
  goto L95_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p = prom<V +>{
  //   formula1 = ld formula;
  //   formula2 = force? formula1;
  //   checkMissing(formula2);
  //   return formula2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_, CCP, RHO);
  // p1 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_1, CCP, RHO);
  // r2 = dyn terms[, data](p, p1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // st mt = r2
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // mt = ld mt
  Rsh_Fir_reg_mt = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

L20_:;
  // r3 = dyn base(<sym mt>, "response")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [mt]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_mt;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // mt1 = force? mt
  Rsh_Fir_reg_mt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mt);
  // checkMissing(mt1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_mt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r5 = dyn attr(mt1, "response")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_mt1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L23_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r7 = dyn stop("response not allowed in formula")
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

D5_:;
  // deopt 19 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L3()
  // L3()
  goto L3_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // r9 = dyn match_call()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 0, NULL, NULL, CCP, RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 24 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // st cl = r9
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // match_call1 = ldf `match.call`
  Rsh_Fir_reg_match_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // r10 = dyn match_call1[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

D9_:;
  // deopt 30 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // st mf = r10
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // l = ld mf
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ___ = ldf `$<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D10_:;
  // deopt 35 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_const(CCP, 2);
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r11 = dyn ___[, , `...`, ](l, NULL, ddd1, NULL)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D11_:;
  // deopt 38 [NULL, r11]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // st mf = r11
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym1 = ldf quote
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf quote in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r14 = dyn quote(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L4_;

L34_:;
  // r12 = dyn base1(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L4_;

L35_:;
  // dr = tryDispatchBuiltin.0("[[<-", l1, r13)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36(r13, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36(r13, dr)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L36_;
  }

L36_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r19 = dyn ____(l3, r13, 1)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r19_;
  goto L5_;

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D12_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p2 = prom<V +>{
  //   mf = ld mf;
  //   mf1 = force? mf;
  //   checkMissing(mf1);
  //   return mf1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_2, CCP, RHO);
  // r21 = dyn eval_parent(p2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval_parent, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

D13_:;
  // deopt 51 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // st mf = r21
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // _check_vars_numeric = ldf `.check_vars_numeric`
  Rsh_Fir_reg__check_vars_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L40() else D14()
  // L40()
  goto L40_;

D14_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p3 = prom<V +>{
  //   mf2 = ld mf;
  //   mf3 = force? mf2;
  //   checkMissing(mf3);
  //   return mf3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_3, CCP, RHO);
  // r23 = dyn _check_vars_numeric(p3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__check_vars_numeric, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L41() else D15()
  // L41()
  goto L41_;

D15_:;
  // deopt 56 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // c2 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c2 then L42() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L42()
    goto L42_;
  } else {
  // L6()
    goto L6_;
  }

L42_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L43() else D16()
  // L43()
  goto L43_;

D16_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // r24 = dyn stop1("PCA applies only to numerical variables")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L44() else D17()
  // L44()
  goto L44_;

D17_:;
  // deopt 60 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L7()
  // L7()
  goto L7_;

L46_:;
  // mf4 = ld mf
  Rsh_Fir_reg_mf4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

L47_:;
  // r26 = dyn base2(<sym mf>, "na.action")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r26)
  // L8(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L8_;

D18_:;
  // deopt 65 [mf4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_mf4_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L48_:;
  // mf5 = force? mf4
  Rsh_Fir_reg_mf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf4_);
  // checkMissing(mf5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_mf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r28 = dyn attr1(mf5, "na.action")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_mf5_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 69 [r28]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L8(r28)
  // L8(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L8_;

L50_:;
  // mf6 = ld mf
  Rsh_Fir_reg_mf6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L52() else D20()
  // L52()
  goto L52_;

L51_:;
  // r29 = dyn base3(<sym mf>, "terms")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(r29)
  // L9(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L9_;

D20_:;
  // deopt 73 [mf6]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_mf6_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // mf7 = force? mf6
  Rsh_Fir_reg_mf7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf6_);
  // checkMissing(mf7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_mf7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r31 = dyn attr2(mf7, "terms")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_mf7_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L53() else D21()
  // L53()
  goto L53_;

D21_:;
  // deopt 77 [r31]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L9(r31)
  // L9(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L9_;

D22_:;
  // deopt 82 [0.0, l4, 0.0]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_const(CCP, 8);
  Rsh_Fir_deopt(82, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // r32 = dyn attr__(l4, NULL, "intercept", 0.0)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L55() else D23()
  // L55()
  goto L55_;

D23_:;
  // deopt 85 [0.0, r32]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // st mt = r32
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // model_matrix = ldf `model.matrix`
  Rsh_Fir_reg_model_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L56() else D24()
  // L56()
  goto L56_;

D24_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p4 = prom<V +>{
  //   mt2 = ld mt;
  //   mt3 = force? mt2;
  //   checkMissing(mt3);
  //   return mt3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_4, CCP, RHO);
  // p5 = prom<V +>{
  //   mf8 = ld mf;
  //   mf9 = force? mf8;
  //   checkMissing(mf9);
  //   return mf9;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_5, CCP, RHO);
  // r35 = dyn model_matrix(p4, p5)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_matrix, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L57() else D25()
  // L57()
  goto L57_;

D25_:;
  // deopt 91 [r35]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L57_:;
  // st x = r35
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // princomp_default = ldf `princomp.default`
  Rsh_Fir_reg_princomp_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L58() else D26()
  // L58()
  goto L58_;

D26_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p6 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_6, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r37 = dyn princomp_default[, `...`](p6, ddd2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_princomp_default, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L59() else D27()
  // L59()
  goto L59_;

D27_:;
  // deopt 97 [r37]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L59_:;
  // st res = r37
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // as_name = ldf `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L60() else D28()
  // L60()
  goto L60_;

D28_:;
  // deopt 100 []
  Rsh_Fir_deopt(100, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // r38 = dyn as_name("princomp")
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L61() else D29()
  // L61()
  goto L61_;

D29_:;
  // deopt 102 [r38]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // l5 = ld cl
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c3 = `is.object`(l5)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c3 then L62() else L63(r38, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L62()
    goto L62_;
  } else {
  // L63(r38, l5)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L63_;
  }

L62_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l5, r38)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args47);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc1 then L64() else L63(r38, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L64()
    goto L64_;
  } else {
  // L63(r38, dr2)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr2_;
    goto L63_;
  }

L63_:;
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r43 = dyn ____1(l7, r38, 1)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L10(r43)
  // L10(r43)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r43_;
  goto L10_;

L64_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L10(dx2)
  // L10(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D30_:;
  // deopt 108 [cl]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L65_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // l8 = ld res
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c4 = `is.object`(l8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c4 then L67() else L68(cl1, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L67()
    goto L67_;
  } else {
  // L68(cl1, l8)
    Rsh_Fir_reg_cl3_ = Rsh_Fir_reg_cl1_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L68_;
  }

L66_:;
  // st res = dx5
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L67_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l8, cl1)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args54);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc2 then L69() else L68(cl1, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L69()
    goto L69_;
  } else {
  // L68(cl1, dr4)
    Rsh_Fir_reg_cl3_ = Rsh_Fir_reg_cl1_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr4_;
    goto L68_;
  }

L68_:;
  // r44 = `$<-`(l10, <sym call>, cl1)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L66(r44)
  // L66(r44)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r44_;
  goto L66_;

L69_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L66(dx4)
  // L66(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L66_;

L70_:;
  // na_act = ld `na.act`
  Rsh_Fir_reg_na_act = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L72() else D31()
  // L72()
  goto L72_;

L71_:;
  // r45 = dyn base4(<sym na.act>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r45)
  // L11(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L11_;

D31_:;
  // deopt 114 [na_act]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_na_act;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L72_:;
  // na_act1 = force? na_act
  Rsh_Fir_reg_na_act1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_act);
  // checkMissing(na_act1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_na_act1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c5 = `==`(na_act1, NULL)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_na_act1_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L11(c5)
  // L11(c5)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_c5_;
  goto L11_;

L73_:;
  // na_act2 = ld `na.act`
  Rsh_Fir_reg_na_act2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L74() else D32()
  // L74()
  goto L74_;

D32_:;
  // deopt 118 [na_act2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_na_act2_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L74_:;
  // na_act3 = force? na_act2
  Rsh_Fir_reg_na_act3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_act2_);
  // checkMissing(na_act3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_na_act3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // l11 = ld res
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c7 = `is.object`(l11)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c7 then L76() else L77(na_act3, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L76()
    goto L76_;
  } else {
  // L77(na_act3, l11)
    Rsh_Fir_reg_na_act5_ = Rsh_Fir_reg_na_act3_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L77_;
  }

L75_:;
  // st res = dx7
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard5 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L76_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l11, na_act3)
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args64[2] = Rsh_Fir_reg_na_act3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args64);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc3 then L78() else L77(na_act3, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L78()
    goto L78_;
  } else {
  // L77(na_act3, dr6)
    Rsh_Fir_reg_na_act5_ = Rsh_Fir_reg_na_act3_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr6_;
    goto L77_;
  }

L77_:;
  // r48 = `$<-`(l13, <sym na.action>, na_act3)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_na_act3_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L75(r48)
  // L75(r48)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r48_;
  goto L75_;

L78_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L75(dx6)
  // L75(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L75_;

L79_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L81() else D33()
  // L81()
  goto L81_;

L80_:;
  // r49 = dyn base5(<lang `<-`(sc, `$`(res, scores))>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L13(r49)
  // L13(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L13_;

D33_:;
  // deopt 124 [res]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L81_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(res1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c8 then L83() else L84(res1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L83()
    goto L83_;
  } else {
  // L84(res1)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_res1_;
    goto L84_;
  }

L82_:;
  // st sc = dx9
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // c9 = `==`(dx9, NULL)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L13(c9)
  // L13(c9)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_c9_;
  goto L13_;

L83_:;
  // dr8 = tryDispatchBuiltin.1("$", res1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc4 then L85() else L84(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L85()
    goto L85_;
  } else {
  // L84(dr8)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_dr8_;
    goto L84_;
  }

L84_:;
  // r51 = `$`(res3, <sym scores>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L82(r51)
  // L82(r51)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r51_;
  goto L82_;

L85_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L82(dx8)
  // L82(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L82_;

L86_:;
  // napredict = ldf napredict
  Rsh_Fir_reg_napredict = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L87() else D34()
  // L87()
  goto L87_;

D34_:;
  // deopt 131 []
  Rsh_Fir_deopt(131, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p7 = prom<V +>{
  //   na_act8 = ld `na.act`;
  //   na_act9 = force? na_act8;
  //   checkMissing(na_act9);
  //   return na_act9;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sc = ld sc;
  //   sc1 = force? sc;
  //   checkMissing(sc1);
  //   return sc1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4130229875_8, CCP, RHO);
  // r55 = dyn napredict(p7, p8)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_napredict, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L88() else D35()
  // L88()
  goto L88_;

D35_:;
  // deopt 134 [r55]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L88_:;
  // l14 = ld res
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c11 = `is.object`(l14)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c11 then L90() else L91(r55, l14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L90()
    goto L90_;
  } else {
  // L91(r55, l14)
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l14_;
    goto L91_;
  }

L89_:;
  // st res = dx11
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L15(r59)
  // L15(r59)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r59_;
  goto L15_;

L90_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l14, r55)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args80);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc5 then L92() else L91(r55, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L92()
    goto L92_;
  } else {
  // L91(r55, dr10)
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_dr10_;
    goto L91_;
  }

L91_:;
  // r60 = `$<-`(l16, <sym scores>, r55)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L89(r57, r60)
  // L89(r57, r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r60_;
  goto L89_;

L92_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L89(r55, dx10)
  // L89(r55, dx10)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L89_;

D36_:;
  // deopt 142 [res4]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_res4_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L95_:;
  // res5 = force? res4
  Rsh_Fir_reg_res5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res4_);
  // checkMissing(res5)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_res5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res5
  return Rsh_Fir_reg_res5_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_(SEXP CCP, SEXP RHO) {
  // formula1 = ld formula
  Rsh_Fir_reg_formula1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // formula2 = force? formula1
  Rsh_Fir_reg_formula2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula1_);
  // checkMissing(formula2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_formula2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return formula2
  return Rsh_Fir_reg_formula2_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_1(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_2(SEXP CCP, SEXP RHO) {
  // mf = ld mf
  Rsh_Fir_reg_mf = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // mf1 = force? mf
  Rsh_Fir_reg_mf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf);
  // checkMissing(mf1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_mf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return mf1
  return Rsh_Fir_reg_mf1_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_3(SEXP CCP, SEXP RHO) {
  // mf2 = ld mf
  Rsh_Fir_reg_mf2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // mf3 = force? mf2
  Rsh_Fir_reg_mf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf2_);
  // checkMissing(mf3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_mf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return mf3
  return Rsh_Fir_reg_mf3_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_4(SEXP CCP, SEXP RHO) {
  // mt2 = ld mt
  Rsh_Fir_reg_mt2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // mt3 = force? mt2
  Rsh_Fir_reg_mt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mt2_);
  // checkMissing(mt3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_mt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return mt3
  return Rsh_Fir_reg_mt3_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_5(SEXP CCP, SEXP RHO) {
  // mf8 = ld mf
  Rsh_Fir_reg_mf8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // mf9 = force? mf8
  Rsh_Fir_reg_mf9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf8_);
  // checkMissing(mf9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_mf9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return mf9
  return Rsh_Fir_reg_mf9_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_6(SEXP CCP, SEXP RHO) {
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_7(SEXP CCP, SEXP RHO) {
  // na_act8 = ld `na.act`
  Rsh_Fir_reg_na_act8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // na_act9 = force? na_act8
  Rsh_Fir_reg_na_act9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_act8_);
  // checkMissing(na_act9)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_na_act9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return na_act9
  return Rsh_Fir_reg_na_act9_;
}
SEXP Rsh_Fir_user_promise_inner4130229875_8(SEXP CCP, SEXP RHO) {
  // sc = ld sc
  Rsh_Fir_reg_sc = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // sc1 = force? sc
  Rsh_Fir_reg_sc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc);
  // checkMissing(sc1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return sc1
  return Rsh_Fir_reg_sc1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
