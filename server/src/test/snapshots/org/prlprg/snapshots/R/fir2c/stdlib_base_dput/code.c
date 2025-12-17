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
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main27(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4167963521_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4167963521_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4167963521_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4167963521_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4167963521_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_tempfile;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_dput;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_dget;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_dput1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_dput2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_dput3_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_dput4_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_dput5_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_dput6_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_dget1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_xx8_;
  SEXP Rsh_Fir_reg_xx9_;
  SEXP Rsh_Fir_reg_dput7_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_dget2_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_xx12_;
  SEXP Rsh_Fir_reg_xx13_;
  SEXP Rsh_Fir_reg_dput8_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_dget3_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_xx16_;
  SEXP Rsh_Fir_reg_xx17_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_setNames;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_dput9_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_dput10_;
  SEXP Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_dput11_;
  SEXP Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_reg_r59_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4167963521
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4167963521_, RHO, CCP);
  // st dput = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // tempfile = ldf tempfile
  Rsh_Fir_reg_tempfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn tempfile()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempfile, 0, NULL, NULL, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st fil = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // dput = ldf dput
  Rsh_Fir_reg_dput = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   __ = ldf `::`;
  //   r2 = dyn __("base", "mean");
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   fil = ld fil;
  //   fil1 = force? fil;
  //   checkMissing(fil1);
  //   return fil1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn dput(p, p1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // dget = ldf dget
  Rsh_Fir_reg_dget = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   fil2 = ld fil;
  //   fil3 = force? fil2;
  //   checkMissing(fil3);
  //   return fil3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r7 = dyn dget(p2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dget, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st bar = r7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p5 = prom<V +>{
  //   all_equal = ldf `all.equal`;
  //   p3 = prom<V +>{
  //     bar = ld bar;
  //     bar1 = force? bar;
  //     checkMissing(bar1);
  //     return bar1;
  //   };
  //   p4 = prom<V +>{
  //     __1 = ldf `::`;
  //     r9 = dyn __1("base", "mean");
  //     return r9;
  //   };
  //   r11 = dyn all_equal[, , `check.environment`](p3, p4, FALSE);
  //   return r11;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r13 = dyn stopifnot(p5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 20 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // r14 = clos inner2501545716
  Rsh_Fir_reg_r14_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st baz = r14
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // dput1 = ldf dput
  Rsh_Fir_reg_dput1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p6 = prom<V +>{
  //   baz = ld baz;
  //   baz1 = force? baz;
  //   checkMissing(baz1);
  //   return baz1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r16 = dyn dput1(p6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 27 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // dput2 = ldf dput
  Rsh_Fir_reg_dput2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p7 = prom<V +>{
  //   baz2 = ld baz;
  //   baz3 = force? baz2;
  //   checkMissing(baz3);
  //   return baz3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r18 = dyn dput2[, control](p7, "useSource")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput2_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 33 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // st xx = <real 3.141592653589793, 9.869604401089358, 31.006276680299816>
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_const(CCP, 15), RHO);
  (void)(Rsh_const(CCP, 15));
  // dput3 = ldf dput
  Rsh_Fir_reg_dput3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p8 = prom<V +>{
  //   xx = ld xx;
  //   xx1 = force? xx;
  //   checkMissing(xx1);
  //   return xx1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r20 = dyn dput3(p8)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput3_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 40 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // dput4 = ldf dput
  Rsh_Fir_reg_dput4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p9 = prom<V +>{
  //   xx2 = ld xx;
  //   xx3 = force? xx2;
  //   checkMissing(xx3);
  //   return xx3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r22 = dyn dput4[, control](p9, "digits17")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput4_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 46 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // dput5 = ldf dput
  Rsh_Fir_reg_dput5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p10 = prom<V +>{
  //   xx4 = ld xx;
  //   xx5 = force? xx4;
  //   checkMissing(xx5);
  //   return xx5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r24 = dyn dput5[, control](p10, "hexNumeric")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput5_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L17() else D17()
  // L17()
  goto L17_;

D17_:;
  // deopt 52 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // dput6 = ldf dput
  Rsh_Fir_reg_dput6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D18()
  // L18()
  goto L18_;

D18_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p11 = prom<V +>{
  //   xx6 = ld xx;
  //   xx7 = force? xx6;
  //   checkMissing(xx7);
  //   return xx7;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   fil4 = ld fil;
  //   fil5 = force? fil4;
  //   checkMissing(fil5);
  //   return fil5;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r27 = dyn dput6(p11, p12)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput6_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L19() else D19()
  // L19()
  goto L19_;

D19_:;
  // deopt 57 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L19_:;
  // dget1 = ldf dget
  Rsh_Fir_reg_dget1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L20() else D20()
  // L20()
  goto L20_;

D20_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p13 = prom<V +>{
  //   fil6 = ld fil;
  //   fil7 = force? fil6;
  //   checkMissing(fil7);
  //   return fil7;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r29 = dyn dget1(p13)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dget1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L21() else D21()
  // L21()
  goto L21_;

D21_:;
  // deopt 61 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L21_:;
  // xx8 = ld xx
  Rsh_Fir_reg_xx8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L22() else D22()
  // L22()
  goto L22_;

D22_:;
  // deopt 61 [r29, xx8]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_xx8_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L22_:;
  // xx9 = force? xx8
  Rsh_Fir_reg_xx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx8_);
  // checkMissing(xx9)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_xx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // `-`(r29, xx9)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_xx9_;
  (void)(Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args25));
  // dput7 = ldf dput
  Rsh_Fir_reg_dput7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L23() else D23()
  // L23()
  goto L23_;

D23_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p14 = prom<V +>{
  //   xx10 = ld xx;
  //   xx11 = force? xx10;
  //   checkMissing(xx11);
  //   return xx11;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   fil8 = ld fil;
  //   fil9 = force? fil8;
  //   checkMissing(fil9);
  //   return fil9;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r33 = dyn dput7[, , control](p14, p15, "digits17")
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput7_, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L24() else D24()
  // L24()
  goto L24_;

D24_:;
  // deopt 70 [r33]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L24_:;
  // dget2 = ldf dget
  Rsh_Fir_reg_dget2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L25() else D25()
  // L25()
  goto L25_;

D25_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p16 = prom<V +>{
  //   fil10 = ld fil;
  //   fil11 = force? fil10;
  //   checkMissing(fil11);
  //   return fil11;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r35 = dyn dget2(p16)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dget2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L26() else D26()
  // L26()
  goto L26_;

D26_:;
  // deopt 74 [r35]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L26_:;
  // xx12 = ld xx
  Rsh_Fir_reg_xx12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L27() else D27()
  // L27()
  goto L27_;

D27_:;
  // deopt 74 [r35, xx12]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_xx12_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L27_:;
  // xx13 = force? xx12
  Rsh_Fir_reg_xx13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx12_);
  // checkMissing(xx13)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_xx13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // `-`(r35, xx13)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_xx13_;
  (void)(Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args32));
  // dput8 = ldf dput
  Rsh_Fir_reg_dput8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L28() else D28()
  // L28()
  goto L28_;

D28_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p17 = prom<V +>{
  //   xx14 = ld xx;
  //   xx15 = force? xx14;
  //   checkMissing(xx15);
  //   return xx15;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   fil12 = ld fil;
  //   fil13 = force? fil12;
  //   checkMissing(fil13);
  //   return fil13;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r39 = dyn dput8[, , control](p17, p18, "hexNumeric")
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput8_, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L29() else D29()
  // L29()
  goto L29_;

D29_:;
  // deopt 83 [r39]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L29_:;
  // dget3 = ldf dget
  Rsh_Fir_reg_dget3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L30() else D30()
  // L30()
  goto L30_;

D30_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p19 = prom<V +>{
  //   fil14 = ld fil;
  //   fil15 = force? fil14;
  //   checkMissing(fil15);
  //   return fil15;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // r41 = dyn dget3(p19)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dget3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L31() else D31()
  // L31()
  goto L31_;

D31_:;
  // deopt 87 [r41]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L31_:;
  // xx16 = ld xx
  Rsh_Fir_reg_xx16_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L32() else D32()
  // L32()
  goto L32_;

D32_:;
  // deopt 87 [r41, xx16]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_xx16_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L32_:;
  // xx17 = force? xx16
  Rsh_Fir_reg_xx17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx16_);
  // checkMissing(xx17)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_xx17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // `-`(r41, xx17)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_xx17_;
  (void)(Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args39));
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L33() else D33()
  // L33()
  goto L33_;

D33_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p20 = prom<V +>{
  //   fil16 = ld fil;
  //   fil17 = force? fil16;
  //   checkMissing(fil17);
  //   return fil17;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r44 = dyn unlink(p20)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L34() else D34()
  // L34()
  goto L34_;

D34_:;
  // deopt 93 [r44]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L34_:;
  // setNames = ldf setNames
  Rsh_Fir_reg_setNames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L35() else D35()
  // L35()
  goto L35_;

D35_:;
  // deopt 95 []
  Rsh_Fir_deopt(95, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p21 = prom<V +>{
  //   xx18 = ld xx;
  //   xx19 = force? xx18;
  //   checkMissing(xx19);
  //   return xx19;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // p23 = prom<V +>{
  //   paste0 = ldf paste0;
  //   p22 = prom<V +>{
  //     return <int 1, 2, 3>;
  //   };
  //   r47 = dyn paste0("pi^", p22);
  //   return r47;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // r49 = dyn setNames(p21, p23)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setNames, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L36() else D36()
  // L36()
  goto L36_;

D36_:;
  // deopt 98 [r49]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L36_:;
  // st xn = r49
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // dput9 = ldf dput
  Rsh_Fir_reg_dput9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L37() else D37()
  // L37()
  goto L37_;

D37_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p24 = prom<V +>{
  //   xn = ld xn;
  //   xn1 = force? xn;
  //   checkMissing(xn1);
  //   return xn1;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main24, 0, NULL, CCP, RHO);
  // r51 = dyn dput9(p24)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput9_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L38() else D38()
  // L38()
  goto L38_;

D38_:;
  // deopt 103 [r51]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L38_:;
  // dput10 = ldf dput
  Rsh_Fir_reg_dput10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L39() else D39()
  // L39()
  goto L39_;

D39_:;
  // deopt 105 []
  Rsh_Fir_deopt(105, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p25 = prom<V +>{
  //   xn2 = ld xn;
  //   xn3 = force? xn2;
  //   checkMissing(xn3);
  //   return xn3;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main25, 0, NULL, CCP, RHO);
  // r53 = dyn dput10[, control](p25, "S_compat")
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput10_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L40() else D40()
  // L40()
  goto L40_;

D40_:;
  // deopt 109 [r53]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L40_:;
  // dput11 = ldf dput
  Rsh_Fir_reg_dput11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L41() else D41()
  // L41()
  goto L41_;

D41_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p26 = prom<V +>{
  //   xn4 = ld xn;
  //   xn5 = force? xn4;
  //   checkMissing(xn5);
  //   return xn5;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main26, 0, NULL, CCP, RHO);
  // p27 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r56):
  //   return r56;
  // L1():
  //   c = ldf c in base;
  //   r57 = dyn c("keepNA", "keepInteger", "showAttributes");
  //   goto L0(r57);
  // L2():
  //   r55 = dyn base("keepNA", "keepInteger", "showAttributes");
  //   goto L0(r55);
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main27, 0, NULL, CCP, RHO);
  // r59 = dyn dput11[, control](p26, p27)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p26_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput11_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L42() else D42()
  // L42()
  goto L42_;

D42_:;
  // deopt 115 [r59]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L42_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r59
  return Rsh_Fir_reg_r59_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r2 = dyn __("base", "mean")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil;
  SEXP Rsh_Fir_reg_fil1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil = ld fil
  Rsh_Fir_reg_fil = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil1 = force? fil
  Rsh_Fir_reg_fil1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil);
  // checkMissing(fil1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_fil1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return fil1
  return Rsh_Fir_reg_fil1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil2_;
  SEXP Rsh_Fir_reg_fil3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil2 = ld fil
  Rsh_Fir_reg_fil2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil3 = force? fil2
  Rsh_Fir_reg_fil3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil2_);
  // checkMissing(fil3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_fil3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return fil3
  return Rsh_Fir_reg_fil3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // p3 = prom<V +>{
  //   bar = ld bar;
  //   bar1 = force? bar;
  //   checkMissing(bar1);
  //   return bar1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   __1 = ldf `::`;
  //   r9 = dyn __1("base", "mean");
  //   return r9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r11 = dyn all_equal[, , `check.environment`](p3, p4, FALSE)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bar;
  SEXP Rsh_Fir_reg_bar1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // bar = ld bar
  Rsh_Fir_reg_bar = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // bar1 = force? bar
  Rsh_Fir_reg_bar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar);
  // checkMissing(bar1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_bar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return bar1
  return Rsh_Fir_reg_bar1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r9 = dyn __1("base", "mean")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_baz;
  SEXP Rsh_Fir_reg_baz1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // baz = ld baz
  Rsh_Fir_reg_baz = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // baz1 = force? baz
  Rsh_Fir_reg_baz1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_baz);
  // checkMissing(baz1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_baz1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return baz1
  return Rsh_Fir_reg_baz1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_baz2_;
  SEXP Rsh_Fir_reg_baz3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // baz2 = ld baz
  Rsh_Fir_reg_baz2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // baz3 = force? baz2
  Rsh_Fir_reg_baz3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_baz2_);
  // checkMissing(baz3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_baz3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return baz3
  return Rsh_Fir_reg_baz3_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx;
  SEXP Rsh_Fir_reg_xx1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return xx1
  return Rsh_Fir_reg_xx1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx2_;
  SEXP Rsh_Fir_reg_xx3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return xx3
  return Rsh_Fir_reg_xx3_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx4_;
  SEXP Rsh_Fir_reg_xx5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx4 = ld xx
  Rsh_Fir_reg_xx4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xx5 = force? xx4
  Rsh_Fir_reg_xx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx4_);
  // checkMissing(xx5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_xx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return xx5
  return Rsh_Fir_reg_xx5_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx6_;
  SEXP Rsh_Fir_reg_xx7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx6 = ld xx
  Rsh_Fir_reg_xx6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xx7 = force? xx6
  Rsh_Fir_reg_xx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx6_);
  // checkMissing(xx7)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_xx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return xx7
  return Rsh_Fir_reg_xx7_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil4_;
  SEXP Rsh_Fir_reg_fil5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil4 = ld fil
  Rsh_Fir_reg_fil4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil5 = force? fil4
  Rsh_Fir_reg_fil5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil4_);
  // checkMissing(fil5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_fil5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return fil5
  return Rsh_Fir_reg_fil5_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil6_;
  SEXP Rsh_Fir_reg_fil7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil6 = ld fil
  Rsh_Fir_reg_fil6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil7 = force? fil6
  Rsh_Fir_reg_fil7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil6_);
  // checkMissing(fil7)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_fil7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return fil7
  return Rsh_Fir_reg_fil7_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx10_;
  SEXP Rsh_Fir_reg_xx11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx10 = ld xx
  Rsh_Fir_reg_xx10_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xx11 = force? xx10
  Rsh_Fir_reg_xx11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx10_);
  // checkMissing(xx11)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_xx11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return xx11
  return Rsh_Fir_reg_xx11_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil8_;
  SEXP Rsh_Fir_reg_fil9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil8 = ld fil
  Rsh_Fir_reg_fil8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil9 = force? fil8
  Rsh_Fir_reg_fil9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil8_);
  // checkMissing(fil9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_fil9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return fil9
  return Rsh_Fir_reg_fil9_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil10_;
  SEXP Rsh_Fir_reg_fil11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil10 = ld fil
  Rsh_Fir_reg_fil10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil11 = force? fil10
  Rsh_Fir_reg_fil11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil10_);
  // checkMissing(fil11)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_fil11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return fil11
  return Rsh_Fir_reg_fil11_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx14_;
  SEXP Rsh_Fir_reg_xx15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx14 = ld xx
  Rsh_Fir_reg_xx14_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xx15 = force? xx14
  Rsh_Fir_reg_xx15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx14_);
  // checkMissing(xx15)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_xx15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return xx15
  return Rsh_Fir_reg_xx15_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil12_;
  SEXP Rsh_Fir_reg_fil13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil12 = ld fil
  Rsh_Fir_reg_fil12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil13 = force? fil12
  Rsh_Fir_reg_fil13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil12_);
  // checkMissing(fil13)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_fil13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return fil13
  return Rsh_Fir_reg_fil13_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil14_;
  SEXP Rsh_Fir_reg_fil15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil14 = ld fil
  Rsh_Fir_reg_fil14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil15 = force? fil14
  Rsh_Fir_reg_fil15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil14_);
  // checkMissing(fil15)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_fil15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return fil15
  return Rsh_Fir_reg_fil15_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fil16_;
  SEXP Rsh_Fir_reg_fil17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fil16 = ld fil
  Rsh_Fir_reg_fil16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // fil17 = force? fil16
  Rsh_Fir_reg_fil17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fil16_);
  // checkMissing(fil17)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_fil17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return fil17
  return Rsh_Fir_reg_fil17_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx18_;
  SEXP Rsh_Fir_reg_xx19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx18 = ld xx
  Rsh_Fir_reg_xx18_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xx19 = force? xx18
  Rsh_Fir_reg_xx19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx18_);
  // checkMissing(xx19)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_xx19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return xx19
  return Rsh_Fir_reg_xx19_;
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // p22 = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main23, 0, NULL, CCP, RHO);
  // r47 = dyn paste0("pi^", p22)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 22);
}
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xn;
  SEXP Rsh_Fir_reg_xn1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xn = ld xn
  Rsh_Fir_reg_xn = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // xn1 = force? xn
  Rsh_Fir_reg_xn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xn);
  // checkMissing(xn1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_xn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return xn1
  return Rsh_Fir_reg_xn1_;
}
SEXP Rsh_Fir_user_promise_main25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xn2_;
  SEXP Rsh_Fir_reg_xn3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xn2 = ld xn
  Rsh_Fir_reg_xn2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // xn3 = force? xn2
  Rsh_Fir_reg_xn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xn2_);
  // checkMissing(xn3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_xn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return xn3
  return Rsh_Fir_reg_xn3_;
}
SEXP Rsh_Fir_user_promise_main26(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xn4_;
  SEXP Rsh_Fir_reg_xn5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xn4 = ld xn
  Rsh_Fir_reg_xn4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // xn5 = force? xn4
  Rsh_Fir_reg_xn5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xn4_);
  // checkMissing(xn5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_xn5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return xn5
  return Rsh_Fir_reg_xn5_;
}
SEXP Rsh_Fir_user_promise_main27(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r56
  return Rsh_Fir_reg_r56_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r57 = dyn c("keepNA", "keepInteger", "showAttributes")
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L0_;

L2_:;
  // r55 = dyn base("keepNA", "keepInteger", "showAttributes")
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner4167963521_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4167963521 dynamic dispatch ([x, file, control])

  return Rsh_Fir_user_version_inner4167963521_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4167963521_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4167963521 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner4167963521/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_file;
  SEXP Rsh_Fir_reg_control;
  SEXP Rsh_Fir_reg_file_isMissing;
  SEXP Rsh_Fir_reg_file_orDefault;
  SEXP Rsh_Fir_reg_control_isMissing;
  SEXP Rsh_Fir_reg_control_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_file1_;
  SEXP Rsh_Fir_reg_file2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_file3_;
  SEXP Rsh_Fir_reg_file4_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_file5_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_stdout;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_file8_;
  SEXP Rsh_Fir_reg_file9_;
  SEXP Rsh_Fir_reg__deparseOpts;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_dput1;
  SEXP Rsh_Fir_reg_r21_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_file = PARAMS[1];
  Rsh_Fir_reg_control = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args54);
  // if file_isMissing then L0("") else L0(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L0("")
    Rsh_Fir_reg_file_orDefault = Rsh_const(CCP, 31);
    goto L0_;
  } else {
  // L0(file)
    Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_file;
    goto L0_;
  }

L0_:;
  // st file = file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_file_orDefault);
  // control_isMissing = missing.0(control)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_control;
  Rsh_Fir_reg_control_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args55);
  // if control_isMissing then L1() else L2(control)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_control_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(control)
    Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_control;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("keepNA", "keepInteger", "niceNames", "showAttributes");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("keepNA", "keepInteger", "niceNames", "showAttributes");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4167963521_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st control = control_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_control_orDefault, RHO);
  (void)(Rsh_Fir_reg_control_orDefault);
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L3_:;
  // c2 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // if c2 then L14() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L14()
    goto L14_;
  } else {
  // L4()
    goto L4_;
  }

L11_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r4 = dyn base1(<sym file>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L3_;

D0_:;
  // deopt 1 [file1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard4 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L13_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(file2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args64);
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_c1_;
  goto L3_;

L14_:;
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L5_:;
  // c3 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // if c3 then L19() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L19()
    goto L19_;
  } else {
  // L6()
    goto L6_;
  }

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_1;

L15_:;
  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

L16_:;
  // r6 = dyn base2(<sym file>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_;
  goto L5_;

L28_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L29_:;
  // r17 = dyn base4(<lang dput(x, file, .deparseOpts(control))>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L10(r17)
  // L10(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_;
  goto L10_;

D1_:;
  // deopt 6 [file3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_file3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 27 [x1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L6_:;
  // stdout = ldf stdout
  Rsh_Fir_reg_stdout = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L17_:;
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r8 = dyn nzchar(file4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_file4_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L19_:;
  // file5 = ldf file
  Rsh_Fir_reg_file5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L30_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // file8 = ld file
  Rsh_Fir_reg_file8_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

D2_:;
  // deopt 9 [r8]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 29 [file8]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_file8_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_;
  goto L5_;

L20_:;
  // p1 = prom<V +>{
  //   file6 = ld file;
  //   file7 = force? file6;
  //   checkMissing(file7);
  //   return file7;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4167963521_1, 0, NULL, CCP, RHO);
  // r10 = dyn file5(p1, "wt")
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file5_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L25_:;
  // r15 = dyn stdout()
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stdout, 0, NULL, NULL, CCP, RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L31_:;
  // file9 = force? file8
  Rsh_Fir_reg_file9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file8_);
  // checkMissing(file9)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_file9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // _deparseOpts = ldf `.deparseOpts`
  Rsh_Fir_reg__deparseOpts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D4_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 21 [r15]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // st file = r10
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym3 = ldf `on.exit`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base3 = ldf `on.exit` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L26_:;
  // st file = r15
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r15_;
  goto L8_;

L32_:;
  // p2 = prom<V +>{
  //   control1 = ld control;
  //   control2 = force? control1;
  //   checkMissing(control2);
  //   return control2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4167963521_2, 0, NULL, CCP, RHO);
  // r20 = dyn _deparseOpts(p2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__deparseOpts, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D10_:;
  // deopt 34 [r20]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r12_;
  goto L8_;

L22_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r13 = dyn on_exit(<lang close(file)>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_1;
  goto L7_;

L23_:;
  // r11 = dyn base3(<lang close(file)>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_1;
  goto L7_;

L33_:;
  // dput = ldf dput in base
  Rsh_Fir_reg_dput1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r21 = dyn dput(x2, file9, r20)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_file9_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput1, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L34() else D11()
  // L34()
  goto L34_;

D11_:;
  // deopt 36 [r21]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r21_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner4167963521_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4167963521/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
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
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r2 = dyn c("keepNA", "keepInteger", "niceNames", "showAttributes")
  SEXP Rsh_Fir_array_args57[4];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args57[3] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 4, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("keepNA", "keepInteger", "niceNames", "showAttributes")
  SEXP Rsh_Fir_array_args58[4];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args58[3] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 4, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4167963521_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file6_;
  SEXP Rsh_Fir_reg_file7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4167963521/0: expected 0, got %d", NCAPTURES);

  // file6 = ld file
  Rsh_Fir_reg_file6_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // file7 = force? file6
  Rsh_Fir_reg_file7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file6_);
  // checkMissing(file7)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_file7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return file7
  return Rsh_Fir_reg_file7_;
}
SEXP Rsh_Fir_user_promise_inner4167963521_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_control1_;
  SEXP Rsh_Fir_reg_control2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4167963521/0: expected 0, got %d", NCAPTURES);

  // control1 = ld control
  Rsh_Fir_reg_control1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // control2 = force? control1
  Rsh_Fir_reg_control2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control1_);
  // checkMissing(control2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_control2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return control2
  return Rsh_Fir_reg_control2_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_r2;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 [1.0, x1]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L0_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r = `-`(1.0, x2)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args82);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
