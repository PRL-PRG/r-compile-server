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
SEXP Rsh_Fir_user_function_inner1405831253_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1405831253_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1405831253_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1405831253_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1405831253_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1405831253_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1405831253_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3480024042_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3480024042_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3480024042_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3480024042_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_set_seed;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_rnorm;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_hclust;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_as_dendrogram;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_reorder;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_par;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_plot1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_plot2_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_par1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r29_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1405831253
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1405831253_, RHO, CCP);
  // st `reorder.dendrogram` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // set_seed = ldf `set.seed`
  Rsh_Fir_reg_set_seed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // r5 = dyn set_seed(123.0)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_set_seed, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r6 = dyn rnorm(10.0)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // st x = r6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // hclust = ldf hclust
  Rsh_Fir_reg_hclust = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = prom<V +>{
  //   dist = ldf dist;
  //   p1 = prom<V +>{
  //     x = ld x;
  //     x1 = force? x;
  //     checkMissing(x1);
  //     return x1;
  //   };
  //   r8 = dyn dist(p1);
  //   return r8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn hclust(p2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_hclust, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 20 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // st hc = r10
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // as_dendrogram = ldf `as.dendrogram`
  Rsh_Fir_reg_as_dendrogram = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p3 = prom<V +>{
  //   hc = ld hc;
  //   hc1 = force? hc;
  //   checkMissing(hc1);
  //   return hc1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r12 = dyn as_dendrogram(p3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_dendrogram, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // st dd = r12
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // reorder = ldf reorder
  Rsh_Fir_reg_reorder = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p4 = prom<V +>{
  //   dd = ld dd;
  //   dd1 = force? dd;
  //   checkMissing(dd1);
  //   return dd1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r15 = dyn reorder(p4, p5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reorder, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // st `dd.reorder` = r15
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p6 = prom<V +>{
  //   dd2 = ld dd;
  //   dd3 = force? dd2;
  //   checkMissing(dd3);
  //   return dd3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r17 = dyn plot[, main](p6, "random dendrogram 'dd'")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 38 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p7 = prom<V +>{
  //   return <int 1, 2>;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r19 = dyn par[mfcol](p7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // st op = r19
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // plot1 = ldf plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p8 = prom<V +>{
  //   dd_reorder = ld `dd.reorder`;
  //   dd_reorder1 = force? dd_reorder;
  //   checkMissing(dd_reorder1);
  //   return dd_reorder1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r21 = dyn plot1[, main](p8, "reorder(dd, 10:1)")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 50 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // plot2 = ldf plot
  Rsh_Fir_reg_plot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p12 = prom<V +>{
  //   reorder1 = ldf reorder;
  //   p9 = prom<V +>{
  //     dd4 = ld dd;
  //     dd5 = force? dd4;
  //     checkMissing(dd5);
  //     return dd5;
  //   };
  //   p10 = prom<V +>{
  //     return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
  //   };
  //   p11 = prom<V +>{
  //     mean = ld mean;
  //     mean1 = force? mean;
  //     checkMissing(mean1);
  //     return mean1;
  //   };
  //   r25 = dyn reorder1[, , `agglo.FUN`](p9, p10, p11);
  //   return r25;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r27 = dyn plot2[, main](p12, "reorder(dd, 10:1, mean)")
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot2_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 56 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L22_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L23() else D20()
  // L23()
  goto L23_;

D20_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p13 = prom<V +>{
  //   op = ld op;
  //   op1 = force? op;
  //   checkMissing(op1);
  //   return op1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r29 = dyn par1(p13)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L24() else D21()
  // L24()
  goto L24_;

D21_:;
  // deopt 60 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dist;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dist = ldf dist
  Rsh_Fir_reg_dist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // p1 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn dist(p1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dist, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_hc;
  SEXP Rsh_Fir_reg_hc1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // hc = ld hc
  Rsh_Fir_reg_hc = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // hc1 = force? hc
  Rsh_Fir_reg_hc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hc);
  // checkMissing(hc1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_hc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return hc1
  return Rsh_Fir_reg_hc1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dd;
  SEXP Rsh_Fir_reg_dd1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dd = ld dd
  Rsh_Fir_reg_dd = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // dd1 = force? dd
  Rsh_Fir_reg_dd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd);
  // checkMissing(dd1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return dd1
  return Rsh_Fir_reg_dd1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>
  return Rsh_const(CCP, 14);
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dd2_;
  SEXP Rsh_Fir_reg_dd3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dd2 = ld dd
  Rsh_Fir_reg_dd2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // dd3 = force? dd2
  Rsh_Fir_reg_dd3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd2_);
  // checkMissing(dd3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dd3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return dd3
  return Rsh_Fir_reg_dd3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2>
  return Rsh_const(CCP, 20);
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dd_reorder;
  SEXP Rsh_Fir_reg_dd_reorder1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dd_reorder = ld `dd.reorder`
  Rsh_Fir_reg_dd_reorder = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // dd_reorder1 = force? dd_reorder
  Rsh_Fir_reg_dd_reorder1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd_reorder);
  // checkMissing(dd_reorder1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dd_reorder1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return dd_reorder1
  return Rsh_Fir_reg_dd_reorder1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_reorder1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // reorder1 = ldf reorder
  Rsh_Fir_reg_reorder1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p9 = prom<V +>{
  //   dd4 = ld dd;
  //   dd5 = force? dd4;
  //   checkMissing(dd5);
  //   return dd5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   mean = ld mean;
  //   mean1 = force? mean;
  //   checkMissing(mean1);
  //   return mean1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r25 = dyn reorder1[, , `agglo.FUN`](p9, p10, p11)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reorder1_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dd4_;
  SEXP Rsh_Fir_reg_dd5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dd4 = ld dd
  Rsh_Fir_reg_dd4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // dd5 = force? dd4
  Rsh_Fir_reg_dd5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd4_);
  // checkMissing(dd5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dd5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return dd5
  return Rsh_Fir_reg_dd5_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>
  return Rsh_const(CCP, 14);
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mean;
  SEXP Rsh_Fir_reg_mean1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mean = ld mean
  Rsh_Fir_reg_mean = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // mean1 = force? mean
  Rsh_Fir_reg_mean1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mean);
  // checkMissing(mean1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_mean1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return mean1
  return Rsh_Fir_reg_mean1_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_op;
  SEXP Rsh_Fir_reg_op1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // op = ld op
  Rsh_Fir_reg_op = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // op1 = force? op
  Rsh_Fir_reg_op1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op);
  // checkMissing(op1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_op1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return op1
  return Rsh_Fir_reg_op1_;
}
SEXP Rsh_Fir_user_function_inner1405831253_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1405831253 dynamic dispatch ([x, wts, `agglo.FUN`, `...`])

  return Rsh_Fir_user_version_inner1405831253_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1405831253_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1405831253 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1405831253/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_wts;
  SEXP Rsh_Fir_reg_agglo_FUN;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_agglo_FUN_isMissing;
  SEXP Rsh_Fir_reg_agglo_FUN_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_match_fun;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_midcache_dendrogram;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r14_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_wts = PARAMS[1];
  Rsh_Fir_reg_agglo_FUN = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st wts = wts
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_wts, RHO);
  (void)(Rsh_Fir_reg_wts);
  // agglo_FUN_isMissing = missing.0(agglo_FUN)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_agglo_FUN;
  Rsh_Fir_reg_agglo_FUN_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if agglo_FUN_isMissing then L0() else L1(agglo_FUN)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_agglo_FUN_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(agglo_FUN)
    Rsh_Fir_reg_agglo_FUN_orDefault = Rsh_Fir_reg_agglo_FUN;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sum = ld sum;
  //   sum1 = force? sum;
  //   checkMissing(sum1);
  //   return sum1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1405831253_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_agglo_FUN_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st `agglo.FUN` = agglo_FUN_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_agglo_FUN_orDefault, RHO);
  (void)(Rsh_Fir_reg_agglo_FUN_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf inherits
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L2_:;
  // r4 = `!`(r2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args27);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c then L9() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L3()
    goto L3_;
  }

L5_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r1 = dyn base(<sym x>, "dendrogram")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L2(r1)
  // L2(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_1;
  goto L2_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L7_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r3 = dyn inherits(x2, "dendrogram", FALSE)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L9_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D1_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L2_;

L10_:;
  // r5 = dyn stop("'reorder.dendrogram' requires a dendrogram")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

L13_:;
  // p1 = prom<V +>{
  //   agglo_FUN1 = ld `agglo.FUN`;
  //   agglo_FUN2 = force? agglo_FUN1;
  //   checkMissing(agglo_FUN2);
  //   return agglo_FUN2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1405831253_1, 0, NULL, CCP, RHO);
  // r8 = dyn match_fun(p1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L4()
  // L4()
  goto L4_;

L14_:;
  // st `agglo.FUN` = r8
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // r9 = clos inner3480024042
  Rsh_Fir_reg_r9_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3480024042_, RHO, CCP);
  // st oV = r9
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // midcache_dendrogram = ldf `midcache.dendrogram`
  Rsh_Fir_reg_midcache_dendrogram = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p4 = prom<V +>{
  //   oV = ldf oV;
  //   p2 = prom<V +>{
  //     x3 = ld x;
  //     x4 = force? x3;
  //     checkMissing(x4);
  //     return x4;
  //   };
  //   p3 = prom<V +>{
  //     wts1 = ld wts;
  //     wts2 = force? wts1;
  //     checkMissing(wts2);
  //     return wts2;
  //   };
  //   r12 = dyn oV(p2, p3);
  //   return r12;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1405831253_2, 0, NULL, CCP, RHO);
  // r14 = dyn midcache_dendrogram(p4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_midcache_dendrogram, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

D7_:;
  // deopt 26 [r14]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner1405831253_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_sum1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1405831253/0: expected 0, got %d", NCAPTURES);

  // sum = ld sum
  Rsh_Fir_reg_sum = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // sum1 = force? sum
  Rsh_Fir_reg_sum1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sum);
  // checkMissing(sum1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sum1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return sum1
  return Rsh_Fir_reg_sum1_;
}
SEXP Rsh_Fir_user_promise_inner1405831253_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_agglo_FUN1_;
  SEXP Rsh_Fir_reg_agglo_FUN2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1405831253/0: expected 0, got %d", NCAPTURES);

  // agglo_FUN1 = ld `agglo.FUN`
  Rsh_Fir_reg_agglo_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // agglo_FUN2 = force? agglo_FUN1
  Rsh_Fir_reg_agglo_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_agglo_FUN1_);
  // checkMissing(agglo_FUN2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_agglo_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return agglo_FUN2
  return Rsh_Fir_reg_agglo_FUN2_;
}
SEXP Rsh_Fir_user_promise_inner1405831253_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_oV;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r12_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1405831253/0: expected 0, got %d", NCAPTURES);

  // oV = ldf oV
  Rsh_Fir_reg_oV = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1405831253_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   wts1 = ld wts;
  //   wts2 = force? wts1;
  //   checkMissing(wts2);
  //   return wts2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1405831253_4, 0, NULL, CCP, RHO);
  // r12 = dyn oV(p2, p3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oV, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_1;
}
SEXP Rsh_Fir_user_promise_inner1405831253_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1405831253/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1405831253_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_wts1_;
  SEXP Rsh_Fir_reg_wts2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1405831253/0: expected 0, got %d", NCAPTURES);

  // wts1 = ld wts
  Rsh_Fir_reg_wts1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // wts2 = force? wts1
  Rsh_Fir_reg_wts2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wts1_);
  // checkMissing(wts2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_wts2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return wts2
  return Rsh_Fir_reg_wts2_;
}
SEXP Rsh_Fir_user_function_inner3480024042_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3480024042 dynamic dispatch ([x, wts])

  return Rsh_Fir_user_version_inner3480024042_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3480024042_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3480024042 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3480024042/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x2;
  SEXP Rsh_Fir_reg_wts1;
  SEXP Rsh_Fir_reg_integer;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_is_leaf;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_r5_2;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_wts1_1;
  SEXP Rsh_Fir_reg_wts2_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_wts4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_wts6_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_wts8_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r8_2;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_k;
  SEXP Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_reg_r12_2;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_stop1;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_depth;
  SEXP Rsh_Fir_reg_depth1_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_k2_;
  SEXP Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_k5_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_depth2_;
  SEXP Rsh_Fir_reg_depth3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_storage_mode;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_storage_mode1_;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_storage_mode2_;
  SEXP Rsh_Fir_reg_p3_2;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_storage_mode__;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_depth4_;
  SEXP Rsh_Fir_reg_depth5_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_depth6_;
  SEXP Rsh_Fir_reg_depth7_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_depth8_;
  SEXP Rsh_Fir_reg_depth9_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_xx;
  SEXP Rsh_Fir_reg_xx1_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_xx3_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_depth10_;
  SEXP Rsh_Fir_reg_depth11_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_jj2_;
  SEXP Rsh_Fir_reg_jj3_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_jj5_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_depth12_;
  SEXP Rsh_Fir_reg_depth13_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_b;
  SEXP Rsh_Fir_reg_b1_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_b3_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_reg_kk4_;
  SEXP Rsh_Fir_reg_kk5_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_reg_kk7_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_j7_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_depth14_;
  SEXP Rsh_Fir_reg_depth15_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_depth16_;
  SEXP Rsh_Fir_reg_depth17_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_vapply;
  SEXP Rsh_Fir_reg_p4_2;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sort_list;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_agglo_FUN1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_l14_;
  SEXP Rsh_Fir_reg_attr__1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_iOrd2_;
  SEXP Rsh_Fir_reg_iOrd3_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_depth18_;
  SEXP Rsh_Fir_reg_depth19_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_x31_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_l18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_x34_;
  SEXP Rsh_Fir_reg_l20_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_dx32_;
  SEXP Rsh_Fir_reg_depth20_;
  SEXP Rsh_Fir_reg_depth21_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_reg_dx34_;
  SEXP Rsh_Fir_reg_j8_;
  SEXP Rsh_Fir_reg_j9_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_l21_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_l23_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_dx36_;
  SEXP Rsh_Fir_reg_depth22_;
  SEXP Rsh_Fir_reg_depth23_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_reg_x46_;

  // Bind parameters
  Rsh_Fir_reg_x2 = PARAMS[0];
  Rsh_Fir_reg_wts1 = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_x2, RHO);
  (void)(Rsh_Fir_reg_x2);
  // st wts = wts
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_wts1, RHO);
  (void)(Rsh_Fir_reg_wts1);
  // st depth = 0
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_const(CCP, 38), RHO);
  (void)(Rsh_const(CCP, 38));
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r = dyn integer()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 0, NULL, NULL, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

D1_:;
  // deopt 5 [r]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L32_:;
  // st jj = r
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // st kk = r
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf list
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L0_:;
  // st xx = r2
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r2_1, RHO);
  (void)(Rsh_Fir_reg_r2_1);
  // goto L14()
  // L14()
  goto L14_;

L33_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r3 = dyn list()
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

L34_:;
  // r1 = dyn base()
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 0, NULL, NULL, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_2;
  goto L0_;

D2_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L14_:;
  // is_leaf = ldf `is.leaf`
  Rsh_Fir_reg_is_leaf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L35_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r3_1;
  goto L0_;

D3_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_, 0, NULL, CCP, RHO);
  // r5 = dyn is_leaf(p)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_leaf, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

D4_:;
  // deopt 16 [r5]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L37_:;
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c then L38() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L38()
    goto L38_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard1 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L38_:;
  // wts1 = ld wts
  Rsh_Fir_reg_wts1_1 = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

D5_:;
  // deopt 17 [wts1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_wts1_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L5_:;
  // st k = r10
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L54() else D11()
  // L54()
  goto L54_;

L39_:;
  // wts2 = force? wts1
  Rsh_Fir_reg_wts2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_wts1_1);
  // checkMissing(wts2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_wts2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(wts2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_wts2_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args45);
  // if c1 then L40() else L41(wts2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L40()
    goto L40_;
  } else {
  // L41(wts2)
    Rsh_Fir_reg_wts4_ = Rsh_Fir_reg_wts2_1;
    goto L41_;
  }

L50_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L52() else D9()
  // L52()
  goto L52_;

L51_:;
  // r9 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L5_;

D9_:;
  // deopt 33 [x7]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 38 [k]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L2_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

L40_:;
  // dr = tryDispatchBuiltin.1("[", wts2)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_wts2_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L42() else L41(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L42()
    goto L42_;
  } else {
  // L41(dr)
    Rsh_Fir_reg_wts4_ = Rsh_Fir_reg_dr;
    goto L41_;
  }

L41_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

L52_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r11 = dyn length(x8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L53() else D10()
  // L53()
  goto L53_;

L54_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r12 = `==`(k1, 0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r12_2 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args52);
  // c3 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r12_2;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // if c3 then L55() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L55()
    goto L55_;
  } else {
  // L6()
    goto L6_;
  }

D6_:;
  // deopt 19 [wts4, x3]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_wts4_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 26 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(26, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 36 [r11]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // depth = ld depth
  Rsh_Fir_reg_depth = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L59() else D14()
  // L59()
  goto L59_;

L42_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L43_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args56);
  // if c2 then L44() else L45(wts4, x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L44()
    goto L44_;
  } else {
  // L45(wts4, x4)
    Rsh_Fir_reg_wts6_ = Rsh_Fir_reg_wts4_;
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_1;
    goto L45_;
  }

L47_:;
  // r8 = dyn attr__(l, NULL, "value", dx1)
  SEXP Rsh_Fir_array_args57[4];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args57[3] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_reg_r8_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

L53_:;
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_;
  goto L5_;

L55_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

D8_:;
  // deopt 29 [dx1, r8]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r8_2;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 48 [depth]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_depth;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L3_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r7 = dyn __1(wts8, dx3)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_wts8_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L2_;

L44_:;
  // dr2 = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc1 then L46() else L45(wts4, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L46()
    goto L46_;
  } else {
  // L45(wts4, dr2)
    Rsh_Fir_reg_wts6_ = Rsh_Fir_reg_wts4_;
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr2_;
    goto L45_;
  }

L45_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r6 = dyn __(x6, 1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L3(wts6, r6)
  // L3(wts6, r6)
  Rsh_Fir_reg_wts8_ = Rsh_Fir_reg_wts6_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_1;
  goto L3_;

L48_:;
  // st x = r8
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r8_2, RHO);
  (void)(Rsh_Fir_reg_r8_2);
  // goto L24()
  // L24()
  goto L24_;

L56_:;
  // r13 = dyn stop("invalid (length 0) node in dendrogram")
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L59_:;
  // depth1 = force? depth
  Rsh_Fir_reg_depth1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth);
  // checkMissing(depth1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_depth1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r15 = `+`(depth1, 1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_depth1_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args64);
  // st depth = r15
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L60() else D15()
  // L60()
  goto L60_;

D13_:;
  // deopt 45 [r13]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 53 [k2]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L24_:;
  // depth8 = ld depth
  Rsh_Fir_reg_depth8_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L89() else D29()
  // L89()
  goto L89_;

L46_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L3(wts4, dx2)
  // L3(wts4, dx2)
  Rsh_Fir_reg_wts8_ = Rsh_Fir_reg_wts4_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

L57_:;
  // goto L7()
  // L7()
  goto L7_;

L60_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // checkMissing(k3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_k3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // l1 = ld kk
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // c4 = `is.object`(l1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args67);
  // if c4 then L61() else L62(k3, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L61()
    goto L61_;
  } else {
  // L62(k3, l1)
    Rsh_Fir_reg_k5_ = Rsh_Fir_reg_k3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L62_;
  }

D29_:;
  // deopt 101 [depth8]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_depth8_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L8_:;
  // st kk = dx6
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // storage_mode = ldf `storage.mode`
  Rsh_Fir_reg_storage_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L65() else D17()
  // L65()
  goto L65_;

L61_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l1, k3)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_k3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args68);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc2 then L63() else L62(k3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L63()
    goto L63_;
  } else {
  // L62(k3, dr4)
    Rsh_Fir_reg_k5_ = Rsh_Fir_reg_k3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr4_;
    goto L62_;
  }

L62_:;
  // depth2 = ld depth
  Rsh_Fir_reg_depth2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L64() else D16()
  // L64()
  goto L64_;

L89_:;
  // depth9 = force? depth8
  Rsh_Fir_reg_depth9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth8_);
  // checkMissing(depth9)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_depth9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(depth9)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_depth9_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args71);
  // if c9 then L90() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L90()
    goto L90_;
  } else {
  // L15()
    goto L15_;
  }

D16_:;
  // deopt 56 [k5, l3, k3, depth2]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_k5_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_k3_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_depth2_;
  Rsh_Fir_deopt(56, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // depth18 = ld depth
  Rsh_Fir_reg_depth18_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L134() else D51()
  // L134()
  goto L134_;

L63_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L8(dx5)
  // L8(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L8_;

L64_:;
  // depth3 = force? depth2
  Rsh_Fir_reg_depth3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r16 = dyn ___(l3, k3, depth3)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_k3_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_depth3_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r16_;
  goto L8_;

L65_:;
  // p1 = prom<V +>{
  //   jj = ld jj;
  //   jj1 = force? jj;
  //   checkMissing(jj1);
  //   return jj1;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_1, 0, NULL, CCP, RHO);
  // r18 = dyn storage_mode(p1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L66() else D18()
  // L66()
  goto L66_;

L90_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L91() else D30()
  // L91()
  goto L91_;

D18_:;
  // deopt 63 [r18]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 103 [x23]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 178 [depth18]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_depth18_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L66_:;
  // storage_mode1 = ldf `storage.mode`
  Rsh_Fir_reg_storage_mode1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

L91_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // st b = x24
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_x24_, RHO);
  (void)(Rsh_Fir_reg_x24_);
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L92() else D31()
  // L92()
  goto L92_;

L134_:;
  // depth19 = force? depth18
  Rsh_Fir_reg_depth19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth18_);
  // checkMissing(depth19)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_depth19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r53 = `!`(depth19)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_depth19_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args78);
  // c18 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c18 then L135() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L135()
    goto L135_;
  } else {
  // L25()
    goto L25_;
  }

D19_:;
  // deopt 64 [r18]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 106 [xx]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L25_:;
  // x31 = ld x
  Rsh_Fir_reg_x31_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L138() else D52()
  // L138()
  goto L138_;

L67_:;
  // p2 = prom<V +>{
  //   kk = ld kk;
  //   kk1 = force? kk;
  //   checkMissing(kk1);
  //   return kk1;
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_2, 0, NULL, CCP, RHO);
  // r20 = dyn storage_mode1(p2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode1_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L68() else D20()
  // L68()
  goto L68_;

L92_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(xx1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_xx1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args83);
  // if c10 then L93() else L94(xx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L93()
    goto L93_;
  } else {
  // L94(xx1)
    Rsh_Fir_reg_xx3_ = Rsh_Fir_reg_xx1_;
    goto L94_;
  }

L135_:;
  // x45 = ld x
  Rsh_Fir_reg_x45_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L153() else D57()
  // L153()
  goto L153_;

D20_:;
  // deopt 66 [r18, r20]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 185 [x31]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 210 [x45]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x45_;
  Rsh_Fir_deopt(210, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L16_:;
  // st x = dx14
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx14_, RHO);
  (void)(Rsh_Fir_reg_dx14_);
  // jj2 = ld jj
  Rsh_Fir_reg_jj2_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L97() else D33()
  // L97()
  goto L97_;

L68_:;
  // r21 = `!=`(r18, r20)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args84);
  // c5 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args85);
  // if c5 then L69() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L69()
    goto L69_;
  } else {
  // L9()
    goto L9_;
  }

L93_:;
  // dr12 = tryDispatchBuiltin.1("[[", xx1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_xx1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc6 then L95() else L94(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L95()
    goto L95_;
  } else {
  // L94(dr12)
    Rsh_Fir_reg_xx3_ = Rsh_Fir_reg_dr12_;
    goto L94_;
  }

L94_:;
  // depth10 = ld depth
  Rsh_Fir_reg_depth10_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L96() else D32()
  // L96()
  goto L96_;

L138_:;
  // x32 = force? x31
  Rsh_Fir_reg_x32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x31_);
  // checkMissing(x32)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // l18 = ld xx
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // c19 = `is.object`(l18)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args89);
  // if c19 then L139() else L140(x32, l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L139()
    goto L139_;
  } else {
  // L140(x32, l18)
    Rsh_Fir_reg_x34_ = Rsh_Fir_reg_x32_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    goto L140_;
  }

L153_:;
  // x46 = force? x45
  Rsh_Fir_reg_x46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x45_);
  // checkMissing(x46)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x46
  return Rsh_Fir_reg_x46_;

D32_:;
  // deopt 108 [xx3, depth10]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_xx3_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_depth10_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 112 [jj2]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_jj2_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

L28_:;
  // st xx = dx32
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx32_, RHO);
  (void)(Rsh_Fir_reg_dx32_);
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L143() else D54()
  // L143()
  goto L143_;

L69_:;
  // storage_mode2 = ldf `storage.mode`
  Rsh_Fir_reg_storage_mode2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L70() else D21()
  // L70()
  goto L70_;

L95_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L16(dx13)
  // L16(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L16_;

L96_:;
  // depth11 = force? depth10
  Rsh_Fir_reg_depth11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth10_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r33 = dyn __3(xx3, depth11)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_xx3_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_depth11_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r33_;
  goto L16_;

L97_:;
  // jj3 = force? jj2
  Rsh_Fir_reg_jj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jj2_);
  // checkMissing(jj3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_jj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(jj3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_jj3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args94);
  // if c11 then L98() else L99(jj3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L98()
    goto L98_;
  } else {
  // L99(jj3)
    Rsh_Fir_reg_jj5_ = Rsh_Fir_reg_jj3_;
    goto L99_;
  }

L139_:;
  // dr26 = tryDispatchBuiltin.0("[[<-", l18, x32)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_x32_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args95);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc13 then L141() else L140(x32, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L141()
    goto L141_;
  } else {
  // L140(x32, dr26)
    Rsh_Fir_reg_x34_ = Rsh_Fir_reg_x32_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr26_;
    goto L140_;
  }

L140_:;
  // depth20 = ld depth
  Rsh_Fir_reg_depth20_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L142() else D53()
  // L142()
  goto L142_;

D21_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 79 [x9]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 188 [x34, l20, x32, depth20]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_depth20_;
  Rsh_Fir_deopt(188, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 192 [x37]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L17_:;
  // st j = dx16
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // b = ld b
  Rsh_Fir_reg_b = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L102() else D35()
  // L102()
  goto L102_;

L70_:;
  // p3 = prom<V +>{
  //   kk2 = ld kk;
  //   kk3 = force? kk2;
  //   checkMissing(kk3);
  //   return kk3;
  // }
  Rsh_Fir_reg_p3_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_3, 0, NULL, CCP, RHO);
  // r23 = dyn storage_mode2(p3)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p3_2;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode2_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L71() else D22()
  // L71()
  goto L71_;

L75_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // l5 = ld xx
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // c6 = `is.object`(l5)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args100);
  // if c6 then L76() else L77(x10, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L76()
    goto L76_;
  } else {
  // L77(x10, l5)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L77_;
  }

L98_:;
  // dr14 = tryDispatchBuiltin.1("[", jj3)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_jj3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args101);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc7 then L100() else L99(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L100()
    goto L100_;
  } else {
  // L99(dr14)
    Rsh_Fir_reg_jj5_ = Rsh_Fir_reg_dr14_;
    goto L99_;
  }

L99_:;
  // depth12 = ld depth
  Rsh_Fir_reg_depth12_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L101() else D34()
  // L101()
  goto L101_;

L141_:;
  // dx31 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L28(dx31)
  // L28(dx31)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx31_;
  goto L28_;

L142_:;
  // depth21 = force? depth20
  Rsh_Fir_reg_depth21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth20_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r55 = dyn ____2(l20, x32, depth21)
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args104[2] = Rsh_Fir_reg_depth21_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L28(r55)
  // L28(r55)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r55_;
  goto L28_;

L143_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(x38)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args106);
  // if c20 then L144() else L145(x38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L144()
    goto L144_;
  } else {
  // L145(x38)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_x38_;
    goto L145_;
  }

D22_:;
  // deopt 71 [r23]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 114 [jj5, depth12]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_jj5_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_depth12_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 118 [b]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_b;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L11_:;
  // st xx = dx8
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L80() else D27()
  // L80()
  goto L80_;

L29_:;
  // st x = dx34
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx34_, RHO);
  (void)(Rsh_Fir_reg_dx34_);
  // goto L14()
  // L14()
  goto L14_;

L71_:;
  // l4 = ld jj
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L72() else D23()
  // L72()
  goto L72_;

L76_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l5, x10)
  SEXP Rsh_Fir_array_args107[3];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args107[2] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args107);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc3 then L78() else L77(x10, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L78()
    goto L78_;
  } else {
  // L77(x10, dr6)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr6_;
    goto L77_;
  }

L77_:;
  // depth4 = ld depth
  Rsh_Fir_reg_depth4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L79() else D26()
  // L79()
  goto L79_;

L100_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L17(dx15)
  // L17(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L17_;

L101_:;
  // depth13 = force? depth12
  Rsh_Fir_reg_depth13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth12_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r34 = dyn __4(jj5, depth13)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_jj5_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_depth13_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L17(r34)
  // L17(r34)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r34_;
  goto L17_;

L102_:;
  // b1 = force? b
  Rsh_Fir_reg_b1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b);
  // checkMissing(b1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_b1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // l11 = ld x
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c12 = `is.object`(l11)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args112);
  // if c12 then L103() else L104(b1, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L103()
    goto L103_;
  } else {
  // L104(b1, l11)
    Rsh_Fir_reg_b3_ = Rsh_Fir_reg_b1_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L104_;
  }

L144_:;
  // dr28 = tryDispatchBuiltin.1("[[", x38)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc14 then L146() else L145(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L146()
    goto L146_;
  } else {
  // L145(dr28)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_dr28_;
    goto L145_;
  }

L145_:;
  // j8 = ld j
  Rsh_Fir_reg_j8_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L147() else D55()
  // L147()
  goto L147_;

D23_:;
  // deopt 73 [r23, l4, r23]
  SEXP Rsh_Fir_array_deopt_stack47[3];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(73, 3, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 82 [x12, l7, x10, depth4]
  SEXP Rsh_Fir_array_deopt_stack48[4];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack48[3] = Rsh_Fir_reg_depth4_;
  Rsh_Fir_deopt(82, 4, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 86 [x15]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 195 [x40, j8]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_j8_;
  Rsh_Fir_deopt(195, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L18_:;
  // st x = dx18
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx18_, RHO);
  (void)(Rsh_Fir_reg_dx18_);
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L107() else D37()
  // L107()
  goto L107_;

L72_:;
  // r24 = dyn storage_mode__(l4, NULL, r23)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L73() else D24()
  // L73()
  goto L73_;

L78_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L11(dx7)
  // L11(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L11_;

L79_:;
  // depth5 = force? depth4
  Rsh_Fir_reg_depth5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth4_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r26 = dyn ____(l7, x10, depth5)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_depth5_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r26_;
  goto L11_;

L80_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(x16)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c7 then L81() else L82(x16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L81()
    goto L81_;
  } else {
  // L82(x16)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x16_;
    goto L82_;
  }

L103_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", l11, b1)
  SEXP Rsh_Fir_array_args120[3];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args120[2] = Rsh_Fir_reg_b1_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args120);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc8 then L105() else L104(b1, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L105()
    goto L105_;
  } else {
  // L104(b1, dr16)
    Rsh_Fir_reg_b3_ = Rsh_Fir_reg_b1_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr16_;
    goto L104_;
  }

L104_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L106() else D36()
  // L106()
  goto L106_;

L146_:;
  // dx33 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L29(dx33)
  // L29(dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L29_;

L147_:;
  // j9 = force? j8
  Rsh_Fir_reg_j9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j8_);
  // checkMissing(j9)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_j9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r56 = `+`(j9, 1)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_j9_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args124);
  // l21 = ld jj
  Rsh_Fir_reg_l21_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // c21 = `is.object`(l21)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args125);
  // if c21 then L148() else L149(x40, r56, l21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L148()
    goto L148_;
  } else {
  // L149(x40, r56, l21)
    Rsh_Fir_reg_x42_ = Rsh_Fir_reg_x40_;
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    goto L149_;
  }

D24_:;
  // deopt 75 [r23, r24]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 121 [b3, l13, b1, j]
  SEXP Rsh_Fir_array_deopt_stack52[4];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_b3_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_b1_;
  Rsh_Fir_array_deopt_stack52[3] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(121, 4, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 125 [j2]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L12_:;
  // st x = dx10
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // goto L14()
  // L14()
  goto L14_;

L30_:;
  // st jj = dx36
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx36_, RHO);
  (void)(Rsh_Fir_reg_dx36_);
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r62 = dyn __8(x44, r60)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L29(r62)
  // L29(r62)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r62_;
  goto L29_;

L73_:;
  // st jj = r24
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L10()
  // L10()
  goto L10_;

L81_:;
  // dr8 = tryDispatchBuiltin.1("[[", x16)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc4 then L83() else L82(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L83()
    goto L83_;
  } else {
  // L82(dr8)
    Rsh_Fir_reg_x18_ = Rsh_Fir_reg_dr8_;
    goto L82_;
  }

L82_:;
  // l8 = ld jj
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // c8 = `is.object`(l8)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args129);
  // if c8 then L84() else L85(x18, 1, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L84()
    goto L84_;
  } else {
  // L85(x18, 1, l8)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 53);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L85_;
  }

L105_:;
  // dx17 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L18(dx17)
  // L18(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L18_;

L106_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r35 = dyn ____1(l13, b1, j1)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_b1_;
  Rsh_Fir_array_args131[2] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L18(r35)
  // L18(r35)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r35_;
  goto L18_;

L107_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // checkMissing(j3)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_j3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // kk4 = ld kk
  Rsh_Fir_reg_kk4_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L108() else D38()
  // L108()
  goto L108_;

L148_:;
  // dr30 = tryDispatchBuiltin.0("[<-", l21, r56)
  SEXP Rsh_Fir_array_args133[3];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args133[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args133);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc15 then L150() else L149(x40, r56, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L150()
    goto L150_;
  } else {
  // L149(x40, r56, dr30)
    Rsh_Fir_reg_x42_ = Rsh_Fir_reg_x40_;
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr30_;
    goto L149_;
  }

L149_:;
  // depth22 = ld depth
  Rsh_Fir_reg_depth22_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L151() else D56()
  // L151()
  goto L151_;

D38_:;
  // deopt 126 [j3, kk4]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_j3_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_kk4_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 200 [x42, r58, l23, r56, depth22]
  SEXP Rsh_Fir_array_deopt_stack55[5];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack55[3] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack55[4] = Rsh_Fir_reg_depth22_;
  Rsh_Fir_deopt(200, 5, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L13_:;
  // st jj = dx12
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx12_, RHO);
  (void)(Rsh_Fir_reg_dx12_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r32 = dyn __2(x22, r30)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L12(r32)
  // L12(r32)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r32_;
  goto L12_;

L83_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L12(dx9)
  // L12(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L12_;

L84_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l8, 1)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args137[2] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args137);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // if dc5 then L86() else L85(x18, 1, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L86()
    goto L86_;
  } else {
  // L85(x18, 1, dr10)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 53);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr10_;
    goto L85_;
  }

L85_:;
  // depth6 = ld depth
  Rsh_Fir_reg_depth6_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L87() else D28()
  // L87()
  goto L87_;

L108_:;
  // kk5 = force? kk4
  Rsh_Fir_reg_kk5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kk4_);
  // checkMissing(kk5)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_kk5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(kk5)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_kk5_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args140);
  // if c13 then L109() else L110(j3, kk5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L109()
    goto L109_;
  } else {
  // L110(j3, kk5)
    Rsh_Fir_reg_j5_ = Rsh_Fir_reg_j3_;
    Rsh_Fir_reg_kk7_ = Rsh_Fir_reg_kk5_;
    goto L110_;
  }

L150_:;
  // dx35 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // goto L30(x40, r56, dx35)
  // L30(x40, r56, dx35)
  Rsh_Fir_reg_x44_ = Rsh_Fir_reg_x40_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L30_;

L151_:;
  // depth23 = force? depth22
  Rsh_Fir_reg_depth23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth22_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r61 = dyn ___3(l23, r56, depth23)
  SEXP Rsh_Fir_array_args142[3];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args142[2] = Rsh_Fir_reg_depth23_;
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L30(x42, r58, r61)
  // L30(x42, r58, r61)
  Rsh_Fir_reg_x44_ = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r61_;
  goto L30_;

D28_:;
  // deopt 92 [x20, r28, l10, 1, depth6]
  SEXP Rsh_Fir_array_deopt_stack56[5];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack56[3] = Rsh_const(CCP, 53);
  Rsh_Fir_array_deopt_stack56[4] = Rsh_Fir_reg_depth6_;
  Rsh_Fir_deopt(92, 5, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L19_:;
  // r37 = `<`(j7, dx20)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_j7_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args143);
  // c14 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args144);
  // if c14 then L113() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L113()
    goto L113_;
  } else {
  // L20()
    goto L20_;
  }

L86_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L13(x18, 1, dx11)
  // L13(x18, 1, dx11)
  Rsh_Fir_reg_x22_ = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 53);
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L13_;

L87_:;
  // depth7 = force? depth6
  Rsh_Fir_reg_depth7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth6_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r31 = dyn ___1(l10, 1, depth7)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_depth7_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L13(x20, r28, r31)
  // L13(x20, r28, r31)
  Rsh_Fir_reg_x22_ = Rsh_Fir_reg_x20_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r31_;
  goto L13_;

L109_:;
  // dr18 = tryDispatchBuiltin.1("[", kk5)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_kk5_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc9 then L111() else L110(j3, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L111()
    goto L111_;
  } else {
  // L110(j3, dr18)
    Rsh_Fir_reg_j5_ = Rsh_Fir_reg_j3_;
    Rsh_Fir_reg_kk7_ = Rsh_Fir_reg_dr18_;
    goto L110_;
  }

L110_:;
  // depth14 = ld depth
  Rsh_Fir_reg_depth14_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L112() else D39()
  // L112()
  goto L112_;

D39_:;
  // deopt 128 [j5, kk7, depth14]
  SEXP Rsh_Fir_array_deopt_stack57[3];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_kk7_;
  Rsh_Fir_array_deopt_stack57[2] = Rsh_Fir_reg_depth14_;
  Rsh_Fir_deopt(128, 3, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L20_:;
  // depth16 = ld depth
  Rsh_Fir_reg_depth16_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L116() else D40()
  // L116()
  goto L116_;

L111_:;
  // dx19 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L19(j3, dx19)
  // L19(j3, dx19)
  Rsh_Fir_reg_j7_ = Rsh_Fir_reg_j3_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L19_;

L112_:;
  // depth15 = force? depth14
  Rsh_Fir_reg_depth15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth14_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r36 = dyn __5(kk7, depth15)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_kk7_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_depth15_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L19(j5, r36)
  // L19(j5, r36)
  Rsh_Fir_reg_j7_ = Rsh_Fir_reg_j5_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r36_;
  goto L19_;

L113_:;
  // goto L15()
  // L15()
  goto L15_;

D40_:;
  // deopt 136 [depth16]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_depth16_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L116_:;
  // depth17 = force? depth16
  Rsh_Fir_reg_depth17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth16_);
  // checkMissing(depth17)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_depth17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // r39 = `-`(depth17, 1)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_depth17_;
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args152);
  // st depth = r39
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L117() else D41()
  // L117()
  goto L117_;

D41_:;
  // deopt 142 []
  Rsh_Fir_deopt(142, 0, NULL, CCP, RHO);
  return R_NilValue;

L117_:;
  // p4 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   return x26;
  // }
  Rsh_Fir_reg_p4_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   attr = ld attr;
  //   attr1 = force? attr;
  //   checkMissing(attr1);
  //   return attr1;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   numeric = ldf numeric;
  //   r42 = dyn numeric(1);
  //   return r42;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_6, 0, NULL, CCP, RHO);
  // r44 = dyn vapply[, , , which](p4, p5, p6, "value")
  SEXP Rsh_Fir_array_args156[4];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_p4_2;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args156[2] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args156[3] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names43[4];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_array_arg_names43[3] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L118() else D42()
  // L118()
  goto L118_;

D42_:;
  // deopt 148 [r44]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L118_:;
  // st vals = r44
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sort_list = ldf `sort.list`
  Rsh_Fir_reg_sort_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L119() else D43()
  // L119()
  goto L119_;

D43_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

L119_:;
  // p7 = prom<V +>{
  //   vals = ld vals;
  //   vals1 = force? vals;
  //   checkMissing(vals1);
  //   return vals1;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_7, 0, NULL, CCP, RHO);
  // r46 = dyn sort_list(p7)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_list, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L120() else D44()
  // L120()
  goto L120_;

D44_:;
  // deopt 153 [r46]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L120_:;
  // st iOrd = r46
  Rsh_Fir_store(Rsh_const(CCP, 71), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // agglo_FUN = ldf `agglo.FUN`
  Rsh_Fir_reg_agglo_FUN1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L121() else D45()
  // L121()
  goto L121_;

D45_:;
  // deopt 156 []
  Rsh_Fir_deopt(156, 0, NULL, CCP, RHO);
  return R_NilValue;

L121_:;
  // p8 = prom<V +>{
  //   vals2 = ld vals;
  //   vals3 = force? vals2;
  //   checkMissing(vals3);
  //   c15 = `is.object`(vals3);
  //   if c15 then L1() else L2(vals3);
  // L0(dx22):
  //   return dx22;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[", vals3);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(vals5):
  //   iOrd = ld iOrd;
  //   iOrd1 = force? iOrd;
  //   __6 = ldf `[` in base;
  //   r47 = dyn __6(vals5, iOrd1);
  //   goto L0(r47);
  // L3():
  //   dx21 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx21);
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3480024042_8, 0, NULL, CCP, RHO);
  // r49 = dyn agglo_FUN(p8)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_agglo_FUN1, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L122() else D46()
  // L122()
  goto L122_;

D46_:;
  // deopt 158 [r49]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L122_:;
  // l14 = ld x
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L123() else D47()
  // L123()
  goto L123_;

D47_:;
  // deopt 160 [r49, l14, r49]
  SEXP Rsh_Fir_array_deopt_stack62[3];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack62[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(160, 3, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L123_:;
  // r50 = dyn attr__1(l14, NULL, "value", r49)
  SEXP Rsh_Fir_array_args166[4];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args166[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args166[3] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names47[4];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_array_arg_names47[3] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L124() else D48()
  // L124()
  goto L124_;

D48_:;
  // deopt 163 [r49, r50]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L124_:;
  // st x = r50
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // x27 = ld x
  Rsh_Fir_reg_x27_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L125() else D49()
  // L125()
  goto L125_;

D49_:;
  // deopt 165 [x27]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L125_:;
  // x28 = force? x27
  Rsh_Fir_reg_x28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x27_);
  // checkMissing(x28)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_x28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(x28)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args168);
  // if c16 then L126() else L127(x28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L126()
    goto L126_;
  } else {
  // L127(x28)
    Rsh_Fir_reg_x30_ = Rsh_Fir_reg_x28_;
    goto L127_;
  }

L22_:;
  // l15 = ld x
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c17 = `is.object`(l15)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args169);
  // if c17 then L130() else L131(dx24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L130()
    goto L130_;
  } else {
  // L131(dx24)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx24_;
    goto L131_;
  }

L126_:;
  // dr22 = tryDispatchBuiltin.1("[", x28)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_x28_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args170);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if dc11 then L128() else L127(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L128()
    goto L128_;
  } else {
  // L127(dr22)
    Rsh_Fir_reg_x30_ = Rsh_Fir_reg_dr22_;
    goto L127_;
  }

L127_:;
  // iOrd2 = ld iOrd
  Rsh_Fir_reg_iOrd2_ = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L129() else D50()
  // L129()
  goto L129_;

D50_:;
  // deopt 167 [x30, iOrd2]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_iOrd2_;
  Rsh_Fir_deopt(167, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L23_:;
  // st x = dx30
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx30_, RHO);
  (void)(Rsh_Fir_reg_dx30_);
  // goto L24()
  // L24()
  goto L24_;

L128_:;
  // dx23 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // goto L22(dx23)
  // L22(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L22_;

L129_:;
  // iOrd3 = force? iOrd2
  Rsh_Fir_reg_iOrd3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iOrd2_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r51 = dyn __7(x30, iOrd3)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_iOrd3_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L22(r51)
  // L22(r51)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r51_;
  goto L22_;

L130_:;
  // dr24 = tryDispatchBuiltin.0("[<-", l15, dx24)
  SEXP Rsh_Fir_array_args174[3];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args174);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc12 then L132() else L131(dx24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L132()
    goto L132_;
  } else {
  // L131(dx24)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx24_;
    goto L131_;
  }

L131_:;
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r52 = dyn ___2(l15, <missing>, dx24)
  SEXP Rsh_Fir_array_args176[3];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args176[2] = Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L23(r52)
  // L23(r52)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r52_;
  goto L23_;

L132_:;
  // dx28 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L23(dx28)
  // L23(dx28)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx28_;
  goto L23_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_2;
  SEXP Rsh_Fir_reg_x2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_2 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_2);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner3480024042_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_jj;
  SEXP Rsh_Fir_reg_jj1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // jj = ld jj
  Rsh_Fir_reg_jj = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // jj1 = force? jj
  Rsh_Fir_reg_jj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jj);
  // checkMissing(jj1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_jj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return jj1
  return Rsh_Fir_reg_jj1_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_kk;
  SEXP Rsh_Fir_reg_kk1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // kk = ld kk
  Rsh_Fir_reg_kk = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // kk1 = force? kk
  Rsh_Fir_reg_kk1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kk);
  // checkMissing(kk1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_kk1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return kk1
  return Rsh_Fir_reg_kk1_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_kk2_;
  SEXP Rsh_Fir_reg_kk3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // kk2 = ld kk
  Rsh_Fir_reg_kk2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // kk3 = force? kk2
  Rsh_Fir_reg_kk3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kk2_);
  // checkMissing(kk3)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_kk3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return kk3
  return Rsh_Fir_reg_kk3_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_x26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // return x26
  return Rsh_Fir_reg_x26_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_attr1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // attr = ld attr
  Rsh_Fir_reg_attr = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // attr1 = force? attr
  Rsh_Fir_reg_attr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_attr);
  // checkMissing(attr1)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_attr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // return attr1
  return Rsh_Fir_reg_attr1_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // r42 = dyn numeric(1)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names42, CCP, RHO);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vals;
  SEXP Rsh_Fir_reg_vals1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // vals = ld vals
  Rsh_Fir_reg_vals = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // vals1 = force? vals
  Rsh_Fir_reg_vals1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vals);
  // checkMissing(vals1)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_vals1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // return vals1
  return Rsh_Fir_reg_vals1_;
}
SEXP Rsh_Fir_user_promise_inner3480024042_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vals2_;
  SEXP Rsh_Fir_reg_vals3_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_vals5_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_iOrd;
  SEXP Rsh_Fir_reg_iOrd1_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3480024042/0: expected 0, got %d", NCAPTURES);

  // vals2 = ld vals
  Rsh_Fir_reg_vals2_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // vals3 = force? vals2
  Rsh_Fir_reg_vals3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vals2_);
  // checkMissing(vals3)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_vals3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(vals3)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_vals3_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args160);
  // if c15 then L1() else L2(vals3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(vals3)
    Rsh_Fir_reg_vals5_ = Rsh_Fir_reg_vals3_;
    goto L2_;
  }

L0_:;
  // return dx22
  return Rsh_Fir_reg_dx22_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[", vals3)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_vals3_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args161);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_vals5_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // iOrd = ld iOrd
  Rsh_Fir_reg_iOrd = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // iOrd1 = force? iOrd
  Rsh_Fir_reg_iOrd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iOrd);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r47 = dyn __6(vals5, iOrd1)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_vals5_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_iOrd1_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r47_;
  goto L0_;

L3_:;
  // dx21 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L0(dx21)
  // L0(dx21)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
