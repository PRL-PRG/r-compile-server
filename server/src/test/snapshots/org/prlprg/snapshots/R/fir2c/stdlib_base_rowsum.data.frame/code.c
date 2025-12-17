#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4100279241_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4100279241_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4100279241_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4100279241_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4100279241_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4100279241_3(SEXP CCP, SEXP RHO);
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
  // st `rowsum.data.frame` = r
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
  SEXP Rsh_Fir_reg_is_data_frame;  // is_data_frame
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_group1_;  // group1
  SEXP Rsh_Fir_reg_group2_;  // group2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_group3_;  // group3
  SEXP Rsh_Fir_reg_group4_;  // group4
  SEXP Rsh_Fir_reg_anyNA;  // anyNA
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_group5_;  // group5
  SEXP Rsh_Fir_reg_group6_;  // group6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_reorder1_;  // reorder1
  SEXP Rsh_Fir_reg_reorder2_;  // reorder2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_ugroup;  // ugroup
  SEXP Rsh_Fir_reg_ugroup1_;  // ugroup1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_group7_;  // group7
  SEXP Rsh_Fir_reg_group8_;  // group8
  SEXP Rsh_Fir_reg_ugroup2_;  // ugroup2
  SEXP Rsh_Fir_reg_ugroup3_;  // ugroup3
  SEXP Rsh_Fir_reg_na_rm1_;  // na_rm1
  SEXP Rsh_Fir_reg_na_rm2_;  // na_rm2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_ugroup4_;  // ugroup4
  SEXP Rsh_Fir_reg_ugroup5_;  // ugroup5
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_rowsum_df;  // rowsum_df
  SEXP Rsh_Fir_reg_r28_;  // r28

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
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L4_:;
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf anyNA
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf anyNA in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L7_:;
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L38() else D14()
  // L38()
  goto L38_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;

L13_:;
  // rowsum_df = ldf rowsum_df in base
  Rsh_Fir_reg_rowsum_df = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r28 = dyn rowsum_df(x6, group8, ugroup3, na_rm2, r26)
  SEXP Rsh_Fir_array_args6[5];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_group8_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_ugroup3_;
  Rsh_Fir_array_args6[3] = Rsh_Fir_reg_na_rm2_;
  Rsh_Fir_array_args6[4] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowsum_df, 5, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L55() else D25()
  // L55()
  goto L55_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4100279241_, CCP, RHO);
  // r1 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L16() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L2()
    goto L2_;
  }

L16_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // r3 = dyn stop("not a data frame")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L3()
  // L3()
  goto L3_;

L20_:;
  // group1 = ld group
  Rsh_Fir_reg_group1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L21_:;
  // r5 = dyn base(<sym group>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L4_;

D4_:;
  // deopt 13 [group1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_group1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // group2 = force? group1
  Rsh_Fir_reg_group2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group1_);
  // checkMissing(group2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_group2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r7 = dyn length(group2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_group2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L4_;

D6_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4100279241_1, CCP, RHO);
  // r9 = dyn NROW(p1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 19 [r6, r9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L25_:;
  // r10 = `!=`(r6, r9)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c1 then L26() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L5()
    goto L5_;
  }

L26_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // r11 = dyn stop1("incorrect length for 'group'")
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

D9_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L6()
  // L6()
  goto L6_;

L30_:;
  // group3 = ld group
  Rsh_Fir_reg_group3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D10()
  // L32()
  goto L32_;

L31_:;
  // r13 = dyn base1(<sym group>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D10_:;
  // deopt 29 [group3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_group3_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // group4 = force? group3
  Rsh_Fir_reg_group4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group3_);
  // checkMissing(group4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_group4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r15 = dyn anyNA(group4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_group4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

D11_:;
  // deopt 32 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L34_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

D12_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // r16 = dyn warning("missing values for 'group'")
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

D13_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L9()
  // L9()
  goto L9_;

D14_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p2 = prom<V +>{
  //   group5 = ld group;
  //   group6 = force? group5;
  //   checkMissing(group6);
  //   return group6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4100279241_2, CCP, RHO);
  // r19 = dyn unique(p2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

D15_:;
  // deopt 42 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L39_:;
  // st ugroup = r19
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // reorder1 = ld reorder
  Rsh_Fir_reg_reorder1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L40() else D16()
  // L40()
  goto L40_;

D16_:;
  // deopt 44 [reorder1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_reorder1_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L40_:;
  // reorder2 = force? reorder1
  Rsh_Fir_reg_reorder2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reorder1_);
  // checkMissing(reorder2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_reorder2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(reorder2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_reorder2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c3 then L41() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L41()
    goto L41_;
  } else {
  // L10()
    goto L10_;
  }

L41_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L42() else D17()
  // L42()
  goto L42_;

D17_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p3 = prom<V +>{
  //   ugroup = ld ugroup;
  //   ugroup1 = force? ugroup;
  //   checkMissing(ugroup1);
  //   return ugroup1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4100279241_3, CCP, RHO);
  // r21 = dyn sort[, `na.last`, method](p3, TRUE, "quick")
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L43() else D18()
  // L43()
  goto L43_;

D18_:;
  // deopt 53 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // st ugroup = r21
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L11()
  // L11()
  goto L11_;

L45_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D19()
  // L47()
  goto L47_;

L46_:;
  // r23 = dyn base2(<lang rowsum_df(x, group, ugroup, na.rm, as.character(ugroup))>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

D19_:;
  // deopt 59 [x5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L47_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // group7 = ld group
  Rsh_Fir_reg_group7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L48() else D20()
  // L48()
  goto L48_;

D20_:;
  // deopt 61 [group7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_group7_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L48_:;
  // group8 = force? group7
  Rsh_Fir_reg_group8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group7_);
  // checkMissing(group8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_group8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // ugroup2 = ld ugroup
  Rsh_Fir_reg_ugroup2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L49() else D21()
  // L49()
  goto L49_;

D21_:;
  // deopt 63 [ugroup2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_ugroup2_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L49_:;
  // ugroup3 = force? ugroup2
  Rsh_Fir_reg_ugroup3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ugroup2_);
  // checkMissing(ugroup3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_ugroup3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L50() else D22()
  // L50()
  goto L50_;

D22_:;
  // deopt 65 [na_rm1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_na_rm1_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L50_:;
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // ugroup4 = ld ugroup
  Rsh_Fir_reg_ugroup4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L53() else D23()
  // L53()
  goto L53_;

L52_:;
  // r25 = dyn base3(<sym ugroup>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(r25)
  // L13(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L13_;

D23_:;
  // deopt 69 [ugroup4]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_ugroup4_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L53_:;
  // ugroup5 = force? ugroup4
  Rsh_Fir_reg_ugroup5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ugroup4_);
  // checkMissing(ugroup5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ugroup5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r27 = dyn as_character(ugroup5)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ugroup5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L54() else D24()
  // L54()
  goto L54_;

D24_:;
  // deopt 72 [r27]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L13(r27)
  // L13(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L13_;

D25_:;
  // deopt 74 [r28]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r28_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner4100279241_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner4100279241_1(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner4100279241_2(SEXP CCP, SEXP RHO) {
  // group5 = ld group
  Rsh_Fir_reg_group5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // group6 = force? group5
  Rsh_Fir_reg_group6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group5_);
  // checkMissing(group6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_group6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return group6
  return Rsh_Fir_reg_group6_;
}
SEXP Rsh_Fir_user_promise_inner4100279241_3(SEXP CCP, SEXP RHO) {
  // ugroup = ld ugroup
  Rsh_Fir_reg_ugroup = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // ugroup1 = force? ugroup
  Rsh_Fir_reg_ugroup1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ugroup);
  // checkMissing(ugroup1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_ugroup1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return ugroup1
  return Rsh_Fir_reg_ugroup1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
