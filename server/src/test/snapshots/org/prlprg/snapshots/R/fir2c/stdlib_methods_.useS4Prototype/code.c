#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3357840545_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3357840545_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3357840545_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3357840545_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3357840545_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3357840545
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3357840545_, RHO, CCP);
  // st `.useS4Prototype` = r
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
SEXP Rsh_Fir_user_function_inner3357840545_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3357840545 dynamic dispatch ([on, where])

  return Rsh_Fir_user_version_inner3357840545_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3357840545_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3357840545 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3357840545/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_on;  // on
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_on_isMissing;  // on_isMissing
  SEXP Rsh_Fir_reg_on_orDefault;  // on_orDefault
  SEXP Rsh_Fir_reg_where_isMissing;  // where_isMissing
  SEXP Rsh_Fir_reg_where_orDefault;  // where_orDefault
  SEXP Rsh_Fir_reg__methodsNamespace;  // _methodsNamespace
  SEXP Rsh_Fir_reg__methodsNamespace1_;  // _methodsNamespace1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_on1_;  // on1
  SEXP Rsh_Fir_reg_on2_;  // on2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_C_Rf_allocS4Object;  // C_Rf_allocS4Object
  SEXP Rsh_Fir_reg_C_Rf_allocS4Object1_;  // C_Rf_allocS4Object1
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg__assignOverBinding;  // _assignOverBinding
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_pp;  // pp
  SEXP Rsh_Fir_reg_pp1_;  // pp1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10

  // Bind parameters
  Rsh_Fir_reg_on = PARAMS[0];
  Rsh_Fir_reg_where = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // on_isMissing = missing.0(on)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_on;
  Rsh_Fir_reg_on_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if on_isMissing then L0(TRUE) else L0(on)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_on_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_on_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(on)
    Rsh_Fir_reg_on_orDefault = Rsh_Fir_reg_on;
    goto L0_;
  }

L0_:;
  // st on = on_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_on_orDefault, RHO);
  (void)(Rsh_Fir_reg_on_orDefault);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if where_isMissing then L1() else L2(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   _methodsNamespace = ld `.methodsNamespace`;
  //   _methodsNamespace1 = force? _methodsNamespace;
  //   checkMissing(_methodsNamespace1);
  //   return _methodsNamespace1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3357840545_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // on1 = ld on
  Rsh_Fir_reg_on1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L3_:;
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L4_:;
  // st pp = r2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // _assignOverBinding = ldf `.assignOverBinding`
  Rsh_Fir_reg__assignOverBinding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L6_:;
  // st pp = r6
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // goto L5()
  // L5()
  goto L5_;

D0_:;
  // deopt 0 [on1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_on1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // on2 = force? on1
  Rsh_Fir_reg_on2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_on1_);
  // checkMissing(on2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_on2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(on2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_on2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L8() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L3()
    goto L3_;
  }

L8_:;
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // C_Rf_allocS4Object = ld C_Rf_allocS4Object
  Rsh_Fir_reg_C_Rf_allocS4Object = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

L10_:;
  // r1 = dyn base(<sym C_Rf_allocS4Object>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r1)
  // L4(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L4_;

D1_:;
  // deopt 3 [C_Rf_allocS4Object]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_Rf_allocS4Object;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // C_Rf_allocS4Object1 = force? C_Rf_allocS4Object
  Rsh_Fir_reg_C_Rf_allocS4Object1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_Rf_allocS4Object);
  // checkMissing(C_Rf_allocS4Object1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_C_Rf_allocS4Object1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // vargs = dots[]
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 0, NULL, NULL);
  // r3 = `.Call`(C_Rf_allocS4Object1, vargs, <missing>)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_C_Rf_allocS4Object1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L4_;

L13_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn list()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

L14_:;
  // r5 = dyn base1()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L6_;

D2_:;
  // deopt 10 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L6_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3357840545_1, CCP, RHO);
  // p2 = prom<V +>{
  //   pp = ld pp;
  //   pp1 = force? pp;
  //   checkMissing(pp1);
  //   return pp1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3357840545_2, CCP, RHO);
  // r10 = dyn _assignOverBinding[, where, , ](".defaultPrototype", p1, p2, FALSE)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__assignOverBinding, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3357840545_(SEXP CCP, SEXP RHO) {
  // _methodsNamespace = ld `.methodsNamespace`
  Rsh_Fir_reg__methodsNamespace = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // _methodsNamespace1 = force? _methodsNamespace
  Rsh_Fir_reg__methodsNamespace1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__methodsNamespace);
  // checkMissing(_methodsNamespace1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg__methodsNamespace1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return _methodsNamespace1
  return Rsh_Fir_reg__methodsNamespace1_;
}
SEXP Rsh_Fir_user_promise_inner3357840545_1(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner3357840545_2(SEXP CCP, SEXP RHO) {
  // pp = ld pp
  Rsh_Fir_reg_pp = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // pp1 = force? pp
  Rsh_Fir_reg_pp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pp);
  // checkMissing(pp1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_pp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return pp1
  return Rsh_Fir_reg_pp1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
