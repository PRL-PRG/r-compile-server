#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner986480139_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner986480139_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner986480139_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner986480139_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner986480139_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner986480139
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner986480139_, RHO, CCP);
  // st socketAccept = r
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
SEXP Rsh_Fir_user_function_inner986480139_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner986480139 dynamic dispatch ([socket, blocking, open, encoding, timeout, options])

  return Rsh_Fir_user_version_inner986480139_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner986480139_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner986480139 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner986480139/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_socket;  // socket
  SEXP Rsh_Fir_reg_blocking;  // blocking
  SEXP Rsh_Fir_reg_open;  // open
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_timeout;  // timeout
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_blocking_isMissing;  // blocking_isMissing
  SEXP Rsh_Fir_reg_blocking_orDefault;  // blocking_orDefault
  SEXP Rsh_Fir_reg_open_isMissing;  // open_isMissing
  SEXP Rsh_Fir_reg_open_orDefault;  // open_orDefault
  SEXP Rsh_Fir_reg_encoding_isMissing;  // encoding_isMissing
  SEXP Rsh_Fir_reg_encoding_orDefault;  // encoding_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_timeout_isMissing;  // timeout_isMissing
  SEXP Rsh_Fir_reg_timeout_orDefault;  // timeout_orDefault
  SEXP Rsh_Fir_reg_getOption1_;  // getOption1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_options_isMissing;  // options_isMissing
  SEXP Rsh_Fir_reg_options_orDefault;  // options_orDefault
  SEXP Rsh_Fir_reg_getOption2_;  // getOption2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_socket1_;  // socket1
  SEXP Rsh_Fir_reg_socket2_;  // socket2
  SEXP Rsh_Fir_reg_blocking1_;  // blocking1
  SEXP Rsh_Fir_reg_blocking2_;  // blocking2
  SEXP Rsh_Fir_reg_open1_;  // open1
  SEXP Rsh_Fir_reg_open2_;  // open2
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_timeout1_;  // timeout1
  SEXP Rsh_Fir_reg_timeout2_;  // timeout2
  SEXP Rsh_Fir_reg_options1_;  // options1
  SEXP Rsh_Fir_reg_options2_;  // options2
  SEXP Rsh_Fir_reg_socketAccept;  // socketAccept
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_socket = PARAMS[0];
  Rsh_Fir_reg_blocking = PARAMS[1];
  Rsh_Fir_reg_open = PARAMS[2];
  Rsh_Fir_reg_encoding = PARAMS[3];
  Rsh_Fir_reg_timeout = PARAMS[4];
  Rsh_Fir_reg_options = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st socket = socket
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_socket, RHO);
  (void)(Rsh_Fir_reg_socket);
  // blocking_isMissing = missing.0(blocking)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_blocking;
  Rsh_Fir_reg_blocking_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if blocking_isMissing then L0(FALSE) else L0(blocking)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_blocking_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_blocking_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(blocking)
    Rsh_Fir_reg_blocking_orDefault = Rsh_Fir_reg_blocking;
    goto L0_;
  }

L0_:;
  // st blocking = blocking_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_blocking_orDefault, RHO);
  (void)(Rsh_Fir_reg_blocking_orDefault);
  // open_isMissing = missing.0(open)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_open;
  Rsh_Fir_reg_open_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if open_isMissing then L1("a+") else L1(open)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_open_isMissing)) {
  // L1("a+")
    Rsh_Fir_reg_open_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(open)
    Rsh_Fir_reg_open_orDefault = Rsh_Fir_reg_open;
    goto L1_;
  }

L1_:;
  // st open = open_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_open_orDefault, RHO);
  (void)(Rsh_Fir_reg_open_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if encoding_isMissing then L2() else L3(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("encoding");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner986480139_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // timeout_isMissing = missing.0(timeout)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_timeout;
  Rsh_Fir_reg_timeout_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if timeout_isMissing then L4() else L5(timeout)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_timeout_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(timeout)
    Rsh_Fir_reg_timeout_orDefault = Rsh_Fir_reg_timeout;
    goto L5_;
  }

L4_:;
  // p1 = prom<V +>{
  //   getOption1 = ldf getOption;
  //   r2 = dyn getOption1("timeout");
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner986480139_1, CCP, RHO);
  // goto L5(p1)
  // L5(p1)
  Rsh_Fir_reg_timeout_orDefault = Rsh_Fir_reg_p1_;
  goto L5_;

L5_:;
  // st timeout = timeout_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_timeout_orDefault, RHO);
  (void)(Rsh_Fir_reg_timeout_orDefault);
  // options_isMissing = missing.0(options)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_options;
  Rsh_Fir_reg_options_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if options_isMissing then L6() else L7(options)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_options_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(options)
    Rsh_Fir_reg_options_orDefault = Rsh_Fir_reg_options;
    goto L7_;
  }

L6_:;
  // p2 = prom<V +>{
  //   getOption2 = ldf getOption;
  //   r4 = dyn getOption2("socketOptions");
  //   return r4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner986480139_2, CCP, RHO);
  // goto L7(p2)
  // L7(p2)
  Rsh_Fir_reg_options_orDefault = Rsh_Fir_reg_p2_;
  goto L7_;

L7_:;
  // st options = options_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_options_orDefault, RHO);
  (void)(Rsh_Fir_reg_options_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
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
  // return r7
  return Rsh_Fir_reg_r7_;

L9_:;
  // socket1 = ld socket
  Rsh_Fir_reg_socket1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r6 = dyn base(<lang socketAccept(socket, blocking, open, encoding, timeout, options)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L8(r6)
  // L8(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L8_;

D0_:;
  // deopt 2 [socket1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_socket1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // socket2 = force? socket1
  Rsh_Fir_reg_socket2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_socket1_);
  // checkMissing(socket2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_socket2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // blocking1 = ld blocking
  Rsh_Fir_reg_blocking1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 4 [blocking1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_blocking1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // blocking2 = force? blocking1
  Rsh_Fir_reg_blocking2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_blocking1_);
  // checkMissing(blocking2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_blocking2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // open1 = ld open
  Rsh_Fir_reg_open1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 6 [open1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_open1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // open2 = force? open1
  Rsh_Fir_reg_open2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_open1_);
  // checkMissing(open2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_open2_;
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
  // timeout1 = ld timeout
  Rsh_Fir_reg_timeout1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 10 [timeout1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_timeout1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // timeout2 = force? timeout1
  Rsh_Fir_reg_timeout2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_timeout1_);
  // checkMissing(timeout2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_timeout2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // options1 = ld options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 12 [options1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_options1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // options2 = force? options1
  Rsh_Fir_reg_options2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options1_);
  // checkMissing(options2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_options2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // socketAccept = ldf socketAccept in base
  Rsh_Fir_reg_socketAccept = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r8 = dyn socketAccept(socket2, blocking2, open2, encoding2, timeout2, options2)
  SEXP Rsh_Fir_array_args16[6];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_socket2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_blocking2_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_open2_;
  Rsh_Fir_array_args16[3] = Rsh_Fir_reg_encoding2_;
  Rsh_Fir_array_args16[4] = Rsh_Fir_reg_timeout2_;
  Rsh_Fir_array_args16[5] = Rsh_Fir_reg_options2_;
  SEXP Rsh_Fir_array_arg_names4[6];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_socketAccept, 6, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L8(r8)
  // L8(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner986480139_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r = dyn getOption("encoding")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner986480139_1(SEXP CCP, SEXP RHO) {
  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r2 = dyn getOption1("timeout")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner986480139_2(SEXP CCP, SEXP RHO) {
  // getOption2 = ldf getOption
  Rsh_Fir_reg_getOption2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r4 = dyn getOption2("socketOptions")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption2_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
