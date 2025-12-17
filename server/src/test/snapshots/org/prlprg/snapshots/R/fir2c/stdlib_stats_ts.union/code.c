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
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3464747981_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3464747981_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3464747981_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464747981_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3464747981_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_ts_union;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_ts_intersect;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_ts_union1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_ts_intersect1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r22_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3464747981
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3464747981_, RHO, CCP);
  // st `ts.union` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // ts_union = ldf `ts.union`
  Rsh_Fir_reg_ts_union = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   mdeaths = ld mdeaths;
  //   mdeaths1 = force? mdeaths;
  //   checkMissing(mdeaths1);
  //   return mdeaths1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   fdeaths = ld fdeaths;
  //   fdeaths1 = force? fdeaths;
  //   checkMissing(fdeaths1);
  //   return fdeaths1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r3 = dyn ts_union(p, p1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts_union, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   mdeaths2 = ld mdeaths;
  //   mdeaths3 = force? mdeaths2;
  //   checkMissing(mdeaths3);
  //   return mdeaths3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   fdeaths2 = ld fdeaths;
  //   fdeaths3 = force? fdeaths2;
  //   checkMissing(fdeaths3);
  //   return fdeaths3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r6 = dyn cbind(p2, p3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  // ts_intersect = ldf `ts.intersect`
  Rsh_Fir_reg_ts_intersect = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p5 = prom<V +>{
  //   window = ldf window;
  //   p4 = prom<V +>{
  //     mdeaths4 = ld mdeaths;
  //     mdeaths5 = force? mdeaths4;
  //     checkMissing(mdeaths5);
  //     return mdeaths5;
  //   };
  //   r8 = dyn window(p4, 1976.0);
  //   return r8;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   window1 = ldf window;
  //   p6 = prom<V +>{
  //     fdeaths4 = ld fdeaths;
  //     fdeaths5 = force? fdeaths4;
  //     checkMissing(fdeaths5);
  //     return fdeaths5;
  //   };
  //   r11 = dyn window1(p6, 1974.0, 1978.0);
  //   return r11;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r13 = dyn ts_intersect(p5, p7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts_intersect, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 17 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // ts_union1 = ldf `ts.union`
  Rsh_Fir_reg_ts_union1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p8 = prom<V +>{
  //   BJsales = ld BJsales;
  //   BJsales1 = force? BJsales;
  //   checkMissing(BJsales1);
  //   return BJsales1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   BJsales_lead = ld `BJsales.lead`;
  //   BJsales_lead1 = force? BJsales_lead;
  //   checkMissing(BJsales_lead1);
  //   return BJsales_lead1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r16 = dyn ts_union1[, lead](p8, p9)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts_union1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 23 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // st sales1 = r16
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // ts_intersect1 = ldf `ts.intersect`
  Rsh_Fir_reg_ts_intersect1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p10 = prom<V +>{
  //   sales1 = ld sales1;
  //   sales2 = force? sales1;
  //   checkMissing(sales2);
  //   return sales2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   lag = ldf lag;
  //   p11 = prom<V +>{
  //     BJsales_lead2 = ld `BJsales.lead`;
  //     BJsales_lead3 = force? BJsales_lead2;
  //     checkMissing(BJsales_lead3);
  //     return BJsales_lead3;
  //   };
  //   p12 = prom<V +>{
  //     return -3.0;
  //   };
  //   r20 = dyn lag(p11, p12);
  //   return r20;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r22 = dyn ts_intersect1[, lead3](p10, p13)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts_intersect1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 30 [r22]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mdeaths;
  SEXP Rsh_Fir_reg_mdeaths1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mdeaths = ld mdeaths
  Rsh_Fir_reg_mdeaths = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mdeaths1 = force? mdeaths
  Rsh_Fir_reg_mdeaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdeaths);
  // checkMissing(mdeaths1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_mdeaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return mdeaths1
  return Rsh_Fir_reg_mdeaths1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fdeaths;
  SEXP Rsh_Fir_reg_fdeaths1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fdeaths = ld fdeaths
  Rsh_Fir_reg_fdeaths = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdeaths1 = force? fdeaths
  Rsh_Fir_reg_fdeaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdeaths);
  // checkMissing(fdeaths1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_fdeaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return fdeaths1
  return Rsh_Fir_reg_fdeaths1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mdeaths2_;
  SEXP Rsh_Fir_reg_mdeaths3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mdeaths2 = ld mdeaths
  Rsh_Fir_reg_mdeaths2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mdeaths3 = force? mdeaths2
  Rsh_Fir_reg_mdeaths3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdeaths2_);
  // checkMissing(mdeaths3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_mdeaths3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return mdeaths3
  return Rsh_Fir_reg_mdeaths3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fdeaths2_;
  SEXP Rsh_Fir_reg_fdeaths3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fdeaths2 = ld fdeaths
  Rsh_Fir_reg_fdeaths2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdeaths3 = force? fdeaths2
  Rsh_Fir_reg_fdeaths3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdeaths2_);
  // checkMissing(fdeaths3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_fdeaths3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return fdeaths3
  return Rsh_Fir_reg_fdeaths3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_window;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // window = ldf window
  Rsh_Fir_reg_window = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // p4 = prom<V +>{
  //   mdeaths4 = ld mdeaths;
  //   mdeaths5 = force? mdeaths4;
  //   checkMissing(mdeaths5);
  //   return mdeaths5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r8 = dyn window(p4, 1976.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_window, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mdeaths4_;
  SEXP Rsh_Fir_reg_mdeaths5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mdeaths4 = ld mdeaths
  Rsh_Fir_reg_mdeaths4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // mdeaths5 = force? mdeaths4
  Rsh_Fir_reg_mdeaths5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdeaths4_);
  // checkMissing(mdeaths5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_mdeaths5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return mdeaths5
  return Rsh_Fir_reg_mdeaths5_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_window1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // window1 = ldf window
  Rsh_Fir_reg_window1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // p6 = prom<V +>{
  //   fdeaths4 = ld fdeaths;
  //   fdeaths5 = force? fdeaths4;
  //   checkMissing(fdeaths5);
  //   return fdeaths5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r11 = dyn window1(p6, 1974.0, 1978.0)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_window1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fdeaths4_;
  SEXP Rsh_Fir_reg_fdeaths5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fdeaths4 = ld fdeaths
  Rsh_Fir_reg_fdeaths4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fdeaths5 = force? fdeaths4
  Rsh_Fir_reg_fdeaths5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdeaths4_);
  // checkMissing(fdeaths5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_fdeaths5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return fdeaths5
  return Rsh_Fir_reg_fdeaths5_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_BJsales;
  SEXP Rsh_Fir_reg_BJsales1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // BJsales = ld BJsales
  Rsh_Fir_reg_BJsales = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // BJsales1 = force? BJsales
  Rsh_Fir_reg_BJsales1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_BJsales);
  // checkMissing(BJsales1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_BJsales1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return BJsales1
  return Rsh_Fir_reg_BJsales1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_BJsales_lead;
  SEXP Rsh_Fir_reg_BJsales_lead1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // BJsales_lead = ld `BJsales.lead`
  Rsh_Fir_reg_BJsales_lead = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // BJsales_lead1 = force? BJsales_lead
  Rsh_Fir_reg_BJsales_lead1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_BJsales_lead);
  // checkMissing(BJsales_lead1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_BJsales_lead1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return BJsales_lead1
  return Rsh_Fir_reg_BJsales_lead1_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sales1_;
  SEXP Rsh_Fir_reg_sales2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sales1 = ld sales1
  Rsh_Fir_reg_sales1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // sales2 = force? sales1
  Rsh_Fir_reg_sales2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sales1_);
  // checkMissing(sales2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sales2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return sales2
  return Rsh_Fir_reg_sales2_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lag;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lag = ldf lag
  Rsh_Fir_reg_lag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p11 = prom<V +>{
  //   BJsales_lead2 = ld `BJsales.lead`;
  //   BJsales_lead3 = force? BJsales_lead2;
  //   checkMissing(BJsales_lead3);
  //   return BJsales_lead3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   return -3.0;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r20 = dyn lag(p11, p12)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lag, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_BJsales_lead2_;
  SEXP Rsh_Fir_reg_BJsales_lead3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // BJsales_lead2 = ld `BJsales.lead`
  Rsh_Fir_reg_BJsales_lead2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // BJsales_lead3 = force? BJsales_lead2
  Rsh_Fir_reg_BJsales_lead3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_BJsales_lead2_);
  // checkMissing(BJsales_lead3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_BJsales_lead3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return BJsales_lead3
  return Rsh_Fir_reg_BJsales_lead3_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return -3.0
  return Rsh_const(CCP, 14);
}
SEXP Rsh_Fir_user_function_inner3464747981_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3464747981 dynamic dispatch ([`...`, dframe])

  return Rsh_Fir_user_version_inner3464747981_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3464747981_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3464747981 version 0 (dots, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3464747981/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_dframe;
  SEXP Rsh_Fir_reg_dframe_isMissing;
  SEXP Rsh_Fir_reg_dframe_orDefault;
  SEXP Rsh_Fir_reg__cbind_ts;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r7_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_dframe = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // dframe_isMissing = missing.0(dframe)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dframe;
  Rsh_Fir_reg_dframe_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args18);
  // if dframe_isMissing then L0(FALSE) else L0(dframe)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dframe_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_dframe_orDefault = Rsh_const(CCP, 17);
    goto L0_;
  } else {
  // L0(dframe)
    Rsh_Fir_reg_dframe_orDefault = Rsh_Fir_reg_dframe;
    goto L0_;
  }

L0_:;
  // st dframe = dframe_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dframe_orDefault, RHO);
  (void)(Rsh_Fir_reg_dframe_orDefault);
  // _cbind_ts = ldf `.cbind.ts`
  Rsh_Fir_reg__cbind_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   list = ldf list;
  //   ddd1 = ld `...`;
  //   r2 = dyn list[`...`](ddd1);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym ...>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464747981_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   _makeNamesTs = ldf `.makeNamesTs`;
  //   ddd2 = ld `...`;
  //   r4 = dyn _makeNamesTs[`...`](ddd2);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464747981_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   dframe1 = ld dframe;
  //   dframe2 = force? dframe1;
  //   checkMissing(dframe2);
  //   return dframe2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3464747981_2, 0, NULL, CCP, RHO);
  // r7 = dyn _cbind_ts[, , dframe, union](p, p1, p2, TRUE)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names11[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cbind_ts, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 8 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner3464747981_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464747981/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
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
  return Rsh_Fir_reg_r1_;

L1_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // r2 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3464747981_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__makeNamesTs;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464747981/0: expected 0, got %d", NCAPTURES);

  // _makeNamesTs = ldf `.makeNamesTs`
  Rsh_Fir_reg__makeNamesTs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // r4 = dyn _makeNamesTs[`...`](ddd2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__makeNamesTs, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3464747981_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dframe1_;
  SEXP Rsh_Fir_reg_dframe2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3464747981/0: expected 0, got %d", NCAPTURES);

  // dframe1 = ld dframe
  Rsh_Fir_reg_dframe1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // dframe2 = force? dframe1
  Rsh_Fir_reg_dframe2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dframe1_);
  // checkMissing(dframe2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dframe2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return dframe2
  return Rsh_Fir_reg_dframe2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
