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
SEXP Rsh_Fir_user_function_inner2523631525_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2523631525_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2523631525_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2523631525_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2523631525_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_row;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_col;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_matrix1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_row1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_col1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg__row;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r32_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2523631525
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2523631525_, RHO, CCP);
  // st row = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   r1 = `:`(1.0, 12.0);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn matrix(p, 3.0, 4.0)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st x = r3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 10 [x]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args3);
  // if c then L5() else L6(x1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L6(x1)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_x1_;
    goto L6_;
  }

L0_:;
  // st dx = dx1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // dx2 = ld dx
  Rsh_Fir_reg_dx2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L12() else D7()
  // L12()
  goto L12_;

L5_:;
  // dr = tryDispatchBuiltin.1("[", x1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // row = ldf row
  Rsh_Fir_reg_row = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 13 [x3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 22 [dx2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_dx2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L8_:;
  // p1 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn row(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

L12_:;
  // dx3 = force? dx2
  Rsh_Fir_reg_dx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx2_);
  // checkMissing(dx3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L13() else D8()
  // L13()
  goto L13_;

D4_:;
  // deopt 15 [x3, r5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // col = ldf col
  Rsh_Fir_reg_col = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

L13_:;
  // r10 = dyn matrix1[, nrow, ncol](0.0, 5.0, 5.0)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D9()
  // L14()
  goto L14_;

D5_:;
  // deopt 16 [x3, r5]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 31 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r7 = dyn col(p2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_col, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D6()
  // L11()
  goto L11_;

L14_:;
  // st x = r10
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args13);
  // if c1 then L15() else L16(1.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L16(1.0, l)
    Rsh_Fir_reg_r12_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L16_;
  }

D6_:;
  // deopt 18 [x3, r5, r7]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L1_:;
  // st x = dx5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L22() else D14()
  // L22()
  goto L22_;

L11_:;
  // r8 = `==`(r5, r7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args14);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r9 = dyn __(x3, r8)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L0_;

L15_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, 1.0)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L17() else L16(1.0, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L17()
    goto L17_;
  } else {
  // L16(1.0, dr2)
    Rsh_Fir_reg_r12_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L16_;
  }

L16_:;
  // row1 = ldf row
  Rsh_Fir_reg_row1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 37 [r12, l2, 1.0]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_const(CCP, 2);
  Rsh_Fir_deopt(37, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 46 [x12]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L17_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;

L18_:;
  // p3 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r16 = dyn row1(p3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

L22_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // _row = ldf `.row`
  Rsh_Fir_reg__row = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L23() else D15()
  // L23()
  goto L23_;

D11_:;
  // deopt 39 [r12, l2, 1.0, r16]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(39, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // col1 = ldf col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

L23_:;
  // p5 = prom<V +>{
  //   return <int 3, 4>;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r22 = dyn _row(p5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D16()
  // L24()
  goto L24_;

D12_:;
  // deopt 40 [r12, l2, 1.0, r16]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(40, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 51 [r22]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L20_:;
  // p4 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r18 = dyn col1(p4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_col1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

L24_:;
  // st i34 = r22
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L25() else D17()
  // L25()
  goto L25_;

D13_:;
  // deopt 42 [r12, l2, 1.0, r16, r18]
  SEXP Rsh_Fir_array_deopt_stack13[5];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack13[4] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(42, 5, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r19 = `==`(r16, r18)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args25);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r20 = dyn ___(l2, 1.0, r19)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r20)
  // L1(r20)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r20_;
  goto L1_;

L25_:;
  // p7 = prom<V +>{
  //   sym = ldf identical;
  //   base = ldf identical in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   i34 = ld i34;
  //   i35 = force? i34;
  //   checkMissing(i35);
  //   _row1 = ldf `.row`;
  //   p6 = prom<V +>{
  //     sym1 = ldf c;
  //     base1 = ldf c in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r26):
  //     return r26;
  //   L1():
  //     c2 = ldf c in base;
  //     r27 = dyn c2(3.0, 4.0);
  //     goto L0(r27);
  //   L2():
  //     r25 = dyn base1(3.0, 4.0);
  //     goto L0(r25);
  //   };
  //   r29 = dyn _row1(p6);
  //   identical = ldf identical in base;
  //   r30 = dyn identical(i35, r29, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r30);
  // L2():
  //   r23 = dyn base(<sym i34>, <lang .row(c(3.0, 4.0))>);
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r32 = dyn stopifnot(p7)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L26() else D18()
  // L26()
  goto L26_;

D18_:;
  // deopt 56 [r32]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r1 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 3, 4>
  return Rsh_const(CCP, 17);
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_reg__row1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // i34 = ld i34
  Rsh_Fir_reg_i34_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // i35 = force? i34
  Rsh_Fir_reg_i35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i34_);
  // checkMissing(i35)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_i35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // _row1 = ldf `.row`
  Rsh_Fir_reg__row1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p6 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r26):
  //   return r26;
  // L1():
  //   c2 = ldf c in base;
  //   r27 = dyn c2(3.0, 4.0);
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base1(3.0, 4.0);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r29 = dyn _row1(p6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r30 = dyn identical(i35, r29, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args33[9];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[4] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[5] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[6] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args33[7] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[8] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names12[9];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_array_arg_names12[6] = R_MissingArg;
  Rsh_Fir_array_arg_names12[7] = R_MissingArg;
  Rsh_Fir_array_arg_names12[8] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r30_;
  goto L0_;

L2_:;
  // r23 = dyn base(<sym i34>, <lang .row(c(3.0, 4.0))>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r26
  return Rsh_Fir_reg_r26_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r27 = dyn c2(3.0, 4.0)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // r25 = dyn base1(3.0, 4.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2523631525_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2523631525 dynamic dispatch ([x, `as.factor`])

  return Rsh_Fir_user_version_inner2523631525_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2523631525_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2523631525 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2523631525/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_as_factor;
  SEXP Rsh_Fir_reg_as_factor_isMissing;
  SEXP Rsh_Fir_reg_as_factor_orDefault;
  SEXP Rsh_Fir_reg_as_factor1_;
  SEXP Rsh_Fir_reg_as_factor2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_rownames;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_reg_dim1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_res;
  SEXP Rsh_Fir_reg_res1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_x7_1;
  SEXP Rsh_Fir_reg_x8_1;
  SEXP Rsh_Fir_reg_dim2_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_row1_1;
  SEXP Rsh_Fir_reg_r20_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_as_factor = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // as_factor_isMissing = missing.0(as_factor)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_as_factor;
  Rsh_Fir_reg_as_factor_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args36);
  // if as_factor_isMissing then L0(FALSE) else L0(as_factor)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_as_factor_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_as_factor_orDefault = Rsh_const(CCP, 24);
    goto L0_;
  } else {
  // L0(as_factor)
    Rsh_Fir_reg_as_factor_orDefault = Rsh_Fir_reg_as_factor;
    goto L0_;
  }

L0_:;
  // st `as.factor` = as_factor_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_as_factor_orDefault, RHO);
  (void)(Rsh_Fir_reg_as_factor_orDefault);
  // as_factor1 = ld `as.factor`
  Rsh_Fir_reg_as_factor1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

D0_:;
  // deopt 0 [as_factor1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_as_factor1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L5_:;
  // as_factor2 = force? as_factor1
  Rsh_Fir_reg_as_factor2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_as_factor1_);
  // checkMissing(as_factor2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_as_factor2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(as_factor2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_as_factor2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c then L6() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L6()
    goto L6_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard3 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L6_:;
  // rownames = ldf rownames
  Rsh_Fir_reg_rownames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_1;

L7_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2523631525_, 0, NULL, CCP, RHO);
  // r1 = dyn rownames[, `do.NULL`, prefix](p, FALSE, "")
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L19_:;
  // sym4 = ldf dim
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base4 = ldf dim in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard4 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // r15 = dyn base3(<lang row(dim(x))>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r15_;
  goto L3_;

D2_:;
  // deopt 9 [r1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L4_:;
  // row1 = ldf row in base
  Rsh_Fir_reg_row1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r20 = dyn row1(r18)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row1_1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L25() else D12()
  // L25()
  goto L25_;

L8_:;
  // st labs = r1
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

L21_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

L22_:;
  // r17 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L4(r17)
  // L4(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_;
  goto L4_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 35 [x7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x7_1;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 40 [r20]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   sym = ldf `.Internal`;
  //   base = ldf `.Internal` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r3):
  //   return r3;
  // L2():
  //   sym1 = ldf dim;
  //   base1 = ldf dim in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L4() else L5();
  // L3():
  //   r2 = dyn base(<lang row(dim(x))>);
  //   goto L0(r2);
  // L1(r5):
  //   row = ldf row in base;
  //   r7 = dyn row(r5);
  //   goto L0(r7);
  // L4():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   dim = ldf dim in base;
  //   r6 = dyn dim(x4);
  //   goto L1(r6);
  // L5():
  //   r4 = dyn base1(<sym x>);
  //   goto L1(r4);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2523631525_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   labs = ld labs;
  //   labs1 = force? labs;
  //   checkMissing(labs1);
  //   return labs1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2523631525_2, 0, NULL, CCP, RHO);
  // r10 = dyn factor[, labels](p1, p2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L23_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_1);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x8_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // dim2 = ldf dim in base
  Rsh_Fir_reg_dim2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r19 = dyn dim2(x8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x8_1;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L24() else D11()
  // L24()
  goto L24_;

L25_:;
  // goto L3(r20)
  // L3(r20)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r20_1;
  goto L3_;

D4_:;
  // deopt 16 [r10]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 38 [r19]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L10_:;
  // st res = r10
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // sym2 = ldf dim
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf dim in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard2 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L24_:;
  // goto L4(r19)
  // L4(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_1;
  goto L4_;

L2_:;
  // l = ld res
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

L11_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L12_:;
  // r11 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_;
  goto L2_;

D5_:;
  // deopt 20 [x5]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x5_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 25 [r12, l, r12]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(25, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L13_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r13 = dyn dim1(x6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

L15_:;
  // r14 = dyn dim__(l, NULL, r12)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D6_:;
  // deopt 23 [r13]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 27 [r12, r14]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r13_;
  goto L2_;

L16_:;
  // st res = r14
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 29 [res]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L17_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res1
  return Rsh_Fir_reg_res1_;
}
SEXP Rsh_Fir_user_promise_inner2523631525_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2523631525/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2523631525_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_row1;
  SEXP Rsh_Fir_reg_r7_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2523631525/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_1;

L2_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard1 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r2 = dyn base(<lang row(dim(x))>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L1_:;
  // row = ldf row in base
  Rsh_Fir_reg_row1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r7 = dyn row(r5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row1, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r7_1;
  goto L0_;

L4_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r6 = dyn dim(x4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_;
  goto L1_;

L5_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2523631525_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_labs;
  SEXP Rsh_Fir_reg_labs1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2523631525/0: expected 0, got %d", NCAPTURES);

  // labs = ld labs
  Rsh_Fir_reg_labs = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // labs1 = force? labs
  Rsh_Fir_reg_labs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labs);
  // checkMissing(labs1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_labs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return labs1
  return Rsh_Fir_reg_labs1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
