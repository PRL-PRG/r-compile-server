#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner475717200_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner475717200_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner475717200_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner475717200_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner475717200_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner475717200_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner475717200
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner475717200_, RHO, CCP);
  // st analyze_licenses_in_repository = r
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
SEXP Rsh_Fir_user_function_inner475717200_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner475717200 dynamic dispatch ([dir, unpacked, full])

  return Rsh_Fir_user_version_inner475717200_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner475717200_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner475717200 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner475717200/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_unpacked;  // unpacked
  SEXP Rsh_Fir_reg_full;  // full
  SEXP Rsh_Fir_reg_unpacked_isMissing;  // unpacked_isMissing
  SEXP Rsh_Fir_reg_unpacked_orDefault;  // unpacked_orDefault
  SEXP Rsh_Fir_reg_full_isMissing;  // full_isMissing
  SEXP Rsh_Fir_reg_full_orDefault;  // full_orDefault
  SEXP Rsh_Fir_reg_build_license_db;  // build_license_db
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_dir2_;  // dir2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_unpacked1_;  // unpacked1
  SEXP Rsh_Fir_reg_unpacked2_;  // unpacked2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_full1_;  // full1
  SEXP Rsh_Fir_reg_full2_;  // full2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__remove_stale_dups;  // _remove_stale_dups
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_analyze_licenses_in_license_db;  // analyze_licenses_in_license_db
  SEXP Rsh_Fir_reg_db2_;  // db2
  SEXP Rsh_Fir_reg_db3_;  // db3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_dir = PARAMS[0];
  Rsh_Fir_reg_unpacked = PARAMS[1];
  Rsh_Fir_reg_full = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st dir = dir
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dir, RHO);
  (void)(Rsh_Fir_reg_dir);
  // unpacked_isMissing = missing.0(unpacked)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_unpacked;
  Rsh_Fir_reg_unpacked_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if unpacked_isMissing then L0(FALSE) else L0(unpacked)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unpacked_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_unpacked_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(unpacked)
    Rsh_Fir_reg_unpacked_orDefault = Rsh_Fir_reg_unpacked;
    goto L0_;
  }

L0_:;
  // st unpacked = unpacked_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_unpacked_orDefault, RHO);
  (void)(Rsh_Fir_reg_unpacked_orDefault);
  // full_isMissing = missing.0(full)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_full;
  Rsh_Fir_reg_full_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if full_isMissing then L1(TRUE) else L1(full)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_full_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_full_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(full)
    Rsh_Fir_reg_full_orDefault = Rsh_Fir_reg_full;
    goto L1_;
  }

L1_:;
  // st full = full_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_full_orDefault, RHO);
  (void)(Rsh_Fir_reg_full_orDefault);
  // build_license_db = ldf build_license_db
  Rsh_Fir_reg_build_license_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // analyze_licenses_in_license_db = ldf analyze_licenses_in_license_db
  Rsh_Fir_reg_analyze_licenses_in_license_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   dir1 = ld dir;
  //   dir2 = force? dir1;
  //   checkMissing(dir2);
  //   return dir2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner475717200_, CCP, RHO);
  // p1 = prom<V +>{
  //   unpacked1 = ld unpacked;
  //   unpacked2 = force? unpacked1;
  //   checkMissing(unpacked2);
  //   return unpacked2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner475717200_1, CCP, RHO);
  // r2 = dyn build_license_db(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_build_license_db, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // st db = r2
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // full1 = ld full
  Rsh_Fir_reg_full1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 6 [full1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_full1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // full2 = force? full1
  Rsh_Fir_reg_full2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_full1_);
  // checkMissing(full2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_full2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // r3 = `!`(full2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_full2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L7() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L7()
    goto L7_;
  } else {
  // L2()
    goto L2_;
  }

L7_:;
  // _remove_stale_dups = ldf `.remove_stale_dups`
  Rsh_Fir_reg__remove_stale_dups = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p2 = prom<V +>{
  //   db = ld db;
  //   db1 = force? db;
  //   checkMissing(db1);
  //   return db1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner475717200_2, CCP, RHO);
  // r5 = dyn _remove_stale_dups(p2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__remove_stale_dups, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // st db = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // goto L3()
  // L3()
  goto L3_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p3 = prom<V +>{
  //   db2 = ld db;
  //   db3 = force? db2;
  //   checkMissing(db3);
  //   return db3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner475717200_3, CCP, RHO);
  // r8 = dyn analyze_licenses_in_license_db(p3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_analyze_licenses_in_license_db, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner475717200_(SEXP CCP, SEXP RHO) {
  // dir1 = ld dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dir2 = force? dir1
  Rsh_Fir_reg_dir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir1_);
  // checkMissing(dir2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return dir2
  return Rsh_Fir_reg_dir2_;
}
SEXP Rsh_Fir_user_promise_inner475717200_1(SEXP CCP, SEXP RHO) {
  // unpacked1 = ld unpacked
  Rsh_Fir_reg_unpacked1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // unpacked2 = force? unpacked1
  Rsh_Fir_reg_unpacked2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unpacked1_);
  // checkMissing(unpacked2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_unpacked2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return unpacked2
  return Rsh_Fir_reg_unpacked2_;
}
SEXP Rsh_Fir_user_promise_inner475717200_2(SEXP CCP, SEXP RHO) {
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return db1
  return Rsh_Fir_reg_db1_;
}
SEXP Rsh_Fir_user_promise_inner475717200_3(SEXP CCP, SEXP RHO) {
  // db2 = ld db
  Rsh_Fir_reg_db2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // db3 = force? db2
  Rsh_Fir_reg_db3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db2_);
  // checkMissing(db3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_db3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return db3
  return Rsh_Fir_reg_db3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
