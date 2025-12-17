#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3188812281_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3188812281_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3188812281_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3188812281_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3188812281_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3188812281_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3188812281_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_system_file;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_system_file1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_system_file2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_system_file3_;
  SEXP Rsh_Fir_reg_r4_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3188812281
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3188812281_, RHO, CCP);
  // st `system.file` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // system_file = ldf `system.file`
  Rsh_Fir_reg_system_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn system_file()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system_file, 0, NULL, NULL, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // system_file1 = ldf `system.file`
  Rsh_Fir_reg_system_file1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn system_file1[package]("stats")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system_file1_, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // system_file2 = ldf `system.file`
  Rsh_Fir_reg_system_file2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = dyn system_file2("INDEX")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system_file2_, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 14 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // system_file3 = ldf `system.file`
  Rsh_Fir_reg_system_file3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r4 = dyn system_file3[, , package]("help", "AnIndex", "splines")
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system_file3_, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 21 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_function_inner3188812281_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3188812281 dynamic dispatch ([`...`, package, `lib.loc`, mustWork])

  return Rsh_Fir_user_version_inner3188812281_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3188812281_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3188812281 version 0 (dots, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3188812281/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_package;
  SEXP Rsh_Fir_reg_lib_loc;
  SEXP Rsh_Fir_reg_mustWork;
  SEXP Rsh_Fir_reg_package_isMissing;
  SEXP Rsh_Fir_reg_package_orDefault;
  SEXP Rsh_Fir_reg_lib_loc_isMissing;
  SEXP Rsh_Fir_reg_lib_loc_orDefault;
  SEXP Rsh_Fir_reg_mustWork_isMissing;
  SEXP Rsh_Fir_reg_mustWork_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_nargs;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_file_path;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_package1_;
  SEXP Rsh_Fir_reg_package2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_find_package;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_packagePath;
  SEXP Rsh_Fir_reg_packagePath1_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_file_path1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_file_exists;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_present;
  SEXP Rsh_Fir_reg_present1_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_FILES2_;
  SEXP Rsh_Fir_reg_FILES3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_FILES5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_present2_;
  SEXP Rsh_Fir_reg_present3_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_mustWork1_;
  SEXP Rsh_Fir_reg_mustWork2_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_ans2_;
  SEXP Rsh_Fir_reg_ans3_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_package = PARAMS[1];
  Rsh_Fir_reg_lib_loc = PARAMS[2];
  Rsh_Fir_reg_mustWork = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // package_isMissing = missing.0(package)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_package;
  Rsh_Fir_reg_package_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if package_isMissing then L0("base") else L0(package)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_package_isMissing)) {
  // L0("base")
    Rsh_Fir_reg_package_orDefault = Rsh_const(CCP, 8);
    goto L0_;
  } else {
  // L0(package)
    Rsh_Fir_reg_package_orDefault = Rsh_Fir_reg_package;
    goto L0_;
  }

L0_:;
  // st package = package_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_package_orDefault, RHO);
  (void)(Rsh_Fir_reg_package_orDefault);
  // lib_loc_isMissing = missing.0(lib_loc)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_lib_loc;
  Rsh_Fir_reg_lib_loc_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if lib_loc_isMissing then L1(NULL) else L1(lib_loc)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lib_loc_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_const(CCP, 9);
    goto L1_;
  } else {
  // L1(lib_loc)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_Fir_reg_lib_loc;
    goto L1_;
  }

L1_:;
  // st `lib.loc` = lib_loc_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_lib_loc_orDefault, RHO);
  (void)(Rsh_Fir_reg_lib_loc_orDefault);
  // mustWork_isMissing = missing.0(mustWork)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_mustWork;
  Rsh_Fir_reg_mustWork_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if mustWork_isMissing then L2(FALSE) else L2(mustWork)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mustWork_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_mustWork_orDefault = Rsh_const(CCP, 11);
    goto L2_;
  } else {
  // L2(mustWork)
    Rsh_Fir_reg_mustWork_orDefault = Rsh_Fir_reg_mustWork;
    goto L2_;
  }

L2_:;
  // st mustWork = mustWork_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_mustWork_orDefault, RHO);
  (void)(Rsh_Fir_reg_mustWork_orDefault);
  // sym = ldf nargs
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf nargs in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L3_:;
  // r3 = `==`(r1, 0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args7);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // if c then L23() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L23()
    goto L23_;
  } else {
  // L4()
    goto L4_;
  }

L20_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r2 = dyn nargs()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L21_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L22_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L3_;

L23_:;
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r11 = `!=`(r9, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args10);
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c1 then L32() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L32()
    goto L32_;
  } else {
  // L7()
    goto L7_;
  }

L24_:;
  // p = prom<V +>{
  //   _Library = ld `.Library`;
  //   _Library1 = force? _Library;
  //   checkMissing(_Library1);
  //   return _Library1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3188812281_, 0, NULL, CCP, RHO);
  // r5 = dyn file_path(p, "base")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L28_:;
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

L29_:;
  // r8 = dyn base1(<sym package>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L6_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 16 [package1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // find_package = ldf `find.package`
  Rsh_Fir_reg_find_package = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L30_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r10 = dyn length(package2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_package2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

L32_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D4_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L6_;

L33_:;
  // r12 = dyn stop("'package' must be of length 1")
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

L36_:;
  // p1 = prom<V +>{
  //   package3 = ld package;
  //   package4 = force? package3;
  //   checkMissing(package4);
  //   return package4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3188812281_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   lib_loc1 = ld `lib.loc`;
  //   lib_loc2 = force? lib_loc1;
  //   checkMissing(lib_loc2);
  //   return lib_loc2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3188812281_2, 0, NULL, CCP, RHO);
  // r16 = dyn find_package[, , quiet](p1, p2, TRUE)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_find_package, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

D6_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 34 [r16]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L8()
  // L8()
  goto L8_;

L37_:;
  // st packagePath = r16
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L9_:;
  // c2 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c2 then L42() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L42()
    goto L42_;
  } else {
  // L10()
    goto L10_;
  }

L38_:;
  // packagePath = ld packagePath
  Rsh_Fir_reg_packagePath = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

L39_:;
  // r17 = dyn base2(<sym packagePath>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D9_:;
  // deopt 38 [packagePath]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_packagePath;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L15("")
  // L15("")
  Rsh_Fir_reg_dx3_ = Rsh_const(CCP, 25);
  goto L15_;

L15_:;
  // st ans = dx3
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // mustWork1 = ld mustWork
  Rsh_Fir_reg_mustWork1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L59() else D19()
  // L59()
  goto L59_;

L40_:;
  // packagePath1 = force? packagePath
  Rsh_Fir_reg_packagePath1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packagePath);
  // checkMissing(packagePath1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_packagePath1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r19 = dyn length1(packagePath1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_packagePath1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

L42_:;
  // file_path1 = ldf `file.path`
  Rsh_Fir_reg_file_path1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

D10_:;
  // deopt 41 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 69 [mustWork1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_mustWork1_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L9_;

L43_:;
  // p3 = prom<V +>{
  //   packagePath2 = ld packagePath;
  //   packagePath3 = force? packagePath2;
  //   checkMissing(packagePath3);
  //   return packagePath3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3188812281_3, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r21 = dyn file_path1[, `...`](p3, ddd1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

L59_:;
  // mustWork2 = force? mustWork1
  Rsh_Fir_reg_mustWork2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mustWork1_);
  // checkMissing(mustWork2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_mustWork2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(mustWork2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_mustWork2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c5 then L60() else L16(c5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L60()
    goto L60_;
  } else {
  // L16(c5)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    goto L16_;
  }

D12_:;
  // deopt 46 [r21]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L16_:;
  // c14 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c14 then L66() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L66()
    goto L66_;
  } else {
  // L18()
    goto L18_;
  }

L44_:;
  // st FILES = r21
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

L60_:;
  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

D13_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // c11 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // c12 = `&&`(c10, c11)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args33);
  // goto L16(c12)
  // L16(c12)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c12_;
  goto L16_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // ans2 = ld ans
  Rsh_Fir_reg_ans2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L70() else D24()
  // L70()
  goto L70_;

L45_:;
  // p4 = prom<V +>{
  //   FILES = ld FILES;
  //   FILES1 = force? FILES;
  //   checkMissing(FILES1);
  //   return FILES1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3188812281_4, 0, NULL, CCP, RHO);
  // r23 = dyn file_exists(p4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

L61_:;
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

L62_:;
  // r28 = dyn base4(<sym ans>, "")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L17(c5, r28)
  // L17(c5, r28)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L17_;

L66_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L67() else D22()
  // L67()
  goto L67_;

D14_:;
  // deopt 51 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 73 [c5, ans]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 92 [ans2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_ans2_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L46_:;
  // st present = r23
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L63_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r30 = dyn identical(ans1, "", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args39[9];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ans1_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[6] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[8] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

L67_:;
  // r31 = dyn stop1("no file found")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L68() else D23()
  // L68()
  goto L68_;

L70_:;
  // ans3 = force? ans2
  Rsh_Fir_reg_ans3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans2_);
  // checkMissing(ans3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_ans3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans3
  return Rsh_Fir_reg_ans3_;

D21_:;
  // deopt 84 [c5, r30]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 89 [r31]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L11_:;
  // c3 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c3 then L51() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L51()
    goto L51_;
  } else {
  // L12()
    goto L12_;
  }

L47_:;
  // present = ld present
  Rsh_Fir_reg_present = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

L48_:;
  // r24 = dyn base3(<sym present>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L11_;

L64_:;
  // goto L17(c5, r30)
  // L17(c5, r30)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L17_;

L68_:;
  // goto L19()
  // L19()
  goto L19_;

D15_:;
  // deopt 55 [present]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_present;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L14("")
  // L14("")
  Rsh_Fir_reg_dx2_ = Rsh_const(CCP, 25);
  goto L14_;

L14_:;
  // goto L15(dx2)
  // L15(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

L49_:;
  // present1 = force? present
  Rsh_Fir_reg_present1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_present);
  // checkMissing(present1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_present1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r26 = dyn any(present1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_present1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L51_:;
  // FILES2 = ld FILES
  Rsh_Fir_reg_FILES2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L52() else D17()
  // L52()
  goto L52_;

D16_:;
  // deopt 58 [r26]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 59 [FILES2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_FILES2_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L11_;

L52_:;
  // FILES3 = force? FILES2
  Rsh_Fir_reg_FILES3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FILES2_);
  // checkMissing(FILES3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_FILES3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(FILES3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_FILES3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args47);
  // if c4 then L53() else L54(FILES3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L53()
    goto L53_;
  } else {
  // L54(FILES3)
    Rsh_Fir_reg_FILES5_ = Rsh_Fir_reg_FILES3_;
    goto L54_;
  }

L13_:;
  // goto L14(dx1)
  // L14(dx1)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_dx1_;
  goto L14_;

L53_:;
  // dr = tryDispatchBuiltin.1("[", FILES3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_FILES3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc then L55() else L54(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L55()
    goto L55_;
  } else {
  // L54(dr)
    Rsh_Fir_reg_FILES5_ = Rsh_Fir_reg_dr;
    goto L54_;
  }

L54_:;
  // present2 = ld present
  Rsh_Fir_reg_present2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L56() else D18()
  // L56()
  goto L56_;

D18_:;
  // deopt 61 [FILES5, present2]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_FILES5_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_present2_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L55_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L13(dx)
  // L13(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

L56_:;
  // present3 = force? present2
  Rsh_Fir_reg_present3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_present2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r27 = dyn __(FILES5, present3)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_FILES5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_present3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(r27)
  // L13(r27)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r27_;
  goto L13_;
}
SEXP Rsh_Fir_user_promise_inner3188812281_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__Library;
  SEXP Rsh_Fir_reg__Library1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3188812281/0: expected 0, got %d", NCAPTURES);

  // _Library = ld `.Library`
  Rsh_Fir_reg__Library = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _Library1 = force? _Library
  Rsh_Fir_reg__Library1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Library);
  // checkMissing(_Library1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg__Library1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return _Library1
  return Rsh_Fir_reg__Library1_;
}
SEXP Rsh_Fir_user_promise_inner3188812281_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_package3_;
  SEXP Rsh_Fir_reg_package4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3188812281/0: expected 0, got %d", NCAPTURES);

  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // checkMissing(package4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_package4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return package4
  return Rsh_Fir_reg_package4_;
}
SEXP Rsh_Fir_user_promise_inner3188812281_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lib_loc1_;
  SEXP Rsh_Fir_reg_lib_loc2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3188812281/0: expected 0, got %d", NCAPTURES);

  // lib_loc1 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // lib_loc2 = force? lib_loc1
  Rsh_Fir_reg_lib_loc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc1_);
  // checkMissing(lib_loc2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_lib_loc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return lib_loc2
  return Rsh_Fir_reg_lib_loc2_;
}
SEXP Rsh_Fir_user_promise_inner3188812281_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_packagePath2_;
  SEXP Rsh_Fir_reg_packagePath3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3188812281/0: expected 0, got %d", NCAPTURES);

  // packagePath2 = ld packagePath
  Rsh_Fir_reg_packagePath2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // packagePath3 = force? packagePath2
  Rsh_Fir_reg_packagePath3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packagePath2_);
  // checkMissing(packagePath3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_packagePath3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return packagePath3
  return Rsh_Fir_reg_packagePath3_;
}
SEXP Rsh_Fir_user_promise_inner3188812281_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FILES;
  SEXP Rsh_Fir_reg_FILES1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3188812281/0: expected 0, got %d", NCAPTURES);

  // FILES = ld FILES
  Rsh_Fir_reg_FILES = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // FILES1 = force? FILES
  Rsh_Fir_reg_FILES1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FILES);
  // checkMissing(FILES1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_FILES1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return FILES1
  return Rsh_Fir_reg_FILES1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
