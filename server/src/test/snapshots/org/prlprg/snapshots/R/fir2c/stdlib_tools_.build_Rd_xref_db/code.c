#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1827804468_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1827804468_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1827804468_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1827804468_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1827804468_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1827804468_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1827804468_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1827804468
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1827804468_, RHO, CCP);
  // st `.build_Rd_xref_db` = r
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
SEXP Rsh_Fir_user_function_inner1827804468_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1827804468 dynamic dispatch ([package, dir, `lib.loc`])

  return Rsh_Fir_user_version_inner1827804468_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1827804468_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1827804468 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1827804468/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_lib_loc;  // lib_loc
  SEXP Rsh_Fir_reg_lib_loc_isMissing;  // lib_loc_isMissing
  SEXP Rsh_Fir_reg_lib_loc_orDefault;  // lib_loc_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_Rd_db;  // Rd_db
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_lib_loc1_;  // lib_loc1
  SEXP Rsh_Fir_reg_lib_loc2_;  // lib_loc2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_Rd_db1_;  // Rd_db1
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_dir2_;  // dir2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg__Rd_get_xrefs;  // _Rd_get_xrefs
  SEXP Rsh_Fir_reg__Rd_get_xrefs1_;  // _Rd_get_xrefs1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r12_;  // r12

  // Bind parameters
  Rsh_Fir_reg_package = PARAMS[0];
  Rsh_Fir_reg_dir = PARAMS[1];
  Rsh_Fir_reg_lib_loc = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st package = package
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_package, RHO);
  (void)(Rsh_Fir_reg_package);
  // st dir = dir
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dir, RHO);
  (void)(Rsh_Fir_reg_dir);
  // lib_loc_isMissing = missing.0(lib_loc)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lib_loc;
  Rsh_Fir_reg_lib_loc_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lib_loc_isMissing then L0(NULL) else L0(lib_loc)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lib_loc_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(lib_loc)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_Fir_reg_lib_loc;
    goto L0_;
  }

L0_:;
  // st `lib.loc` = lib_loc_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_lib_loc_orDefault, RHO);
  (void)(Rsh_Fir_reg_lib_loc_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L6() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // Rd_db1 = ldf Rd_db
  Rsh_Fir_reg_Rd_db1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L3_:;
  // st db = r7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L4_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn missing(<sym package>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L5_:;
  // r = dyn base(<sym package>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L6_:;
  // Rd_db = ldf Rd_db
  Rsh_Fir_reg_Rd_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   package1 = ld package;
  //   package2 = force? package1;
  //   checkMissing(package2);
  //   return package2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827804468_, CCP, RHO);
  // p1 = prom<V +>{
  //   lib_loc1 = ld `lib.loc`;
  //   lib_loc2 = force? lib_loc1;
  //   checkMissing(lib_loc2);
  //   return lib_loc2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827804468_1, CCP, RHO);
  // r6 = dyn Rd_db[, `lib.loc`](p, p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Rd_db, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 9 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   dir1 = ld dir;
  //   dir2 = force? dir1;
  //   checkMissing(dir2);
  //   return dir2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827804468_2, CCP, RHO);
  // r9 = dyn Rd_db1[dir](p2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Rd_db1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 14 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r9_;
  goto L3_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   db = ld db;
  //   db1 = force? db;
  //   checkMissing(db1);
  //   return db1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827804468_3, CCP, RHO);
  // p4 = prom<V +>{
  //   _Rd_get_xrefs = ld `.Rd_get_xrefs`;
  //   _Rd_get_xrefs1 = force? _Rd_get_xrefs;
  //   checkMissing(_Rd_get_xrefs1);
  //   return _Rd_get_xrefs1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1827804468_4, CCP, RHO);
  // r12 = dyn lapply(p3, p4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 20 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner1827804468_(SEXP CCP, SEXP RHO) {
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return package2
  return Rsh_Fir_reg_package2_;
}
SEXP Rsh_Fir_user_promise_inner1827804468_1(SEXP CCP, SEXP RHO) {
  // lib_loc1 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // lib_loc2 = force? lib_loc1
  Rsh_Fir_reg_lib_loc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc1_);
  // checkMissing(lib_loc2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_lib_loc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return lib_loc2
  return Rsh_Fir_reg_lib_loc2_;
}
SEXP Rsh_Fir_user_promise_inner1827804468_2(SEXP CCP, SEXP RHO) {
  // dir1 = ld dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dir2 = force? dir1
  Rsh_Fir_reg_dir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir1_);
  // checkMissing(dir2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return dir2
  return Rsh_Fir_reg_dir2_;
}
SEXP Rsh_Fir_user_promise_inner1827804468_3(SEXP CCP, SEXP RHO) {
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return db1
  return Rsh_Fir_reg_db1_;
}
SEXP Rsh_Fir_user_promise_inner1827804468_4(SEXP CCP, SEXP RHO) {
  // _Rd_get_xrefs = ld `.Rd_get_xrefs`
  Rsh_Fir_reg__Rd_get_xrefs = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // _Rd_get_xrefs1 = force? _Rd_get_xrefs
  Rsh_Fir_reg__Rd_get_xrefs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Rd_get_xrefs);
  // checkMissing(_Rd_get_xrefs1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg__Rd_get_xrefs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return _Rd_get_xrefs1
  return Rsh_Fir_reg__Rd_get_xrefs1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
