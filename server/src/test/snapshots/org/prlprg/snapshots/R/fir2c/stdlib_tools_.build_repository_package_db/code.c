#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3199063347_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3199063347_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3199063347_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3199063347_14(SEXP CCP, SEXP RHO);
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
  // r = clos inner3199063347
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3199063347_, RHO, CCP);
  // st `.build_repository_package_db` = r
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
SEXP Rsh_Fir_user_function_inner3199063347_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3199063347 dynamic dispatch ([dir, fields, type, verbose, unpacked, validate])

  return Rsh_Fir_user_version_inner3199063347_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3199063347_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3199063347 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3199063347/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_fields;  // fields
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_verbose;  // verbose
  SEXP Rsh_Fir_reg_unpacked;  // unpacked
  SEXP Rsh_Fir_reg_validate;  // validate
  SEXP Rsh_Fir_reg_fields_isMissing;  // fields_isMissing
  SEXP Rsh_Fir_reg_fields_orDefault;  // fields_orDefault
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_verbose_isMissing;  // verbose_isMissing
  SEXP Rsh_Fir_reg_verbose_orDefault;  // verbose_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_unpacked_isMissing;  // unpacked_isMissing
  SEXP Rsh_Fir_reg_unpacked_orDefault;  // unpacked_orDefault
  SEXP Rsh_Fir_reg_validate_isMissing;  // validate_isMissing
  SEXP Rsh_Fir_reg_validate_orDefault;  // validate_orDefault
  SEXP Rsh_Fir_reg_unpacked1_;  // unpacked1
  SEXP Rsh_Fir_reg_unpacked2_;  // unpacked2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__build_repository_package_db_from_source_dirs;  // _build_repository_package_db_from_source_dirs
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_dir2_;  // dir2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_fields1_;  // fields1
  SEXP Rsh_Fir_reg_fields2_;  // fields2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_verbose1_;  // verbose1
  SEXP Rsh_Fir_reg_verbose2_;  // verbose2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_validate1_;  // validate1
  SEXP Rsh_Fir_reg_validate2_;  // validate2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg__get_pkg_file_pattern;  // _get_pkg_file_pattern
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_list_files;  // list_files
  SEXP Rsh_Fir_reg_dir3_;  // dir3
  SEXP Rsh_Fir_reg_dir4_;  // dir4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_package_pattern;  // package_pattern
  SEXP Rsh_Fir_reg_package_pattern1_;  // package_pattern1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_files;  // files
  SEXP Rsh_Fir_reg_files1_;  // files1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_type4_;  // type4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg__process_package_files_for_repository_db;  // _process_package_files_for_repository_db
  SEXP Rsh_Fir_reg_files2_;  // files2
  SEXP Rsh_Fir_reg_files3_;  // files3
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_type5_;  // type5
  SEXP Rsh_Fir_reg_type6_;  // type6
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_fields3_;  // fields3
  SEXP Rsh_Fir_reg_fields4_;  // fields4
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_verbose3_;  // verbose3
  SEXP Rsh_Fir_reg_verbose4_;  // verbose4
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_validate3_;  // validate3
  SEXP Rsh_Fir_reg_validate4_;  // validate4
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1

  // Bind parameters
  Rsh_Fir_reg_dir = PARAMS[0];
  Rsh_Fir_reg_fields = PARAMS[1];
  Rsh_Fir_reg_type = PARAMS[2];
  Rsh_Fir_reg_verbose = PARAMS[3];
  Rsh_Fir_reg_unpacked = PARAMS[4];
  Rsh_Fir_reg_validate = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st dir = dir
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dir, RHO);
  (void)(Rsh_Fir_reg_dir);
  // fields_isMissing = missing.0(fields)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_fields;
  Rsh_Fir_reg_fields_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if fields_isMissing then L0(NULL) else L0(fields)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fields_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_fields_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(fields)
    Rsh_Fir_reg_fields_orDefault = Rsh_Fir_reg_fields;
    goto L0_;
  }

L0_:;
  // st fields = fields_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_fields_orDefault, RHO);
  (void)(Rsh_Fir_reg_fields_orDefault);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if type_isMissing then L1() else L2(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("source", "mac.binary", "win.binary");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("source", "mac.binary", "win.binary");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // verbose_isMissing = missing.0(verbose)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_verbose;
  Rsh_Fir_reg_verbose_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if verbose_isMissing then L3() else L4(verbose)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_verbose_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(verbose)
    Rsh_Fir_reg_verbose_orDefault = Rsh_Fir_reg_verbose;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   getOption = ldf getOption;
  //   r4 = dyn getOption("verbose");
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_1, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_verbose_orDefault = Rsh_Fir_reg_p1_;
  goto L4_;

L4_:;
  // st verbose = verbose_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_verbose_orDefault, RHO);
  (void)(Rsh_Fir_reg_verbose_orDefault);
  // unpacked_isMissing = missing.0(unpacked)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_unpacked;
  Rsh_Fir_reg_unpacked_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if unpacked_isMissing then L5(FALSE) else L5(unpacked)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unpacked_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_unpacked_orDefault = Rsh_const(CCP, 12);
    goto L5_;
  } else {
  // L5(unpacked)
    Rsh_Fir_reg_unpacked_orDefault = Rsh_Fir_reg_unpacked;
    goto L5_;
  }

L5_:;
  // st unpacked = unpacked_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_unpacked_orDefault, RHO);
  (void)(Rsh_Fir_reg_unpacked_orDefault);
  // validate_isMissing = missing.0(validate)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_validate;
  Rsh_Fir_reg_validate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if validate_isMissing then L6(FALSE) else L6(validate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_validate_isMissing)) {
  // L6(FALSE)
    Rsh_Fir_reg_validate_orDefault = Rsh_const(CCP, 12);
    goto L6_;
  } else {
  // L6(validate)
    Rsh_Fir_reg_validate_orDefault = Rsh_Fir_reg_validate;
    goto L6_;
  }

L6_:;
  // st validate = validate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_validate_orDefault, RHO);
  (void)(Rsh_Fir_reg_validate_orDefault);
  // unpacked1 = ld unpacked
  Rsh_Fir_reg_unpacked1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L7_:;
  // _get_pkg_file_pattern = ldf `.get_pkg_file_pattern`
  Rsh_Fir_reg__get_pkg_file_pattern = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L9_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c2 then L27() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_;

D0_:;
  // deopt 0 [unpacked1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_unpacked1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // unpacked2 = force? unpacked1
  Rsh_Fir_reg_unpacked2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unpacked1_);
  // checkMissing(unpacked2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_unpacked2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(unpacked2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_unpacked2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L7()
    goto L7_;
  }

L14_:;
  // _build_repository_package_db_from_source_dirs = ldf `.build_repository_package_db_from_source_dirs`
  Rsh_Fir_reg__build_repository_package_db_from_source_dirs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p2 = prom<V +>{
  //   dir1 = ld dir;
  //   dir2 = force? dir1;
  //   checkMissing(dir2);
  //   return dir2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_2, CCP, RHO);
  // p3 = prom<V +>{
  //   fields1 = ld fields;
  //   fields2 = force? fields1;
  //   checkMissing(fields2);
  //   return fields2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_3, CCP, RHO);
  // p4 = prom<V +>{
  //   verbose1 = ld verbose;
  //   verbose2 = force? verbose1;
  //   checkMissing(verbose2);
  //   return verbose2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_4, CCP, RHO);
  // p5 = prom<V +>{
  //   validate1 = ld validate;
  //   validate2 = force? validate1;
  //   checkMissing(validate2);
  //   return validate2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_5, CCP, RHO);
  // r10 = dyn _build_repository_package_db_from_source_dirs(p2, p3, p4, p5)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args17[3] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__build_repository_package_db_from_source_dirs, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 8 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p6 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_6, CCP, RHO);
  // r14 = dyn _get_pkg_file_pattern(p6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__get_pkg_file_pattern, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 15 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // st package_pattern = r14
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // list_files = ldf `list.files`
  Rsh_Fir_reg_list_files = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p7 = prom<V +>{
  //   dir3 = ld dir;
  //   dir4 = force? dir3;
  //   checkMissing(dir4);
  //   return dir4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_7, CCP, RHO);
  // p8 = prom<V +>{
  //   package_pattern = ld package_pattern;
  //   package_pattern1 = force? package_pattern;
  //   checkMissing(package_pattern1);
  //   return package_pattern1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_8, CCP, RHO);
  // r17 = dyn list_files[, pattern, `full.names`](p7, p8, TRUE)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list_files, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D6_:;
  // deopt 24 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // st files = r17
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // files = ld files
  Rsh_Fir_reg_files = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

L24_:;
  // r18 = dyn base1(<sym files>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D7_:;
  // deopt 28 [files]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_files;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // files1 = force? files
  Rsh_Fir_reg_files1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files);
  // checkMissing(files1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_files1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r20 = dyn length(files1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_files1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 31 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L9_;

L27_:;
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r24 = dyn list()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L29_:;
  // r22 = dyn base2()
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L11_;

D9_:;
  // deopt 36 [r24]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L11_;

D10_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p9 = prom<V +>{
  //   type3 = ld type;
  //   type4 = force? type3;
  //   checkMissing(type4);
  //   return type4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_9, CCP, RHO);
  // r28 = dyn match_arg(p9)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L34() else D11()
  // L34()
  goto L34_;

D11_:;
  // deopt 43 [r28]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // st type = r28
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // _process_package_files_for_repository_db = ldf `.process_package_files_for_repository_db`
  Rsh_Fir_reg__process_package_files_for_repository_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p10 = prom<V +>{
  //   files2 = ld files;
  //   files3 = force? files2;
  //   checkMissing(files3);
  //   return files3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_10, CCP, RHO);
  // p11 = prom<V +>{
  //   type5 = ld type;
  //   type6 = force? type5;
  //   checkMissing(type6);
  //   return type6;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_11, CCP, RHO);
  // p12 = prom<V +>{
  //   fields3 = ld fields;
  //   fields4 = force? fields3;
  //   checkMissing(fields4);
  //   return fields4;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_12, CCP, RHO);
  // p13 = prom<V +>{
  //   verbose3 = ld verbose;
  //   verbose4 = force? verbose3;
  //   checkMissing(verbose4);
  //   return verbose4;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_13, CCP, RHO);
  // p14 = prom<V +>{
  //   validate3 = ld validate;
  //   validate4 = force? validate3;
  //   checkMissing(validate4);
  //   return validate4;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3199063347_14, CCP, RHO);
  // r34 = dyn _process_package_files_for_repository_db(p10, p11, p12, p13, p14)
  SEXP Rsh_Fir_array_args35[5];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args35[3] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args35[4] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names9[5];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__process_package_files_for_repository_db, 5, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

D13_:;
  // deopt 52 [r34]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // st db = r34
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

D14_:;
  // deopt 54 [db]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_db;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return db1
  return Rsh_Fir_reg_db1_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn c("source", "mac.binary", "win.binary")
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("source", "mac.binary", "win.binary")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_1(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r4 = dyn getOption("verbose")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_2(SEXP CCP, SEXP RHO) {
  // dir1 = ld dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dir2 = force? dir1
  Rsh_Fir_reg_dir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir1_);
  // checkMissing(dir2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return dir2
  return Rsh_Fir_reg_dir2_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_3(SEXP CCP, SEXP RHO) {
  // fields1 = ld fields
  Rsh_Fir_reg_fields1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fields2 = force? fields1
  Rsh_Fir_reg_fields2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fields1_);
  // checkMissing(fields2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_fields2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return fields2
  return Rsh_Fir_reg_fields2_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_4(SEXP CCP, SEXP RHO) {
  // verbose1 = ld verbose
  Rsh_Fir_reg_verbose1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // verbose2 = force? verbose1
  Rsh_Fir_reg_verbose2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_verbose1_);
  // checkMissing(verbose2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_verbose2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return verbose2
  return Rsh_Fir_reg_verbose2_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_5(SEXP CCP, SEXP RHO) {
  // validate1 = ld validate
  Rsh_Fir_reg_validate1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // validate2 = force? validate1
  Rsh_Fir_reg_validate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_validate1_);
  // checkMissing(validate2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_validate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return validate2
  return Rsh_Fir_reg_validate2_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_6(SEXP CCP, SEXP RHO) {
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_7(SEXP CCP, SEXP RHO) {
  // dir3 = ld dir
  Rsh_Fir_reg_dir3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dir4 = force? dir3
  Rsh_Fir_reg_dir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir3_);
  // checkMissing(dir4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return dir4
  return Rsh_Fir_reg_dir4_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_8(SEXP CCP, SEXP RHO) {
  // package_pattern = ld package_pattern
  Rsh_Fir_reg_package_pattern = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // package_pattern1 = force? package_pattern
  Rsh_Fir_reg_package_pattern1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package_pattern);
  // checkMissing(package_pattern1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_package_pattern1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return package_pattern1
  return Rsh_Fir_reg_package_pattern1_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_9(SEXP CCP, SEXP RHO) {
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return type4
  return Rsh_Fir_reg_type4_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_10(SEXP CCP, SEXP RHO) {
  // files2 = ld files
  Rsh_Fir_reg_files2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // files3 = force? files2
  Rsh_Fir_reg_files3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files2_);
  // checkMissing(files3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_files3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return files3
  return Rsh_Fir_reg_files3_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_11(SEXP CCP, SEXP RHO) {
  // type5 = ld type
  Rsh_Fir_reg_type5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // type6 = force? type5
  Rsh_Fir_reg_type6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type5_);
  // checkMissing(type6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_type6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return type6
  return Rsh_Fir_reg_type6_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_12(SEXP CCP, SEXP RHO) {
  // fields3 = ld fields
  Rsh_Fir_reg_fields3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fields4 = force? fields3
  Rsh_Fir_reg_fields4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fields3_);
  // checkMissing(fields4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_fields4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return fields4
  return Rsh_Fir_reg_fields4_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_13(SEXP CCP, SEXP RHO) {
  // verbose3 = ld verbose
  Rsh_Fir_reg_verbose3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // verbose4 = force? verbose3
  Rsh_Fir_reg_verbose4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_verbose3_);
  // checkMissing(verbose4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_verbose4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return verbose4
  return Rsh_Fir_reg_verbose4_;
}
SEXP Rsh_Fir_user_promise_inner3199063347_14(SEXP CCP, SEXP RHO) {
  // validate3 = ld validate
  Rsh_Fir_reg_validate3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // validate4 = force? validate3
  Rsh_Fir_reg_validate4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_validate3_);
  // checkMissing(validate4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_validate4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return validate4
  return Rsh_Fir_reg_validate4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
