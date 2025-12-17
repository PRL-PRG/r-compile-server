#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner910976503_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner910976503_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner910976503_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910976503_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner910976503
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner910976503_, RHO, CCP);
  // st `.resetSigLength` = r
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
SEXP Rsh_Fir_user_function_inner910976503_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner910976503 dynamic dispatch ([fdef, n])

  return Rsh_Fir_user_version_inner910976503_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner910976503_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner910976503 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner910976503/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fdef;  // fdef
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_fdef1_;  // fdef1
  SEXP Rsh_Fir_reg_fdef2_;  // fdef2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_fenv;  // fenv
  SEXP Rsh_Fir_reg_fenv1_;  // fenv1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg__getMethodsTable;  // _getMethodsTable
  SEXP Rsh_Fir_reg_fdef3_;  // fdef3
  SEXP Rsh_Fir_reg_fdef4_;  // fdef4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_fenv2_;  // fenv2
  SEXP Rsh_Fir_reg_fenv3_;  // fenv3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_length__;  // length__
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg__resetTable;  // _resetTable
  SEXP Rsh_Fir_reg_mtable;  // mtable
  SEXP Rsh_Fir_reg_mtable1_;  // mtable1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_signames;  // signames
  SEXP Rsh_Fir_reg_signames1_;  // signames1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg__resetInheritedMethods;  // _resetInheritedMethods
  SEXP Rsh_Fir_reg_fenv4_;  // fenv4
  SEXP Rsh_Fir_reg_fenv5_;  // fenv5
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_mtable2_;  // mtable2
  SEXP Rsh_Fir_reg_mtable3_;  // mtable3
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r16_;  // r16

  // Bind parameters
  Rsh_Fir_reg_fdef = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st fdef = fdef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_fdef, RHO);
  (void)(Rsh_Fir_reg_fdef);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   fdef1 = ld fdef;
  //   fdef2 = force? fdef1;
  //   checkMissing(fdef2);
  //   return fdef2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_, CCP, RHO);
  // r1 = dyn environment(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st fenv = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_1, CCP, RHO);
  // p2 = prom<V +>{
  //   fenv = ld fenv;
  //   fenv1 = force? fenv;
  //   checkMissing(fenv1);
  //   return fenv1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_2, CCP, RHO);
  // r4 = dyn assign[, , envir](".SigLength", p1, p2)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // _getMethodsTable = ldf `.getMethodsTable`
  Rsh_Fir_reg__getMethodsTable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   fdef3 = ld fdef;
  //   fdef4 = force? fdef3;
  //   checkMissing(fdef4);
  //   return fdef4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_3, CCP, RHO);
  // p4 = prom<V +>{
  //   fenv2 = ld fenv;
  //   fenv3 = force? fenv2;
  //   checkMissing(fenv3);
  //   return fenv3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_4, CCP, RHO);
  // r7 = dyn _getMethodsTable[, , check](p3, p4, FALSE)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getMethodsTable, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 18 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st mtable = r7
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r8 = dyn __(<sym fdef>, <sym signature>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // st signames = r8
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 23 [n3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // l = ld signames
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // length__ = ldf `length<-`
  Rsh_Fir_reg_length__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 26 [n4, l, n4]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(26, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // r9 = dyn length__(l, NULL, n4)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 28 [n4, r9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L8_:;
  // st signames = r9
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // _resetTable = ldf `.resetTable`
  Rsh_Fir_reg__resetTable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p5 = prom<V +>{
  //   mtable = ld mtable;
  //   mtable1 = force? mtable;
  //   checkMissing(mtable1);
  //   return mtable1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_5, CCP, RHO);
  // p6 = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   return n6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_6, CCP, RHO);
  // p7 = prom<V +>{
  //   signames = ld signames;
  //   signames1 = force? signames;
  //   checkMissing(signames1);
  //   return signames1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_7, CCP, RHO);
  // r13 = dyn _resetTable(p5, p6, p7)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__resetTable, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 35 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L10_:;
  // _resetInheritedMethods = ldf `.resetInheritedMethods`
  Rsh_Fir_reg__resetInheritedMethods = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p8 = prom<V +>{
  //   fenv4 = ld fenv;
  //   fenv5 = force? fenv4;
  //   checkMissing(fenv5);
  //   return fenv5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_8, CCP, RHO);
  // p9 = prom<V +>{
  //   mtable2 = ld mtable;
  //   mtable3 = force? mtable2;
  //   checkMissing(mtable3);
  //   return mtable3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910976503_9, CCP, RHO);
  // r16 = dyn _resetInheritedMethods(p8, p9)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__resetInheritedMethods, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 40 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner910976503_(SEXP CCP, SEXP RHO) {
  // fdef1 = ld fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fdef2 = force? fdef1
  Rsh_Fir_reg_fdef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef1_);
  // checkMissing(fdef2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_fdef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return fdef2
  return Rsh_Fir_reg_fdef2_;
}
SEXP Rsh_Fir_user_promise_inner910976503_1(SEXP CCP, SEXP RHO) {
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_user_promise_inner910976503_2(SEXP CCP, SEXP RHO) {
  // fenv = ld fenv
  Rsh_Fir_reg_fenv = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // fenv1 = force? fenv
  Rsh_Fir_reg_fenv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fenv);
  // checkMissing(fenv1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_fenv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return fenv1
  return Rsh_Fir_reg_fenv1_;
}
SEXP Rsh_Fir_user_promise_inner910976503_3(SEXP CCP, SEXP RHO) {
  // fdef3 = ld fdef
  Rsh_Fir_reg_fdef3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fdef4 = force? fdef3
  Rsh_Fir_reg_fdef4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef3_);
  // checkMissing(fdef4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_fdef4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return fdef4
  return Rsh_Fir_reg_fdef4_;
}
SEXP Rsh_Fir_user_promise_inner910976503_4(SEXP CCP, SEXP RHO) {
  // fenv2 = ld fenv
  Rsh_Fir_reg_fenv2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // fenv3 = force? fenv2
  Rsh_Fir_reg_fenv3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fenv2_);
  // checkMissing(fenv3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fenv3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return fenv3
  return Rsh_Fir_reg_fenv3_;
}
SEXP Rsh_Fir_user_promise_inner910976503_5(SEXP CCP, SEXP RHO) {
  // mtable = ld mtable
  Rsh_Fir_reg_mtable = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // mtable1 = force? mtable
  Rsh_Fir_reg_mtable1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtable);
  // checkMissing(mtable1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_mtable1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return mtable1
  return Rsh_Fir_reg_mtable1_;
}
SEXP Rsh_Fir_user_promise_inner910976503_6(SEXP CCP, SEXP RHO) {
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return n6
  return Rsh_Fir_reg_n6_;
}
SEXP Rsh_Fir_user_promise_inner910976503_7(SEXP CCP, SEXP RHO) {
  // signames = ld signames
  Rsh_Fir_reg_signames = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // signames1 = force? signames
  Rsh_Fir_reg_signames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signames);
  // checkMissing(signames1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_signames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return signames1
  return Rsh_Fir_reg_signames1_;
}
SEXP Rsh_Fir_user_promise_inner910976503_8(SEXP CCP, SEXP RHO) {
  // fenv4 = ld fenv
  Rsh_Fir_reg_fenv4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // fenv5 = force? fenv4
  Rsh_Fir_reg_fenv5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fenv4_);
  // checkMissing(fenv5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_fenv5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return fenv5
  return Rsh_Fir_reg_fenv5_;
}
SEXP Rsh_Fir_user_promise_inner910976503_9(SEXP CCP, SEXP RHO) {
  // mtable2 = ld mtable
  Rsh_Fir_reg_mtable2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // mtable3 = force? mtable2
  Rsh_Fir_reg_mtable3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mtable2_);
  // checkMissing(mtable3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_mtable3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return mtable3
  return Rsh_Fir_reg_mtable3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
