#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2310282661_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2310282661_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2310282661_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2310282661_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2310282661_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2310282661
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2310282661_, RHO, CCP);
  // st getNamespaceExports = r
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
SEXP Rsh_Fir_user_function_inner2310282661_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2310282661 dynamic dispatch ([ns])

  return Rsh_Fir_user_version_inner2310282661_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2310282661_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2310282661 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2310282661/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ns;  // ns
  SEXP Rsh_Fir_reg_asNamespace;  // asNamespace
  SEXP Rsh_Fir_reg_ns1_;  // ns1
  SEXP Rsh_Fir_reg_ns2_;  // ns2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_isBaseNamespace;  // isBaseNamespace
  SEXP Rsh_Fir_reg_ns3_;  // ns3
  SEXP Rsh_Fir_reg_ns4_;  // ns4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__BaseNamespaceEnv;  // _BaseNamespaceEnv
  SEXP Rsh_Fir_reg__BaseNamespaceEnv1_;  // _BaseNamespaceEnv1
  SEXP Rsh_Fir_reg__BaseNamespaceEnv2_;  // _BaseNamespaceEnv2
  SEXP Rsh_Fir_reg__getNamespaceInfo;  // _getNamespaceInfo
  SEXP Rsh_Fir_reg_ns5_;  // ns5
  SEXP Rsh_Fir_reg_ns6_;  // ns6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_ns = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ns = ns
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ns, RHO);
  (void)(Rsh_Fir_reg_ns);
  // asNamespace = ldf asNamespace
  Rsh_Fir_reg_asNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // _getNamespaceInfo = ldf `.getNamespaceInfo`
  Rsh_Fir_reg__getNamespaceInfo = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

L2_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r8 = dyn names(_BaseNamespaceEnv2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg__BaseNamespaceEnv2_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L14() else D7()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   ns1 = ld ns;
  //   ns2 = force? ns1;
  //   checkMissing(ns2);
  //   return ns2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2310282661_, CCP, RHO);
  // r1 = dyn asNamespace(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asNamespace, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st ns = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // isBaseNamespace = ldf isBaseNamespace
  Rsh_Fir_reg_isBaseNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base(<lang if(isBaseNamespace(ns), .BaseNamespaceEnv, .getNamespaceInfo(ns, "exports"))>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p1 = prom<V +>{
  //   ns3 = ld ns;
  //   ns4 = force? ns3;
  //   checkMissing(ns4);
  //   return ns4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2310282661_1, CCP, RHO);
  // r5 = dyn isBaseNamespace(p1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isBaseNamespace, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L9() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L1()
    goto L1_;
  }

L9_:;
  // _BaseNamespaceEnv = ld `.BaseNamespaceEnv`
  Rsh_Fir_reg__BaseNamespaceEnv = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 11 [_BaseNamespaceEnv]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg__BaseNamespaceEnv;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // _BaseNamespaceEnv1 = force? _BaseNamespaceEnv
  Rsh_Fir_reg__BaseNamespaceEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__BaseNamespaceEnv);
  // checkMissing(_BaseNamespaceEnv1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg__BaseNamespaceEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // goto L2(_BaseNamespaceEnv1)
  // L2(_BaseNamespaceEnv1)
  Rsh_Fir_reg__BaseNamespaceEnv2_ = Rsh_Fir_reg__BaseNamespaceEnv1_;
  goto L2_;

D5_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p2 = prom<V +>{
  //   ns5 = ld ns;
  //   ns6 = force? ns5;
  //   checkMissing(ns6);
  //   return ns6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2310282661_2, CCP, RHO);
  // r7 = dyn _getNamespaceInfo(p2, "exports")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getNamespaceInfo, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

D6_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg__BaseNamespaceEnv2_ = Rsh_Fir_reg_r7_;
  goto L2_;

D7_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2310282661_(SEXP CCP, SEXP RHO) {
  // ns1 = ld ns
  Rsh_Fir_reg_ns1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ns2 = force? ns1
  Rsh_Fir_reg_ns2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns1_);
  // checkMissing(ns2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_ns2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return ns2
  return Rsh_Fir_reg_ns2_;
}
SEXP Rsh_Fir_user_promise_inner2310282661_1(SEXP CCP, SEXP RHO) {
  // ns3 = ld ns
  Rsh_Fir_reg_ns3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ns4 = force? ns3
  Rsh_Fir_reg_ns4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns3_);
  // checkMissing(ns4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ns4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return ns4
  return Rsh_Fir_reg_ns4_;
}
SEXP Rsh_Fir_user_promise_inner2310282661_2(SEXP CCP, SEXP RHO) {
  // ns5 = ld ns
  Rsh_Fir_reg_ns5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ns6 = force? ns5
  Rsh_Fir_reg_ns6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns5_);
  // checkMissing(ns6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ns6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return ns6
  return Rsh_Fir_reg_ns6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
