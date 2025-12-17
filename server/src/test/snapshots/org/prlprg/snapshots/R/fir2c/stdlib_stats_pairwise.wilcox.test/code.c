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
SEXP Rsh_Fir_user_function_inner2162886600_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2162886600_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2162886600_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2162886600_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner613390797_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner613390797_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner613390797_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner613390797_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner613390797_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner613390797_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner613390797_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner613390797_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_attach;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_pairwise_wilcox_test;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_pairwise_wilcox_test1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_detach;
  SEXP Rsh_Fir_reg_r13_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2162886600
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2162886600_, RHO, CCP);
  // st `pairwise.wilcox.test` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // attach = ldf attach
  Rsh_Fir_reg_attach = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   airquality = ld airquality;
  //   airquality1 = force? airquality;
  //   checkMissing(airquality1);
  //   return airquality1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn attach(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attach, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   Month = ld Month;
  //   Month1 = force? Month;
  //   checkMissing(Month1);
  //   return Month1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   month_abb = ld `month.abb`;
  //   month_abb1 = force? month_abb;
  //   checkMissing(month_abb1);
  //   c = `is.object`(month_abb1);
  //   if c then L1() else L2(month_abb1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", month_abb1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(month_abb3):
  //   __ = ldf `[` in base;
  //   r4 = dyn __(month_abb3, <int 5, 6, 7, 8, 9>);
  //   goto L0(r4);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r6 = dyn factor[, labels](p1, p2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // st Month = r6
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // pairwise_wilcox_test = ldf `pairwise.wilcox.test`
  Rsh_Fir_reg_pairwise_wilcox_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   Ozone = ld Ozone;
  //   Ozone1 = force? Ozone;
  //   checkMissing(Ozone1);
  //   return Ozone1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   Month2 = ld Month;
  //   Month3 = force? Month2;
  //   checkMissing(Month3);
  //   return Month3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r9 = dyn pairwise_wilcox_test(p3, p4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pairwise_wilcox_test, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // pairwise_wilcox_test1 = ldf `pairwise.wilcox.test`
  Rsh_Fir_reg_pairwise_wilcox_test1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p5 = prom<V +>{
  //   Ozone2 = ld Ozone;
  //   Ozone3 = force? Ozone2;
  //   checkMissing(Ozone3);
  //   return Ozone3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   Month4 = ld Month;
  //   Month5 = force? Month4;
  //   checkMissing(Month5);
  //   return Month5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r12 = dyn pairwise_wilcox_test1[, , `p.adjust.method`](p5, p6, "bonf")
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pairwise_wilcox_test1_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // detach = ldf detach
  Rsh_Fir_reg_detach = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r13 = dyn detach()
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_detach, 0, NULL, NULL, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_airquality;
  SEXP Rsh_Fir_reg_airquality1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // airquality = ld airquality
  Rsh_Fir_reg_airquality = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // airquality1 = force? airquality
  Rsh_Fir_reg_airquality1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_airquality);
  // checkMissing(airquality1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_airquality1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return airquality1
  return Rsh_Fir_reg_airquality1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Month;
  SEXP Rsh_Fir_reg_Month1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Month = ld Month
  Rsh_Fir_reg_Month = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Month1 = force? Month
  Rsh_Fir_reg_Month1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Month);
  // checkMissing(Month1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_Month1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return Month1
  return Rsh_Fir_reg_Month1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_month_abb;
  SEXP Rsh_Fir_reg_month_abb1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_month_abb3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // month_abb = ld `month.abb`
  Rsh_Fir_reg_month_abb = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // month_abb1 = force? month_abb
  Rsh_Fir_reg_month_abb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month_abb);
  // checkMissing(month_abb1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_month_abb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `is.object`(month_abb1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_month_abb1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args4);
  // if c then L1() else L2(month_abb1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(month_abb1)
    Rsh_Fir_reg_month_abb3_ = Rsh_Fir_reg_month_abb1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", month_abb1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_month_abb1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_month_abb3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r4 = dyn __(month_abb3, <int 5, 6, 7, 8, 9>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_month_abb3_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Ozone;
  SEXP Rsh_Fir_reg_Ozone1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Ozone = ld Ozone
  Rsh_Fir_reg_Ozone = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // Ozone1 = force? Ozone
  Rsh_Fir_reg_Ozone1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Ozone);
  // checkMissing(Ozone1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_Ozone1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return Ozone1
  return Rsh_Fir_reg_Ozone1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Month2_;
  SEXP Rsh_Fir_reg_Month3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Month2 = ld Month
  Rsh_Fir_reg_Month2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Month3 = force? Month2
  Rsh_Fir_reg_Month3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Month2_);
  // checkMissing(Month3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_Month3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return Month3
  return Rsh_Fir_reg_Month3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Ozone2_;
  SEXP Rsh_Fir_reg_Ozone3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Ozone2 = ld Ozone
  Rsh_Fir_reg_Ozone2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // Ozone3 = force? Ozone2
  Rsh_Fir_reg_Ozone3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Ozone2_);
  // checkMissing(Ozone3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_Ozone3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return Ozone3
  return Rsh_Fir_reg_Ozone3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Month4_;
  SEXP Rsh_Fir_reg_Month5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Month4 = ld Month
  Rsh_Fir_reg_Month4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // Month5 = force? Month4
  Rsh_Fir_reg_Month5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Month4_);
  // checkMissing(Month5)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_Month5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return Month5
  return Rsh_Fir_reg_Month5_;
}
SEXP Rsh_Fir_user_function_inner2162886600_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2162886600 dynamic dispatch ([x, g, `p.adjust.method`, paired, `...`])

  return Rsh_Fir_user_version_inner2162886600_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2162886600_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2162886600 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2162886600/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_g;
  SEXP Rsh_Fir_reg_p_adjust_method;
  SEXP Rsh_Fir_reg_paired;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_p_adjust_method_isMissing;
  SEXP Rsh_Fir_reg_p_adjust_method_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_paired_isMissing;
  SEXP Rsh_Fir_reg_paired_orDefault;
  SEXP Rsh_Fir_reg_match_arg;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_factor1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_pairwise_table;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_METHOD;
  SEXP Rsh_Fir_reg_METHOD1_;
  SEXP Rsh_Fir_reg_DNAME;
  SEXP Rsh_Fir_reg_DNAME1_;
  SEXP Rsh_Fir_reg_PVAL;
  SEXP Rsh_Fir_reg_PVAL1_;
  SEXP Rsh_Fir_reg_p_adjust_method5_;
  SEXP Rsh_Fir_reg_p_adjust_method6_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_g = PARAMS[1];
  Rsh_Fir_reg_p_adjust_method = PARAMS[2];
  Rsh_Fir_reg_paired = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st g = g
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_g, RHO);
  (void)(Rsh_Fir_reg_g);
  // p_adjust_method_isMissing = missing.0(p_adjust_method)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p_adjust_method;
  Rsh_Fir_reg_p_adjust_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if p_adjust_method_isMissing then L0() else L1(p_adjust_method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_p_adjust_method_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(p_adjust_method)
    Rsh_Fir_reg_p_adjust_method_orDefault = Rsh_Fir_reg_p_adjust_method;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   p_adjust_methods = ld `p.adjust.methods`;
  //   p_adjust_methods1 = force? p_adjust_methods;
  //   checkMissing(p_adjust_methods1);
  //   return p_adjust_methods1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_p_adjust_method_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st `p.adjust.method` = p_adjust_method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_p_adjust_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_p_adjust_method_orDefault);
  // paired_isMissing = missing.0(paired)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_paired;
  Rsh_Fir_reg_paired_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args18);
  // if paired_isMissing then L2(FALSE) else L2(paired)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_paired_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_paired_orDefault = Rsh_const(CCP, 17);
    goto L2_;
  } else {
  // L2(paired)
    Rsh_Fir_reg_paired_orDefault = Rsh_Fir_reg_paired;
    goto L2_;
  }

L2_:;
  // st paired = paired_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_paired_orDefault, RHO);
  (void)(Rsh_Fir_reg_paired_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   p_adjust_method1 = ld `p.adjust.method`;
  //   p_adjust_method2 = force? p_adjust_method1;
  //   checkMissing(p_adjust_method2);
  //   return p_adjust_method2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_1, 0, NULL, CCP, RHO);
  // r2 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L5_:;
  // st `p.adjust.method` = r2
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r2_1, RHO);
  (void)(Rsh_Fir_reg_r2_1);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   deparse1 = ldf deparse1;
  //   p2 = prom<V +>{
  //     sym = ldf substitute;
  //     base = ldf substitute in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r4):
  //     return r4;
  //   L1():
  //     substitute = ldf substitute in base;
  //     r5 = dyn substitute(<sym x>);
  //     goto L0(r5);
  //   L2():
  //     r3 = dyn base(<sym x>);
  //     goto L0(r3);
  //   };
  //   r7 = dyn deparse1(p2);
  //   return r7;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_2, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   deparse2 = ldf deparse1;
  //   p4 = prom<V +>{
  //     sym1 = ldf substitute;
  //     base1 = ldf substitute in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r10):
  //     return r10;
  //   L1():
  //     substitute1 = ldf substitute in base;
  //     r11 = dyn substitute1(<sym g>);
  //     goto L0(r11);
  //   L2():
  //     r9 = dyn base1(<sym g>);
  //     goto L0(r9);
  //   };
  //   r13 = dyn deparse2(p4);
  //   return r13;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_4, 0, NULL, CCP, RHO);
  // r15 = dyn paste(p3, "and", p5)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 10 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L7_:;
  // st DNAME = r15
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // factor = ldf factor
  Rsh_Fir_reg_factor1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p6 = prom<V +>{
  //   g1 = ld g;
  //   g2 = force? g1;
  //   checkMissing(g2);
  //   return g2;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_6, 0, NULL, CCP, RHO);
  // r17 = dyn factor(p6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor1, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 15 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L9_:;
  // st g = r17
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // st METHOD = NULL
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_const(CCP, 26), RHO);
  (void)(Rsh_const(CCP, 26));
  // r18 = clos inner613390797
  Rsh_Fir_reg_r18_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner613390797_, RHO, CCP);
  // st `compare.levels` = r18
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // pairwise_table = ldf `pairwise.table`
  Rsh_Fir_reg_pairwise_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p7 = prom<V +>{
  //   compare_levels = ld `compare.levels`;
  //   compare_levels1 = force? compare_levels;
  //   checkMissing(compare_levels1);
  //   return compare_levels1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_7, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   levels = ldf levels;
  //   p8 = prom<V +>{
  //     g3 = ld g;
  //     g4 = force? g3;
  //     checkMissing(g4);
  //     return g4;
  //   };
  //   r21 = dyn levels(p8);
  //   return r21;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_8, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   p_adjust_method3 = ld `p.adjust.method`;
  //   p_adjust_method4 = force? p_adjust_method3;
  //   checkMissing(p_adjust_method4);
  //   return p_adjust_method4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_10, 0, NULL, CCP, RHO);
  // r24 = dyn pairwise_table(p7, p9, p10)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pairwise_table, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D7_:;
  // deopt 28 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L11_:;
  // st PVAL = r24
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym2 = ldf list
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf list in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard2 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L3_:;
  // st ans = r26
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // l = ld ans
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

L12_:;
  // METHOD = ld METHOD
  Rsh_Fir_reg_METHOD = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

L13_:;
  // r25 = dyn base2[method, `data.name`, `p.value`, `p.adjust.method`](<sym METHOD>, <sym DNAME>, <sym PVAL>, <sym p.adjust.method>)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_arg_names16[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L3(r25)
  // L3(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L3_;

D8_:;
  // deopt 32 [METHOD]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_METHOD;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 50 ["pairwise.htest", l, "pairwise.htest"]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_const(CCP, 38);
  Rsh_Fir_deopt(50, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L14_:;
  // METHOD1 = force? METHOD
  Rsh_Fir_reg_METHOD1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_METHOD);
  // checkMissing(METHOD1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_METHOD1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

L19_:;
  // r28 = dyn class__(l, NULL, "pairwise.htest")
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

D9_:;
  // deopt 35 [DNAME]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_DNAME;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 52 ["pairwise.htest", r28]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L15_:;
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // PVAL = ld PVAL
  Rsh_Fir_reg_PVAL = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

L20_:;
  // st ans = r28
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

D10_:;
  // deopt 38 [PVAL]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_PVAL;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 54 [ans]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L16_:;
  // PVAL1 = force? PVAL
  Rsh_Fir_reg_PVAL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_PVAL);
  // checkMissing(PVAL1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_PVAL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // p_adjust_method5 = ld `p.adjust.method`
  Rsh_Fir_reg_p_adjust_method5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

L21_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans1
  return Rsh_Fir_reg_ans1_;

D11_:;
  // deopt 41 [p_adjust_method5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_p_adjust_method5_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L17_:;
  // p_adjust_method6 = force? p_adjust_method5
  Rsh_Fir_reg_p_adjust_method6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_method5_);
  // checkMissing(p_adjust_method6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p_adjust_method6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r27 = dyn list(METHOD1, DNAME1, PVAL1, p_adjust_method6)
  SEXP Rsh_Fir_array_args45[4];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_METHOD1_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_DNAME1_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_PVAL1_;
  Rsh_Fir_array_args45[3] = Rsh_Fir_reg_p_adjust_method6_;
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 4, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L18() else D12()
  // L18()
  goto L18_;

D12_:;
  // deopt 45 [r27]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L3(r27)
  // L3(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p_adjust_methods;
  SEXP Rsh_Fir_reg_p_adjust_methods1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // p_adjust_methods = ld `p.adjust.methods`
  Rsh_Fir_reg_p_adjust_methods = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // p_adjust_methods1 = force? p_adjust_methods
  Rsh_Fir_reg_p_adjust_methods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_methods);
  // checkMissing(p_adjust_methods1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p_adjust_methods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return p_adjust_methods1
  return Rsh_Fir_reg_p_adjust_methods1_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p_adjust_method1_;
  SEXP Rsh_Fir_reg_p_adjust_method2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // p_adjust_method1 = ld `p.adjust.method`
  Rsh_Fir_reg_p_adjust_method1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // p_adjust_method2 = force? p_adjust_method1
  Rsh_Fir_reg_p_adjust_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_method1_);
  // checkMissing(p_adjust_method2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p_adjust_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return p_adjust_method2
  return Rsh_Fir_reg_p_adjust_method2_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p2 = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   substitute = ldf substitute in base;
  //   r5 = dyn substitute(<sym x>);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(<sym x>);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_3, 0, NULL, CCP, RHO);
  // r7 = dyn deparse1(p2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // sym = ldf substitute
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_1;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r5 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse2_;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r13_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // deparse2 = ldf deparse1
  Rsh_Fir_reg_deparse2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf substitute;
  //   base1 = ldf substitute in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   substitute1 = ldf substitute in base;
  //   r11 = dyn substitute1(<sym g>);
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base1(<sym g>);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_5, 0, NULL, CCP, RHO);
  // r13 = dyn deparse2(p4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_1;
}
SEXP Rsh_Fir_user_promise_inner2162886600_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_substitute1_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // substitute1 = ldf substitute in base
  Rsh_Fir_reg_substitute1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r11 = dyn substitute1(<sym g>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base1(<sym g>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_g1_;
  SEXP Rsh_Fir_reg_g2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // g1 = ld g
  Rsh_Fir_reg_g1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // g2 = force? g1
  Rsh_Fir_reg_g2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_g1_);
  // checkMissing(g2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_g2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return g2
  return Rsh_Fir_reg_g2_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_compare_levels;
  SEXP Rsh_Fir_reg_compare_levels1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // compare_levels = ld `compare.levels`
  Rsh_Fir_reg_compare_levels = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // compare_levels1 = force? compare_levels
  Rsh_Fir_reg_compare_levels1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_compare_levels);
  // checkMissing(compare_levels1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_compare_levels1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return compare_levels1
  return Rsh_Fir_reg_compare_levels1_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_levels;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // levels = ldf levels
  Rsh_Fir_reg_levels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p8 = prom<V +>{
  //   g3 = ld g;
  //   g4 = force? g3;
  //   checkMissing(g4);
  //   return g4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2162886600_9, 0, NULL, CCP, RHO);
  // r21 = dyn levels(p8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_g3_;
  SEXP Rsh_Fir_reg_g4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // g3 = ld g
  Rsh_Fir_reg_g3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // g4 = force? g3
  Rsh_Fir_reg_g4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_g3_);
  // checkMissing(g4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_g4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return g4
  return Rsh_Fir_reg_g4_;
}
SEXP Rsh_Fir_user_promise_inner2162886600_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p_adjust_method3_;
  SEXP Rsh_Fir_reg_p_adjust_method4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2162886600/0: expected 0, got %d", NCAPTURES);

  // p_adjust_method3 = ld `p.adjust.method`
  Rsh_Fir_reg_p_adjust_method3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // p_adjust_method4 = force? p_adjust_method3
  Rsh_Fir_reg_p_adjust_method4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p_adjust_method3_);
  // checkMissing(p_adjust_method4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p_adjust_method4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return p_adjust_method4
  return Rsh_Fir_reg_p_adjust_method4_;
}
SEXP Rsh_Fir_user_function_inner613390797_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner613390797 dynamic dispatch ([i, j])

  return Rsh_Fir_user_version_inner613390797_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner613390797_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner613390797 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner613390797/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_g1;
  SEXP Rsh_Fir_reg_g1_1;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r4_2;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_g2_1;
  SEXP Rsh_Fir_reg_g3_1;
  SEXP Rsh_Fir_reg_as_integer1_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r9_2;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_METHOD1;
  SEXP Rsh_Fir_reg_METHOD1_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_wilcox_test;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_wt;
  SEXP Rsh_Fir_reg_wt1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_wt3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_wt4_;
  SEXP Rsh_Fir_reg_wt5_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_wt7_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_wilcox_test1_;
  SEXP Rsh_Fir_reg_p3_2;
  SEXP Rsh_Fir_reg_p4_2;
  SEXP Rsh_Fir_reg_p5_2;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r24_1;

  // Bind parameters
  Rsh_Fir_reg_i = PARAMS[0];
  Rsh_Fir_reg_j = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st j = j
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_j, RHO);
  (void)(Rsh_Fir_reg_j);
  // x = ld x
  Rsh_Fir_reg_x1 = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

D0_:;
  // deopt 0 [x]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L6_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args47);
  // if c then L7() else L8(x1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L7()
    goto L7_;
  } else {
  // L8(x1)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_x1_;
    goto L8_;
  }

L0_:;
  // st xi = dx1
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx1_1, RHO);
  (void)(Rsh_Fir_reg_dx1_1);
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L7_:;
  // dr = tryDispatchBuiltin.1("[", x1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_dr1;
    goto L8_;
  }

L8_:;
  // sym = ldf `as.integer`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base = ldf `as.integer` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

D4_:;
  // deopt 12 [x7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L1_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L9_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

L10_:;
  // g = ld g
  Rsh_Fir_reg_g1 = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L11_:;
  // r = dyn base(<sym g>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L1(x3, r)
  // L1(x3, r)
  Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L15_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args54);
  // if c1 then L16() else L17(x8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L17(x8)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    goto L17_;
  }

D1_:;
  // deopt 4 [x3, g]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_g1;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 7 [x6, r1, i1]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L2_:;
  // st xj = dx3
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L12_:;
  // g1 = force? g
  Rsh_Fir_reg_g1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_g1);
  // checkMissing(g1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_g1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r2 = dyn as_integer(g1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_g1_1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L14_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r3 = `==`(r1, i2)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args59);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r4 = dyn __(x6, r3)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r4_2;
  goto L0_;

L16_:;
  // dr2 = tryDispatchBuiltin.1("[", x8)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc1 then L18() else L17(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr2)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_dr2_;
    goto L17_;
  }

L17_:;
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

D2_:;
  // deopt 7 [x3, r2]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L3_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

L4_:;
  // c3 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args64);
  // if c3 then L27() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L27()
    goto L27_;
  } else {
  // L5()
    goto L5_;
  }

L13_:;
  // goto L1(x3, r2)
  // L1(x3, r2)
  Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_2;
  goto L1_;

L18_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

L19_:;
  // g2 = ld g
  Rsh_Fir_reg_g2_1 = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

L20_:;
  // r5 = dyn base1(<sym g>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L3(x10, r5)
  // L3(x10, r5)
  Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_1;
  goto L3_;

L24_:;
  // METHOD = ld METHOD
  Rsh_Fir_reg_METHOD1 = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

L25_:;
  // r10 = dyn base2(<sym METHOD>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L4_;

D5_:;
  // deopt 16 [x10, g2]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_g2_1;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 19 [x13, r6, j1]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_j1_;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 25 [METHOD]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_METHOD1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L5_:;
  // wilcox_test1 = ldf `wilcox.test`
  Rsh_Fir_reg_wilcox_test1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

L21_:;
  // g3 = force? g2
  Rsh_Fir_reg_g3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_g2_1);
  // checkMissing(g3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_g3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r7 = dyn as_integer1(g3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_g3_1;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L23_:;
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r8 = `==`(r6, j2)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_j2_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args71);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r9 = dyn __1(x13, r8)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r9_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_2;
  goto L2_;

L26_:;
  // METHOD1 = force? METHOD
  Rsh_Fir_reg_METHOD1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_METHOD1);
  // checkMissing(METHOD1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_METHOD1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c2 = `==`(METHOD1, NULL)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_METHOD1_1;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args74);
  // goto L4(c2)
  // L4(c2)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_c2_;
  goto L4_;

L27_:;
  // wilcox_test = ldf `wilcox.test`
  Rsh_Fir_reg_wilcox_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

D6_:;
  // deopt 19 [x10, r7]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L3(x10, r7)
  // L3(x10, r7)
  Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_1;
  goto L3_;

L28_:;
  // p = prom<V +>{
  //   xi = ld xi;
  //   xi1 = force? xi;
  //   checkMissing(xi1);
  //   return xi1;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   xj = ld xj;
  //   xj1 = force? xj;
  //   checkMissing(xj1);
  //   return xj1;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   paired = ld paired;
  //   paired1 = force? paired;
  //   checkMissing(paired1);
  //   return paired1;
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_2, 0, NULL, CCP, RHO);
  // ddd = ld `...`
  Rsh_Fir_reg_ddd1 = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r15 = dyn wilcox_test[, , paired, `...`](p, p1, p2, ddd)
  SEXP Rsh_Fir_array_args78[4];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_p2_2;
  Rsh_Fir_array_args78[3] = Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names26[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_wilcox_test, 4, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L41_:;
  // p3 = prom<V +>{
  //   xi2 = ld xi;
  //   xi3 = force? xi2;
  //   checkMissing(xi3);
  //   return xi3;
  // }
  Rsh_Fir_reg_p3_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   xj2 = ld xj;
  //   xj3 = force? xj2;
  //   checkMissing(xj3);
  //   return xj3;
  // }
  Rsh_Fir_reg_p4_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   paired2 = ld paired;
  //   paired3 = force? paired2;
  //   checkMissing(paired3);
  //   return paired3;
  // }
  Rsh_Fir_reg_p5_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner613390797_5, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r21 = dyn wilcox_test1[, , paired, `...`](p3, p4, p5, ddd1)
  SEXP Rsh_Fir_array_args82[4];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p3_2;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_p4_2;
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_p5_2;
  Rsh_Fir_array_args82[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names27[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_wilcox_test1_, 4, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

D10_:;
  // deopt 35 [r15]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 51 [r21]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L29_:;
  // st wt = r15
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // wt = ld wt
  Rsh_Fir_reg_wt = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

L42_:;
  // c6 = `is.object`(r21)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args83);
  // if c6 then L44() else L45(r21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L44()
    goto L44_;
  } else {
  // L45(r21)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r21_1;
    goto L45_;
  }

D11_:;
  // deopt 37 [wt]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_wt;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L30_:;
  // wt1 = force? wt
  Rsh_Fir_reg_wt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt);
  // checkMissing(wt1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_wt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(wt1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_wt1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args85);
  // if c4 then L32() else L33(wt1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L32()
    goto L32_;
  } else {
  // L33(wt1)
    Rsh_Fir_reg_wt3_ = Rsh_Fir_reg_wt1_;
    goto L33_;
  }

L43_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx9
  return Rsh_Fir_reg_dx9_;

L44_:;
  // dr8 = tryDispatchBuiltin.1("$", r21)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc4 then L46() else L45(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr8)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_dr8_;
    goto L45_;
  }

L45_:;
  // r24 = `$`(r23, <sym p.value>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args88);
  // goto L43(r24)
  // L43(r24)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r24_1;
  goto L43_;

L31_:;
  // sst METHOD = dx5
  Rsh_Fir_super_store(Rsh_const(CCP, 27), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // wt4 = ld wt
  Rsh_Fir_reg_wt4_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

L32_:;
  // dr4 = tryDispatchBuiltin.1("$", wt1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_wt1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc2 then L34() else L33(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr4)
    Rsh_Fir_reg_wt3_ = Rsh_Fir_reg_dr4_;
    goto L33_;
  }

L33_:;
  // r16 = `$`(wt3, <sym method>)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_wt3_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args91);
  // goto L31(r16)
  // L31(r16)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r16_;
  goto L31_;

L46_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L43(dx8)
  // L43(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L43_;

D12_:;
  // deopt 41 [wt4]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_wt4_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L34_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L31(dx4)
  // L31(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L31_;

L35_:;
  // wt5 = force? wt4
  Rsh_Fir_reg_wt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt4_);
  // checkMissing(wt5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_wt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(wt5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_wt5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args95);
  // if c5 then L37() else L38(wt5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L37()
    goto L37_;
  } else {
  // L38(wt5)
    Rsh_Fir_reg_wt7_ = Rsh_Fir_reg_wt5_;
    goto L38_;
  }

L36_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx7
  return Rsh_Fir_reg_dx7_;

L37_:;
  // dr6 = tryDispatchBuiltin.1("$", wt5)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_wt5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc3 then L39() else L38(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L39()
    goto L39_;
  } else {
  // L38(dr6)
    Rsh_Fir_reg_wt7_ = Rsh_Fir_reg_dr6_;
    goto L38_;
  }

L38_:;
  // r17 = `$`(wt7, <sym p.value>)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_wt7_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args98);
  // goto L36(r17)
  // L36(r17)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r17_1;
  goto L36_;

L39_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L36(dx6)
  // L36(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L36_;
}
SEXP Rsh_Fir_user_promise_inner613390797_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xi;
  SEXP Rsh_Fir_reg_xi1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // xi = ld xi
  Rsh_Fir_reg_xi = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // xi1 = force? xi
  Rsh_Fir_reg_xi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi);
  // checkMissing(xi1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_xi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return xi1
  return Rsh_Fir_reg_xi1_;
}
SEXP Rsh_Fir_user_promise_inner613390797_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xj;
  SEXP Rsh_Fir_reg_xj1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // xj = ld xj
  Rsh_Fir_reg_xj = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // xj1 = force? xj
  Rsh_Fir_reg_xj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj);
  // checkMissing(xj1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_xj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return xj1
  return Rsh_Fir_reg_xj1_;
}
SEXP Rsh_Fir_user_promise_inner613390797_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paired1;
  SEXP Rsh_Fir_reg_paired1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // paired = ld paired
  Rsh_Fir_reg_paired1 = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // paired1 = force? paired
  Rsh_Fir_reg_paired1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paired1);
  // checkMissing(paired1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_paired1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return paired1
  return Rsh_Fir_reg_paired1_;
}
SEXP Rsh_Fir_user_promise_inner613390797_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xi2_;
  SEXP Rsh_Fir_reg_xi3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // xi2 = ld xi
  Rsh_Fir_reg_xi2_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // xi3 = force? xi2
  Rsh_Fir_reg_xi3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xi2_);
  // checkMissing(xi3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_xi3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return xi3
  return Rsh_Fir_reg_xi3_;
}
SEXP Rsh_Fir_user_promise_inner613390797_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xj2_;
  SEXP Rsh_Fir_reg_xj3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // xj2 = ld xj
  Rsh_Fir_reg_xj2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // xj3 = force? xj2
  Rsh_Fir_reg_xj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xj2_);
  // checkMissing(xj3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_xj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return xj3
  return Rsh_Fir_reg_xj3_;
}
SEXP Rsh_Fir_user_promise_inner613390797_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paired2_;
  SEXP Rsh_Fir_reg_paired3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner613390797/0: expected 0, got %d", NCAPTURES);

  // paired2 = ld paired
  Rsh_Fir_reg_paired2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // paired3 = force? paired2
  Rsh_Fir_reg_paired3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paired2_);
  // checkMissing(paired3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_paired3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return paired3
  return Rsh_Fir_reg_paired3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
