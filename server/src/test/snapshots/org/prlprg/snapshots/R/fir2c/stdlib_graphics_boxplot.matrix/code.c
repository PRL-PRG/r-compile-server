#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1353724977_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1353724977_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1353724977_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1353724977_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_boxplot;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r13_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1353724977
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1353724977_, RHO, CCP);
  // st `boxplot.matrix` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   r1 = `:`(1.0, 100.0);
  //   r2 = `/`(r1, 21.0);
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   rnorm = ldf rnorm;
  //   r4 = dyn rnorm(100.0);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   rt = ldf rt;
  //   r6 = dyn rt[, df](100.0, 5.0);
  //   return r6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   rgamma = ldf rgamma;
  //   r8 = dyn rgamma[, shape](100.0, 2.0);
  //   return r8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r10 = dyn cbind[Uni05, Norm, T5, Gam2](p, p1, p2, p3)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args5[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names3[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 4, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 13 [r10]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st mat = r10
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // boxplot = ldf boxplot
  Rsh_Fir_reg_boxplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p4 = prom<V +>{
  //   mat = ld mat;
  //   mat1 = force? mat;
  //   checkMissing(mat1);
  //   return mat1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   return <int 1, 2, 3, 4>;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r13 = dyn boxplot[, main, notch, col](p4, "boxplot.matrix(...., main = ...)", TRUE, p5)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args7[3] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_boxplot, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 24 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r1 = `:`(1.0, 100.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args);
  // r2 = `/`(r1, 21.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args1);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rnorm;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // r4 = dyn rnorm(100.0)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rt;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rt = ldf rt
  Rsh_Fir_reg_rt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r6 = dyn rt[, df](100.0, 5.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rt, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rgamma;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rgamma = ldf rgamma
  Rsh_Fir_reg_rgamma = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r8 = dyn rgamma[, shape](100.0, 2.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rgamma, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mat;
  SEXP Rsh_Fir_reg_mat1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mat = ld mat
  Rsh_Fir_reg_mat = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // mat1 = force? mat
  Rsh_Fir_reg_mat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mat);
  // checkMissing(mat1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_mat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return mat1
  return Rsh_Fir_reg_mat1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4>
  return Rsh_const(CCP, 18);
}
SEXP Rsh_Fir_user_function_inner1353724977_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1353724977 dynamic dispatch ([x, `use.cols`, `...`])

  return Rsh_Fir_user_version_inner1353724977_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1353724977_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1353724977 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1353724977/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_use_cols;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_use_cols_isMissing;
  SEXP Rsh_Fir_reg_use_cols_orDefault;
  SEXP Rsh_Fir_reg_use_cols1_;
  SEXP Rsh_Fir_reg_use_cols2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_split;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_split1_;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_use_cols3_;
  SEXP Rsh_Fir_reg_use_cols4_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_nam;
  SEXP Rsh_Fir_reg_nam1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_boxplot1;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r45_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_use_cols = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // use_cols_isMissing = missing.0(use_cols)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_use_cols;
  Rsh_Fir_reg_use_cols_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if use_cols_isMissing then L0(TRUE) else L0(use_cols)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_use_cols_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_use_cols_orDefault = Rsh_const(CCP, 20);
    goto L0_;
  } else {
  // L0(use_cols)
    Rsh_Fir_reg_use_cols_orDefault = Rsh_Fir_reg_use_cols;
    goto L0_;
  }

L0_:;
  // st `use.cols` = use_cols_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_use_cols_orDefault, RHO);
  (void)(Rsh_Fir_reg_use_cols_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // use_cols1 = ld `use.cols`
  Rsh_Fir_reg_use_cols1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

D0_:;
  // deopt 0 [use_cols1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_use_cols1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // use_cols2 = force? use_cols1
  Rsh_Fir_reg_use_cols2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_cols1_);
  // checkMissing(use_cols2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_use_cols2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(use_cols2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_use_cols2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c then L10() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // split1 = ldf split
  Rsh_Fir_reg_split1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L2_:;
  // st groups = r19
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L10_:;
  // split = ldf split
  Rsh_Fir_reg_split = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // c4 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c4 then L27() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L27()
    goto L27_;
  } else {
  // L6()
    goto L6_;
  }

L11_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c1 = ldf c in base;
  //   r2 = dyn c1(x2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf `rep.int`;
  //   base1 = ldf `rep.int` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r5):
  //   return r5;
  // L2():
  //   ncol = ldf ncol;
  //   p1 = prom<V +>{
  //     x3 = ld x;
  //     x4 = force? x3;
  //     checkMissing(x4);
  //     return x4;
  //   };
  //   r7 = dyn ncol(p1);
  //   r8 = `:`(1, r7);
  //   sym2 = ldf `rep.int`;
  //   base2 = ldf `rep.int` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L3():
  //   r4 = dyn base1(<lang `:`(1, ncol(x))>, <lang rep.int(nrow(x), ncol(x))>);
  //   goto L0(r4);
  // L1(r10):
  //   rep_int1 = ldf `rep.int` in base;
  //   r16 = dyn rep_int1(r8, r10);
  //   goto L0(r16);
  // L4():
  //   nrow = ldf nrow;
  //   p2 = prom<V +>{
  //     x5 = ld x;
  //     x6 = force? x5;
  //     checkMissing(x6);
  //     return x6;
  //   };
  //   r12 = dyn nrow(p2);
  //   ncol1 = ldf ncol;
  //   p3 = prom<V +>{
  //     x7 = ld x;
  //     x8 = force? x7;
  //     checkMissing(x8);
  //     return x8;
  //   };
  //   r14 = dyn ncol1(p3);
  //   rep_int = ldf `rep.int` in base;
  //   r15 = dyn rep_int(r12, r14);
  //   goto L1(r15);
  // L5():
  //   r9 = dyn base2(<lang nrow(x)>, <lang ncol(x)>);
  //   goto L1(r9);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_1, 0, NULL, CCP, RHO);
  // r18 = dyn split(p, p4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L14_:;
  // p5 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c2 = ldf c in base;
  //   r22 = dyn c2(x10);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base3(<sym x>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_5, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   seq = ldf seq;
  //   p7 = prom<V +>{
  //     nrow1 = ldf nrow;
  //     p6 = prom<V +>{
  //       x11 = ld x;
  //       x12 = force? x11;
  //       checkMissing(x12);
  //       return x12;
  //     };
  //     r25 = dyn nrow1(p6);
  //     return r25;
  //   };
  //   r27 = dyn seq(p7);
  //   return r27;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_6, 0, NULL, CCP, RHO);
  // r29 = dyn split1(p5, p8)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_split1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L16_:;
  // sym5 = ldf dimnames
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base5 = ldf dimnames in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard5 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L17_:;
  // r30 = dyn base4(<lang `<-`(nam, `[[`(dimnames(x), `+`(1.0, use.cols)))>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L3(r30)
  // L3(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L3_;

D2_:;
  // deopt 6 [r18]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 11 [r29]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // c3 = `is.object`(r33)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args41);
  // if c3 then L22() else L23(r33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L22()
    goto L22_;
  } else {
  // L23(r33)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r33_;
    goto L23_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym6 = ldf invisible
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base6 = ldf invisible in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard6 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L12_:;
  // goto L2(r18)
  // L2(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L2_;

L15_:;
  // goto L2(r29)
  // L2(r29)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r29_;
  goto L2_;

L18_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L19_:;
  // r32 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L4(r32)
  // L4(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L4_;

L27_:;
  // nam = ld nam
  Rsh_Fir_reg_nam = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

D5_:;
  // deopt 17 [x13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 29 [nam]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_nam;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L5_:;
  // st nam = dx1
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r39 = dyn length(dx1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;

L20_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r34 = dyn dimnames(x14)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

L22_:;
  // dr = tryDispatchBuiltin.1("[[", r33)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L24() else L23(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_dr;
    goto L23_;
  }

L23_:;
  // use_cols3 = ld `use.cols`
  Rsh_Fir_reg_use_cols3_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

L28_:;
  // nam1 = force? nam
  Rsh_Fir_reg_nam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam);
  // checkMissing(nam1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_nam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // l = ld groups
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L32_:;
  // boxplot = ldf boxplot
  Rsh_Fir_reg_boxplot1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

L33_:;
  // r41 = dyn base6(<lang boxplot(groups, ...)>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L8(r41)
  // L8(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L8_;

D6_:;
  // deopt 20 [r34]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 22 [r36, 1.0, use_cols3]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_use_cols3_;
  Rsh_Fir_deopt(22, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 28 [r39]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 32 [nam1, l, nam1]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_nam1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_nam1_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L4(r34)
  // L4(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L4_;

L24_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L25_:;
  // use_cols4 = force? use_cols3
  Rsh_Fir_reg_use_cols4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_cols3_);
  // checkMissing(use_cols4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_use_cols4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r37 = `+`(1.0, use_cols4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_use_cols4_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args53);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r38 = dyn __(r36, r37)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L5(r38)
  // L5(r38)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r38_;
  goto L5_;

L26_:;
  // goto L3(r39)
  // L3(r39)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r39_;
  goto L3_;

L29_:;
  // r40 = dyn names__(l, NULL, nam1)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_nam1_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

L34_:;
  // p9 = prom<V +>{
  //   groups = ld groups;
  //   groups1 = force? groups;
  //   checkMissing(groups1);
  //   return groups1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_9, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // r44 = dyn boxplot[, `...`](p9, ddd1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_boxplot1, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L35() else D13()
  // L35()
  goto L35_;

D11_:;
  // deopt 34 [nam1, r40]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_nam1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 44 [r44]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L30_:;
  // st groups = r40
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L7()
  // L7()
  goto L7_;

L35_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r45 = dyn invisible(r44)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L36() else D14()
  // L36()
  goto L36_;

D14_:;
  // deopt 46 [r45]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L8(r45)
  // L8(r45)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r45_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
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
  return Rsh_Fir_reg_r1_1;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r2 = dyn c1(x2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_ncol1_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_rep_int1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf `rep.int`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf `rep.int` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L2_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_2, 0, NULL, CCP, RHO);
  // r7 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // r8 = `:`(1, r7)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args20);
  // sym2 = ldf `rep.int`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base2 = ldf `rep.int` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r4 = dyn base1(<lang `:`(1, ncol(x))>, <lang rep.int(nrow(x), ncol(x))>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_1;
  goto L0_;

L1_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r16 = dyn rep_int1(r8, r10)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r16_;
  goto L0_;

L4_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p2 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_3, 0, NULL, CCP, RHO);
  // r12 = dyn nrow(p2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // ncol1 = ldf ncol
  Rsh_Fir_reg_ncol1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // p3 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_4, 0, NULL, CCP, RHO);
  // r14 = dyn ncol1(p3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r15 = dyn rep_int(r12, r14)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r15)
  // L1(r15)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r15_;
  goto L1_;

L5_:;
  // r9 = dyn base2(<lang nrow(x)>, <lang ncol(x)>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r22 = dyn c2(x10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p7 = prom<V +>{
  //   nrow1 = ldf nrow;
  //   p6 = prom<V +>{
  //     x11 = ld x;
  //     x12 = force? x11;
  //     checkMissing(x12);
  //     return x12;
  //   };
  //   r25 = dyn nrow1(p6);
  //   return r25;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_7, 0, NULL, CCP, RHO);
  // r27 = dyn seq(p7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrow1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // nrow1 = ldf nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p6 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1353724977_8, 0, NULL, CCP, RHO);
  // r25 = dyn nrow1(p6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner1353724977_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_groups;
  SEXP Rsh_Fir_reg_groups1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1353724977/0: expected 0, got %d", NCAPTURES);

  // groups = ld groups
  Rsh_Fir_reg_groups = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // groups1 = force? groups
  Rsh_Fir_reg_groups1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups);
  // checkMissing(groups1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_groups1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return groups1
  return Rsh_Fir_reg_groups1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
