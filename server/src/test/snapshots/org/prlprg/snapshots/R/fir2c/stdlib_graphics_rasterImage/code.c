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
SEXP Rsh_Fir_user_function_inner1718327756_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1718327756_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1718327756_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1718327756_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_par;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_as_raster;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_rasterImage;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_rasterImage1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_rasterImage2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_rasterImage3_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_par1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r34_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1718327756
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1718327756_, RHO, CCP);
  // st rasterImage = r
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
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
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
  // r1 = dyn base(<sym grDevices>)
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
  //   grDevices = ld grDevices;
  //   grDevices1 = force? grDevices;
  //   checkMissing(grDevices1);
  //   return grDevices1;
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
  // r5 = dyn par[bg]("thistle")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
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
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // st op = r5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   c = ldf c in base;
  //   r8 = dyn c(100.0, 250.0);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(100.0, 250.0);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   c1 = ldf c in base;
  //   r12 = dyn c1(300.0, 450.0);
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base2(300.0, 450.0);
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r14 = dyn plot[, , type, xlab, ylab](p1, p2, "n", "", "")
  SEXP Rsh_Fir_array_args11[5];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[4] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[5];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_arg_names7[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names7[4] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 5, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 24 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // as_raster = ldf `as.raster`
  Rsh_Fir_reg_as_raster = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p4 = prom<V +>{
  //   matrix = ldf matrix;
  //   p3 = prom<V +>{
  //     return <int 0, 1>;
  //   };
  //   r16 = dyn matrix[, ncol, nrow](p3, 5.0, 3.0);
  //   return r16;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r18 = dyn as_raster(p4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raster, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 28 [r18]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // st image = r18
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // rasterImage = ldf rasterImage
  Rsh_Fir_reg_rasterImage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p5 = prom<V +>{
  //   image = ld image;
  //   image1 = force? image;
  //   checkMissing(image1);
  //   return image1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r20 = dyn rasterImage[, , , , , interpolate](p5, 100.0, 300.0, 150.0, 350.0, FALSE)
  SEXP Rsh_Fir_array_args15[6];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[6];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rasterImage, 6, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 39 [r20]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // rasterImage1 = ldf rasterImage
  Rsh_Fir_reg_rasterImage1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p6 = prom<V +>{
  //   image2 = ld image;
  //   image3 = force? image2;
  //   checkMissing(image3);
  //   return image3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r22 = dyn rasterImage1(p6, 100.0, 400.0, 150.0, 450.0)
  SEXP Rsh_Fir_array_args17[5];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args17[4] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names11[5];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rasterImage1_, 5, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 47 [r22]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // rasterImage2 = ldf rasterImage
  Rsh_Fir_reg_rasterImage2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p7 = prom<V +>{
  //   image4 = ld image;
  //   image5 = force? image4;
  //   checkMissing(image5);
  //   return image5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   xinch = ldf xinch;
  //   r24 = dyn xinch(0.5);
  //   r25 = `+`(200.0, r24);
  //   return r25;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   yinch = ldf yinch;
  //   r27 = dyn yinch(0.3);
  //   r28 = `+`(300.0, r27);
  //   return r28;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r30 = dyn rasterImage2[, , , , , interpolate](p7, 200.0, 300.0, p8, p9, FALSE)
  SEXP Rsh_Fir_array_args23[6];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args23[3] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args23[4] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args23[5] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[6];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rasterImage2_, 6, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 57 [r30]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // rasterImage3 = ldf rasterImage
  Rsh_Fir_reg_rasterImage3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p10 = prom<V +>{
  //   image6 = ld image;
  //   image7 = force? image6;
  //   checkMissing(image7);
  //   return image7;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r32 = dyn rasterImage3[, , , , , angle, interpolate](p10, 200.0, 400.0, 250.0, 450.0, 15.0, FALSE)
  SEXP Rsh_Fir_array_args25[7];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args25[4] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args25[5] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args25[6] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names15[7];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = Rsh_const(CCP, 37);
  Rsh_Fir_array_arg_names15[6] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rasterImage3_, 7, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 69 [r32]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p11 = prom<V +>{
  //   op = ld op;
  //   op1 = force? op;
  //   checkMissing(op1);
  //   return op1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r34 = dyn par1(p11)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 73 [r34]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_grDevices;
  SEXP Rsh_Fir_reg_grDevices1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // grDevices = ld grDevices
  Rsh_Fir_reg_grDevices = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // grDevices1 = force? grDevices
  Rsh_Fir_reg_grDevices1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grDevices);
  // checkMissing(grDevices1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_grDevices1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return grDevices1
  return Rsh_Fir_reg_grDevices1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r8 = dyn c(100.0, 250.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1(100.0, 250.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r12 = dyn c1(300.0, 450.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base2(300.0, 450.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p3 = prom<V +>{
  //   return <int 0, 1>;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r16 = dyn matrix[, ncol, nrow](p3, 5.0, 3.0)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 0, 1>
  return Rsh_const(CCP, 20);
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_image;
  SEXP Rsh_Fir_reg_image1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // image = ld image
  Rsh_Fir_reg_image = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // image1 = force? image
  Rsh_Fir_reg_image1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_image);
  // checkMissing(image1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_image1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return image1
  return Rsh_Fir_reg_image1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_image2_;
  SEXP Rsh_Fir_reg_image3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // image2 = ld image
  Rsh_Fir_reg_image2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // image3 = force? image2
  Rsh_Fir_reg_image3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_image2_);
  // checkMissing(image3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_image3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return image3
  return Rsh_Fir_reg_image3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_image4_;
  SEXP Rsh_Fir_reg_image5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // image4 = ld image
  Rsh_Fir_reg_image4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // image5 = force? image4
  Rsh_Fir_reg_image5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_image4_);
  // checkMissing(image5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_image5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return image5
  return Rsh_Fir_reg_image5_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xinch;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xinch = ldf xinch
  Rsh_Fir_reg_xinch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // r24 = dyn xinch(0.5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xinch, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names12, CCP, RHO);
  // r25 = `+`(200.0, r24)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args20);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_yinch;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // yinch = ldf yinch
  Rsh_Fir_reg_yinch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // r27 = dyn yinch(0.3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_yinch, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names13, CCP, RHO);
  // r28 = `+`(300.0, r27)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args22);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_image6_;
  SEXP Rsh_Fir_reg_image7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // image6 = ld image
  Rsh_Fir_reg_image6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // image7 = force? image6
  Rsh_Fir_reg_image7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_image6_);
  // checkMissing(image7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_image7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return image7
  return Rsh_Fir_reg_image7_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_op;
  SEXP Rsh_Fir_reg_op1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // op = ld op
  Rsh_Fir_reg_op = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // op1 = force? op
  Rsh_Fir_reg_op1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op);
  // checkMissing(op1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_op1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return op1
  return Rsh_Fir_reg_op1_;
}
SEXP Rsh_Fir_user_function_inner1718327756_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1718327756 dynamic dispatch ([image, xleft, ybottom, xright, ytop, angle, interpolate, `...`])

  return Rsh_Fir_user_version_inner1718327756_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1718327756_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1718327756 version 0 (*, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner1718327756/0: expected 8, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_image1;
  SEXP Rsh_Fir_reg_xleft;
  SEXP Rsh_Fir_reg_ybottom;
  SEXP Rsh_Fir_reg_xright;
  SEXP Rsh_Fir_reg_ytop;
  SEXP Rsh_Fir_reg_angle;
  SEXP Rsh_Fir_reg_interpolate;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_angle_isMissing;
  SEXP Rsh_Fir_reg_angle_orDefault;
  SEXP Rsh_Fir_reg_interpolate_isMissing;
  SEXP Rsh_Fir_reg_interpolate_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg__External_graphics;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r36_;

  // Bind parameters
  Rsh_Fir_reg_image1 = PARAMS[0];
  Rsh_Fir_reg_xleft = PARAMS[1];
  Rsh_Fir_reg_ybottom = PARAMS[2];
  Rsh_Fir_reg_xright = PARAMS[3];
  Rsh_Fir_reg_ytop = PARAMS[4];
  Rsh_Fir_reg_angle = PARAMS[5];
  Rsh_Fir_reg_interpolate = PARAMS[6];
  Rsh_Fir_reg_ddd = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st image = image
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_image1, RHO);
  (void)(Rsh_Fir_reg_image1);
  // st xleft = xleft
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_xleft, RHO);
  (void)(Rsh_Fir_reg_xleft);
  // st ybottom = ybottom
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_ybottom, RHO);
  (void)(Rsh_Fir_reg_ybottom);
  // st xright = xright
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_xright, RHO);
  (void)(Rsh_Fir_reg_xright);
  // st ytop = ytop
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_ytop, RHO);
  (void)(Rsh_Fir_reg_ytop);
  // angle_isMissing = missing.0(angle)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_angle;
  Rsh_Fir_reg_angle_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args28);
  // if angle_isMissing then L0(0.0) else L0(angle)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_angle_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_angle_orDefault = Rsh_const(CCP, 42);
    goto L0_;
  } else {
  // L0(angle)
    Rsh_Fir_reg_angle_orDefault = Rsh_Fir_reg_angle;
    goto L0_;
  }

L0_:;
  // st angle = angle_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_angle_orDefault, RHO);
  (void)(Rsh_Fir_reg_angle_orDefault);
  // interpolate_isMissing = missing.0(interpolate)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_interpolate;
  Rsh_Fir_reg_interpolate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args29);
  // if interpolate_isMissing then L1(TRUE) else L1(interpolate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_interpolate_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_interpolate_orDefault = Rsh_const(CCP, 43);
    goto L1_;
  } else {
  // L1(interpolate)
    Rsh_Fir_reg_interpolate_orDefault = Rsh_Fir_reg_interpolate;
    goto L1_;
  }

L1_:;
  // st interpolate = interpolate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_interpolate_orDefault, RHO);
  (void)(Rsh_Fir_reg_interpolate_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `.External.graphics`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base = ldf `.External.graphics` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // sym8 = ldf invisible
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base8 = ldf invisible in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard8 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L4_:;
  // _External_graphics = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym C_raster>, <lang if(inherits(image, "nativeRaster"), image, as.raster(image))>, <lang as.double(xleft)>, <lang as.double(ybottom)>, <lang as.double(xright)>, <lang as.double(ytop)>, <lang as.double(angle)>, <lang as.logical(interpolate)>, <sym ...>)
  SEXP Rsh_Fir_array_args32[9];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args32[4] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args32[5] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args32[6] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args32[7] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args32[8] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names17[9];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_array_arg_names17[5] = R_MissingArg;
  Rsh_Fir_array_arg_names17[6] = R_MissingArg;
  Rsh_Fir_array_arg_names17[7] = R_MissingArg;
  Rsh_Fir_array_arg_names17[8] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 9, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r35
  return Rsh_Fir_reg_r35_;

L6_:;
  // p = prom<V +>{
  //   C_raster = ld C_raster;
  //   C_raster1 = force? C_raster;
  //   checkMissing(C_raster1);
  //   return C_raster1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf inherits;
  //   base1 = ldf inherits in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r4):
  //   c = `as.logical`(r4);
  //   if c then L4() else L1();
  // L2():
  //   image1 = ld image;
  //   image2 = force? image1;
  //   checkMissing(image2);
  //   inherits = ldf inherits in base;
  //   r5 = dyn inherits(image2, "nativeRaster", FALSE);
  //   goto L0(r5);
  // L3():
  //   r3 = dyn base1(<sym image>, "nativeRaster");
  //   goto L0(r3);
  // L1():
  //   as_raster = ldf `as.raster`;
  //   p1 = prom<V +>{
  //     image5 = ld image;
  //     image6 = force? image5;
  //     checkMissing(image6);
  //     return image6;
  //   };
  //   r7 = dyn as_raster(p1);
  //   return r7;
  // L4():
  //   image3 = ld image;
  //   image4 = force? image3;
  //   checkMissing(image4);
  //   return image4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_1, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym2 = ldf `as.double`;
  //   base2 = ldf `as.double` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   xleft1 = ld xleft;
  //   xleft2 = force? xleft1;
  //   checkMissing(xleft2);
  //   as_double = ldf `as.double` in base;
  //   r11 = dyn as_double(xleft2);
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base2(<sym xleft>);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym3 = ldf `as.double`;
  //   base3 = ldf `as.double` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   ybottom1 = ld ybottom;
  //   ybottom2 = force? ybottom1;
  //   checkMissing(ybottom2);
  //   as_double1 = ldf `as.double` in base;
  //   r15 = dyn as_double1(ybottom2);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base3(<sym ybottom>);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym4 = ldf `as.double`;
  //   base4 = ldf `as.double` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   xright1 = ld xright;
  //   xright2 = force? xright1;
  //   checkMissing(xright2);
  //   as_double2 = ldf `as.double` in base;
  //   r19 = dyn as_double2(xright2);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base4(<sym xright>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sym5 = ldf `as.double`;
  //   base5 = ldf `as.double` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   ytop1 = ld ytop;
  //   ytop2 = force? ytop1;
  //   checkMissing(ytop2);
  //   as_double3 = ldf `as.double` in base;
  //   r23 = dyn as_double3(ytop2);
  //   goto L0(r23);
  // L2():
  //   r21 = dyn base5(<sym ytop>);
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   sym6 = ldf `as.double`;
  //   base6 = ldf `as.double` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r26):
  //   return r26;
  // L1():
  //   angle1 = ld angle;
  //   angle2 = force? angle1;
  //   checkMissing(angle2);
  //   as_double4 = ldf `as.double` in base;
  //   r27 = dyn as_double4(angle2);
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base6(<sym angle>);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym7 = ldf `as.logical`;
  //   base7 = ldf `as.logical` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r30):
  //   return r30;
  // L1():
  //   interpolate1 = ld interpolate;
  //   interpolate2 = force? interpolate1;
  //   checkMissing(interpolate2);
  //   as_logical = ldf `as.logical` in base;
  //   r31 = dyn as_logical(interpolate2);
  //   goto L0(r31);
  // L2():
  //   r29 = dyn base7(<sym interpolate>);
  //   goto L0(r29);
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_8, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // r33 = dyn _External_graphics[, , , , , , , , `...`](p, p2, p3, p4, p5, p6, p7, p8, ddd1)
  SEXP Rsh_Fir_array_args66[9];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args66[3] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args66[4] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args66[5] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args66[6] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args66[7] = Rsh_Fir_reg_p8_1;
  Rsh_Fir_array_args66[8] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names33[9];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_array_arg_names33[4] = R_MissingArg;
  Rsh_Fir_array_arg_names33[5] = R_MissingArg;
  Rsh_Fir_array_arg_names33[6] = R_MissingArg;
  Rsh_Fir_array_arg_names33[7] = R_MissingArg;
  Rsh_Fir_array_arg_names33[8] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics, 9, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L8_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r36 = dyn invisible()
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r34 = dyn base8()
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 0, NULL, NULL, CCP, RHO);
  // goto L3(r34)
  // L3(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_1;
  goto L3_;

D1_:;
  // deopt 12 [r33]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 16 [r36]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L2()
  // L2()
  goto L2_;

L10_:;
  // goto L3(r36)
  // L3(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner1718327756_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_C_raster;
  SEXP Rsh_Fir_reg_C_raster1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // C_raster = ld C_raster
  Rsh_Fir_reg_C_raster = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // C_raster1 = force? C_raster
  Rsh_Fir_reg_C_raster1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_raster);
  // checkMissing(C_raster1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_C_raster1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return C_raster1
  return Rsh_Fir_reg_C_raster1_;
}
SEXP Rsh_Fir_user_promise_inner1718327756_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_image1_1;
  SEXP Rsh_Fir_reg_image2_1;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_image3_1;
  SEXP Rsh_Fir_reg_image4_1;
  SEXP Rsh_Fir_reg_as_raster1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r7_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L2_:;
  // image1 = ld image
  Rsh_Fir_reg_image1_1 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // image2 = force? image1
  Rsh_Fir_reg_image2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_image1_1);
  // checkMissing(image2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_image2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r5 = dyn inherits(image2, "nativeRaster", FALSE)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_image2_1;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L3_:;
  // r3 = dyn base1(<sym image>, "nativeRaster")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L0_;

L1_:;
  // as_raster = ldf `as.raster`
  Rsh_Fir_reg_as_raster1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p1 = prom<V +>{
  //   image5 = ld image;
  //   image6 = force? image5;
  //   checkMissing(image6);
  //   return image6;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1718327756_2, 0, NULL, CCP, RHO);
  // r7 = dyn as_raster(p1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raster1, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names20, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_1;

L4_:;
  // image3 = ld image
  Rsh_Fir_reg_image3_1 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // image4 = force? image3
  Rsh_Fir_reg_image4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_image3_1);
  // checkMissing(image4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_image4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return image4
  return Rsh_Fir_reg_image4_1;
}
SEXP Rsh_Fir_user_promise_inner1718327756_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_image5_1;
  SEXP Rsh_Fir_reg_image6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // image5 = ld image
  Rsh_Fir_reg_image5_1 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // image6 = force? image5
  Rsh_Fir_reg_image6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_image5_1);
  // checkMissing(image6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_image6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return image6
  return Rsh_Fir_reg_image6_1;
}
SEXP Rsh_Fir_user_promise_inner1718327756_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_xleft1_;
  SEXP Rsh_Fir_reg_xleft2_;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r11_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf `as.double`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base2 = ldf `as.double` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_1;

L1_:;
  // xleft1 = ld xleft
  Rsh_Fir_reg_xleft1_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // xleft2 = force? xleft1
  Rsh_Fir_reg_xleft2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xleft1_);
  // checkMissing(xleft2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_xleft2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r11 = dyn as_double(xleft2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_xleft2_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_1;
  goto L0_;

L2_:;
  // r9 = dyn base2(<sym xleft>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1718327756_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_ybottom1_;
  SEXP Rsh_Fir_reg_ybottom2_;
  SEXP Rsh_Fir_reg_as_double1_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf `as.double`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base3 = ldf `as.double` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_1;

L1_:;
  // ybottom1 = ld ybottom
  Rsh_Fir_reg_ybottom1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // ybottom2 = force? ybottom1
  Rsh_Fir_reg_ybottom2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ybottom1_);
  // checkMissing(ybottom2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ybottom2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r15 = dyn as_double1(ybottom2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ybottom2_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r15_;
  goto L0_;

L2_:;
  // r13 = dyn base3(<sym ybottom>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1718327756_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_xright1_;
  SEXP Rsh_Fir_reg_xright2_;
  SEXP Rsh_Fir_reg_as_double2_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf `as.double`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base4 = ldf `as.double` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_1;

L1_:;
  // xright1 = ld xright
  Rsh_Fir_reg_xright1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // xright2 = force? xright1
  Rsh_Fir_reg_xright2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xright1_);
  // checkMissing(xright2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_xright2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // as_double2 = ldf `as.double` in base
  Rsh_Fir_reg_as_double2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r19 = dyn as_double2(xright2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_xright2_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double2_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base4(<sym xright>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1718327756_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_ytop1_;
  SEXP Rsh_Fir_reg_ytop2_;
  SEXP Rsh_Fir_reg_as_double3_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf `as.double`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base5 = ldf `as.double` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_1;

L1_:;
  // ytop1 = ld ytop
  Rsh_Fir_reg_ytop1_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // ytop2 = force? ytop1
  Rsh_Fir_reg_ytop2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ytop1_);
  // checkMissing(ytop2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ytop2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // as_double3 = ldf `as.double` in base
  Rsh_Fir_reg_as_double3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r23 = dyn as_double3(ytop2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ytop2_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double3_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r21 = dyn base5(<sym ytop>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1718327756_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_angle1_;
  SEXP Rsh_Fir_reg_angle2_;
  SEXP Rsh_Fir_reg_as_double4_;
  SEXP Rsh_Fir_reg_r27_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf `as.double`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base6 = ldf `as.double` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
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
  // angle1 = ld angle
  Rsh_Fir_reg_angle1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // angle2 = force? angle1
  Rsh_Fir_reg_angle2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_angle1_);
  // checkMissing(angle2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_angle2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // as_double4 = ldf `as.double` in base
  Rsh_Fir_reg_as_double4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r27 = dyn as_double4(angle2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_angle2_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double4_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_1;
  goto L0_;

L2_:;
  // r25 = dyn base6(<sym angle>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1718327756_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_interpolate1_;
  SEXP Rsh_Fir_reg_interpolate2_;
  SEXP Rsh_Fir_reg_as_logical;
  SEXP Rsh_Fir_reg_r31_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1718327756/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf `as.logical`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base7 = ldf `as.logical` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_1;

L1_:;
  // interpolate1 = ld interpolate
  Rsh_Fir_reg_interpolate1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // interpolate2 = force? interpolate1
  Rsh_Fir_reg_interpolate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interpolate1_);
  // checkMissing(interpolate2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_interpolate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // as_logical = ldf `as.logical` in base
  Rsh_Fir_reg_as_logical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r31 = dyn as_logical(interpolate2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_interpolate2_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_logical, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r31_;
  goto L0_;

L2_:;
  // r29 = dyn base7(<sym interpolate>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r29_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
