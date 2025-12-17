#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3787028234_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3787028234_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3787028234_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3787028234_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3787028234_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_marginSums;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_marginSums1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_as_data_frame;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_xtabs;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_tbl;
  SEXP Rsh_Fir_reg_tbl1_;
  SEXP Rsh_Fir_reg_marginSums2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_rowSums;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r16_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3787028234
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3787028234_, RHO, CCP);
  // st marginSums = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn matrix(p, 2.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st m = r2
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // marginSums = ldf marginSums
  Rsh_Fir_reg_marginSums = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn marginSums(p1, 1.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_marginSums, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 13 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // marginSums1 = ldf marginSums
  Rsh_Fir_reg_marginSums1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   return m3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r6 = dyn marginSums1(p2, 2.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_marginSums1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 18 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   UCBAdmissions = ld UCBAdmissions;
  //   UCBAdmissions1 = force? UCBAdmissions;
  //   checkMissing(UCBAdmissions1);
  //   return UCBAdmissions1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r8 = dyn as_data_frame(p3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 22 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // st DF = r8
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // xtabs = ldf xtabs
  Rsh_Fir_reg_xtabs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r9 = dyn __(<sym Freq>, <lang `+`(Gender, Admit)>);
  //   return r9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   DF = ld DF;
  //   DF1 = force? DF;
  //   checkMissing(DF1);
  //   return DF1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r12 = dyn xtabs(p4, p5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xtabs, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 28 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // st tbl = r12
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // tbl = ld tbl
  Rsh_Fir_reg_tbl = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 30 [tbl]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_tbl;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10_:;
  // tbl1 = force? tbl
  Rsh_Fir_reg_tbl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tbl);
  // checkMissing(tbl1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_tbl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // marginSums2 = ldf marginSums
  Rsh_Fir_reg_marginSums2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p6 = prom<V +>{
  //   tbl2 = ld tbl;
  //   tbl3 = force? tbl2;
  //   checkMissing(tbl3);
  //   return tbl3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r14 = dyn marginSums2(p6, "Gender")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_marginSums2_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 36 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L12_:;
  // rowSums = ldf rowSums
  Rsh_Fir_reg_rowSums = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p7 = prom<V +>{
  //   tbl4 = ld tbl;
  //   tbl5 = force? tbl4;
  //   checkMissing(tbl5);
  //   return tbl5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r16 = dyn rowSums(p7)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowSums, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 40 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return m3
  return Rsh_Fir_reg_m3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_UCBAdmissions;
  SEXP Rsh_Fir_reg_UCBAdmissions1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // UCBAdmissions = ld UCBAdmissions
  Rsh_Fir_reg_UCBAdmissions = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // UCBAdmissions1 = force? UCBAdmissions
  Rsh_Fir_reg_UCBAdmissions1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_UCBAdmissions);
  // checkMissing(UCBAdmissions1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_UCBAdmissions1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return UCBAdmissions1
  return Rsh_Fir_reg_UCBAdmissions1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r9 = dyn __(<sym Freq>, <lang `+`(Gender, Admit)>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_DF;
  SEXP Rsh_Fir_reg_DF1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // DF = ld DF
  Rsh_Fir_reg_DF = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // DF1 = force? DF
  Rsh_Fir_reg_DF1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DF);
  // checkMissing(DF1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_DF1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return DF1
  return Rsh_Fir_reg_DF1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tbl2_;
  SEXP Rsh_Fir_reg_tbl3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // tbl2 = ld tbl
  Rsh_Fir_reg_tbl2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // tbl3 = force? tbl2
  Rsh_Fir_reg_tbl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tbl2_);
  // checkMissing(tbl3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_tbl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return tbl3
  return Rsh_Fir_reg_tbl3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tbl4_;
  SEXP Rsh_Fir_reg_tbl5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // tbl4 = ld tbl
  Rsh_Fir_reg_tbl4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // tbl5 = force? tbl4
  Rsh_Fir_reg_tbl5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tbl4_);
  // checkMissing(tbl5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_tbl5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return tbl5
  return Rsh_Fir_reg_tbl5_;
}
SEXP Rsh_Fir_user_function_inner3787028234_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3787028234 dynamic dispatch ([x, margin])

  return Rsh_Fir_user_version_inner3787028234_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3787028234_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3787028234 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3787028234/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_margin;
  SEXP Rsh_Fir_reg_margin_isMissing;
  SEXP Rsh_Fir_reg_margin_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_array;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_margin1_;
  SEXP Rsh_Fir_reg_margin2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_apply;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_is_array1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_margin5_;
  SEXP Rsh_Fir_reg_margin6_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_margin7_;
  SEXP Rsh_Fir_reg_margin8_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_margin9_;
  SEXP Rsh_Fir_reg_margin10_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dim__1_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_dimnames1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_margin11_;
  SEXP Rsh_Fir_reg_margin12_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_oldClass;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_sum2_;
  SEXP Rsh_Fir_reg_r57_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_margin = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // margin_isMissing = missing.0(margin)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_margin;
  Rsh_Fir_reg_margin_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if margin_isMissing then L0(NULL) else L0(margin)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_margin_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_margin_orDefault = Rsh_const(CCP, 17);
    goto L0_;
  } else {
  // L0(margin)
    Rsh_Fir_reg_margin_orDefault = Rsh_Fir_reg_margin;
    goto L0_;
  }

L0_:;
  // st margin = margin_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_margin_orDefault, RHO);
  (void)(Rsh_Fir_reg_margin_orDefault);
  // sym = ldf `is.array`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf `is.array` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args17);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c then L29() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L29()
    goto L29_;
  } else {
  // L2()
    goto L2_;
  }

L25_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L26_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L27_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // is_array = ldf `is.array` in base
  Rsh_Fir_reg_is_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r2 = dyn is_array(x2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

L29_:;
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L3_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c1 then L34() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L34()
    goto L34_;
  } else {
  // L4()
    goto L4_;
  }

L8_:;
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c2 then L49() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L49()
    goto L49_;
  } else {
  // L9()
    goto L9_;
  }

L28_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L1_;

L30_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

L31_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_1;
  goto L3_;

L45_:;
  // margin1 = ld margin
  Rsh_Fir_reg_margin1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

L46_:;
  // r14 = dyn base3(<sym margin>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_1;
  goto L8_;

D2_:;
  // deopt 9 [x3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 32 [margin1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_margin1_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L4_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L9_:;
  // sym12 = ldf sum
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base12 = ldf sum in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard12 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L32_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r6 = dyn is_numeric(x4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

L34_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L47_:;
  // margin2 = force? margin1
  Rsh_Fir_reg_margin2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_margin1_);
  // checkMissing(margin2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_margin2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r16 = dyn length1(margin2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_margin2_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L49_:;
  // apply = ldf apply
  Rsh_Fir_reg_apply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

D3_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 35 [r16]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;

L33_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_1;
  goto L3_;

L35_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L36_:;
  // r7 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L5_;

L42_:;
  // r12 = dyn stop("'x' is not an array")
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L48_:;
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_1;
  goto L8_;

L50_:;
  // p = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3787028234_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   margin3 = ld margin;
  //   margin4 = force? margin3;
  //   checkMissing(margin4);
  //   return margin4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3787028234_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sum = ld sum;
  //   sum1 = force? sum;
  //   checkMissing(sum1);
  //   return sum1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3787028234_2, 0, NULL, CCP, RHO);
  // r20 = dyn apply(p, p1, p2)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_apply, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

L102_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L104() else D37()
  // L104()
  goto L104_;

L103_:;
  // r55 = dyn base12(<sym x>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L24(r55)
  // L24(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L24_;

D4_:;
  // deopt 15 [x5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 [r8, l, r8]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 27 [r12]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 41 [r20]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 120 [x17]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L37_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r9 = dyn length(x6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L39_:;
  // r10 = dyn dim__(l, NULL, r8)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L43_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_1;
  goto L6_;

L51_:;
  // st z = r20
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym4 = ldf `is.array`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf `is.array` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L104_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r57 = dyn sum2(x18)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L105() else D38()
  // L105()
  goto L105_;

D5_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 22 [r8, r10]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 123 [r57]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L10_:;
  // r24 = `!`(r22)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args47);
  // c3 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // if c3 then L56() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L56()
    goto L56_;
  } else {
  // L11()
    goto L11_;
  }

L38_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L5_;

L40_:;
  // st x = r10
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r8_1;
  goto L6_;

L52_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

L53_:;
  // r21 = dyn base4(<sym z>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L10_;

L105_:;
  // goto L24(r57)
  // L24(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L24_;

D14_:;
  // deopt 45 [z]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym11 = ldf oldClass
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base11 = ldf oldClass in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard11 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L54_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // is_array1 = ldf `is.array` in base
  Rsh_Fir_reg_is_array1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r23 = dyn is_array1(z1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

L56_:;
  // sym5 = ldf `is.character`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf `is.character` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard5 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

D15_:;
  // deopt 48 [r23]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L12_:;
  // c5 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // if c5 then L60() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L60()
    goto L60_;
  } else {
  // L13()
    goto L13_;
  }

L23_:;
  // l3 = ld z
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L98() else D34()
  // L98()
  goto L98_;

L55_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L10_;

L57_:;
  // margin5 = ld margin
  Rsh_Fir_reg_margin5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

L58_:;
  // r25 = dyn base5(<sym margin>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L12_;

L94_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L96() else D32()
  // L96()
  goto L96_;

L95_:;
  // r51 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L23(r51)
  // L23(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L23_;

D16_:;
  // deopt 51 [margin5]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_margin5_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 107 [x15]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 112 [r52, l3, r52]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(112, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym9 = ldf dim
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base9 = ldf dim in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard9 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L59_:;
  // margin6 = force? margin5
  Rsh_Fir_reg_margin6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_margin5_);
  // checkMissing(margin6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_margin6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c4 = `is.character`(margin6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_margin6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args59);
  // goto L12(c4)
  // L12(c4)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c4_;
  goto L12_;

L60_:;
  // sym6 = ldf match
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf match in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard6 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L96_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r53 = dyn oldClass(x16)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L97() else D33()
  // L97()
  goto L97_;

L98_:;
  // r54 = dyn class__(l3, NULL, r52)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L99() else D35()
  // L99()
  goto L99_;

D33_:;
  // deopt 110 [r53]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 114 [r52, r54]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L14_:;
  // st margin = r28
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L17()
  // L17()
  goto L17_;

L18_:;
  // c6 = `is.object`(r38)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c6 then L77() else L78(r38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L77()
    goto L77_;
  } else {
  // L78(r38)
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r38_;
    goto L78_;
  }

L61_:;
  // margin7 = ld margin
  Rsh_Fir_reg_margin7_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

L62_:;
  // r27 = dyn base6(<sym margin>, <lang names(dimnames(x))>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L14(r27)
  // L14(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L14_;

L73_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L75() else D22()
  // L75()
  goto L75_;

L74_:;
  // r37 = dyn base9(<sym x>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L18(r37)
  // L18(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L18_;

L97_:;
  // goto L23(r53)
  // L23(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L23_;

L99_:;
  // st z = r54
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L100() else D36()
  // L100()
  goto L100_;

D17_:;
  // deopt 56 [margin7]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_margin7_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 77 [x11]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 116 [z2]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L19_:;
  // l1 = ld z
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // dim__1 = ldf `dim<-`
  Rsh_Fir_reg_dim__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L81() else D25()
  // L81()
  goto L81_;

L63_:;
  // margin8 = force? margin7
  Rsh_Fir_reg_margin8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_margin7_);
  // checkMissing(margin8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_margin8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard7 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L75_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r39 = dyn dim(x12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L76() else D23()
  // L76()
  goto L76_;

L77_:;
  // dr = tryDispatchBuiltin.1("[", r38)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc then L79() else L78(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L79()
    goto L79_;
  } else {
  // L78(dr)
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_dr;
    goto L78_;
  }

L78_:;
  // margin9 = ld margin
  Rsh_Fir_reg_margin9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L80() else D24()
  // L80()
  goto L80_;

L100_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z3
  return Rsh_Fir_reg_z3_;

D23_:;
  // deopt 80 [r39]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 81 [r41, margin9]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_margin9_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 85 [dx1, l1, dx1]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L15_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r35 = dyn match(margin8, r30, NA_INT, NULL)
  SEXP Rsh_Fir_array_args74[4];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_margin8_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args74[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names30[4];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L71() else D21()
  // L71()
  goto L71_;

L64_:;
  // sym8 = ldf dimnames
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base8 = ldf dimnames in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard8 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L65_:;
  // r29 = dyn base7(<lang dimnames(x)>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L15_;

L76_:;
  // goto L18(r39)
  // L18(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L18_;

L79_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L19(dx)
  // L19(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L19_;

L80_:;
  // margin10 = force? margin9
  Rsh_Fir_reg_margin10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_margin9_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r42 = dyn __(r41, margin10)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_margin10_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L19(r42)
  // L19(r42)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r42_;
  goto L19_;

L81_:;
  // r43 = dyn dim__1(l1, NULL, dx1)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__1_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L82() else D26()
  // L82()
  goto L82_;

D21_:;
  // deopt 71 [r35]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 87 [dx1, r43]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L16_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r34 = dyn names(r32)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L70() else D20()
  // L70()
  goto L70_;

L66_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

L67_:;
  // r31 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L16(r31)
  // L16(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L16_;

L71_:;
  // goto L14(r35)
  // L14(r35)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r35_;
  goto L14_;

L82_:;
  // st z = r43
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym10 = ldf dimnames
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base10 = ldf dimnames in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard10 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

D18_:;
  // deopt 62 [x9]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 67 [r34]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L20_:;
  // c7 = `is.object`(r45)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args83);
  // if c7 then L87() else L88(r45)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L87()
    goto L87_;
  } else {
  // L88(r45)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r45_;
    goto L88_;
  }

L68_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r33 = dyn dimnames(x10)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

L70_:;
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r34_;
  goto L15_;

L83_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L85() else D27()
  // L85()
  goto L85_;

L84_:;
  // r44 = dyn base10(<sym x>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L20(r44)
  // L20(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L20_;

D19_:;
  // deopt 65 [r33]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 91 [x13]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L21_:;
  // l2 = ld z
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L91() else D30()
  // L91()
  goto L91_;

L69_:;
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L16_;

L85_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // dimnames1 = ldf dimnames in base
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r46 = dyn dimnames1(x14)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L86() else D28()
  // L86()
  goto L86_;

L87_:;
  // dr2 = tryDispatchBuiltin.1("[", r45)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc1 then L89() else L88(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr2)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_dr2_;
    goto L88_;
  }

L88_:;
  // margin11 = ld margin
  Rsh_Fir_reg_margin11_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L90() else D29()
  // L90()
  goto L90_;

D28_:;
  // deopt 94 [r46]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 95 [r48, margin11]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_margin11_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 99 [dx3, l2, dx3]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(99, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L20(r46)
  // L20(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L20_;

L89_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L21(dx2)
  // L21(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L21_;

L90_:;
  // margin12 = force? margin11
  Rsh_Fir_reg_margin12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_margin11_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r49 = dyn __1(r48, margin12)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_margin12_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L21(r49)
  // L21(r49)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r49_;
  goto L21_;

L91_:;
  // r50 = dyn dimnames__(l2, NULL, dx3)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L92() else D31()
  // L92()
  goto L92_;

D31_:;
  // deopt 101 [dx3, r50]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L92_:;
  // st z = r50
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // goto L22()
  // L22()
  goto L22_;
}
SEXP Rsh_Fir_user_promise_inner3787028234_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3787028234/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner3787028234_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_margin3_;
  SEXP Rsh_Fir_reg_margin4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3787028234/0: expected 0, got %d", NCAPTURES);

  // margin3 = ld margin
  Rsh_Fir_reg_margin3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // margin4 = force? margin3
  Rsh_Fir_reg_margin4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_margin3_);
  // checkMissing(margin4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_margin4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return margin4
  return Rsh_Fir_reg_margin4_;
}
SEXP Rsh_Fir_user_promise_inner3787028234_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_sum1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3787028234/0: expected 0, got %d", NCAPTURES);

  // sum = ld sum
  Rsh_Fir_reg_sum = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // sum1 = force? sum
  Rsh_Fir_reg_sum1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sum);
  // checkMissing(sum1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sum1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return sum1
  return Rsh_Fir_reg_sum1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
