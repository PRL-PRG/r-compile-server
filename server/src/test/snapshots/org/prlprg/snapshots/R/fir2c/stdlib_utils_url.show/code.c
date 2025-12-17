#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1599368878_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1599368878_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1599368878_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1599368878_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1599368878_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1599368878_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1599368878_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1599368878_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1599368878_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1599368878_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner1599368878
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1599368878_, RHO, CCP);
  // st `url.show` = r
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
SEXP Rsh_Fir_user_function_inner1599368878_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1599368878 dynamic dispatch ([url, title, file, `delete.file`, method, `...`])

  return Rsh_Fir_user_version_inner1599368878_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1599368878_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1599368878 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1599368878/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_url;  // url
  SEXP Rsh_Fir_reg_title;  // title
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_delete_file;  // delete_file
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_title_isMissing;  // title_isMissing
  SEXP Rsh_Fir_reg_title_orDefault;  // title_orDefault
  SEXP Rsh_Fir_reg_url1_;  // url1
  SEXP Rsh_Fir_reg_url2_;  // url2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_file_isMissing;  // file_isMissing
  SEXP Rsh_Fir_reg_file_orDefault;  // file_orDefault
  SEXP Rsh_Fir_reg_tempfile;  // tempfile
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_delete_file_isMissing;  // delete_file_isMissing
  SEXP Rsh_Fir_reg_delete_file_orDefault;  // delete_file_orDefault
  SEXP Rsh_Fir_reg_download_file;  // download_file
  SEXP Rsh_Fir_reg_url3_;  // url3
  SEXP Rsh_Fir_reg_url4_;  // url4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_file_show;  // file_show
  SEXP Rsh_Fir_reg_file3_;  // file3
  SEXP Rsh_Fir_reg_file4_;  // file4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_delete_file1_;  // delete_file1
  SEXP Rsh_Fir_reg_delete_file2_;  // delete_file2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_title1_;  // title1
  SEXP Rsh_Fir_reg_title2_;  // title2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r12_;  // r12

  // Bind parameters
  Rsh_Fir_reg_url = PARAMS[0];
  Rsh_Fir_reg_title = PARAMS[1];
  Rsh_Fir_reg_file = PARAMS[2];
  Rsh_Fir_reg_delete_file = PARAMS[3];
  Rsh_Fir_reg_method = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st url = url
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_url, RHO);
  (void)(Rsh_Fir_reg_url);
  // title_isMissing = missing.0(title)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_title;
  Rsh_Fir_reg_title_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if title_isMissing then L0() else L1(title)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_title_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(title)
    Rsh_Fir_reg_title_orDefault = Rsh_Fir_reg_title;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   url1 = ld url;
  //   url2 = force? url1;
  //   checkMissing(url2);
  //   return url2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_title_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st title = title_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_title_orDefault, RHO);
  (void)(Rsh_Fir_reg_title_orDefault);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if file_isMissing then L2() else L3(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(file)
    Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_file;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   tempfile = ldf tempfile;
  //   r1 = dyn tempfile();
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st file = file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_file_orDefault);
  // delete_file_isMissing = missing.0(delete_file)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_delete_file;
  Rsh_Fir_reg_delete_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if delete_file_isMissing then L4(TRUE) else L4(delete_file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_delete_file_isMissing)) {
  // L4(TRUE)
    Rsh_Fir_reg_delete_file_orDefault = Rsh_const(CCP, 5);
    goto L4_;
  } else {
  // L4(delete_file)
    Rsh_Fir_reg_delete_file_orDefault = Rsh_Fir_reg_delete_file;
    goto L4_;
  }

L4_:;
  // st `delete.file` = delete_file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_delete_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_delete_file_orDefault);
  // st method = method
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_method, RHO);
  (void)(Rsh_Fir_reg_method);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // download_file = ldf `download.file`
  Rsh_Fir_reg_download_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // file_show = ldf `file.show`
  Rsh_Fir_reg_file_show = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   url3 = ld url;
  //   url4 = force? url3;
  //   checkMissing(url4);
  //   return url4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_2, CCP, RHO);
  // p3 = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_3, CCP, RHO);
  // p4 = prom<V +>{
  //   method1 = ld method;
  //   method2 = force? method1;
  //   checkMissing(method2);
  //   return method2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_4, CCP, RHO);
  // r6 = dyn download_file[, destfile, method, mode](p2, p3, p4, "w")
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_download_file, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
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
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L9() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L5()
    goto L5_;
  }

L9_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r7 = dyn stop("transfer failure")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 13 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L6()
  // L6()
  goto L6_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p5 = prom<V +>{
  //   file3 = ld file;
  //   file4 = force? file3;
  //   checkMissing(file4);
  //   return file4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_5, CCP, RHO);
  // p6 = prom<V +>{
  //   delete_file1 = ld `delete.file`;
  //   delete_file2 = force? delete_file1;
  //   checkMissing(delete_file2);
  //   return delete_file2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_6, CCP, RHO);
  // p7 = prom<V +>{
  //   title1 = ld title;
  //   title2 = force? title1;
  //   checkMissing(title2);
  //   return title2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1599368878_7, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r12 = dyn file_show[, `delete.file`, title, `...`](p5, p6, p7, ddd1)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args13[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names2[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_show, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_(SEXP CCP, SEXP RHO) {
  // url1 = ld url
  Rsh_Fir_reg_url1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // url2 = force? url1
  Rsh_Fir_reg_url2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_url1_);
  // checkMissing(url2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_url2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return url2
  return Rsh_Fir_reg_url2_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_1(SEXP CCP, SEXP RHO) {
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r1 = dyn tempfile()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 0, NULL, NULL, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_2(SEXP CCP, SEXP RHO) {
  // url3 = ld url
  Rsh_Fir_reg_url3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // url4 = force? url3
  Rsh_Fir_reg_url4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_url3_);
  // checkMissing(url4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_url4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return url4
  return Rsh_Fir_reg_url4_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_3(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_4(SEXP CCP, SEXP RHO) {
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return method2
  return Rsh_Fir_reg_method2_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_5(SEXP CCP, SEXP RHO) {
  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return file4
  return Rsh_Fir_reg_file4_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_6(SEXP CCP, SEXP RHO) {
  // delete_file1 = ld `delete.file`
  Rsh_Fir_reg_delete_file1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // delete_file2 = force? delete_file1
  Rsh_Fir_reg_delete_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_delete_file1_);
  // checkMissing(delete_file2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_delete_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return delete_file2
  return Rsh_Fir_reg_delete_file2_;
}
SEXP Rsh_Fir_user_promise_inner1599368878_7(SEXP CCP, SEXP RHO) {
  // title1 = ld title
  Rsh_Fir_reg_title1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // title2 = force? title1
  Rsh_Fir_reg_title2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_title1_);
  // checkMissing(title2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_title2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return title2
  return Rsh_Fir_reg_title2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
