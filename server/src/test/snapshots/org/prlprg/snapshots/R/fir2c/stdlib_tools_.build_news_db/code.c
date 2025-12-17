#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner537273303_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner537273303_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner537273303_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner537273303_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner537273303
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner537273303_, RHO, CCP);
  // st `.build_news_db` = r
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
SEXP Rsh_Fir_user_function_inner537273303_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner537273303 dynamic dispatch ([package, `lib.loc`, format, reader])

  return Rsh_Fir_user_version_inner537273303_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner537273303_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner537273303 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner537273303/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_lib_loc;  // lib_loc
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_reader;  // reader
  SEXP Rsh_Fir_reg_lib_loc_isMissing;  // lib_loc_isMissing
  SEXP Rsh_Fir_reg_lib_loc_orDefault;  // lib_loc_orDefault
  SEXP Rsh_Fir_reg_format_isMissing;  // format_isMissing
  SEXP Rsh_Fir_reg_format_orDefault;  // format_orDefault
  SEXP Rsh_Fir_reg_reader_isMissing;  // reader_isMissing
  SEXP Rsh_Fir_reg_reader_orDefault;  // reader_orDefault
  SEXP Rsh_Fir_reg_system_file;  // system_file
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_lib_loc1_;  // lib_loc1
  SEXP Rsh_Fir_reg_lib_loc2_;  // lib_loc2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_file_path;  // file_path
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_file_test;  // file_test
  SEXP Rsh_Fir_reg_nfile;  // nfile
  SEXP Rsh_Fir_reg_nfile1_;  // nfile1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__build_news_db_from_package_NEWS_Rd;  // _build_news_db_from_package_NEWS_Rd
  SEXP Rsh_Fir_reg_nfile2_;  // nfile2
  SEXP Rsh_Fir_reg_nfile3_;  // nfile3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_file_path1_;  // file_path1
  SEXP Rsh_Fir_reg_dir2_;  // dir2
  SEXP Rsh_Fir_reg_dir3_;  // dir3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_file_test1_;  // file_test1
  SEXP Rsh_Fir_reg_nfile4_;  // nfile4
  SEXP Rsh_Fir_reg_nfile5_;  // nfile5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__build_news_db_from_package_NEWS_md;  // _build_news_db_from_package_NEWS_md
  SEXP Rsh_Fir_reg_nfile6_;  // nfile6
  SEXP Rsh_Fir_reg_nfile7_;  // nfile7
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_file_path2_;  // file_path2
  SEXP Rsh_Fir_reg_dir4_;  // dir4
  SEXP Rsh_Fir_reg_dir5_;  // dir5
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_file_test2_;  // file_test2
  SEXP Rsh_Fir_reg_nfile8_;  // nfile8
  SEXP Rsh_Fir_reg_nfile9_;  // nfile9
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_format1_;  // format1
  SEXP Rsh_Fir_reg_format2_;  // format2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg__NotYetUsed;  // _NotYetUsed
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_reader1_;  // reader1
  SEXP Rsh_Fir_reg_reader2_;  // reader2
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg__NotYetUsed1_;  // _NotYetUsed1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg__news_reader_default;  // _news_reader_default
  SEXP Rsh_Fir_reg__news_reader_default1_;  // _news_reader_default1
  SEXP Rsh_Fir_reg_reader3_;  // reader3
  SEXP Rsh_Fir_reg_nfile10_;  // nfile10
  SEXP Rsh_Fir_reg_nfile11_;  // nfile11
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r40_;  // r40

  // Bind parameters
  Rsh_Fir_reg_package = PARAMS[0];
  Rsh_Fir_reg_lib_loc = PARAMS[1];
  Rsh_Fir_reg_format = PARAMS[2];
  Rsh_Fir_reg_reader = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st package = package
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_package, RHO);
  (void)(Rsh_Fir_reg_package);
  // lib_loc_isMissing = missing.0(lib_loc)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lib_loc;
  Rsh_Fir_reg_lib_loc_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lib_loc_isMissing then L0(NULL) else L0(lib_loc)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lib_loc_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(lib_loc)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_Fir_reg_lib_loc;
    goto L0_;
  }

L0_:;
  // st `lib.loc` = lib_loc_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_lib_loc_orDefault, RHO);
  (void)(Rsh_Fir_reg_lib_loc_orDefault);
  // format_isMissing = missing.0(format)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_format;
  Rsh_Fir_reg_format_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if format_isMissing then L1(NULL) else L1(format)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_format_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_format_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(format)
    Rsh_Fir_reg_format_orDefault = Rsh_Fir_reg_format;
    goto L1_;
  }

L1_:;
  // st format = format_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_format_orDefault, RHO);
  (void)(Rsh_Fir_reg_format_orDefault);
  // reader_isMissing = missing.0(reader)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_reader;
  Rsh_Fir_reg_reader_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if reader_isMissing then L2(NULL) else L2(reader)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_reader_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_reader_orDefault = Rsh_const(CCP, 2);
    goto L2_;
  } else {
  // L2(reader)
    Rsh_Fir_reg_reader_orDefault = Rsh_Fir_reg_reader;
    goto L2_;
  }

L2_:;
  // st reader = reader_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_reader_orDefault, RHO);
  (void)(Rsh_Fir_reg_reader_orDefault);
  // system_file = ldf `system.file`
  Rsh_Fir_reg_system_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L3_:;
  // file_path1 = ldf `file.path`
  Rsh_Fir_reg_file_path1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L5_:;
  // file_path2 = ldf `file.path`
  Rsh_Fir_reg_file_path2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L36() else D14()
  // L36()
  goto L36_;

L7_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

L10_:;
  // r31 = `!`(r30)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L49() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L49()
    goto L49_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L13_:;
  // r36 = `!`(r35)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c6 then L56() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L56()
    goto L56_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // _news_reader_default = ld `.news_reader_default`
  Rsh_Fir_reg__news_reader_default = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L60() else D25()
  // L60()
  goto L60_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   package1 = ld package;
  //   package2 = force? package1;
  //   checkMissing(package2);
  //   return package2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_, CCP, RHO);
  // p1 = prom<V +>{
  //   lib_loc1 = ld `lib.loc`;
  //   lib_loc2 = force? lib_loc1;
  //   checkMissing(lib_loc2);
  //   return lib_loc2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_1, CCP, RHO);
  // r2 = dyn system_file[package, `lib.loc`](p, p1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system_file, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // st dir = r2
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   dir = ld dir;
  //   dir1 = force? dir;
  //   checkMissing(dir1);
  //   return dir1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_2, CCP, RHO);
  // r4 = dyn file_path(p2, "NEWS.Rd")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 12 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // st nfile = r4
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // file_test = ldf file_test
  Rsh_Fir_reg_file_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p3 = prom<V +>{
  //   nfile = ld nfile;
  //   nfile1 = force? nfile;
  //   checkMissing(nfile1);
  //   return nfile1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_3, CCP, RHO);
  // r6 = dyn file_test("-f", p3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_test, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 18 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c then L22() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L3()
    goto L3_;
  }

L22_:;
  // _build_news_db_from_package_NEWS_Rd = ldf `.build_news_db_from_package_NEWS_Rd`
  Rsh_Fir_reg__build_news_db_from_package_NEWS_Rd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p4 = prom<V +>{
  //   nfile2 = ld nfile;
  //   nfile3 = force? nfile2;
  //   checkMissing(nfile3);
  //   return nfile3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_4, CCP, RHO);
  // r8 = dyn _build_news_db_from_package_NEWS_Rd(p4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__build_news_db_from_package_NEWS_Rd, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D7_:;
  // deopt 22 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p5 = prom<V +>{
  //   dir2 = ld dir;
  //   dir3 = force? dir2;
  //   checkMissing(dir3);
  //   return dir3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_5, CCP, RHO);
  // r12 = dyn file_path1(p5, "NEWS.md")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

D9_:;
  // deopt 30 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // st nfile = r12
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // file_test1 = ldf file_test
  Rsh_Fir_reg_file_test1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p6 = prom<V +>{
  //   nfile4 = ld nfile;
  //   nfile5 = force? nfile4;
  //   checkMissing(nfile5);
  //   return nfile5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_6, CCP, RHO);
  // r14 = dyn file_test1("-f", p6)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_test1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 36 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L31() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L5()
    goto L5_;
  }

L31_:;
  // _build_news_db_from_package_NEWS_md = ldf `.build_news_db_from_package_NEWS_md`
  Rsh_Fir_reg__build_news_db_from_package_NEWS_md = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

D12_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p7 = prom<V +>{
  //   nfile6 = ld nfile;
  //   nfile7 = force? nfile6;
  //   checkMissing(nfile7);
  //   return nfile7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_7, CCP, RHO);
  // r16 = dyn _build_news_db_from_package_NEWS_md(p7)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__build_news_db_from_package_NEWS_md, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

D13_:;
  // deopt 40 [r16]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;

D14_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p8 = prom<V +>{
  //   dir4 = ld dir;
  //   dir5 = force? dir4;
  //   checkMissing(dir5);
  //   return dir5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_8, CCP, RHO);
  // r20 = dyn file_path2(p8, "NEWS")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

D15_:;
  // deopt 48 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // st nfile = r20
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // file_test2 = ldf file_test
  Rsh_Fir_reg_file_test2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L38() else D16()
  // L38()
  goto L38_;

D16_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p9 = prom<V +>{
  //   nfile8 = ld nfile;
  //   nfile9 = force? nfile8;
  //   checkMissing(nfile9);
  //   return nfile9;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_9, CCP, RHO);
  // r22 = dyn file_test2("-f", p9)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_test2_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D17()
  // L39()
  goto L39_;

D17_:;
  // deopt 54 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // r23 = `!`(r22)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c2 then L40() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L40()
    goto L40_;
  } else {
  // L7()
    goto L7_;
  }

L40_:;
  // sym = ldf invisible
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf invisible in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r26 = dyn invisible()
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L43() else D18()
  // L43()
  goto L43_;

L42_:;
  // r24 = dyn base()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L8_;

D18_:;
  // deopt 59 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L8(r26)
  // L8(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L8_;

L46_:;
  // format1 = ld format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L48() else D19()
  // L48()
  goto L48_;

L47_:;
  // r29 = dyn base1(<sym format>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L10_;

D19_:;
  // deopt 64 [format1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_format1_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L48_:;
  // format2 = force? format1
  Rsh_Fir_reg_format2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_format1_);
  // checkMissing(format2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_format2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c3 = `==`(format2, NULL)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_format2_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L10(c3)
  // L10(c3)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_c3_;
  goto L10_;

L49_:;
  // _NotYetUsed = ldf `.NotYetUsed`
  Rsh_Fir_reg__NotYetUsed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

D20_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // r32 = dyn _NotYetUsed("format", FALSE)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__NotYetUsed, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L51() else D21()
  // L51()
  goto L51_;

D21_:;
  // deopt 72 [r32]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L12()
  // L12()
  goto L12_;

L53_:;
  // reader1 = ld reader
  Rsh_Fir_reg_reader1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L55() else D22()
  // L55()
  goto L55_;

L54_:;
  // r34 = dyn base2(<sym reader>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L13_;

D22_:;
  // deopt 76 [reader1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_reader1_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L55_:;
  // reader2 = force? reader1
  Rsh_Fir_reg_reader2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reader1_);
  // checkMissing(reader2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_reader2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c5 = `==`(reader2, NULL)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_reader2_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L13(c5)
  // L13(c5)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_c5_;
  goto L13_;

L56_:;
  // _NotYetUsed1 = ldf `.NotYetUsed`
  Rsh_Fir_reg__NotYetUsed1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L57() else D23()
  // L57()
  goto L57_;

D23_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // r37 = dyn _NotYetUsed1("reader", FALSE)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__NotYetUsed1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L58() else D24()
  // L58()
  goto L58_;

D24_:;
  // deopt 84 [r37]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L15()
  // L15()
  goto L15_;

D25_:;
  // deopt 87 [_news_reader_default]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg__news_reader_default;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // _news_reader_default1 = force? _news_reader_default
  Rsh_Fir_reg__news_reader_default1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__news_reader_default);
  // checkMissing(_news_reader_default1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg__news_reader_default1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // st reader = _news_reader_default1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg__news_reader_default1_, RHO);
  (void)(Rsh_Fir_reg__news_reader_default1_);
  // reader3 = ldf reader
  Rsh_Fir_reg_reader3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L61() else D26()
  // L61()
  goto L61_;

D26_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p10 = prom<V +>{
  //   nfile10 = ld nfile;
  //   nfile11 = force? nfile10;
  //   checkMissing(nfile11);
  //   return nfile11;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner537273303_10, CCP, RHO);
  // r40 = dyn reader3(p10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reader3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L62() else D27()
  // L62()
  goto L62_;

D27_:;
  // deopt 93 [r40]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L62_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_inner537273303_(SEXP CCP, SEXP RHO) {
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return package2
  return Rsh_Fir_reg_package2_;
}
SEXP Rsh_Fir_user_promise_inner537273303_1(SEXP CCP, SEXP RHO) {
  // lib_loc1 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lib_loc2 = force? lib_loc1
  Rsh_Fir_reg_lib_loc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc1_);
  // checkMissing(lib_loc2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_lib_loc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return lib_loc2
  return Rsh_Fir_reg_lib_loc2_;
}
SEXP Rsh_Fir_user_promise_inner537273303_2(SEXP CCP, SEXP RHO) {
  // dir = ld dir
  Rsh_Fir_reg_dir = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // dir1 = force? dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir);
  // checkMissing(dir1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dir1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return dir1
  return Rsh_Fir_reg_dir1_;
}
SEXP Rsh_Fir_user_promise_inner537273303_3(SEXP CCP, SEXP RHO) {
  // nfile = ld nfile
  Rsh_Fir_reg_nfile = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nfile1 = force? nfile
  Rsh_Fir_reg_nfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nfile);
  // checkMissing(nfile1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_nfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return nfile1
  return Rsh_Fir_reg_nfile1_;
}
SEXP Rsh_Fir_user_promise_inner537273303_4(SEXP CCP, SEXP RHO) {
  // nfile2 = ld nfile
  Rsh_Fir_reg_nfile2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nfile3 = force? nfile2
  Rsh_Fir_reg_nfile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nfile2_);
  // checkMissing(nfile3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_nfile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return nfile3
  return Rsh_Fir_reg_nfile3_;
}
SEXP Rsh_Fir_user_promise_inner537273303_5(SEXP CCP, SEXP RHO) {
  // dir2 = ld dir
  Rsh_Fir_reg_dir2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // dir3 = force? dir2
  Rsh_Fir_reg_dir3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir2_);
  // checkMissing(dir3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dir3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return dir3
  return Rsh_Fir_reg_dir3_;
}
SEXP Rsh_Fir_user_promise_inner537273303_6(SEXP CCP, SEXP RHO) {
  // nfile4 = ld nfile
  Rsh_Fir_reg_nfile4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nfile5 = force? nfile4
  Rsh_Fir_reg_nfile5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nfile4_);
  // checkMissing(nfile5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_nfile5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return nfile5
  return Rsh_Fir_reg_nfile5_;
}
SEXP Rsh_Fir_user_promise_inner537273303_7(SEXP CCP, SEXP RHO) {
  // nfile6 = ld nfile
  Rsh_Fir_reg_nfile6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nfile7 = force? nfile6
  Rsh_Fir_reg_nfile7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nfile6_);
  // checkMissing(nfile7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_nfile7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return nfile7
  return Rsh_Fir_reg_nfile7_;
}
SEXP Rsh_Fir_user_promise_inner537273303_8(SEXP CCP, SEXP RHO) {
  // dir4 = ld dir
  Rsh_Fir_reg_dir4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // dir5 = force? dir4
  Rsh_Fir_reg_dir5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir4_);
  // checkMissing(dir5)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dir5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return dir5
  return Rsh_Fir_reg_dir5_;
}
SEXP Rsh_Fir_user_promise_inner537273303_9(SEXP CCP, SEXP RHO) {
  // nfile8 = ld nfile
  Rsh_Fir_reg_nfile8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nfile9 = force? nfile8
  Rsh_Fir_reg_nfile9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nfile8_);
  // checkMissing(nfile9)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_nfile9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return nfile9
  return Rsh_Fir_reg_nfile9_;
}
SEXP Rsh_Fir_user_promise_inner537273303_10(SEXP CCP, SEXP RHO) {
  // nfile10 = ld nfile
  Rsh_Fir_reg_nfile10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nfile11 = force? nfile10
  Rsh_Fir_reg_nfile11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nfile10_);
  // checkMissing(nfile11)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_nfile11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return nfile11
  return Rsh_Fir_reg_nfile11_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
