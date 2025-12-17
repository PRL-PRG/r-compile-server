#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3971500816_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3971500816_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3971500816_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3971500816_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner3971500816
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3971500816_, RHO, CCP);
  // st `.Script` = r
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
SEXP Rsh_Fir_user_function_inner3971500816_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3971500816 dynamic dispatch ([interpreter, script, args, `...`])

  return Rsh_Fir_user_version_inner3971500816_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3971500816_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3971500816 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3971500816/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_interpreter;
  SEXP Rsh_Fir_reg_script;
  SEXP Rsh_Fir_reg_args;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg__Platform;
  SEXP Rsh_Fir_reg__Platform1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg__Platform3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_system;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_system1_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r34_;

  // Bind parameters
  Rsh_Fir_reg_interpreter = PARAMS[0];
  Rsh_Fir_reg_script = PARAMS[1];
  Rsh_Fir_reg_args = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st interpreter = interpreter
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_interpreter, RHO);
  (void)(Rsh_Fir_reg_interpreter);
  // st script = script
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_script, RHO);
  (void)(Rsh_Fir_reg_script);
  // st args = args
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_args, RHO);
  (void)(Rsh_Fir_reg_args);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // system1 = ldf system
  Rsh_Fir_reg_system1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D0_:;
  // deopt 0 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L3() else L4(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L4(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L4_;
  }

L2_:;
  // r1 = `==`(dx1, "windows")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args2);
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c1 then L6() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L6()
    goto L6_;
  } else {
  // L0()
    goto L0_;
  }

L3_:;
  // dr = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr;
    goto L4_;
  }

L4_:;
  // r = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args6);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L2_;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L6_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   shQuote = ldf shQuote;
  //   p1 = prom<V +>{
  //     file_path = ldf `file.path`;
  //     p = prom<V +>{
  //       R_home = ldf `R.home`;
  //       r2 = dyn R_home("bin");
  //       return r2;
  //     };
  //     r4 = dyn file_path(p, "Rcmd");
  //     return r4;
  //   };
  //   r6 = dyn shQuote(p1);
  //   return r6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   file_path1 = ldf `file.path`;
  //   p3 = prom<V +>{
  //     interpreter1 = ld interpreter;
  //     interpreter2 = force? interpreter1;
  //     checkMissing(interpreter2);
  //     return interpreter2;
  //   };
  //   p4 = prom<V +>{
  //     script1 = ld script;
  //     script2 = force? script1;
  //     checkMissing(script2);
  //     return script2;
  //   };
  //   r10 = dyn file_path1("..", "share", p3, p4);
  //   return r10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_3, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   args1 = ld args;
  //   args2 = force? args1;
  //   checkMissing(args2);
  //   return args2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_6, 0, NULL, CCP, RHO);
  // r13 = dyn paste(p2, p5, p6)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 10 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // st cmd = r13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // system = ldf system
  Rsh_Fir_reg_system = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p7 = prom<V +>{
  //   cmd = ld cmd;
  //   cmd1 = force? cmd;
  //   checkMissing(cmd1);
  //   return cmd1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_7, 0, NULL, CCP, RHO);
  // r15 = dyn system[, invisible](p7, TRUE)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 17 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p18 = prom<V +>{
  //   paste1 = ldf paste;
  //   p10 = prom<V +>{
  //     shQuote1 = ldf shQuote;
  //     p9 = prom<V +>{
  //       file_path2 = ldf `file.path`;
  //       p8 = prom<V +>{
  //         R_home1 = ldf `R.home`;
  //         r16 = dyn R_home1("bin");
  //         return r16;
  //       };
  //       r18 = dyn file_path2(p8, "Rcmd");
  //       return r18;
  //     };
  //     r20 = dyn shQuote1(p9);
  //     return r20;
  //   };
  //   p11 = prom<V +>{
  //     interpreter3 = ld interpreter;
  //     interpreter4 = force? interpreter3;
  //     checkMissing(interpreter4);
  //     return interpreter4;
  //   };
  //   p16 = prom<V +>{
  //     shQuote2 = ldf shQuote;
  //     p15 = prom<V +>{
  //       file_path3 = ldf `file.path`;
  //       p12 = prom<V +>{
  //         R_home2 = ldf `R.home`;
  //         r23 = dyn R_home2("share");
  //         return r23;
  //       };
  //       p13 = prom<V +>{
  //         interpreter5 = ld interpreter;
  //         interpreter6 = force? interpreter5;
  //         checkMissing(interpreter6);
  //         return interpreter6;
  //       };
  //       p14 = prom<V +>{
  //         script3 = ld script;
  //         script4 = force? script3;
  //         checkMissing(script4);
  //         return script4;
  //       };
  //       r27 = dyn file_path3(p12, p13, p14);
  //       return r27;
  //     };
  //     r29 = dyn shQuote2(p15);
  //     return r29;
  //   };
  //   p17 = prom<V +>{
  //     args3 = ld args;
  //     args4 = force? args3;
  //     checkMissing(args4);
  //     return args4;
  //   };
  //   r32 = dyn paste1(p10, p11, p16, p17);
  //   return r32;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_8, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r34 = dyn system1[, `...`](p18, ddd1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

D6_:;
  // deopt 22 [r34]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_shQuote;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // shQuote = ldf shQuote
  Rsh_Fir_reg_shQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p1 = prom<V +>{
  //   file_path = ldf `file.path`;
  //   p = prom<V +>{
  //     R_home = ldf `R.home`;
  //     r2 = dyn R_home("bin");
  //     return r2;
  //   };
  //   r4 = dyn file_path(p, "Rcmd");
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_1, 0, NULL, CCP, RHO);
  // r6 = dyn shQuote(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_shQuote, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p = prom<V +>{
  //   R_home = ldf `R.home`;
  //   r2 = dyn R_home("bin");
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_2, 0, NULL, CCP, RHO);
  // r4 = dyn file_path(p, "Rcmd")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_home;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // R_home = ldf `R.home`
  Rsh_Fir_reg_R_home = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r2 = dyn R_home("bin")
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // file_path1 = ldf `file.path`
  Rsh_Fir_reg_file_path1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p3 = prom<V +>{
  //   interpreter1 = ld interpreter;
  //   interpreter2 = force? interpreter1;
  //   checkMissing(interpreter2);
  //   return interpreter2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_4, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   script1 = ld script;
  //   script2 = force? script1;
  //   checkMissing(script2);
  //   return script2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_5, 0, NULL, CCP, RHO);
  // r10 = dyn file_path1("..", "share", p3, p4)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path1_, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_interpreter1_;
  SEXP Rsh_Fir_reg_interpreter2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // interpreter1 = ld interpreter
  Rsh_Fir_reg_interpreter1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // interpreter2 = force? interpreter1
  Rsh_Fir_reg_interpreter2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interpreter1_);
  // checkMissing(interpreter2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_interpreter2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return interpreter2
  return Rsh_Fir_reg_interpreter2_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_script1_;
  SEXP Rsh_Fir_reg_script2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // script1 = ld script
  Rsh_Fir_reg_script1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // script2 = force? script1
  Rsh_Fir_reg_script2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_script1_);
  // checkMissing(script2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_script2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return script2
  return Rsh_Fir_reg_script2_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_reg_args2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // args1 = ld args
  Rsh_Fir_reg_args1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // args2 = force? args1
  Rsh_Fir_reg_args2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args1_);
  // checkMissing(args2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_args2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return args2
  return Rsh_Fir_reg_args2_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cmd;
  SEXP Rsh_Fir_reg_cmd1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // cmd = ld cmd
  Rsh_Fir_reg_cmd = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // cmd1 = force? cmd
  Rsh_Fir_reg_cmd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cmd);
  // checkMissing(cmd1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_cmd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return cmd1
  return Rsh_Fir_reg_cmd1_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // p10 = prom<V +>{
  //   shQuote1 = ldf shQuote;
  //   p9 = prom<V +>{
  //     file_path2 = ldf `file.path`;
  //     p8 = prom<V +>{
  //       R_home1 = ldf `R.home`;
  //       r16 = dyn R_home1("bin");
  //       return r16;
  //     };
  //     r18 = dyn file_path2(p8, "Rcmd");
  //     return r18;
  //   };
  //   r20 = dyn shQuote1(p9);
  //   return r20;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_9, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   interpreter3 = ld interpreter;
  //   interpreter4 = force? interpreter3;
  //   checkMissing(interpreter4);
  //   return interpreter4;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_12, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   shQuote2 = ldf shQuote;
  //   p15 = prom<V +>{
  //     file_path3 = ldf `file.path`;
  //     p12 = prom<V +>{
  //       R_home2 = ldf `R.home`;
  //       r23 = dyn R_home2("share");
  //       return r23;
  //     };
  //     p13 = prom<V +>{
  //       interpreter5 = ld interpreter;
  //       interpreter6 = force? interpreter5;
  //       checkMissing(interpreter6);
  //       return interpreter6;
  //     };
  //     p14 = prom<V +>{
  //       script3 = ld script;
  //       script4 = force? script3;
  //       checkMissing(script4);
  //       return script4;
  //     };
  //     r27 = dyn file_path3(p12, p13, p14);
  //     return r27;
  //   };
  //   r29 = dyn shQuote2(p15);
  //   return r29;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_13, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   args3 = ld args;
  //   args4 = force? args3;
  //   checkMissing(args4);
  //   return args4;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_18, 0, NULL, CCP, RHO);
  // r32 = dyn paste1(p10, p11, p16, p17)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args28[3] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_shQuote1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // shQuote1 = ldf shQuote
  Rsh_Fir_reg_shQuote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p9 = prom<V +>{
  //   file_path2 = ldf `file.path`;
  //   p8 = prom<V +>{
  //     R_home1 = ldf `R.home`;
  //     r16 = dyn R_home1("bin");
  //     return r16;
  //   };
  //   r18 = dyn file_path2(p8, "Rcmd");
  //   return r18;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_10, 0, NULL, CCP, RHO);
  // r20 = dyn shQuote1(p9)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_shQuote1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // file_path2 = ldf `file.path`
  Rsh_Fir_reg_file_path2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p8 = prom<V +>{
  //   R_home1 = ldf `R.home`;
  //   r16 = dyn R_home1("bin");
  //   return r16;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_11, 0, NULL, CCP, RHO);
  // r18 = dyn file_path2(p8, "Rcmd")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_home1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // R_home1 = ldf `R.home`
  Rsh_Fir_reg_R_home1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r16 = dyn R_home1("bin")
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_interpreter3_;
  SEXP Rsh_Fir_reg_interpreter4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // interpreter3 = ld interpreter
  Rsh_Fir_reg_interpreter3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // interpreter4 = force? interpreter3
  Rsh_Fir_reg_interpreter4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interpreter3_);
  // checkMissing(interpreter4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_interpreter4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return interpreter4
  return Rsh_Fir_reg_interpreter4_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_shQuote2_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // shQuote2 = ldf shQuote
  Rsh_Fir_reg_shQuote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // p15 = prom<V +>{
  //   file_path3 = ldf `file.path`;
  //   p12 = prom<V +>{
  //     R_home2 = ldf `R.home`;
  //     r23 = dyn R_home2("share");
  //     return r23;
  //   };
  //   p13 = prom<V +>{
  //     interpreter5 = ld interpreter;
  //     interpreter6 = force? interpreter5;
  //     checkMissing(interpreter6);
  //     return interpreter6;
  //   };
  //   p14 = prom<V +>{
  //     script3 = ld script;
  //     script4 = force? script3;
  //     checkMissing(script4);
  //     return script4;
  //   };
  //   r27 = dyn file_path3(p12, p13, p14);
  //   return r27;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_14, 0, NULL, CCP, RHO);
  // r29 = dyn shQuote2(p15)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_shQuote2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path3_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // file_path3 = ldf `file.path`
  Rsh_Fir_reg_file_path3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p12 = prom<V +>{
  //   R_home2 = ldf `R.home`;
  //   r23 = dyn R_home2("share");
  //   return r23;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_15, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   interpreter5 = ld interpreter;
  //   interpreter6 = force? interpreter5;
  //   checkMissing(interpreter6);
  //   return interpreter6;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_16, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   script3 = ld script;
  //   script4 = force? script3;
  //   checkMissing(script4);
  //   return script4;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3971500816_17, 0, NULL, CCP, RHO);
  // r27 = dyn file_path3(p12, p13, p14)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path3_, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_home2_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // R_home2 = ldf `R.home`
  Rsh_Fir_reg_R_home2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r23 = dyn R_home2("share")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_interpreter5_;
  SEXP Rsh_Fir_reg_interpreter6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // interpreter5 = ld interpreter
  Rsh_Fir_reg_interpreter5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // interpreter6 = force? interpreter5
  Rsh_Fir_reg_interpreter6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interpreter5_);
  // checkMissing(interpreter6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_interpreter6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return interpreter6
  return Rsh_Fir_reg_interpreter6_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_script3_;
  SEXP Rsh_Fir_reg_script4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // script3 = ld script
  Rsh_Fir_reg_script3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // script4 = force? script3
  Rsh_Fir_reg_script4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_script3_);
  // checkMissing(script4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_script4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return script4
  return Rsh_Fir_reg_script4_;
}
SEXP Rsh_Fir_user_promise_inner3971500816_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_args3_;
  SEXP Rsh_Fir_reg_args4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3971500816/0: expected 0, got %d", NCAPTURES);

  // args3 = ld args
  Rsh_Fir_reg_args3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // args4 = force? args3
  Rsh_Fir_reg_args4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args3_);
  // checkMissing(args4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_args4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return args4
  return Rsh_Fir_reg_args4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
