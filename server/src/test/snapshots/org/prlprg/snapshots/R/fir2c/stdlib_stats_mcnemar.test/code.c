#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner411413160_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner411413160_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner411413160_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner411413160_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_Performance;
  SEXP Rsh_Fir_reg_Performance1_;
  SEXP Rsh_Fir_reg_mcnemar_test;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r17_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner411413160
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner411413160_, RHO, CCP);
  // st `mcnemar.test` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(794.0, 86.0, 150.0, 570.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(794.0, 86.0, 150.0, 570.0);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L3() else L4();
  // L0(r6):
  //   return r6;
  // L3():
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L5() else L6();
  // L4():
  //   r5 = dyn base1[`1st Survey`, `2nd Survey`](<lang c("Approve", "Disapprove")>, <lang c("Approve", "Disapprove")>);
  //   goto L0(r5);
  // L1(r8):
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L7() else L8();
  // L5():
  //   c1 = ldf c in base;
  //   r9 = dyn c1("Approve", "Disapprove");
  //   goto L1(r9);
  // L6():
  //   r7 = dyn base2("Approve", "Disapprove");
  //   goto L1(r7);
  // L2(r11):
  //   list = ldf list in base;
  //   r13 = dyn list(r8, r11);
  //   goto L0(r13);
  // L7():
  //   c2 = ldf c in base;
  //   r12 = dyn c2("Approve", "Disapprove");
  //   goto L2(r12);
  // L8():
  //   r10 = dyn base3("Approve", "Disapprove");
  //   goto L2(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r15 = dyn matrix[, nrow, dimnames](p, 2.0, p1)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 10 [r15]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st Performance = r15
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // Performance = ld Performance
  Rsh_Fir_reg_Performance = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 [Performance]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_Performance;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // Performance1 = force? Performance
  Rsh_Fir_reg_Performance1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Performance);
  // checkMissing(Performance1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_Performance1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // mcnemar_test = ldf `mcnemar.test`
  Rsh_Fir_reg_mcnemar_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p2 = prom<V +>{
  //   Performance2 = ld Performance;
  //   Performance3 = force? Performance2;
  //   checkMissing(Performance3);
  //   return Performance3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r17 = dyn mcnemar_test(p2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mcnemar_test, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 17 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn c(794.0, 86.0, 150.0, 570.0)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(794.0, 86.0, 150.0, 570.0)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L3_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r5 = dyn base1[`1st Survey`, `2nd Survey`](<lang c("Approve", "Disapprove")>, <lang c("Approve", "Disapprove")>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;

L1_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r9 = dyn c1("Approve", "Disapprove")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L6_:;
  // r7 = dyn base2("Approve", "Disapprove")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r13 = dyn list(r8, r11)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r13_;
  goto L0_;

L7_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r12 = dyn c2("Approve", "Disapprove")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L2_;

L8_:;
  // r10 = dyn base3("Approve", "Disapprove")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Performance2_;
  SEXP Rsh_Fir_reg_Performance3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Performance2 = ld Performance
  Rsh_Fir_reg_Performance2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // Performance3 = force? Performance2
  Rsh_Fir_reg_Performance3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Performance2_);
  // checkMissing(Performance3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_Performance3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return Performance3
  return Rsh_Fir_reg_Performance3_;
}
SEXP Rsh_Fir_user_function_inner411413160_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner411413160 dynamic dispatch ([x, y, correct])

  return Rsh_Fir_user_version_inner411413160_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner411413160_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner411413160 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner411413160/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_correct;
  SEXP Rsh_Fir_reg_y_isMissing;
  SEXP Rsh_Fir_reg_y_orDefault;
  SEXP Rsh_Fir_reg_correct_isMissing;
  SEXP Rsh_Fir_reg_correct_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_matrix;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_complete_cases;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_as_factor;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_as_factor1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_nlevels;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_nlevels1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_table;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_correct1_;
  SEXP Rsh_Fir_reg_correct2_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_t1_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_abs;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_x31_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_t2_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_x35_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_t3_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_y15_;
  SEXP Rsh_Fir_reg_y16_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_y18_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_upper_tri;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_upper_tri1_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_pchisq;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_STATISTIC2_;
  SEXP Rsh_Fir_reg_STATISTIC3_;
  SEXP Rsh_Fir_reg_PARAMETER2_;
  SEXP Rsh_Fir_reg_PARAMETER3_;
  SEXP Rsh_Fir_reg_PVAL;
  SEXP Rsh_Fir_reg_PVAL1_;
  SEXP Rsh_Fir_reg_METHOD2_;
  SEXP Rsh_Fir_reg_METHOD3_;
  SEXP Rsh_Fir_reg_DNAME;
  SEXP Rsh_Fir_reg_DNAME1_;
  SEXP Rsh_Fir_reg_list1;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_RVAL;
  SEXP Rsh_Fir_reg_RVAL1_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_correct = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if y_isMissing then L0(NULL) else L0(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_y_orDefault = Rsh_const(CCP, 18);
    goto L0_;
  } else {
  // L0(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L0_;
  }

L0_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // correct_isMissing = missing.0(correct)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_correct;
  Rsh_Fir_reg_correct_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if correct_isMissing then L1(TRUE) else L1(correct)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_correct_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_correct_orDefault = Rsh_const(CCP, 20);
    goto L1_;
  } else {
  // L1(correct)
    Rsh_Fir_reg_correct_orDefault = Rsh_Fir_reg_correct;
    goto L1_;
  }

L1_:;
  // st correct = correct_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_correct_orDefault, RHO);
  (void)(Rsh_Fir_reg_correct_orDefault);
  // sym = ldf `is.matrix`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base = ldf `is.matrix` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L2_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c then L37() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L37()
    goto L37_;
  } else {
  // L3()
    goto L3_;
  }

L33_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L35() else D0()
  // L35()
  goto L35_;

L34_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard4 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L12_:;
  // r83 = ld r
  Rsh_Fir_reg_r83_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L108() else D45()
  // L108()
  goto L108_;

L35_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r2 = dyn is_matrix(x2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L36() else D1()
  // L36()
  goto L36_;

L37_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L38() else D2()
  // L38()
  goto L38_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 133 [r83]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // c19 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c19 then L70() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L70()
    goto L70_;
  } else {
  // L14()
    goto L14_;
  }

L36_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L2_;

L38_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_, 0, NULL, CCP, RHO);
  // r4 = dyn nrow(p)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L39() else D3()
  // L39()
  goto L39_;

L67_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L69() else D18()
  // L69()
  goto L69_;

L68_:;
  // r30 = dyn base4(<sym y>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(r30)
  // L13(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L13_;

L108_:;
  // r84 = force? r83
  Rsh_Fir_reg_r84_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r83_);
  // checkMissing(r84)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r84_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // r85 = ld r
  Rsh_Fir_reg_r85_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L109() else D46()
  // L109()
  goto L109_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 55 [y1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 134 [r84, r85]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard5 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L39_:;
  // st r = r4
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // r5 = ld r
  Rsh_Fir_reg_r5_1 = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

L69_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c18 = `==`(y2, NULL)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args31);
  // goto L13(c18)
  // L13(c18)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_c18_;
  goto L13_;

L70_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L71() else D19()
  // L71()
  goto L71_;

L109_:;
  // r86 = force? r85
  Rsh_Fir_reg_r86_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r85_);
  // checkMissing(r86)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r86_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r87 = `-`(r86, 1.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args33);
  // r88 = `*`(r84, r87)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args34);
  // r89 = `/`(r88, 2.0)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args35);
  // st PARAMETER = r89
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // st METHOD = "McNemar's Chi-squared test"
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_const(CCP, 29), RHO);
  (void)(Rsh_const(CCP, 29));
  // correct1 = ld correct
  Rsh_Fir_reg_correct1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L110() else D47()
  // L110()
  goto L110_;

D4_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 145 [correct1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_correct1_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L16_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard6 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L40_:;
  // r6 = force? r5
  Rsh_Fir_reg_r6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_r5_1);
  // checkMissing(r6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r7 = `<`(r6, 2.0)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args38);
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c1 then L4(c1) else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L4(c1)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1_1;
    goto L4_;
  } else {
  // L41()
    goto L41_;
  }

L71_:;
  // r32 = dyn stop2("if 'x' is not a matrix, 'y' must be given")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L72() else D20()
  // L72()
  goto L72_;

L74_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L76() else D21()
  // L76()
  goto L76_;

L75_:;
  // r34 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L16(r34)
  // L16(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L16_;

L110_:;
  // correct2 = force? correct1
  Rsh_Fir_reg_correct2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_correct1_);
  // checkMissing(correct2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_correct2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c30 = `as.logical`(correct2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_correct2_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c30 then L111() else L23(c30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L111()
    goto L111_;
  } else {
  // L23(c30)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c30_;
    goto L23_;
  }

D20_:;
  // deopt 61 [r32]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 66 [x11]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L4_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c7 then L46() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L46()
    goto L46_;
  } else {
  // L5()
    goto L5_;
  }

L17_:;
  // r43 = `!=`(r40, r41)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args45);
  // c20 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // if c20 then L82() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L82()
    goto L82_;
  } else {
  // L18()
    goto L18_;
  }

L23_:;
  // c36 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // if c36 then L114() else L24(c36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L114()
    goto L114_;
  } else {
  // L24(c36)
    Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c36_;
    goto L24_;
  }

L41_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L42() else D5()
  // L42()
  goto L42_;

L72_:;
  // goto L15()
  // L15()
  goto L15_;

L76_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r36 = dyn length(x12)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L77() else D22()
  // L77()
  goto L77_;

L78_:;
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L80() else D23()
  // L80()
  goto L80_;

L79_:;
  // r39 = dyn base6(<sym y>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(r35, r39)
  // L17(r35, r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
  goto L17_;

L111_:;
  // r90 = ld r
  Rsh_Fir_reg_r90_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L112() else D48()
  // L112()
  goto L112_;

D5_:;
  // deopt 16 [c1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 69 [r36]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 71 [r35, y3]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 147 [c30, r90]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard1 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L86() else D27()
  // L86()
  goto L86_;

L24_:;
  // c45 = `as.logical`(c38)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c45 then L122() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L122()
    goto L122_;
  } else {
  // L26()
    goto L26_;
  }

L42_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_1, 0, NULL, CCP, RHO);
  // r9 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

L46_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L77_:;
  // goto L16(r36)
  // L16(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L16_;

L80_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r42 = dyn length1(y4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L81() else D24()
  // L81()
  goto L81_;

L82_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L83() else D25()
  // L83()
  goto L83_;

L112_:;
  // r91 = force? r90
  Rsh_Fir_reg_r91_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r90_);
  // checkMissing(r91)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r91_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // r92 = `==`(r91, 2.0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args58);
  // c33 = `as.logical`(r92)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args59);
  // c34 = `&&`(c30, c33)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args60);
  // goto L23(c34)
  // L23(c34)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c34_;
  goto L23_;

L114_:;
  // sym9 = ldf any
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base9 = ldf any in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard9 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

D6_:;
  // deopt 18 [c1, r9]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 74 [r35, r42]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // c8 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c8 then L8(c8) else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L8(c8)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c8_;
    goto L8_;
  } else {
  // L54()
    goto L54_;
  }

L25_:;
  // c42 = `as.logical`(r94)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // c43 = `&&`(c41, c42)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_c41_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args64);
  // goto L24(c43)
  // L24(c43)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c43_;
  goto L24_;

L26_:;
  // x31 = ld x
  Rsh_Fir_reg_x31_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L132() else D59()
  // L132()
  goto L132_;

L28_:;
  // x35 = ld x
  Rsh_Fir_reg_x35_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L135() else D62()
  // L135()
  goto L135_;

L43_:;
  // r10 = ld r
  Rsh_Fir_reg_r10_1 = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

L47_:;
  // r13 = dyn stop("'x' must be square with at least two rows and columns")
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

L50_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

L51_:;
  // r15 = dyn base1(<lang `<`(x, 0.0)>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_1;
  goto L7_;

L81_:;
  // goto L17(r35, r42)
  // L17(r35, r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L17_;

L83_:;
  // r44 = dyn stop3("'x' and 'y' must have the same length")
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L84() else D26()
  // L84()
  goto L84_;

L86_:;
  // p4 = prom<V +>{
  //   deparse2 = ldf deparse1;
  //   p3 = prom<V +>{
  //     sym7 = ldf substitute;
  //     base7 = ldf substitute in base;
  //     guard7 = `==`.4(sym7, base7);
  //     if guard7 then L1() else L2();
  //   L0(r47):
  //     return r47;
  //   L1():
  //     substitute1 = ldf substitute in base;
  //     r48 = dyn substitute1(<sym x>);
  //     goto L0(r48);
  //   L2():
  //     r46 = dyn base7(<sym x>);
  //     goto L0(r46);
  //   };
  //   r50 = dyn deparse2(p3);
  //   return r50;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_2, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   deparse3 = ldf deparse1;
  //   p5 = prom<V +>{
  //     sym8 = ldf substitute;
  //     base8 = ldf substitute in base;
  //     guard8 = `==`.4(sym8, base8);
  //     if guard8 then L1() else L2();
  //   L0(r53):
  //     return r53;
  //   L1():
  //     substitute2 = ldf substitute in base;
  //     r54 = dyn substitute2(<sym y>);
  //     goto L0(r54);
  //   L2():
  //     r52 = dyn base8(<sym y>);
  //     goto L0(r52);
  //   };
  //   r56 = dyn deparse3(p5);
  //   return r56;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_4, 0, NULL, CCP, RHO);
  // r58 = dyn paste(p4, "and", p6)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L87() else D28()
  // L87()
  goto L87_;

L115_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L117() else D49()
  // L117()
  goto L117_;

L116_:;
  // r93 = dyn base9(<lang `!=`(`-`(x, t(x)), 0.0)>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L25(c36, r93)
  // L25(c36, r93)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L25_;

L122_:;
  // sym10 = ldf abs
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base10 = ldf abs in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard10 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

D7_:;
  // deopt 18 [c1, r9, r10]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 30 [x7]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 79 [r44]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 87 [r58]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 154 [c36, x23]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(154, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 184 [x31]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 191 [x35]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_x35_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L8_:;
  // c17 = `as.logical`(c9)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c17 then L60() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L60()
    goto L60_;
  } else {
  // L10()
    goto L10_;
  }

L27_:;
  // r106 = `-`(r101, 1.0)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args80);
  // st y = r106
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r106_, RHO);
  (void)(Rsh_Fir_reg_r106_);
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L129() else D57()
  // L129()
  goto L129_;

L44_:;
  // r11 = force? r10
  Rsh_Fir_reg_r11_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_r10_1);
  // checkMissing(r11)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r11_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r12 = `!=`(r9, r11)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args82);
  // c4 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args83);
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args84);
  // goto L4(c5)
  // L4(c5)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c5_;
  goto L4_;

L48_:;
  // goto L6()
  // L6()
  goto L6_;

L52_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // r17 = `<`(x8, 0.0)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args86);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r18 = dyn any(r17)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

L54_:;
  // sym2 = ldf anyNA
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base2 = ldf anyNA in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard2 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L84_:;
  // goto L19()
  // L19()
  goto L19_;

L87_:;
  // st DNAME = r58
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // complete_cases = ldf `complete.cases`
  Rsh_Fir_reg_complete_cases = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L88() else D29()
  // L88()
  goto L88_;

L117_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L118() else D50()
  // L118()
  goto L118_;

L123_:;
  // x27 = ld x
  Rsh_Fir_reg_x27_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L125() else D53()
  // L125()
  goto L125_;

L124_:;
  // r100 = dyn base10(<lang `-`(x, t(x))>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L27(r100)
  // L27(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L27_;

L132_:;
  // x32 = force? x31
  Rsh_Fir_reg_x32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x31_);
  // checkMissing(x32)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // t2 = ldf t
  Rsh_Fir_reg_t2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L133() else D60()
  // L133()
  goto L133_;

L135_:;
  // x36 = force? x35
  Rsh_Fir_reg_x36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x35_);
  // checkMissing(x36)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // t3 = ldf t
  Rsh_Fir_reg_t3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L136() else D63()
  // L136()
  goto L136_;

D11_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 156 [c36, x24]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_x24_;
  Rsh_Fir_deopt(156, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 167 [x27]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 179 []
  Rsh_Fir_deopt(179, 0, NULL, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 186 [x32]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D63_:;
  // deopt 193 [x36]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L9_:;
  // c14 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args93);
  // c15 = `||`(c13, c14)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args94);
  // goto L8(c15)
  // L8(c15)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c15_;
  goto L8_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L64() else D16()
  // L64()
  goto L64_;

L53_:;
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r18_;
  goto L7_;

L55_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L57() else D12()
  // L57()
  goto L57_;

L56_:;
  // r19 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L9(c8, r19)
  // L9(c8, r19)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L9_;

L60_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

L88_:;
  // p7 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_6, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   y5 = ld y;
  //   y6 = force? y5;
  //   checkMissing(y6);
  //   return y6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_7, 0, NULL, CCP, RHO);
  // r61 = dyn complete_cases(p7, p8)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_complete_cases, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L89() else D30()
  // L89()
  goto L89_;

L118_:;
  // p15 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   return x26;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_8, 0, NULL, CCP, RHO);
  // r96 = dyn t(p15)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L119() else D51()
  // L119()
  goto L119_;

L125_:;
  // x28 = force? x27
  Rsh_Fir_reg_x28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x27_);
  // checkMissing(x28)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // t1 = ldf t
  Rsh_Fir_reg_t1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L126() else D54()
  // L126()
  goto L126_;

L129_:;
  // p17 = prom<V +>{
  //   METHOD = ld METHOD;
  //   METHOD1 = force? METHOD;
  //   checkMissing(METHOD1);
  //   return METHOD1;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_9, 0, NULL, CCP, RHO);
  // r108 = dyn paste1(p17, "with continuity correction")
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L130() else D58()
  // L130()
  goto L130_;

L133_:;
  // p18 = prom<V +>{
  //   x33 = ld x;
  //   x34 = force? x33;
  //   checkMissing(x34);
  //   return x34;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_10, 0, NULL, CCP, RHO);
  // r111 = dyn t2(p18)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t2_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L134() else D61()
  // L134()
  goto L134_;

L136_:;
  // p19 = prom<V +>{
  //   x37 = ld x;
  //   x38 = force? x37;
  //   checkMissing(x38);
  //   return x38;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_11, 0, NULL, CCP, RHO);
  // r114 = dyn t3(p19)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t3_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L137() else D64()
  // L137()
  goto L137_;

D12_:;
  // deopt 38 [c8, x9]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 93 [r61]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 158 [c36, x24, r96]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(158, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 169 [x28]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 182 [r108]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 188 [x32, r111]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(188, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 195 [x36, r114]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r114_;
  Rsh_Fir_deopt(195, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L57_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r21 = dyn anyNA(x10)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L58() else D13()
  // L58()
  goto L58_;

L61_:;
  // r22 = dyn stop1("all entries of 'x' must be nonnegative and finite")
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L64_:;
  // p2 = prom<V +>{
  //   sym3 = ldf substitute;
  //   base3 = ldf substitute in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r25):
  //   return r25;
  // L1():
  //   substitute = ldf substitute in base;
  //   r26 = dyn substitute(<sym x>);
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base3(<sym x>);
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_12, 0, NULL, CCP, RHO);
  // r28 = dyn deparse1(p2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L65() else D17()
  // L65()
  goto L65_;

L89_:;
  // st OK = r61
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // as_factor = ldf `as.factor`
  Rsh_Fir_reg_as_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L90() else D31()
  // L90()
  goto L90_;

L119_:;
  // r97 = `-`(x24, r96)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args115);
  // r98 = `!=`(r97, 0.0)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args116);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r99 = dyn any1(r98)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L120() else D52()
  // L120()
  goto L120_;

L126_:;
  // p16 = prom<V +>{
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   return x30;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_13, 0, NULL, CCP, RHO);
  // r103 = dyn t1(p16)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t1_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L127() else D55()
  // L127()
  goto L127_;

L130_:;
  // st METHOD = r108
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r108_, RHO);
  (void)(Rsh_Fir_reg_r108_);
  // goto L28()
  // L28()
  goto L28_;

L134_:;
  // r112 = `-`(x32, r111)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args120);
  // st y = r112
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r112_, RHO);
  (void)(Rsh_Fir_reg_r112_);
  // goto L28()
  // L28()
  goto L28_;

L137_:;
  // r115 = `+`(x36, r114)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_r114_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args121);
  // st x = r115
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r115_, RHO);
  (void)(Rsh_Fir_reg_r115_);
  // sym11 = ldf sum
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base11 = ldf sum in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard11 then L138() else L139()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L138()
    goto L138_;
  } else {
  // L139()
    goto L139_;
  }

D13_:;
  // deopt 41 [c8, r21]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 46 [r22]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 52 [r28]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 163 [c36, r99]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 171 [x28, r103]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L29_:;
  // st STATISTIC = r117
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r117_, RHO);
  (void)(Rsh_Fir_reg_r117_);
  // pchisq = ldf pchisq
  Rsh_Fir_reg_pchisq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L153() else D72()
  // L153()
  goto L153_;

L58_:;
  // goto L9(c8, r21)
  // L9(c8, r21)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L9_;

L62_:;
  // goto L11()
  // L11()
  goto L11_;

L65_:;
  // st DNAME = r28
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L12()
  // L12()
  goto L12_;

L90_:;
  // p9 = prom<V +>{
  //   x15 = ld x;
  //   x16 = force? x15;
  //   checkMissing(x16);
  //   c21 = `is.object`(x16);
  //   if c21 then L1() else L2(x16);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", x16);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x18):
  //   OK = ld OK;
  //   OK1 = force? OK;
  //   __ = ldf `[` in base;
  //   r62 = dyn __(x18, OK1);
  //   goto L0(r62);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_14, 0, NULL, CCP, RHO);
  // r64 = dyn as_factor(p9)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_factor, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L91() else D32()
  // L91()
  goto L91_;

L120_:;
  // goto L25(c36, r99)
  // L25(c36, r99)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r99_;
  goto L25_;

L127_:;
  // r104 = `-`(x28, r103)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args130);
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r105 = dyn abs(r104)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L128() else D56()
  // L128()
  goto L128_;

L138_:;
  // y15 = ld y
  Rsh_Fir_reg_y15_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L140() else D65()
  // L140()
  goto L140_;

L139_:;
  // r116 = dyn base11(<lang `/`(`^`(`[`(y, upper.tri(x)), 2.0), `[`(x, upper.tri(x)))>)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L29(r116)
  // L29(r116)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L29_;

D32_:;
  // deopt 98 [r64]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 174 [r105]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 200 [y15]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_y15_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D72_:;
  // deopt 220 []
  Rsh_Fir_deopt(220, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // st x = r64
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // as_factor1 = ldf `as.factor`
  Rsh_Fir_reg_as_factor1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L92() else D33()
  // L92()
  goto L92_;

L128_:;
  // goto L27(r105)
  // L27(r105)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r105_;
  goto L27_;

L140_:;
  // y16 = force? y15
  Rsh_Fir_reg_y16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y15_);
  // checkMissing(y16)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_y16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(y16)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_y16_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args134);
  // if c46 then L141() else L142(y16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L141()
    goto L141_;
  } else {
  // L142(y16)
    Rsh_Fir_reg_y18_ = Rsh_Fir_reg_y16_;
    goto L142_;
  }

L153_:;
  // p22 = prom<V +>{
  //   STATISTIC = ld STATISTIC;
  //   STATISTIC1 = force? STATISTIC;
  //   checkMissing(STATISTIC1);
  //   return STATISTIC1;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_15, 0, NULL, CCP, RHO);
  // p23 = prom<V +>{
  //   PARAMETER = ld PARAMETER;
  //   PARAMETER1 = force? PARAMETER;
  //   checkMissing(PARAMETER1);
  //   return PARAMETER1;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_16, 0, NULL, CCP, RHO);
  // r133 = dyn pchisq[, , `lower.tail`](p22, p23, FALSE)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args137[2] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pchisq, 3, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L154() else D73()
  // L154()
  goto L154_;

D33_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

D73_:;
  // deopt 225 [r133]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r133_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L30_:;
  // r121 = `^`(dx5, 2.0)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args138);
  // x41 = ld x
  Rsh_Fir_reg_x41_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L146() else D68()
  // L146()
  goto L146_;

L92_:;
  // p10 = prom<V +>{
  //   y7 = ld y;
  //   y8 = force? y7;
  //   checkMissing(y8);
  //   c22 = `is.object`(y8);
  //   if c22 then L1() else L2(y8);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", y8);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(y10):
  //   OK2 = ld OK;
  //   OK3 = force? OK2;
  //   __1 = ldf `[` in base;
  //   r65 = dyn __1(y10, OK3);
  //   goto L0(r65);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_17, 0, NULL, CCP, RHO);
  // r67 = dyn as_factor1(p10)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_factor1_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L93() else D34()
  // L93()
  goto L93_;

L141_:;
  // dr4 = tryDispatchBuiltin.1("[", y16)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_y16_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args146);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if dc2 then L143() else L142(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L143()
    goto L143_;
  } else {
  // L142(dr4)
    Rsh_Fir_reg_y18_ = Rsh_Fir_reg_dr4_;
    goto L142_;
  }

L142_:;
  // upper_tri = ldf `upper.tri`
  Rsh_Fir_reg_upper_tri = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L144() else D66()
  // L144()
  goto L144_;

L154_:;
  // st PVAL = r133
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_r133_, RHO);
  (void)(Rsh_Fir_reg_r133_);
  // l = ld STATISTIC
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L155() else D74()
  // L155()
  goto L155_;

D34_:;
  // deopt 103 [r67]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 203 [y18]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_y18_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 208 [r121, x41]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_x41_;
  Rsh_Fir_deopt(208, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D74_:;
  // deopt 230 ["McNemar's chi-squared", l, "McNemar's chi-squared"]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_const(CCP, 64);
  Rsh_Fir_deopt(230, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L93_:;
  // st y = r67
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // nlevels = ldf nlevels
  Rsh_Fir_reg_nlevels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L94() else D35()
  // L94()
  goto L94_;

L143_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L30(dx4)
  // L30(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L30_;

L144_:;
  // p20 = prom<V +>{
  //   x39 = ld x;
  //   x40 = force? x39;
  //   checkMissing(x40);
  //   return x40;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_18, 0, NULL, CCP, RHO);
  // r119 = dyn upper_tri(p20)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_upper_tri, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L145() else D67()
  // L145()
  goto L145_;

L146_:;
  // x42 = force? x41
  Rsh_Fir_reg_x42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x41_);
  // checkMissing(x42)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_x42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(x42)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args152);
  // if c47 then L147() else L148(r121, x42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L147()
    goto L147_;
  } else {
  // L148(r121, x42)
    Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r121_;
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_x42_;
    goto L148_;
  }

L155_:;
  // r134 = dyn names__(l, NULL, "McNemar's chi-squared")
  SEXP Rsh_Fir_array_args153[3];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args153[2] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names54[3];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L156() else D75()
  // L156()
  goto L156_;

D35_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 205 [y18, r119]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_y18_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(205, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D75_:;
  // deopt 232 ["McNemar's chi-squared", r134]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_r134_;
  Rsh_Fir_deopt(232, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L31_:;
  // r129 = `/`(r125, dx7)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args154);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r130 = dyn sum(r129)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L152() else D71()
  // L152()
  goto L152_;

L94_:;
  // p11 = prom<V +>{
  //   x19 = ld x;
  //   x20 = force? x19;
  //   checkMissing(x20);
  //   return x20;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_19, 0, NULL, CCP, RHO);
  // r69 = dyn nlevels(p11)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlevels, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L95() else D36()
  // L95()
  goto L95_;

L145_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r120 = dyn __2(y18, r119)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_y18_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L30(r120)
  // L30(r120)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r120_;
  goto L30_;

L147_:;
  // dr6 = tryDispatchBuiltin.1("[", x42)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args159);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if dc3 then L149() else L148(r121, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L149()
    goto L149_;
  } else {
  // L148(r121, dr6)
    Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r121_;
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_dr6_;
    goto L148_;
  }

L148_:;
  // upper_tri1 = ldf `upper.tri`
  Rsh_Fir_reg_upper_tri1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L150() else D69()
  // L150()
  goto L150_;

L156_:;
  // st STATISTIC = r134
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r134_, RHO);
  (void)(Rsh_Fir_reg_r134_);
  // l1 = ld PARAMETER
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L157() else D76()
  // L157()
  goto L157_;

D36_:;
  // deopt 108 [r69]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 211 [r123, x44]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_x44_;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D71_:;
  // deopt 217 [r130]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D76_:;
  // deopt 237 ["df", l1, "df"]
  SEXP Rsh_Fir_array_deopt_stack57[3];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack57[2] = Rsh_const(CCP, 66);
  Rsh_Fir_deopt(237, 3, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L95_:;
  // st r = r69
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // r70 = ld r
  Rsh_Fir_reg_r70_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L96() else D37()
  // L96()
  goto L96_;

L149_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L31(r121, dx6)
  // L31(r121, dx6)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L31_;

L150_:;
  // p21 = prom<V +>{
  //   x45 = ld x;
  //   x46 = force? x45;
  //   checkMissing(x46);
  //   return x46;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_20, 0, NULL, CCP, RHO);
  // r127 = dyn upper_tri1(p21)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_upper_tri1_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L151() else D70()
  // L151()
  goto L151_;

L152_:;
  // goto L29(r130)
  // L29(r130)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r130_;
  goto L29_;

L157_:;
  // r135 = dyn names__1(l1, NULL, "df")
  SEXP Rsh_Fir_array_args164[3];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args164[2] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names59[3];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L158() else D77()
  // L158()
  goto L158_;

D37_:;
  // deopt 110 [r70]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 213 [r123, x44, r127]
  SEXP Rsh_Fir_array_deopt_stack59[3];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_x44_;
  Rsh_Fir_array_deopt_stack59[2] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(213, 3, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D77_:;
  // deopt 239 ["df", r135]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_r135_;
  Rsh_Fir_deopt(239, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L96_:;
  // r71 = force? r70
  Rsh_Fir_reg_r71_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r70_);
  // checkMissing(r71)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_r71_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // r72 = `<`(r71, 2.0)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args166);
  // c23 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args167);
  // if c23 then L20(c23) else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L20(c23)
    Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c23_;
    goto L20_;
  } else {
  // L97()
    goto L97_;
  }

L151_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r128 = dyn __3(x44, r127)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L31(r123, r128)
  // L31(r123, r128)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r123_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r128_;
  goto L31_;

L158_:;
  // st PARAMETER = r135
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r135_, RHO);
  (void)(Rsh_Fir_reg_r135_);
  // sym12 = ldf list
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base12 = ldf list in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args169);
  // if guard12 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L20_:;
  // c29 = `as.logical`(c24)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args170);
  // if c29 then L102() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L102()
    goto L102_;
  } else {
  // L21()
    goto L21_;
  }

L32_:;
  // st RVAL = r137
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r137_, RHO);
  (void)(Rsh_Fir_reg_r137_);
  // l2 = ld RVAL
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L167() else D84()
  // L167()
  goto L167_;

L97_:;
  // nlevels1 = ldf nlevels
  Rsh_Fir_reg_nlevels1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L98() else D38()
  // L98()
  goto L98_;

L159_:;
  // STATISTIC2 = ld STATISTIC
  Rsh_Fir_reg_STATISTIC2_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L161() else D78()
  // L161()
  goto L161_;

L160_:;
  // r136 = dyn base12[statistic, parameter, `p.value`, method, `data.name`](<sym STATISTIC>, <sym PARAMETER>, <sym PVAL>, <sym METHOD>, <sym DNAME>)
  SEXP Rsh_Fir_array_args171[5];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args171[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args171[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args171[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args171[4] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names61[5];
  Rsh_Fir_array_arg_names61[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_arg_names61[1] = Rsh_const(CCP, 70);
  Rsh_Fir_array_arg_names61[2] = Rsh_const(CCP, 71);
  Rsh_Fir_array_arg_names61[3] = Rsh_const(CCP, 72);
  Rsh_Fir_array_arg_names61[4] = Rsh_const(CCP, 73);
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 5, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L32(r136)
  // L32(r136)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L32_;

D38_:;
  // deopt 115 [c23]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

D78_:;
  // deopt 243 [STATISTIC2]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_STATISTIC2_;
  Rsh_Fir_deopt(243, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

D84_:;
  // deopt 264 ["htest", l2, "htest"]
  SEXP Rsh_Fir_array_deopt_stack63[3];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_const(CCP, 74);
  Rsh_Fir_deopt(264, 3, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 75), RHO);
  // check L106() else D43()
  // L106()
  goto L106_;

L98_:;
  // p12 = prom<V +>{
  //   y11 = ld y;
  //   y12 = force? y11;
  //   checkMissing(y12);
  //   return y12;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_21, 0, NULL, CCP, RHO);
  // r74 = dyn nlevels1(p12)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlevels1_, 1, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L99() else D39()
  // L99()
  goto L99_;

L102_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L103() else D41()
  // L103()
  goto L103_;

L161_:;
  // STATISTIC3 = force? STATISTIC2
  Rsh_Fir_reg_STATISTIC3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_STATISTIC2_);
  // checkMissing(STATISTIC3)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_STATISTIC3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty()));
  // PARAMETER2 = ld PARAMETER
  Rsh_Fir_reg_PARAMETER2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L162() else D79()
  // L162()
  goto L162_;

L167_:;
  // r139 = dyn class__(l2, NULL, "htest")
  SEXP Rsh_Fir_array_args175[3];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args175[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args175[2] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names63[3];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_array_arg_names63[2] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L168() else D85()
  // L168()
  goto L168_;

D39_:;
  // deopt 117 [c23, r74]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 122 []
  Rsh_Fir_deopt(122, 0, NULL, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 128 []
  Rsh_Fir_deopt(128, 0, NULL, CCP, RHO);
  return R_NilValue;

D79_:;
  // deopt 246 [PARAMETER2]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_PARAMETER2_;
  Rsh_Fir_deopt(246, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

D85_:;
  // deopt 266 ["htest", r139]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_r139_;
  Rsh_Fir_deopt(266, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L99_:;
  // r75 = ld r
  Rsh_Fir_reg_r75_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L100() else D40()
  // L100()
  goto L100_;

L103_:;
  // r78 = dyn stop4("'x' and 'y' must have the same number of levels (minimum 2)")
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L104() else D42()
  // L104()
  goto L104_;

L106_:;
  // p13 = prom<V +>{
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   return x22;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_22, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   y13 = ld y;
  //   y14 = force? y13;
  //   checkMissing(y14);
  //   return y14;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_23, 0, NULL, CCP, RHO);
  // r82 = dyn table(p13, p14)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L107() else D44()
  // L107()
  goto L107_;

L162_:;
  // PARAMETER3 = force? PARAMETER2
  Rsh_Fir_reg_PARAMETER3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PARAMETER2_);
  // checkMissing(PARAMETER3)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_PARAMETER3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // PVAL = ld PVAL
  Rsh_Fir_reg_PVAL = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L163() else D80()
  // L163()
  goto L163_;

L168_:;
  // st RVAL = r139
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r139_, RHO);
  (void)(Rsh_Fir_reg_r139_);
  // RVAL = ld RVAL
  Rsh_Fir_reg_RVAL = Rsh_Fir_load(Rsh_const(CCP, 67), RHO);
  // check L169() else D86()
  // L169()
  goto L169_;

D40_:;
  // deopt 117 [c23, r74, r75]
  SEXP Rsh_Fir_array_deopt_stack67[3];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_deopt_stack67[2] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(117, 3, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 124 [r78]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 131 [r82]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

D80_:;
  // deopt 249 [PVAL]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_PVAL;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

D86_:;
  // deopt 268 [RVAL]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_RVAL;
  Rsh_Fir_deopt(268, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L100_:;
  // r76 = force? r75
  Rsh_Fir_reg_r76_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r75_);
  // checkMissing(r76)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_r76_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // r77 = `!=`(r74, r76)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args182);
  // c26 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args183);
  // c27 = `||`(c23, c26)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args184);
  // goto L20(c27)
  // L20(c27)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c27_;
  goto L20_;

L104_:;
  // goto L22()
  // L22()
  goto L22_;

L107_:;
  // st x = r82
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // goto L12()
  // L12()
  goto L12_;

L163_:;
  // PVAL1 = force? PVAL
  Rsh_Fir_reg_PVAL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PVAL);
  // checkMissing(PVAL1)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_PVAL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // METHOD2 = ld METHOD
  Rsh_Fir_reg_METHOD2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L164() else D81()
  // L164()
  goto L164_;

L169_:;
  // RVAL1 = force? RVAL
  Rsh_Fir_reg_RVAL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RVAL);
  // checkMissing(RVAL1)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_RVAL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return RVAL1
  return Rsh_Fir_reg_RVAL1_;

D81_:;
  // deopt 252 [METHOD2]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_METHOD2_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L164_:;
  // METHOD3 = force? METHOD2
  Rsh_Fir_reg_METHOD3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_METHOD2_);
  // checkMissing(METHOD3)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_METHOD3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L165() else D82()
  // L165()
  goto L165_;

D82_:;
  // deopt 255 [DNAME]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_DNAME;
  Rsh_Fir_deopt(255, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L165_:;
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r138 = dyn list(STATISTIC3, PARAMETER3, PVAL1, METHOD3, DNAME1)
  SEXP Rsh_Fir_array_args189[5];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_STATISTIC3_;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_PARAMETER3_;
  Rsh_Fir_array_args189[2] = Rsh_Fir_reg_PVAL1_;
  Rsh_Fir_array_args189[3] = Rsh_Fir_reg_METHOD3_;
  Rsh_Fir_array_args189[4] = Rsh_Fir_reg_DNAME1_;
  SEXP Rsh_Fir_array_arg_names66[5];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_array_arg_names66[2] = R_MissingArg;
  Rsh_Fir_array_arg_names66[3] = R_MissingArg;
  Rsh_Fir_array_arg_names66[4] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 5, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L166() else D83()
  // L166()
  goto L166_;

D83_:;
  // deopt 259 [r138]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(259, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L166_:;
  // goto L32(r138)
  // L32(r138)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r138_;
  goto L32_;
}
SEXP Rsh_Fir_user_promise_inner411413160_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner411413160_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner411413160_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // deparse2 = ldf deparse1
  Rsh_Fir_reg_deparse2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p3 = prom<V +>{
  //   sym7 = ldf substitute;
  //   base7 = ldf substitute in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r47):
  //   return r47;
  // L1():
  //   substitute1 = ldf substitute in base;
  //   r48 = dyn substitute1(<sym x>);
  //   goto L0(r48);
  // L2():
  //   r46 = dyn base7(<sym x>);
  //   goto L0(r46);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_3, 0, NULL, CCP, RHO);
  // r50 = dyn deparse2(p3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse2_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r50
  return Rsh_Fir_reg_r50_;
}
SEXP Rsh_Fir_user_promise_inner411413160_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_substitute1_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf substitute
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base7 = ldf substitute in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // substitute1 = ldf substitute in base
  Rsh_Fir_reg_substitute1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r48 = dyn substitute1(<sym x>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // r46 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner411413160_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse3_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r56_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // deparse3 = ldf deparse1
  Rsh_Fir_reg_deparse3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p5 = prom<V +>{
  //   sym8 = ldf substitute;
  //   base8 = ldf substitute in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r53):
  //   return r53;
  // L1():
  //   substitute2 = ldf substitute in base;
  //   r54 = dyn substitute2(<sym y>);
  //   goto L0(r54);
  // L2():
  //   r52 = dyn base8(<sym y>);
  //   goto L0(r52);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner411413160_5, 0, NULL, CCP, RHO);
  // r56 = dyn deparse3(p5)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse3_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names28, CCP, RHO);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_inner411413160_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_substitute2_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf substitute
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base8 = ldf substitute in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r53
  return Rsh_Fir_reg_r53_;

L1_:;
  // substitute2 = ldf substitute in base
  Rsh_Fir_reg_substitute2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r54 = dyn substitute2(<sym y>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute2_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L0_;

L2_:;
  // r52 = dyn base8(<sym y>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner411413160_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner411413160_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_y6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // y5 = ld y
  Rsh_Fir_reg_y5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // y6 = force? y5
  Rsh_Fir_reg_y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y5_);
  // checkMissing(y6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return y6
  return Rsh_Fir_reg_y6_;
}
SEXP Rsh_Fir_user_promise_inner411413160_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_x26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // return x26
  return Rsh_Fir_reg_x26_;
}
SEXP Rsh_Fir_user_promise_inner411413160_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_METHOD;
  SEXP Rsh_Fir_reg_METHOD1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // METHOD = ld METHOD
  Rsh_Fir_reg_METHOD = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // METHOD1 = force? METHOD
  Rsh_Fir_reg_METHOD1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_METHOD);
  // checkMissing(METHOD1)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_METHOD1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return METHOD1
  return Rsh_Fir_reg_METHOD1_;
}
SEXP Rsh_Fir_user_promise_inner411413160_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_x34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return x34
  return Rsh_Fir_reg_x34_;
}
SEXP Rsh_Fir_user_promise_inner411413160_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_x38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return x38
  return Rsh_Fir_reg_x38_;
}
SEXP Rsh_Fir_user_promise_inner411413160_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf substitute
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base3 = ldf substitute in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r26 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L0_;

L2_:;
  // r24 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner411413160_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_x30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // return x30
  return Rsh_Fir_reg_x30_;
}
SEXP Rsh_Fir_user_promise_inner411413160_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_OK;
  SEXP Rsh_Fir_reg_OK1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r62_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(x16)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args124);
  // if c21 then L1() else L2(x16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x16)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", x16)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args125);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // OK = ld OK
  Rsh_Fir_reg_OK = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // OK1 = force? OK
  Rsh_Fir_reg_OK1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r62 = dyn __(x18, OK1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_OK1_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r62)
  // L0(r62)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r62_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner411413160_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_STATISTIC;
  SEXP Rsh_Fir_reg_STATISTIC1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // STATISTIC = ld STATISTIC
  Rsh_Fir_reg_STATISTIC = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // STATISTIC1 = force? STATISTIC
  Rsh_Fir_reg_STATISTIC1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_STATISTIC);
  // checkMissing(STATISTIC1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_STATISTIC1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // return STATISTIC1
  return Rsh_Fir_reg_STATISTIC1_;
}
SEXP Rsh_Fir_user_promise_inner411413160_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_PARAMETER;
  SEXP Rsh_Fir_reg_PARAMETER1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // PARAMETER = ld PARAMETER
  Rsh_Fir_reg_PARAMETER = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // PARAMETER1 = force? PARAMETER
  Rsh_Fir_reg_PARAMETER1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PARAMETER);
  // checkMissing(PARAMETER1)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_PARAMETER1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // return PARAMETER1
  return Rsh_Fir_reg_PARAMETER1_;
}
SEXP Rsh_Fir_user_promise_inner411413160_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_OK2_;
  SEXP Rsh_Fir_reg_OK3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r65_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(y8)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_y8_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args140);
  // if c22 then L1() else L2(y8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y8)
    Rsh_Fir_reg_y10_ = Rsh_Fir_reg_y8_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", y8)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_y8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_y10_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // OK2 = ld OK
  Rsh_Fir_reg_OK2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // OK3 = force? OK2
  Rsh_Fir_reg_OK3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r65 = dyn __1(y10, OK3)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_y10_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_OK3_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r65_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner411413160_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x39_;
  SEXP Rsh_Fir_reg_x40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x39 = ld x
  Rsh_Fir_reg_x39_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x40 = force? x39
  Rsh_Fir_reg_x40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x39_);
  // checkMissing(x40)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_x40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return x40
  return Rsh_Fir_reg_x40_;
}
SEXP Rsh_Fir_user_promise_inner411413160_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_x20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // return x20
  return Rsh_Fir_reg_x20_;
}
SEXP Rsh_Fir_user_promise_inner411413160_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_reg_x46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x45 = ld x
  Rsh_Fir_reg_x45_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x46 = force? x45
  Rsh_Fir_reg_x46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x45_);
  // checkMissing(x46)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_x46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // return x46
  return Rsh_Fir_reg_x46_;
}
SEXP Rsh_Fir_user_promise_inner411413160_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y11_;
  SEXP Rsh_Fir_reg_y12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // y11 = ld y
  Rsh_Fir_reg_y11_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // y12 = force? y11
  Rsh_Fir_reg_y12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y11_);
  // checkMissing(y12)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_y12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // return y12
  return Rsh_Fir_reg_y12_;
}
SEXP Rsh_Fir_user_promise_inner411413160_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // return x22
  return Rsh_Fir_reg_x22_;
}
SEXP Rsh_Fir_user_promise_inner411413160_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y13_;
  SEXP Rsh_Fir_reg_y14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner411413160/0: expected 0, got %d", NCAPTURES);

  // y13 = ld y
  Rsh_Fir_reg_y13_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // y14 = force? y13
  Rsh_Fir_reg_y14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y13_);
  // checkMissing(y14)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_y14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // return y14
  return Rsh_Fir_reg_y14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
