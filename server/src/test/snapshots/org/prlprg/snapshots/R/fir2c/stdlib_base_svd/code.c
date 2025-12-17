#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3456095677_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3456095677_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3456095677_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3456095677_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3456095677_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3456095677_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3456095677_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3456095677_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3456095677_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3456095677_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4266987626_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4266987626_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4266987626_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_hilbert;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_svd;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_diag;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_s4_;
  SEXP Rsh_Fir_reg_s5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_s7_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_D;
  SEXP Rsh_Fir_reg_D1_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_t1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_X2_;
  SEXP Rsh_Fir_reg_X3_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_s16_;
  SEXP Rsh_Fir_reg_s17_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_s19_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r22_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3456095677
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3456095677_, RHO, CCP);
  // st svd = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = clos inner4266987626
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4266987626_, RHO, CCP);
  // st hilbert = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // hilbert = ldf hilbert
  Rsh_Fir_reg_hilbert = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r2 = dyn hilbert(9.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_hilbert, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // c = `is.object`(r2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // st X = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // svd = ldf svd
  Rsh_Fir_reg_svd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

L3_:;
  // dr = tryDispatchBuiltin.1("[", r2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L5()
    goto L5_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn __(r2, <missing>, <int 1, 2, 3, 4, 5, 6>)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L0_;

D2_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L6_:;
  // p = prom<V +>{
  //   X = ld X;
  //   X1 = force? X;
  //   checkMissing(X1);
  //   return X1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r7 = dyn svd(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_svd, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 19 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // st s = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p1 = prom<V +>{
  //   s = ld s;
  //   s1 = force? s;
  //   checkMissing(s1);
  //   c1 = `is.object`(s1);
  //   if c1 then L1() else L2(s1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", s1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(s3):
  //   r8 = `$`(s3, <sym d>);
  //   goto L0(r8);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn diag(p1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 24 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // st D = r10
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // s4 = ld s
  Rsh_Fir_reg_s4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 28 [s4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // s5 = force? s4
  Rsh_Fir_reg_s5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s4_);
  // checkMissing(s5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(s5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args16);
  // if c2 then L12() else L13(s5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L12()
    goto L12_;
  } else {
  // L13(s5)
    Rsh_Fir_reg_s7_ = Rsh_Fir_reg_s5_;
    goto L13_;
  }

L11_:;
  // D = ld D
  Rsh_Fir_reg_D = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

L12_:;
  // dr4 = tryDispatchBuiltin.1("$", s5)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_s5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc2 then L14() else L13(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr4)
    Rsh_Fir_reg_s7_ = Rsh_Fir_reg_dr4_;
    goto L13_;
  }

L13_:;
  // r11 = `$`(s7, <sym u>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args19);
  // goto L11(r11)
  // L11(r11)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L11_;

D7_:;
  // deopt 31 [D]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_D;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L11(dx4)
  // L11(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L11_;

L15_:;
  // D1 = force? D
  Rsh_Fir_reg_D1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D);
  // checkMissing(D1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_D1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r12 = dyn ___(dx5, D1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_D1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 34 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p2 = prom<V +>{
  //   s8 = ld s;
  //   s9 = force? s8;
  //   checkMissing(s9);
  //   c3 = `is.object`(s9);
  //   if c3 then L1() else L2(s9);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", s9);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(s11):
  //   r13 = `$`(s11, <sym v>);
  //   goto L0(r13);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r15 = dyn t(p2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 38 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // ___1 = ldf `%*%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r16 = dyn ___1(r12, r15)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

D11_:;
  // deopt 40 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // t1 = ldf t
  Rsh_Fir_reg_t1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

D12_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p3 = prom<V +>{
  //   s12 = ld s;
  //   s13 = force? s12;
  //   checkMissing(s13);
  //   c4 = `is.object`(s13);
  //   if c4 then L1() else L2(s13);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", s13);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(s15):
  //   r17 = `$`(s15, <sym u>);
  //   goto L0(r17);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r19 = dyn t1(p3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

D13_:;
  // deopt 46 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // X2 = ld X
  Rsh_Fir_reg_X2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L22() else D14()
  // L22()
  goto L22_;

D14_:;
  // deopt 47 [X2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_X2_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L22_:;
  // X3 = force? X2
  Rsh_Fir_reg_X3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X2_);
  // checkMissing(X3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_X3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // ___2 = ldf `%*%` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r20 = dyn ___2(r19, X3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_X3_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L23() else D15()
  // L23()
  goto L23_;

D15_:;
  // deopt 50 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L23_:;
  // s16 = ld s
  Rsh_Fir_reg_s16_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L24() else D16()
  // L24()
  goto L24_;

D16_:;
  // deopt 51 [s16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_s16_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L24_:;
  // s17 = force? s16
  Rsh_Fir_reg_s17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s16_);
  // checkMissing(s17)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_s17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(s17)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_s17_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args41);
  // if c5 then L26() else L27(s17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L26()
    goto L26_;
  } else {
  // L27(s17)
    Rsh_Fir_reg_s19_ = Rsh_Fir_reg_s17_;
    goto L27_;
  }

L25_:;
  // ___3 = ldf `%*%` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r22 = dyn ___3(r20, dx11)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D17()
  // L29()
  goto L29_;

L26_:;
  // dr10 = tryDispatchBuiltin.1("$", s17)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_s17_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc5 then L28() else L27(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L28()
    goto L28_;
  } else {
  // L27(dr10)
    Rsh_Fir_reg_s19_ = Rsh_Fir_reg_dr10_;
    goto L27_;
  }

L27_:;
  // r21 = `$`(s19, <sym v>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_s19_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args45);
  // goto L25(r21)
  // L25(r21)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r21_;
  goto L25_;

D17_:;
  // deopt 55 [r22]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L28_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L25(dx10)
  // L25(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L25_;

L29_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X;
  SEXP Rsh_Fir_reg_X1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return X1
  return Rsh_Fir_reg_X1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_s3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(s1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args9);
  // if c1 then L1() else L2(s1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(s1)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_s1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", s1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r8 = `$`(s3, <sym d>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args12);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r8_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_s8_;
  SEXP Rsh_Fir_reg_s9_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_s11_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // s8 = ld s
  Rsh_Fir_reg_s8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // s9 = force? s8
  Rsh_Fir_reg_s9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s8_);
  // checkMissing(s9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(s9)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_s9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c3 then L1() else L2(s9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(s9)
    Rsh_Fir_reg_s11_ = Rsh_Fir_reg_s9_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", s9)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_s9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_s11_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r13 = `$`(s11, <sym v>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_s11_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args27);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r13_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_s12_;
  SEXP Rsh_Fir_reg_s13_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_s15_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // s12 = ld s
  Rsh_Fir_reg_s12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // s13 = force? s12
  Rsh_Fir_reg_s13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s12_);
  // checkMissing(s13)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_s13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(s13)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s13_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args32);
  // if c4 then L1() else L2(s13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L1()
    goto L1_;
  } else {
  // L2(s13)
    Rsh_Fir_reg_s15_ = Rsh_Fir_reg_s13_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", s13)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_s13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_s15_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r17 = `$`(s15, <sym u>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_s15_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args35);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r17_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3456095677_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3456095677 dynamic dispatch ([x, nu, nv, LINPACK])

  return Rsh_Fir_user_version_inner3456095677_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3456095677_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3456095677 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3456095677/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_nu;
  SEXP Rsh_Fir_reg_nv;
  SEXP Rsh_Fir_reg_LINPACK;
  SEXP Rsh_Fir_reg_nu_isMissing;
  SEXP Rsh_Fir_reg_nu_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_nv_isMissing;
  SEXP Rsh_Fir_reg_nv_orDefault;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_LINPACK_isMissing;
  SEXP Rsh_Fir_reg_LINPACK_orDefault;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_is_finite;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx4_1;
  SEXP Rsh_Fir_reg_dx5_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_dx6_1;
  SEXP Rsh_Fir_reg_dx7_1;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_dx9_1;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx10_1;
  SEXP Rsh_Fir_reg_dx11_1;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_c5_1;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_La_svd;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_La_res;
  SEXP Rsh_Fir_reg_La_res1_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_La_res3_;
  SEXP Rsh_Fir_reg_dr4_1;
  SEXP Rsh_Fir_reg_dc2_1;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_nu3_;
  SEXP Rsh_Fir_reg_nu4_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_La_res4_;
  SEXP Rsh_Fir_reg_La_res5_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_La_res7_;
  SEXP Rsh_Fir_reg_dr6_1;
  SEXP Rsh_Fir_reg_dc3_1;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr8_1;
  SEXP Rsh_Fir_reg_dc4_1;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_nv3_;
  SEXP Rsh_Fir_reg_nv4_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_t1;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_Conj;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_t1_1;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_res;
  SEXP Rsh_Fir_reg_res1_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_nu = PARAMS[1];
  Rsh_Fir_reg_nv = PARAMS[2];
  Rsh_Fir_reg_LINPACK = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // nu_isMissing = missing.0(nu)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_nu;
  Rsh_Fir_reg_nu_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args47);
  // if nu_isMissing then L0() else L1(nu)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nu_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(nu)
    Rsh_Fir_reg_nu_orDefault = Rsh_Fir_reg_nu;
    goto L1_;
  }

L0_:;
  // p2 = prom<V +>{
  //   sym = ldf min;
  //   base = ldf min in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   p = ld p;
  //   p1 = force? p;
  //   checkMissing(p1);
  //   min = ldf min in base;
  //   r2 = dyn min(n1, p1);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym n>, <sym p>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_, 0, NULL, CCP, RHO);
  // goto L1(p2)
  // L1(p2)
  Rsh_Fir_reg_nu_orDefault = Rsh_Fir_reg_p2_1;
  goto L1_;

L1_:;
  // st nu = nu_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_nu_orDefault, RHO);
  (void)(Rsh_Fir_reg_nu_orDefault);
  // nv_isMissing = missing.0(nv)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_nv;
  Rsh_Fir_reg_nv_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args53);
  // if nv_isMissing then L2() else L3(nv)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nv_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(nv)
    Rsh_Fir_reg_nv_orDefault = Rsh_Fir_reg_nv;
    goto L3_;
  }

L2_:;
  // p5 = prom<V +>{
  //   sym1 = ldf min;
  //   base1 = ldf min in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   p3 = ld p;
  //   p4 = force? p3;
  //   checkMissing(p4);
  //   min1 = ldf min in base;
  //   r6 = dyn min1(n3, p4);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym n>, <sym p>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_1, 0, NULL, CCP, RHO);
  // goto L3(p5)
  // L3(p5)
  Rsh_Fir_reg_nv_orDefault = Rsh_Fir_reg_p5_;
  goto L3_;

L3_:;
  // st nv = nv_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_nv_orDefault, RHO);
  (void)(Rsh_Fir_reg_nv_orDefault);
  // LINPACK_isMissing = missing.0(LINPACK)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_LINPACK;
  Rsh_Fir_reg_LINPACK_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args59);
  // if LINPACK_isMissing then L4(FALSE) else L4(LINPACK)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_LINPACK_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_LINPACK_orDefault = Rsh_const(CCP, 23);
    goto L4_;
  } else {
  // L4(LINPACK)
    Rsh_Fir_reg_LINPACK_orDefault = Rsh_Fir_reg_LINPACK;
    goto L4_;
  }

L4_:;
  // st LINPACK = LINPACK_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_LINPACK_orDefault, RHO);
  (void)(Rsh_Fir_reg_LINPACK_orDefault);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L5_:;
  // r11 = `!`(r9)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args61);
  // c = `as.logical`(r11)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c then L29() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L29()
    goto L29_;
  } else {
  // L6()
    goto L6_;
  }

L27_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r10 = dyn missing(<sym LINPACK>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_1;
  goto L5_;

L28_:;
  // r8 = dyn base2(<sym LINPACK>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_1;
  goto L5_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

L29_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // r12 = dyn stop("the LINPACK argument has been defunct since R 3.1.0")
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

L33_:;
  // p6 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_2, 0, NULL, CCP, RHO);
  // r15 = dyn as_matrix(p6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D1_:;
  // deopt 7 [r12]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 [r15]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L7()
  // L7()
  goto L7_;

L34_:;
  // st x = r15
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L8_:;
  // c1 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c1 then L42() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L42()
    goto L42_;
  } else {
  // L10()
    goto L10_;
  }

L35_:;
  // sym4 = ldf `is.finite`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base4 = ldf `is.finite` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard4 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L36_:;
  // r16 = dyn base3(<lang `!`(is.finite(x))>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r16_1;
  goto L8_;

L9_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args72);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r22 = dyn any(r21)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym5 = ldf dim
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base5 = ldf dim in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard5 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L37_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L39() else D4()
  // L39()
  goto L39_;

L38_:;
  // r18 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_;
  goto L9_;

L42_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

D4_:;
  // deopt 19 [x3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 [r22]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // st dx = r26
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // dx = ld dx
  Rsh_Fir_reg_dx1 = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

L39_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r20 = dyn is_finite(x4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

L41_:;
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r22_1;
  goto L8_;

L43_:;
  // r23 = dyn stop1("infinite or missing values in 'x'")
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

L46_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

L47_:;
  // r25 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L12_;

D5_:;
  // deopt 22 [r20]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 29 [r23]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 34 [x5]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 39 [dx]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_dx1;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r20_1;
  goto L9_;

L44_:;
  // goto L11()
  // L11()
  goto L11_;

L48_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r27 = dyn dim(x6)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L49() else D10()
  // L49()
  goto L49_;

L50_:;
  // dx1 = force? dx
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx1);
  // checkMissing(dx1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dx1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args83);
  // if c2 then L51() else L52(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L51()
    goto L51_;
  } else {
  // L52(dx1)
    Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx1_1;
    goto L52_;
  }

D10_:;
  // deopt 37 [r27]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L13_:;
  // st n = dx5
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx5_1, RHO);
  (void)(Rsh_Fir_reg_dx5_1);
  // dx6 = ld dx
  Rsh_Fir_reg_dx6_1 = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

L49_:;
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L12_;

L51_:;
  // dr = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc then L53() else L52(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr)
    Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dr1;
    goto L52_;
  }

L52_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r28 = dyn __(dx3, 1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dx3_1;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L13(r28)
  // L13(r28)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r28_;
  goto L13_;

D12_:;
  // deopt 45 [dx6]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dx6_1;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L53_:;
  // dx4 = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L13(dx4)
  // L13(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_1;
  goto L13_;

L54_:;
  // dx7 = force? dx6
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx6_1);
  // checkMissing(dx7)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dx7_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dx7_1;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args89);
  // if c3 then L55() else L56(dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L55()
    goto L55_;
  } else {
  // L56(dx7)
    Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_dx7_1;
    goto L56_;
  }

L14_:;
  // st p = dx11
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx11_1, RHO);
  (void)(Rsh_Fir_reg_dx11_1);
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L58() else D13()
  // L58()
  goto L58_;

L55_:;
  // dr2 = tryDispatchBuiltin.1("[", dx7)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_dx7_1;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc1 then L57() else L56(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L57()
    goto L57_;
  } else {
  // L56(dr2)
    Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_dr2_1;
    goto L56_;
  }

L56_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r29 = dyn __1(dx9, 2)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dx9_1;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L14(r29)
  // L14(r29)
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_r29_;
  goto L14_;

D13_:;
  // deopt 51 [n4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L57_:;
  // dx10 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx10_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L14(dx10)
  // L14(dx10)
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_dx10_1;
  goto L14_;

L58_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r30 = `!`(n5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args95);
  // c4 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args96);
  // if c4 then L15(c4) else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L15(c4)
    Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c4_1;
    goto L15_;
  } else {
  // L59()
    goto L59_;
  }

L15_:;
  // c10 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_c5_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args97);
  // if c10 then L62() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L62()
    goto L62_;
  } else {
  // L16()
    goto L16_;
  }

L59_:;
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L60() else D14()
  // L60()
  goto L60_;

D14_:;
  // deopt 54 [c4, p7]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c4_1;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // La_svd = ldf `La.svd`
  Rsh_Fir_reg_La_svd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L66() else D17()
  // L66()
  goto L66_;

L60_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // r31 = `!`(p8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args99);
  // c7 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args100);
  // c8 = `||`(c4, c7)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_c4_1;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args101);
  // goto L15(c8)
  // L15(c8)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c8_;
  goto L15_;

L62_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L63() else D15()
  // L63()
  goto L63_;

D15_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // r32 = dyn stop2("a dimension is zero")
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L64() else D16()
  // L64()
  goto L64_;

L66_:;
  // p9 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_3, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   nu1 = ld nu;
  //   nu2 = force? nu1;
  //   checkMissing(nu2);
  //   return nu2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_4, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   nv1 = ld nv;
  //   nv2 = force? nv1;
  //   checkMissing(nv2);
  //   return nv2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_5, 0, NULL, CCP, RHO);
  // r37 = dyn La_svd(p9, p10, p11)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_svd, 3, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

D16_:;
  // deopt 61 [r32]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 69 [r37]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L17()
  // L17()
  goto L17_;

L67_:;
  // st `La.res` = r37
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard6 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L18_:;
  // st res = r39
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // nu3 = ld nu
  Rsh_Fir_reg_nu3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L76() else D21()
  // L76()
  goto L76_;

L68_:;
  // La_res = ld `La.res`
  Rsh_Fir_reg_La_res = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L70() else D19()
  // L70()
  goto L70_;

L69_:;
  // r38 = dyn base6[d](<lang `$`(La.res, d)>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L18(r38)
  // L18(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L18_;

D19_:;
  // deopt 73 [La_res]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_La_res;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 80 [nu3]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_nu3_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L70_:;
  // La_res1 = force? La_res
  Rsh_Fir_reg_La_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_La_res);
  // checkMissing(La_res1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_La_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(La_res1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_La_res1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args110);
  // if c11 then L72() else L73(La_res1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L72()
    goto L72_;
  } else {
  // L73(La_res1)
    Rsh_Fir_reg_La_res3_ = Rsh_Fir_reg_La_res1_;
    goto L73_;
  }

L76_:;
  // nu4 = force? nu3
  Rsh_Fir_reg_nu4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu3_);
  // checkMissing(nu4)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_nu4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(nu4)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_nu4_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args112);
  // if c12 then L77() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L77()
    goto L77_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // nv3 = ld nv
  Rsh_Fir_reg_nv3_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L88() else D23()
  // L88()
  goto L88_;

L71_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r41 = dyn list(dx13)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L75() else D20()
  // L75()
  goto L75_;

L72_:;
  // dr4 = tryDispatchBuiltin.1("$", La_res1)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_La_res1_;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args114);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if dc2 then L74() else L73(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr4)
    Rsh_Fir_reg_La_res3_ = Rsh_Fir_reg_dr4_1;
    goto L73_;
  }

L73_:;
  // r40 = `$`(La_res3, <sym d>)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_La_res3_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args116);
  // goto L71(r40)
  // L71(r40)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r40_;
  goto L71_;

L77_:;
  // La_res4 = ld `La.res`
  Rsh_Fir_reg_La_res4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L78() else D22()
  // L78()
  goto L78_;

D20_:;
  // deopt 78 [r41]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 82 [La_res4]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_La_res4_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 90 [nv3]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_nv3_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L74_:;
  // dx12 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // goto L71(dx12)
  // L71(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L71_;

L75_:;
  // goto L18(r41)
  // L18(r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L18_;

L78_:;
  // La_res5 = force? La_res4
  Rsh_Fir_reg_La_res5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_La_res4_);
  // checkMissing(La_res5)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_La_res5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(La_res5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_La_res5_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c13 then L80() else L81(La_res5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L80()
    goto L80_;
  } else {
  // L81(La_res5)
    Rsh_Fir_reg_La_res7_ = Rsh_Fir_reg_La_res5_;
    goto L81_;
  }

L88_:;
  // nv4 = force? nv3
  Rsh_Fir_reg_nv4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv3_);
  // checkMissing(nv4)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_nv4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // c15 = `as.logical`(nv4)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_nv4_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args121);
  // if c15 then L89() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L89()
    goto L89_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L107() else D30()
  // L107()
  goto L107_;

L79_:;
  // l = ld res
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // c14 = `is.object`(l)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args122);
  // if c14 then L84() else L85(dx15, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L84()
    goto L84_;
  } else {
  // L85(dx15, l)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L85_;
  }

L80_:;
  // dr6 = tryDispatchBuiltin.1("$", La_res5)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_La_res5_;
  Rsh_Fir_reg_dr6_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args123);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dc3_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if dc3 then L82() else L81(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_1)) {
  // L82()
    goto L82_;
  } else {
  // L81(dr6)
    Rsh_Fir_reg_La_res7_ = Rsh_Fir_reg_dr6_1;
    goto L81_;
  }

L81_:;
  // r42 = `$`(La_res7, <sym u>)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_La_res7_;
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args125);
  // goto L79(r42)
  // L79(r42)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r42_;
  goto L79_;

L89_:;
  // sym7 = ldf `is.complex`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base7 = ldf `is.complex` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args126);
  // if guard7 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

D30_:;
  // deopt 113 [res]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L22_:;
  // c17 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args127);
  // if c17 then L93() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L93()
    goto L93_;
  } else {
  // L23()
    goto L23_;
  }

L82_:;
  // dx14 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L79(dx14)
  // L79(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L79_;

L83_:;
  // st res = dx21
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L20()
  // L20()
  goto L20_;

L84_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l, dx15)
  SEXP Rsh_Fir_array_args129[3];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args129[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr8_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args129);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dc4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc4 then L86() else L85(dx15, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_1)) {
  // L86()
    goto L86_;
  } else {
  // L85(dx15, dr8)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr8_1;
    goto L85_;
  }

L85_:;
  // r43 = `$<-`(l2, <sym u>, dx15)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args131[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args131);
  // goto L83(dx17, r43)
  // L83(dx17, r43)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r43_;
  goto L83_;

L90_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L92() else D24()
  // L92()
  goto L92_;

L91_:;
  // r44 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L22(r44)
  // L22(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L22_;

L107_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res1
  return Rsh_Fir_reg_res1_;

D24_:;
  // deopt 93 [x9]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L23_:;
  // t1 = ldf t
  Rsh_Fir_reg_t1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

L25_:;
  // l3 = ld res
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // c20 = `is.object`(l3)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args134);
  // if c20 then L103() else L104(r52, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L103()
    goto L103_;
  } else {
  // L104(r52, l3)
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r52_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L104_;
  }

L86_:;
  // dx19 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L83(dx15, dx19)
  // L83(dx15, dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L83_;

L92_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c16 = `is.complex`(x10)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(388, RHO, 1, Rsh_Fir_array_args137);
  // goto L22(c16)
  // L22(c16)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_c16_;
  goto L22_;

L93_:;
  // sym8 = ldf Conj
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base8 = ldf Conj in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args138);
  // if guard8 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

D28_:;
  // deopt 105 []
  Rsh_Fir_deopt(105, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L25(r47)
  // L25(r47)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r47_;
  goto L25_;

L94_:;
  // t = ldf t
  Rsh_Fir_reg_t1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L96() else D25()
  // L96()
  goto L96_;

L95_:;
  // r46 = dyn base8(<lang t(`$`(La.res, vt))>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L24(r46)
  // L24(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L24_;

L100_:;
  // p13 = prom<V +>{
  //   La_res12 = ld `La.res`;
  //   La_res13 = force? La_res12;
  //   checkMissing(La_res13);
  //   c19 = `is.object`(La_res13);
  //   if c19 then L1() else L2(La_res13);
  // L0(dx26):
  //   return dx26;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", La_res13);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(La_res15):
  //   r53 = `$`(La_res15, <sym vt>);
  //   goto L0(r53);
  // L3():
  //   dx25 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx25);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_6, 0, NULL, CCP, RHO);
  // r55 = dyn t1(p13)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t1_1, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L101() else D29()
  // L101()
  goto L101_;

L102_:;
  // st res = dx28
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx28_, RHO);
  (void)(Rsh_Fir_reg_dx28_);
  // goto L26()
  // L26()
  goto L26_;

L103_:;
  // dr14 = tryDispatchBuiltin.0("$<-", l3, r52)
  SEXP Rsh_Fir_array_args147[3];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args147[2] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args147);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc7 then L105() else L104(r52, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L105()
    goto L105_;
  } else {
  // L104(r52, dr14)
    Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r52_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr14_;
    goto L104_;
  }

L104_:;
  // r60 = `$<-`(l5, <sym v>, r52)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args149);
  // goto L102(r57, r60)
  // L102(r57, r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r60_;
  goto L102_;

D25_:;
  // deopt 99 []
  Rsh_Fir_deopt(99, 0, NULL, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 107 [r55]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L96_:;
  // p12 = prom<V +>{
  //   La_res8 = ld `La.res`;
  //   La_res9 = force? La_res8;
  //   checkMissing(La_res9);
  //   c18 = `is.object`(La_res9);
  //   if c18 then L1() else L2(La_res9);
  // L0(dx24):
  //   return dx24;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", La_res9);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(La_res11):
  //   r48 = `$`(La_res11, <sym vt>);
  //   goto L0(r48);
  // L3():
  //   dx23 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx23);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3456095677_7, 0, NULL, CCP, RHO);
  // r50 = dyn t(p12)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t1, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L97() else D26()
  // L97()
  goto L97_;

L101_:;
  // goto L25(r55)
  // L25(r55)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r55_;
  goto L25_;

L105_:;
  // dx27 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L102(r52, dx27)
  // L102(r52, dx27)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L102_;

D26_:;
  // deopt 101 [r50]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L97_:;
  // Conj = ldf Conj in base
  Rsh_Fir_reg_Conj = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r51 = dyn Conj(r50)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Conj, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L98() else D27()
  // L98()
  goto L98_;

D27_:;
  // deopt 103 [r51]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L24(r51)
  // L24(r51)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r51_;
  goto L24_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // sym = ldf min
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf min in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
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
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // p = ld p
  Rsh_Fir_reg_p1 = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // p1 = force? p
  Rsh_Fir_reg_p1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r2 = dyn min(n1, p1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_min1_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf min
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf min in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_1;

L1_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // p3 = ld p
  Rsh_Fir_reg_p3_1 = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_1);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // min1 = ldf min in base
  Rsh_Fir_reg_min1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r6 = dyn min1(n3, p4)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min1_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nu1_;
  SEXP Rsh_Fir_reg_nu2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // nu1 = ld nu
  Rsh_Fir_reg_nu1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // nu2 = force? nu1
  Rsh_Fir_reg_nu2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu1_);
  // checkMissing(nu2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_nu2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return nu2
  return Rsh_Fir_reg_nu2_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nv1_;
  SEXP Rsh_Fir_reg_nv2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // nv1 = ld nv
  Rsh_Fir_reg_nv1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // nv2 = force? nv1
  Rsh_Fir_reg_nv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv1_);
  // checkMissing(nv2)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_nv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return nv2
  return Rsh_Fir_reg_nv2_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_La_res12_;
  SEXP Rsh_Fir_reg_La_res13_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_La_res15_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_r53_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // La_res12 = ld `La.res`
  Rsh_Fir_reg_La_res12_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // La_res13 = force? La_res12
  Rsh_Fir_reg_La_res13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_La_res12_);
  // checkMissing(La_res13)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_La_res13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(La_res13)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_La_res13_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args141);
  // if c19 then L1() else L2(La_res13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L1()
    goto L1_;
  } else {
  // L2(La_res13)
    Rsh_Fir_reg_La_res15_ = Rsh_Fir_reg_La_res13_;
    goto L2_;
  }

L0_:;
  // return dx26
  return Rsh_Fir_reg_dx26_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", La_res13)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_La_res13_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args142);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_La_res15_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r53 = `$`(La_res15, <sym vt>)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_La_res15_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args144);
  // goto L0(r53)
  // L0(r53)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r53_;
  goto L0_;

L3_:;
  // dx25 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L0(dx25)
  // L0(dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3456095677_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_La_res8_;
  SEXP Rsh_Fir_reg_La_res9_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_La_res11_;
  SEXP Rsh_Fir_reg_dr10_1;
  SEXP Rsh_Fir_reg_dc5_1;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3456095677/0: expected 0, got %d", NCAPTURES);

  // La_res8 = ld `La.res`
  Rsh_Fir_reg_La_res8_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // La_res9 = force? La_res8
  Rsh_Fir_reg_La_res9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_La_res8_);
  // checkMissing(La_res9)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_La_res9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(La_res9)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_La_res9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args151);
  // if c18 then L1() else L2(La_res9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L1()
    goto L1_;
  } else {
  // L2(La_res9)
    Rsh_Fir_reg_La_res11_ = Rsh_Fir_reg_La_res9_;
    goto L2_;
  }

L0_:;
  // return dx24
  return Rsh_Fir_reg_dx24_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", La_res9)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_La_res9_;
  Rsh_Fir_reg_dr10_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dc5_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_La_res11_ = Rsh_Fir_reg_dr10_1;
    goto L2_;
  }

L2_:;
  // r48 = `$`(La_res11, <sym vt>)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_La_res11_;
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args154);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r48_;
  goto L0_;

L3_:;
  // dx23 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L0(dx23)
  // L0(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4266987626 dynamic dispatch ([n])

  return Rsh_Fir_user_version_inner4266987626_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4266987626 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4266987626/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n1;
  SEXP Rsh_Fir_reg_n1_1;
  SEXP Rsh_Fir_reg_n2_1;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_r5_2;
  SEXP Rsh_Fir_reg_r6_1;

  // Bind parameters
  Rsh_Fir_reg_n1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_n1, RHO);
  (void)(Rsh_Fir_reg_n1);
  // n1 = ld n
  Rsh_Fir_reg_n1_1 = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 [1.0, n1]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L0_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_1);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_n2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // r = `:`(1.0, n2)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_n2_1;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args160);
  // st i = r
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r2, RHO);
  (void)(Rsh_Fir_reg_r2);
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [1.0]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_const(CCP, 48);
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   i = ld i;
  //   i1 = force? i;
  //   checkMissing(i1);
  //   r1 = `-`(i1, 1.0);
  //   return r1;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4266987626_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   i2 = ld i;
  //   i3 = force? i2;
  //   checkMissing(i3);
  //   return i3;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4266987626_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   __ = ld `+`;
  //   __1 = force? __;
  //   checkMissing(__1);
  //   return __1;
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4266987626_2, 0, NULL, CCP, RHO);
  // r5 = dyn outer(p, p1, p2)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 3, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 11 [1.0, r5]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L2_:;
  // r6 = `/`(1.0, r5)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args166);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_1;
}
SEXP Rsh_Fir_user_promise_inner4266987626_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_r1_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4266987626/0: expected 0, got %d", NCAPTURES);

  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // r1 = `-`(i1, 1.0)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args162);
  // return r1
  return Rsh_Fir_reg_r1_2;
}
SEXP Rsh_Fir_user_promise_inner4266987626_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_i3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4266987626/0: expected 0, got %d", NCAPTURES);

  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // return i3
  return Rsh_Fir_reg_i3_;
}
SEXP Rsh_Fir_user_promise_inner4266987626_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2;
  SEXP Rsh_Fir_reg___1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4266987626/0: expected 0, got %d", NCAPTURES);

  // __ = ld `+`
  Rsh_Fir_reg___2 = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // __1 = force? __
  Rsh_Fir_reg___1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg___2);
  // checkMissing(__1)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg___1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // return __1
  return Rsh_Fir_reg___1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
