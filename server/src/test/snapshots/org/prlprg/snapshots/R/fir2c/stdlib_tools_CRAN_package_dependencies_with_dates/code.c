#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3534892818_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3534892818_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3534892818_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3534892818_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner3534892818
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3534892818_, RHO, CCP);
  // st CRAN_package_dependencies_with_dates = r
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
SEXP Rsh_Fir_user_function_inner3534892818_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3534892818 dynamic dispatch ([packages, which, recursive, db])

  return Rsh_Fir_user_version_inner3534892818_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3534892818_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3534892818 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3534892818/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_packages;  // packages
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_recursive;  // recursive
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_which_isMissing;  // which_isMissing
  SEXP Rsh_Fir_reg_which_orDefault;  // which_orDefault
  SEXP Rsh_Fir_reg_recursive_isMissing;  // recursive_isMissing
  SEXP Rsh_Fir_reg_recursive_orDefault;  // recursive_orDefault
  SEXP Rsh_Fir_reg_db_isMissing;  // db_isMissing
  SEXP Rsh_Fir_reg_db_orDefault;  // db_orDefault
  SEXP Rsh_Fir_reg_CRAN_package_db;  // CRAN_package_db
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__get_standard_repository_URLs;  // _get_standard_repository_URLs
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_repos;  // repos
  SEXP Rsh_Fir_reg_repos1_;  // repos1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_package_dependencies;  // package_dependencies
  SEXP Rsh_Fir_reg_packages1_;  // packages1
  SEXP Rsh_Fir_reg_packages2_;  // packages2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_which1_;  // which1
  SEXP Rsh_Fir_reg_which2_;  // which2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_recursive1_;  // recursive1
  SEXP Rsh_Fir_reg_recursive2_;  // recursive2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg__get_standard_package_names;  // _get_standard_package_names
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r23_;  // r23

  // Bind parameters
  Rsh_Fir_reg_packages = PARAMS[0];
  Rsh_Fir_reg_which = PARAMS[1];
  Rsh_Fir_reg_recursive = PARAMS[2];
  Rsh_Fir_reg_db = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st packages = packages
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_packages, RHO);
  (void)(Rsh_Fir_reg_packages);
  // which_isMissing = missing.0(which)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_which;
  Rsh_Fir_reg_which_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if which_isMissing then L0("most") else L0(which)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_which_isMissing)) {
  // L0("most")
    Rsh_Fir_reg_which_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(which)
    Rsh_Fir_reg_which_orDefault = Rsh_Fir_reg_which;
    goto L0_;
  }

L0_:;
  // st which = which_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_which_orDefault, RHO);
  (void)(Rsh_Fir_reg_which_orDefault);
  // recursive_isMissing = missing.0(recursive)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_recursive;
  Rsh_Fir_reg_recursive_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if recursive_isMissing then L1(FALSE) else L1(recursive)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_recursive_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_recursive_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(recursive)
    Rsh_Fir_reg_recursive_orDefault = Rsh_Fir_reg_recursive;
    goto L1_;
  }

L1_:;
  // st recursive = recursive_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_recursive_orDefault, RHO);
  (void)(Rsh_Fir_reg_recursive_orDefault);
  // db_isMissing = missing.0(db)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_db;
  Rsh_Fir_reg_db_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if db_isMissing then L2() else L3(db)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_db_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(db)
    Rsh_Fir_reg_db_orDefault = Rsh_Fir_reg_db;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   CRAN_package_db = ldf CRAN_package_db;
  //   r = dyn CRAN_package_db();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_db_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st db = db_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_db_orDefault, RHO);
  (void)(Rsh_Fir_reg_db_orDefault);
  // _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`
  Rsh_Fir_reg__get_standard_repository_URLs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // st base_packages = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r2 = dyn _get_standard_repository_URLs()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__get_standard_repository_URLs, 0, NULL, NULL, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 2 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // st repos = r2
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r3 = dyn __("utils", "available.packages")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // checkFun.0(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args4));
  // r4 = r3 as cls
  Rsh_Fir_reg_r4_ = Rsh_Fir_cast(Rsh_Fir_reg_r3_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p1 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   list = ldf list in base;
  //   r7 = dyn list();
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base();
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_1, CCP, RHO);
  // p2 = prom<V +>{
  //   repos = ld repos;
  //   repos1 = force? repos;
  //   checkMissing(repos1);
  //   return repos1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_2, CCP, RHO);
  // r10 = dyn r4[filters, repos](p1, p2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r4_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // st a = r10
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // st pb = NULL
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 18), RHO);
  (void)(Rsh_const(CCP, 18));
  // package_dependencies = ldf package_dependencies
  Rsh_Fir_reg_package_dependencies = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p3 = prom<V +>{
  //   packages1 = ld packages;
  //   packages2 = force? packages1;
  //   checkMissing(packages2);
  //   return packages2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_3, CCP, RHO);
  // p4 = prom<V +>{
  //   a = ld a;
  //   a1 = force? a;
  //   checkMissing(a1);
  //   return a1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_4, CCP, RHO);
  // p5 = prom<V +>{
  //   which1 = ld which;
  //   which2 = force? which1;
  //   checkMissing(which2);
  //   return which2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_5, CCP, RHO);
  // p6 = prom<V +>{
  //   recursive1 = ld recursive;
  //   recursive2 = force? recursive1;
  //   checkMissing(recursive2);
  //   return recursive2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_6, CCP, RHO);
  // r15 = dyn package_dependencies[, , which, recursive](p3, p4, p5, p6)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names2[3] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_package_dependencies, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D6()
  // L11()
  goto L11_;

D6_:;
  // deopt 27 [r15]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // st d = r15
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // _get_standard_package_names = ldf `.get_standard_package_names`
  Rsh_Fir_reg__get_standard_package_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L12() else D7()
  // L12()
  goto L12_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r16 = dyn _get_standard_package_names()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__get_standard_package_names, 0, NULL, NULL, CCP, RHO);
  // check L13() else D8()
  // L13()
  goto L13_;

D8_:;
  // deopt 31 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // c = `is.object`(r16)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L14() else L15(r16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L15(r16)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
    goto L15_;
  }

L14_:;
  // dr = tryDispatchBuiltin.1("[[", r16)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L16() else L15(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L16()
    goto L16_;
  } else {
  // L15(dr)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_dr;
    goto L15_;
  }

L15_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r19 = dyn __1(r18, "base")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r19)
  // L4(r19)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r19_;
  goto L4_;

L16_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D9_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p7 = prom<V +>{
  //   d = ld d;
  //   d1 = force? d;
  //   checkMissing(d1);
  //   return d1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_7, CCP, RHO);
  // p8 = prom<V +>{
  //   r21 = clos inner3708401697;
  //   return r21;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3534892818_8, CCP, RHO);
  // r23 = dyn lapply(p7, p8)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 40 [r23]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_(SEXP CCP, SEXP RHO) {
  // CRAN_package_db = ldf CRAN_package_db
  Rsh_Fir_reg_CRAN_package_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r = dyn CRAN_package_db()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_CRAN_package_db, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3534892818_1(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r7 = dyn list()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_2(SEXP CCP, SEXP RHO) {
  // repos = ld repos
  Rsh_Fir_reg_repos = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // repos1 = force? repos
  Rsh_Fir_reg_repos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repos);
  // checkMissing(repos1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_repos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return repos1
  return Rsh_Fir_reg_repos1_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_3(SEXP CCP, SEXP RHO) {
  // packages1 = ld packages
  Rsh_Fir_reg_packages1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // packages2 = force? packages1
  Rsh_Fir_reg_packages2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packages1_);
  // checkMissing(packages2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_packages2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return packages2
  return Rsh_Fir_reg_packages2_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_4(SEXP CCP, SEXP RHO) {
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return a1
  return Rsh_Fir_reg_a1_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_5(SEXP CCP, SEXP RHO) {
  // which1 = ld which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // which2 = force? which1
  Rsh_Fir_reg_which2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which1_);
  // checkMissing(which2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_which2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return which2
  return Rsh_Fir_reg_which2_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_6(SEXP CCP, SEXP RHO) {
  // recursive1 = ld recursive
  Rsh_Fir_reg_recursive1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // recursive2 = force? recursive1
  Rsh_Fir_reg_recursive2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recursive1_);
  // checkMissing(recursive2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_recursive2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return recursive2
  return Rsh_Fir_reg_recursive2_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_7(SEXP CCP, SEXP RHO) {
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return d1
  return Rsh_Fir_reg_d1_;
}
SEXP Rsh_Fir_user_promise_inner3534892818_8(SEXP CCP, SEXP RHO) {
  // r21 = clos inner3708401697
  Rsh_Fir_reg_r21_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r21
  return Rsh_Fir_reg_r21_;
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
  SEXP Rsh_Fir_reg_setdiff;  // setdiff
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_base_packages;  // base_packages
  SEXP Rsh_Fir_reg_base_packages1_;  // base_packages1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_e4_;  // e4
  SEXP Rsh_Fir_reg_db1;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_db4_;  // db4
  SEXP Rsh_Fir_reg_db5_;  // db5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_db7_;  // db7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r16_1;  // r16
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_e5_;  // e5
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_e8_;  // e8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_pb;  // pb
  SEXP Rsh_Fir_reg_pb1_;  // pb1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_BioC_package_db;  // BioC_package_db
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_1;  // r23
  SEXP Rsh_Fir_reg_eb;  // eb
  SEXP Rsh_Fir_reg_eb1_;  // eb1
  SEXP Rsh_Fir_reg_pb2_;  // pb2
  SEXP Rsh_Fir_reg_pb3_;  // pb3
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_pb6_;  // pb6
  SEXP Rsh_Fir_reg_pb7_;  // pb7
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_pb9_;  // pb9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_ib;  // ib
  SEXP Rsh_Fir_reg_ib1_;  // ib1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_eb2_;  // eb2
  SEXP Rsh_Fir_reg_eb3_;  // eb3
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_as_Date;  // as_Date
  SEXP Rsh_Fir_reg_d1;  // d
  SEXP Rsh_Fir_reg_d1_1;  // d1
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_order;  // order
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_p4_1;  // p4
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_list2DF;  // list2DF
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_e9_;  // e9
  SEXP Rsh_Fir_reg_e10_;  // e10
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_e12_;  // e12
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_o;  // o
  SEXP Rsh_Fir_reg_o1_;  // o1
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_d4_;  // d4
  SEXP Rsh_Fir_reg_d5_;  // d5
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_d7_;  // d7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_o2_;  // o2
  SEXP Rsh_Fir_reg_o3_;  // o3
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_list1;  // list
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p5_1;  // p5
  SEXP Rsh_Fir_reg_r46_;  // r46

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // setdiff = ldf setdiff
  Rsh_Fir_reg_setdiff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L0_:;
  // st i = r7
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // db4 = ld db
  Rsh_Fir_reg_db4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L1_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r9 = dyn match(e4, dx1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_e4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L2_:;
  // st d = dx3
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L3_:;
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L38() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // st j = r14
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r16 = dyn any(r14)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

L5_:;
  // goto L15()
  // L15()
  goto L15_;

L6_:;
  // st eb = dx5
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard4 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L7_:;
  // c5 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c5 then L47() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L47()
    goto L47_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L10_:;
  // st ib = r23
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r23_1, RHO);
  (void)(Rsh_Fir_reg_r23_1);
  // pb6 = ld pb
  Rsh_Fir_reg_pb6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L59() else D18()
  // L59()
  goto L59_;

L11_:;
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r25 = dyn match1(eb1, dx7, NA_INT, NULL)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_eb1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L58() else D17()
  // L58()
  goto L58_;

L12_:;
  // l = ld d
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c8 = `is.object`(l)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c8 then L64() else L65(dx9, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L64()
    goto L64_;
  } else {
  // L65(dx9, l)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L65_;
  }

L13_:;
  // st d = dx15
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L68() else D21()
  // L68()
  goto L68_;

L14_:;
  // st e = dx17
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // as_Date = ldf `as.Date`
  Rsh_Fir_reg_as_Date = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   sym = ldf `as.character`;
  //   base = ldf `as.character` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   e1 = ld e;
  //   e2 = force? e1;
  //   checkMissing(e2);
  //   as_character = ldf `as.character` in base;
  //   r2 = dyn as_character(e2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym e>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, CCP, RHO);
  // p1 = prom<V +>{
  //   base_packages = ld base_packages;
  //   base_packages1 = force? base_packages;
  //   checkMissing(base_packages1);
  //   return base_packages1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_1, CCP, RHO);
  // r5 = dyn setdiff(p, p1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setdiff, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 4 [r5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // st e = r5
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // sym1 = ldf match
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base1 = ldf match in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // e3 = ld e
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r6 = dyn base1(<sym e>, <lang `[`(db, , "Package")>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

D2_:;
  // deopt 8 [e3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_e3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // db = ld db
  Rsh_Fir_reg_db1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 10 [db]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_db1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db1);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c = `is.object`(db1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_db1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // dr = tryDispatchBuiltin.1("[", db1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_db1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc then L24() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L24()
    goto L24_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r8 = dyn __(db1, <missing>, "Package")
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_db1_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r8_;
  goto L1_;

L24_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L1_;

D4_:;
  // deopt 19 [r9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r9_;
  goto L0_;

D5_:;
  // deopt 21 [db4]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_db4_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L26_:;
  // db5 = force? db4
  Rsh_Fir_reg_db5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db4_);
  // checkMissing(db5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_db5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(db5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_db5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c1 then L27() else L28(db5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L28(db5)
    Rsh_Fir_reg_db7_ = Rsh_Fir_reg_db5_;
    goto L28_;
  }

L27_:;
  // dr2 = tryDispatchBuiltin.1("[", db5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_db5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc1 then L29() else L28(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr2)
    Rsh_Fir_reg_db7_ = Rsh_Fir_reg_dr2_;
    goto L28_;
  }

L28_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

D6_:;
  // deopt 23 [db7, i]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_db7_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L30_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r10 = dyn __1(db7, i1, "Published")
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_db7_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_1;
  goto L2_;

L31_:;
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L32_:;
  // r11 = dyn base2(<lang `<-`(j, is.na(i))>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

L33_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L35() else D7()
  // L35()
  goto L35_;

L34_:;
  // r13 = dyn base3(<sym i>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L4_;

D7_:;
  // deopt 32 [i2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L35_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r15 = dyn is_na(i3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L36() else D8()
  // L36()
  goto L36_;

D8_:;
  // deopt 35 [r15]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L4(r15)
  // L4(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_1;
  goto L4_;

D9_:;
  // deopt 38 [r16]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L3(r16)
  // L3(r16)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r16_1;
  goto L3_;

L38_:;
  // e5 = ld e
  Rsh_Fir_reg_e5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 39 [e5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L39_:;
  // e6 = force? e5
  Rsh_Fir_reg_e6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e5_);
  // checkMissing(e6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_e6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(e6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_e6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c3 then L40() else L41(e6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L40()
    goto L40_;
  } else {
  // L41(e6)
    Rsh_Fir_reg_e8_ = Rsh_Fir_reg_e6_;
    goto L41_;
  }

L40_:;
  // dr4 = tryDispatchBuiltin.1("[", e6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_e6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc2 then L42() else L41(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L42()
    goto L42_;
  } else {
  // L41(dr4)
    Rsh_Fir_reg_e8_ = Rsh_Fir_reg_dr4_;
    goto L41_;
  }

L41_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

L42_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L6(dx4)
  // L6(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L6_;

D11_:;
  // deopt 41 [e8, j]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_e8_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L43_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r17 = dyn __2(e8, j1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_e8_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r17_;
  goto L6_;

L44_:;
  // pb = ld pb
  Rsh_Fir_reg_pb = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L45_:;
  // r18 = dyn base4(<sym pb>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_1;
  goto L7_;

D12_:;
  // deopt 46 [pb]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_pb;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L46_:;
  // pb1 = force? pb
  Rsh_Fir_reg_pb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pb);
  // checkMissing(pb1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_pb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c4 = `==`(pb1, NULL)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_pb1_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L7(c4)
  // L7(c4)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_c4_;
  goto L7_;

L47_:;
  // BioC_package_db = ldf BioC_package_db
  Rsh_Fir_reg_BioC_package_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

D13_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r20 = dyn BioC_package_db()
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_BioC_package_db, 0, NULL, NULL, CCP, RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

D14_:;
  // deopt 51 [r20]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L49_:;
  // sst pb = r20
  Rsh_Fir_super_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // goto L9()
  // L9()
  goto L9_;

L51_:;
  // eb = ld eb
  Rsh_Fir_reg_eb = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

L52_:;
  // r22 = dyn base5(<sym eb>, <lang `[`(pb, , "Package")>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r23_1 = Rsh_Fir_reg_r22_;
  goto L10_;

D15_:;
  // deopt 57 [eb]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_eb;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L53_:;
  // eb1 = force? eb
  Rsh_Fir_reg_eb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eb);
  // checkMissing(eb1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_eb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // pb2 = ld pb
  Rsh_Fir_reg_pb2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

D16_:;
  // deopt 59 [pb2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_pb2_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L54_:;
  // pb3 = force? pb2
  Rsh_Fir_reg_pb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pb2_);
  // checkMissing(pb3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_pb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(pb3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_pb3_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c6 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // dr6 = tryDispatchBuiltin.1("[", pb3)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_pb3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc3 then L57() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L57()
    goto L57_;
  } else {
  // L56()
    goto L56_;
  }

L56_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r24 = dyn __3(pb3, <missing>, "Package")
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_pb3_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r24_;
  goto L11_;

L57_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L11(dx6)
  // L11(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L11_;

D17_:;
  // deopt 68 [r25]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_r23_1 = Rsh_Fir_reg_r25_;
  goto L10_;

D18_:;
  // deopt 70 [pb6]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_pb6_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L59_:;
  // pb7 = force? pb6
  Rsh_Fir_reg_pb7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pb6_);
  // checkMissing(pb7)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_pb7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(pb7)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_pb7_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c7 then L60() else L61(pb7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L60()
    goto L60_;
  } else {
  // L61(pb7)
    Rsh_Fir_reg_pb9_ = Rsh_Fir_reg_pb7_;
    goto L61_;
  }

L60_:;
  // dr8 = tryDispatchBuiltin.1("[", pb7)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_pb7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc4 then L62() else L61(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L62()
    goto L62_;
  } else {
  // L61(dr8)
    Rsh_Fir_reg_pb9_ = Rsh_Fir_reg_dr8_;
    goto L61_;
  }

L61_:;
  // ib = ld ib
  Rsh_Fir_reg_ib = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L63() else D19()
  // L63()
  goto L63_;

L62_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L12(dx8)
  // L12(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L12_;

D19_:;
  // deopt 72 [pb9, ib]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_pb9_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_ib;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L63_:;
  // ib1 = force? ib
  Rsh_Fir_reg_ib1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ib);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r26 = dyn __4(pb9, ib1, "Date/Publication")
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_pb9_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_ib1_;
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(r26)
  // L12(r26)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r26_;
  goto L12_;

L64_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l, dx9)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args78);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc5 then L66() else L65(dx9, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L66()
    goto L66_;
  } else {
  // L65(dx9, dr10)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr10_;
    goto L65_;
  }

L65_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L67() else D20()
  // L67()
  goto L67_;

L66_:;
  // dx13 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L13(dx13)
  // L13(dx13)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
  goto L13_;

D20_:;
  // deopt 77 [dx11, l2, dx9, j2]
  SEXP Rsh_Fir_array_deopt_stack24[4];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(77, 4, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L67_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r27 = dyn ___(l2, dx9, j3)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L13(r27)
  // L13(r27)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r27_;
  goto L13_;

D21_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // p2 = prom<V +>{
  //   eb2 = ld eb;
  //   eb3 = force? eb2;
  //   checkMissing(eb3);
  //   return eb3;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_2, CCP, RHO);
  // r29 = dyn paste0(p2, "*")
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

D22_:;
  // deopt 85 [r29]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L69_:;
  // l3 = ld e
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // c9 = `is.object`(l3)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c9 then L70() else L71(r29, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L70()
    goto L70_;
  } else {
  // L71(r29, l3)
    Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r29_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L71_;
  }

L70_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l3, r29)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args85[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args85);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc6 then L72() else L71(r29, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L72()
    goto L72_;
  } else {
  // L71(r29, dr12)
    Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r29_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr12_;
    goto L71_;
  }

L71_:;
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L73() else D23()
  // L73()
  goto L73_;

L72_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L14(r29, dx16)
  // L14(r29, dx16)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L14_;

D23_:;
  // deopt 87 [r31, l5, r29, j4]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(87, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L73_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r34 = dyn ___1(l5, r29, j5)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L14(r31, r34)
  // L14(r31, r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r34_;
  goto L14_;

D24_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p3 = prom<V +>{
  //   d = ld d;
  //   d1 = force? d;
  //   checkMissing(d1);
  //   return d1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_3, CCP, RHO);
  // r37 = dyn as_Date(p3)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_Date, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L76() else D25()
  // L76()
  goto L76_;

D25_:;
  // deopt 96 [r37]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L76_:;
  // st d = r37
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L77() else D26()
  // L77()
  goto L77_;

D26_:;
  // deopt 99 []
  Rsh_Fir_deopt(99, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p4 = prom<V +>{
  //   d2 = ld d;
  //   d3 = force? d2;
  //   checkMissing(d3);
  //   return d3;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_4, CCP, RHO);
  // r39 = dyn order[, decreasing](p4, TRUE)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L78() else D27()
  // L78()
  goto L78_;

D27_:;
  // deopt 103 [r39]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L78_:;
  // st o = r39
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // list2DF = ldf list2DF
  Rsh_Fir_reg_list2DF = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // check L79() else D28()
  // L79()
  goto L79_;

D28_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p5 = prom<V +>{
  //   sym6 = ldf list;
  //   base6 = ldf list in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L3() else L4();
  // L0(r41):
  //   return r41;
  // L3():
  //   e9 = ld e;
  //   e10 = force? e9;
  //   checkMissing(e10);
  //   c10 = `is.object`(e10);
  //   if c10 then L5() else L6(e10);
  // L4():
  //   r40 = dyn base6[Package, Date](<lang `[`(e, o)>, <lang `[`(d, o)>);
  //   goto L0(r40);
  // L1(dx19):
  //   d4 = ld d;
  //   d5 = force? d4;
  //   checkMissing(d5);
  //   c11 = `is.object`(d5);
  //   if c11 then L8() else L9(d5);
  // L5():
  //   dr14 = tryDispatchBuiltin.1("[", e10);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L7() else L6(dr14);
  // L6(e12):
  //   o = ld o;
  //   o1 = force? o;
  //   __5 = ldf `[` in base;
  //   r42 = dyn __5(e12, o1);
  //   goto L1(r42);
  // L2(dx21):
  //   list = ldf list in base;
  //   r44 = dyn list(dx19, dx21);
  //   goto L0(r44);
  // L7():
  //   dx18 = getTryDispatchBuiltinValue(dr14);
  //   goto L1(dx18);
  // L8():
  //   dr16 = tryDispatchBuiltin.1("[", d5);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L10() else L9(dr16);
  // L9(d7):
  //   o2 = ld o;
  //   o3 = force? o2;
  //   __6 = ldf `[` in base;
  //   r43 = dyn __6(d7, o3);
  //   goto L2(r43);
  // L10():
  //   dx20 = getTryDispatchBuiltinValue(dr16);
  //   goto L2(dx20);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_5, CCP, RHO);
  // r46 = dyn list2DF(p5)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2DF, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L80() else D29()
  // L80()
  goto L80_;

D29_:;
  // deopt 108 [r46]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L80_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r46
  return Rsh_Fir_reg_r46_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO) {
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r2 = dyn as_character(e2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym e>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO) {
  // base_packages = ld base_packages
  Rsh_Fir_reg_base_packages = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // base_packages1 = force? base_packages
  Rsh_Fir_reg_base_packages1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_base_packages);
  // checkMissing(base_packages1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_base_packages1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return base_packages1
  return Rsh_Fir_reg_base_packages1_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO) {
  // eb2 = ld eb
  Rsh_Fir_reg_eb2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // eb3 = force? eb2
  Rsh_Fir_reg_eb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eb2_);
  // checkMissing(eb3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_eb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return eb3
  return Rsh_Fir_reg_eb3_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO) {
  // d = ld d
  Rsh_Fir_reg_d1 = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // d1 = force? d
  Rsh_Fir_reg_d1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_d1);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_d1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return d1
  return Rsh_Fir_reg_d1_1;
}
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO) {
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return d3
  return Rsh_Fir_reg_d3_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO) {
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard6 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(d5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if c11 then L8() else L9(d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L8()
    goto L8_;
  } else {
  // L9(d5)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L9_;
  }

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r44 = dyn list(dx19, dx21)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r44_;
  goto L0_;

L3_:;
  // e9 = ld e
  Rsh_Fir_reg_e9_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // e10 = force? e9
  Rsh_Fir_reg_e10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e9_);
  // checkMissing(e10)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_e10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(e10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_e10_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c10 then L5() else L6(e10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L5()
    goto L5_;
  } else {
  // L6(e10)
    Rsh_Fir_reg_e12_ = Rsh_Fir_reg_e10_;
    goto L6_;
  }

L4_:;
  // r40 = dyn base6[Package, Date](<lang `[`(e, o)>, <lang `[`(d, o)>)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;

L5_:;
  // dr14 = tryDispatchBuiltin.1("[", e10)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_e10_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc7 then L7() else L6(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr14)
    Rsh_Fir_reg_e12_ = Rsh_Fir_reg_dr14_;
    goto L6_;
  }

L6_:;
  // o = ld o
  Rsh_Fir_reg_o = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // o1 = force? o
  Rsh_Fir_reg_o1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r42 = dyn __5(e12, o1)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_e12_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_o1_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L1(r42)
  // L1(r42)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r42_;
  goto L1_;

L7_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L1(dx18)
  // L1(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L1_;

L8_:;
  // dr16 = tryDispatchBuiltin.1("[", d5)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc8 then L10() else L9(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr16)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr16_;
    goto L9_;
  }

L9_:;
  // o2 = ld o
  Rsh_Fir_reg_o2_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // o3 = force? o2
  Rsh_Fir_reg_o3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o2_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r43 = dyn __6(d7, o3)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_o3_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L2(r43)
  // L2(r43)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r43_;
  goto L2_;

L10_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L2(dx20)
  // L2(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
