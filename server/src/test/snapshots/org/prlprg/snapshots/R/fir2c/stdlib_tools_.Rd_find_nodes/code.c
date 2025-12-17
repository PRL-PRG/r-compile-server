#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2227460651_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2227460651_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2227460651_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2227460651_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2227460651
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2227460651_, RHO, CCP);
  // st `.Rd_find_nodes` = r
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
SEXP Rsh_Fir_user_function_inner2227460651_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2227460651 dynamic dispatch ([x, predicate])

  return Rsh_Fir_user_version_inner2227460651_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2227460651_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2227460651 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2227460651/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_predicate;  // predicate
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_recurse;  // recurse
  SEXP Rsh_Fir_reg_recurse1_;  // recurse1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_nodes;  // nodes
  SEXP Rsh_Fir_reg_nodes1_;  // nodes1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_predicate = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st predicate = predicate
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_predicate, RHO);
  (void)(Rsh_Fir_reg_predicate);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st nodes = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // r3 = clos inner3708401697
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // st recurse = r3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D1_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2227460651_, CCP, RHO);
  // p1 = prom<V +>{
  //   recurse = ld recurse;
  //   recurse1 = force? recurse;
  //   checkMissing(recurse1);
  //   return recurse1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2227460651_1, CCP, RHO);
  // r6 = dyn lapply(p, p1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // nodes = ld nodes
  Rsh_Fir_reg_nodes = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 13 [nodes]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_nodes;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // nodes1 = force? nodes
  Rsh_Fir_reg_nodes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nodes);
  // checkMissing(nodes1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_nodes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return nodes1
  return Rsh_Fir_reg_nodes1_;
}
SEXP Rsh_Fir_user_promise_inner2227460651_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2227460651_1(SEXP CCP, SEXP RHO) {
  // recurse = ld recurse
  Rsh_Fir_reg_recurse = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // recurse1 = force? recurse
  Rsh_Fir_reg_recurse1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recurse);
  // checkMissing(recurse1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_recurse1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return recurse1
  return Rsh_Fir_reg_recurse1_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_predicate1;  // predicate
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_nodes1;  // nodes
  SEXP Rsh_Fir_reg_nodes1_1;  // nodes1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_e4_;  // e4
  SEXP Rsh_Fir_reg_list1;  // list
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_e5_;  // e5
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_lapply1;  // lapply
  SEXP Rsh_Fir_reg_e7_;  // e7
  SEXP Rsh_Fir_reg_e8_;  // e8
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_recurse1;  // recurse
  SEXP Rsh_Fir_reg_recurse1_1;  // recurse1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // predicate = ldf predicate
  Rsh_Fir_reg_predicate1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L0_:;
  // goto L3()
  // L3()
  goto L3_;

L1_:;
  // sst nodes = r3
  Rsh_Fir_super_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // goto L3()
  // L3()
  goto L3_;

L2_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r7 = dyn c1(nodes1, r5)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_nodes1_1;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L3_:;
  // sym2 = ldf `is.list`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf `is.list` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L4_:;
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c2 then L22() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L22()
    goto L22_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 10);

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   e1 = ld e;
  //   e2 = force? e1;
  //   checkMissing(e2);
  //   return e2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, CCP, RHO);
  // r1 = dyn predicate(p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_predicate1, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L8() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L0()
    goto L0_;
  }

L8_:;
  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // nodes = ld nodes
  Rsh_Fir_reg_nodes1 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r2 = dyn base(<sym nodes>, <lang list(e)>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

D2_:;
  // deopt 6 [nodes]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_nodes1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // nodes1 = force? nodes
  Rsh_Fir_reg_nodes1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_nodes1);
  // checkMissing(nodes1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_nodes1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
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
  // e3 = ld e
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L13_:;
  // r4 = dyn base1(<sym e>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D3_:;
  // deopt 10 [e3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_e3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r6 = dyn list(e4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_e4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_1;
  goto L2_;

D5_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r7_;
  goto L1_;

L18_:;
  // e5 = ld e
  Rsh_Fir_reg_e5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

L19_:;
  // r9 = dyn base2(<sym e>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D6_:;
  // deopt 21 [e5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // e6 = force? e5
  Rsh_Fir_reg_e6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e5_);
  // checkMissing(e6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_e6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r11 = dyn is_list(e6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_e6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L4_;

L22_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p1 = prom<V +>{
  //   e7 = ld e;
  //   e8 = force? e7;
  //   checkMissing(e8);
  //   return e8;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_1, CCP, RHO);
  // p2 = prom<V +>{
  //   recurse = ld recurse;
  //   recurse1 = force? recurse;
  //   checkMissing(recurse1);
  //   return recurse1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_2, CCP, RHO);
  // r14 = dyn lapply(p1, p2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 29 [r14]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO) {
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return e2
  return Rsh_Fir_reg_e2_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO) {
  // e7 = ld e
  Rsh_Fir_reg_e7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // e8 = force? e7
  Rsh_Fir_reg_e8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e7_);
  // checkMissing(e8)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_e8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return e8
  return Rsh_Fir_reg_e8_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO) {
  // recurse = ld recurse
  Rsh_Fir_reg_recurse1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // recurse1 = force? recurse
  Rsh_Fir_reg_recurse1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_recurse1);
  // checkMissing(recurse1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_recurse1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return recurse1
  return Rsh_Fir_reg_recurse1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
