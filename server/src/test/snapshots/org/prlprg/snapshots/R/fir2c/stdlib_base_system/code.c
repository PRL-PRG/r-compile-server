#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1789924755_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1789924755_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1789924755_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1789924755_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_try;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_try1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1789924755
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1789924755_, RHO, CCP);
  // st system = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   system = ldf system;
  //   r1 = dyn system[, intern]("who", TRUE);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn try(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st t1 = r3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // try1 = ldf try
  Rsh_Fir_reg_try1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   system1 = ldf system;
  //   r4 = dyn system1[, intern, `ignore.stderr`]("ls fizzlipuzzli", TRUE, TRUE);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn try1(p1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try1_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_system;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // system = ldf system
  Rsh_Fir_reg_system = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r1 = dyn system[, intern]("who", TRUE)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_system1_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // system1 = ldf system
  Rsh_Fir_reg_system1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r4 = dyn system1[, intern, `ignore.stderr`]("ls fizzlipuzzli", TRUE, TRUE)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system1_, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_function_inner1789924755_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1789924755 dynamic dispatch ([command, intern, `ignore.stdout`, `ignore.stderr`, wait, input, `show.output.on.console`, minimized, invisible, timeout, `receive.console.signals`])

  return Rsh_Fir_user_version_inner1789924755_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1789924755_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1789924755 version 0 (*, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 11) Rsh_error("FIŘ arity mismatch for inner1789924755/0: expected 11, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_command;
  SEXP Rsh_Fir_reg_intern;
  SEXP Rsh_Fir_reg_ignore_stdout;
  SEXP Rsh_Fir_reg_ignore_stderr;
  SEXP Rsh_Fir_reg_wait;
  SEXP Rsh_Fir_reg_input;
  SEXP Rsh_Fir_reg_show_output_on_console;
  SEXP Rsh_Fir_reg_minimized;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_timeout;
  SEXP Rsh_Fir_reg_receive_console_signals;
  SEXP Rsh_Fir_reg_intern_isMissing;
  SEXP Rsh_Fir_reg_intern_orDefault;
  SEXP Rsh_Fir_reg_ignore_stdout_isMissing;
  SEXP Rsh_Fir_reg_ignore_stdout_orDefault;
  SEXP Rsh_Fir_reg_ignore_stderr_isMissing;
  SEXP Rsh_Fir_reg_ignore_stderr_orDefault;
  SEXP Rsh_Fir_reg_wait_isMissing;
  SEXP Rsh_Fir_reg_wait_orDefault;
  SEXP Rsh_Fir_reg_input_isMissing;
  SEXP Rsh_Fir_reg_input_orDefault;
  SEXP Rsh_Fir_reg_show_output_on_console_isMissing;
  SEXP Rsh_Fir_reg_show_output_on_console_orDefault;
  SEXP Rsh_Fir_reg_minimized_isMissing;
  SEXP Rsh_Fir_reg_minimized_orDefault;
  SEXP Rsh_Fir_reg_invisible_isMissing;
  SEXP Rsh_Fir_reg_invisible_orDefault;
  SEXP Rsh_Fir_reg_timeout_isMissing;
  SEXP Rsh_Fir_reg_timeout_orDefault;
  SEXP Rsh_Fir_reg_receive_console_signals_isMissing;
  SEXP Rsh_Fir_reg_receive_console_signals_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_missing2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_message;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_intern1_;
  SEXP Rsh_Fir_reg_intern2_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_intern3_;
  SEXP Rsh_Fir_reg_intern4_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_ignore_stdout1_;
  SEXP Rsh_Fir_reg_ignore_stdout2_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_ignore_stdout3_;
  SEXP Rsh_Fir_reg_ignore_stdout4_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_ignore_stderr1_;
  SEXP Rsh_Fir_reg_ignore_stderr2_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_ignore_stderr3_;
  SEXP Rsh_Fir_reg_ignore_stderr4_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_wait3_;
  SEXP Rsh_Fir_reg_wait4_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_wait5_;
  SEXP Rsh_Fir_reg_wait6_;
  SEXP Rsh_Fir_reg_is_na3_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_receive_console_signals1_;
  SEXP Rsh_Fir_reg_receive_console_signals2_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c69_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_receive_console_signals3_;
  SEXP Rsh_Fir_reg_receive_console_signals4_;
  SEXP Rsh_Fir_reg_is_na4_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_c71_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_ignore_stdout5_;
  SEXP Rsh_Fir_reg_ignore_stdout6_;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_ignore_stderr5_;
  SEXP Rsh_Fir_reg_ignore_stderr6_;
  SEXP Rsh_Fir_reg_c75_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_input1_;
  SEXP Rsh_Fir_reg_input2_;
  SEXP Rsh_Fir_reg_c76_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c77_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_input3_;
  SEXP Rsh_Fir_reg_input4_;
  SEXP Rsh_Fir_reg_c78_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_c79_;
  SEXP Rsh_Fir_reg_stop5_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_tempfile;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_writeLines;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_paste2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_wait7_;
  SEXP Rsh_Fir_reg_wait8_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_c80_;
  SEXP Rsh_Fir_reg_c82_;
  SEXP Rsh_Fir_reg_intern5_;
  SEXP Rsh_Fir_reg_intern6_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_c83_;
  SEXP Rsh_Fir_reg_c84_;
  SEXP Rsh_Fir_reg_c86_;
  SEXP Rsh_Fir_reg_paste3_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_command9_;
  SEXP Rsh_Fir_reg_command10_;
  SEXP Rsh_Fir_reg_intern7_;
  SEXP Rsh_Fir_reg_intern8_;
  SEXP Rsh_Fir_reg_timeout1_;
  SEXP Rsh_Fir_reg_timeout2_;
  SEXP Rsh_Fir_reg_receive_console_signals5_;
  SEXP Rsh_Fir_reg_receive_console_signals6_;
  SEXP Rsh_Fir_reg_system1;
  SEXP Rsh_Fir_reg_r89_;

  // Bind parameters
  Rsh_Fir_reg_command = PARAMS[0];
  Rsh_Fir_reg_intern = PARAMS[1];
  Rsh_Fir_reg_ignore_stdout = PARAMS[2];
  Rsh_Fir_reg_ignore_stderr = PARAMS[3];
  Rsh_Fir_reg_wait = PARAMS[4];
  Rsh_Fir_reg_input = PARAMS[5];
  Rsh_Fir_reg_show_output_on_console = PARAMS[6];
  Rsh_Fir_reg_minimized = PARAMS[7];
  Rsh_Fir_reg_invisible = PARAMS[8];
  Rsh_Fir_reg_timeout = PARAMS[9];
  Rsh_Fir_reg_receive_console_signals = PARAMS[10];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st command = command
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_command, RHO);
  (void)(Rsh_Fir_reg_command);
  // intern_isMissing = missing.0(intern)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_intern;
  Rsh_Fir_reg_intern_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if intern_isMissing then L0(FALSE) else L0(intern)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_intern_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_intern_orDefault = Rsh_const(CCP, 9);
    goto L0_;
  } else {
  // L0(intern)
    Rsh_Fir_reg_intern_orDefault = Rsh_Fir_reg_intern;
    goto L0_;
  }

L0_:;
  // st intern = intern_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_intern_orDefault, RHO);
  (void)(Rsh_Fir_reg_intern_orDefault);
  // ignore_stdout_isMissing = missing.0(ignore_stdout)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ignore_stdout;
  Rsh_Fir_reg_ignore_stdout_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if ignore_stdout_isMissing then L1(FALSE) else L1(ignore_stdout)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ignore_stdout_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_ignore_stdout_orDefault = Rsh_const(CCP, 9);
    goto L1_;
  } else {
  // L1(ignore_stdout)
    Rsh_Fir_reg_ignore_stdout_orDefault = Rsh_Fir_reg_ignore_stdout;
    goto L1_;
  }

L1_:;
  // st `ignore.stdout` = ignore_stdout_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_ignore_stdout_orDefault, RHO);
  (void)(Rsh_Fir_reg_ignore_stdout_orDefault);
  // ignore_stderr_isMissing = missing.0(ignore_stderr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ignore_stderr;
  Rsh_Fir_reg_ignore_stderr_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if ignore_stderr_isMissing then L2(FALSE) else L2(ignore_stderr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ignore_stderr_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_ignore_stderr_orDefault = Rsh_const(CCP, 9);
    goto L2_;
  } else {
  // L2(ignore_stderr)
    Rsh_Fir_reg_ignore_stderr_orDefault = Rsh_Fir_reg_ignore_stderr;
    goto L2_;
  }

L2_:;
  // st `ignore.stderr` = ignore_stderr_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ignore_stderr_orDefault, RHO);
  (void)(Rsh_Fir_reg_ignore_stderr_orDefault);
  // wait_isMissing = missing.0(wait)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_wait;
  Rsh_Fir_reg_wait_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if wait_isMissing then L3(TRUE) else L3(wait)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_wait_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_wait_orDefault = Rsh_const(CCP, 3);
    goto L3_;
  } else {
  // L3(wait)
    Rsh_Fir_reg_wait_orDefault = Rsh_Fir_reg_wait;
    goto L3_;
  }

L3_:;
  // st wait = wait_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_wait_orDefault, RHO);
  (void)(Rsh_Fir_reg_wait_orDefault);
  // input_isMissing = missing.0(input)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_input;
  Rsh_Fir_reg_input_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if input_isMissing then L4(NULL) else L4(input)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_input_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_input_orDefault = Rsh_const(CCP, 12);
    goto L4_;
  } else {
  // L4(input)
    Rsh_Fir_reg_input_orDefault = Rsh_Fir_reg_input;
    goto L4_;
  }

L4_:;
  // st input = input_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_input_orDefault, RHO);
  (void)(Rsh_Fir_reg_input_orDefault);
  // show_output_on_console_isMissing = missing.0(show_output_on_console)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_show_output_on_console;
  Rsh_Fir_reg_show_output_on_console_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if show_output_on_console_isMissing then L5(TRUE) else L5(show_output_on_console)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_show_output_on_console_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_show_output_on_console_orDefault = Rsh_const(CCP, 3);
    goto L5_;
  } else {
  // L5(show_output_on_console)
    Rsh_Fir_reg_show_output_on_console_orDefault = Rsh_Fir_reg_show_output_on_console;
    goto L5_;
  }

L5_:;
  // st `show.output.on.console` = show_output_on_console_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_show_output_on_console_orDefault, RHO);
  (void)(Rsh_Fir_reg_show_output_on_console_orDefault);
  // minimized_isMissing = missing.0(minimized)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_minimized;
  Rsh_Fir_reg_minimized_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if minimized_isMissing then L6(FALSE) else L6(minimized)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_minimized_isMissing)) {
  // L6(FALSE)
    Rsh_Fir_reg_minimized_orDefault = Rsh_const(CCP, 9);
    goto L6_;
  } else {
  // L6(minimized)
    Rsh_Fir_reg_minimized_orDefault = Rsh_Fir_reg_minimized;
    goto L6_;
  }

L6_:;
  // st minimized = minimized_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_minimized_orDefault, RHO);
  (void)(Rsh_Fir_reg_minimized_orDefault);
  // invisible_isMissing = missing.0(invisible)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_invisible;
  Rsh_Fir_reg_invisible_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if invisible_isMissing then L7(TRUE) else L7(invisible)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_invisible_isMissing)) {
  // L7(TRUE)
    Rsh_Fir_reg_invisible_orDefault = Rsh_const(CCP, 3);
    goto L7_;
  } else {
  // L7(invisible)
    Rsh_Fir_reg_invisible_orDefault = Rsh_Fir_reg_invisible;
    goto L7_;
  }

L7_:;
  // st invisible = invisible_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_invisible_orDefault, RHO);
  (void)(Rsh_Fir_reg_invisible_orDefault);
  // timeout_isMissing = missing.0(timeout)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_timeout;
  Rsh_Fir_reg_timeout_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if timeout_isMissing then L8(0.0) else L8(timeout)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_timeout_isMissing)) {
  // L8(0.0)
    Rsh_Fir_reg_timeout_orDefault = Rsh_const(CCP, 17);
    goto L8_;
  } else {
  // L8(timeout)
    Rsh_Fir_reg_timeout_orDefault = Rsh_Fir_reg_timeout;
    goto L8_;
  }

L8_:;
  // st timeout = timeout_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_timeout_orDefault, RHO);
  (void)(Rsh_Fir_reg_timeout_orDefault);
  // receive_console_signals_isMissing = missing.0(receive_console_signals)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_receive_console_signals;
  Rsh_Fir_reg_receive_console_signals_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args13);
  // if receive_console_signals_isMissing then L9() else L10(receive_console_signals)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_receive_console_signals_isMissing)) {
  // L9()
    goto L9_;
  } else {
  // L10(receive_console_signals)
    Rsh_Fir_reg_receive_console_signals_orDefault = Rsh_Fir_reg_receive_console_signals;
    goto L10_;
  }

L9_:;
  // p = prom<V +>{
  //   wait1 = ld wait;
  //   wait2 = force? wait1;
  //   checkMissing(wait2);
  //   return wait2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_, 0, NULL, CCP, RHO);
  // goto L10(p)
  // L10(p)
  Rsh_Fir_reg_receive_console_signals_orDefault = Rsh_Fir_reg_p1;
  goto L10_;

L10_:;
  // st `receive.console.signals` = receive_console_signals_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_receive_console_signals_orDefault, RHO);
  (void)(Rsh_Fir_reg_receive_console_signals_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L11_:;
  // r4 = `!`(r2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args16);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c then L12(c) else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L12_;
  } else {
  // L60()
    goto L60_;
  }

L58_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r3 = dyn missing(<sym show.output.on.console>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L11(r3)
  // L11(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_1;
  goto L11_;

L59_:;
  // r1 = dyn base(<sym show.output.on.console>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L11(r1)
  // L11(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_1;
  goto L11_;

L12_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c9 then L14(c9) else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L14(c9)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c9_;
    goto L14_;
  } else {
  // L64()
    goto L64_;
  }

L60_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard1 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L13_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args22);
  // c6 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args24);
  // goto L12(c7)
  // L12(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L12_;

L14_:;
  // c18 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c18 then L68() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L68()
    goto L68_;
  } else {
  // L16()
    goto L16_;
  }

L61_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r7 = dyn missing1(<sym minimized>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L13(c, r7)
  // L13(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_;
  goto L13_;

L62_:;
  // r5 = dyn base1(<sym minimized>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L13(c, r5)
  // L13(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_;
  goto L13_;

L64_:;
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard2 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L15_:;
  // r12 = `!`(r10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args29);
  // c15 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // c16 = `||`(c14, c15)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args31);
  // goto L14(c16)
  // L14(c16)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c16_;
  goto L14_;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym3 = ldf `is.logical`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base3 = ldf `is.logical` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L65_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r11 = dyn missing2(<sym invisible>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L15(c9, r11)
  // L15(c9, r11)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L15_;

L66_:;
  // r9 = dyn base2(<sym invisible>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L15(c9, r9)
  // L15(c9, r9)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L15_;

L68_:;
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L69() else D0()
  // L69()
  goto L69_;

D0_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r17 = `!`(r16)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args35);
  // c20 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c20 then L19(c20) else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L19(c20)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c20_;
    goto L19_;
  } else {
  // L75()
    goto L75_;
  }

L69_:;
  // r13 = dyn message("arguments 'show.output.on.console', 'minimized' and 'invisible' are for Windows only")
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L70() else D1()
  // L70()
  goto L70_;

L72_:;
  // intern1 = ld intern
  Rsh_Fir_reg_intern1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L74() else D2()
  // L74()
  goto L74_;

L73_:;
  // r15 = dyn base3(<sym intern>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L18(r15)
  // L18(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L18_;

D1_:;
  // deopt 17 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 21 [intern1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_intern1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // c29 = `as.logical`(c21)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c29 then L81() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L81()
    goto L81_;
  } else {
  // L21()
    goto L21_;
  }

L70_:;
  // goto L17()
  // L17()
  goto L17_;

L74_:;
  // intern2 = force? intern1
  Rsh_Fir_reg_intern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intern1_);
  // checkMissing(intern2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_intern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c19 = `is.logical`(intern2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_intern2_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args41);
  // goto L18(c19)
  // L18(c19)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_c19_;
  goto L18_;

L75_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard4 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L20_:;
  // c26 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // c27 = `||`(c25, c26)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args44);
  // goto L19(c27)
  // L19(c27)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c27_;
  goto L19_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym5 = ldf `is.logical`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf `is.logical` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard5 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L76_:;
  // intern3 = ld intern
  Rsh_Fir_reg_intern3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L78() else D3()
  // L78()
  goto L78_;

L77_:;
  // r18 = dyn base4(<sym intern>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L20(c20, r18)
  // L20(c20, r18)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L20_;

L81_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L82() else D5()
  // L82()
  goto L82_;

D3_:;
  // deopt 27 [c20, intern3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_intern3_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // r25 = `!`(r24)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args47);
  // c31 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // if c31 then L24(c31) else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L24(c31)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c31_;
    goto L24_;
  } else {
  // L88()
    goto L88_;
  }

L78_:;
  // intern4 = force? intern3
  Rsh_Fir_reg_intern4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intern3_);
  // checkMissing(intern4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_intern4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r20 = dyn is_na(intern4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_intern4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L79() else D4()
  // L79()
  goto L79_;

L82_:;
  // r21 = dyn stop("'intern' must be TRUE or FALSE")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L83() else D6()
  // L83()
  goto L83_;

L85_:;
  // ignore_stdout1 = ld `ignore.stdout`
  Rsh_Fir_reg_ignore_stdout1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L87() else D7()
  // L87()
  goto L87_;

L86_:;
  // r23 = dyn base5(<sym ignore.stdout>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L23(r23)
  // L23(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L23_;

D4_:;
  // deopt 30 [c20, r20]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 35 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 39 [ignore_stdout1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_ignore_stdout1_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // c40 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // if c40 then L94() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L94()
    goto L94_;
  } else {
  // L26()
    goto L26_;
  }

L79_:;
  // goto L20(c20, r20)
  // L20(c20, r20)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L20_;

L83_:;
  // goto L22()
  // L22()
  goto L22_;

L87_:;
  // ignore_stdout2 = force? ignore_stdout1
  Rsh_Fir_reg_ignore_stdout2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_stdout1_);
  // checkMissing(ignore_stdout2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_ignore_stdout2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c30 = `is.logical`(ignore_stdout2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ignore_stdout2_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args55);
  // goto L23(c30)
  // L23(c30)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_c30_;
  goto L23_;

L88_:;
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard6 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L25_:;
  // c37 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args57);
  // c38 = `||`(c36, c37)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args58);
  // goto L24(c38)
  // L24(c38)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c38_;
  goto L24_;

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // sym7 = ldf `is.logical`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base7 = ldf `is.logical` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard7 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L89_:;
  // ignore_stdout3 = ld `ignore.stdout`
  Rsh_Fir_reg_ignore_stdout3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L91() else D8()
  // L91()
  goto L91_;

L90_:;
  // r26 = dyn base6(<sym ignore.stdout>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L25(c31, r26)
  // L25(c31, r26)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L25_;

L94_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L95() else D10()
  // L95()
  goto L95_;

D8_:;
  // deopt 45 [c31, ignore_stdout3]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_ignore_stdout3_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // r33 = `!`(r32)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args61);
  // c42 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c42 then L29(c42) else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L29(c42)
    Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c42_;
    goto L29_;
  } else {
  // L101()
    goto L101_;
  }

L91_:;
  // ignore_stdout4 = force? ignore_stdout3
  Rsh_Fir_reg_ignore_stdout4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_stdout3_);
  // checkMissing(ignore_stdout4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_ignore_stdout4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r28 = dyn is_na1(ignore_stdout4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_ignore_stdout4_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L92() else D9()
  // L92()
  goto L92_;

L95_:;
  // r29 = dyn stop1("'ignore.stdout' must be TRUE or FALSE")
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L96() else D11()
  // L96()
  goto L96_;

L98_:;
  // ignore_stderr1 = ld `ignore.stderr`
  Rsh_Fir_reg_ignore_stderr1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L100() else D12()
  // L100()
  goto L100_;

L99_:;
  // r31 = dyn base7(<sym ignore.stderr>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L28(r31)
  // L28(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L28_;

D9_:;
  // deopt 48 [c31, r28]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 53 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 57 [ignore_stderr1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_ignore_stderr1_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L29_:;
  // c51 = `as.logical`(c43)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_c43_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // if c51 then L107() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L107()
    goto L107_;
  } else {
  // L31()
    goto L31_;
  }

L92_:;
  // goto L25(c31, r28)
  // L25(c31, r28)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L25_;

L96_:;
  // goto L27()
  // L27()
  goto L27_;

L100_:;
  // ignore_stderr2 = force? ignore_stderr1
  Rsh_Fir_reg_ignore_stderr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_stderr1_);
  // checkMissing(ignore_stderr2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_ignore_stderr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c41 = `is.logical`(ignore_stderr2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_ignore_stderr2_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args69);
  // goto L28(c41)
  // L28(c41)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_c41_;
  goto L28_;

L101_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard8 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L30_:;
  // c48 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args71);
  // c49 = `||`(c47, c48)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args72);
  // goto L29(c49)
  // L29(c49)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c49_;
  goto L29_;

L31_:;
  // goto L32()
  // L32()
  goto L32_;

L32_:;
  // sym9 = ldf `is.logical`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base9 = ldf `is.logical` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard9 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L102_:;
  // ignore_stderr3 = ld `ignore.stderr`
  Rsh_Fir_reg_ignore_stderr3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L104() else D13()
  // L104()
  goto L104_;

L103_:;
  // r34 = dyn base8(<sym ignore.stderr>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L30(c42, r34)
  // L30(c42, r34)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L30_;

L107_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L108() else D15()
  // L108()
  goto L108_;

D13_:;
  // deopt 63 [c42, ignore_stderr3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_ignore_stderr3_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r41 = `!`(r40)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args75);
  // c53 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c53 then L34(c53) else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L34(c53)
    Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c53_;
    goto L34_;
  } else {
  // L114()
    goto L114_;
  }

L104_:;
  // ignore_stderr4 = force? ignore_stderr3
  Rsh_Fir_reg_ignore_stderr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_stderr3_);
  // checkMissing(ignore_stderr4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_ignore_stderr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r36 = dyn is_na2(ignore_stderr4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ignore_stderr4_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L105() else D14()
  // L105()
  goto L105_;

L108_:;
  // r37 = dyn stop2("'ignore.stderr' must be TRUE or FALSE")
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L109() else D16()
  // L109()
  goto L109_;

L111_:;
  // wait3 = ld wait
  Rsh_Fir_reg_wait3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L113() else D17()
  // L113()
  goto L113_;

L112_:;
  // r39 = dyn base9(<sym wait>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L33(r39)
  // L33(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L33_;

D14_:;
  // deopt 66 [c42, r36]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 71 [r37]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 75 [wait3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_wait3_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L34_:;
  // c62 = `as.logical`(c54)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // if c62 then L120() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L120()
    goto L120_;
  } else {
  // L36()
    goto L36_;
  }

L105_:;
  // goto L30(c42, r36)
  // L30(c42, r36)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L30_;

L109_:;
  // goto L32()
  // L32()
  goto L32_;

L113_:;
  // wait4 = force? wait3
  Rsh_Fir_reg_wait4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wait3_);
  // checkMissing(wait4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_wait4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c52 = `is.logical`(wait4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_wait4_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args83);
  // goto L33(c52)
  // L33(c52)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_c52_;
  goto L33_;

L114_:;
  // sym10 = ldf `is.na`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base10 = ldf `is.na` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard10 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L35_:;
  // c59 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args85);
  // c60 = `||`(c58, c59)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args86);
  // goto L34(c60)
  // L34(c60)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c60_;
  goto L34_;

L36_:;
  // goto L37()
  // L37()
  goto L37_;

L37_:;
  // sym11 = ldf `is.logical`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base11 = ldf `is.logical` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard11 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L115_:;
  // wait5 = ld wait
  Rsh_Fir_reg_wait5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L117() else D18()
  // L117()
  goto L117_;

L116_:;
  // r42 = dyn base10(<sym wait>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L35(c53, r42)
  // L35(c53, r42)
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L35_;

L120_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L121() else D20()
  // L121()
  goto L121_;

D18_:;
  // deopt 81 [c53, wait5]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_wait5_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r49 = `!`(r48)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args89);
  // c64 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c64 then L39(c64) else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L39(c64)
    Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c64_;
    goto L39_;
  } else {
  // L127()
    goto L127_;
  }

L117_:;
  // wait6 = force? wait5
  Rsh_Fir_reg_wait6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wait5_);
  // checkMissing(wait6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_wait6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // is_na3 = ldf `is.na` in base
  Rsh_Fir_reg_is_na3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r44 = dyn is_na3(wait6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_wait6_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na3_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L118() else D19()
  // L118()
  goto L118_;

L121_:;
  // r45 = dyn stop3("'wait' must be TRUE or FALSE")
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L122() else D21()
  // L122()
  goto L122_;

L124_:;
  // receive_console_signals1 = ld `receive.console.signals`
  Rsh_Fir_reg_receive_console_signals1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L126() else D22()
  // L126()
  goto L126_;

L125_:;
  // r47 = dyn base11(<sym receive.console.signals>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L38(r47)
  // L38(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L38_;

D19_:;
  // deopt 84 [c53, r44]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 89 [r45]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 93 [receive_console_signals1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_receive_console_signals1_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L39_:;
  // c73 = `as.logical`(c65)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_c65_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args95);
  // if c73 then L133() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c73_)) {
  // L133()
    goto L133_;
  } else {
  // L41()
    goto L41_;
  }

L118_:;
  // goto L35(c53, r44)
  // L35(c53, r44)
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L35_;

L122_:;
  // goto L37()
  // L37()
  goto L37_;

L126_:;
  // receive_console_signals2 = force? receive_console_signals1
  Rsh_Fir_reg_receive_console_signals2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_receive_console_signals1_);
  // checkMissing(receive_console_signals2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_receive_console_signals2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c63 = `is.logical`(receive_console_signals2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_receive_console_signals2_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args97);
  // goto L38(c63)
  // L38(c63)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_c63_;
  goto L38_;

L127_:;
  // sym12 = ldf `is.na`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base12 = ldf `is.na` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard12 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L40_:;
  // c70 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args99);
  // c71 = `||`(c69, c70)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_c69_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_c70_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args100);
  // goto L39(c71)
  // L39(c71)
  Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c71_;
  goto L39_;

L41_:;
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // ignore_stdout5 = ld `ignore.stdout`
  Rsh_Fir_reg_ignore_stdout5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L137() else D27()
  // L137()
  goto L137_;

L128_:;
  // receive_console_signals3 = ld `receive.console.signals`
  Rsh_Fir_reg_receive_console_signals3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L130() else D23()
  // L130()
  goto L130_;

L129_:;
  // r50 = dyn base12(<sym receive.console.signals>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L40(c64, r50)
  // L40(c64, r50)
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L40_;

L133_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L134() else D25()
  // L134()
  goto L134_;

D23_:;
  // deopt 99 [c64, receive_console_signals3]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c64_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_receive_console_signals3_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 105 []
  Rsh_Fir_deopt(105, 0, NULL, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 110 [ignore_stdout5]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_ignore_stdout5_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L130_:;
  // receive_console_signals4 = force? receive_console_signals3
  Rsh_Fir_reg_receive_console_signals4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_receive_console_signals3_);
  // checkMissing(receive_console_signals4)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_receive_console_signals4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // is_na4 = ldf `is.na` in base
  Rsh_Fir_reg_is_na4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r52 = dyn is_na4(receive_console_signals4)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_receive_console_signals4_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na4_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L131() else D24()
  // L131()
  goto L131_;

L134_:;
  // r53 = dyn stop4("'receive.console.signals' must be TRUE or FALSE")
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L135() else D26()
  // L135()
  goto L135_;

L137_:;
  // ignore_stdout6 = force? ignore_stdout5
  Rsh_Fir_reg_ignore_stdout6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_stdout5_);
  // checkMissing(ignore_stdout6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_ignore_stdout6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c74 = `as.logical`(ignore_stdout6)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_ignore_stdout6_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args106);
  // if c74 then L138() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c74_)) {
  // L138()
    goto L138_;
  } else {
  // L43()
    goto L43_;
  }

D24_:;
  // deopt 102 [c64, r52]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c64_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 107 [r53]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L44()
  // L44()
  goto L44_;

L44_:;
  // ignore_stderr5 = ld `ignore.stderr`
  Rsh_Fir_reg_ignore_stderr5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L142() else D30()
  // L142()
  goto L142_;

L131_:;
  // goto L40(c64, r52)
  // L40(c64, r52)
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L40_;

L135_:;
  // goto L42()
  // L42()
  goto L42_;

L138_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L139() else D28()
  // L139()
  goto L139_;

D28_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 120 [ignore_stderr5]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ignore_stderr5_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L139_:;
  // p1 = prom<V +>{
  //   command1 = ld command;
  //   command2 = force? command1;
  //   checkMissing(command2);
  //   return command2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_1, 0, NULL, CCP, RHO);
  // r56 = dyn paste(p1, ">/dev/null")
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L140() else D29()
  // L140()
  goto L140_;

L142_:;
  // ignore_stderr6 = force? ignore_stderr5
  Rsh_Fir_reg_ignore_stderr6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_stderr5_);
  // checkMissing(ignore_stderr6)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_ignore_stderr6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c75 = `as.logical`(ignore_stderr6)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_ignore_stderr6_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args110);
  // if c75 then L143() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c75_)) {
  // L143()
    goto L143_;
  } else {
  // L45()
    goto L45_;
  }

D29_:;
  // deopt 116 [r56]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L46()
  // L46()
  goto L46_;

L46_:;
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard13 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L140_:;
  // st command = r56
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // goto L44()
  // L44()
  goto L44_;

L143_:;
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L144() else D31()
  // L144()
  goto L144_;

D31_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // r63 = `!`(r62)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args112);
  // c77 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c77_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args113);
  // if c77 then L150() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c77_)) {
  // L150()
    goto L150_;
  } else {
  // L48()
    goto L48_;
  }

L144_:;
  // p2 = prom<V +>{
  //   command3 = ld command;
  //   command4 = force? command3;
  //   checkMissing(command4);
  //   return command4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_2, 0, NULL, CCP, RHO);
  // r59 = dyn paste1(p2, "2>/dev/null")
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L145() else D32()
  // L145()
  goto L145_;

L147_:;
  // input1 = ld input
  Rsh_Fir_reg_input1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L149() else D33()
  // L149()
  goto L149_;

L148_:;
  // r61 = dyn base13(<sym input>)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L47(r61)
  // L47(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L47_;

D32_:;
  // deopt 126 [r59]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 131 [input1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_input1_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L53()
  // L53()
  goto L53_;

L53_:;
  // wait7 = ld wait
  Rsh_Fir_reg_wait7_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L167() else D43()
  // L167()
  goto L167_;

L145_:;
  // st command = r59
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // goto L46()
  // L46()
  goto L46_;

L149_:;
  // input2 = force? input1
  Rsh_Fir_reg_input2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_input1_);
  // checkMissing(input2)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_input2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // c76 = `==`(input2, NULL)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_input2_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args118);
  // goto L47(c76)
  // L47(c76)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_c76_;
  goto L47_;

L150_:;
  // sym14 = ldf `is.character`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base14 = ldf `is.character` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard14 then L151() else L152()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L151()
    goto L151_;
  } else {
  // L152()
    goto L152_;
  }

D43_:;
  // deopt 167 [wait7]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_wait7_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L49_:;
  // r66 = `!`(r65)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args120);
  // c79 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c79_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args121);
  // if c79 then L154() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c79_)) {
  // L154()
    goto L154_;
  } else {
  // L50()
    goto L50_;
  }

L151_:;
  // input3 = ld input
  Rsh_Fir_reg_input3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L153() else D34()
  // L153()
  goto L153_;

L152_:;
  // r64 = dyn base14(<sym input>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L49(r64)
  // L49(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L49_;

L167_:;
  // wait8 = force? wait7
  Rsh_Fir_reg_wait8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wait7_);
  // checkMissing(wait8)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_wait8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r82 = `!`(wait8)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_wait8_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args124);
  // c80 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c80_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args125);
  // if c80 then L168() else L54(c80)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c80_)) {
  // L168()
    goto L168_;
  } else {
  // L54(c80)
    Rsh_Fir_reg_c82_ = Rsh_Fir_reg_c80_;
    goto L54_;
  }

D34_:;
  // deopt 136 [input3]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_input3_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L51()
  // L51()
  goto L51_;

L51_:;
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L158() else D37()
  // L158()
  goto L158_;

L54_:;
  // c86 = `as.logical`(c82)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_c82_;
  Rsh_Fir_reg_c86_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args126);
  // if c86 then L171() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c86_)) {
  // L171()
    goto L171_;
  } else {
  // L55()
    goto L55_;
  }

L153_:;
  // input4 = force? input3
  Rsh_Fir_reg_input4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_input3_);
  // checkMissing(input4)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_input4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c78 = `is.character`(input4)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_input4_;
  Rsh_Fir_reg_c78_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args128);
  // goto L49(c78)
  // L49(c78)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_c78_;
  goto L49_;

L154_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L155() else D35()
  // L155()
  goto L155_;

L168_:;
  // intern5 = ld intern
  Rsh_Fir_reg_intern5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L169() else D44()
  // L169()
  goto L169_;

D35_:;
  // deopt 141 []
  Rsh_Fir_deopt(141, 0, NULL, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 147 []
  Rsh_Fir_deopt(147, 0, NULL, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 170 [c80, intern5]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c80_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_intern5_;
  Rsh_Fir_deopt(170, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L56()
  // L56()
  goto L56_;

L56_:;
  // sym16 = ldf `.Internal`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base16 = ldf `.Internal` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard16 then L175() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L175()
    goto L175_;
  } else {
  // L176()
    goto L176_;
  }

L155_:;
  // r67 = dyn stop5("'input' must be a character vector or 'NULL'")
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L156() else D36()
  // L156()
  goto L156_;

L158_:;
  // r69 = dyn tempfile()
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 0, NULL, NULL, CCP, RHO);
  // check L159() else D38()
  // L159()
  goto L159_;

L169_:;
  // intern6 = force? intern5
  Rsh_Fir_reg_intern6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intern5_);
  // checkMissing(intern6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_intern6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // r83 = `!`(intern6)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_intern6_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args132);
  // c83 = `as.logical`(r83)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_c83_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args133);
  // c84 = `&&`(c80, c83)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_c80_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_c83_;
  Rsh_Fir_reg_c84_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args134);
  // goto L54(c84)
  // L54(c84)
  Rsh_Fir_reg_c82_ = Rsh_Fir_reg_c84_;
  goto L54_;

L171_:;
  // paste3 = ldf paste
  Rsh_Fir_reg_paste3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L172() else D45()
  // L172()
  goto L172_;

D36_:;
  // deopt 143 [r67]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 148 [r69]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 175 []
  Rsh_Fir_deopt(175, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r88
  return Rsh_Fir_reg_r88_;

L156_:;
  // goto L51()
  // L51()
  goto L51_;

L159_:;
  // st f = r69
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // sym15 = ldf `on.exit`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base15 = ldf `on.exit` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args135);
  // if guard15 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L172_:;
  // p8 = prom<V +>{
  //   command7 = ld command;
  //   command8 = force? command7;
  //   checkMissing(command8);
  //   return command8;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_3, 0, NULL, CCP, RHO);
  // r85 = dyn paste3(p8, "&")
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste3_, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L173() else D46()
  // L173()
  goto L173_;

L175_:;
  // command9 = ld command
  Rsh_Fir_reg_command9_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L177() else D47()
  // L177()
  goto L177_;

L176_:;
  // r87 = dyn base16(<lang system(command, intern, timeout, receive.console.signals)>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L57(r87)
  // L57(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L57_;

D46_:;
  // deopt 178 [r85]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 184 [command9]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_command9_;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L52_:;
  // writeLines = ldf writeLines
  Rsh_Fir_reg_writeLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L162() else D39()
  // L162()
  goto L162_;

L160_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r72 = dyn on_exit(<lang unlink(f)>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L52()
  // L52()
  goto L52_;

L161_:;
  // r70 = dyn base15(<lang unlink(f)>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L52()
  // L52()
  goto L52_;

L173_:;
  // st command = r85
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r85_, RHO);
  (void)(Rsh_Fir_reg_r85_);
  // goto L56()
  // L56()
  goto L56_;

L177_:;
  // command10 = force? command9
  Rsh_Fir_reg_command10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_command9_);
  // checkMissing(command10)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_command10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // intern7 = ld intern
  Rsh_Fir_reg_intern7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L178() else D48()
  // L178()
  goto L178_;

D39_:;
  // deopt 154 []
  Rsh_Fir_deopt(154, 0, NULL, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 186 [intern7]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_intern7_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L162_:;
  // p3 = prom<V +>{
  //   input5 = ld input;
  //   input6 = force? input5;
  //   checkMissing(input6);
  //   return input6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_4, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_5, 0, NULL, CCP, RHO);
  // r75 = dyn writeLines(p3, p4)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L163() else D40()
  // L163()
  goto L163_;

L178_:;
  // intern8 = force? intern7
  Rsh_Fir_reg_intern8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intern7_);
  // checkMissing(intern8)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_intern8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // timeout1 = ld timeout
  Rsh_Fir_reg_timeout1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L179() else D49()
  // L179()
  goto L179_;

D40_:;
  // deopt 157 [r75]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 188 [timeout1]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_timeout1_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L163_:;
  // paste2 = ldf paste
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L164() else D41()
  // L164()
  goto L164_;

L179_:;
  // timeout2 = force? timeout1
  Rsh_Fir_reg_timeout2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_timeout1_);
  // checkMissing(timeout2)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_timeout2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // receive_console_signals5 = ld `receive.console.signals`
  Rsh_Fir_reg_receive_console_signals5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L180() else D50()
  // L180()
  goto L180_;

D41_:;
  // deopt 159 []
  Rsh_Fir_deopt(159, 0, NULL, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 190 [receive_console_signals5]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_receive_console_signals5_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L164_:;
  // p6 = prom<V +>{
  //   shQuote = ldf shQuote;
  //   p5 = prom<V +>{
  //     f2 = ld f;
  //     f3 = force? f2;
  //     checkMissing(f3);
  //     return f3;
  //   };
  //   r77 = dyn shQuote(p5);
  //   return r77;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   command5 = ld command;
  //   command6 = force? command5;
  //   checkMissing(command6);
  //   return command6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_8, 0, NULL, CCP, RHO);
  // r80 = dyn paste2("<", p6, p7)
  SEXP Rsh_Fir_array_args150[3];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args150[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 3, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L165() else D42()
  // L165()
  goto L165_;

L180_:;
  // receive_console_signals6 = force? receive_console_signals5
  Rsh_Fir_reg_receive_console_signals6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_receive_console_signals5_);
  // checkMissing(receive_console_signals6)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_receive_console_signals6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // system = ldf system in base
  Rsh_Fir_reg_system1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r89 = dyn system(command10, intern8, timeout2, receive_console_signals6)
  SEXP Rsh_Fir_array_args152[4];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_command10_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_intern8_;
  Rsh_Fir_array_args152[2] = Rsh_Fir_reg_timeout2_;
  Rsh_Fir_array_args152[3] = Rsh_Fir_reg_receive_console_signals6_;
  SEXP Rsh_Fir_array_arg_names43[4];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_array_arg_names43[3] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system1, 4, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L181() else D51()
  // L181()
  goto L181_;

D42_:;
  // deopt 163 [r80]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 193 [r89]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L165_:;
  // st command = r80
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // goto L53()
  // L53()
  goto L53_;

L181_:;
  // goto L57(r89)
  // L57(r89)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r89_;
  goto L57_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_wait1_;
  SEXP Rsh_Fir_reg_wait2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // wait1 = ld wait
  Rsh_Fir_reg_wait1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // wait2 = force? wait1
  Rsh_Fir_reg_wait2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wait1_);
  // checkMissing(wait2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_wait2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return wait2
  return Rsh_Fir_reg_wait2_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_command1_;
  SEXP Rsh_Fir_reg_command2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // command1 = ld command
  Rsh_Fir_reg_command1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // command2 = force? command1
  Rsh_Fir_reg_command2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_command1_);
  // checkMissing(command2)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_command2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return command2
  return Rsh_Fir_reg_command2_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_command3_;
  SEXP Rsh_Fir_reg_command4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // command3 = ld command
  Rsh_Fir_reg_command3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // command4 = force? command3
  Rsh_Fir_reg_command4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_command3_);
  // checkMissing(command4)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_command4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return command4
  return Rsh_Fir_reg_command4_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_command7_;
  SEXP Rsh_Fir_reg_command8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // command7 = ld command
  Rsh_Fir_reg_command7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // command8 = force? command7
  Rsh_Fir_reg_command8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_command7_);
  // checkMissing(command8)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_command8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // return command8
  return Rsh_Fir_reg_command8_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_input5_;
  SEXP Rsh_Fir_reg_input6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // input5 = ld input
  Rsh_Fir_reg_input5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // input6 = force? input5
  Rsh_Fir_reg_input6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_input5_);
  // checkMissing(input6)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_input6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // return input6
  return Rsh_Fir_reg_input6_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_shQuote;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r77_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // shQuote = ldf shQuote
  Rsh_Fir_reg_shQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // p5 = prom<V +>{
  //   f2 = ld f;
  //   f3 = force? f2;
  //   checkMissing(f3);
  //   return f3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1789924755_7, 0, NULL, CCP, RHO);
  // r77 = dyn shQuote(p5)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_shQuote, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names41, CCP, RHO);
  // return r77
  return Rsh_Fir_reg_r77_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_inner1789924755_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_command5_;
  SEXP Rsh_Fir_reg_command6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1789924755/0: expected 0, got %d", NCAPTURES);

  // command5 = ld command
  Rsh_Fir_reg_command5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // command6 = force? command5
  Rsh_Fir_reg_command6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_command5_);
  // checkMissing(command6)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_command6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return command6
  return Rsh_Fir_reg_command6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
