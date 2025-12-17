#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3701361451_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3701361451_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3701361451_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3701361451_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3701361451_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3701361451
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3701361451_, RHO, CCP);
  // st asNamespace = r
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
SEXP Rsh_Fir_user_function_inner3701361451_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3701361451 dynamic dispatch ([ns, `base.OK`])

  return Rsh_Fir_user_version_inner3701361451_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3701361451_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3701361451 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3701361451/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ns;  // ns
  SEXP Rsh_Fir_reg_base_OK;  // base_OK
  SEXP Rsh_Fir_reg_base_OK_isMissing;  // base_OK_isMissing
  SEXP Rsh_Fir_reg_base_OK_orDefault;  // base_OK_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_ns1_;  // ns1
  SEXP Rsh_Fir_reg_ns2_;  // ns2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_ns3_;  // ns3
  SEXP Rsh_Fir_reg_ns4_;  // ns4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_getNamespace;  // getNamespace
  SEXP Rsh_Fir_reg_ns5_;  // ns5
  SEXP Rsh_Fir_reg_ns6_;  // ns6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_isNamespace;  // isNamespace
  SEXP Rsh_Fir_reg_ns7_;  // ns7
  SEXP Rsh_Fir_reg_ns8_;  // ns8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_base_OK1_;  // base_OK1
  SEXP Rsh_Fir_reg_base_OK2_;  // base_OK2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_isBaseNamespace;  // isBaseNamespace
  SEXP Rsh_Fir_reg_ns9_;  // ns9
  SEXP Rsh_Fir_reg_ns10_;  // ns10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_ns11_;  // ns11
  SEXP Rsh_Fir_reg_ns12_;  // ns12

  // Bind parameters
  Rsh_Fir_reg_ns = PARAMS[0];
  Rsh_Fir_reg_base_OK = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ns = ns
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ns, RHO);
  (void)(Rsh_Fir_reg_ns);
  // base_OK_isMissing = missing.0(base_OK)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_base_OK;
  Rsh_Fir_reg_base_OK_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if base_OK_isMissing then L0(TRUE) else L0(base_OK)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_base_OK_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_base_OK_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(base_OK)
    Rsh_Fir_reg_base_OK_orDefault = Rsh_Fir_reg_base_OK;
    goto L0_;
  }

L0_:;
  // st `base.OK` = base_OK_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_base_OK_orDefault, RHO);
  (void)(Rsh_Fir_reg_base_OK_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L1_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L2(c1) else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L2(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L2_;
  } else {
  // L12()
    goto L12_;
  }

L2_:;
  // c11 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c11 then L17() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L17()
    goto L17_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // c8 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c9 = `||`(c6, c8)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L2(c9)
  // L2(c9)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c9_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // isNamespace = ldf isNamespace
  Rsh_Fir_reg_isNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L6_:;
  // base_OK1 = ld `base.OK`
  Rsh_Fir_reg_base_OK1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L7_:;
  // c19 = `as.logical`(c15)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c19 then L32() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L32()
    goto L32_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // ns11 = ld ns
  Rsh_Fir_reg_ns11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

L9_:;
  // ns1 = ld ns
  Rsh_Fir_reg_ns1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym ns>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [ns1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ns1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // ns2 = force? ns1
  Rsh_Fir_reg_ns2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns1_);
  // checkMissing(ns2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ns2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.character`(ns2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ns2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L12_:;
  // sym1 = ldf `is.name`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `is.name` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // ns3 = ld ns
  Rsh_Fir_reg_ns3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L14_:;
  // r2 = dyn base1(<sym ns>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(c1, r2)
  // L3(c1, r2)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D1_:;
  // deopt 5 [c1, ns3]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_ns3_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // ns4 = force? ns3
  Rsh_Fir_reg_ns4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns3_);
  // checkMissing(ns4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ns4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c7 = `is.symbol`(ns4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ns4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(390, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L3(c1, c7)
  // L3(c1, c7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c7_;
  goto L3_;

L17_:;
  // getNamespace = ldf getNamespace
  Rsh_Fir_reg_getNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   ns5 = ld ns;
  //   ns6 = force? ns5;
  //   checkMissing(ns6);
  //   return ns6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3701361451_, CCP, RHO);
  // r5 = dyn getNamespace(p)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getNamespace, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // st ns = r5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // goto L5()
  // L5()
  goto L5_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p1 = prom<V +>{
  //   ns7 = ld ns;
  //   ns8 = force? ns7;
  //   checkMissing(ns8);
  //   return ns8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3701361451_1, CCP, RHO);
  // r8 = dyn isNamespace(p1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isNamespace, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // r9 = `!`(r8)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c12 then L23() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L23()
    goto L23_;
  } else {
  // L6()
    goto L6_;
  }

L23_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r10 = dyn stop("not a namespace")
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 24 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

D8_:;
  // deopt 25 [base_OK1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_base_OK1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // base_OK2 = force? base_OK1
  Rsh_Fir_reg_base_OK2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_base_OK1_);
  // checkMissing(base_OK2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_base_OK2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r11 = `!`(base_OK2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_base_OK2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c13 then L28() else L7(c13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L28()
    goto L28_;
  } else {
  // L7(c13)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c13_;
    goto L7_;
  }

L28_:;
  // isBaseNamespace = ldf isBaseNamespace
  Rsh_Fir_reg_isBaseNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L29() else D9()
  // L29()
  goto L29_;

D9_:;
  // deopt 29 [c13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // p2 = prom<V +>{
  //   ns9 = ld ns;
  //   ns10 = force? ns9;
  //   checkMissing(ns10);
  //   return ns10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3701361451_2, CCP, RHO);
  // r13 = dyn isBaseNamespace(p2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isBaseNamespace, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

D10_:;
  // deopt 31 [c13, r13]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // c16 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c17 = `&&`(c13, c16)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L7(c17)
  // L7(c17)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c17_;
  goto L7_;

L32_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

D11_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r14 = dyn stop1("operation not allowed on base namespace")
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

D12_:;
  // deopt 36 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;

D13_:;
  // deopt 37 [ns11]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_ns11_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // ns12 = force? ns11
  Rsh_Fir_reg_ns12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns11_);
  // checkMissing(ns12)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_ns12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ns12
  return Rsh_Fir_reg_ns12_;
}
SEXP Rsh_Fir_user_promise_inner3701361451_(SEXP CCP, SEXP RHO) {
  // ns5 = ld ns
  Rsh_Fir_reg_ns5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ns6 = force? ns5
  Rsh_Fir_reg_ns6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns5_);
  // checkMissing(ns6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_ns6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return ns6
  return Rsh_Fir_reg_ns6_;
}
SEXP Rsh_Fir_user_promise_inner3701361451_1(SEXP CCP, SEXP RHO) {
  // ns7 = ld ns
  Rsh_Fir_reg_ns7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ns8 = force? ns7
  Rsh_Fir_reg_ns8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns7_);
  // checkMissing(ns8)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ns8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return ns8
  return Rsh_Fir_reg_ns8_;
}
SEXP Rsh_Fir_user_promise_inner3701361451_2(SEXP CCP, SEXP RHO) {
  // ns9 = ld ns
  Rsh_Fir_reg_ns9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ns10 = force? ns9
  Rsh_Fir_reg_ns10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns9_);
  // checkMissing(ns10)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_ns10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return ns10
  return Rsh_Fir_reg_ns10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
