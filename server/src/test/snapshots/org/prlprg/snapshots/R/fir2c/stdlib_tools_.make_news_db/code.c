#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner678743321_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner678743321_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner678743321_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner678743321_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner678743321
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner678743321_, RHO, CCP);
  // st `.make_news_db` = r
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
SEXP Rsh_Fir_user_function_inner678743321_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner678743321 dynamic dispatch ([x, bad, classes])

  return Rsh_Fir_user_version_inner678743321_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner678743321_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner678743321 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner678743321/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_bad;  // bad
  SEXP Rsh_Fir_reg_classes;  // classes
  SEXP Rsh_Fir_reg_bad_isMissing;  // bad_isMissing
  SEXP Rsh_Fir_reg_bad_orDefault;  // bad_orDefault
  SEXP Rsh_Fir_reg_classes_isMissing;  // classes_isMissing
  SEXP Rsh_Fir_reg_classes_orDefault;  // classes_orDefault
  SEXP Rsh_Fir_reg_data_frame;  // data_frame
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_colnames;  // colnames
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_colnames__;  // colnames__
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_bad1_;  // bad1
  SEXP Rsh_Fir_reg_bad2_;  // bad2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_bad3_;  // bad3
  SEXP Rsh_Fir_reg_bad4_;  // bad4
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_classes1_;  // classes1
  SEXP Rsh_Fir_reg_classes2_;  // classes2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_bad = PARAMS[1];
  Rsh_Fir_reg_classes = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // bad_isMissing = missing.0(bad)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_bad;
  Rsh_Fir_reg_bad_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if bad_isMissing then L0(NULL) else L0(bad)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_bad_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_bad_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(bad)
    Rsh_Fir_reg_bad_orDefault = Rsh_Fir_reg_bad;
    goto L0_;
  }

L0_:;
  // st bad = bad_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_bad_orDefault, RHO);
  (void)(Rsh_Fir_reg_bad_orDefault);
  // classes_isMissing = missing.0(classes)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_classes;
  Rsh_Fir_reg_classes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if classes_isMissing then L1(NULL) else L1(classes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_classes_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_classes_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(classes)
    Rsh_Fir_reg_classes_orDefault = Rsh_Fir_reg_classes;
    goto L1_;
  }

L1_:;
  // st classes = classes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_classes_orDefault, RHO);
  (void)(Rsh_Fir_reg_classes_orDefault);
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L2_:;
  // l = ld out
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L3_:;
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L4_:;
  // r16 = `!`(r15)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L22() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L22()
    goto L22_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L27() else D11()
  // L27()
  goto L27_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner678743321_, CCP, RHO);
  // r1 = dyn data_frame[, `row.names`, stringsAsFactors](p, NULL, FALSE)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st out = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r4 = dyn c("Version", "Date", "Category", "Text")
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r2 = dyn base("Version", "Date", "Category", "Text")
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D2_:;
  // deopt 16 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L2_;

D3_:;
  // deopt 18 [r3, l, r3]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // r5 = dyn colnames(r3, NULL)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 20 [r3, l, r3, r5]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(20, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // c1 = `is.object`(r5)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L15(r3, l, r5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L15(r3, l, r5)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r5_;
    goto L15_;
  }

L14_:;
  // dr = tryDispatchBuiltin.0("[<-", r5, r3)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L16() else L15(r3, l, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L16()
    goto L16_;
  } else {
  // L15(r3, l, dr)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr;
    goto L15_;
  }

L15_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r12 = dyn ___(r9, r3, <int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r8, l2, r12)
  // L3(r8, l2, r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L3_;

L16_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L3(r3, l, dx)
  // L3(r3, l, dx)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D5_:;
  // deopt 25 [r11, l4, dx1]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(25, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // r13 = dyn colnames__(l4, NULL, dx1)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 27 [r11, r13]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // st out = r13
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // bad1 = ld bad
  Rsh_Fir_reg_bad1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

L20_:;
  // r14 = dyn base1(<sym bad>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L4_;

D7_:;
  // deopt 30 [bad1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_bad1_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // bad2 = force? bad1
  Rsh_Fir_reg_bad2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad1_);
  // checkMissing(bad2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_bad2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c2 = `==`(bad2, NULL)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_bad2_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L4(c2)
  // L4(c2)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_c2_;
  goto L4_;

L22_:;
  // bad3 = ld bad
  Rsh_Fir_reg_bad3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 34 [bad3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_bad3_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // bad4 = force? bad3
  Rsh_Fir_reg_bad4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad3_);
  // checkMissing(bad4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_bad4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // l5 = ld out
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 37 [bad4, l5, bad4]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_bad4_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_bad4_;
  Rsh_Fir_deopt(37, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L24_:;
  // r17 = dyn attr__(l5, NULL, "bad", bad4)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args21[3] = Rsh_Fir_reg_bad4_;
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 40 [bad4, r17]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_bad4_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L25_:;
  // st out = r17
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L6()
  // L6()
  goto L6_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   classes1 = ld classes;
  //   classes2 = force? classes1;
  //   checkMissing(classes2);
  //   c4 = ldf c in base;
  //   r20 = dyn c4(classes2, "news_db", "data.frame");
  //   goto L0(r20);
  // L2():
  //   r18 = dyn base2(<sym classes>, "news_db", "data.frame");
  //   goto L0(r18);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner678743321_1, CCP, RHO);
  // r22 = dyn unique(p1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L28() else D12()
  // L28()
  goto L28_;

D12_:;
  // deopt 47 [r22]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // l6 = ld out
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L29() else D13()
  // L29()
  goto L29_;

D13_:;
  // deopt 49 [r22, l6, r22]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L29_:;
  // r23 = dyn class__(l6, NULL, r22)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L30() else D14()
  // L30()
  goto L30_;

D14_:;
  // deopt 51 [r22, r23]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L30_:;
  // st out = r23
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L31() else D15()
  // L31()
  goto L31_;

D15_:;
  // deopt 53 [out]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L31_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out1
  return Rsh_Fir_reg_out1_;
}
SEXP Rsh_Fir_user_promise_inner678743321_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner678743321_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // classes1 = ld classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // classes2 = force? classes1
  Rsh_Fir_reg_classes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes1_);
  // checkMissing(classes2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_classes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r20 = dyn c4(classes2, "news_db", "data.frame")
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_classes2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L2_:;
  // r18 = dyn base2(<sym classes>, "news_db", "data.frame")
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
