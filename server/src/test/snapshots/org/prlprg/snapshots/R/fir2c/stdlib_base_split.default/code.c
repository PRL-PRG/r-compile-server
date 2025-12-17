#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4154958757_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4154958757_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4154958757_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4154958757_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4154958757
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4154958757_, RHO, CCP);
  // st `split.default` = r
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
SEXP Rsh_Fir_user_function_inner4154958757_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4154958757 dynamic dispatch ([x, f, drop, sep, `lex.order`, `...`])

  return Rsh_Fir_user_version_inner4154958757_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4154958757_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4154958757 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner4154958757/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_sep;  // sep
  SEXP Rsh_Fir_reg_lex_order;  // lex_order
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_drop_isMissing;  // drop_isMissing
  SEXP Rsh_Fir_reg_drop_orDefault;  // drop_orDefault
  SEXP Rsh_Fir_reg_sep_isMissing;  // sep_isMissing
  SEXP Rsh_Fir_reg_sep_orDefault;  // sep_orDefault
  SEXP Rsh_Fir_reg_lex_order_isMissing;  // lex_order_isMissing
  SEXP Rsh_Fir_reg_lex_order_orDefault;  // lex_order_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__NotYetUsed;  // _NotYetUsed
  SEXP Rsh_Fir_reg_deparse;  // deparse
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_interaction;  // interaction
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_f4_;  // f4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_drop1_;  // drop1
  SEXP Rsh_Fir_reg_drop2_;  // drop2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sep1_;  // sep1
  SEXP Rsh_Fir_reg_sep2_;  // sep2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_lex_order1_;  // lex_order1
  SEXP Rsh_Fir_reg_lex_order2_;  // lex_order2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_is_factor;  // is_factor
  SEXP Rsh_Fir_reg_f5_;  // f5
  SEXP Rsh_Fir_reg_f6_;  // f6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_as_factor;  // as_factor
  SEXP Rsh_Fir_reg_f7_;  // f7
  SEXP Rsh_Fir_reg_f8_;  // f8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_drop3_;  // drop3
  SEXP Rsh_Fir_reg_drop4_;  // drop4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_factor;  // factor
  SEXP Rsh_Fir_reg_f9_;  // f9
  SEXP Rsh_Fir_reg_f10_;  // f10
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
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
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_f11_;  // f11
  SEXP Rsh_Fir_reg_f12_;  // f12
  SEXP Rsh_Fir_reg_split;  // split
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_f13_;  // f13
  SEXP Rsh_Fir_reg_f14_;  // f14
  SEXP Rsh_Fir_reg_split1_;  // split1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r44_;  // r44

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_f = PARAMS[1];
  Rsh_Fir_reg_drop = PARAMS[2];
  Rsh_Fir_reg_sep = PARAMS[3];
  Rsh_Fir_reg_lex_order = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // drop_isMissing = missing.0(drop)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_drop;
  Rsh_Fir_reg_drop_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if drop_isMissing then L0(FALSE) else L0(drop)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_drop_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_drop_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(drop)
    Rsh_Fir_reg_drop_orDefault = Rsh_Fir_reg_drop;
    goto L0_;
  }

L0_:;
  // st drop = drop_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_drop_orDefault, RHO);
  (void)(Rsh_Fir_reg_drop_orDefault);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if sep_isMissing then L1(".") else L1(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L1(".")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L1_;
  }

L1_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // lex_order_isMissing = missing.0(lex_order)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_lex_order;
  Rsh_Fir_reg_lex_order_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if lex_order_isMissing then L2(FALSE) else L2(lex_order)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lex_order_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_lex_order_orDefault = Rsh_const(CCP, 3);
    goto L2_;
  } else {
  // L2(lex_order)
    Rsh_Fir_reg_lex_order_orDefault = Rsh_Fir_reg_lex_order;
    goto L2_;
  }

L2_:;
  // st `lex.order` = lex_order_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_lex_order_orDefault, RHO);
  (void)(Rsh_Fir_reg_lex_order_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L3_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L20() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L20()
    goto L20_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym1 = ldf `is.list`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `is.list` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L6_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c1 then L28() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // is_factor = ldf `is.factor`
  Rsh_Fir_reg_is_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L8_:;
  // l = ld f
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L43() else D13()
  // L43()
  goto L43_;

L9_:;
  // drop3 = ld drop
  Rsh_Fir_reg_drop3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

L10_:;
  // goto L8()
  // L8()
  goto L8_;

L11_:;
  // c5 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c5 then L51() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L51()
    goto L51_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // c4 = `==`(r28, NULL)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L11(c4)
  // L11(c4)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c4_;
  goto L11_;

L13_:;
  // sym5 = ldf `.Internal`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf `.Internal` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard5 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;

L16_:;
  // st ind = r36
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L66() else D23()
  // L66()
  goto L66_;

L17_:;
  // f13 = ld f
  Rsh_Fir_reg_f13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

L18_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn missing(<sym ...>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L19_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

L20_:;
  // _NotYetUsed = ldf `.NotYetUsed`
  Rsh_Fir_reg__NotYetUsed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p = prom<V +>{
  //   deparse = ldf deparse;
  //   ddd1 = ld `...`;
  //   r4 = dyn deparse[`...`](ddd1);
  //   return r4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_, CCP, RHO);
  // r6 = dyn _NotYetUsed[, error](p, FALSE)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__NotYetUsed, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 9 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L5()
  // L5()
  goto L5_;

L24_:;
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L25_:;
  // r8 = dyn base1(<sym f>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L6_;

D2_:;
  // deopt 14 [f1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_f1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L26_:;
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r10 = dyn is_list(f2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L6_;

L28_:;
  // interaction = ldf interaction
  Rsh_Fir_reg_interaction = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p1 = prom<V +>{
  //   f3 = ld f;
  //   f4 = force? f3;
  //   checkMissing(f4);
  //   return f4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_1, CCP, RHO);
  // p2 = prom<V +>{
  //   drop1 = ld drop;
  //   drop2 = force? drop1;
  //   checkMissing(drop2);
  //   return drop2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sep1 = ld sep;
  //   sep2 = force? sep1;
  //   checkMissing(sep2);
  //   return sep2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_3, CCP, RHO);
  // p4 = prom<V +>{
  //   lex_order1 = ld `lex.order`;
  //   lex_order2 = force? lex_order1;
  //   checkMissing(lex_order2);
  //   return lex_order2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_4, CCP, RHO);
  // r15 = dyn interaction[, drop, sep, `lex.order`](p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args22[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interaction, 4, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 27 [r15]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // st f = r15
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L8()
  // L8()
  goto L8_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p5 = prom<V +>{
  //   f5 = ld f;
  //   f6 = force? f5;
  //   checkMissing(f6);
  //   return f6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_5, CCP, RHO);
  // r18 = dyn is_factor(p5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

D7_:;
  // deopt 32 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L33_:;
  // r19 = `!`(r18)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L9()
    goto L9_;
  }

L34_:;
  // as_factor = ldf `as.factor`
  Rsh_Fir_reg_as_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

D8_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p6 = prom<V +>{
  //   f7 = ld f;
  //   f8 = force? f7;
  //   checkMissing(f8);
  //   return f8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_6, CCP, RHO);
  // r21 = dyn as_factor(p6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_factor, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

D9_:;
  // deopt 37 [r21]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // st f = r21
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L8()
  // L8()
  goto L8_;

D10_:;
  // deopt 39 [drop3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_drop3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L38_:;
  // drop4 = force? drop3
  Rsh_Fir_reg_drop4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop3_);
  // checkMissing(drop4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_drop4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(drop4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_drop4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c3 then L39() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L39()
    goto L39_;
  } else {
  // L10()
    goto L10_;
  }

L39_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L40() else D11()
  // L40()
  goto L40_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p7 = prom<V +>{
  //   f9 = ld f;
  //   f10 = force? f9;
  //   checkMissing(f10);
  //   return f10;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_7, CCP, RHO);
  // r23 = dyn factor(p7)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

D12_:;
  // deopt 44 [r23]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L41_:;
  // st f = r23
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L8()
  // L8()
  goto L8_;

D13_:;
  // deopt 51 ["integer", l, "integer"]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_const(CCP, 23);
  Rsh_Fir_deopt(51, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // r24 = dyn storage_mode__(l, NULL, "integer")
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

D14_:;
  // deopt 53 ["integer", r24]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L44_:;
  // st f = r24
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L46_:;
  // r25 = dyn base2(<lang attr(x, "class")>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

L47_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

L48_:;
  // r27 = dyn base3(<sym x>, "class")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

D15_:;
  // deopt 58 [x1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r29 = dyn attr(x2, "class")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

D16_:;
  // deopt 62 [r29]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L12(r29)
  // L12(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L12_;

L51_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D17()
  // L54()
  goto L54_;

L53_:;
  // r30 = dyn base4(<lang split(x, f)>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L14(r30)
  // L14(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L14_;

D17_:;
  // deopt 66 [x3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // f11 = ld f
  Rsh_Fir_reg_f11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

D18_:;
  // deopt 68 [f11]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_f11_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L55_:;
  // f12 = force? f11
  Rsh_Fir_reg_f12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f11_);
  // checkMissing(f12)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_f12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // split = ldf split in base
  Rsh_Fir_reg_split = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r32 = dyn split(x4, f12)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_f12_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L56() else D19()
  // L56()
  goto L56_;

D19_:;
  // deopt 71 [r32]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L14(r32)
  // L14(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L14_;

L59_:;
  // sym6 = ldf seq_along
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf seq_along in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard6 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L60_:;
  // r35 = dyn base5(<lang split(seq_along(x), f)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L16(r35)
  // L16(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L16_;

L61_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

L62_:;
  // r37 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(r37)
  // L17(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L17_;

D20_:;
  // deopt 78 [x5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L63_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // r39 = seq_along(x6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L17(r39)
  // L17(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L17_;

D21_:;
  // deopt 81 [f13]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_f13_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // f14 = force? f13
  Rsh_Fir_reg_f14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f13_);
  // checkMissing(f14)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_f14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // split1 = ldf split in base
  Rsh_Fir_reg_split1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r40 = dyn split1(r38, f14)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_f14_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split1_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L65() else D22()
  // L65()
  goto L65_;

D22_:;
  // deopt 84 [r40]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r40_;
  goto L16_;

D23_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // p8 = prom<V +>{
  //   ind = ld ind;
  //   ind1 = force? ind;
  //   checkMissing(ind1);
  //   return ind1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_8, CCP, RHO);
  // p9 = prom<V +>{
  //   r42 = clos inner3002224933;
  //   return r42;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4154958757_9, CCP, RHO);
  // r44 = dyn lapply(p8, p9)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L67() else D24()
  // L67()
  goto L67_;

D24_:;
  // deopt 90 [r44]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L67_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r44
  return Rsh_Fir_reg_r44_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_(SEXP CCP, SEXP RHO) {
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r4 = dyn deparse[`...`](ddd1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_1(SEXP CCP, SEXP RHO) {
  // f3 = ld f
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return f4
  return Rsh_Fir_reg_f4_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_2(SEXP CCP, SEXP RHO) {
  // drop1 = ld drop
  Rsh_Fir_reg_drop1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // drop2 = force? drop1
  Rsh_Fir_reg_drop2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop1_);
  // checkMissing(drop2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_drop2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return drop2
  return Rsh_Fir_reg_drop2_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_3(SEXP CCP, SEXP RHO) {
  // sep1 = ld sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // sep2 = force? sep1
  Rsh_Fir_reg_sep2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep1_);
  // checkMissing(sep2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sep2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return sep2
  return Rsh_Fir_reg_sep2_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_4(SEXP CCP, SEXP RHO) {
  // lex_order1 = ld `lex.order`
  Rsh_Fir_reg_lex_order1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // lex_order2 = force? lex_order1
  Rsh_Fir_reg_lex_order2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lex_order1_);
  // checkMissing(lex_order2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_lex_order2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return lex_order2
  return Rsh_Fir_reg_lex_order2_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_5(SEXP CCP, SEXP RHO) {
  // f5 = ld f
  Rsh_Fir_reg_f5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // f6 = force? f5
  Rsh_Fir_reg_f6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f5_);
  // checkMissing(f6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_f6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return f6
  return Rsh_Fir_reg_f6_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_6(SEXP CCP, SEXP RHO) {
  // f7 = ld f
  Rsh_Fir_reg_f7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // f8 = force? f7
  Rsh_Fir_reg_f8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f7_);
  // checkMissing(f8)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_f8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return f8
  return Rsh_Fir_reg_f8_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_7(SEXP CCP, SEXP RHO) {
  // f9 = ld f
  Rsh_Fir_reg_f9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // f10 = force? f9
  Rsh_Fir_reg_f10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f9_);
  // checkMissing(f10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_f10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return f10
  return Rsh_Fir_reg_f10_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_8(SEXP CCP, SEXP RHO) {
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return ind1
  return Rsh_Fir_reg_ind1_;
}
SEXP Rsh_Fir_user_promise_inner4154958757_9(SEXP CCP, SEXP RHO) {
  // r42 = clos inner3002224933
  Rsh_Fir_reg_r42_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3002224933_, RHO, CCP);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3002224933 dynamic dispatch ([i])

  return Rsh_Fir_user_version_inner3002224933_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3002224933 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3002224933/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_x3_1;  // x3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2;  // r

  // Bind parameters
  Rsh_Fir_reg_i = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // x = ld x
  Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

D0_:;
  // deopt 0 [x]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L1_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c then L2() else L3(x1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L2()
    goto L2_;
  } else {
  // L3(x1)
    Rsh_Fir_reg_x3_1 = Rsh_Fir_reg_x1_1;
    goto L3_;
  }

L2_:;
  // dr = tryDispatchBuiltin.1("[", x1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_x3_1 = Rsh_Fir_reg_dr;
    goto L3_;
  }

L3_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D1_:;
  // deopt 2 [x3, i1]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L5_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r = dyn __(x3, i2)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
