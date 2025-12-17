#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner551110034_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner551110034_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner551110034_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner551110034_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner551110034
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner551110034_, RHO, CCP);
  // st file = r
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
SEXP Rsh_Fir_user_function_inner551110034_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner551110034 dynamic dispatch ([description, open, blocking, encoding, raw, method])

  return Rsh_Fir_user_version_inner551110034_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner551110034_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner551110034 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner551110034/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_description;  // description
  SEXP Rsh_Fir_reg_open;  // open
  SEXP Rsh_Fir_reg_blocking;  // blocking
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_raw;  // raw
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_description_isMissing;  // description_isMissing
  SEXP Rsh_Fir_reg_description_orDefault;  // description_orDefault
  SEXP Rsh_Fir_reg_open_isMissing;  // open_isMissing
  SEXP Rsh_Fir_reg_open_orDefault;  // open_orDefault
  SEXP Rsh_Fir_reg_blocking_isMissing;  // blocking_isMissing
  SEXP Rsh_Fir_reg_blocking_orDefault;  // blocking_orDefault
  SEXP Rsh_Fir_reg_encoding_isMissing;  // encoding_isMissing
  SEXP Rsh_Fir_reg_encoding_orDefault;  // encoding_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_raw_isMissing;  // raw_isMissing
  SEXP Rsh_Fir_reg_raw_orDefault;  // raw_orDefault
  SEXP Rsh_Fir_reg_method_isMissing;  // method_isMissing
  SEXP Rsh_Fir_reg_method_orDefault;  // method_orDefault
  SEXP Rsh_Fir_reg_getOption1_;  // getOption1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_description1_;  // description1
  SEXP Rsh_Fir_reg_description2_;  // description2
  SEXP Rsh_Fir_reg_open1_;  // open1
  SEXP Rsh_Fir_reg_open2_;  // open2
  SEXP Rsh_Fir_reg_blocking1_;  // blocking1
  SEXP Rsh_Fir_reg_blocking2_;  // blocking2
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_raw1_;  // raw1
  SEXP Rsh_Fir_reg_raw2_;  // raw2
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_description = PARAMS[0];
  Rsh_Fir_reg_open = PARAMS[1];
  Rsh_Fir_reg_blocking = PARAMS[2];
  Rsh_Fir_reg_encoding = PARAMS[3];
  Rsh_Fir_reg_raw = PARAMS[4];
  Rsh_Fir_reg_method = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // description_isMissing = missing.0(description)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_description;
  Rsh_Fir_reg_description_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if description_isMissing then L0("") else L0(description)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_description_isMissing)) {
  // L0("")
    Rsh_Fir_reg_description_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(description)
    Rsh_Fir_reg_description_orDefault = Rsh_Fir_reg_description;
    goto L0_;
  }

L0_:;
  // st description = description_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_description_orDefault, RHO);
  (void)(Rsh_Fir_reg_description_orDefault);
  // open_isMissing = missing.0(open)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_open;
  Rsh_Fir_reg_open_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if open_isMissing then L1("") else L1(open)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_open_isMissing)) {
  // L1("")
    Rsh_Fir_reg_open_orDefault = Rsh_const(CCP, 1);
    goto L1_;
  } else {
  // L1(open)
    Rsh_Fir_reg_open_orDefault = Rsh_Fir_reg_open;
    goto L1_;
  }

L1_:;
  // st open = open_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_open_orDefault, RHO);
  (void)(Rsh_Fir_reg_open_orDefault);
  // blocking_isMissing = missing.0(blocking)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_blocking;
  Rsh_Fir_reg_blocking_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if blocking_isMissing then L2(TRUE) else L2(blocking)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_blocking_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_blocking_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(blocking)
    Rsh_Fir_reg_blocking_orDefault = Rsh_Fir_reg_blocking;
    goto L2_;
  }

L2_:;
  // st blocking = blocking_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_blocking_orDefault, RHO);
  (void)(Rsh_Fir_reg_blocking_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if encoding_isMissing then L3() else L4(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("encoding");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner551110034_, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_p;
  goto L4_;

L4_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // raw_isMissing = missing.0(raw)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_raw;
  Rsh_Fir_reg_raw_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if raw_isMissing then L5(FALSE) else L5(raw)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_raw_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_raw_orDefault = Rsh_const(CCP, 9);
    goto L5_;
  } else {
  // L5(raw)
    Rsh_Fir_reg_raw_orDefault = Rsh_Fir_reg_raw;
    goto L5_;
  }

L5_:;
  // st raw = raw_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_raw_orDefault, RHO);
  (void)(Rsh_Fir_reg_raw_orDefault);
  // method_isMissing = missing.0(method)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_method;
  Rsh_Fir_reg_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if method_isMissing then L6() else L7(method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_method_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(method)
    Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_method;
    goto L7_;
  }

L6_:;
  // p1 = prom<V +>{
  //   getOption1 = ldf getOption;
  //   r2 = dyn getOption1("url.method", "default");
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner551110034_1, CCP, RHO);
  // goto L7(p1)
  // L7(p1)
  Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_p1_;
  goto L7_;

L7_:;
  // st method = method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_method_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L9_:;
  // description1 = ld description
  Rsh_Fir_reg_description1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r4 = dyn base(<lang file(description, open, blocking, encoding, method, raw)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L8(r4)
  // L8(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L8_;

D0_:;
  // deopt 2 [description1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_description1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // description2 = force? description1
  Rsh_Fir_reg_description2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_description1_);
  // checkMissing(description2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_description2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // open1 = ld open
  Rsh_Fir_reg_open1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 4 [open1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_open1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // open2 = force? open1
  Rsh_Fir_reg_open2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_open1_);
  // checkMissing(open2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_open2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // blocking1 = ld blocking
  Rsh_Fir_reg_blocking1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 6 [blocking1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_blocking1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // blocking2 = force? blocking1
  Rsh_Fir_reg_blocking2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_blocking1_);
  // checkMissing(blocking2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_blocking2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 8 [encoding1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 10 [method1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_method1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // raw1 = ld raw
  Rsh_Fir_reg_raw1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 12 [raw1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_raw1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // raw2 = force? raw1
  Rsh_Fir_reg_raw2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_raw1_);
  // checkMissing(raw2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_raw2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // file = ldf file in base
  Rsh_Fir_reg_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r6 = dyn file(description2, open2, blocking2, encoding2, method2, raw2)
  SEXP Rsh_Fir_array_args16[6];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_description2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_open2_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_blocking2_;
  Rsh_Fir_array_args16[3] = Rsh_Fir_reg_encoding2_;
  Rsh_Fir_array_args16[4] = Rsh_Fir_reg_method2_;
  Rsh_Fir_array_args16[5] = Rsh_Fir_reg_raw2_;
  SEXP Rsh_Fir_array_arg_names3[6];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file, 6, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L8(r6)
  // L8(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner551110034_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r = dyn getOption("encoding")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner551110034_1(SEXP CCP, SEXP RHO) {
  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r2 = dyn getOption1("url.method", "default")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
