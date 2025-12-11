#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2119503979(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2119503979_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2119503979(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner21195039791(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);


  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2119503979
  SEXP Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2119503979, RHO, CCP);
  // st fibonacci = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // fibonacci = ldf fibonacci
  SEXP Rsh_Fir_reg_fibonacci = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0:;
  // r1 = dyn fibonacci(7.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fibonacci, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1;

D1:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_function_inner2119503979(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2119503979 dynamic dispatch ([n])

  return Rsh_Fir_user_version_inner2119503979_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2119503979_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2119503979 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2119503979/0: expected 1, got %d", NPARAMS);

  // Bind parameters
  SEXP Rsh_Fir_reg_n = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // n1 = ld n
  SEXP Rsh_Fir_reg_n1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L2() else D0()
  // L2()
  goto L2;

L0:;
  // fibonacci = ldf fibonacci
  SEXP Rsh_Fir_reg_fibonacci1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D2()
  // L7()
  goto L7;

D0:;
  // deopt 0 [n1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2:;
  // n2 = force? n1
  SEXP Rsh_Fir_reg_n2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_n2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `<=`(n2, 1.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n2;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L3() else L0()
  if (Rsh_Fir_is_true(c)) {
  // L3()
    goto L3;
  } else {
  // L0()
    goto L0;
  }

L3:;
  // n3 = ld n
  SEXP Rsh_Fir_reg_n3 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L4() else D1()
  // L4()
  goto L4;

D1:;
  // deopt 4 [n3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_n3;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L4:;
  // n4 = force? n3
  SEXP Rsh_Fir_reg_n4 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n4;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return n4
  return Rsh_Fir_reg_n4;

D2:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L7:;
  // p = prom<V +>{
  n5 = ld n;
  n6 = force? n5;
  checkMissing(n6);
  r3 = `-`(n6, 1.0);
  return r3;
}
  SEXP Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2119503979, CCP, RHO);
  // r5 = dyn fibonacci(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r5 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fibonacci1, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8;

D3:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8:;
  // fibonacci1 = ldf fibonacci
  SEXP Rsh_Fir_reg_fibonacci1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D4()
  // L9()
  goto L9;

D4:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9:;
  // p1 = prom<V +>{
  n7 = ld n;
  n8 = force? n7;
  checkMissing(n8);
  r6 = `-`(n8, 2.0);
  return r6;
}
  SEXP Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner21195039791, CCP, RHO);
  // r8 = dyn fibonacci1(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  SEXP Rsh_Fir_reg_r8 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fibonacci1, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D5()
  // L10()
  goto L10;

D5:;
  // deopt 15 [r5, r8]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r5;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r8;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10:;
  // r9 = `+`(r5, r8)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r5;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r8;
  SEXP Rsh_Fir_reg_r9 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9;
}
SEXP Rsh_Fir_user_promise_inner2119503979(SEXP CCP, SEXP RHO) {
  // n5 = ld n
  SEXP Rsh_Fir_reg_n5 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n6 = force? n5
  SEXP Rsh_Fir_reg_n6 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n6;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // r3 = `-`(n6, 1.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_n6;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_reg_r3 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // return r3
  return Rsh_Fir_reg_r3;
}
SEXP Rsh_Fir_user_promise_inner21195039791(SEXP CCP, SEXP RHO) {
  // n7 = ld n
  SEXP Rsh_Fir_reg_n7 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n8 = force? n7
  SEXP Rsh_Fir_reg_n8 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n8;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r6 = `-`(n8, 2.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_n8;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_reg_r6 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // return r6
  return Rsh_Fir_reg_r6;
}
