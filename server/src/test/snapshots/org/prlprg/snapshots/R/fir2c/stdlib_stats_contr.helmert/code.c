#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner431752210_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner431752210_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner431752210_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner431752210_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner431752210
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner431752210_, RHO, CCP);
  // st `contr.helmert` = r
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
SEXP Rsh_Fir_user_function_inner431752210_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner431752210 dynamic dispatch ([n, contrasts, sparse])

  return Rsh_Fir_user_version_inner431752210_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner431752210_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner431752210 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner431752210/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_contrasts;  // contrasts
  SEXP Rsh_Fir_reg_sparse;  // sparse
  SEXP Rsh_Fir_reg_contrasts_isMissing;  // contrasts_isMissing
  SEXP Rsh_Fir_reg_contrasts_orDefault;  // contrasts_orDefault
  SEXP Rsh_Fir_reg_sparse_isMissing;  // sparse_isMissing
  SEXP Rsh_Fir_reg_sparse_orDefault;  // sparse_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_levels;  // levels
  SEXP Rsh_Fir_reg_levels1_;  // levels1
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_contrasts1_;  // contrasts1
  SEXP Rsh_Fir_reg_contrasts2_;  // contrasts2
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_levels2_;  // levels2
  SEXP Rsh_Fir_reg_levels3_;  // levels3
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_array;  // array
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_n14_;  // n14
  SEXP Rsh_Fir_reg_n15_;  // n15
  SEXP Rsh_Fir_reg_n16_;  // n16
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_levels4_;  // levels4
  SEXP Rsh_Fir_reg_levels5_;  // levels5
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_cont;  // cont
  SEXP Rsh_Fir_reg_cont1_;  // cont1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_row;  // row
  SEXP Rsh_Fir_reg_cont2_;  // cont2
  SEXP Rsh_Fir_reg_cont3_;  // cont3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_n17_;  // n17
  SEXP Rsh_Fir_reg_n18_;  // n18
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_col1_;  // col1
  SEXP Rsh_Fir_reg_cont4_;  // cont4
  SEXP Rsh_Fir_reg_cont5_;  // cont5
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_row1_;  // row1
  SEXP Rsh_Fir_reg_cont6_;  // cont6
  SEXP Rsh_Fir_reg_cont7_;  // cont7
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_colnames__;  // colnames__
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sparse1_;  // sparse1
  SEXP Rsh_Fir_reg_sparse2_;  // sparse2
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg__asSparse;  // _asSparse
  SEXP Rsh_Fir_reg_cont8_;  // cont8
  SEXP Rsh_Fir_reg_cont9_;  // cont9
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_cont10_;  // cont10
  SEXP Rsh_Fir_reg_cont11_;  // cont11
  SEXP Rsh_Fir_reg__Diag;  // _Diag
  SEXP Rsh_Fir_reg_levels6_;  // levels6
  SEXP Rsh_Fir_reg_levels7_;  // levels7
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_sparse3_;  // sparse3
  SEXP Rsh_Fir_reg_sparse4_;  // sparse4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r66_;  // r66

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_contrasts = PARAMS[1];
  Rsh_Fir_reg_sparse = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // contrasts_isMissing = missing.0(contrasts)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_contrasts;
  Rsh_Fir_reg_contrasts_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if contrasts_isMissing then L0(TRUE) else L0(contrasts)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_contrasts_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_contrasts_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(contrasts)
    Rsh_Fir_reg_contrasts_orDefault = Rsh_Fir_reg_contrasts;
    goto L0_;
  }

L0_:;
  // st contrasts = contrasts_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_contrasts_orDefault, RHO);
  (void)(Rsh_Fir_reg_contrasts_orDefault);
  // sparse_isMissing = missing.0(sparse)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sparse;
  Rsh_Fir_reg_sparse_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if sparse_isMissing then L1(FALSE) else L1(sparse)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sparse_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_sparse_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(sparse)
    Rsh_Fir_reg_sparse_orDefault = Rsh_Fir_reg_sparse;
    goto L1_;
  }

L1_:;
  // st sparse = sparse_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_sparse_orDefault, RHO);
  (void)(Rsh_Fir_reg_sparse_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L2_:;
  // r3 = `<=`(r1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L23() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L23()
    goto L23_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // n11 = ld n
  Rsh_Fir_reg_n11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

L4_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L28() else L5(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L5(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L5_;
  }

L5_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c10 then L34() else L7(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L34()
    goto L34_;
  } else {
  // L7(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L7_;
  }

L6_:;
  // r10 = `==`(r8, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L5(c8)
  // L5(c8)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c8_;
  goto L5_;

L7_:;
  // c16 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c16 then L37() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L37()
    goto L37_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L9_:;
  // st levels = r13
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // goto L10(r13)
  // L10(r13)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
  goto L10_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym4 = ldf `as.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf `as.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L12_:;
  // st levels = r19
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // contrasts1 = ld contrasts
  Rsh_Fir_reg_contrasts1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

L13_:;
  // _Diag = ldf `.Diag`
  Rsh_Fir_reg__Diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L84() else D33()
  // L84()
  goto L84_;

L14_:;
  // st n = r22
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

L15_:;
  // st cont = dx1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym8 = ldf seq_len
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf seq_len in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard8 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L16_:;
  // l3 = ld cont
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c20 = `is.object`(l3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c20 then L68() else L69(r47, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L68()
    goto L68_;
  } else {
  // L69(r47, l3)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r47_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L69_;
  }

L17_:;
  // st cont = dx3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l6 = ld cont
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L75() else D27()
  // L75()
  goto L75_;

L18_:;
  // cont10 = ld cont
  Rsh_Fir_reg_cont10_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L82() else D32()
  // L82()
  goto L82_;

L19_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

L20_:;
  // r = dyn base(<sym n>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [n1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L21_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn length(n2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L23_:;
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L25_:;
  // r4 = dyn base1(<sym n>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

D2_:;
  // deopt 10 [n3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r6 = dyn is_numeric(n4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;

L28_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

L30_:;
  // r7 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(c1, r7)
  // L6(c1, r7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L6_;

D4_:;
  // deopt 16 [c1, n5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r9 = dyn length1(n6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

D5_:;
  // deopt 19 [c1, r9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L6(c1, r9)
  // L6(c1, r9)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L6_;

L34_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

D6_:;
  // deopt 23 [c10, n7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r11 = `>`(n8, 1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // c14 = `&&`(c10, c13)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L7(c14)
  // L7(c14)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c14_;
  goto L7_;

L37_:;
  // sym3 = ldf seq_len
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf seq_len in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L39_:;
  // r12 = dyn base3(<sym n>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(r12)
  // L9(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L9_;

D7_:;
  // deopt 29 [n9]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r14 = seq_len(n10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L9_;

D8_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // r16 = dyn stop("not enough degrees of freedom to define contrasts")
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

D9_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L10(r16)
  // L10(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L10_;

D10_:;
  // deopt 37 [n11]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // n12 = force? n11
  Rsh_Fir_reg_n12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n11_);
  // checkMissing(n12)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_n12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // st levels = n12
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_n12_, RHO);
  (void)(Rsh_Fir_reg_n12_);
  // goto L11()
  // L11()
  goto L11_;

L46_:;
  // levels = ld levels
  Rsh_Fir_reg_levels = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L47_:;
  // r18 = dyn base4(<sym levels>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L12(r18)
  // L12(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L12_;

D11_:;
  // deopt 42 [levels]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_levels;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L48_:;
  // levels1 = force? levels
  Rsh_Fir_reg_levels1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_levels);
  // checkMissing(levels1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_levels1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r20 = dyn as_character(levels1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_levels1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

D12_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L12_;

D13_:;
  // deopt 47 [contrasts1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_contrasts1_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L50_:;
  // contrasts2 = force? contrasts1
  Rsh_Fir_reg_contrasts2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contrasts1_);
  // checkMissing(contrasts2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_contrasts2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(contrasts2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_contrasts2_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c17 then L51() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L51()
    goto L51_;
  } else {
  // L13()
    goto L13_;
  }

L51_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard5 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // levels2 = ld levels
  Rsh_Fir_reg_levels2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

L53_:;
  // r21 = dyn base5(<sym levels>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L14(r21)
  // L14(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L14_;

D14_:;
  // deopt 51 [levels2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_levels2_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // levels3 = force? levels2
  Rsh_Fir_reg_levels3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_levels2_);
  // checkMissing(levels3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_levels3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r23 = dyn length2(levels3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_levels3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

D15_:;
  // deopt 54 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L14(r23)
  // L14(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L14_;

D16_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r26):
  //   return r26;
  // L1():
  //   n13 = ld n;
  //   n14 = force? n13;
  //   checkMissing(n14);
  //   n15 = ld n;
  //   n16 = force? n15;
  //   checkMissing(n16);
  //   r27 = `-`(n16, 1);
  //   c18 = ldf c in base;
  //   r28 = dyn c18(n14, r27);
  //   goto L0(r28);
  // L2():
  //   r25 = dyn base6(<sym n>, <lang `-`(n, 1)>);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym7 = ldf list;
  //   base7 = ldf list in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r31):
  //   return r31;
  // L1():
  //   levels4 = ld levels;
  //   levels5 = force? levels4;
  //   checkMissing(levels5);
  //   list = ldf list in base;
  //   r32 = dyn list(levels5, NULL);
  //   goto L0(r32);
  // L2():
  //   r30 = dyn base7(<sym levels>, NULL);
  //   goto L0(r30);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_2, CCP, RHO);
  // r34 = dyn array(p, p1, p2)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

D17_:;
  // deopt 61 [r34]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L57_:;
  // st cont = r34
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // l = ld cont
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c19 = `is.object`(l)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c19 then L58() else L59(0.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L58()
    goto L58_;
  } else {
  // L59(0.0, l)
    Rsh_Fir_reg_r36_ = Rsh_const(CCP, 23);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L59_;
  }

L58_:;
  // dr = tryDispatchBuiltin.0("[<-", l, 0.0)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args56);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc then L60() else L59(0.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L60()
    goto L60_;
  } else {
  // L59(0.0, dr)
    Rsh_Fir_reg_r36_ = Rsh_const(CCP, 23);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L59_;
  }

L59_:;
  // col = ldf col
  Rsh_Fir_reg_col = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

L60_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

D18_:;
  // deopt 67 [r36, l2, 0.0]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_const(CCP, 23);
  Rsh_Fir_deopt(67, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L61_:;
  // p3 = prom<V +>{
  //   cont = ld cont;
  //   cont1 = force? cont;
  //   checkMissing(cont1);
  //   return cont1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_3, CCP, RHO);
  // r40 = dyn col(p3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_col, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

D19_:;
  // deopt 69 [r36, l2, 0.0, r40]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(69, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L62_:;
  // row = ldf row
  Rsh_Fir_reg_row = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

D20_:;
  // deopt 70 [r36, l2, 0.0, r40]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(70, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L63_:;
  // p4 = prom<V +>{
  //   cont2 = ld cont;
  //   cont3 = force? cont2;
  //   checkMissing(cont3);
  //   return cont3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_4, CCP, RHO);
  // r42 = dyn row(p4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

D21_:;
  // deopt 72 [r36, l2, 0.0, r40, r42]
  SEXP Rsh_Fir_array_deopt_stack19[5];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack19[4] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(72, 5, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L64_:;
  // r43 = `-`(r42, 2)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // r44 = `<=`(r40, r43)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r45 = dyn ___(l2, 0.0, r44)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(r45)
  // L15(r45)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r45_;
  goto L15_;

L65_:;
  // n17 = ld n
  Rsh_Fir_reg_n17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L67() else D22()
  // L67()
  goto L67_;

L66_:;
  // r46 = dyn base8(<lang `-`(n, 1)>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(r46)
  // L16(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L16_;

D22_:;
  // deopt 79 [n17]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_n17_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L67_:;
  // n18 = force? n17
  Rsh_Fir_reg_n18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n17_);
  // checkMissing(n18)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_n18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r48 = `-`(n18, 1)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_n18_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // r49 = seq_len(r48)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L16(r49)
  // L16(r49)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r49_;
  goto L16_;

L68_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l3, r47)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc1 then L70() else L69(r47, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L70()
    goto L70_;
  } else {
  // L69(r47, dr2)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r47_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L69_;
  }

L69_:;
  // col1 = ldf col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L71() else D23()
  // L71()
  goto L71_;

L70_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L17(dx2)
  // L17(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L17_;

D23_:;
  // deopt 86 [r51, l5, r47]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(86, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // p5 = prom<V +>{
  //   cont4 = ld cont;
  //   cont5 = force? cont4;
  //   checkMissing(cont5);
  //   return cont5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_5, CCP, RHO);
  // r55 = dyn col1(p5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_col1_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L72() else D24()
  // L72()
  goto L72_;

D24_:;
  // deopt 88 [r51, l5, r47, r55]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(88, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // row1 = ldf row
  Rsh_Fir_reg_row1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L73() else D25()
  // L73()
  goto L73_;

D25_:;
  // deopt 89 [r51, l5, r47, r55]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(89, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L73_:;
  // p6 = prom<V +>{
  //   cont6 = ld cont;
  //   cont7 = force? cont6;
  //   checkMissing(cont7);
  //   return cont7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_6, CCP, RHO);
  // r57 = dyn row1(p6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row1_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L74() else D26()
  // L74()
  goto L74_;

D26_:;
  // deopt 91 [r51, l5, r47, r55, r57]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(91, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L74_:;
  // r58 = `-`(r57, 1)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // r59 = `==`(r55, r58)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r60 = dyn ___1(l5, r47, r59)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L17(r60)
  // L17(r60)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r60_;
  goto L17_;

D27_:;
  // deopt 100 [NULL, l6, NULL]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_const(CCP, 22);
  Rsh_Fir_deopt(100, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L75_:;
  // r61 = dyn colnames__(l6, NULL, NULL)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L76() else D28()
  // L76()
  goto L76_;

D28_:;
  // deopt 102 [NULL, r61]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L76_:;
  // st cont = r61
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // sparse1 = ld sparse
  Rsh_Fir_reg_sparse1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L77() else D29()
  // L77()
  goto L77_;

D29_:;
  // deopt 104 [sparse1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_sparse1_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L77_:;
  // sparse2 = force? sparse1
  Rsh_Fir_reg_sparse2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sparse1_);
  // checkMissing(sparse2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sparse2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c21 = `as.logical`(sparse2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sparse2_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c21 then L78() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L78()
    goto L78_;
  } else {
  // L18()
    goto L18_;
  }

L78_:;
  // _asSparse = ldf `.asSparse`
  Rsh_Fir_reg__asSparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L79() else D30()
  // L79()
  goto L79_;

D30_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p7 = prom<V +>{
  //   cont8 = ld cont;
  //   cont9 = force? cont8;
  //   checkMissing(cont9);
  //   return cont9;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_7, CCP, RHO);
  // r63 = dyn _asSparse(p7)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__asSparse, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L80() else D31()
  // L80()
  goto L80_;

D31_:;
  // deopt 109 [r63]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L80_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r63
  return Rsh_Fir_reg_r63_;

D32_:;
  // deopt 110 [cont10]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_cont10_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L82_:;
  // cont11 = force? cont10
  Rsh_Fir_reg_cont11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cont10_);
  // checkMissing(cont11)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_cont11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return cont11
  return Rsh_Fir_reg_cont11_;

D33_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // p8 = prom<V +>{
  //   levels6 = ld levels;
  //   levels7 = force? levels6;
  //   checkMissing(levels7);
  //   return levels7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_8, CCP, RHO);
  // p9 = prom<V +>{
  //   sparse3 = ld sparse;
  //   sparse4 = force? sparse3;
  //   checkMissing(sparse4);
  //   return sparse4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner431752210_9, CCP, RHO);
  // r66 = dyn _Diag[, sparse](p8, p9)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Diag, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L85() else D34()
  // L85()
  goto L85_;

D34_:;
  // deopt 117 [r66]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L85_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r66
  return Rsh_Fir_reg_r66_;
}
SEXP Rsh_Fir_user_promise_inner431752210_(SEXP CCP, SEXP RHO) {
  // return -1.0
  return Rsh_const(CCP, 18);
}
SEXP Rsh_Fir_user_promise_inner431752210_1(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r26
  return Rsh_Fir_reg_r26_;

L1_:;
  // n13 = ld n
  Rsh_Fir_reg_n13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n14 = force? n13
  Rsh_Fir_reg_n14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n13_);
  // checkMissing(n14)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_n14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // n15 = ld n
  Rsh_Fir_reg_n15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n16 = force? n15
  Rsh_Fir_reg_n16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n15_);
  // checkMissing(n16)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_n16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r27 = `-`(n16, 1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_n16_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r28 = dyn c18(n14, r27)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_n14_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r25 = dyn base6(<sym n>, <lang `-`(n, 1)>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner431752210_2(SEXP CCP, SEXP RHO) {
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r31
  return Rsh_Fir_reg_r31_;

L1_:;
  // levels4 = ld levels
  Rsh_Fir_reg_levels4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // levels5 = force? levels4
  Rsh_Fir_reg_levels5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_levels4_);
  // checkMissing(levels5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_levels5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r32 = dyn list(levels5, NULL)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_levels5_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L0_;

L2_:;
  // r30 = dyn base7(<sym levels>, NULL)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner431752210_3(SEXP CCP, SEXP RHO) {
  // cont = ld cont
  Rsh_Fir_reg_cont = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // cont1 = force? cont
  Rsh_Fir_reg_cont1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cont);
  // checkMissing(cont1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_cont1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return cont1
  return Rsh_Fir_reg_cont1_;
}
SEXP Rsh_Fir_user_promise_inner431752210_4(SEXP CCP, SEXP RHO) {
  // cont2 = ld cont
  Rsh_Fir_reg_cont2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // cont3 = force? cont2
  Rsh_Fir_reg_cont3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cont2_);
  // checkMissing(cont3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_cont3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return cont3
  return Rsh_Fir_reg_cont3_;
}
SEXP Rsh_Fir_user_promise_inner431752210_5(SEXP CCP, SEXP RHO) {
  // cont4 = ld cont
  Rsh_Fir_reg_cont4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // cont5 = force? cont4
  Rsh_Fir_reg_cont5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cont4_);
  // checkMissing(cont5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_cont5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return cont5
  return Rsh_Fir_reg_cont5_;
}
SEXP Rsh_Fir_user_promise_inner431752210_6(SEXP CCP, SEXP RHO) {
  // cont6 = ld cont
  Rsh_Fir_reg_cont6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // cont7 = force? cont6
  Rsh_Fir_reg_cont7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cont6_);
  // checkMissing(cont7)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_cont7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return cont7
  return Rsh_Fir_reg_cont7_;
}
SEXP Rsh_Fir_user_promise_inner431752210_7(SEXP CCP, SEXP RHO) {
  // cont8 = ld cont
  Rsh_Fir_reg_cont8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // cont9 = force? cont8
  Rsh_Fir_reg_cont9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cont8_);
  // checkMissing(cont9)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_cont9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return cont9
  return Rsh_Fir_reg_cont9_;
}
SEXP Rsh_Fir_user_promise_inner431752210_8(SEXP CCP, SEXP RHO) {
  // levels6 = ld levels
  Rsh_Fir_reg_levels6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // levels7 = force? levels6
  Rsh_Fir_reg_levels7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_levels6_);
  // checkMissing(levels7)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_levels7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return levels7
  return Rsh_Fir_reg_levels7_;
}
SEXP Rsh_Fir_user_promise_inner431752210_9(SEXP CCP, SEXP RHO) {
  // sparse3 = ld sparse
  Rsh_Fir_reg_sparse3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // sparse4 = force? sparse3
  Rsh_Fir_reg_sparse4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sparse3_);
  // checkMissing(sparse4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sparse4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return sparse4
  return Rsh_Fir_reg_sparse4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
