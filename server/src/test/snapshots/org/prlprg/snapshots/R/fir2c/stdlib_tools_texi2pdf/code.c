#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2296593324_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2296593324_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2296593324_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296593324_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296593324_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296593324_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296593324_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296593324_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2296593324_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner2296593324
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2296593324_, RHO, CCP);
  // st texi2pdf = r
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
SEXP Rsh_Fir_user_function_inner2296593324_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2296593324 dynamic dispatch ([file, clean, quiet, texi2dvi, texinputs, index])

  return Rsh_Fir_user_version_inner2296593324_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2296593324_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2296593324 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2296593324/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_clean;  // clean
  SEXP Rsh_Fir_reg_quiet;  // quiet
  SEXP Rsh_Fir_reg_texi2dvi;  // texi2dvi
  SEXP Rsh_Fir_reg_texinputs;  // texinputs
  SEXP Rsh_Fir_reg_index;  // index
  SEXP Rsh_Fir_reg_clean_isMissing;  // clean_isMissing
  SEXP Rsh_Fir_reg_clean_orDefault;  // clean_orDefault
  SEXP Rsh_Fir_reg_quiet_isMissing;  // quiet_isMissing
  SEXP Rsh_Fir_reg_quiet_orDefault;  // quiet_orDefault
  SEXP Rsh_Fir_reg_texi2dvi_isMissing;  // texi2dvi_isMissing
  SEXP Rsh_Fir_reg_texi2dvi_orDefault;  // texi2dvi_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_texinputs_isMissing;  // texinputs_isMissing
  SEXP Rsh_Fir_reg_texinputs_orDefault;  // texinputs_orDefault
  SEXP Rsh_Fir_reg_index_isMissing;  // index_isMissing
  SEXP Rsh_Fir_reg_index_orDefault;  // index_orDefault
  SEXP Rsh_Fir_reg_texi2dvi1_;  // texi2dvi1
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_clean1_;  // clean1
  SEXP Rsh_Fir_reg_clean2_;  // clean2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_quiet1_;  // quiet1
  SEXP Rsh_Fir_reg_quiet2_;  // quiet2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_texi2dvi2_;  // texi2dvi2
  SEXP Rsh_Fir_reg_texi2dvi3_;  // texi2dvi3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_texinputs1_;  // texinputs1
  SEXP Rsh_Fir_reg_texinputs2_;  // texinputs2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_index1_;  // index1
  SEXP Rsh_Fir_reg_index2_;  // index2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_clean = PARAMS[1];
  Rsh_Fir_reg_quiet = PARAMS[2];
  Rsh_Fir_reg_texi2dvi = PARAMS[3];
  Rsh_Fir_reg_texinputs = PARAMS[4];
  Rsh_Fir_reg_index = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // clean_isMissing = missing.0(clean)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_clean;
  Rsh_Fir_reg_clean_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if clean_isMissing then L0(FALSE) else L0(clean)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_clean_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_clean_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(clean)
    Rsh_Fir_reg_clean_orDefault = Rsh_Fir_reg_clean;
    goto L0_;
  }

L0_:;
  // st clean = clean_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_clean_orDefault, RHO);
  (void)(Rsh_Fir_reg_clean_orDefault);
  // quiet_isMissing = missing.0(quiet)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_quiet;
  Rsh_Fir_reg_quiet_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if quiet_isMissing then L1(TRUE) else L1(quiet)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quiet_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_quiet_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(quiet)
    Rsh_Fir_reg_quiet_orDefault = Rsh_Fir_reg_quiet;
    goto L1_;
  }

L1_:;
  // st quiet = quiet_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_quiet_orDefault, RHO);
  (void)(Rsh_Fir_reg_quiet_orDefault);
  // texi2dvi_isMissing = missing.0(texi2dvi)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_texi2dvi;
  Rsh_Fir_reg_texi2dvi_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if texi2dvi_isMissing then L2() else L3(texi2dvi)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_texi2dvi_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(texi2dvi)
    Rsh_Fir_reg_texi2dvi_orDefault = Rsh_Fir_reg_texi2dvi;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("texi2dvi");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296593324_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_texi2dvi_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st texi2dvi = texi2dvi_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_texi2dvi_orDefault, RHO);
  (void)(Rsh_Fir_reg_texi2dvi_orDefault);
  // texinputs_isMissing = missing.0(texinputs)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_texinputs;
  Rsh_Fir_reg_texinputs_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if texinputs_isMissing then L4(NULL) else L4(texinputs)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_texinputs_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_texinputs_orDefault = Rsh_const(CCP, 9);
    goto L4_;
  } else {
  // L4(texinputs)
    Rsh_Fir_reg_texinputs_orDefault = Rsh_Fir_reg_texinputs;
    goto L4_;
  }

L4_:;
  // st texinputs = texinputs_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_texinputs_orDefault, RHO);
  (void)(Rsh_Fir_reg_texinputs_orDefault);
  // index_isMissing = missing.0(index)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_index;
  Rsh_Fir_reg_index_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if index_isMissing then L5(TRUE) else L5(index)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_index_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_index_orDefault = Rsh_const(CCP, 4);
    goto L5_;
  } else {
  // L5(index)
    Rsh_Fir_reg_index_orDefault = Rsh_Fir_reg_index;
    goto L5_;
  }

L5_:;
  // st index = index_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_index_orDefault, RHO);
  (void)(Rsh_Fir_reg_index_orDefault);
  // texi2dvi1 = ldf texi2dvi
  Rsh_Fir_reg_texi2dvi1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296593324_1, CCP, RHO);
  // p2 = prom<V +>{
  //   clean1 = ld clean;
  //   clean2 = force? clean1;
  //   checkMissing(clean2);
  //   return clean2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296593324_2, CCP, RHO);
  // p3 = prom<V +>{
  //   quiet1 = ld quiet;
  //   quiet2 = force? quiet1;
  //   checkMissing(quiet2);
  //   return quiet2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296593324_3, CCP, RHO);
  // p4 = prom<V +>{
  //   texi2dvi2 = ld texi2dvi;
  //   texi2dvi3 = force? texi2dvi2;
  //   checkMissing(texi2dvi3);
  //   return texi2dvi3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296593324_4, CCP, RHO);
  // p5 = prom<V +>{
  //   texinputs1 = ld texinputs;
  //   texinputs2 = force? texinputs1;
  //   checkMissing(texinputs2);
  //   return texinputs2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296593324_5, CCP, RHO);
  // p6 = prom<V +>{
  //   index1 = ld index;
  //   index2 = force? index1;
  //   checkMissing(index2);
  //   return index2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2296593324_6, CCP, RHO);
  // r8 = dyn texi2dvi1[file, pdf, clean, quiet, texi2dvi, texinputs, index](p1, TRUE, p2, p3, p4, p5, p6)
  SEXP Rsh_Fir_array_args12[7];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[4] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[5] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[6] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names1[7];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names1[4] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names1[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names1[6] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_texi2dvi1_, 7, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 16 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner2296593324_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r = dyn getOption("texi2dvi")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2296593324_1(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_user_promise_inner2296593324_2(SEXP CCP, SEXP RHO) {
  // clean1 = ld clean
  Rsh_Fir_reg_clean1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // clean2 = force? clean1
  Rsh_Fir_reg_clean2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_clean1_);
  // checkMissing(clean2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_clean2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return clean2
  return Rsh_Fir_reg_clean2_;
}
SEXP Rsh_Fir_user_promise_inner2296593324_3(SEXP CCP, SEXP RHO) {
  // quiet1 = ld quiet
  Rsh_Fir_reg_quiet1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // quiet2 = force? quiet1
  Rsh_Fir_reg_quiet2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quiet1_);
  // checkMissing(quiet2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_quiet2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return quiet2
  return Rsh_Fir_reg_quiet2_;
}
SEXP Rsh_Fir_user_promise_inner2296593324_4(SEXP CCP, SEXP RHO) {
  // texi2dvi2 = ld texi2dvi
  Rsh_Fir_reg_texi2dvi2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // texi2dvi3 = force? texi2dvi2
  Rsh_Fir_reg_texi2dvi3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_texi2dvi2_);
  // checkMissing(texi2dvi3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_texi2dvi3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return texi2dvi3
  return Rsh_Fir_reg_texi2dvi3_;
}
SEXP Rsh_Fir_user_promise_inner2296593324_5(SEXP CCP, SEXP RHO) {
  // texinputs1 = ld texinputs
  Rsh_Fir_reg_texinputs1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // texinputs2 = force? texinputs1
  Rsh_Fir_reg_texinputs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_texinputs1_);
  // checkMissing(texinputs2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_texinputs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return texinputs2
  return Rsh_Fir_reg_texinputs2_;
}
SEXP Rsh_Fir_user_promise_inner2296593324_6(SEXP CCP, SEXP RHO) {
  // index1 = ld index
  Rsh_Fir_reg_index1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // index2 = force? index1
  Rsh_Fir_reg_index2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_index1_);
  // checkMissing(index2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_index2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return index2
  return Rsh_Fir_reg_index2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
