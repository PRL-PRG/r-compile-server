#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3093007434_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3093007434_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3093007434_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3093007434_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3093007434_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3093007434_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3093007434_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3093007434_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3093007434_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner3093007434
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3093007434_, RHO, CCP);
  // st `.refMethodDoc` = r
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
SEXP Rsh_Fir_user_function_inner3093007434_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3093007434 dynamic dispatch ([topic, env])

  return Rsh_Fir_user_version_inner3093007434_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3093007434_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3093007434 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3093007434/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_topic;  // topic
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_topic1_;  // topic1
  SEXP Rsh_Fir_reg_topic2_;  // topic2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg__makeCall;  // _makeCall
  SEXP Rsh_Fir_reg_topic3_;  // topic3
  SEXP Rsh_Fir_reg_topic4_;  // topic4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_body;  // body
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_bb;  // bb
  SEXP Rsh_Fir_reg_bb1_;  // bb1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_bb2_;  // bb2
  SEXP Rsh_Fir_reg_bb3_;  // bb3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_is1_;  // is1
  SEXP Rsh_Fir_reg_bb4_;  // bb4
  SEXP Rsh_Fir_reg_bb5_;  // bb5
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_bb7_;  // bb7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_msg;  // msg
  SEXP Rsh_Fir_reg_msg1_;  // msg1
  SEXP Rsh_Fir_reg_bb8_;  // bb8
  SEXP Rsh_Fir_reg_bb9_;  // bb9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_bb11_;  // bb11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_msg2_;  // msg2
  SEXP Rsh_Fir_reg_msg3_;  // msg3

  // Bind parameters
  Rsh_Fir_reg_topic = PARAMS[0];
  Rsh_Fir_reg_env = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st topic = topic
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_topic, RHO);
  (void)(Rsh_Fir_reg_topic);
  // st env = env
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_env, RHO);
  (void)(Rsh_Fir_reg_env);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L0_:;
  // st msg = r4
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // body = ldf body
  Rsh_Fir_reg_body = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

L1_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c10 then L25() else L3(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L25()
    goto L25_;
  } else {
  // L3(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L3_;
  }

L2_:;
  // r16 = `>`(r14, 1.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L1(c8)
  // L1(c8)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c8_;
  goto L1_;

L3_:;
  // c17 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c17 then L29() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L29()
    goto L29_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L7()
  // L7()
  goto L7_;

L5_:;
  // st msg = r21
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L7()
  // L7()
  goto L7_;

L6_:;
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r23 = dyn c19(msg1, dx3, "")
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

L7_:;
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   topic1 = ld topic;
  //   topic2 = force? topic1;
  //   checkMissing(topic2);
  //   return topic2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3093007434_, CCP, RHO);
  // p1 = prom<V +>{
  //   env1 = ld env;
  //   env2 = force? env1;
  //   checkMissing(env2);
  //   return env2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3093007434_1, CCP, RHO);
  // r2 = dyn get[, envir](p, p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st f = r2
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // _makeCall = ldf `.makeCall`
  Rsh_Fir_reg__makeCall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r3 = dyn base("Call:", <lang .makeCall(topic, f)>, "")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p2 = prom<V +>{
  //   topic3 = ld topic;
  //   topic4 = force? topic3;
  //   checkMissing(topic4);
  //   return topic4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3093007434_2, CCP, RHO);
  // p3 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3093007434_3, CCP, RHO);
  // r7 = dyn _makeCall(p2, p3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__makeCall, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r8 = dyn c("Call:", r7, "")
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r8_;
  goto L0_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p4 = prom<V +>{
  //   f2 = ld f;
  //   f3 = force? f2;
  //   checkMissing(f3);
  //   return f3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3093007434_4, CCP, RHO);
  // r10 = dyn body(p4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_body, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

D6_:;
  // deopt 22 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // st bb = r10
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p5 = prom<V +>{
  //   bb = ld bb;
  //   bb1 = force? bb;
  //   checkMissing(bb1);
  //   return bb1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3093007434_5, CCP, RHO);
  // r12 = dyn is(p5, "{")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

D8_:;
  // deopt 28 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // c1 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L1(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L1(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L1_;
  }

L19_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // bb2 = ld bb
  Rsh_Fir_reg_bb2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

L21_:;
  // r13 = dyn base1(<sym bb>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(c1, r13)
  // L2(c1, r13)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L2_;

D9_:;
  // deopt 31 [c1, bb2]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_bb2_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // bb3 = force? bb2
  Rsh_Fir_reg_bb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bb2_);
  // checkMissing(bb3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_bb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r15 = dyn length(bb3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_bb3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 34 [c1, r15]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L2(c1, r15)
  // L2(c1, r15)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L2_;

L25_:;
  // is1 = ldf is
  Rsh_Fir_reg_is1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 39 [c10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // p6 = prom<V +>{
  //   bb4 = ld bb;
  //   bb5 = force? bb4;
  //   checkMissing(bb5);
  //   c13 = `is.object`(bb5);
  //   if c13 then L1() else L2(bb5);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", bb5);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(bb7):
  //   __ = ldf `[[` in base;
  //   r17 = dyn __(bb7, 2.0);
  //   goto L0(r17);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3093007434_6, CCP, RHO);
  // r19 = dyn is1(p6, "character")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

D12_:;
  // deopt 42 [c10, r19]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // c14 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c15 = `&&`(c10, c14)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L3(c15)
  // L3(c15)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c15_;
  goto L3_;

L29_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

L31_:;
  // r20 = dyn base2(<sym msg>, <lang `[[`(bb, 2.0)>, "")
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L5_;

D13_:;
  // deopt 46 [msg]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // bb8 = ld bb
  Rsh_Fir_reg_bb8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L33() else D14()
  // L33()
  goto L33_;

D14_:;
  // deopt 48 [bb8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_bb8_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // bb9 = force? bb8
  Rsh_Fir_reg_bb9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bb8_);
  // checkMissing(bb9)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_bb9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(bb9)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_bb9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c18 then L34() else L35(bb9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L34()
    goto L34_;
  } else {
  // L35(bb9)
    Rsh_Fir_reg_bb11_ = Rsh_Fir_reg_bb9_;
    goto L35_;
  }

L34_:;
  // dr2 = tryDispatchBuiltin.1("[[", bb9)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_bb9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc1 then L36() else L35(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr2)
    Rsh_Fir_reg_bb11_ = Rsh_Fir_reg_dr2_;
    goto L35_;
  }

L35_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r22 = dyn __1(bb11, 2.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_bb11_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L6_;

L36_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L6(dx2)
  // L6(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

D15_:;
  // deopt 55 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L5(r23)
  // L5(r23)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r23_;
  goto L5_;

D16_:;
  // deopt 59 [msg2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L39_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg3
  return Rsh_Fir_reg_msg3_;
}
SEXP Rsh_Fir_user_promise_inner3093007434_(SEXP CCP, SEXP RHO) {
  // topic1 = ld topic
  Rsh_Fir_reg_topic1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // topic2 = force? topic1
  Rsh_Fir_reg_topic2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_topic1_);
  // checkMissing(topic2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_topic2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return topic2
  return Rsh_Fir_reg_topic2_;
}
SEXP Rsh_Fir_user_promise_inner3093007434_1(SEXP CCP, SEXP RHO) {
  // env1 = ld env
  Rsh_Fir_reg_env1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // env2 = force? env1
  Rsh_Fir_reg_env2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1_);
  // checkMissing(env2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_env2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return env2
  return Rsh_Fir_reg_env2_;
}
SEXP Rsh_Fir_user_promise_inner3093007434_2(SEXP CCP, SEXP RHO) {
  // topic3 = ld topic
  Rsh_Fir_reg_topic3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // topic4 = force? topic3
  Rsh_Fir_reg_topic4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_topic3_);
  // checkMissing(topic4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_topic4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return topic4
  return Rsh_Fir_reg_topic4_;
}
SEXP Rsh_Fir_user_promise_inner3093007434_3(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner3093007434_4(SEXP CCP, SEXP RHO) {
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_inner3093007434_5(SEXP CCP, SEXP RHO) {
  // bb = ld bb
  Rsh_Fir_reg_bb = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // bb1 = force? bb
  Rsh_Fir_reg_bb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bb);
  // checkMissing(bb1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_bb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return bb1
  return Rsh_Fir_reg_bb1_;
}
SEXP Rsh_Fir_user_promise_inner3093007434_6(SEXP CCP, SEXP RHO) {
  // bb4 = ld bb
  Rsh_Fir_reg_bb4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // bb5 = force? bb4
  Rsh_Fir_reg_bb5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bb4_);
  // checkMissing(bb5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_bb5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(bb5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_bb5_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c13 then L1() else L2(bb5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2(bb5)
    Rsh_Fir_reg_bb7_ = Rsh_Fir_reg_bb5_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", bb5)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_bb5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_bb7_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r17 = dyn __(bb7, 2.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_bb7_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
