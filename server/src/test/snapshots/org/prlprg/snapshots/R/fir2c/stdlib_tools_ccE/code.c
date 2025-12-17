#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner442228296_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner442228296_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner442228296_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner442228296_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner442228296_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner442228296_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner442228296_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner442228296_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner442228296_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner442228296_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner442228296
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner442228296_, RHO, CCP);
  // st ccE = r
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
SEXP Rsh_Fir_user_function_inner442228296_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner442228296 dynamic dispatch ([lines, include, clean])

  return Rsh_Fir_user_version_inner442228296_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner442228296_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner442228296 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner442228296/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_include;  // include
  SEXP Rsh_Fir_reg_clean;  // clean
  SEXP Rsh_Fir_reg_include_isMissing;  // include_isMissing
  SEXP Rsh_Fir_reg_include_orDefault;  // include_orDefault
  SEXP Rsh_Fir_reg_R_home;  // R_home
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_clean_isMissing;  // clean_isMissing
  SEXP Rsh_Fir_reg_clean_orDefault;  // clean_orDefault
  SEXP Rsh_Fir_reg_Sys_which;  // Sys_which
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_tempfile;  // tempfile
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_writeLines;  // writeLines
  SEXP Rsh_Fir_reg_lines1_;  // lines1
  SEXP Rsh_Fir_reg_lines2_;  // lines2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_tfile;  // tfile
  SEXP Rsh_Fir_reg_tfile1_;  // tfile1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_include1_;  // include1
  SEXP Rsh_Fir_reg_include2_;  // include2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_tfile2_;  // tfile2
  SEXP Rsh_Fir_reg_tfile3_;  // tfile3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_system;  // system
  SEXP Rsh_Fir_reg_cmd;  // cmd
  SEXP Rsh_Fir_reg_cmd1_;  // cmd1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_clean1_;  // clean1
  SEXP Rsh_Fir_reg_clean2_;  // clean2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ccEclean;  // ccEclean
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_tfile4_;  // tfile4
  SEXP Rsh_Fir_reg_tfile5_;  // tfile5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_val2_;  // val2
  SEXP Rsh_Fir_reg_val3_;  // val3

  // Bind parameters
  Rsh_Fir_reg_lines = PARAMS[0];
  Rsh_Fir_reg_include = PARAMS[1];
  Rsh_Fir_reg_clean = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st lines = lines
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_lines, RHO);
  (void)(Rsh_Fir_reg_lines);
  // include_isMissing = missing.0(include)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_include;
  Rsh_Fir_reg_include_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if include_isMissing then L0() else L1(include)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_include_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(include)
    Rsh_Fir_reg_include_orDefault = Rsh_Fir_reg_include;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   R_home = ldf `R.home`;
  //   r = dyn R_home("include");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_include_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st include = include_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_include_orDefault, RHO);
  (void)(Rsh_Fir_reg_include_orDefault);
  // clean_isMissing = missing.0(clean)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_clean;
  Rsh_Fir_reg_clean_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if clean_isMissing then L2(TRUE) else L2(clean)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_clean_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_clean_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(clean)
    Rsh_Fir_reg_clean_orDefault = Rsh_Fir_reg_clean;
    goto L2_;
  }

L2_:;
  // st clean = clean_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_clean_orDefault, RHO);
  (void)(Rsh_Fir_reg_clean_orDefault);
  // Sys_which = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L5_:;
  // writeLines = ldf writeLines
  Rsh_Fir_reg_writeLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

L6_:;
  // val2 = ld val
  Rsh_Fir_reg_val2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L28() else D15()
  // L28()
  goto L28_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r2 = dyn Sys_which("cc")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // r3 = `==`(r2, "")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L9() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L3()
    goto L3_;
  }

L9_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r4 = dyn stop("'cc' is not on the path")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L4()
  // L4()
  goto L4_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r6 = dyn tempfile[fileext](".h")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 16 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // st tfile = r6
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym = ldf `on.exit`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf `on.exit` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r9 = dyn on_exit(<lang unlink(tfile)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

L16_:;
  // r7 = dyn base(<lang unlink(tfile)>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p1 = prom<V +>{
  //   lines1 = ld lines;
  //   lines2 = force? lines1;
  //   checkMissing(lines2);
  //   return lines2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_1, CCP, RHO);
  // p2 = prom<V +>{
  //   tfile = ld tfile;
  //   tfile1 = force? tfile;
  //   checkMissing(tfile1);
  //   return tfile1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_2, CCP, RHO);
  // r12 = dyn writeLines(p1, p2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p3 = prom<V +>{
  //   include1 = ld include;
  //   include2 = force? include1;
  //   checkMissing(include2);
  //   return include2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_3, CCP, RHO);
  // p4 = prom<V +>{
  //   tfile2 = ld tfile;
  //   tfile3 = force? tfile2;
  //   checkMissing(tfile3);
  //   return tfile3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_4, CCP, RHO);
  // r15 = dyn sprintf("cc -E -I%s %s", p3, p4)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // st cmd = r15
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // system = ldf system
  Rsh_Fir_reg_system = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p5 = prom<V +>{
  //   cmd = ld cmd;
  //   cmd1 = force? cmd;
  //   checkMissing(cmd1);
  //   return cmd1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_5, CCP, RHO);
  // r17 = dyn system[, intern](p5, TRUE)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 38 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // st val = r17
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // clean1 = ld clean
  Rsh_Fir_reg_clean1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D12()
  // L23()
  goto L23_;

D12_:;
  // deopt 40 [clean1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_clean1_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // clean2 = force? clean1
  Rsh_Fir_reg_clean2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_clean1_);
  // checkMissing(clean2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_clean2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(clean2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_clean2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L24() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L24()
    goto L24_;
  } else {
  // L6()
    goto L6_;
  }

L24_:;
  // ccEclean = ldf ccEclean
  Rsh_Fir_reg_ccEclean = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L25() else D13()
  // L25()
  goto L25_;

D13_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p6 = prom<V +>{
  //   val = ld val;
  //   val1 = force? val;
  //   checkMissing(val1);
  //   return val1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_6, CCP, RHO);
  // p7 = prom<V +>{
  //   tfile4 = ld tfile;
  //   tfile5 = force? tfile4;
  //   checkMissing(tfile5);
  //   return tfile5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner442228296_7, CCP, RHO);
  // r20 = dyn ccEclean(p6, p7)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ccEclean, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D14_:;
  // deopt 46 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r20
  return Rsh_Fir_reg_r20_;

D15_:;
  // deopt 47 [val2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_val2_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // val3 = force? val2
  Rsh_Fir_reg_val3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val2_);
  // checkMissing(val3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_val3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return val3
  return Rsh_Fir_reg_val3_;
}
SEXP Rsh_Fir_user_promise_inner442228296_(SEXP CCP, SEXP RHO) {
  // R_home = ldf `R.home`
  Rsh_Fir_reg_R_home = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn R_home("include")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner442228296_1(SEXP CCP, SEXP RHO) {
  // lines1 = ld lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lines2 = force? lines1
  Rsh_Fir_reg_lines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines1_);
  // checkMissing(lines2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_lines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return lines2
  return Rsh_Fir_reg_lines2_;
}
SEXP Rsh_Fir_user_promise_inner442228296_2(SEXP CCP, SEXP RHO) {
  // tfile = ld tfile
  Rsh_Fir_reg_tfile = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // tfile1 = force? tfile
  Rsh_Fir_reg_tfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tfile);
  // checkMissing(tfile1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_tfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return tfile1
  return Rsh_Fir_reg_tfile1_;
}
SEXP Rsh_Fir_user_promise_inner442228296_3(SEXP CCP, SEXP RHO) {
  // include1 = ld include
  Rsh_Fir_reg_include1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // include2 = force? include1
  Rsh_Fir_reg_include2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_include1_);
  // checkMissing(include2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_include2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return include2
  return Rsh_Fir_reg_include2_;
}
SEXP Rsh_Fir_user_promise_inner442228296_4(SEXP CCP, SEXP RHO) {
  // tfile2 = ld tfile
  Rsh_Fir_reg_tfile2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // tfile3 = force? tfile2
  Rsh_Fir_reg_tfile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tfile2_);
  // checkMissing(tfile3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_tfile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return tfile3
  return Rsh_Fir_reg_tfile3_;
}
SEXP Rsh_Fir_user_promise_inner442228296_5(SEXP CCP, SEXP RHO) {
  // cmd = ld cmd
  Rsh_Fir_reg_cmd = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // cmd1 = force? cmd
  Rsh_Fir_reg_cmd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cmd);
  // checkMissing(cmd1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_cmd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return cmd1
  return Rsh_Fir_reg_cmd1_;
}
SEXP Rsh_Fir_user_promise_inner442228296_6(SEXP CCP, SEXP RHO) {
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return val1
  return Rsh_Fir_reg_val1_;
}
SEXP Rsh_Fir_user_promise_inner442228296_7(SEXP CCP, SEXP RHO) {
  // tfile4 = ld tfile
  Rsh_Fir_reg_tfile4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // tfile5 = force? tfile4
  Rsh_Fir_reg_tfile5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tfile4_);
  // checkMissing(tfile5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_tfile5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return tfile5
  return Rsh_Fir_reg_tfile5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
