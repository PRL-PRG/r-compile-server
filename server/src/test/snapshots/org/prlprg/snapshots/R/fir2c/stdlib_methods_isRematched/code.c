#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3939969715_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3939969715_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3939969715_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3939969715_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3939969715_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3939969715
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3939969715_, RHO, CCP);
  // st isRematched = r
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
SEXP Rsh_Fir_user_function_inner3939969715_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3939969715 dynamic dispatch ([definition])

  return Rsh_Fir_user_version_inner3939969715_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3939969715_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3939969715 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3939969715/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_definition;  // definition
  SEXP Rsh_Fir_reg_body;  // body
  SEXP Rsh_Fir_reg_definition1_;  // definition1
  SEXP Rsh_Fir_reg_definition2_;  // definition2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg__identC;  // _identC
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_bdy;  // bdy
  SEXP Rsh_Fir_reg_bdy1_;  // bdy1
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_bdy2_;  // bdy2
  SEXP Rsh_Fir_reg_bdy3_;  // bdy3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_bdy4_;  // bdy4
  SEXP Rsh_Fir_reg_bdy5_;  // bdy5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_bdy7_;  // bdy7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg__identC1_;  // _identC1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_bdy8_;  // bdy8
  SEXP Rsh_Fir_reg_bdy9_;  // bdy9
  SEXP Rsh_Fir_reg_class1_;  // class1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_bdy10_;  // bdy10
  SEXP Rsh_Fir_reg_bdy11_;  // bdy11
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_bdy13_;  // bdy13
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_as_name;  // as_name
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c23_;  // c23

  // Bind parameters
  Rsh_Fir_reg_definition = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st definition = definition
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_definition, RHO);
  (void)(Rsh_Fir_reg_definition);
  // body = ldf body
  Rsh_Fir_reg_body = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L0_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c9 then L17() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L17()
    goto L17_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // r10 = `>`(r8, 1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L0(c7)
  // L0(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L0_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 4);

L3_:;
  // st bdy = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // _identC1 = ldf `.identC`
  Rsh_Fir_reg__identC1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c13
  return Rsh_Fir_reg_c13_;

L5_:;
  // c22 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c23 = `&&`(c16, c22)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L4(c23)
  // L4(c23)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c23_;
  goto L4_;

L6_:;
  // as_name = ldf `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   definition1 = ld definition;
  //   definition2 = force? definition1;
  //   checkMissing(definition2);
  //   return definition2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3939969715_, CCP, RHO);
  // r1 = dyn body(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_body, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st bdy = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // _identC = ldf `.identC`
  Rsh_Fir_reg__identC = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   sym = ldf class;
  //   base = ldf class in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   bdy = ld bdy;
  //   bdy1 = force? bdy;
  //   checkMissing(bdy1);
  //   class = ldf class in base;
  //   r4 = dyn class(bdy1);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base(<sym bdy>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3939969715_1, CCP, RHO);
  // r6 = dyn _identC(p1, "{")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__identC, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 9 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L11() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L0(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L0_;
  }

L11_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // bdy2 = ld bdy
  Rsh_Fir_reg_bdy2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L13_:;
  // r7 = dyn base1(<sym bdy>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(c, r7)
  // L1(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

D4_:;
  // deopt 12 [c, bdy2]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_bdy2_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // bdy3 = force? bdy2
  Rsh_Fir_reg_bdy3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bdy2_);
  // checkMissing(bdy3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_bdy3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r9 = dyn length(bdy3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_bdy3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 15 [c, r9]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L1(c, r9)
  // L1(c, r9)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L17_:;
  // bdy4 = ld bdy
  Rsh_Fir_reg_bdy4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 19 [bdy4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_bdy4_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // bdy5 = force? bdy4
  Rsh_Fir_reg_bdy5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bdy4_);
  // checkMissing(bdy5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_bdy5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(bdy5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_bdy5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c10 then L19() else L20(bdy5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L19()
    goto L19_;
  } else {
  // L20(bdy5)
    Rsh_Fir_reg_bdy7_ = Rsh_Fir_reg_bdy5_;
    goto L20_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("[[", bdy5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_bdy5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_bdy7_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r11 = dyn __(bdy7, 2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_bdy7_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L3_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p2 = prom<V +>{
  //   sym2 = ldf class;
  //   base2 = ldf class in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   bdy8 = ld bdy;
  //   bdy9 = force? bdy8;
  //   checkMissing(bdy9);
  //   class1 = ldf class in base;
  //   r14 = dyn class1(bdy9);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base2(<sym bdy>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3939969715_2, CCP, RHO);
  // r16 = dyn _identC1(p2, "<-")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__identC1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 29 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L23_:;
  // c11 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c11 then L24() else L4(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L24()
    goto L24_;
  } else {
  // L4(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L4_;
  }

L24_:;
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // bdy10 = ld bdy
  Rsh_Fir_reg_bdy10_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

L26_:;
  // r17 = dyn base3(<lang `[[`(bdy, 2)>, <lang as.name(".local")>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(c11, r17)
  // L5(c11, r17)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L5_;

D9_:;
  // deopt 32 [c11, bdy10]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_bdy10_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // bdy11 = force? bdy10
  Rsh_Fir_reg_bdy11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bdy10_);
  // checkMissing(bdy11)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_bdy11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(bdy11)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_bdy11_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c17 then L28() else L29(c11, bdy11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L28()
    goto L28_;
  } else {
  // L29(c11, bdy11)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_bdy13_ = Rsh_Fir_reg_bdy11_;
    goto L29_;
  }

L28_:;
  // dr2 = tryDispatchBuiltin.1("[[", bdy11)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_bdy11_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L30() else L29(c11, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L30()
    goto L30_;
  } else {
  // L29(c11, dr2)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_bdy13_ = Rsh_Fir_reg_dr2_;
    goto L29_;
  }

L29_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r19 = dyn __1(bdy13, 2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_bdy13_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(c19, r19)
  // L6(c19, r19)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r19_;
  goto L6_;

L30_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L6(c11, dx2)
  // L6(c11, dx2)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

D10_:;
  // deopt 38 [c21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // r20 = dyn as_name(".local")
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D11_:;
  // deopt 40 [c21, r20]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r21 = dyn identical(dx3, r20, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args39[9];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args39[5] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args39[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args39[7] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args39[8] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L33() else D12()
  // L33()
  goto L33_;

D12_:;
  // deopt 49 [c21, r21]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5(c21, r21)
  // L5(c21, r21)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r21_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner3939969715_(SEXP CCP, SEXP RHO) {
  // definition1 = ld definition
  Rsh_Fir_reg_definition1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // definition2 = force? definition1
  Rsh_Fir_reg_definition2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_definition1_);
  // checkMissing(definition2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_definition2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return definition2
  return Rsh_Fir_reg_definition2_;
}
SEXP Rsh_Fir_user_promise_inner3939969715_1(SEXP CCP, SEXP RHO) {
  // sym = ldf class
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf class in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // bdy = ld bdy
  Rsh_Fir_reg_bdy = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // bdy1 = force? bdy
  Rsh_Fir_reg_bdy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bdy);
  // checkMissing(bdy1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_bdy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r4 = dyn class(bdy1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_bdy1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base(<sym bdy>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3939969715_2(SEXP CCP, SEXP RHO) {
  // sym2 = ldf class
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf class in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // bdy8 = ld bdy
  Rsh_Fir_reg_bdy8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // bdy9 = force? bdy8
  Rsh_Fir_reg_bdy9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bdy8_);
  // checkMissing(bdy9)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_bdy9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // class1 = ldf class in base
  Rsh_Fir_reg_class1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r14 = dyn class1(bdy9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_bdy9_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base2(<sym bdy>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
