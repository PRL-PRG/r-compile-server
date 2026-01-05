#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_inner2010815835_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner2010815835_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2010815835_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2010815835_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2010815835_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner2010815835
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2010815835_, RHO, CCP);
  // st `.Defunct` = r
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
SEXP Rsh_Fir_user_function_from_R_inner2010815835_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner2010815835 dynamic dispatch from R ([new, package, msg])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner2010815835_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner2010815835_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2010815835 dynamic dispatch ([new, package, msg])

  return Rsh_Fir_user_version_inner2010815835_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2010815835_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2010815835 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2010815835/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_new;
  SEXP Rsh_Fir_reg_package;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_package_isMissing;
  SEXP Rsh_Fir_reg_package_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_msg4_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_package1_;
  SEXP Rsh_Fir_reg_package2_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_gettextf2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_gettext;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_msg5_;
  SEXP Rsh_Fir_reg_msg6_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_missing2_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r58_;

  // Bind parameters
  Rsh_Fir_reg_new = PARAMS[0];
  Rsh_Fir_reg_package = PARAMS[1];
  Rsh_Fir_reg_msg = PARAMS[2];

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
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // st fname = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L18_:;
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r = dyn base(<lang `[[`(sys.call(sys.parent()), 1)>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c1 then L28() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L4()
    goto L4_;
  }

L20_:;
  // p = prom<V +>{
  //   sys_parent = ldf `sys.parent`;
  //   r2 = dyn sys_parent();
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_, 0, NULL, CCP, RHO);
  // r4 = dyn sys_call(p)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

L26_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn missing(<sym msg>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L3_;

L27_:;
  // r9 = dyn base1(<sym msg>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L3_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym7 = ldf `as.character`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base7 = ldf `as.character` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard7 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L13_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L59() else D18()
  // L59()
  goto L59_;

L21_:;
  // c = `is.object`(r4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args9);
  // if c then L22() else L23(r4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L23(r4)
    Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r4_;
    goto L23_;
  }

L28_:;
  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

D3_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r8 = dyn as_character(dx1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L14_:;
  // st msg = r40
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L13()
  // L13()
  goto L13_;

L22_:;
  // dr = tryDispatchBuiltin.1("[[", r4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L24() else L23(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr)
    Rsh_Fir_reg_r6_ = Rsh_Fir_reg_dr;
    goto L23_;
  }

L23_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r7 = dyn __(r6, 1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L2_;

L29_:;
  // p1 = prom<V +>{
  //   fname = ld fname;
  //   fname1 = force? fname;
  //   checkMissing(fname1);
  //   c2 = `is.object`(fname1);
  //   if c2 then L2() else L3(fname1);
  // L0(dx3):
  //   return dx3;
  // L2():
  //   dr2 = tryDispatchBuiltin.1("[", fname1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L4() else L3(dr2);
  // L3(fname3):
  //   sym2 = ldf length;
  //   base2 = ldf length in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L5() else L6();
  // L1(fname6, r13):
  //   __1 = ldf `[` in base;
  //   r15 = dyn __1(fname6, r13);
  //   goto L0(r15);
  // L4():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // L5():
  //   fname7 = ld fname;
  //   fname8 = force? fname7;
  //   checkMissing(fname8);
  //   length = ldf length in base;
  //   r14 = dyn length(fname8);
  //   goto L1(fname3, r14);
  // L6():
  //   r12 = dyn base2(<sym fname>);
  //   goto L1(fname3, r12);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_1, 0, NULL, CCP, RHO);
  // r17 = dyn gettextf("'%s' is defunct.\n", p1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

L55_:;
  // msg5 = ld msg
  Rsh_Fir_reg_msg5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L57() else D16()
  // L57()
  goto L57_;

L56_:;
  // r39 = dyn base7(<sym msg>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, RHO);
  // goto L14(r39)
  // L14(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L14_;

L59_:;
  // p4 = prom<V +>{
  //   msg7 = ld msg;
  //   msg8 = force? msg7;
  //   checkMissing(msg8);
  //   return msg8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_2, 0, NULL, CCP, RHO);
  // r43 = dyn paste[, collapse](p4, "")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, RHO);
  // check L60() else D19()
  // L60()
  goto L60_;

D2_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 19 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 62 [msg5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_msg5_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 72 [r43]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L25_:;
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r8_;
  goto L1_;

L30_:;
  // st msg = r17
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard3 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L57_:;
  // msg6 = force? msg5
  Rsh_Fir_reg_msg6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg5_);
  // checkMissing(msg6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_msg6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r41 = dyn as_character1(msg6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_msg6_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, RHO);
  // check L58() else D17()
  // L58()
  goto L58_;

L60_:;
  // st msg = r43
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym8 = ldf missing
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base8 = ldf missing in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard8 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

D17_:;
  // deopt 65 [r41]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L5_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args33);
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c3 then L33() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L6()
    goto L6_;
  }

L15_:;
  // c8 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c8 then L63() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L63()
    goto L63_;
  } else {
  // L16()
    goto L16_;
  }

L31_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r20 = dyn missing1(<sym new>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L5_;

L32_:;
  // r18 = dyn base3(<sym new>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names14, RHO);
  // goto L5(r18)
  // L5(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L5_;

L58_:;
  // goto L14(r41)
  // L14(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L14_;

L61_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r46 = dyn missing2(<sym new>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, RHO);
  // goto L15(r46)
  // L15(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L15_;

L62_:;
  // r44 = dyn base8(<sym new>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, RHO);
  // goto L15(r44)
  // L15(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L15_;

L6_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard5 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L65() else D20()
  // L65()
  goto L65_;

L33_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard4 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L63_:;
  // st new = NULL
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // goto L17()
  // L17()
  goto L17_;

D20_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // st msg = r23
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L8()
  // L8()
  goto L8_;

L9_:;
  // st msg = r29
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L13()
  // L13()
  goto L13_;

L34_:;
  // msg1 = ld msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

L35_:;
  // r22 = dyn base4(<sym msg>, <lang gettextf("Use '%s' instead.\n", new)>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, RHO);
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L7_;

L41_:;
  // msg3 = ld msg
  Rsh_Fir_reg_msg3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L42_:;
  // r28 = dyn base5(<sym msg>, <lang if(`!`(is.null(package)), gettextf("See help(\"Defunct\") and help(\"%s-defunct\").", package), gettext("See help(\"Defunct\")"))>)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names18, RHO);
  // goto L9(r28)
  // L9(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L9_;

L65_:;
  // p11 = prom<V +>{
  //   errorCondition = ldf errorCondition;
  //   p5 = prom<V +>{
  //     msg9 = ld msg;
  //     msg10 = force? msg9;
  //     checkMissing(msg10);
  //     return msg10;
  //   };
  //   p6 = prom<V +>{
  //     fname9 = ld fname;
  //     fname10 = force? fname9;
  //     checkMissing(fname10);
  //     return fname10;
  //   };
  //   p7 = prom<V +>{
  //     new3 = ld new;
  //     new4 = force? new3;
  //     checkMissing(new4);
  //     return new4;
  //   };
  //   p8 = prom<V +>{
  //     package5 = ld package;
  //     package6 = force? package5;
  //     checkMissing(package6);
  //     return package6;
  //   };
  //   p10 = prom<V +>{
  //     sys_call1 = ldf `sys.call`;
  //     p9 = prom<V +>{
  //       sys_parent1 = ldf `sys.parent`;
  //       r52 = dyn sys_parent1();
  //       return r52;
  //     };
  //     r54 = dyn sys_call1(p9);
  //     return r54;
  //   };
  //   r56 = dyn errorCondition[, old, new, package, class, call](p5, p6, p7, p8, "defunctError", p10);
  //   return r56;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_3, 0, NULL, CCP, RHO);
  // r58 = dyn stop(p11)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names21, RHO);
  // check L66() else D21()
  // L66()
  goto L66_;

D5_:;
  // deopt 27 [msg1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 41 [msg3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 85 [r58]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // msg2 = force? msg1
  Rsh_Fir_reg_msg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg1_);
  // checkMissing(msg2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_msg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L37() else D6()
  // L37()
  goto L37_;

L43_:;
  // msg4 = force? msg3
  Rsh_Fir_reg_msg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg3_);
  // checkMissing(msg4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_msg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard6 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L66_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r58
  return Rsh_Fir_reg_r58_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r32 = `!`(r31)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args54);
  // c6 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c6 then L47() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L47()
    goto L47_;
  } else {
  // L11()
    goto L11_;
  }

L37_:;
  // p2 = prom<V +>{
  //   new1 = ld new;
  //   new2 = force? new1;
  //   checkMissing(new2);
  //   return new2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_10, 0, NULL, CCP, RHO);
  // r25 = dyn gettextf1("Use '%s' instead.\n", p2)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

L44_:;
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L45_:;
  // r30 = dyn base6(<sym package>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, RHO);
  // goto L10(r30)
  // L10(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L10_;

D7_:;
  // deopt 33 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 44 [package1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L11_:;
  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

L12_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r37 = dyn c7(msg4, r35)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_msg4_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names24, RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

L38_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r26 = dyn c4(msg2, r25)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names25, RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

L46_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c5 = `==`(package2, NULL)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_package2_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args62);
  // goto L10(c5)
  // L10(c5)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_c5_;
  goto L10_;

L47_:;
  // gettextf2 = ldf gettextf
  Rsh_Fir_reg_gettextf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

D8_:;
  // deopt 35 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 58 [r37]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L7(r26)
  // L7(r26)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r26_;
  goto L7_;

L48_:;
  // p3 = prom<V +>{
  //   package3 = ld package;
  //   package4 = force? package3;
  //   checkMissing(package4);
  //   return package4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_11, 0, NULL, CCP, RHO);
  // r34 = dyn gettextf2("See help(\"Defunct\") and help(\"%s-defunct\").", p3)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf2_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names26, RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

L51_:;
  // r36 = dyn gettext("See help(\"Defunct\")")
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names27, RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

L53_:;
  // goto L9(r37)
  // L9(r37)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r37_;
  goto L9_;

D12_:;
  // deopt 52 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 56 [r36]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L12(r34)
  // L12(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L12_;

L52_:;
  // goto L12(r36)
  // L12(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // sys_parent = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // r2 = dyn sys_parent()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent, 0, NULL, NULL, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fname;
  SEXP Rsh_Fir_reg_fname1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_fname3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_fname6_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_fname7_;
  SEXP Rsh_Fir_reg_fname8_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // fname = ld fname
  Rsh_Fir_reg_fname = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // fname1 = force? fname
  Rsh_Fir_reg_fname1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fname);
  // checkMissing(fname1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_fname1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(fname1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_fname1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args15);
  // if c2 then L2() else L3(fname1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L2()
    goto L2_;
  } else {
  // L3(fname1)
    Rsh_Fir_reg_fname3_ = Rsh_Fir_reg_fname1_;
    goto L3_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L2_:;
  // dr2 = tryDispatchBuiltin.1("[", fname1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_fname1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L4() else L3(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr2)
    Rsh_Fir_reg_fname3_ = Rsh_Fir_reg_dr2_;
    goto L3_;
  }

L3_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r15 = dyn __1(fname6, r13)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_fname6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L0_;

L4_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;

L5_:;
  // fname7 = ld fname
  Rsh_Fir_reg_fname7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // fname8 = force? fname7
  Rsh_Fir_reg_fname8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fname7_);
  // checkMissing(fname8)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_fname8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r14 = dyn length(fname8)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_fname8_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, RHO);
  // goto L1(fname3, r14)
  // L1(fname3, r14)
  Rsh_Fir_reg_fname6_ = Rsh_Fir_reg_fname3_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L1_;

L6_:;
  // r12 = dyn base2(<sym fname>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, RHO);
  // goto L1(fname3, r12)
  // L1(fname3, r12)
  Rsh_Fir_reg_fname6_ = Rsh_Fir_reg_fname3_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg7_;
  SEXP Rsh_Fir_reg_msg8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // msg7 = ld msg
  Rsh_Fir_reg_msg7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // msg8 = force? msg7
  Rsh_Fir_reg_msg8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg7_);
  // checkMissing(msg8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_msg8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return msg8
  return Rsh_Fir_reg_msg8_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_errorCondition;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r56_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // errorCondition = ldf errorCondition
  Rsh_Fir_reg_errorCondition = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p5 = prom<V +>{
  //   msg9 = ld msg;
  //   msg10 = force? msg9;
  //   checkMissing(msg10);
  //   return msg10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_4, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   fname9 = ld fname;
  //   fname10 = force? fname9;
  //   checkMissing(fname10);
  //   return fname10;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_5, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   new3 = ld new;
  //   new4 = force? new3;
  //   checkMissing(new4);
  //   return new4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_6, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   package5 = ld package;
  //   package6 = force? package5;
  //   checkMissing(package6);
  //   return package6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_7, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   sys_call1 = ldf `sys.call`;
  //   p9 = prom<V +>{
  //     sys_parent1 = ldf `sys.parent`;
  //     r52 = dyn sys_parent1();
  //     return r52;
  //   };
  //   r54 = dyn sys_call1(p9);
  //   return r54;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_8, 0, NULL, CCP, RHO);
  // r56 = dyn errorCondition[, old, new, package, class, call](p5, p6, p7, p8, "defunctError", p10)
  SEXP Rsh_Fir_array_args49[6];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args49[3] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[5] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names20[6];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names20[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names20[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names20[4] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names20[5] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_errorCondition, 6, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, RHO);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg9_;
  SEXP Rsh_Fir_reg_msg10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // msg9 = ld msg
  Rsh_Fir_reg_msg9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // msg10 = force? msg9
  Rsh_Fir_reg_msg10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg9_);
  // checkMissing(msg10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_msg10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return msg10
  return Rsh_Fir_reg_msg10_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fname9_;
  SEXP Rsh_Fir_reg_fname10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // fname9 = ld fname
  Rsh_Fir_reg_fname9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // fname10 = force? fname9
  Rsh_Fir_reg_fname10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fname9_);
  // checkMissing(fname10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_fname10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return fname10
  return Rsh_Fir_reg_fname10_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new3_;
  SEXP Rsh_Fir_reg_new4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // new3 = ld new
  Rsh_Fir_reg_new3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // new4 = force? new3
  Rsh_Fir_reg_new4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new3_);
  // checkMissing(new4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_new4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return new4
  return Rsh_Fir_reg_new4_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_package5_;
  SEXP Rsh_Fir_reg_package6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // package5 = ld package
  Rsh_Fir_reg_package5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // package6 = force? package5
  Rsh_Fir_reg_package6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package5_);
  // checkMissing(package6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_package6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return package6
  return Rsh_Fir_reg_package6_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_call1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // sys_call1 = ldf `sys.call`
  Rsh_Fir_reg_sys_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // p9 = prom<V +>{
  //   sys_parent1 = ldf `sys.parent`;
  //   r52 = dyn sys_parent1();
  //   return r52;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2010815835_9, 0, NULL, CCP, RHO);
  // r54 = dyn sys_call1(p9)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names19, RHO);
  // return r54
  return Rsh_Fir_reg_r54_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent1_;
  SEXP Rsh_Fir_reg_r52_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // sys_parent1 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // r52 = dyn sys_parent1()
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent1_, 0, NULL, NULL, RHO);
  // return r52
  return Rsh_Fir_reg_r52_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new1_;
  SEXP Rsh_Fir_reg_new2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // new1 = ld new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // new2 = force? new1
  Rsh_Fir_reg_new2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new1_);
  // checkMissing(new2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_new2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return new2
  return Rsh_Fir_reg_new2_;
}
SEXP Rsh_Fir_user_promise_inner2010815835_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_package3_;
  SEXP Rsh_Fir_reg_package4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2010815835/0: expected 0, got %d", NCAPTURES);

  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // checkMissing(package4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_package4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return package4
  return Rsh_Fir_reg_package4_;
}
