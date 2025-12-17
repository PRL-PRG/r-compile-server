#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner905672623_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner905672623_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner905672623_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner905672623_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner905672623_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner905672623_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO);
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
  // r = clos inner905672623
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner905672623_, RHO, CCP);
  // st CRAN_Rd_xref_reverse_dependencies = r
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
SEXP Rsh_Fir_user_function_inner905672623_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner905672623 dynamic dispatch ([packages, db, details])

  return Rsh_Fir_user_version_inner905672623_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner905672623_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner905672623 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner905672623/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_packages;  // packages
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_details;  // details
  SEXP Rsh_Fir_reg_db_isMissing;  // db_isMissing
  SEXP Rsh_Fir_reg_db_orDefault;  // db_orDefault
  SEXP Rsh_Fir_reg_details_isMissing;  // details_isMissing
  SEXP Rsh_Fir_reg_details_orDefault;  // details_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_db2_;  // db2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_CRAN_Rd_xref_db_with_expansions;  // CRAN_Rd_xref_db_with_expansions
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_split_data_frame;  // split_data_frame
  SEXP Rsh_Fir_reg_db3_;  // db3
  SEXP Rsh_Fir_reg_db4_;  // db4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_db5_;  // db5
  SEXP Rsh_Fir_reg_db6_;  // db6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_packages1_;  // packages1
  SEXP Rsh_Fir_reg_packages2_;  // packages2
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_details1_;  // details1
  SEXP Rsh_Fir_reg_details2_;  // details2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3

  // Bind parameters
  Rsh_Fir_reg_packages = PARAMS[0];
  Rsh_Fir_reg_db = PARAMS[1];
  Rsh_Fir_reg_details = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st packages = packages
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_packages, RHO);
  (void)(Rsh_Fir_reg_packages);
  // db_isMissing = missing.0(db)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_db;
  Rsh_Fir_reg_db_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if db_isMissing then L0(NULL) else L0(db)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_db_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_db_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(db)
    Rsh_Fir_reg_db_orDefault = Rsh_Fir_reg_db;
    goto L0_;
  }

L0_:;
  // st db = db_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_db_orDefault, RHO);
  (void)(Rsh_Fir_reg_db_orDefault);
  // details_isMissing = missing.0(details)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_details;
  Rsh_Fir_reg_details_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if details_isMissing then L1(FALSE) else L1(details)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_details_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_details_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(details)
    Rsh_Fir_reg_details_orDefault = Rsh_Fir_reg_details;
    goto L1_;
  }

L1_:;
  // st details = details_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_details_orDefault, RHO);
  (void)(Rsh_Fir_reg_details_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L11() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // split_data_frame = ldf `split.data.frame`
  Rsh_Fir_reg_split_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L5_:;
  // st y = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // details1 = ld details
  Rsh_Fir_reg_details1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

L8_:;
  // db1 = ld db
  Rsh_Fir_reg_db1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r = dyn base(<sym db>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 1 [db1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_db1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // db2 = force? db1
  Rsh_Fir_reg_db2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db1_);
  // checkMissing(db2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_db2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `==`(db2, NULL)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_db2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L2(c)
  // L2(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L2_;

L11_:;
  // CRAN_Rd_xref_db_with_expansions = ldf CRAN_Rd_xref_db_with_expansions
  Rsh_Fir_reg_CRAN_Rd_xref_db_with_expansions = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r2 = dyn CRAN_Rd_xref_db_with_expansions()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_CRAN_Rd_xref_db_with_expansions, 0, NULL, NULL, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // st db = r2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // goto L4()
  // L4()
  goto L4_;

D3_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   db3 = ld db;
  //   db4 = force? db3;
  //   checkMissing(db4);
  //   return db4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner905672623_, CCP, RHO);
  // p1 = prom<V +>{
  //   db5 = ld db;
  //   db6 = force? db5;
  //   checkMissing(db6);
  //   c2 = `is.object`(db6);
  //   if c2 then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", db6);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   __ = ldf `[` in base;
  //   r5 = dyn __(db6, <missing>, "T_Package");
  //   goto L0(r5);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner905672623_1, CCP, RHO);
  // r7 = dyn split_data_frame(p, p1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split_data_frame, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // c3 = `is.object`(r7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c3 then L17() else L18(r7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L17()
    goto L17_;
  } else {
  // L18(r7)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    goto L18_;
  }

L17_:;
  // dr2 = tryDispatchBuiltin.1("[", r7)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L19() else L18(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L19()
    goto L19_;
  } else {
  // L18(dr2)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr2_;
    goto L18_;
  }

L18_:;
  // packages1 = ld packages
  Rsh_Fir_reg_packages1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L19_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L5(dx2)
  // L5(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

D5_:;
  // deopt 15 [r9, packages1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_packages1_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // packages2 = force? packages1
  Rsh_Fir_reg_packages2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packages1_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r10 = dyn __1(r9, packages2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_packages2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L5_;

D6_:;
  // deopt 19 [details1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_details1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // details2 = force? details1
  Rsh_Fir_reg_details2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_details1_);
  // checkMissing(details2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_details2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r11 = `!`(details2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_details2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c4 then L22() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L22()
    goto L22_;
  } else {
  // L6()
    goto L6_;
  }

L22_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p2 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner905672623_2, CCP, RHO);
  // p3 = prom<V +>{
  //   r13 = clos inner3708401697;
  //   return r13;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner905672623_3, CCP, RHO);
  // r15 = dyn lapply(p2, p3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

D8_:;
  // deopt 26 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // st y = r15
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L7()
  // L7()
  goto L7_;

D9_:;
  // deopt 30 [y2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L26_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y3
  return Rsh_Fir_reg_y3_;
}
SEXP Rsh_Fir_user_promise_inner905672623_(SEXP CCP, SEXP RHO) {
  // db3 = ld db
  Rsh_Fir_reg_db3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // db4 = force? db3
  Rsh_Fir_reg_db4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db3_);
  // checkMissing(db4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_db4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return db4
  return Rsh_Fir_reg_db4_;
}
SEXP Rsh_Fir_user_promise_inner905672623_1(SEXP CCP, SEXP RHO) {
  // db5 = ld db
  Rsh_Fir_reg_db5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // db6 = force? db5
  Rsh_Fir_reg_db6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db5_);
  // checkMissing(db6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_db6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(db6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_db6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", db6)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_db6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn __(db6, <missing>, "T_Package")
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_db6_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner905672623_2(SEXP CCP, SEXP RHO) {
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_inner905672623_3(SEXP CCP, SEXP RHO) {
  // r13 = clos inner3708401697
  Rsh_Fir_reg_r13_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r13
  return Rsh_Fir_reg_r13_;
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
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r2_1;  // r2

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   e1 = ld e;
  //   e2 = force? e1;
  //   checkMissing(e2);
  //   c = `is.object`(e2);
  //   if c then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", e2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   __ = ldf `[` in base;
  //   r = dyn __(e2, <missing>, "S_Package");
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, CCP, RHO);
  // r2 = dyn unique(p)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO) {
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c = `is.object`(e2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_e2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("[", e2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_e2_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r = dyn __(e2, <missing>, "S_Package")
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_e2_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
