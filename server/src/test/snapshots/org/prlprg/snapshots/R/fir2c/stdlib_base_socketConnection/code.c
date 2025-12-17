#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1154884528_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1154884528_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1154884528_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1154884528_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1154884528_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1154884528
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1154884528_, RHO, CCP);
  // st socketConnection = r
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
SEXP Rsh_Fir_user_function_inner1154884528_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1154884528 dynamic dispatch ([host, port, server, blocking, open, encoding, timeout, options])

  return Rsh_Fir_user_version_inner1154884528_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1154884528_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1154884528 version 0 (*, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner1154884528/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_host;  // host
  SEXP Rsh_Fir_reg_port;  // port
  SEXP Rsh_Fir_reg_server;  // server
  SEXP Rsh_Fir_reg_blocking;  // blocking
  SEXP Rsh_Fir_reg_open;  // open
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_timeout;  // timeout
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_host_isMissing;  // host_isMissing
  SEXP Rsh_Fir_reg_host_orDefault;  // host_orDefault
  SEXP Rsh_Fir_reg_server_isMissing;  // server_isMissing
  SEXP Rsh_Fir_reg_server_orDefault;  // server_orDefault
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
  SEXP Rsh_Fir_reg_host1_;  // host1
  SEXP Rsh_Fir_reg_host2_;  // host2
  SEXP Rsh_Fir_reg_port1_;  // port1
  SEXP Rsh_Fir_reg_port2_;  // port2
  SEXP Rsh_Fir_reg_server1_;  // server1
  SEXP Rsh_Fir_reg_server2_;  // server2
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
  SEXP Rsh_Fir_reg_socketConnection;  // socketConnection
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_host = PARAMS[0];
  Rsh_Fir_reg_port = PARAMS[1];
  Rsh_Fir_reg_server = PARAMS[2];
  Rsh_Fir_reg_blocking = PARAMS[3];
  Rsh_Fir_reg_open = PARAMS[4];
  Rsh_Fir_reg_encoding = PARAMS[5];
  Rsh_Fir_reg_timeout = PARAMS[6];
  Rsh_Fir_reg_options = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // host_isMissing = missing.0(host)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_host;
  Rsh_Fir_reg_host_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if host_isMissing then L0("localhost") else L0(host)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_host_isMissing)) {
  // L0("localhost")
    Rsh_Fir_reg_host_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(host)
    Rsh_Fir_reg_host_orDefault = Rsh_Fir_reg_host;
    goto L0_;
  }

L0_:;
  // st host = host_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_host_orDefault, RHO);
  (void)(Rsh_Fir_reg_host_orDefault);
  // st port = port
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_port, RHO);
  (void)(Rsh_Fir_reg_port);
  // server_isMissing = missing.0(server)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_server;
  Rsh_Fir_reg_server_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if server_isMissing then L1(FALSE) else L1(server)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_server_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_server_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(server)
    Rsh_Fir_reg_server_orDefault = Rsh_Fir_reg_server;
    goto L1_;
  }

L1_:;
  // st server = server_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_server_orDefault, RHO);
  (void)(Rsh_Fir_reg_server_orDefault);
  // blocking_isMissing = missing.0(blocking)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_blocking;
  Rsh_Fir_reg_blocking_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if blocking_isMissing then L2(FALSE) else L2(blocking)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_blocking_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_blocking_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(blocking)
    Rsh_Fir_reg_blocking_orDefault = Rsh_Fir_reg_blocking;
    goto L2_;
  }

L2_:;
  // st blocking = blocking_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_blocking_orDefault, RHO);
  (void)(Rsh_Fir_reg_blocking_orDefault);
  // open_isMissing = missing.0(open)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_open;
  Rsh_Fir_reg_open_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if open_isMissing then L3("a+") else L3(open)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_open_isMissing)) {
  // L3("a+")
    Rsh_Fir_reg_open_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(open)
    Rsh_Fir_reg_open_orDefault = Rsh_Fir_reg_open;
    goto L3_;
  }

L3_:;
  // st open = open_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_open_orDefault, RHO);
  (void)(Rsh_Fir_reg_open_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if encoding_isMissing then L4() else L5(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L5_;
  }

L4_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("encoding");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1154884528_, CCP, RHO);
  // goto L5(p)
  // L5(p)
  Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_p;
  goto L5_;

L5_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // timeout_isMissing = missing.0(timeout)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_timeout;
  Rsh_Fir_reg_timeout_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if timeout_isMissing then L6() else L7(timeout)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_timeout_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(timeout)
    Rsh_Fir_reg_timeout_orDefault = Rsh_Fir_reg_timeout;
    goto L7_;
  }

L6_:;
  // p1 = prom<V +>{
  //   getOption1 = ldf getOption;
  //   r2 = dyn getOption1("timeout");
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1154884528_1, CCP, RHO);
  // goto L7(p1)
  // L7(p1)
  Rsh_Fir_reg_timeout_orDefault = Rsh_Fir_reg_p1_;
  goto L7_;

L7_:;
  // st timeout = timeout_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_timeout_orDefault, RHO);
  (void)(Rsh_Fir_reg_timeout_orDefault);
  // options_isMissing = missing.0(options)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_options;
  Rsh_Fir_reg_options_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if options_isMissing then L8() else L9(options)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_options_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(options)
    Rsh_Fir_reg_options_orDefault = Rsh_Fir_reg_options;
    goto L9_;
  }

L8_:;
  // p2 = prom<V +>{
  //   getOption2 = ldf getOption;
  //   r4 = dyn getOption2("socketOptions");
  //   return r4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1154884528_2, CCP, RHO);
  // goto L9(p2)
  // L9(p2)
  Rsh_Fir_reg_options_orDefault = Rsh_Fir_reg_p2_;
  goto L9_;

L9_:;
  // st options = options_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_options_orDefault, RHO);
  (void)(Rsh_Fir_reg_options_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L11_:;
  // host1 = ld host
  Rsh_Fir_reg_host1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r6 = dyn base(<lang socketConnection(host, port, server, blocking, open, encoding, timeout, options)>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L10(r6)
  // L10(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L10_;

D0_:;
  // deopt 2 [host1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_host1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // host2 = force? host1
  Rsh_Fir_reg_host2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_host1_);
  // checkMissing(host2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_host2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // port1 = ld port
  Rsh_Fir_reg_port1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 4 [port1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_port1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // port2 = force? port1
  Rsh_Fir_reg_port2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_port1_);
  // checkMissing(port2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_port2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // server1 = ld server
  Rsh_Fir_reg_server1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

D2_:;
  // deopt 6 [server1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_server1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // server2 = force? server1
  Rsh_Fir_reg_server2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_server1_);
  // checkMissing(server2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_server2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // blocking1 = ld blocking
  Rsh_Fir_reg_blocking1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 8 [blocking1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_blocking1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // blocking2 = force? blocking1
  Rsh_Fir_reg_blocking2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_blocking1_);
  // checkMissing(blocking2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_blocking2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // open1 = ld open
  Rsh_Fir_reg_open1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 10 [open1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_open1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // open2 = force? open1
  Rsh_Fir_reg_open2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_open1_);
  // checkMissing(open2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_open2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 12 [encoding1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // timeout1 = ld timeout
  Rsh_Fir_reg_timeout1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 14 [timeout1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_timeout1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // timeout2 = force? timeout1
  Rsh_Fir_reg_timeout2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_timeout1_);
  // checkMissing(timeout2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_timeout2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // options1 = ld options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 16 [options1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_options1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // options2 = force? options1
  Rsh_Fir_reg_options2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options1_);
  // checkMissing(options2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_options2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // socketConnection = ldf socketConnection in base
  Rsh_Fir_reg_socketConnection = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r8 = dyn socketConnection(host2, port2, server2, blocking2, open2, encoding2, timeout2, options2)
  SEXP Rsh_Fir_array_args20[8];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_host2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_port2_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_server2_;
  Rsh_Fir_array_args20[3] = Rsh_Fir_reg_blocking2_;
  Rsh_Fir_array_args20[4] = Rsh_Fir_reg_open2_;
  Rsh_Fir_array_args20[5] = Rsh_Fir_reg_encoding2_;
  Rsh_Fir_array_args20[6] = Rsh_Fir_reg_timeout2_;
  Rsh_Fir_array_args20[7] = Rsh_Fir_reg_options2_;
  SEXP Rsh_Fir_array_arg_names4[8];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_socketConnection, 8, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L10(r8)
  // L10(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner1154884528_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r = dyn getOption("encoding")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1154884528_1(SEXP CCP, SEXP RHO) {
  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r2 = dyn getOption1("timeout")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner1154884528_2(SEXP CCP, SEXP RHO) {
  // getOption2 = ldf getOption
  Rsh_Fir_reg_getOption2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r4 = dyn getOption2("socketOptions")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption2_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
