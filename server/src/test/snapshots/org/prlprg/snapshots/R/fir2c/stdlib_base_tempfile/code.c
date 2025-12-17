#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1471548132_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1471548132_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1471548132_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1471548132
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1471548132_, RHO, CCP);
  // st tempfile = r
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
SEXP Rsh_Fir_user_function_inner1471548132_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1471548132 dynamic dispatch ([pattern, tmpdir, fileext])

  return Rsh_Fir_user_version_inner1471548132_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1471548132_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1471548132 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1471548132/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_pattern;  // pattern
  SEXP Rsh_Fir_reg_tmpdir;  // tmpdir
  SEXP Rsh_Fir_reg_fileext;  // fileext
  SEXP Rsh_Fir_reg_pattern_isMissing;  // pattern_isMissing
  SEXP Rsh_Fir_reg_pattern_orDefault;  // pattern_orDefault
  SEXP Rsh_Fir_reg_tmpdir_isMissing;  // tmpdir_isMissing
  SEXP Rsh_Fir_reg_tmpdir_orDefault;  // tmpdir_orDefault
  SEXP Rsh_Fir_reg_tempdir;  // tempdir
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_fileext_isMissing;  // fileext_isMissing
  SEXP Rsh_Fir_reg_fileext_orDefault;  // fileext_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_pattern1_;  // pattern1
  SEXP Rsh_Fir_reg_pattern2_;  // pattern2
  SEXP Rsh_Fir_reg_tmpdir1_;  // tmpdir1
  SEXP Rsh_Fir_reg_tmpdir2_;  // tmpdir2
  SEXP Rsh_Fir_reg_fileext1_;  // fileext1
  SEXP Rsh_Fir_reg_fileext2_;  // fileext2
  SEXP Rsh_Fir_reg_tempfile;  // tempfile
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_pattern = PARAMS[0];
  Rsh_Fir_reg_tmpdir = PARAMS[1];
  Rsh_Fir_reg_fileext = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // pattern_isMissing = missing.0(pattern)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_pattern;
  Rsh_Fir_reg_pattern_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if pattern_isMissing then L0("file") else L0(pattern)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pattern_isMissing)) {
  // L0("file")
    Rsh_Fir_reg_pattern_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(pattern)
    Rsh_Fir_reg_pattern_orDefault = Rsh_Fir_reg_pattern;
    goto L0_;
  }

L0_:;
  // st pattern = pattern_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_pattern_orDefault, RHO);
  (void)(Rsh_Fir_reg_pattern_orDefault);
  // tmpdir_isMissing = missing.0(tmpdir)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_tmpdir;
  Rsh_Fir_reg_tmpdir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if tmpdir_isMissing then L1() else L2(tmpdir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tmpdir_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(tmpdir)
    Rsh_Fir_reg_tmpdir_orDefault = Rsh_Fir_reg_tmpdir;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   tempdir = ldf tempdir;
  //   r = dyn tempdir();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1471548132_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_tmpdir_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st tmpdir = tmpdir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_tmpdir_orDefault, RHO);
  (void)(Rsh_Fir_reg_tmpdir_orDefault);
  // fileext_isMissing = missing.0(fileext)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_fileext;
  Rsh_Fir_reg_fileext_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if fileext_isMissing then L3("") else L3(fileext)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fileext_isMissing)) {
  // L3("")
    Rsh_Fir_reg_fileext_orDefault = Rsh_const(CCP, 5);
    goto L3_;
  } else {
  // L3(fileext)
    Rsh_Fir_reg_fileext_orDefault = Rsh_Fir_reg_fileext;
    goto L3_;
  }

L3_:;
  // st fileext = fileext_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_fileext_orDefault, RHO);
  (void)(Rsh_Fir_reg_fileext_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

L5_:;
  // pattern1 = ld pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base(<lang tempfile(pattern, tmpdir, fileext)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L4_;

D0_:;
  // deopt 2 [pattern1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_pattern1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // pattern2 = force? pattern1
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern1_);
  // checkMissing(pattern2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_pattern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // tmpdir1 = ld tmpdir
  Rsh_Fir_reg_tmpdir1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 4 [tmpdir1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_tmpdir1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // tmpdir2 = force? tmpdir1
  Rsh_Fir_reg_tmpdir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmpdir1_);
  // checkMissing(tmpdir2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_tmpdir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // fileext1 = ld fileext
  Rsh_Fir_reg_fileext1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 6 [fileext1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_fileext1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // fileext2 = force? fileext1
  Rsh_Fir_reg_fileext2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fileext1_);
  // checkMissing(fileext2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_fileext2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // tempfile = ldf tempfile in base
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r4 = dyn tempfile(pattern2, tmpdir2, fileext2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_pattern2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_tmpdir2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_fileext2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner1471548132_(SEXP CCP, SEXP RHO) {
  // tempdir = ldf tempdir
  Rsh_Fir_reg_tempdir = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r = dyn tempdir()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempdir, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
