#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4001578419_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4001578419_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4001578419_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner4001578419
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4001578419_, RHO, CCP);
  // st `.onLoad` = r
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
SEXP Rsh_Fir_user_function_inner4001578419_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4001578419 dynamic dispatch ([libname, pkgname])

  return Rsh_Fir_user_version_inner4001578419_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4001578419_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4001578419 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4001578419/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_libname;  // libname
  SEXP Rsh_Fir_reg_pkgname;  // pkgname
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_sys_function;  // sys_function
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_initMethodDispatch;  // initMethodDispatch
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_C_R_set_method_dispatch;  // C_R_set_method_dispatch
  SEXP Rsh_Fir_reg_C_R_set_method_dispatch1_;  // C_R_set_method_dispatch1
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_setPrimitiveMethods;  // setPrimitiveMethods
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_getGeneric;  // getGeneric
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r14_;  // r14

  // Bind parameters
  Rsh_Fir_reg_libname = PARAMS[0];
  Rsh_Fir_reg_pkgname = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st libname = libname
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_libname, RHO);
  (void)(Rsh_Fir_reg_libname);
  // st pkgname = pkgname
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_pkgname, RHO);
  (void)(Rsh_Fir_reg_pkgname);
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // setPrimitiveMethods = ldf setPrimitiveMethods
  Rsh_Fir_reg_setPrimitiveMethods = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   sys_function = ldf `sys.function`;
  //   r = dyn sys_function();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_, CCP, RHO);
  // r2 = dyn environment(p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st where = r2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // initMethodDispatch = ldf initMethodDispatch
  Rsh_Fir_reg_initMethodDispatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   where = ld where;
  //   where1 = force? where;
  //   checkMissing(where1);
  //   return where1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_1, CCP, RHO);
  // r4 = dyn initMethodDispatch(p1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_initMethodDispatch, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
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
  // C_R_set_method_dispatch = ld C_R_set_method_dispatch
  Rsh_Fir_reg_C_R_set_method_dispatch = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

L6_:;
  // r5 = dyn base(<sym C_R_set_method_dispatch>, TRUE)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D4_:;
  // deopt 10 [C_R_set_method_dispatch]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_R_set_method_dispatch;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // C_R_set_method_dispatch1 = force? C_R_set_method_dispatch
  Rsh_Fir_reg_C_R_set_method_dispatch1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_R_set_method_dispatch);
  // checkMissing(C_R_set_method_dispatch1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_C_R_set_method_dispatch1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // vargs = dots[TRUE]
  SEXP Rsh_Fir_array_vector_values[1];
  Rsh_Fir_array_vector_values[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_vector_names[1];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 1, Rsh_Fir_array_vector_values, NULL);
  // r7 = `.Call`(C_R_set_method_dispatch1, vargs, <missing>)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_C_R_set_method_dispatch1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0()
  // L0()
  goto L0_;

D5_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p2 = prom<V +>{
  //   __ = ld `$`;
  //   __1 = force? __;
  //   checkMissing(__1);
  //   return __1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_2, CCP, RHO);
  // p3 = prom<V +>{
  //   getGeneric = ldf getGeneric;
  //   r9 = dyn getGeneric("$");
  //   return r9;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_3, CCP, RHO);
  // r11 = dyn setPrimitiveMethods[, , code, generic, mlist]("$", p2, "reset", p3, NULL)
  SEXP Rsh_Fir_array_args9[5];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args9[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[4] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[5];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names4[4] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setPrimitiveMethods, 5, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p4 = prom<V +>{
  //   where2 = ld where;
  //   where3 = force? where2;
  //   checkMissing(where3);
  //   return where3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_4, CCP, RHO);
  // p5 = prom<V +>{
  //   where4 = ld where;
  //   where5 = force? where4;
  //   checkMissing(where5);
  //   return where5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_5, CCP, RHO);
  // r14 = dyn assign(".methodsNamespace", p4, p5)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 30 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_(SEXP CCP, SEXP RHO) {
  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // r = dyn sys_function()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner4001578419_1(SEXP CCP, SEXP RHO) {
  // where = ld where
  Rsh_Fir_reg_where = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // where1 = force? where
  Rsh_Fir_reg_where1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where);
  // checkMissing(where1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_where1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return where1
  return Rsh_Fir_reg_where1_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_2(SEXP CCP, SEXP RHO) {
  // __ = ld `$`
  Rsh_Fir_reg___ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // __1 = force? __
  Rsh_Fir_reg___1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___);
  // checkMissing(__1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg___1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return __1
  return Rsh_Fir_reg___1_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_3(SEXP CCP, SEXP RHO) {
  // getGeneric = ldf getGeneric
  Rsh_Fir_reg_getGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r9 = dyn getGeneric("$")
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGeneric, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_4(SEXP CCP, SEXP RHO) {
  // where2 = ld where
  Rsh_Fir_reg_where2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // where3 = force? where2
  Rsh_Fir_reg_where3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where2_);
  // checkMissing(where3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_where3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return where3
  return Rsh_Fir_reg_where3_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_5(SEXP CCP, SEXP RHO) {
  // where4 = ld where
  Rsh_Fir_reg_where4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // where5 = force? where4
  Rsh_Fir_reg_where5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where4_);
  // checkMissing(where5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_where5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return where5
  return Rsh_Fir_reg_where5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
