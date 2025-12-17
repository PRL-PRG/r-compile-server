#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4100279241_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4100279241_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4100279241_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4100279241_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4100279241_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner4100279241
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4100279241_, RHO, CCP);
  // st `rowsum.default` = r
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
SEXP Rsh_Fir_user_function_inner4100279241_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4100279241 dynamic dispatch ([x, group, reorder, `na.rm`, `...`])

  return Rsh_Fir_user_version_inner4100279241_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4100279241_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4100279241 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4100279241/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_group;  // group
  SEXP Rsh_Fir_reg_reorder;  // reorder
  SEXP Rsh_Fir_reg_na_rm;  // na_rm
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_reorder_isMissing;  // reorder_isMissing
  SEXP Rsh_Fir_reg_reorder_orDefault;  // reorder_orDefault
  SEXP Rsh_Fir_reg_na_rm_isMissing;  // na_rm_isMissing
  SEXP Rsh_Fir_reg_na_rm_orDefault;  // na_rm_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_group1_;  // group1
  SEXP Rsh_Fir_reg_group2_;  // group2
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_nr;  // nr
  SEXP Rsh_Fir_reg_nr1_;  // nr1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_group3_;  // group3
  SEXP Rsh_Fir_reg_group4_;  // group4
  SEXP Rsh_Fir_reg_anyNA;  // anyNA
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_group5_;  // group5
  SEXP Rsh_Fir_reg_group6_;  // group6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_reorder1_;  // reorder1
  SEXP Rsh_Fir_reg_reorder2_;  // reorder2
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_ugroup;  // ugroup
  SEXP Rsh_Fir_reg_ugroup1_;  // ugroup1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_group7_;  // group7
  SEXP Rsh_Fir_reg_group8_;  // group8
  SEXP Rsh_Fir_reg_ugroup2_;  // ugroup2
  SEXP Rsh_Fir_reg_ugroup3_;  // ugroup3
  SEXP Rsh_Fir_reg_na_rm1_;  // na_rm1
  SEXP Rsh_Fir_reg_na_rm2_;  // na_rm2
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_ugroup4_;  // ugroup4
  SEXP Rsh_Fir_reg_ugroup5_;  // ugroup5
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_rowsum_matrix;  // rowsum_matrix
  SEXP Rsh_Fir_reg_r44_;  // r44

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_group = PARAMS[1];
  Rsh_Fir_reg_reorder = PARAMS[2];
  Rsh_Fir_reg_na_rm = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st group = group
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_group, RHO);
  (void)(Rsh_Fir_reg_group);
  // reorder_isMissing = missing.0(reorder)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_reorder;
  Rsh_Fir_reg_reorder_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if reorder_isMissing then L0(TRUE) else L0(reorder)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_reorder_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_reorder_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(reorder)
    Rsh_Fir_reg_reorder_orDefault = Rsh_Fir_reg_reorder;
    goto L0_;
  }

L0_:;
  // st reorder = reorder_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_reorder_orDefault, RHO);
  (void)(Rsh_Fir_reg_reorder_orDefault);
  // na_rm_isMissing = missing.0(na_rm)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_na_rm;
  Rsh_Fir_reg_na_rm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if na_rm_isMissing then L1(FALSE) else L1(na_rm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_rm_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(na_rm)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_Fir_reg_na_rm;
    goto L1_;
  }

L1_:;
  // st `na.rm` = na_rm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_na_rm_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_rm_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.numeric`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.numeric` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L2_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L26() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L26()
    goto L26_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L5_:;
  // r12 = `>`(r7, 2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c1 then L37() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L37()
    goto L37_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r11 = dyn length(r9)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym3 = ldf `is.matrix`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf `is.matrix` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L9_:;
  // c2 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c2 then L45() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L45()
    goto L45_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L11_:;
  // st nr = r20
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard5 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L12_:;
  // nr = ld nr
  Rsh_Fir_reg_nr = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym6 = ldf anyNA
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base6 = ldf anyNA in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L15_:;
  // c4 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c4 then L66() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L66()
    goto L66_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L70() else D24()
  // L70()
  goto L70_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym7 = ldf `.Internal`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf `.Internal` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard7 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;

L21_:;
  // rowsum_matrix = ldf rowsum_matrix in base
  Rsh_Fir_reg_rowsum_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r44 = dyn rowsum_matrix(x12, group8, ugroup3, na_rm2, r42)
  SEXP Rsh_Fir_array_args16[5];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_group8_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_ugroup3_;
  Rsh_Fir_array_args16[3] = Rsh_Fir_reg_na_rm2_;
  Rsh_Fir_array_args16[4] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names1[5];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowsum_matrix, 5, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L87() else D35()
  // L87()
  goto L87_;

L22_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L23_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn is_numeric(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L26_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // r4 = dyn stop("'x' must be numeric")
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L4()
  // L4()
  goto L4_;

L30_:;
  // sym2 = ldf dim
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf dim in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L31_:;
  // r6 = dyn base1(<lang dim(x)>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L5_;

L32_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L33_:;
  // r8 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L6_;

D4_:;
  // deopt 17 [x3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L34_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r10 = dyn dim(x4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

D5_:;
  // deopt 20 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L6_;

D6_:;
  // deopt 22 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r11_;
  goto L5_;

L37_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r13 = dyn stop1("invalid 'x'")
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

D8_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L8()
  // L8()
  goto L8_;

L41_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L42_:;
  // r15 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L9_;

D9_:;
  // deopt 33 [x5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r17 = dyn is_matrix(x6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D10_:;
  // deopt 36 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L9_;

L45_:;
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D11_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4100279241_, CCP, RHO);
  // r19 = dyn NROW(p)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L47() else D12()
  // L47()
  goto L47_;

D12_:;
  // deopt 40 [r19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L11_;

L49_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

L50_:;
  // r21 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L11_;

D13_:;
  // deopt 43 [x9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r22 = dyn length1(x10)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

D14_:;
  // deopt 46 [r22]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L11_;

L53_:;
  // group1 = ld group
  Rsh_Fir_reg_group1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

L54_:;
  // r23 = dyn base5(<sym group>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

D15_:;
  // deopt 50 [group1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_group1_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L55_:;
  // group2 = force? group1
  Rsh_Fir_reg_group2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group1_);
  // checkMissing(group2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_group2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r25 = dyn length2(group2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_group2_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

D16_:;
  // deopt 53 [r25]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

D17_:;
  // deopt 53 [r24, nr]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_nr;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L57_:;
  // nr1 = force? nr
  Rsh_Fir_reg_nr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr);
  // checkMissing(nr1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_nr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r26 = `!=`(r24, nr1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_nr1_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c3 then L58() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L58()
    goto L58_;
  } else {
  // L13()
    goto L13_;
  }

L58_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L59() else D18()
  // L59()
  goto L59_;

D18_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // r27 = dyn stop2("incorrect length for 'group'")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L60() else D19()
  // L60()
  goto L60_;

D19_:;
  // deopt 59 [r27]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L14()
  // L14()
  goto L14_;

L62_:;
  // group3 = ld group
  Rsh_Fir_reg_group3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

L63_:;
  // r29 = dyn base6(<sym group>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L15_;

D20_:;
  // deopt 64 [group3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_group3_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // group4 = force? group3
  Rsh_Fir_reg_group4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group3_);
  // checkMissing(group4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_group4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r31 = dyn anyNA(group4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_group4_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

D21_:;
  // deopt 67 [r31]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L15(r31)
  // L15(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L15_;

L66_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L67() else D22()
  // L67()
  goto L67_;

D22_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r32 = dyn warning("missing values for 'group'")
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L68() else D23()
  // L68()
  goto L68_;

D23_:;
  // deopt 71 [r32]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L17()
  // L17()
  goto L17_;

D24_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p1 = prom<V +>{
  //   group5 = ld group;
  //   group6 = force? group5;
  //   checkMissing(group6);
  //   return group6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4100279241_1, CCP, RHO);
  // r35 = dyn unique(p1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L71() else D25()
  // L71()
  goto L71_;

D25_:;
  // deopt 77 [r35]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L71_:;
  // st ugroup = r35
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // reorder1 = ld reorder
  Rsh_Fir_reg_reorder1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L72() else D26()
  // L72()
  goto L72_;

D26_:;
  // deopt 79 [reorder1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_reorder1_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L72_:;
  // reorder2 = force? reorder1
  Rsh_Fir_reg_reorder2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reorder1_);
  // checkMissing(reorder2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_reorder2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(reorder2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_reorder2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c5 then L73() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L73()
    goto L73_;
  } else {
  // L18()
    goto L18_;
  }

L73_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L74() else D27()
  // L74()
  goto L74_;

D27_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p2 = prom<V +>{
  //   ugroup = ld ugroup;
  //   ugroup1 = force? ugroup;
  //   checkMissing(ugroup1);
  //   return ugroup1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4100279241_2, CCP, RHO);
  // r37 = dyn sort[, `na.last`, method](p2, TRUE, "quick")
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L75() else D28()
  // L75()
  goto L75_;

D28_:;
  // deopt 88 [r37]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L75_:;
  // st ugroup = r37
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // goto L19()
  // L19()
  goto L19_;

L77_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L79() else D29()
  // L79()
  goto L79_;

L78_:;
  // r39 = dyn base7(<lang rowsum_matrix(x, group, ugroup, na.rm, as.character(ugroup))>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(r39)
  // L20(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L20_;

D29_:;
  // deopt 94 [x11]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L79_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // group7 = ld group
  Rsh_Fir_reg_group7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L80() else D30()
  // L80()
  goto L80_;

D30_:;
  // deopt 96 [group7]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_group7_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L80_:;
  // group8 = force? group7
  Rsh_Fir_reg_group8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group7_);
  // checkMissing(group8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_group8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // ugroup2 = ld ugroup
  Rsh_Fir_reg_ugroup2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L81() else D31()
  // L81()
  goto L81_;

D31_:;
  // deopt 98 [ugroup2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ugroup2_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L81_:;
  // ugroup3 = force? ugroup2
  Rsh_Fir_reg_ugroup3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ugroup2_);
  // checkMissing(ugroup3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ugroup3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L82() else D32()
  // L82()
  goto L82_;

D32_:;
  // deopt 100 [na_rm1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_na_rm1_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L82_:;
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // sym8 = ldf `as.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base8 = ldf `as.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard8 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L83_:;
  // ugroup4 = ld ugroup
  Rsh_Fir_reg_ugroup4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L85() else D33()
  // L85()
  goto L85_;

L84_:;
  // r41 = dyn base8(<sym ugroup>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L21_;

D33_:;
  // deopt 104 [ugroup4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_ugroup4_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L85_:;
  // ugroup5 = force? ugroup4
  Rsh_Fir_reg_ugroup5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ugroup4_);
  // checkMissing(ugroup5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_ugroup5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r43 = dyn as_character(ugroup5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_ugroup5_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L86() else D34()
  // L86()
  goto L86_;

D34_:;
  // deopt 107 [r43]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L21(r43)
  // L21(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L21_;

D35_:;
  // deopt 109 [r44]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L20(r44)
  // L20(r44)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r44_;
  goto L20_;
}
SEXP Rsh_Fir_user_promise_inner4100279241_(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner4100279241_1(SEXP CCP, SEXP RHO) {
  // group5 = ld group
  Rsh_Fir_reg_group5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // group6 = force? group5
  Rsh_Fir_reg_group6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group5_);
  // checkMissing(group6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_group6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return group6
  return Rsh_Fir_reg_group6_;
}
SEXP Rsh_Fir_user_promise_inner4100279241_2(SEXP CCP, SEXP RHO) {
  // ugroup = ld ugroup
  Rsh_Fir_reg_ugroup = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // ugroup1 = force? ugroup
  Rsh_Fir_reg_ugroup1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ugroup);
  // checkMissing(ugroup1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_ugroup1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return ugroup1
  return Rsh_Fir_reg_ugroup1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
