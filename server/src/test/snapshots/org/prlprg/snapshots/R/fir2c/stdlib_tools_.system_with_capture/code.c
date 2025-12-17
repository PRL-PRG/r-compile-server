#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2674643882_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2674643882_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2674643882_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2674643882_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner2674643882
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2674643882_, RHO, CCP);
  // st `.system_with_capture` = r
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
SEXP Rsh_Fir_user_function_inner2674643882_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2674643882 dynamic dispatch ([command, args, env, stdin, input, timeout])

  return Rsh_Fir_user_version_inner2674643882_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2674643882_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2674643882 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2674643882/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_command;  // command
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_stdin;  // stdin
  SEXP Rsh_Fir_reg_input;  // input
  SEXP Rsh_Fir_reg_timeout;  // timeout
  SEXP Rsh_Fir_reg_args_isMissing;  // args_isMissing
  SEXP Rsh_Fir_reg_args_orDefault;  // args_orDefault
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_env_isMissing;  // env_isMissing
  SEXP Rsh_Fir_reg_env_orDefault;  // env_orDefault
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_stdin_isMissing;  // stdin_isMissing
  SEXP Rsh_Fir_reg_stdin_orDefault;  // stdin_orDefault
  SEXP Rsh_Fir_reg_input_isMissing;  // input_isMissing
  SEXP Rsh_Fir_reg_input_orDefault;  // input_orDefault
  SEXP Rsh_Fir_reg_timeout_isMissing;  // timeout_isMissing
  SEXP Rsh_Fir_reg_timeout_orDefault;  // timeout_orDefault
  SEXP Rsh_Fir_reg_tempfile;  // tempfile
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_tempfile1_;  // tempfile1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_system2_;  // system2
  SEXP Rsh_Fir_reg_command1_;  // command1
  SEXP Rsh_Fir_reg_command2_;  // command2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_outfile;  // outfile
  SEXP Rsh_Fir_reg_outfile1_;  // outfile1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_errfile;  // errfile
  SEXP Rsh_Fir_reg_errfile1_;  // errfile1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_stdin1_;  // stdin1
  SEXP Rsh_Fir_reg_stdin2_;  // stdin2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_input1_;  // input1
  SEXP Rsh_Fir_reg_input2_;  // input2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_timeout1_;  // timeout1
  SEXP Rsh_Fir_reg_timeout2_;  // timeout2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_status;  // status
  SEXP Rsh_Fir_reg_status1_;  // status1
  SEXP Rsh_Fir_reg_readLines;  // readLines
  SEXP Rsh_Fir_reg_outfile2_;  // outfile2
  SEXP Rsh_Fir_reg_outfile3_;  // outfile3
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_readLines1_;  // readLines1
  SEXP Rsh_Fir_reg_errfile2_;  // errfile2
  SEXP Rsh_Fir_reg_errfile3_;  // errfile3
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r24_;  // r24

  // Bind parameters
  Rsh_Fir_reg_command = PARAMS[0];
  Rsh_Fir_reg_args = PARAMS[1];
  Rsh_Fir_reg_env = PARAMS[2];
  Rsh_Fir_reg_stdin = PARAMS[3];
  Rsh_Fir_reg_input = PARAMS[4];
  Rsh_Fir_reg_timeout = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st command = command
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_command, RHO);
  (void)(Rsh_Fir_reg_command);
  // args_isMissing = missing.0(args)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_args;
  Rsh_Fir_reg_args_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if args_isMissing then L0() else L1(args)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_args_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(args)
    Rsh_Fir_reg_args_orDefault = Rsh_Fir_reg_args;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   character = ldf character;
  //   r = dyn character();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_args_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st args = args_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_args_orDefault, RHO);
  (void)(Rsh_Fir_reg_args_orDefault);
  // env_isMissing = missing.0(env)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_env;
  Rsh_Fir_reg_env_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if env_isMissing then L2() else L3(env)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_env_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(env)
    Rsh_Fir_reg_env_orDefault = Rsh_Fir_reg_env;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   character1 = ldf character;
  //   r2 = dyn character1();
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_env_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st env = env_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_env_orDefault, RHO);
  (void)(Rsh_Fir_reg_env_orDefault);
  // stdin_isMissing = missing.0(stdin)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_stdin;
  Rsh_Fir_reg_stdin_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if stdin_isMissing then L4("") else L4(stdin)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_stdin_isMissing)) {
  // L4("")
    Rsh_Fir_reg_stdin_orDefault = Rsh_const(CCP, 5);
    goto L4_;
  } else {
  // L4(stdin)
    Rsh_Fir_reg_stdin_orDefault = Rsh_Fir_reg_stdin;
    goto L4_;
  }

L4_:;
  // st stdin = stdin_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_stdin_orDefault, RHO);
  (void)(Rsh_Fir_reg_stdin_orDefault);
  // input_isMissing = missing.0(input)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_input;
  Rsh_Fir_reg_input_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if input_isMissing then L5(NULL) else L5(input)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_input_isMissing)) {
  // L5(NULL)
    Rsh_Fir_reg_input_orDefault = Rsh_const(CCP, 7);
    goto L5_;
  } else {
  // L5(input)
    Rsh_Fir_reg_input_orDefault = Rsh_Fir_reg_input;
    goto L5_;
  }

L5_:;
  // st input = input_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_input_orDefault, RHO);
  (void)(Rsh_Fir_reg_input_orDefault);
  // timeout_isMissing = missing.0(timeout)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_timeout;
  Rsh_Fir_reg_timeout_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if timeout_isMissing then L6(0.0) else L6(timeout)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_timeout_isMissing)) {
  // L6(0.0)
    Rsh_Fir_reg_timeout_orDefault = Rsh_const(CCP, 9);
    goto L6_;
  } else {
  // L6(timeout)
    Rsh_Fir_reg_timeout_orDefault = Rsh_Fir_reg_timeout;
    goto L6_;
  }

L6_:;
  // st timeout = timeout_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_timeout_orDefault, RHO);
  (void)(Rsh_Fir_reg_timeout_orDefault);
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L7_:;
  // system2 = ldf system2
  Rsh_Fir_reg_system2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r4 = dyn tempfile("xshell")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 3 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st outfile = r4
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // tempfile1 = ldf tempfile
  Rsh_Fir_reg_tempfile1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // r5 = dyn tempfile1("xshell")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // st errfile = r5
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym = ldf `on.exit`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf `on.exit` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r8 = dyn on_exit(<lang unlink(c(outfile, errfile))>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L7()
  // L7()
  goto L7_;

L14_:;
  // r6 = dyn base(<lang unlink(c(outfile, errfile))>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L7()
  // L7()
  goto L7_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p2 = prom<V +>{
  //   command1 = ld command;
  //   command2 = force? command1;
  //   checkMissing(command2);
  //   return command2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_2, CCP, RHO);
  // p3 = prom<V +>{
  //   args1 = ld args;
  //   args2 = force? args1;
  //   checkMissing(args2);
  //   return args2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_3, CCP, RHO);
  // p4 = prom<V +>{
  //   env1 = ld env;
  //   env2 = force? env1;
  //   checkMissing(env2);
  //   return env2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_4, CCP, RHO);
  // p5 = prom<V +>{
  //   outfile = ld outfile;
  //   outfile1 = force? outfile;
  //   checkMissing(outfile1);
  //   return outfile1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_5, CCP, RHO);
  // p6 = prom<V +>{
  //   errfile = ld errfile;
  //   errfile1 = force? errfile;
  //   checkMissing(errfile1);
  //   return errfile1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_6, CCP, RHO);
  // p7 = prom<V +>{
  //   stdin1 = ld stdin;
  //   stdin2 = force? stdin1;
  //   checkMissing(stdin2);
  //   return stdin2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_7, CCP, RHO);
  // p8 = prom<V +>{
  //   input1 = ld input;
  //   input2 = force? input1;
  //   checkMissing(input2);
  //   return input2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_8, CCP, RHO);
  // p9 = prom<V +>{
  //   timeout1 = ld timeout;
  //   timeout2 = force? timeout1;
  //   checkMissing(timeout2);
  //   return timeout2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_9, CCP, RHO);
  // r17 = dyn system2[, , env, stdout, stderr, stdin, input, timeout](p2, p3, p4, p5, p6, p7, p8, p9)
  SEXP Rsh_Fir_array_args18[8];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args18[4] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args18[5] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args18[6] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args18[7] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names4[8];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names4[4] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names4[5] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names4[6] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names4[7] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system2_, 8, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 29 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // st status = r17
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // status = ld status
  Rsh_Fir_reg_status = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L18_:;
  // r18 = dyn base1[status, stdout, stderr](<sym status>, <lang readLines(outfile, warn=FALSE)>, <lang readLines(errfile, warn=FALSE)>)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L8_;

D6_:;
  // deopt 33 [status]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_status;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // status1 = force? status
  Rsh_Fir_reg_status1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_status);
  // checkMissing(status1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_status1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p10 = prom<V +>{
  //   outfile2 = ld outfile;
  //   outfile3 = force? outfile2;
  //   checkMissing(outfile3);
  //   return outfile3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_10, CCP, RHO);
  // r21 = dyn readLines[, warn](p10, FALSE)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // readLines1 = ldf readLines
  Rsh_Fir_reg_readLines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p11 = prom<V +>{
  //   errfile2 = ld errfile;
  //   errfile3 = force? errfile2;
  //   checkMissing(errfile3);
  //   return errfile3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2674643882_11, CCP, RHO);
  // r23 = dyn readLines1[, warn](p11, FALSE)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 48 [r23]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L23_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r24 = dyn list(status1, r21, r23)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_status1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L24() else D11()
  // L24()
  goto L24_;

D11_:;
  // deopt 51 [r24]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r24_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2674643882_1(SEXP CCP, SEXP RHO) {
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r2 = dyn character1()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_2(SEXP CCP, SEXP RHO) {
  // command1 = ld command
  Rsh_Fir_reg_command1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // command2 = force? command1
  Rsh_Fir_reg_command2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_command1_);
  // checkMissing(command2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_command2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return command2
  return Rsh_Fir_reg_command2_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_3(SEXP CCP, SEXP RHO) {
  // args1 = ld args
  Rsh_Fir_reg_args1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // args2 = force? args1
  Rsh_Fir_reg_args2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args1_);
  // checkMissing(args2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_args2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return args2
  return Rsh_Fir_reg_args2_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_4(SEXP CCP, SEXP RHO) {
  // env1 = ld env
  Rsh_Fir_reg_env1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // env2 = force? env1
  Rsh_Fir_reg_env2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1_);
  // checkMissing(env2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_env2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return env2
  return Rsh_Fir_reg_env2_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_5(SEXP CCP, SEXP RHO) {
  // outfile = ld outfile
  Rsh_Fir_reg_outfile = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // outfile1 = force? outfile
  Rsh_Fir_reg_outfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outfile);
  // checkMissing(outfile1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_outfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return outfile1
  return Rsh_Fir_reg_outfile1_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_6(SEXP CCP, SEXP RHO) {
  // errfile = ld errfile
  Rsh_Fir_reg_errfile = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // errfile1 = force? errfile
  Rsh_Fir_reg_errfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_errfile);
  // checkMissing(errfile1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_errfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return errfile1
  return Rsh_Fir_reg_errfile1_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_7(SEXP CCP, SEXP RHO) {
  // stdin1 = ld stdin
  Rsh_Fir_reg_stdin1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // stdin2 = force? stdin1
  Rsh_Fir_reg_stdin2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stdin1_);
  // checkMissing(stdin2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_stdin2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return stdin2
  return Rsh_Fir_reg_stdin2_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_8(SEXP CCP, SEXP RHO) {
  // input1 = ld input
  Rsh_Fir_reg_input1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // input2 = force? input1
  Rsh_Fir_reg_input2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_input1_);
  // checkMissing(input2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_input2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return input2
  return Rsh_Fir_reg_input2_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_9(SEXP CCP, SEXP RHO) {
  // timeout1 = ld timeout
  Rsh_Fir_reg_timeout1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // timeout2 = force? timeout1
  Rsh_Fir_reg_timeout2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_timeout1_);
  // checkMissing(timeout2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_timeout2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return timeout2
  return Rsh_Fir_reg_timeout2_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_10(SEXP CCP, SEXP RHO) {
  // outfile2 = ld outfile
  Rsh_Fir_reg_outfile2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // outfile3 = force? outfile2
  Rsh_Fir_reg_outfile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outfile2_);
  // checkMissing(outfile3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_outfile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return outfile3
  return Rsh_Fir_reg_outfile3_;
}
SEXP Rsh_Fir_user_promise_inner2674643882_11(SEXP CCP, SEXP RHO) {
  // errfile2 = ld errfile
  Rsh_Fir_reg_errfile2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // errfile3 = force? errfile2
  Rsh_Fir_reg_errfile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_errfile2_);
  // checkMissing(errfile3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_errfile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return errfile3
  return Rsh_Fir_reg_errfile3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
