#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner481803433_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner481803433_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner481803433_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner481803433_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner481803433_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner481803433_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner481803433_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner481803433
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner481803433_, RHO, CCP);
  // st Stangle = r
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
SEXP Rsh_Fir_user_function_inner481803433_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner481803433 dynamic dispatch ([file, driver, syntax, encoding, `...`])

  return Rsh_Fir_user_version_inner481803433_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner481803433_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner481803433 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner481803433/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_driver;  // driver
  SEXP Rsh_Fir_reg_syntax;  // syntax
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_driver_isMissing;  // driver_isMissing
  SEXP Rsh_Fir_reg_driver_orDefault;  // driver_orDefault
  SEXP Rsh_Fir_reg_Rtangle;  // Rtangle
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_syntax_isMissing;  // syntax_isMissing
  SEXP Rsh_Fir_reg_syntax_orDefault;  // syntax_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_encoding_isMissing;  // encoding_isMissing
  SEXP Rsh_Fir_reg_encoding_orDefault;  // encoding_orDefault
  SEXP Rsh_Fir_reg_Sweave;  // Sweave
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_driver1_;  // driver1
  SEXP Rsh_Fir_reg_driver2_;  // driver2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_driver = PARAMS[1];
  Rsh_Fir_reg_syntax = PARAMS[2];
  Rsh_Fir_reg_encoding = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // driver_isMissing = missing.0(driver)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_driver;
  Rsh_Fir_reg_driver_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if driver_isMissing then L0() else L1(driver)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_driver_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(driver)
    Rsh_Fir_reg_driver_orDefault = Rsh_Fir_reg_driver;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   Rtangle = ldf Rtangle;
  //   r = dyn Rtangle();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner481803433_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_driver_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st driver = driver_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_driver_orDefault, RHO);
  (void)(Rsh_Fir_reg_driver_orDefault);
  // syntax_isMissing = missing.0(syntax)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_syntax;
  Rsh_Fir_reg_syntax_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if syntax_isMissing then L2() else L3(syntax)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_syntax_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(syntax)
    Rsh_Fir_reg_syntax_orDefault = Rsh_Fir_reg_syntax;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   getOption = ldf getOption;
  //   r2 = dyn getOption("SweaveSyntax");
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner481803433_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_syntax_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st syntax = syntax_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_syntax_orDefault, RHO);
  (void)(Rsh_Fir_reg_syntax_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if encoding_isMissing then L4("") else L4(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L4("")
    Rsh_Fir_reg_encoding_orDefault = Rsh_const(CCP, 7);
    goto L4_;
  } else {
  // L4(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L4_;
  }

L4_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // Sweave = ldf Sweave
  Rsh_Fir_reg_Sweave = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner481803433_2, CCP, RHO);
  // p3 = prom<V +>{
  //   driver1 = ld driver;
  //   driver2 = force? driver1;
  //   checkMissing(driver2);
  //   return driver2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner481803433_3, CCP, RHO);
  // p4 = prom<V +>{
  //   encoding1 = ld encoding;
  //   encoding2 = force? encoding1;
  //   checkMissing(encoding2);
  //   return encoding2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner481803433_4, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // r7 = dyn Sweave[file, driver, encoding, `...`](p2, p3, p4, ddd1)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args7[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sweave, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 9 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner481803433_(SEXP CCP, SEXP RHO) {
  // Rtangle = ldf Rtangle
  Rsh_Fir_reg_Rtangle = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn Rtangle()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Rtangle, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner481803433_1(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r2 = dyn getOption("SweaveSyntax")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner481803433_2(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_user_promise_inner481803433_3(SEXP CCP, SEXP RHO) {
  // driver1 = ld driver
  Rsh_Fir_reg_driver1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // driver2 = force? driver1
  Rsh_Fir_reg_driver2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_driver1_);
  // checkMissing(driver2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_driver2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return driver2
  return Rsh_Fir_reg_driver2_;
}
SEXP Rsh_Fir_user_promise_inner481803433_4(SEXP CCP, SEXP RHO) {
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return encoding2
  return Rsh_Fir_reg_encoding2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
