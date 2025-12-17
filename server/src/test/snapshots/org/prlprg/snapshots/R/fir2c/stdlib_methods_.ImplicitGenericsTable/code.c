#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3253127715_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3253127715_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3253127715_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner3253127715
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3253127715_, RHO, CCP);
  // st `.ImplicitGenericsTable` = r
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
SEXP Rsh_Fir_user_function_inner3253127715_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3253127715 dynamic dispatch ([where])

  return Rsh_Fir_user_version_inner3253127715_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3253127715_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3253127715 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3253127715/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_exists;  // exists
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName;  // _ImplicitGenericsMetaName
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName1_;  // _ImplicitGenericsMetaName1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName2_;  // _ImplicitGenericsMetaName2
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName3_;  // _ImplicitGenericsMetaName3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_new_env;  // new_env
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName4_;  // _ImplicitGenericsMetaName4
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName5_;  // _ImplicitGenericsMetaName5
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r12_;  // r12

  // Bind parameters
  Rsh_Fir_reg_where = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   _ImplicitGenericsMetaName = ld `.ImplicitGenericsMetaName`;
  //   _ImplicitGenericsMetaName1 = force? _ImplicitGenericsMetaName;
  //   checkMissing(_ImplicitGenericsMetaName1);
  //   return _ImplicitGenericsMetaName1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_, CCP, RHO);
  // p1 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_1, CCP, RHO);
  // r2 = dyn exists[, , inherits](p, p1, FALSE)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L4() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L0()
    goto L0_;
  }

L4_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   _ImplicitGenericsMetaName2 = ld `.ImplicitGenericsMetaName`;
  //   _ImplicitGenericsMetaName3 = force? _ImplicitGenericsMetaName2;
  //   checkMissing(_ImplicitGenericsMetaName3);
  //   return _ImplicitGenericsMetaName3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_2, CCP, RHO);
  // p3 = prom<V +>{
  //   new_env = ldf `new.env`;
  //   r5 = dyn new_env(TRUE);
  //   return r5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_3, CCP, RHO);
  // p4 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_4, CCP, RHO);
  // r8 = dyn assign(p2, p3, p4)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L1()
  // L1()
  goto L1_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p5 = prom<V +>{
  //   _ImplicitGenericsMetaName4 = ld `.ImplicitGenericsMetaName`;
  //   _ImplicitGenericsMetaName5 = force? _ImplicitGenericsMetaName4;
  //   checkMissing(_ImplicitGenericsMetaName5);
  //   return _ImplicitGenericsMetaName5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_5, CCP, RHO);
  // p6 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_6, CCP, RHO);
  // r12 = dyn get(p5, p6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 20 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_(SEXP CCP, SEXP RHO) {
  // _ImplicitGenericsMetaName = ld `.ImplicitGenericsMetaName`
  Rsh_Fir_reg__ImplicitGenericsMetaName = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _ImplicitGenericsMetaName1 = force? _ImplicitGenericsMetaName
  Rsh_Fir_reg__ImplicitGenericsMetaName1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__ImplicitGenericsMetaName);
  // checkMissing(_ImplicitGenericsMetaName1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg__ImplicitGenericsMetaName1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return _ImplicitGenericsMetaName1
  return Rsh_Fir_reg__ImplicitGenericsMetaName1_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_1(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_2(SEXP CCP, SEXP RHO) {
  // _ImplicitGenericsMetaName2 = ld `.ImplicitGenericsMetaName`
  Rsh_Fir_reg__ImplicitGenericsMetaName2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _ImplicitGenericsMetaName3 = force? _ImplicitGenericsMetaName2
  Rsh_Fir_reg__ImplicitGenericsMetaName3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__ImplicitGenericsMetaName2_);
  // checkMissing(_ImplicitGenericsMetaName3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg__ImplicitGenericsMetaName3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return _ImplicitGenericsMetaName3
  return Rsh_Fir_reg__ImplicitGenericsMetaName3_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_3(SEXP CCP, SEXP RHO) {
  // new_env = ldf `new.env`
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // r5 = dyn new_env(TRUE)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_4(SEXP CCP, SEXP RHO) {
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_5(SEXP CCP, SEXP RHO) {
  // _ImplicitGenericsMetaName4 = ld `.ImplicitGenericsMetaName`
  Rsh_Fir_reg__ImplicitGenericsMetaName4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _ImplicitGenericsMetaName5 = force? _ImplicitGenericsMetaName4
  Rsh_Fir_reg__ImplicitGenericsMetaName5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__ImplicitGenericsMetaName4_);
  // checkMissing(_ImplicitGenericsMetaName5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg__ImplicitGenericsMetaName5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return _ImplicitGenericsMetaName5
  return Rsh_Fir_reg__ImplicitGenericsMetaName5_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_6(SEXP CCP, SEXP RHO) {
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
