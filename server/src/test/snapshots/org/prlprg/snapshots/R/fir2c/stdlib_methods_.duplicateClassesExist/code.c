#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2015100991_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2015100991_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2015100991_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2015100991_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2015100991_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2015100991
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2015100991_, RHO, CCP);
  // st `.duplicateClassesExist` = r
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
SEXP Rsh_Fir_user_function_inner2015100991_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2015100991 dynamic dispatch ([on])

  return Rsh_Fir_user_version_inner2015100991_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2015100991_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2015100991 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2015100991/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_on;  // on
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg__classTable;  // _classTable
  SEXP Rsh_Fir_reg__classTable1_;  // _classTable1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_nargs;  // nargs
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_on1_;  // on1
  SEXP Rsh_Fir_reg_on2_;  // on2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg__classTable2_;  // _classTable2
  SEXP Rsh_Fir_reg__classTable3_;  // _classTable3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1

  // Bind parameters
  Rsh_Fir_reg_on = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st on = on
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_on, RHO);
  (void)(Rsh_Fir_reg_on);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L8() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   _classTable = ld `.classTable`;
  //   _classTable1 = force? _classTable;
  //   checkMissing(_classTable1);
  //   return _classTable1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2015100991_, CCP, RHO);
  // r1 = dyn get[, envir]("#HAS_DUPLICATE_CLASS_NAMES", p)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st value = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf nargs
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf nargs in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
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
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r4 = dyn nargs()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L8_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   on1 = ld on;
  //   on2 = force? on1;
  //   checkMissing(on2);
  //   return on2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2015100991_1, CCP, RHO);
  // p2 = prom<V +>{
  //   _classTable2 = ld `.classTable`;
  //   _classTable3 = force? _classTable2;
  //   checkMissing(_classTable3);
  //   return _classTable3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2015100991_2, CCP, RHO);
  // r7 = dyn assign[, , envir]("#HAS_DUPLICATE_CLASS_NAMES", p1, p2)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L2()
  // L2()
  goto L2_;

D5_:;
  // deopt 20 [value]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner2015100991_(SEXP CCP, SEXP RHO) {
  // _classTable = ld `.classTable`
  Rsh_Fir_reg__classTable = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _classTable1 = force? _classTable
  Rsh_Fir_reg__classTable1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__classTable);
  // checkMissing(_classTable1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg__classTable1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return _classTable1
  return Rsh_Fir_reg__classTable1_;
}
SEXP Rsh_Fir_user_promise_inner2015100991_1(SEXP CCP, SEXP RHO) {
  // on1 = ld on
  Rsh_Fir_reg_on1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // on2 = force? on1
  Rsh_Fir_reg_on2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_on1_);
  // checkMissing(on2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_on2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return on2
  return Rsh_Fir_reg_on2_;
}
SEXP Rsh_Fir_user_promise_inner2015100991_2(SEXP CCP, SEXP RHO) {
  // _classTable2 = ld `.classTable`
  Rsh_Fir_reg__classTable2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _classTable3 = force? _classTable2
  Rsh_Fir_reg__classTable3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__classTable2_);
  // checkMissing(_classTable3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg__classTable3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return _classTable3
  return Rsh_Fir_reg__classTable3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
