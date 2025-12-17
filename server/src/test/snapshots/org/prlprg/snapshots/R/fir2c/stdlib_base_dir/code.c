#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner632376304_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner632376304_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner632376304
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner632376304_, RHO, CCP);
  // st dir = r
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
SEXP Rsh_Fir_user_function_inner632376304_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner632376304 dynamic dispatch ([path, pattern, `all.files`, `full.names`, recursive, `ignore.case`, `include.dirs`, `no..`])

  return Rsh_Fir_user_version_inner632376304_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner632376304_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner632376304 version 0 (*, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner632376304/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_path;  // path
  SEXP Rsh_Fir_reg_pattern;  // pattern
  SEXP Rsh_Fir_reg_all_files;  // all_files
  SEXP Rsh_Fir_reg_full_names;  // full_names
  SEXP Rsh_Fir_reg_recursive;  // recursive
  SEXP Rsh_Fir_reg_ignore_case;  // ignore_case
  SEXP Rsh_Fir_reg_include_dirs;  // include_dirs
  SEXP Rsh_Fir_reg_no__;  // no__
  SEXP Rsh_Fir_reg_path_isMissing;  // path_isMissing
  SEXP Rsh_Fir_reg_path_orDefault;  // path_orDefault
  SEXP Rsh_Fir_reg_pattern_isMissing;  // pattern_isMissing
  SEXP Rsh_Fir_reg_pattern_orDefault;  // pattern_orDefault
  SEXP Rsh_Fir_reg_all_files_isMissing;  // all_files_isMissing
  SEXP Rsh_Fir_reg_all_files_orDefault;  // all_files_orDefault
  SEXP Rsh_Fir_reg_full_names_isMissing;  // full_names_isMissing
  SEXP Rsh_Fir_reg_full_names_orDefault;  // full_names_orDefault
  SEXP Rsh_Fir_reg_recursive_isMissing;  // recursive_isMissing
  SEXP Rsh_Fir_reg_recursive_orDefault;  // recursive_orDefault
  SEXP Rsh_Fir_reg_ignore_case_isMissing;  // ignore_case_isMissing
  SEXP Rsh_Fir_reg_ignore_case_orDefault;  // ignore_case_orDefault
  SEXP Rsh_Fir_reg_include_dirs_isMissing;  // include_dirs_isMissing
  SEXP Rsh_Fir_reg_include_dirs_orDefault;  // include_dirs_orDefault
  SEXP Rsh_Fir_reg_no___isMissing;  // no___isMissing
  SEXP Rsh_Fir_reg_no___orDefault;  // no___orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_path1_;  // path1
  SEXP Rsh_Fir_reg_path2_;  // path2
  SEXP Rsh_Fir_reg_pattern1_;  // pattern1
  SEXP Rsh_Fir_reg_pattern2_;  // pattern2
  SEXP Rsh_Fir_reg_all_files1_;  // all_files1
  SEXP Rsh_Fir_reg_all_files2_;  // all_files2
  SEXP Rsh_Fir_reg_full_names1_;  // full_names1
  SEXP Rsh_Fir_reg_full_names2_;  // full_names2
  SEXP Rsh_Fir_reg_recursive1_;  // recursive1
  SEXP Rsh_Fir_reg_recursive2_;  // recursive2
  SEXP Rsh_Fir_reg_ignore_case1_;  // ignore_case1
  SEXP Rsh_Fir_reg_ignore_case2_;  // ignore_case2
  SEXP Rsh_Fir_reg_include_dirs1_;  // include_dirs1
  SEXP Rsh_Fir_reg_include_dirs2_;  // include_dirs2
  SEXP Rsh_Fir_reg_no__1_;  // no__1
  SEXP Rsh_Fir_reg_no__2_;  // no__2
  SEXP Rsh_Fir_reg_list_files;  // list_files
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_path = PARAMS[0];
  Rsh_Fir_reg_pattern = PARAMS[1];
  Rsh_Fir_reg_all_files = PARAMS[2];
  Rsh_Fir_reg_full_names = PARAMS[3];
  Rsh_Fir_reg_recursive = PARAMS[4];
  Rsh_Fir_reg_ignore_case = PARAMS[5];
  Rsh_Fir_reg_include_dirs = PARAMS[6];
  Rsh_Fir_reg_no__ = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // path_isMissing = missing.0(path)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_path;
  Rsh_Fir_reg_path_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if path_isMissing then L0(".") else L0(path)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_path_isMissing)) {
  // L0(".")
    Rsh_Fir_reg_path_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(path)
    Rsh_Fir_reg_path_orDefault = Rsh_Fir_reg_path;
    goto L0_;
  }

L0_:;
  // st path = path_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_path_orDefault, RHO);
  (void)(Rsh_Fir_reg_path_orDefault);
  // pattern_isMissing = missing.0(pattern)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_pattern;
  Rsh_Fir_reg_pattern_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if pattern_isMissing then L1(NULL) else L1(pattern)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pattern_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_pattern_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(pattern)
    Rsh_Fir_reg_pattern_orDefault = Rsh_Fir_reg_pattern;
    goto L1_;
  }

L1_:;
  // st pattern = pattern_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_pattern_orDefault, RHO);
  (void)(Rsh_Fir_reg_pattern_orDefault);
  // all_files_isMissing = missing.0(all_files)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_all_files;
  Rsh_Fir_reg_all_files_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if all_files_isMissing then L2(FALSE) else L2(all_files)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_all_files_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_all_files_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(all_files)
    Rsh_Fir_reg_all_files_orDefault = Rsh_Fir_reg_all_files;
    goto L2_;
  }

L2_:;
  // st `all.files` = all_files_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_all_files_orDefault, RHO);
  (void)(Rsh_Fir_reg_all_files_orDefault);
  // full_names_isMissing = missing.0(full_names)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_full_names;
  Rsh_Fir_reg_full_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if full_names_isMissing then L3(FALSE) else L3(full_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_full_names_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_full_names_orDefault = Rsh_const(CCP, 5);
    goto L3_;
  } else {
  // L3(full_names)
    Rsh_Fir_reg_full_names_orDefault = Rsh_Fir_reg_full_names;
    goto L3_;
  }

L3_:;
  // st `full.names` = full_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_full_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_full_names_orDefault);
  // recursive_isMissing = missing.0(recursive)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_recursive;
  Rsh_Fir_reg_recursive_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if recursive_isMissing then L4(FALSE) else L4(recursive)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_recursive_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_recursive_orDefault = Rsh_const(CCP, 5);
    goto L4_;
  } else {
  // L4(recursive)
    Rsh_Fir_reg_recursive_orDefault = Rsh_Fir_reg_recursive;
    goto L4_;
  }

L4_:;
  // st recursive = recursive_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_recursive_orDefault, RHO);
  (void)(Rsh_Fir_reg_recursive_orDefault);
  // ignore_case_isMissing = missing.0(ignore_case)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ignore_case;
  Rsh_Fir_reg_ignore_case_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if ignore_case_isMissing then L5(FALSE) else L5(ignore_case)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ignore_case_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_const(CCP, 5);
    goto L5_;
  } else {
  // L5(ignore_case)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_Fir_reg_ignore_case;
    goto L5_;
  }

L5_:;
  // st `ignore.case` = ignore_case_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_ignore_case_orDefault, RHO);
  (void)(Rsh_Fir_reg_ignore_case_orDefault);
  // include_dirs_isMissing = missing.0(include_dirs)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_include_dirs;
  Rsh_Fir_reg_include_dirs_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if include_dirs_isMissing then L6(FALSE) else L6(include_dirs)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_include_dirs_isMissing)) {
  // L6(FALSE)
    Rsh_Fir_reg_include_dirs_orDefault = Rsh_const(CCP, 5);
    goto L6_;
  } else {
  // L6(include_dirs)
    Rsh_Fir_reg_include_dirs_orDefault = Rsh_Fir_reg_include_dirs;
    goto L6_;
  }

L6_:;
  // st `include.dirs` = include_dirs_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_include_dirs_orDefault, RHO);
  (void)(Rsh_Fir_reg_include_dirs_orDefault);
  // no___isMissing = missing.0(no__)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_no__;
  Rsh_Fir_reg_no___isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if no___isMissing then L7(FALSE) else L7(no__)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_no___isMissing)) {
  // L7(FALSE)
    Rsh_Fir_reg_no___orDefault = Rsh_const(CCP, 5);
    goto L7_;
  } else {
  // L7(no__)
    Rsh_Fir_reg_no___orDefault = Rsh_Fir_reg_no__;
    goto L7_;
  }

L7_:;
  // st `no..` = no___orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_no___orDefault, RHO);
  (void)(Rsh_Fir_reg_no___orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L9_:;
  // path1 = ld path
  Rsh_Fir_reg_path1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<lang list.files(path, pattern, all.files, full.names, recursive, ignore.case, include.dirs, no..)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L8(r)
  // L8(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L8_;

D0_:;
  // deopt 2 [path1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_path1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // path2 = force? path1
  Rsh_Fir_reg_path2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_path1_);
  // checkMissing(path2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_path2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // pattern1 = ld pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 4 [pattern1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_pattern1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // pattern2 = force? pattern1
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern1_);
  // checkMissing(pattern2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_pattern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // all_files1 = ld `all.files`
  Rsh_Fir_reg_all_files1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 6 [all_files1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_all_files1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // all_files2 = force? all_files1
  Rsh_Fir_reg_all_files2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_files1_);
  // checkMissing(all_files2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_all_files2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // full_names1 = ld `full.names`
  Rsh_Fir_reg_full_names1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 8 [full_names1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_full_names1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // full_names2 = force? full_names1
  Rsh_Fir_reg_full_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_full_names1_);
  // checkMissing(full_names2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_full_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // recursive1 = ld recursive
  Rsh_Fir_reg_recursive1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 10 [recursive1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_recursive1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // recursive2 = force? recursive1
  Rsh_Fir_reg_recursive2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recursive1_);
  // checkMissing(recursive2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_recursive2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // ignore_case1 = ld `ignore.case`
  Rsh_Fir_reg_ignore_case1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 12 [ignore_case1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ignore_case1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // ignore_case2 = force? ignore_case1
  Rsh_Fir_reg_ignore_case2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_case1_);
  // checkMissing(ignore_case2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ignore_case2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // include_dirs1 = ld `include.dirs`
  Rsh_Fir_reg_include_dirs1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 14 [include_dirs1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_include_dirs1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // include_dirs2 = force? include_dirs1
  Rsh_Fir_reg_include_dirs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_include_dirs1_);
  // checkMissing(include_dirs2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_include_dirs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // no__1 = ld `no..`
  Rsh_Fir_reg_no__1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 16 [no__1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_no__1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // no__2 = force? no__1
  Rsh_Fir_reg_no__2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no__1_);
  // checkMissing(no__2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_no__2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // list_files = ldf `list.files` in base
  Rsh_Fir_reg_list_files = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r2 = dyn list_files(path2, pattern2, all_files2, full_names2, recursive2, ignore_case2, include_dirs2, no__2)
  SEXP Rsh_Fir_array_args18[8];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_path2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_pattern2_;
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_all_files2_;
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_full_names2_;
  Rsh_Fir_array_args18[4] = Rsh_Fir_reg_recursive2_;
  Rsh_Fir_array_args18[5] = Rsh_Fir_reg_ignore_case2_;
  Rsh_Fir_array_args18[6] = Rsh_Fir_reg_include_dirs2_;
  Rsh_Fir_array_args18[7] = Rsh_Fir_reg_no__2_;
  SEXP Rsh_Fir_array_arg_names1[8];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list_files, 8, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 19 [r2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L8(r2)
  // L8(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
