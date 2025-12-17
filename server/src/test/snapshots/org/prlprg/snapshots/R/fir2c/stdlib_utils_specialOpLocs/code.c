#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3773442701_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3773442701_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3773442701_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3773442701_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3773442701_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3773442701_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3773442701
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3773442701_, RHO, CCP);
  // st specialOpLocs = r
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
SEXP Rsh_Fir_user_function_inner3773442701_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3773442701 dynamic dispatch ([text])

  return Rsh_Fir_user_version_inner3773442701_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3773442701_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3773442701 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3773442701/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_specialOps;  // specialOps
  SEXP Rsh_Fir_reg_specialOps1_;  // specialOps1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sapply1_;  // sapply1
  SEXP Rsh_Fir_reg_ge;  // ge
  SEXP Rsh_Fir_reg_ge1_;  // ge1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_tail_default;  // tail_default
  SEXP Rsh_Fir_reg_tail_default1_;  // tail_default1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_ge2_;  // ge2
  SEXP Rsh_Fir_reg_ge3_;  // ge3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_ge5_;  // ge5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ge6_;  // ge6
  SEXP Rsh_Fir_reg_ge7_;  // ge7
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_text = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st text = text
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_text, RHO);
  (void)(Rsh_Fir_reg_text);
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // st ge = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   specialOps = ld specialOps;
  //   specialOps1 = force? specialOps;
  //   checkMissing(specialOps1);
  //   return specialOps1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_, CCP, RHO);
  // p1 = prom<V +>{
  //   r1 = clos inner1236783023;
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_1, CCP, RHO);
  // r3 = dyn sapply[, , simplify](p, p1, FALSE)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st ge = r3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sapply1 = ldf sapply
  Rsh_Fir_reg_sapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p2 = prom<V +>{
  //   ge = ld ge;
  //   ge1 = force? ge;
  //   checkMissing(ge1);
  //   return ge1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_2, CCP, RHO);
  // p3 = prom<V +>{
  //   tail_default = ld `tail.default`;
  //   tail_default1 = force? tail_default;
  //   checkMissing(tail_default1);
  //   return tail_default1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_3, CCP, RHO);
  // r6 = dyn sapply1(p2, p3, 1.0)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply1_, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // st ge = r6
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // ge2 = ld ge
  Rsh_Fir_reg_ge2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 15 [ge2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_ge2_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // ge3 = force? ge2
  Rsh_Fir_reg_ge3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ge2_);
  // checkMissing(ge3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ge3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `is.object`(ge3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ge3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L6() else L7(ge3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L7(ge3)
    Rsh_Fir_reg_ge5_ = Rsh_Fir_reg_ge3_;
    goto L7_;
  }

L6_:;
  // dr = tryDispatchBuiltin.1("[", ge3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_ge3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr)
    Rsh_Fir_reg_ge5_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // ge6 = ld ge
  Rsh_Fir_reg_ge6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D5_:;
  // deopt 17 [ge5, ge6]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_ge5_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_ge6_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // ge7 = force? ge6
  Rsh_Fir_reg_ge7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ge6_);
  // checkMissing(ge7)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ge7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r7 = `>`(ge7, 0.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ge7_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r8 = dyn __(ge5, r7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ge5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_(SEXP CCP, SEXP RHO) {
  // specialOps = ld specialOps
  Rsh_Fir_reg_specialOps = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // specialOps1 = force? specialOps
  Rsh_Fir_reg_specialOps1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_specialOps);
  // checkMissing(specialOps1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_specialOps1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return specialOps1
  return Rsh_Fir_reg_specialOps1_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_1(SEXP CCP, SEXP RHO) {
  // r1 = clos inner1236783023
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1236783023_, RHO, CCP);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_2(SEXP CCP, SEXP RHO) {
  // ge = ld ge
  Rsh_Fir_reg_ge = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // ge1 = force? ge
  Rsh_Fir_reg_ge1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ge);
  // checkMissing(ge1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_ge1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return ge1
  return Rsh_Fir_reg_ge1_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_3(SEXP CCP, SEXP RHO) {
  // tail_default = ld `tail.default`
  Rsh_Fir_reg_tail_default = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // tail_default1 = force? tail_default
  Rsh_Fir_reg_tail_default1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tail_default);
  // checkMissing(tail_default1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_tail_default1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return tail_default1
  return Rsh_Fir_reg_tail_default1_;
}
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1236783023 dynamic dispatch ([s])

  return Rsh_Fir_user_version_inner1236783023_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1236783023 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1236783023/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_gregexpr;  // gregexpr
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_text1;  // text
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5

  // Bind parameters
  Rsh_Fir_reg_s = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // gregexpr = ldf gregexpr
  Rsh_Fir_reg_gregexpr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_1;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   s1 = ld s;
  //   s2 = force? s1;
  //   checkMissing(s2);
  //   return s2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_, CCP, RHO);
  // p1 = prom<V +>{
  //   text = ld text;
  //   text1 = force? text;
  //   checkMissing(text1);
  //   return text1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_1, CCP, RHO);
  // r2 = dyn gregexpr[, , fixed](p, p1, TRUE)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gregexpr, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L2_:;
  // c = `is.object`(r2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c then L3() else L4(r2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L3()
    goto L3_;
  } else {
  // L4(r2)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r2_;
    goto L4_;
  }

L3_:;
  // dr = tryDispatchBuiltin.1("[[", r2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_dr1;
    goto L4_;
  }

L4_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r5 = dyn __(r4, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r5_;
  goto L0_;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO) {
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return s2
  return Rsh_Fir_reg_s2_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO) {
  // text = ld text
  Rsh_Fir_reg_text1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // text1 = force? text
  Rsh_Fir_reg_text1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1);
  // checkMissing(text1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_text1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return text1
  return Rsh_Fir_reg_text1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
