#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3000936886_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3000936886_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3000936886_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3000936886_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_data_matrix;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_data_matrix1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r13_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3000936886
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3000936886_, RHO, CCP);
  // st `data.matrix` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   letters = ld letters;
  //   letters1 = force? letters;
  //   checkMissing(letters1);
  //   c = `is.object`(letters1);
  //   if c then L1() else L2(letters1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", letters1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(letters3):
  //   __ = ldf `[` in base;
  //   r2 = dyn __(letters3, <int 10, 11, 12>);
  //   goto L0(r2);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   seq = ldf seq;
  //   p2 = prom<V +>{
  //     as_Date = ldf `as.Date`;
  //     r4 = dyn as_Date("2004-01-01");
  //     return r4;
  //   };
  //   r6 = dyn seq[, by, `length.out`](p2, "week", 3.0);
  //   return r6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn data_frame[a, b, c, stringsAsFactors](p, p1, p3, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names3[3] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 4, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st DF = r8
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // data_matrix = ldf `data.matrix`
  Rsh_Fir_reg_data_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p4 = prom<V +>{
  //   DF = ld DF;
  //   DF1 = force? DF;
  //   checkMissing(DF1);
  //   c1 = `is.object`(DF1);
  //   if c1 then L1() else L2(DF1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", DF1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(DF3):
  //   __1 = ldf `[` in base;
  //   r9 = dyn __1(DF3, <int 1, 2>);
  //   goto L0(r9);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r11 = dyn data_matrix(p4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_matrix, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 18 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // data_matrix1 = ldf `data.matrix`
  Rsh_Fir_reg_data_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p5 = prom<V +>{
  //   DF4 = ld DF;
  //   DF5 = force? DF4;
  //   checkMissing(DF5);
  //   return DF5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r13 = dyn data_matrix1(p5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_matrix1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_letters3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `is.object`(letters1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L1() else L2(letters1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(letters1)
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_letters1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", letters1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn __(letters3, <int 10, 11, 12>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_letters3_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p2 = prom<V +>{
  //   as_Date = ldf `as.Date`;
  //   r4 = dyn as_Date("2004-01-01");
  //   return r4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r6 = dyn seq[, by, `length.out`](p2, "week", 3.0)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_Date;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_Date = ldf `as.Date`
  Rsh_Fir_reg_as_Date = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // r4 = dyn as_Date("2004-01-01")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_Date, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_DF;
  SEXP Rsh_Fir_reg_DF1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_DF3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // DF = ld DF
  Rsh_Fir_reg_DF = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // DF1 = force? DF
  Rsh_Fir_reg_DF1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DF);
  // checkMissing(DF1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_DF1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(DF1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_DF1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c1 then L1() else L2(DF1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(DF1)
    Rsh_Fir_reg_DF3_ = Rsh_Fir_reg_DF1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", DF1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_DF1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_DF3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r9 = dyn __1(DF3, <int 1, 2>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_DF3_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_DF4_;
  SEXP Rsh_Fir_reg_DF5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // DF4 = ld DF
  Rsh_Fir_reg_DF4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // DF5 = force? DF4
  Rsh_Fir_reg_DF5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DF4_);
  // checkMissing(DF5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_DF5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return DF5
  return Rsh_Fir_reg_DF5_;
}
SEXP Rsh_Fir_user_function_inner3000936886_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3000936886 dynamic dispatch ([frame, `rownames.force`])

  return Rsh_Fir_user_version_inner3000936886_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3000936886_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3000936886 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3000936886/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_frame;
  SEXP Rsh_Fir_reg_rownames_force;
  SEXP Rsh_Fir_reg_rownames_force_isMissing;
  SEXP Rsh_Fir_reg_rownames_force_orDefault;
  SEXP Rsh_Fir_reg_is_data_frame;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_frame5_;
  SEXP Rsh_Fir_reg_frame6_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_isFALSE;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_row_names;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg__row_names_info;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_row_names1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_frame13_;
  SEXP Rsh_Fir_reg_frame14_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_frame16_;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx2_1;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_xi;
  SEXP Rsh_Fir_reg_xi1_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_xi2_;
  SEXP Rsh_Fir_reg_xi3_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_xi4_;
  SEXP Rsh_Fir_reg_xi5_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_is_factor;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_xi8_;
  SEXP Rsh_Fir_reg_xi9_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_i38_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_i39_;
  SEXP Rsh_Fir_reg_i40_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_i45_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_xi10_;
  SEXP Rsh_Fir_reg_xi11_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_i50_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_as_integer1_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_i52_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_i54_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_i55_;
  SEXP Rsh_Fir_reg_i56_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_i61_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_xi14_;
  SEXP Rsh_Fir_reg_xi15_;
  SEXP Rsh_Fir_reg_isS4_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_i64_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_xi18_;
  SEXP Rsh_Fir_reg_xi19_;
  SEXP Rsh_Fir_reg_as_numeric;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_i68_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_i70_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_i71_;
  SEXP Rsh_Fir_reg_i72_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_unlist;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_d12_;
  SEXP Rsh_Fir_reg_d13_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_d15_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_i73_;
  SEXP Rsh_Fir_reg_i74_;
  SEXP Rsh_Fir_reg_i75_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_frame21_;
  SEXP Rsh_Fir_reg_frame22_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_i79_;
  SEXP Rsh_Fir_reg_frame24_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_i81_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_i82_;
  SEXP Rsh_Fir_reg_i83_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_i85_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_i87_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_i88_;
  SEXP Rsh_Fir_reg_i89_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  // Bind parameters
  Rsh_Fir_reg_frame = PARAMS[0];
  Rsh_Fir_reg_rownames_force = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st frame = frame
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_frame, RHO);
  (void)(Rsh_Fir_reg_frame);
  // rownames_force_isMissing = missing.0(rownames_force)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_rownames_force;
  Rsh_Fir_reg_rownames_force_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args18);
  // if rownames_force_isMissing then L0(NA_LGL) else L0(rownames_force)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rownames_force_isMissing)) {
  // L0(NA_LGL)
    Rsh_Fir_reg_rownames_force_orDefault = Rsh_const(CCP, 22);
    goto L0_;
  } else {
  // L0(rownames_force)
    Rsh_Fir_reg_rownames_force_orDefault = Rsh_Fir_reg_rownames_force;
    goto L0_;
  }

L0_:;
  // st `rownames.force` = rownames_force_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_rownames_force_orDefault, RHO);
  (void)(Rsh_Fir_reg_rownames_force_orDefault);
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L40() else D0()
  // L40()
  goto L40_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p = prom<V +>{
  //   frame1 = ld frame;
  //   frame2 = force? frame1;
  //   checkMissing(frame2);
  //   return frame2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_, 0, NULL, CCP, RHO);
  // r1 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D1()
  // L41()
  goto L41_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args21);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c then L42() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L42()
    goto L42_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L42_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L43() else D2()
  // L43()
  goto L43_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // st d = r8
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L51() else D6()
  // L51()
  goto L51_;

L43_:;
  // p1 = prom<V +>{
  //   frame3 = ld frame;
  //   frame4 = force? frame3;
  //   checkMissing(frame4);
  //   return frame4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_1, 0, NULL, CCP, RHO);
  // r4 = dyn as_matrix(p1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L44() else D3()
  // L44()
  goto L44_;

L47_:;
  // frame5 = ld frame
  Rsh_Fir_reg_frame5_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L49() else D4()
  // L49()
  goto L49_;

L48_:;
  // r7 = dyn base(<sym frame>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L3_;

D3_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 14 [frame5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_frame5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_1;

L49_:;
  // frame6 = force? frame5
  Rsh_Fir_reg_frame6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame5_);
  // checkMissing(frame6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_frame6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r9 = dyn dim(frame6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_frame6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L50() else D5()
  // L50()
  goto L50_;

L51_:;
  // p2 = prom<V +>{
  //   rownames_force1 = ld `rownames.force`;
  //   rownames_force2 = force? rownames_force1;
  //   checkMissing(rownames_force2);
  //   return rownames_force2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_2, 0, NULL, CCP, RHO);
  // r11 = dyn isFALSE(p2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L52() else D7()
  // L52()
  goto L52_;

D5_:;
  // deopt 17 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 22 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L3_;

L52_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c1 then L53() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L53()
    goto L53_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L55() else D8()
  // L55()
  goto L55_;

L5_:;
  // st rn = r12
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym1 = ldf seq_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf seq_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard1 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L53_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 32);
  goto L5_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // s = toForSeq(r23)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args34);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 33);
  // goto L10(i)
  // L10(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L10_;

L55_:;
  // p3 = prom<V +>{
  //   rownames_force3 = ld `rownames.force`;
  //   rownames_force4 = force? rownames_force3;
  //   checkMissing(rownames_force4);
  //   return rownames_force4;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_3, 0, NULL, CCP, RHO);
  // r14 = dyn isTRUE(p3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L56() else D9()
  // L56()
  goto L56_;

L67_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L69() else D16()
  // L69()
  goto L69_;

L68_:;
  // r22 = dyn base1(<lang `[`(d, 2)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

D9_:;
  // deopt 28 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 47 [d]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L10_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // c5 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if c5 then L73() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L73()
    goto L73_;
  } else {
  // L32()
    goto L32_;
  }

L56_:;
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c2 then L57() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L57()
    goto L57_;
  } else {
  // L6()
    goto L6_;
  }

L69_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(d1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args42);
  // if c4 then L70() else L71(d1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L70()
    goto L70_;
  } else {
  // L71(d1)
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_d1_;
    goto L71_;
  }

L6_:;
  // _row_names_info = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L61() else D12()
  // L61()
  goto L61_;

L9_:;
  // r25 = seq_len(dx1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args43);
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L8_;

L32_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args44[4];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args44);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // frame13 = ld frame
  Rsh_Fir_reg_frame13_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L74() else D17()
  // L74()
  goto L74_;

L57_:;
  // row_names = ldf `row.names`
  Rsh_Fir_reg_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

L70_:;
  // dr = tryDispatchBuiltin.1("[", d1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc then L72() else L71(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L72()
    goto L72_;
  } else {
  // L71(dr)
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_dr1;
    goto L71_;
  }

L71_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r24 = dyn __(d3, 2)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(r24)
  // L9(r24)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r24_;
  goto L9_;

L73_:;
  // sym10 = ldf all
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base10 = ldf all in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard10 then L141() else L142()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L141()
    goto L141_;
  } else {
  // L142()
    goto L142_;
  }

D10_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 53 [i2, frame13]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_frame13_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // st intOK = r75
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L146() else D44()
  // L146()
  goto L146_;

L58_:;
  // p4 = prom<V +>{
  //   frame7 = ld frame;
  //   frame8 = force? frame7;
  //   checkMissing(frame8);
  //   return frame8;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_4, 0, NULL, CCP, RHO);
  // r16 = dyn row_names(p4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row_names, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

L61_:;
  // p5 = prom<V +>{
  //   frame9 = ld frame;
  //   frame10 = force? frame9;
  //   checkMissing(frame10);
  //   return frame10;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_5, 0, NULL, CCP, RHO);
  // r18 = dyn _row_names_info(p5)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L62() else D13()
  // L62()
  goto L62_;

L72_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L9_;

L74_:;
  // frame14 = force? frame13
  Rsh_Fir_reg_frame14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame13_);
  // checkMissing(frame14)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_frame14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(frame14)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_frame14_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args55);
  // if c6 then L75() else L76(i2, frame14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L75()
    goto L75_;
  } else {
  // L76(i2, frame14)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_frame16_ = Rsh_Fir_reg_frame14_;
    goto L76_;
  }

L141_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L143() else D41()
  // L143()
  goto L143_;

L142_:;
  // r74 = dyn base10(<lang unlist(lapply(frame, is.integer))>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L33(r74)
  // L33(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L33_;

D11_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 36 [r18]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 158 []
  Rsh_Fir_deopt(158, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // st xi = dx3
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_dx3_1, RHO);
  (void)(Rsh_Fir_reg_dx3_1);
  // sym2 = ldf `is.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base2 = ldf `is.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard2 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L59_:;
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r16_;
  goto L5_;

L62_:;
  // r19 = `<=`(r18, 0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args58);
  // c3 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args59);
  // if c3 then L63() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L63()
    goto L63_;
  } else {
  // L7()
    goto L7_;
  }

L75_:;
  // dr2 = tryDispatchBuiltin.1("[[", frame14)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_frame14_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc1 then L77() else L76(i2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L77()
    goto L77_;
  } else {
  // L76(i2, dr2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_frame16_ = Rsh_Fir_reg_dr2_1;
    goto L76_;
  }

L76_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L78() else D18()
  // L78()
  goto L78_;

L143_:;
  // p12 = prom<V +>{
  //   lapply = ldf lapply;
  //   p10 = prom<V +>{
  //     frame17 = ld frame;
  //     frame18 = force? frame17;
  //     checkMissing(frame18);
  //     return frame18;
  //   };
  //   p11 = prom<V +>{
  //     is_integer = ld `is.integer`;
  //     is_integer1 = force? is_integer;
  //     checkMissing(is_integer1);
  //     return is_integer1;
  //   };
  //   r78 = dyn lapply(p10, p11);
  //   return r78;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_6, 0, NULL, CCP, RHO);
  // r80 = dyn unlist(p12)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L144() else D42()
  // L144()
  goto L144_;

L146_:;
  // p13 = prom<V +>{
  //   intOK = ld intOK;
  //   intOK1 = force? intOK;
  //   checkMissing(intOK1);
  //   c32 = `as.logical`(intOK1);
  //   if c32 then L1() else L0();
  // L0():
  //   return NA_REAL;
  // L1():
  //   return NA_INT;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_9, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   d4 = ld d;
  //   d5 = force? d4;
  //   checkMissing(d5);
  //   c33 = `is.object`(d5);
  //   if c33 then L1() else L2(d5);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", d5);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(d7):
  //   __3 = ldf `[` in base;
  //   r83 = dyn __3(d7, 1);
  //   goto L0(r83);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_10, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   d8 = ld d;
  //   d9 = force? d8;
  //   checkMissing(d9);
  //   c34 = `is.object`(d9);
  //   if c34 then L1() else L2(d9);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", d9);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(d11):
  //   __4 = ldf `[` in base;
  //   r85 = dyn __4(d11, 2);
  //   goto L0(r85);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_11, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   sym11 = ldf list;
  //   base11 = ldf list in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L2() else L3();
  // L0(r88):
  //   return r88;
  // L2():
  //   rn = ld rn;
  //   rn1 = force? rn;
  //   checkMissing(rn1);
  //   sym12 = ldf names;
  //   base12 = ldf names in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L4() else L5();
  // L3():
  //   r87 = dyn base11(<sym rn>, <lang names(frame)>);
  //   goto L0(r87);
  // L1(r90):
  //   list = ldf list in base;
  //   r92 = dyn list(rn1, r90);
  //   goto L0(r92);
  // L4():
  //   frame19 = ld frame;
  //   frame20 = force? frame19;
  //   checkMissing(frame20);
  //   names = ldf names in base;
  //   r91 = dyn names(frame20);
  //   goto L1(r91);
  // L5():
  //   r89 = dyn base12(<sym frame>);
  //   goto L1(r89);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_12, 0, NULL, CCP, RHO);
  // r94 = dyn matrix[, nrow, ncol, dimnames](p13, p14, p15, p16)
  SEXP Rsh_Fir_array_args88[4];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args88[3] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 54);
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_arg_names26[3] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L147() else D45()
  // L147()
  goto L147_;

D18_:;
  // deopt 55 [i6, frame16, i9]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_frame16_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 153 [r80]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 166 [r94]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L7_:;
  // row_names1 = ldf `row.names`
  Rsh_Fir_reg_row_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

L12_:;
  // c8 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args89);
  // if c8 then L13(i13, c8) else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L13(i13, c8)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c8_;
    goto L13_;
  } else {
  // L82()
    goto L82_;
  }

L63_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 32);
  goto L5_;

L77_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L11(i2, dx2)
  // L11(i2, dx2)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L11_;

L78_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r26 = dyn __1(frame16, i10)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_frame16_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L11(i6, r26)
  // L11(i6, r26)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r26_;
  goto L11_;

L79_:;
  // xi = ld xi
  Rsh_Fir_reg_xi = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L81() else D19()
  // L81()
  goto L81_;

L80_:;
  // r27 = dyn base2(<sym xi>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L12(i8, r27)
  // L12(i8, r27)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

L144_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r81 = dyn all(r80)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L145() else D43()
  // L145()
  goto L145_;

L147_:;
  // st x = r94
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // sym13 = ldf seq_len
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base13 = ldf seq_len in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard13 then L148() else L149()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L148()
    goto L148_;
  } else {
  // L149()
    goto L149_;
  }

D14_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 60 [i8, xi]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_xi;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 155 [r81]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L13_:;
  // c17 = `as.logical`(c9)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args95);
  // if c17 then L88() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L88()
    goto L88_;
  } else {
  // L15()
    goto L15_;
  }

L34_:;
  // s1 = toForSeq(r96)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // l10 = length(s1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args97);
  // i73 = 0
  Rsh_Fir_reg_i73_ = Rsh_const(CCP, 33);
  // goto L36(i73)
  // L36(i73)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i73_;
  goto L36_;

L65_:;
  // p6 = prom<V +>{
  //   frame11 = ld frame;
  //   frame12 = force? frame11;
  //   checkMissing(frame12);
  //   return frame12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_13, 0, NULL, CCP, RHO);
  // r21 = dyn row_names1(p6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row_names1_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L66() else D15()
  // L66()
  goto L66_;

L81_:;
  // xi1 = force? xi
  Rsh_Fir_reg_xi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi);
  // checkMissing(xi1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_xi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c7 = `is.integer`(xi1)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_xi1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(386, RHO, 1, Rsh_Fir_array_args101);
  // goto L12(i8, c7)
  // L12(i8, c7)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c7_;
  goto L12_;

L82_:;
  // sym3 = ldf `is.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base3 = ldf `is.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard3 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L145_:;
  // goto L33(r81)
  // L33(r81)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r81_;
  goto L33_;

L148_:;
  // d12 = ld d
  Rsh_Fir_reg_d12_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L150() else D46()
  // L150()
  goto L150_;

L149_:;
  // r95 = dyn base13(<lang `[`(d, 2)>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L34(r95)
  // L34(r95)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L34_;

D15_:;
  // deopt 44 [r21]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 169 [d12]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_d12_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L14_:;
  // c14 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args104);
  // c15 = `||`(c13, c14)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args105);
  // goto L13(i18, c15)
  // L13(i18, c15)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c15_;
  goto L13_;

L15_:;
  // sym4 = ldf `is.logical`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base4 = ldf `is.logical` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard4 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L36_:;
  // i75 = `+`.1(i74, 1)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_i74_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_i75_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // c36 = `<`.1(l10, i75)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_i75_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // if c36 then L154() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L154()
    goto L154_;
  } else {
  // L39()
    goto L39_;
  }

L66_:;
  // goto L5(r21)
  // L5(r21)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r21_;
  goto L5_;

L83_:;
  // xi2 = ld xi
  Rsh_Fir_reg_xi2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L85() else D20()
  // L85()
  goto L85_;

L84_:;
  // r29 = dyn base3(<sym xi>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L14(i13, c8, r29)
  // L14(i13, c8, r29)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L14_;

L88_:;
  // goto L10(i14)
  // L10(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L10_;

L150_:;
  // d13 = force? d12
  Rsh_Fir_reg_d13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d12_);
  // checkMissing(d13)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_d13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(d13)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_d13_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args111);
  // if c35 then L151() else L152(d13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L151()
    goto L151_;
  } else {
  // L152(d13)
    Rsh_Fir_reg_d15_ = Rsh_Fir_reg_d13_;
    goto L152_;
  }

D20_:;
  // deopt 65 [i13, c8, xi2]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_xi2_;
  Rsh_Fir_deopt(65, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L17_:;
  // c19 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args112);
  // if c19 then L18(i26, c19) else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L18(i26, c19)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c19_;
    goto L18_;
  } else {
  // L94()
    goto L94_;
  }

L35_:;
  // r98 = seq_len(dx15)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args113);
  // goto L34(r98)
  // L34(r98)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r98_;
  goto L34_;

L39_:;
  // x1 = `[[`(s1, i75, NULL, TRUE)
  SEXP Rsh_Fir_array_args114[4];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_i75_;
  Rsh_Fir_array_args114[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args114[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args114);
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // frame21 = ld frame
  Rsh_Fir_reg_frame21_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L155() else D47()
  // L155()
  goto L155_;

L85_:;
  // xi3 = force? xi2
  Rsh_Fir_reg_xi3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi2_);
  // checkMissing(xi3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_xi3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r31 = dyn is_numeric(xi3)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_xi3_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L86() else D21()
  // L86()
  goto L86_;

L91_:;
  // xi4 = ld xi
  Rsh_Fir_reg_xi4_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L93() else D22()
  // L93()
  goto L93_;

L92_:;
  // r33 = dyn base4(<sym xi>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L17(i14, r33)
  // L17(i14, r33)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L17_;

L151_:;
  // dr14 = tryDispatchBuiltin.1("[", d13)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_d13_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args118);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc7 then L153() else L152(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L153()
    goto L153_;
  } else {
  // L152(dr14)
    Rsh_Fir_reg_d15_ = Rsh_Fir_reg_dr14_;
    goto L152_;
  }

L152_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r97 = dyn __5(d15, 2)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_d15_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L35(r97)
  // L35(r97)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r97_;
  goto L35_;

L154_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L164() else D50()
  // L164()
  goto L164_;

D21_:;
  // deopt 68 [i13, c8, r31]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(68, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 75 [i14, xi4]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_xi4_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 175 [i75, frame21]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i75_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_frame21_;
  Rsh_Fir_deopt(175, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 190 [x2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L18_:;
  // c25 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args121);
  // if c25 then L98() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L98()
    goto L98_;
  } else {
  // L19()
    goto L19_;
  }

L86_:;
  // goto L14(i13, c8, r31)
  // L14(i13, c8, r31)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L14_;

L93_:;
  // xi5 = force? xi4
  Rsh_Fir_reg_xi5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi4_);
  // checkMissing(xi5)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_xi5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c18 = `is.logical`(xi5)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_xi5_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args123);
  // goto L17(i14, c18)
  // L17(i14, c18)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_c18_;
  goto L17_;

L94_:;
  // is_factor = ldf `is.factor`
  Rsh_Fir_reg_is_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

L153_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L35(dx14)
  // L35(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L35_;

L155_:;
  // frame22 = force? frame21
  Rsh_Fir_reg_frame22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame21_);
  // checkMissing(frame22)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_frame22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(frame22)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_frame22_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args126);
  // if c37 then L156() else L157(i75, frame22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L156()
    goto L156_;
  } else {
  // L157(i75, frame22)
    Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i75_;
    Rsh_Fir_reg_frame24_ = Rsh_Fir_reg_frame22_;
    goto L157_;
  }

L164_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x3
  return Rsh_Fir_reg_x3_;

D23_:;
  // deopt 79 [i26, c19]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L19_:;
  // sym6 = ldf `is.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // base6 = ldf `is.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 62), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args128);
  // if guard6 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L37_:;
  // l11 = ld x
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // c38 = `is.object`(l11)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args129);
  // if c38 then L160() else L161(i81, dx17, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L160()
    goto L160_;
  } else {
  // L161(i81, dx17, l11)
    Rsh_Fir_reg_i85_ = Rsh_Fir_reg_i81_;
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L161_;
  }

L95_:;
  // p7 = prom<V +>{
  //   xi6 = ld xi;
  //   xi7 = force? xi6;
  //   checkMissing(xi7);
  //   return xi7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_14, 0, NULL, CCP, RHO);
  // r36 = dyn is_factor(p7)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L96() else D24()
  // L96()
  goto L96_;

L98_:;
  // sym5 = ldf `as.integer`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base5 = ldf `as.integer` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args132);
  // if guard5 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L156_:;
  // dr16 = tryDispatchBuiltin.1("[[", frame22)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_frame22_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc8 then L158() else L157(i75, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L158()
    goto L158_;
  } else {
  // L157(i75, dr16)
    Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i75_;
    Rsh_Fir_reg_frame24_ = Rsh_Fir_reg_dr16_;
    goto L157_;
  }

L157_:;
  // i82 = ld i
  Rsh_Fir_reg_i82_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L159() else D48()
  // L159()
  goto L159_;

D24_:;
  // deopt 81 [i26, c19, r36]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(81, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 177 [i79, frame24, i82]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i79_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_frame24_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_i82_;
  Rsh_Fir_deopt(177, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L20_:;
  // l1 = ld frame
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c26 = `is.object`(l1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args135);
  // if c26 then L103() else L104(i34, r38, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L103()
    goto L103_;
  } else {
  // L104(i34, r38, l1)
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i34_;
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r38_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L104_;
  }

L23_:;
  // c28 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args136);
  // if c28 then L112() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L112()
    goto L112_;
  } else {
  // L24()
    goto L24_;
  }

L38_:;
  // st x = dx23
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // goto L36(i87)
  // L36(i87)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i87_;
  goto L36_;

L96_:;
  // c22 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args137);
  // c23 = `||`(c19, c22)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args138);
  // goto L18(i26, c23)
  // L18(i26, c23)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c23_;
  goto L18_;

L99_:;
  // xi8 = ld xi
  Rsh_Fir_reg_xi8_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L101() else D25()
  // L101()
  goto L101_;

L100_:;
  // r37 = dyn base5(<sym xi>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L20(i27, r37)
  // L20(i27, r37)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L20_;

L109_:;
  // xi10 = ld xi
  Rsh_Fir_reg_xi10_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L111() else D28()
  // L111()
  goto L111_;

L110_:;
  // r46 = dyn base6(<sym xi>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L23(i27, r46)
  // L23(i27, r46)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L23_;

L158_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // goto L37(i75, dx16)
  // L37(i75, dx16)
  Rsh_Fir_reg_i81_ = Rsh_Fir_reg_i75_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L37_;

L159_:;
  // i83 = force? i82
  Rsh_Fir_reg_i83_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i82_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r99 = dyn __6(frame24, i83)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_frame24_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_i83_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L37(i79, r99)
  // L37(i79, r99)
  Rsh_Fir_reg_i81_ = Rsh_Fir_reg_i79_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r99_;
  goto L37_;

L160_:;
  // dr18 = tryDispatchBuiltin.0("[<-", l11, dx17)
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args143[2] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args143);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc9 then L162() else L161(i81, dx17, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L162()
    goto L162_;
  } else {
  // L161(i81, dx17, dr18)
    Rsh_Fir_reg_i85_ = Rsh_Fir_reg_i81_;
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr18_;
    goto L161_;
  }

L161_:;
  // i88 = ld i
  Rsh_Fir_reg_i88_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L163() else D49()
  // L163()
  goto L163_;

D25_:;
  // deopt 85 [i27, xi8]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_xi8_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 99 [i27, xi10]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_xi10_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 182 [i85, dx19, l13, dx17, i88]
  SEXP Rsh_Fir_array_deopt_stack30[5];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i85_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack30[4] = Rsh_Fir_reg_i88_;
  Rsh_Fir_deopt(182, 5, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L21_:;
  // st frame = dx5
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L10(i38)
  // L10(i38)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i38_;
  goto L10_;

L24_:;
  // sym8 = ldf isS4
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // base8 = ldf isS4 in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args145);
  // if guard8 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L101_:;
  // xi9 = force? xi8
  Rsh_Fir_reg_xi9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi8_);
  // checkMissing(xi9)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_xi9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r39 = dyn as_integer(xi9)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_xi9_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L102() else D26()
  // L102()
  goto L102_;

L103_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l1, r38)
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args148[2] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args148);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // if dc2 then L105() else L104(i34, r38, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L105()
    goto L105_;
  } else {
  // L104(i34, r38, dr4)
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i34_;
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r38_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr4_;
    goto L104_;
  }

L104_:;
  // i39 = ld i
  Rsh_Fir_reg_i39_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L106() else D27()
  // L106()
  goto L106_;

L111_:;
  // xi11 = force? xi10
  Rsh_Fir_reg_xi11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi10_);
  // checkMissing(xi11)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_xi11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c27 = `is.character`(xi11)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_xi11_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args151);
  // goto L23(i27, c27)
  // L23(i27, c27)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_c27_;
  goto L23_;

L112_:;
  // sym7 = ldf `as.integer`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base7 = ldf `as.integer` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args152);
  // if guard7 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L162_:;
  // dx21 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L38(i81, dx21)
  // L38(i81, dx21)
  Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i81_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
  goto L38_;

L163_:;
  // i89 = force? i88
  Rsh_Fir_reg_i89_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i88_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r100 = dyn ___(l11, <missing>, i89, dx17)
  SEXP Rsh_Fir_array_args154[4];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args154[2] = Rsh_Fir_reg_i89_;
  Rsh_Fir_array_args154[3] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names41[4];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_array_arg_names41[3] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L38(i85, r100)
  // L38(i85, r100)
  Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i85_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r100_;
  goto L38_;

D26_:;
  // deopt 88 [i27, r39]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 90 [i36, r41, l3, r38, i39]
  SEXP Rsh_Fir_array_deopt_stack32[5];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack32[4] = Rsh_Fir_reg_i39_;
  Rsh_Fir_deopt(90, 5, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L25_:;
  // l4 = ld frame
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c29 = `is.object`(l4)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args155);
  // if c29 then L118() else L119(i50, r49, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L118()
    goto L118_;
  } else {
  // L119(i50, r49, l4)
    Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L119_;
  }

L28_:;
  // c30 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args156);
  // if c30 then L128() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L128()
    goto L128_;
  } else {
  // L29()
    goto L29_;
  }

L102_:;
  // goto L20(i27, r39)
  // L20(i27, r39)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L20_;

L105_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L21(i34, dx4)
  // L21(i34, dx4)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L21_;

L106_:;
  // i40 = force? i39
  Rsh_Fir_reg_i40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i39_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r44 = dyn ____(l3, r38, i40)
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args158[2] = Rsh_Fir_reg_i40_;
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L21(i36, r44)
  // L21(i36, r44)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r44_;
  goto L21_;

L113_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L115() else D29()
  // L115()
  goto L115_;

L114_:;
  // r48 = dyn base7(<lang factor(xi)>)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L25(i45, r48)
  // L25(i45, r48)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L25_;

L124_:;
  // xi14 = ld xi
  Rsh_Fir_reg_xi14_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L126() else D33()
  // L126()
  goto L126_;

L125_:;
  // r59 = dyn base8(<sym xi>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L28(i45, r59)
  // L28(i45, r59)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L28_;

D29_:;
  // deopt 105 [i45]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 121 [i45, xi14]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_xi14_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L26_:;
  // st frame = dx7
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L10(i54)
  // L10(i54)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i54_;
  goto L10_;

L29_:;
  // sym9 = ldf `as.numeric`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // base9 = ldf `as.numeric` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args161);
  // if guard9 then L133() else L134()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L133()
    goto L133_;
  } else {
  // L134()
    goto L134_;
  }

L30_:;
  // l7 = ld frame
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c31 = `is.object`(l7)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args162);
  // if c31 then L137() else L138(i64, r66, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L137()
    goto L137_;
  } else {
  // L138(i64, r66, l7)
    Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r66_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L138_;
  }

L115_:;
  // p8 = prom<V +>{
  //   xi12 = ld xi;
  //   xi13 = force? xi12;
  //   checkMissing(xi13);
  //   return xi13;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_15, 0, NULL, CCP, RHO);
  // r51 = dyn factor(p8)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L116() else D30()
  // L116()
  goto L116_;

L118_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l4, r49)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args165);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if dc3 then L120() else L119(i50, r49, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L120()
    goto L120_;
  } else {
  // L119(i50, r49, dr6)
    Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr6_;
    goto L119_;
  }

L119_:;
  // i55 = ld i
  Rsh_Fir_reg_i55_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L121() else D32()
  // L121()
  goto L121_;

L126_:;
  // xi15 = force? xi14
  Rsh_Fir_reg_xi15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi14_);
  // checkMissing(xi15)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_xi15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // isS4 = ldf isS4 in base
  Rsh_Fir_reg_isS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // r61 = dyn isS4(xi15)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_xi15_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS4_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L127() else D34()
  // L127()
  goto L127_;

L128_:;
  // __2 = ldf `::`
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L129() else D35()
  // L129()
  goto L129_;

D30_:;
  // deopt 107 [i45, r51]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 111 [i52, r54, l6, r49, i55]
  SEXP Rsh_Fir_array_deopt_stack36[5];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack36[4] = Rsh_Fir_reg_i55_;
  Rsh_Fir_deopt(111, 5, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 124 [i45, r61]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(124, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 126 [i61]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L31_:;
  // st frame = dx9
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L10(i70)
  // L10(i70)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i70_;
  goto L10_;

L116_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r52 = dyn as_integer1(r51)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L117() else D31()
  // L117()
  goto L117_;

L120_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L26(i50, dx6)
  // L26(i50, dx6)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L26_;

L121_:;
  // i56 = force? i55
  Rsh_Fir_reg_i56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i55_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r57 = dyn ____1(l6, r49, i56)
  SEXP Rsh_Fir_array_args171[3];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args171[2] = Rsh_Fir_reg_i56_;
  SEXP Rsh_Fir_array_arg_names48[3];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L26(i52, r57)
  // L26(i52, r57)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r57_;
  goto L26_;

L127_:;
  // goto L28(i45, r61)
  // L28(i45, r61)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L28_;

L129_:;
  // r62 = dyn __2("methods", "as")
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args172[1] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L130() else D36()
  // L130()
  goto L130_;

L133_:;
  // xi18 = ld xi
  Rsh_Fir_reg_xi18_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L135() else D38()
  // L135()
  goto L135_;

L134_:;
  // r67 = dyn base9(<sym xi>)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L30(i61, r67)
  // L30(i61, r67)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L30_;

L137_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l7, r66)
  SEXP Rsh_Fir_array_args174[3];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args174);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc4 then L139() else L138(i64, r66, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L139()
    goto L139_;
  } else {
  // L138(i64, r66, dr8)
    Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r66_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr8_;
    goto L138_;
  }

L138_:;
  // i71 = ld i
  Rsh_Fir_reg_i71_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L140() else D40()
  // L140()
  goto L140_;

D31_:;
  // deopt 109 [i45, r52]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 129 [i61, r62]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 136 [i61, xi18]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_xi18_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 141 [i68, r70, l9, r66, i71]
  SEXP Rsh_Fir_array_deopt_stack42[5];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack42[4] = Rsh_Fir_reg_i71_;
  Rsh_Fir_deopt(141, 5, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L25(i45, r52)
  // L25(i45, r52)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r52_;
  goto L25_;

L130_:;
  // checkFun.0(r62)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_r62_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args176));
  // r63 = r62 as cls
  Rsh_Fir_reg_r63_ = Rsh_Fir_cast(Rsh_Fir_reg_r62_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p9 = prom<V +>{
  //   xi16 = ld xi;
  //   xi17 = force? xi16;
  //   checkMissing(xi17);
  //   return xi17;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_16, 0, NULL, CCP, RHO);
  // r65 = dyn r63(p9, "numeric")
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args178[1] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r63_, 2, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L131() else D37()
  // L131()
  goto L131_;

L135_:;
  // xi19 = force? xi18
  Rsh_Fir_reg_xi19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi18_);
  // checkMissing(xi19)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_xi19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // r68 = dyn as_numeric(xi19)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_xi19_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L136() else D39()
  // L136()
  goto L136_;

L139_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // goto L31(i64, dx8)
  // L31(i64, dx8)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i64_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L31_;

L140_:;
  // i72 = force? i71
  Rsh_Fir_reg_i72_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i71_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r73 = dyn ____2(l9, r66, i72)
  SEXP Rsh_Fir_array_args182[3];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args182[2] = Rsh_Fir_reg_i72_;
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L31(i68, r73)
  // L31(i68, r73)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r73_;
  goto L31_;

D37_:;
  // deopt 133 [i61, r65]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(133, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 139 [i61, r68]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L30(i61, r65)
  // L30(i61, r65)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L30_;

L136_:;
  // goto L30(i61, r68)
  // L30(i61, r68)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r68_;
  goto L30_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_frame1_;
  SEXP Rsh_Fir_reg_frame2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // frame1 = ld frame
  Rsh_Fir_reg_frame1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // frame2 = force? frame1
  Rsh_Fir_reg_frame2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame1_);
  // checkMissing(frame2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_frame2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return frame2
  return Rsh_Fir_reg_frame2_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_frame3_;
  SEXP Rsh_Fir_reg_frame4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // frame3 = ld frame
  Rsh_Fir_reg_frame3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // frame4 = force? frame3
  Rsh_Fir_reg_frame4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame3_);
  // checkMissing(frame4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_frame4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return frame4
  return Rsh_Fir_reg_frame4_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rownames_force1_;
  SEXP Rsh_Fir_reg_rownames_force2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // rownames_force1 = ld `rownames.force`
  Rsh_Fir_reg_rownames_force1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // rownames_force2 = force? rownames_force1
  Rsh_Fir_reg_rownames_force2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rownames_force1_);
  // checkMissing(rownames_force2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_rownames_force2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return rownames_force2
  return Rsh_Fir_reg_rownames_force2_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rownames_force3_;
  SEXP Rsh_Fir_reg_rownames_force4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // rownames_force3 = ld `rownames.force`
  Rsh_Fir_reg_rownames_force3_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // rownames_force4 = force? rownames_force3
  Rsh_Fir_reg_rownames_force4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rownames_force3_);
  // checkMissing(rownames_force4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_rownames_force4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return rownames_force4
  return Rsh_Fir_reg_rownames_force4_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_frame7_;
  SEXP Rsh_Fir_reg_frame8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // frame7 = ld frame
  Rsh_Fir_reg_frame7_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // frame8 = force? frame7
  Rsh_Fir_reg_frame8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame7_);
  // checkMissing(frame8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_frame8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return frame8
  return Rsh_Fir_reg_frame8_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_frame9_;
  SEXP Rsh_Fir_reg_frame10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // frame9 = ld frame
  Rsh_Fir_reg_frame9_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // frame10 = force? frame9
  Rsh_Fir_reg_frame10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame9_);
  // checkMissing(frame10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_frame10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return frame10
  return Rsh_Fir_reg_frame10_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lapply;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r78_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // p10 = prom<V +>{
  //   frame17 = ld frame;
  //   frame18 = force? frame17;
  //   checkMissing(frame18);
  //   return frame18;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_7, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   is_integer = ld `is.integer`;
  //   is_integer1 = force? is_integer;
  //   checkMissing(is_integer1);
  //   return is_integer1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3000936886_8, 0, NULL, CCP, RHO);
  // r78 = dyn lapply(p10, p11)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r78
  return Rsh_Fir_reg_r78_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_frame17_;
  SEXP Rsh_Fir_reg_frame18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // frame17 = ld frame
  Rsh_Fir_reg_frame17_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // frame18 = force? frame17
  Rsh_Fir_reg_frame18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame17_);
  // checkMissing(frame18)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_frame18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return frame18
  return Rsh_Fir_reg_frame18_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_is_integer;
  SEXP Rsh_Fir_reg_is_integer1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // is_integer = ld `is.integer`
  Rsh_Fir_reg_is_integer = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // is_integer1 = force? is_integer
  Rsh_Fir_reg_is_integer1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_integer);
  // checkMissing(is_integer1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_is_integer1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return is_integer1
  return Rsh_Fir_reg_is_integer1_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_intOK;
  SEXP Rsh_Fir_reg_intOK1_;
  SEXP Rsh_Fir_reg_c32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // intOK = ld intOK
  Rsh_Fir_reg_intOK = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // intOK1 = force? intOK
  Rsh_Fir_reg_intOK1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intOK);
  // checkMissing(intOK1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_intOK1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c32 = `as.logical`(intOK1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_intOK1_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // if c32 then L1() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // return NA_REAL
  return Rsh_const(CCP, 49);

L1_:;
  // return NA_INT
  return Rsh_const(CCP, 50);
}
SEXP Rsh_Fir_user_promise_inner3000936886_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_d7_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r83_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(d5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args69);
  // if c33 then L1() else L2(d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L1()
    goto L1_;
  } else {
  // L2(d5)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", d5)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r83 = dyn __3(d7, 1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r83)
  // L0(r83)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r83_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d8_;
  SEXP Rsh_Fir_reg_d9_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_d11_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r85_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // d8 = ld d
  Rsh_Fir_reg_d8_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // d9 = force? d8
  Rsh_Fir_reg_d9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d8_);
  // checkMissing(d9)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_d9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(d9)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_d9_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args75);
  // if c34 then L1() else L2(d9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L1()
    goto L1_;
  } else {
  // L2(d9)
    Rsh_Fir_reg_d11_ = Rsh_Fir_reg_d9_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", d9)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_d9_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args76);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_d11_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r85 = dyn __4(d11, 2)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_d11_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r85)
  // L0(r85)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r85_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_rn;
  SEXP Rsh_Fir_reg_rn1_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_frame19_;
  SEXP Rsh_Fir_reg_frame20_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r92_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // sym11 = ldf list
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base11 = ldf list in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard11 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r88
  return Rsh_Fir_reg_r88_;

L2_:;
  // rn = ld rn
  Rsh_Fir_reg_rn = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // rn1 = force? rn
  Rsh_Fir_reg_rn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rn);
  // checkMissing(rn1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_rn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // sym12 = ldf names
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base12 = ldf names in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard12 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r87 = dyn base11(<sym rn>, <lang names(frame)>)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r87)
  // L0(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L0_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r92 = dyn list(rn1, r90)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_rn1_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r92)
  // L0(r92)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r92_;
  goto L0_;

L4_:;
  // frame19 = ld frame
  Rsh_Fir_reg_frame19_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // frame20 = force? frame19
  Rsh_Fir_reg_frame20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame19_);
  // checkMissing(frame20)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_frame20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r91 = dyn names(frame20)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_frame20_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L1(r91)
  // L1(r91)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r91_;
  goto L1_;

L5_:;
  // r89 = dyn base12(<sym frame>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L1(r89)
  // L1(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_frame11_;
  SEXP Rsh_Fir_reg_frame12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // frame11 = ld frame
  Rsh_Fir_reg_frame11_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // frame12 = force? frame11
  Rsh_Fir_reg_frame12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_frame11_);
  // checkMissing(frame12)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_frame12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // return frame12
  return Rsh_Fir_reg_frame12_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xi6_;
  SEXP Rsh_Fir_reg_xi7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // xi6 = ld xi
  Rsh_Fir_reg_xi6_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // xi7 = force? xi6
  Rsh_Fir_reg_xi7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi6_);
  // checkMissing(xi7)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_xi7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // return xi7
  return Rsh_Fir_reg_xi7_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xi12_;
  SEXP Rsh_Fir_reg_xi13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // xi12 = ld xi
  Rsh_Fir_reg_xi12_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // xi13 = force? xi12
  Rsh_Fir_reg_xi13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi12_);
  // checkMissing(xi13)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_xi13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // return xi13
  return Rsh_Fir_reg_xi13_;
}
SEXP Rsh_Fir_user_promise_inner3000936886_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xi16_;
  SEXP Rsh_Fir_reg_xi17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3000936886/0: expected 0, got %d", NCAPTURES);

  // xi16 = ld xi
  Rsh_Fir_reg_xi16_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // xi17 = force? xi16
  Rsh_Fir_reg_xi17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi16_);
  // checkMissing(xi17)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_xi17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // return xi17
  return Rsh_Fir_reg_xi17_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
