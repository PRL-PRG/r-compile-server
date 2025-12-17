#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner751963283_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner751963283_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner751963283_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner751963283
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner751963283_, RHO, CCP);
  // st `cor.test.formula` = r
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
SEXP Rsh_Fir_user_function_inner751963283_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner751963283 dynamic dispatch ([formula, data, subset, `na.action`, `...`])

  return Rsh_Fir_user_version_inner751963283_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner751963283_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner751963283 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner751963283/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_formula;  // formula
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_subset;  // subset
  SEXP Rsh_Fir_reg_na_action;  // na_action
  SEXP Rsh_Fir_reg_ddd;  // ddd
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
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_formula3_;  // formula3
  SEXP Rsh_Fir_reg_formula4_;  // formula4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_as_data_frame;  // as_data_frame
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_eval1_;  // eval1
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_parent_frame1_;  // parent_frame1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_mf;  // mf
  SEXP Rsh_Fir_reg_mf1_;  // mf1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_mf2_;  // mf2
  SEXP Rsh_Fir_reg_mf3_;  // mf3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_cor_test;  // cor_test
  SEXP Rsh_Fir_reg_mf4_;  // mf4
  SEXP Rsh_Fir_reg_mf5_;  // mf5
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_mf7_;  // mf7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_mf8_;  // mf8
  SEXP Rsh_Fir_reg_mf9_;  // mf9
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_mf11_;  // mf11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_DNAME;  // DNAME
  SEXP Rsh_Fir_reg_DNAME1_;  // DNAME1
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_DNAME3_;  // DNAME3
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r59_;  // r59
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
  // st `na.action` = na_action
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_na_action, RHO);
  (void)(Rsh_Fir_reg_na_action);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L1(c) else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L1_;
  } else {
  // L17()
    goto L17_;
  }

L1_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c9 then L3(c9) else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L3(c9)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c9_;
    goto L3_;
  } else {
  // L23()
    goto L23_;
  }

L2_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L1(c7)
  // L1(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L1_;

L3_:;
  // c18 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c18 then L29() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L29()
    goto L29_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // r10 = `!=`(r8, 2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c16 = `||`(c14, c15)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L3(c16)
  // L3(c16)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c16_;
  goto L3_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

L7_:;
  // c20 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c20 then L40() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L40()
    goto L40_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym4 = ldf quote
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf quote in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L10_:;
  // l3 = ld m
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c22 = `is.object`(l3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c22 then L50() else L51(r31, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L50()
    goto L50_;
  } else {
  // L51(r31, l3)
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r31_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L51_;
  }

L11_:;
  // st m = dx5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // l6 = ld m
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ___ = ldf `$<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

L12_:;
  // r46 = `!=`(r44, 2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c23 then L61() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L61()
    goto L61_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

L15_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn missing(<sym formula>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L16_:;
  // r = dyn base(<sym formula>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L17_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // formula1 = ld formula
  Rsh_Fir_reg_formula1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r3 = dyn base1(<sym formula>, "formula")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(c, r3)
  // L2(c, r3)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D0_:;
  // deopt 5 [c, formula1]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_formula1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // formula2 = force? formula1
  Rsh_Fir_reg_formula2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula1_);
  // checkMissing(formula2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_formula2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r5 = dyn inherits(formula2, "formula", FALSE)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_formula2_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D1_:;
  // deopt 10 [c, r5]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L2(c, r5)
  // L2(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L23_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // formula3 = ld formula
  Rsh_Fir_reg_formula3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L25_:;
  // r7 = dyn base2(<sym formula>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(c9, r7)
  // L4(c9, r7)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D2_:;
  // deopt 15 [c9, formula3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_formula3_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // formula4 = force? formula3
  Rsh_Fir_reg_formula4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula3_);
  // checkMissing(formula4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_formula4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r9 = dyn length(formula4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_formula4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 18 [c9, r9]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L4(c9, r9)
  // L4(c9, r9)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L29_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // r11 = dyn stop("'formula' missing or invalid")
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D5_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L6()
  // L6()
  goto L6_;

D6_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r13 = dyn match_call[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

D7_:;
  // deopt 32 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L34_:;
  // st m = r13
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym3 = ldf `is.matrix`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf `is.matrix` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

L36_:;
  // r14 = dyn base3(<lang eval(`$`(m, data), parent.frame())>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L7_;

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   c19 = `is.object`(m1);
  //   if c19 then L1() else L2(m1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", m1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(m3):
  //   r16 = `$`(m3, <sym data>);
  //   goto L0(r16);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_, CCP, RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r18 = dyn parent_frame();
  //   return r18;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_1, CCP, RHO);
  // r20 = dyn eval(p, p1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

D9_:;
  // deopt 40 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L38_:;
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r21 = dyn is_matrix(r20)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 42 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r21_;
  goto L7_;

L40_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p2 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_2, CCP, RHO);
  // r23 = dyn as_data_frame(p2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 46 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c21 = `is.object`(l)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c21 then L44() else L45(r23, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L44()
    goto L44_;
  } else {
  // L45(r23, l)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L45_;
  }

L43_:;
  // st m = dx3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L9()
  // L9()
  goto L9_;

L44_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l, r23)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args40);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc1 then L46() else L45(r23, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L46()
    goto L46_;
  } else {
  // L45(r23, dr2)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L45_;
  }

L45_:;
  // r28 = `$<-`(l2, <sym data>, r23)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L43(r25, r28)
  // L43(r25, r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r28_;
  goto L43_;

L46_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L43(r23, dx2)
  // L43(r23, dx2)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L43_;

L48_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r32 = dyn quote(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L10_;

L49_:;
  // r30 = dyn base4(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r30)
  // L10(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L10_;

L50_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l3, r31)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args46[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args46);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc2 then L52() else L51(r31, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L52()
    goto L52_;
  } else {
  // L51(r31, dr4)
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r31_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr4_;
    goto L51_;
  }

L51_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r37 = dyn ____(l5, r31, 1)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L11(r37)
  // L11(r37)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r37_;
  goto L11_;

L52_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L11(dx4)
  // L11(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L11_;

D13_:;
  // deopt 63 [NULL, l6, NULL]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_const(CCP, 31);
  Rsh_Fir_deopt(63, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L53_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r38 = dyn ___[, , `...`, ](l6, NULL, ddd1, NULL)
  SEXP Rsh_Fir_array_args50[4];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

D14_:;
  // deopt 66 [NULL, r38]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // st m = r38
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

D15_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p3 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_3, CCP, RHO);
  // p4 = prom<V +>{
  //   parent_frame1 = ldf `parent.frame`;
  //   r40 = dyn parent_frame1();
  //   return r40;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_4, CCP, RHO);
  // r42 = dyn eval1(p3, p4)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

D16_:;
  // deopt 72 [r42]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L56_:;
  // st mf = r42
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard5 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // mf = ld mf
  Rsh_Fir_reg_mf = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L59() else D17()
  // L59()
  goto L59_;

L58_:;
  // r43 = dyn base5(<sym mf>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(r43)
  // L12(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L12_;

D17_:;
  // deopt 76 [mf]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_mf;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // mf1 = force? mf
  Rsh_Fir_reg_mf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf);
  // checkMissing(mf1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_mf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r45 = dyn length1(mf1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_mf1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L60() else D18()
  // L60()
  goto L60_;

D18_:;
  // deopt 79 [r45]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L12(r45)
  // L12(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L12_;

L61_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

D19_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // r47 = dyn stop1("invalid formula")
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

D20_:;
  // deopt 85 [r47]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L14()
  // L14()
  goto L14_;

D21_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p5 = prom<V +>{
  //   sym6 = ldf names;
  //   base6 = ldf names in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r50):
  //   return r50;
  // L1():
  //   mf2 = ld mf;
  //   mf3 = force? mf2;
  //   checkMissing(mf3);
  //   names = ldf names in base;
  //   r51 = dyn names(mf3);
  //   goto L0(r51);
  // L2():
  //   r49 = dyn base6(<sym mf>);
  //   goto L0(r49);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_5, CCP, RHO);
  // r53 = dyn paste[, collapse](p5, " and ")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L66() else D22()
  // L66()
  goto L66_;

D22_:;
  // deopt 93 [r53]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L66_:;
  // st DNAME = r53
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // cor_test = ldf `cor.test`
  Rsh_Fir_reg_cor_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

D23_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p6 = prom<V +>{
  //   mf4 = ld mf;
  //   mf5 = force? mf4;
  //   checkMissing(mf5);
  //   c24 = `is.object`(mf5);
  //   if c24 then L1() else L2(mf5);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", mf5);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(mf7):
  //   __ = ldf `[[` in base;
  //   r54 = dyn __(mf7, 1);
  //   goto L0(r54);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_6, CCP, RHO);
  // p7 = prom<V +>{
  //   mf8 = ld mf;
  //   mf9 = force? mf8;
  //   checkMissing(mf9);
  //   c25 = `is.object`(mf9);
  //   if c25 then L1() else L2(mf9);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[[", mf9);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(mf11):
  //   __1 = ldf `[[` in base;
  //   r56 = dyn __1(mf11, 2);
  //   goto L0(r56);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_7, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r58 = dyn cor_test[x, y, `...`](p6, p7, ddd2)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_arg_names25[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cor_test, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L68() else D24()
  // L68()
  goto L68_;

D24_:;
  // deopt 102 [r58]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L68_:;
  // st y = r58
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L69() else D25()
  // L69()
  goto L69_;

D25_:;
  // deopt 104 [DNAME]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_DNAME;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L69_:;
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // l7 = ld y
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // c26 = `is.object`(l7)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c26 then L71() else L72(DNAME1, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L71()
    goto L71_;
  } else {
  // L72(DNAME1, l7)
    Rsh_Fir_reg_DNAME3_ = Rsh_Fir_reg_DNAME1_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L72_;
  }

L70_:;
  // st y = dx11
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L74() else D26()
  // L74()
  goto L74_;

L71_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l7, DNAME1)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_DNAME1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args78);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc5 then L73() else L72(DNAME1, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L73()
    goto L73_;
  } else {
  // L72(DNAME1, dr10)
    Rsh_Fir_reg_DNAME3_ = Rsh_Fir_reg_DNAME1_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr10_;
    goto L72_;
  }

L72_:;
  // r59 = `$<-`(l9, <sym data.name>, DNAME1)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_DNAME1_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L70(r59)
  // L70(r59)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r59_;
  goto L70_;

L73_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L70(dx10)
  // L70(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L70_;

D26_:;
  // deopt 109 [y]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L74_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_inner751963283_(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(m1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c19 then L1() else L2(m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
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
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
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
  // r16 = `$`(m3, <sym data>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner751963283_1(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r18 = dyn parent_frame()
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_inner751963283_2(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner751963283_3(SEXP CCP, SEXP RHO) {
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_inner751963283_4(SEXP CCP, SEXP RHO) {
  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r40 = dyn parent_frame1()
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 0, NULL, NULL, CCP, RHO);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_inner751963283_5(SEXP CCP, SEXP RHO) {
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r50
  return Rsh_Fir_reg_r50_;

L1_:;
  // mf2 = ld mf
  Rsh_Fir_reg_mf2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // mf3 = force? mf2
  Rsh_Fir_reg_mf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf2_);
  // checkMissing(mf3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_mf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r51 = dyn names(mf3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_mf3_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L0_;

L2_:;
  // r49 = dyn base6(<sym mf>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner751963283_6(SEXP CCP, SEXP RHO) {
  // mf4 = ld mf
  Rsh_Fir_reg_mf4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // mf5 = force? mf4
  Rsh_Fir_reg_mf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf4_);
  // checkMissing(mf5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_mf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(mf5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_mf5_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c24 then L1() else L2(mf5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf5)
    Rsh_Fir_reg_mf7_ = Rsh_Fir_reg_mf5_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", mf5)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_mf5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_mf7_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r54 = dyn __(mf7, 1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_mf7_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r54_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner751963283_7(SEXP CCP, SEXP RHO) {
  // mf8 = ld mf
  Rsh_Fir_reg_mf8_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // mf9 = force? mf8
  Rsh_Fir_reg_mf9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf8_);
  // checkMissing(mf9)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_mf9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(mf9)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_mf9_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c25 then L1() else L2(mf9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf9)
    Rsh_Fir_reg_mf11_ = Rsh_Fir_reg_mf9_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[[", mf9)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_mf9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_mf11_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r56 = dyn __1(mf11, 2)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_mf11_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r56_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
