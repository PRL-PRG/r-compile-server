#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2040299639_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2040299639_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2040299639_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2040299639_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2040299639_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2040299639_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner2040299639
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2040299639_, RHO, CCP);
  // st initFieldArgs = r
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
SEXP Rsh_Fir_user_function_inner2040299639_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2040299639 dynamic dispatch ([`.Object`, classDef, selfEnv, `...`])

  return Rsh_Fir_user_version_inner2040299639_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2040299639_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2040299639 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2040299639/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg__Object;  // _Object
  SEXP Rsh_Fir_reg_classDef;  // classDef
  SEXP Rsh_Fir_reg_selfEnv;  // selfEnv
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_initRefFields;  // initRefFields
  SEXP Rsh_Fir_reg__Object1_;  // _Object1
  SEXP Rsh_Fir_reg__Object2_;  // _Object2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_classDef1_;  // classDef1
  SEXP Rsh_Fir_reg_classDef2_;  // classDef2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_selfEnv1_;  // selfEnv1
  SEXP Rsh_Fir_reg_selfEnv2_;  // selfEnv2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg__Object = PARAMS[0];
  Rsh_Fir_reg_classDef = PARAMS[1];
  Rsh_Fir_reg_selfEnv = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `.Object` = _Object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg__Object, RHO);
  (void)(Rsh_Fir_reg__Object);
  // st classDef = classDef
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_classDef, RHO);
  (void)(Rsh_Fir_reg_classDef);
  // st selfEnv = selfEnv
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_selfEnv, RHO);
  (void)(Rsh_Fir_reg_selfEnv);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // initRefFields = ldf initRefFields
  Rsh_Fir_reg_initRefFields = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   _Object1 = ld `.Object`;
  //   _Object2 = force? _Object1;
  //   checkMissing(_Object2);
  //   return _Object2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2040299639_, CCP, RHO);
  // p1 = prom<V +>{
  //   classDef1 = ld classDef;
  //   classDef2 = force? classDef1;
  //   checkMissing(classDef2);
  //   return classDef2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2040299639_1, CCP, RHO);
  // p2 = prom<V +>{
  //   selfEnv1 = ld selfEnv;
  //   selfEnv2 = force? selfEnv1;
  //   checkMissing(selfEnv2);
  //   return selfEnv2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2040299639_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   list = ldf list;
  //   ddd1 = ld `...`;
  //   r5 = dyn list[`...`](ddd1);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(<sym ...>);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2040299639_3, CCP, RHO);
  // r7 = dyn initRefFields(p, p1, p2, p3)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_initRefFields, 4, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner2040299639_(SEXP CCP, SEXP RHO) {
  // _Object1 = ld `.Object`
  Rsh_Fir_reg__Object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // _Object2 = force? _Object1
  Rsh_Fir_reg__Object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Object1_);
  // checkMissing(_Object2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg__Object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return _Object2
  return Rsh_Fir_reg__Object2_;
}
SEXP Rsh_Fir_user_promise_inner2040299639_1(SEXP CCP, SEXP RHO) {
  // classDef1 = ld classDef
  Rsh_Fir_reg_classDef1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // classDef2 = force? classDef1
  Rsh_Fir_reg_classDef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classDef1_);
  // checkMissing(classDef2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_classDef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return classDef2
  return Rsh_Fir_reg_classDef2_;
}
SEXP Rsh_Fir_user_promise_inner2040299639_2(SEXP CCP, SEXP RHO) {
  // selfEnv1 = ld selfEnv
  Rsh_Fir_reg_selfEnv1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // selfEnv2 = force? selfEnv1
  Rsh_Fir_reg_selfEnv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_selfEnv1_);
  // checkMissing(selfEnv2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_selfEnv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return selfEnv2
  return Rsh_Fir_reg_selfEnv2_;
}
SEXP Rsh_Fir_user_promise_inner2040299639_3(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_;

L1_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r5 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
