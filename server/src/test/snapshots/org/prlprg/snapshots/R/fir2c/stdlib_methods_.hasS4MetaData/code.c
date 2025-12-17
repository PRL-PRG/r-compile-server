#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2916718377_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2916718377_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2916718377_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2916718377_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2916718377_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2916718377
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2916718377_, RHO, CCP);
  // st `.hasS4MetaData` = r
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
SEXP Rsh_Fir_user_function_inner2916718377_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2916718377 dynamic dispatch ([env])

  return Rsh_Fir_user_version_inner2916718377_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2916718377_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2916718377 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2916718377/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_startsWith;  // startsWith
  SEXP Rsh_Fir_reg_nms;  // nms
  SEXP Rsh_Fir_reg_nms1_;  // nms1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_startsWith1_;  // startsWith1
  SEXP Rsh_Fir_reg_nms2_;  // nms2
  SEXP Rsh_Fir_reg_nms3_;  // nms3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_startsWith2_;  // startsWith2
  SEXP Rsh_Fir_reg_nms4_;  // nms4
  SEXP Rsh_Fir_reg_nms5_;  // nms5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_any2_;  // any2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16

  // Bind parameters
  Rsh_Fir_reg_env = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st env = env
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_env, RHO);
  (void)(Rsh_Fir_reg_env);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // st nms = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L1_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L2(c) else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L15()
    goto L15_;
  }

L2_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c9 then L4(c9) else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L4(c9)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c9_;
    goto L4_;
  } else {
  // L22()
    goto L22_;
  }

L3_:;
  // c6 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L2(c7)
  // L2(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L2_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c10
  return Rsh_Fir_reg_c10_;

L5_:;
  // c15 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c16 = `||`(c14, c15)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L4(c16)
  // L4(c16)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c16_;
  goto L4_;

L6_:;
  // env1 = ld env
  Rsh_Fir_reg_env1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<sym env>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [env1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_env1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // env2 = force? env1
  Rsh_Fir_reg_env2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1_);
  // checkMissing(env2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_env2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn names(env2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_env2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L10_:;
  // startsWith = ldf startsWith
  Rsh_Fir_reg_startsWith = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r3 = dyn base1(<lang startsWith(nms, ".__C__")>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p = prom<V +>{
  //   nms = ld nms;
  //   nms1 = force? nms;
  //   checkMissing(nms1);
  //   return nms1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2916718377_, CCP, RHO);
  // r6 = dyn startsWith(p, ".__C__")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_startsWith, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r7 = dyn any(r6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r7_;
  goto L1_;

L15_:;
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // startsWith1 = ldf startsWith
  Rsh_Fir_reg_startsWith1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L17_:;
  // r8 = dyn base2(<lang startsWith(nms, ".__T__")>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(c, r8)
  // L3(c, r8)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D5_:;
  // deopt 19 [c]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   nms2 = ld nms;
  //   nms3 = force? nms2;
  //   checkMissing(nms3);
  //   return nms3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2916718377_1, CCP, RHO);
  // r11 = dyn startsWith1(p1, ".__T__")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_startsWith1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 22 [c, r11]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r12 = dyn any1(r11)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 24 [c, r12]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L3(c, r12)
  // L3(c, r12)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r12_;
  goto L3_;

L22_:;
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // startsWith2 = ldf startsWith
  Rsh_Fir_reg_startsWith2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L24_:;
  // r13 = dyn base3(<lang startsWith(nms, ".__A__")>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(c9, r13)
  // L5(c9, r13)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L5_;

D8_:;
  // deopt 29 [c9]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // p2 = prom<V +>{
  //   nms4 = ld nms;
  //   nms5 = force? nms4;
  //   checkMissing(nms5);
  //   return nms5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2916718377_2, CCP, RHO);
  // r16 = dyn startsWith2(p2, ".__A__")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_startsWith2_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

D9_:;
  // deopt 32 [c9, r16]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r17 = dyn any2(r16)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L27() else D10()
  // L27()
  goto L27_;

D10_:;
  // deopt 34 [c9, r17]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L5(c9, r17)
  // L5(c9, r17)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r17_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner2916718377_(SEXP CCP, SEXP RHO) {
  // nms = ld nms
  Rsh_Fir_reg_nms = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // nms1 = force? nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms);
  // checkMissing(nms1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_nms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return nms1
  return Rsh_Fir_reg_nms1_;
}
SEXP Rsh_Fir_user_promise_inner2916718377_1(SEXP CCP, SEXP RHO) {
  // nms2 = ld nms
  Rsh_Fir_reg_nms2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // nms3 = force? nms2
  Rsh_Fir_reg_nms3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms2_);
  // checkMissing(nms3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_nms3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return nms3
  return Rsh_Fir_reg_nms3_;
}
SEXP Rsh_Fir_user_promise_inner2916718377_2(SEXP CCP, SEXP RHO) {
  // nms4 = ld nms
  Rsh_Fir_reg_nms4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // nms5 = force? nms4
  Rsh_Fir_reg_nms5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms4_);
  // checkMissing(nms5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_nms5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return nms5
  return Rsh_Fir_reg_nms5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
