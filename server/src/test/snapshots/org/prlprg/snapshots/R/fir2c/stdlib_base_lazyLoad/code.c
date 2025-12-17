#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner477394654_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner477394654_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner477394654_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner477394654_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner477394654_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner477394654_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2058174622_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2058174622_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner477394654
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner477394654_, RHO, CCP);
  // st lazyLoad = r
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
SEXP Rsh_Fir_user_function_inner477394654_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner477394654 dynamic dispatch ([filebase, envir, filter])

  return Rsh_Fir_user_version_inner477394654_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner477394654_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner477394654 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner477394654/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_filebase;  // filebase
  SEXP Rsh_Fir_reg_envir;  // envir
  SEXP Rsh_Fir_reg_filter;  // filter
  SEXP Rsh_Fir_reg_envir_isMissing;  // envir_isMissing
  SEXP Rsh_Fir_reg_envir_orDefault;  // envir_orDefault
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_lazyLoadDBexec;  // lazyLoadDBexec
  SEXP Rsh_Fir_reg_filebase1_;  // filebase1
  SEXP Rsh_Fir_reg_filebase2_;  // filebase2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_fun;  // fun
  SEXP Rsh_Fir_reg_fun1_;  // fun1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_filter1_;  // filter1
  SEXP Rsh_Fir_reg_filter2_;  // filter2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_filebase = PARAMS[0];
  Rsh_Fir_reg_envir = PARAMS[1];
  Rsh_Fir_reg_filter = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st filebase = filebase
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_filebase, RHO);
  (void)(Rsh_Fir_reg_filebase);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if envir_isMissing then L0() else L1(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner477394654_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // st filter = filter
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_filter, RHO);
  (void)(Rsh_Fir_reg_filter);
  // r2 = clos inner2058174622
  Rsh_Fir_reg_r2_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2058174622_, RHO, CCP);
  // st fun = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // lazyLoadDBexec = ldf lazyLoadDBexec
  Rsh_Fir_reg_lazyLoadDBexec = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   filebase1 = ld filebase;
  //   filebase2 = force? filebase1;
  //   checkMissing(filebase2);
  //   return filebase2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner477394654_1, CCP, RHO);
  // p2 = prom<V +>{
  //   fun = ld fun;
  //   fun1 = force? fun;
  //   checkMissing(fun1);
  //   return fun1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner477394654_2, CCP, RHO);
  // p3 = prom<V +>{
  //   filter1 = ld filter;
  //   filter2 = force? filter1;
  //   checkMissing(filter2);
  //   return filter2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner477394654_3, CCP, RHO);
  // r6 = dyn lazyLoadDBexec(p1, p2, p3)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lazyLoadDBexec, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 8 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner477394654_(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner477394654_1(SEXP CCP, SEXP RHO) {
  // filebase1 = ld filebase
  Rsh_Fir_reg_filebase1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // filebase2 = force? filebase1
  Rsh_Fir_reg_filebase2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filebase1_);
  // checkMissing(filebase2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_filebase2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return filebase2
  return Rsh_Fir_reg_filebase2_;
}
SEXP Rsh_Fir_user_promise_inner477394654_2(SEXP CCP, SEXP RHO) {
  // fun = ld fun
  Rsh_Fir_reg_fun = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fun1 = force? fun
  Rsh_Fir_reg_fun1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun);
  // checkMissing(fun1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_fun1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return fun1
  return Rsh_Fir_reg_fun1_;
}
SEXP Rsh_Fir_user_promise_inner477394654_3(SEXP CCP, SEXP RHO) {
  // filter1 = ld filter
  Rsh_Fir_reg_filter1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // filter2 = force? filter1
  Rsh_Fir_reg_filter2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filter1_);
  // checkMissing(filter2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_filter2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return filter2
  return Rsh_Fir_reg_filter2_;
}
SEXP Rsh_Fir_user_function_inner2058174622_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2058174622 dynamic dispatch ([db])

  return Rsh_Fir_user_version_inner2058174622_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2058174622_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2058174622 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2058174622/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_db2_;  // db2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_db4_;  // db4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_db5_;  // db5
  SEXP Rsh_Fir_reg_db6_;  // db6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_db8_;  // db8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_vars;  // vars
  SEXP Rsh_Fir_reg_vars1_;  // vars1
  SEXP Rsh_Fir_reg_vals;  // vals
  SEXP Rsh_Fir_reg_vals1_;  // vals1
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_db9_;  // db9
  SEXP Rsh_Fir_reg_db10_;  // db10
  SEXP Rsh_Fir_reg_envir1;  // envir
  SEXP Rsh_Fir_reg_envir1_;  // envir1
  SEXP Rsh_Fir_reg_makeLazy;  // makeLazy
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg_db = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st db = db
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_db, RHO);
  (void)(Rsh_Fir_reg_db);
  // db1 = ld db
  Rsh_Fir_reg_db1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // st expr = r3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_1;

D0_:;
  // deopt 0 [db1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_db1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // db2 = force? db1
  Rsh_Fir_reg_db2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db1_);
  // checkMissing(db2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_db2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(db2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_db2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L4() else L5(db2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L5(db2)
    Rsh_Fir_reg_db4_ = Rsh_Fir_reg_db2_;
    goto L5_;
  }

L3_:;
  // st vals = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // db5 = ld db
  Rsh_Fir_reg_db5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L4_:;
  // dr = tryDispatchBuiltin.1("$", db2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_db2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_db4_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // r = `$`(db4, <sym vals>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_db4_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2;
  goto L3_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D1_:;
  // deopt 4 [db5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_db5_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // db6 = force? db5
  Rsh_Fir_reg_db6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db5_);
  // checkMissing(db6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_db6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(db6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_db6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L9() else L10(db6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L9()
    goto L9_;
  } else {
  // L10(db6)
    Rsh_Fir_reg_db8_ = Rsh_Fir_reg_db6_;
    goto L10_;
  }

L8_:;
  // st vars = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym = ldf quote
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf quote in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L9_:;
  // dr2 = tryDispatchBuiltin.1("$", db6)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_db6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc1 then L11() else L10(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr2)
    Rsh_Fir_reg_db8_ = Rsh_Fir_reg_dr2_;
    goto L10_;
  }

L10_:;
  // r1 = `$`(db8, <sym vars>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_db8_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L8(r1)
  // L8(r1)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r1_;
  goto L8_;

L11_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L8(dx2)
  // L8(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L12_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r4 = dyn quote(<lang lazyLoadDBfetch(key, datafile, compressed, envhook)>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L13_:;
  // r2 = dyn base(<lang lazyLoadDBfetch(key, datafile, compressed, envhook)>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L14_:;
  // vars = ld vars
  Rsh_Fir_reg_vars = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L15_:;
  // r5 = dyn base1(<lang makeLazy(vars, vals, expr, db, envir)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_;
  goto L1_;

D2_:;
  // deopt 14 [vars]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_vars;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // vars1 = force? vars
  Rsh_Fir_reg_vars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vars);
  // checkMissing(vars1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_vars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // vals = ld vals
  Rsh_Fir_reg_vals = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

D3_:;
  // deopt 16 [vals]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_vals;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // vals1 = force? vals
  Rsh_Fir_reg_vals1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vals);
  // checkMissing(vals1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_vals1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // expr = ld expr
  Rsh_Fir_reg_expr = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 18 [expr]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_expr;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // expr1 = force? expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr);
  // checkMissing(expr1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_expr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // db9 = ld db
  Rsh_Fir_reg_db9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D5_:;
  // deopt 20 [db9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_db9_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // db10 = force? db9
  Rsh_Fir_reg_db10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db9_);
  // checkMissing(db10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_db10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // envir = ld envir
  Rsh_Fir_reg_envir1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

D6_:;
  // deopt 22 [envir]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_envir1;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // envir1 = force? envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1);
  // checkMissing(envir1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_envir1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // makeLazy = ldf makeLazy in base
  Rsh_Fir_reg_makeLazy = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r7 = dyn makeLazy(vars1, vals1, expr1, db10, envir1)
  SEXP Rsh_Fir_array_args27[5];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_vars1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_vals1_;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_expr1_;
  Rsh_Fir_array_args27[3] = Rsh_Fir_reg_db10_;
  Rsh_Fir_array_args27[4] = Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_array_arg_names4[5];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_makeLazy, 5, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 25 [r7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
