#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_inner819004888_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner819004888_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner819004888_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner819004888_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner819004888_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner819004888
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner819004888_, RHO, CCP);
  // st `.Deprecated` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_from_R_inner819004888_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner819004888 dynamic dispatch from R ([new, package, msg, old])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner819004888_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner819004888_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner819004888 dynamic dispatch ([new, package, msg, old])

  return Rsh_Fir_user_version_inner819004888_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner819004888_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner819004888 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner819004888/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_new;
  SEXP Rsh_Fir_reg_package;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_old;
  SEXP Rsh_Fir_reg_package_isMissing;
  SEXP Rsh_Fir_reg_package_orDefault;
  SEXP Rsh_Fir_reg_old_isMissing;
  SEXP Rsh_Fir_reg_old_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_msg4_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_package1_;
  SEXP Rsh_Fir_reg_package2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_gettextf2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_gettext;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_msg5_;
  SEXP Rsh_Fir_reg_msg6_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_missing2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r54_;

  // Bind parameters
  Rsh_Fir_reg_new = PARAMS[0];
  Rsh_Fir_reg_package = PARAMS[1];
  Rsh_Fir_reg_msg = PARAMS[2];
  Rsh_Fir_reg_old = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st new = new
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_new, RHO);
  (void)(Rsh_Fir_reg_new);
  // package_isMissing = missing.0(package)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_package;
  Rsh_Fir_reg_package_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if package_isMissing then L0(NULL) else L0(package)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_package_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_package_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(package)
    Rsh_Fir_reg_package_orDefault = Rsh_Fir_reg_package;
    goto L0_;
  }

L0_:;
  // st package = package_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_package_orDefault, RHO);
  (void)(Rsh_Fir_reg_package_orDefault);
  // st msg = msg
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_msg, RHO);
  (void)(Rsh_Fir_reg_msg);
  // old_isMissing = missing.0(old)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_old;
  Rsh_Fir_reg_old_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if old_isMissing then L1() else L2(old)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_old_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(old)
    Rsh_Fir_reg_old_orDefault = Rsh_Fir_reg_old;
    goto L2_;
  }

L1_:;
  // p1 = prom<V +>{
  //   sym = ldf `as.character`;
  //   base = ldf `as.character` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r1):
  //   c = `is.object`(r1);
  //   if c then L4() else L5(r1);
  // L2():
  //   sys_call = ldf `sys.call`;
  //   p = prom<V +>{
  //     sys_parent = ldf `sys.parent`;
  //     r2 = dyn sys_parent();
  //     return r2;
  //   };
  //   r4 = dyn sys_call(p);
  //   as_character = ldf `as.character` in base;
  //   r5 = dyn as_character(r4);
  //   goto L0(r5);
  // L3():
  //   r = dyn base(<lang sys.call(sys.parent())>);
  //   goto L0(r);
  // L1(dx1):
  //   return dx1;
  // L4():
  //   dr = tryDispatchBuiltin.1("[", r1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(r7):
  //   __ = ldf `[` in base;
  //   r8 = dyn __(r7, 1);
  //   goto L1(r8);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_, 0, NULL, CCP, RHO);
  // goto L2(p1)
  // L2(p1)
  Rsh_Fir_reg_old_orDefault = Rsh_Fir_reg_p1_;
  goto L2_;

L2_:;
  // st old = old_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_old_orDefault, RHO);
  (void)(Rsh_Fir_reg_old_orDefault);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L3_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c1 then L19() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L4()
    goto L4_;
  }

L17_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r12 = dyn missing(<sym msg>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, RHO);
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L3_;

L18_:;
  // r10 = dyn base1(<sym msg>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

L4_:;
  // sym6 = ldf `as.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf `as.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard6 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L13_:;
  // st msg = r35
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

L19_:;
  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p2 = prom<V +>{
  //   old1 = ld old;
  //   old2 = force? old1;
  //   checkMissing(old2);
  //   return old2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_2, 0, NULL, CCP, RHO);
  // r14 = dyn gettextf("'%s' is deprecated.\n", p2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

L46_:;
  // msg5 = ld msg
  Rsh_Fir_reg_msg5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

L47_:;
  // r36 = dyn base6(<sym msg>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, RHO);
  // goto L13(r36)
  // L13(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L13_;

L50_:;
  // p5 = prom<V +>{
  //   msg7 = ld msg;
  //   msg8 = force? msg7;
  //   checkMissing(msg8);
  //   return msg8;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_3, 0, NULL, CCP, RHO);
  // r39 = dyn paste[, collapse](p5, "")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

D1_:;
  // deopt 7 [r14]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 49 [msg5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_msg5_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 59 [r39]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // st msg = r14
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L48_:;
  // msg6 = force? msg5
  Rsh_Fir_reg_msg6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg5_);
  // checkMissing(msg6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_msg6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r37 = dyn as_character1(msg6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_msg6_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

L51_:;
  // st msg = r39
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym7 = ldf missing
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf missing in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard7 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

D14_:;
  // deopt 52 [r37]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L5_:;
  // r18 = `!`(r16)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args25);
  // c2 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c2 then L24() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L6()
    goto L6_;
  }

L14_:;
  // c7 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c7 then L54() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L54()
    goto L54_;
  } else {
  // L15()
    goto L15_;
  }

L22_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r17 = dyn missing1(<sym new>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L5_;

L23_:;
  // r15 = dyn base2(<sym new>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, RHO);
  // goto L5(r15)
  // L5(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L5_;

L49_:;
  // goto L13(r37)
  // L13(r37)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r37_;
  goto L13_;

L52_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r42 = dyn missing2(<sym new>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, RHO);
  // goto L14(r42)
  // L14(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L14_;

L53_:;
  // r40 = dyn base7(<sym new>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, RHO);
  // goto L14(r40)
  // L14(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L14_;

L6_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard4 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L56() else D17()
  // L56()
  goto L56_;

L24_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L54_:;
  // st new = NULL
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // goto L16()
  // L16()
  goto L16_;

D17_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // st msg = r20
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // goto L8()
  // L8()
  goto L8_;

L9_:;
  // goto L13(r26)
  // L13(r26)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r26_;
  goto L13_;

L25_:;
  // msg1 = ld msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r19 = dyn base3(<sym msg>, <lang gettextf("Use '%s' instead.\n", new)>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, RHO);
  // goto L7(r19)
  // L7(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L7_;

L32_:;
  // msg3 = ld msg
  Rsh_Fir_reg_msg3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

L33_:;
  // r25 = dyn base4(<sym msg>, <lang if(`!`(is.null(package)), gettextf("See help(\"Deprecated\") and help(\"%s-deprecated\").", package), gettext("See help(\"Deprecated\")"))>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, RHO);
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L9_;

L56_:;
  // p12 = prom<V +>{
  //   warningCondition = ldf warningCondition;
  //   p6 = prom<V +>{
  //     msg9 = ld msg;
  //     msg10 = force? msg9;
  //     checkMissing(msg10);
  //     return msg10;
  //   };
  //   p7 = prom<V +>{
  //     old3 = ld old;
  //     old4 = force? old3;
  //     checkMissing(old4);
  //     return old4;
  //   };
  //   p8 = prom<V +>{
  //     new3 = ld new;
  //     new4 = force? new3;
  //     checkMissing(new4);
  //     return new4;
  //   };
  //   p9 = prom<V +>{
  //     package5 = ld package;
  //     package6 = force? package5;
  //     checkMissing(package6);
  //     return package6;
  //   };
  //   p11 = prom<V +>{
  //     sys_call1 = ldf `sys.call`;
  //     p10 = prom<V +>{
  //       sys_parent1 = ldf `sys.parent`;
  //       r48 = dyn sys_parent1();
  //       return r48;
  //     };
  //     r50 = dyn sys_call1(p10);
  //     return r50;
  //   };
  //   r52 = dyn warningCondition[, old, new, package, class, call](p6, p7, p8, p9, "deprecatedWarning", p11);
  //   return r52;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_4, 0, NULL, CCP, RHO);
  // r54 = dyn warning(p12)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names18, RHO);
  // check L57() else D18()
  // L57()
  goto L57_;

D2_:;
  // deopt 15 [msg1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 29 [msg3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 72 [r54]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // msg2 = force? msg1
  Rsh_Fir_reg_msg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg1_);
  // checkMissing(msg2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_msg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

L34_:;
  // msg4 = force? msg3
  Rsh_Fir_reg_msg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg3_);
  // checkMissing(msg4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_msg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard5 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L57_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r54
  return Rsh_Fir_reg_r54_;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r29 = `!`(r28)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args46);
  // c5 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c5 then L38() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L38()
    goto L38_;
  } else {
  // L11()
    goto L11_;
  }

L28_:;
  // p3 = prom<V +>{
  //   new1 = ld new;
  //   new2 = force? new1;
  //   checkMissing(new2);
  //   return new2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_11, 0, NULL, CCP, RHO);
  // r22 = dyn gettextf1("Use '%s' instead.\n", p3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names19, RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L35_:;
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L36_:;
  // r27 = dyn base5(<sym package>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names20, RHO);
  // goto L10(r27)
  // L10(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L10_;

D4_:;
  // deopt 21 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 32 [package1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L11_:;
  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

L12_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r34 = dyn c6(msg4, r32)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_msg4_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

L29_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r23 = dyn c3(msg2, r22)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

L37_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c4 = `==`(package2, NULL)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_package2_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args54);
  // goto L10(c4)
  // L10(c4)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c4_;
  goto L10_;

L38_:;
  // gettextf2 = ldf gettextf
  Rsh_Fir_reg_gettextf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

D5_:;
  // deopt 23 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 46 [r34]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L7(r23)
  // L7(r23)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r23_;
  goto L7_;

L39_:;
  // p4 = prom<V +>{
  //   package3 = ld package;
  //   package4 = force? package3;
  //   checkMissing(package4);
  //   return package4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_12, 0, NULL, CCP, RHO);
  // r31 = dyn gettextf2("See help(\"Deprecated\") and help(\"%s-deprecated\").", p4)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf2_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names23, RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

L42_:;
  // r33 = dyn gettext("See help(\"Deprecated\")")
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names24, RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

L44_:;
  // goto L9(r34)
  // L9(r34)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r34_;
  goto L9_;

D9_:;
  // deopt 40 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 44 [r33]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L12_;

L43_:;
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner819004888_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c = `is.object`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args3);
  // if c then L4() else L5(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L5(r1)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r1_;
    goto L5_;
  }

L2_:;
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // p = prom<V +>{
  //   sys_parent = ldf `sys.parent`;
  //   r2 = dyn sys_parent();
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_1, 0, NULL, CCP, RHO);
  // r4 = dyn sys_call(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, RHO);
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn as_character(r4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L3_:;
  // r = dyn base(<lang sys.call(sys.parent())>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L1_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L4_:;
  // dr = tryDispatchBuiltin.1("[", r1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r8 = dyn __(r7, 1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner819004888_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // sys_parent = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // r2 = dyn sys_parent()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent, 0, NULL, NULL, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner819004888_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_old1_;
  SEXP Rsh_Fir_reg_old2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // old1 = ld old
  Rsh_Fir_reg_old1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // old2 = force? old1
  Rsh_Fir_reg_old2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old1_);
  // checkMissing(old2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_old2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return old2
  return Rsh_Fir_reg_old2_;
}
SEXP Rsh_Fir_user_promise_inner819004888_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg7_;
  SEXP Rsh_Fir_reg_msg8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // msg7 = ld msg
  Rsh_Fir_reg_msg7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // msg8 = force? msg7
  Rsh_Fir_reg_msg8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg7_);
  // checkMissing(msg8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_msg8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return msg8
  return Rsh_Fir_reg_msg8_;
}
SEXP Rsh_Fir_user_promise_inner819004888_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warningCondition;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r52_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // warningCondition = ldf warningCondition
  Rsh_Fir_reg_warningCondition = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // p6 = prom<V +>{
  //   msg9 = ld msg;
  //   msg10 = force? msg9;
  //   checkMissing(msg10);
  //   return msg10;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_5, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   old3 = ld old;
  //   old4 = force? old3;
  //   checkMissing(old4);
  //   return old4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_6, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   new3 = ld new;
  //   new4 = force? new3;
  //   checkMissing(new4);
  //   return new4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_7, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   package5 = ld package;
  //   package6 = force? package5;
  //   checkMissing(package6);
  //   return package6;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_8, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sys_call1 = ldf `sys.call`;
  //   p10 = prom<V +>{
  //     sys_parent1 = ldf `sys.parent`;
  //     r48 = dyn sys_parent1();
  //     return r48;
  //   };
  //   r50 = dyn sys_call1(p10);
  //   return r50;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_9, 0, NULL, CCP, RHO);
  // r52 = dyn warningCondition[, old, new, package, class, call](p6, p7, p8, p9, "deprecatedWarning", p11)
  SEXP Rsh_Fir_array_args41[6];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args41[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args41[4] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args41[5] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names17[6];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names17[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names17[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names17[4] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names17[5] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warningCondition, 6, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names17, RHO);
  // return r52
  return Rsh_Fir_reg_r52_;
}
SEXP Rsh_Fir_user_promise_inner819004888_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg9_;
  SEXP Rsh_Fir_reg_msg10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // msg9 = ld msg
  Rsh_Fir_reg_msg9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // msg10 = force? msg9
  Rsh_Fir_reg_msg10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg9_);
  // checkMissing(msg10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_msg10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return msg10
  return Rsh_Fir_reg_msg10_;
}
SEXP Rsh_Fir_user_promise_inner819004888_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_old3_;
  SEXP Rsh_Fir_reg_old4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // old3 = ld old
  Rsh_Fir_reg_old3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // old4 = force? old3
  Rsh_Fir_reg_old4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old3_);
  // checkMissing(old4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_old4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return old4
  return Rsh_Fir_reg_old4_;
}
SEXP Rsh_Fir_user_promise_inner819004888_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new3_;
  SEXP Rsh_Fir_reg_new4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // new3 = ld new
  Rsh_Fir_reg_new3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // new4 = force? new3
  Rsh_Fir_reg_new4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new3_);
  // checkMissing(new4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_new4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return new4
  return Rsh_Fir_reg_new4_;
}
SEXP Rsh_Fir_user_promise_inner819004888_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_package5_;
  SEXP Rsh_Fir_reg_package6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // package5 = ld package
  Rsh_Fir_reg_package5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // package6 = force? package5
  Rsh_Fir_reg_package6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package5_);
  // checkMissing(package6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_package6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return package6
  return Rsh_Fir_reg_package6_;
}
SEXP Rsh_Fir_user_promise_inner819004888_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_call1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // sys_call1 = ldf `sys.call`
  Rsh_Fir_reg_sys_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // p10 = prom<V +>{
  //   sys_parent1 = ldf `sys.parent`;
  //   r48 = dyn sys_parent1();
  //   return r48;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner819004888_10, 0, NULL, CCP, RHO);
  // r50 = dyn sys_call1(p10)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names16, RHO);
  // return r50
  return Rsh_Fir_reg_r50_;
}
SEXP Rsh_Fir_user_promise_inner819004888_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent1_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // sys_parent1 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // r48 = dyn sys_parent1()
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent1_, 0, NULL, NULL, RHO);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner819004888_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new1_;
  SEXP Rsh_Fir_reg_new2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // new1 = ld new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // new2 = force? new1
  Rsh_Fir_reg_new2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new1_);
  // checkMissing(new2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_new2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return new2
  return Rsh_Fir_reg_new2_;
}
SEXP Rsh_Fir_user_promise_inner819004888_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_package3_;
  SEXP Rsh_Fir_reg_package4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner819004888/0: expected 0, got %d", NCAPTURES);

  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // checkMissing(package4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_package4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return package4
  return Rsh_Fir_reg_package4_;
}
