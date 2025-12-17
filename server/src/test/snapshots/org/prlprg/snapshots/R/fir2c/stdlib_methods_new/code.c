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
SEXP Rsh_Fir_user_function_inner2006812994_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2006812994_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2006812994_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2006812994_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2006812994_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2006812994_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1754423021_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1754423021_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3476874840_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3476874840_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3476874840_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3476874840_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3476874840_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_setClass;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_setClass1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_new;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_new1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_setMethod;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_setMethod1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_removeMethod;
  SEXP Rsh_Fir_reg_r29_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2006812994
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2006812994_, RHO, CCP);
  // st new = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setClass = ldf setClass
  Rsh_Fir_reg_setClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c("numeric", "numeric");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base[x, y]("numeric", "numeric");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn setClass[, slots]("track", p)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // setClass1 = ldf setClass
  Rsh_Fir_reg_setClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   c1 = ldf c in base;
  //   r8 = dyn c1("numeric");
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1[smooth]("numeric");
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn setClass1[, contains, slots]("trackCurve", "track", p1)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass1_, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r11 = dyn __("stats", "rnorm")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 21 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // checkFun.0(r11)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r11_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args9));
  // r12 = r11 as cls
  Rsh_Fir_reg_r12_ = Rsh_Fir_cast(Rsh_Fir_reg_r11_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r13 = dyn r12(10.0)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r12_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 24 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // st ydata = r13
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // st ysmooth = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_const(CCP, 16), RHO);
  (void)(Rsh_const(CCP, 16));
  // new = ldf new
  Rsh_Fir_reg_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   sym2 = ldf seq_along;
  //   base2 = ldf seq_along in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   ydata = ld ydata;
  //   ydata1 = force? ydata;
  //   checkMissing(ydata1);
  //   r16 = seq_along(ydata1);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base2(<sym ydata>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   ydata2 = ld ydata;
  //   ydata3 = force? ydata2;
  //   checkMissing(ydata3);
  //   return ydata3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r19 = dyn new[, x, y]("track", p2, p3)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 36 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // st t1 = r19
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // new1 = ldf new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p4 = prom<V +>{
  //   t1 = ld t1;
  //   t2 = force? t1;
  //   checkMissing(t2);
  //   return t2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   ysmooth = ld ysmooth;
  //   ysmooth1 = force? ysmooth;
  //   checkMissing(ysmooth1);
  //   return ysmooth1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r22 = dyn new1[, , smooth]("trackCurve", p4, p5)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new1_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 44 [r22]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10_:;
  // st t2 = r22
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // setMethod = ldf setMethod
  Rsh_Fir_reg_setMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p6 = prom<V +>{
  //   r23 = clos inner1754423021;
  //   return r23;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r25 = dyn setMethod("initialize", "track", p6)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setMethod, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 51 [r25]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L12_:;
  // setMethod1 = ldf setMethod
  Rsh_Fir_reg_setMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p7 = prom<V +>{
  //   r26 = clos inner3476874840;
  //   return r26;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r28 = dyn setMethod1("initialize", "track", p7)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setMethod1_, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 57 [r28]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L14_:;
  // removeMethod = ldf removeMethod
  Rsh_Fir_reg_removeMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r29 = dyn removeMethod("initialize", "track")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_removeMethod, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 62 [r29]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn c("numeric", "numeric")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base[x, y]("numeric", "numeric")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r8 = dyn c1("numeric")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1[smooth]("numeric")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_ydata;
  SEXP Rsh_Fir_reg_ydata1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf seq_along
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf seq_along in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // ydata = ld ydata
  Rsh_Fir_reg_ydata = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ydata1 = force? ydata
  Rsh_Fir_reg_ydata1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ydata);
  // checkMissing(ydata1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ydata1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r16 = seq_along(ydata1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ydata1_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args13);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base2(<sym ydata>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ydata2_;
  SEXP Rsh_Fir_reg_ydata3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ydata2 = ld ydata
  Rsh_Fir_reg_ydata2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ydata3 = force? ydata2
  Rsh_Fir_reg_ydata3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ydata2_);
  // checkMissing(ydata3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ydata3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return ydata3
  return Rsh_Fir_reg_ydata3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t1_;
  SEXP Rsh_Fir_reg_t2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // t1 = ld t1
  Rsh_Fir_reg_t1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // t2 = force? t1
  Rsh_Fir_reg_t2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t1_);
  // checkMissing(t2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_t2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return t2
  return Rsh_Fir_reg_t2_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ysmooth;
  SEXP Rsh_Fir_reg_ysmooth1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ysmooth = ld ysmooth
  Rsh_Fir_reg_ysmooth = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // ysmooth1 = force? ysmooth
  Rsh_Fir_reg_ysmooth1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ysmooth);
  // checkMissing(ysmooth1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_ysmooth1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return ysmooth1
  return Rsh_Fir_reg_ysmooth1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r23 = clos inner1754423021
  Rsh_Fir_reg_r23_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1754423021_, RHO, CCP);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r26 = clos inner3476874840
  Rsh_Fir_reg_r26_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3476874840_, RHO, CCP);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_function_inner2006812994_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2006812994 dynamic dispatch ([Class, `...`])

  return Rsh_Fir_user_version_inner2006812994_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2006812994_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2006812994 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2006812994/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_Class;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_getClass;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_C_new_object;
  SEXP Rsh_Fir_reg_C_new_object1_;
  SEXP Rsh_Fir_reg_ClassDef;
  SEXP Rsh_Fir_reg_ClassDef1_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_initialize;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r10_1;

  // Bind parameters
  Rsh_Fir_reg_Class = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st Class = Class
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_Class, RHO);
  (void)(Rsh_Fir_reg_Class);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // getClass = ldf getClass
  Rsh_Fir_reg_getClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   Class1 = ld Class;
  //   Class2 = force? Class1;
  //   checkMissing(Class2);
  //   return Class2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2006812994_, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   topenv = ldf topenv;
  //   p1 = prom<V +>{
  //     parent_frame = ldf `parent.frame`;
  //     r1 = dyn parent_frame();
  //     return r1;
  //   };
  //   r3 = dyn topenv(p1);
  //   return r3;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2006812994_1, 0, NULL, CCP, RHO);
  // r5 = dyn getClass[, where](p, p2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 5 [r5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L2_:;
  // st ClassDef = r5
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // st value = r7
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // initialize = ldf initialize
  Rsh_Fir_reg_initialize = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

L3_:;
  // C_new_object = ld C_new_object
  Rsh_Fir_reg_C_new_object = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L4_:;
  // r6 = dyn base(<sym C_new_object>, <sym ClassDef>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

D2_:;
  // deopt 8 [C_new_object]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_C_new_object;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // C_new_object1 = force? C_new_object
  Rsh_Fir_reg_C_new_object1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_new_object);
  // checkMissing(C_new_object1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_C_new_object1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // ClassDef = ld ClassDef
  Rsh_Fir_reg_ClassDef = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

L7_:;
  // p3 = prom<V +>{
  //   value = ld value;
  //   value1 = force? value;
  //   checkMissing(value1);
  //   return value1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2006812994_3, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // r10 = dyn initialize[, `...`](p3, ddd1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_initialize, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D3_:;
  // deopt 9 [C_new_object1, ClassDef]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_new_object1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_ClassDef;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L6_:;
  // ClassDef1 = force? ClassDef
  Rsh_Fir_reg_ClassDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef);
  // checkMissing(ClassDef1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ClassDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // vargs = dots[ClassDef1]
  SEXP Rsh_Fir_array_vector_values[1];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_ClassDef1_;
  SEXP Rsh_Fir_array_vector_names[1];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 1, Rsh_Fir_array_vector_values, NULL);
  // r8 = `.Call`(C_new_object1, vargs, <missing>)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_C_new_object1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args32);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_1;
  goto L0_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_1;
}
SEXP Rsh_Fir_user_promise_inner2006812994_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Class1_;
  SEXP Rsh_Fir_reg_Class2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2006812994/0: expected 0, got %d", NCAPTURES);

  // Class1 = ld Class
  Rsh_Fir_reg_Class1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // Class2 = force? Class1
  Rsh_Fir_reg_Class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class1_);
  // checkMissing(Class2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_Class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return Class2
  return Rsh_Fir_reg_Class2_;
}
SEXP Rsh_Fir_user_promise_inner2006812994_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_topenv;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r3_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2006812994/0: expected 0, got %d", NCAPTURES);

  // topenv = ldf topenv
  Rsh_Fir_reg_topenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r1 = dyn parent_frame();
  //   return r1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2006812994_2, 0, NULL, CCP, RHO);
  // r3 = dyn topenv(p1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner2006812994_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2006812994/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // r1 = dyn parent_frame()
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner2006812994_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2006812994/0: expected 0, got %d", NCAPTURES);

  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_function_inner1754423021_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1754423021 dynamic dispatch ([`.Object`, `...`])

  return Rsh_Fir_user_version_inner1754423021_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1754423021_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1754423021 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1754423021/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg__Object;
  SEXP Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_reg_callNextMethod;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r3_2;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r7_2;
  SEXP Rsh_Fir_reg_r8_2;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r10_2;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg__Object1_;
  SEXP Rsh_Fir_reg__Object2_;

  // Bind parameters
  Rsh_Fir_reg__Object = PARAMS[0];
  Rsh_Fir_reg_ddd1 = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `.Object` = _Object
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg__Object, RHO);
  (void)(Rsh_Fir_reg__Object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_ddd1, RHO);
  (void)(Rsh_Fir_reg_ddd1);
  // callNextMethod = ldf callNextMethod
  Rsh_Fir_reg_callNextMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r = dyn callNextMethod()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_callNextMethod, 0, NULL, NULL, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L5_:;
  // st `.Object` = r
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf length
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L6_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r3 = dyn __(<sym .Object>, <sym x>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names18, CCP, RHO);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r4 = dyn length(r3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r3_2;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r1 = dyn base(<lang `@`(.Object, x)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_2;
  goto L0_;

D2_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L1_:;
  // r12 = `!=`(r8, r9)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r8_2;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args38);
  // c = `as.logical`(r12)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c then L12() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L12()
    goto L12_;
  } else {
  // L2()
    goto L2_;
  }

L8_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r4_;
  goto L0_;

L9_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r10 = dyn __1(<sym .Object>, <sym y>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r10_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names21, CCP, RHO);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r11 = dyn length1(r10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r10_2;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

L10_:;
  // r7 = dyn base1(<lang `@`(.Object, y)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r7_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r2, r7)
  // L1(r2, r7)
  Rsh_Fir_reg_r8_2 = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_2;
  goto L1_;

D3_:;
  // deopt 14 [r2, r11]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // _Object1 = ld `.Object`
  Rsh_Fir_reg__Object1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L11_:;
  // goto L1(r2, r11)
  // L1(r2, r11)
  Rsh_Fir_reg_r8_2 = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_1;
  goto L1_;

L12_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 [_Object1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg__Object1_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L13_:;
  // r13 = dyn stop("specified x and y of different lengths")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

L16_:;
  // _Object2 = force? _Object1
  Rsh_Fir_reg__Object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Object1_);
  // checkMissing(_Object2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg__Object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return _Object2
  return Rsh_Fir_reg__Object2_;

D5_:;
  // deopt 19 [r13]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L3()
  // L3()
  goto L3_;
}
SEXP Rsh_Fir_user_function_inner3476874840_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3476874840 dynamic dispatch ([`.Object`, x, y, `...`])

  return Rsh_Fir_user_version_inner3476874840_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3476874840_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3476874840 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3476874840/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg__Object1;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_ddd2;
  SEXP Rsh_Fir_reg_x_isMissing;
  SEXP Rsh_Fir_reg_x_orDefault;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_y_isMissing;
  SEXP Rsh_Fir_reg_y_orDefault;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_callNextMethod1;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_ddd1_1;
  SEXP Rsh_Fir_reg_r5_2;
  SEXP Rsh_Fir_reg_sym3;
  SEXP Rsh_Fir_reg_base3;
  SEXP Rsh_Fir_reg_guard3;
  SEXP Rsh_Fir_reg_r6_2;
  SEXP Rsh_Fir_reg_r7_3;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length1;
  SEXP Rsh_Fir_reg_r8_3;
  SEXP Rsh_Fir_reg_sym1_2;
  SEXP Rsh_Fir_reg_base1_2;
  SEXP Rsh_Fir_reg_guard1_2;
  SEXP Rsh_Fir_reg_r11_2;
  SEXP Rsh_Fir_reg_r12_2;
  SEXP Rsh_Fir_reg_r13_2;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_length1_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg_stop1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg__Object3_;
  SEXP Rsh_Fir_reg__Object4_;

  // Bind parameters
  Rsh_Fir_reg__Object1 = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_y = PARAMS[2];
  Rsh_Fir_reg_ddd2 = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `.Object` = _Object
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg__Object1, RHO);
  (void)(Rsh_Fir_reg__Object1);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args45);
  // if x_isMissing then L0() else L1(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   numeric = ldf numeric;
  //   r = dyn numeric(0.0);
  //   return r;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3476874840_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_p2;
  goto L1_;

L1_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args47);
  // if y_isMissing then L2() else L3(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   numeric1 = ldf numeric;
  //   r2 = dyn numeric1(0.0);
  //   return r2;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3476874840_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_p1_2;
  goto L3_;

L3_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_ddd2, RHO);
  (void)(Rsh_Fir_reg_ddd2);
  // callNextMethod = ldf callNextMethod
  Rsh_Fir_reg_callNextMethod1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p2 = prom<V +>{
  //   _Object1 = ld `.Object`;
  //   _Object2 = force? _Object1;
  //   checkMissing(_Object2);
  //   return _Object2;
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3476874840_2, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_1 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // r5 = dyn callNextMethod[, `...`](p2, ddd1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p2_2;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_ddd1_1;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_callNextMethod1, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [r5]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L9_:;
  // st `.Object` = r5
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r5_2, RHO);
  (void)(Rsh_Fir_reg_r5_2);
  // sym = ldf length
  Rsh_Fir_reg_sym3 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base3 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym3;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base3;
  Rsh_Fir_reg_guard3 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L4_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym1_2;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base1_2;
  Rsh_Fir_reg_guard1_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_2)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L10_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r6 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r6_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_3 = Rsh_Fir_reg_r6_2;
  goto L4_;

D2_:;
  // deopt 8 [x1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L5_:;
  // r15 = `!=`(r12, r13)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r12_2;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r13_2;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args54);
  // c = `as.logical`(r15)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c then L18() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L18()
    goto L18_;
  } else {
  // L6()
    goto L6_;
  }

L12_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r8 = dyn length(x2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r8_3 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

L14_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L15_:;
  // r11 = dyn base1(<sym y>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r11_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_2, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L5(r7, r11)
  // L5(r7, r11)
  Rsh_Fir_reg_r12_2 = Rsh_Fir_reg_r7_3;
  Rsh_Fir_reg_r13_2 = Rsh_Fir_reg_r11_2;
  goto L5_;

D3_:;
  // deopt 11 [r8]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r8_3;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 [r7, y1]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r7_3;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L13_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r7_3 = Rsh_Fir_reg_r8_3;
  goto L4_;

L16_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r14 = dyn length1(y2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_1, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L18_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D5_:;
  // deopt 16 [r7, r14]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r7_3;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 24 [x3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L5(r7, r14)
  // L5(r7, r14)
  Rsh_Fir_reg_r12_2 = Rsh_Fir_reg_r7_3;
  Rsh_Fir_reg_r13_2 = Rsh_Fir_reg_r14_1;
  goto L5_;

L19_:;
  // r16 = dyn stop("specified x and y of different lengths")
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

L22_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // l = ld `.Object`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

D7_:;
  // deopt 21 [r16]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 27 [x4, l, x4]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L7()
  // L7()
  goto L7_;

L23_:;
  // r18 = dyn ___(l, NULL, "x", x4)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args63[3] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names33[4];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L24() else D10()
  // L24()
  goto L24_;

D10_:;
  // deopt 30 [x4, r18]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L24_:;
  // st `.Object` = r18
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L25() else D11()
  // L25()
  goto L25_;

D11_:;
  // deopt 32 [y3]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L25_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // l1 = ld `.Object`
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // ___1 = ldf `@<-`
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

D12_:;
  // deopt 35 [y4, l1, y4]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L26_:;
  // r19 = dyn ___1(l1, NULL, "y", y4)
  SEXP Rsh_Fir_array_args65[4];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args65[3] = Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L27() else D13()
  // L27()
  goto L27_;

D13_:;
  // deopt 38 [y4, r19]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L27_:;
  // st `.Object` = r19
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r19_1, RHO);
  (void)(Rsh_Fir_reg_r19_1);
  // _Object3 = ld `.Object`
  Rsh_Fir_reg__Object3_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L28() else D14()
  // L28()
  goto L28_;

D14_:;
  // deopt 40 [_Object3]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg__Object3_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L28_:;
  // _Object4 = force? _Object3
  Rsh_Fir_reg__Object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Object3_);
  // checkMissing(_Object4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg__Object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return _Object4
  return Rsh_Fir_reg__Object4_;
}
SEXP Rsh_Fir_user_promise_inner3476874840_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_r2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3476874840/0: expected 0, got %d", NCAPTURES);

  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // r = dyn numeric(0.0)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_user_promise_inner3476874840_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric1_;
  SEXP Rsh_Fir_reg_r2_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3476874840/0: expected 0, got %d", NCAPTURES);

  // numeric1 = ldf numeric
  Rsh_Fir_reg_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // r2 = dyn numeric1(0.0)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names26, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_2;
}
SEXP Rsh_Fir_user_promise_inner3476874840_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__Object1_1;
  SEXP Rsh_Fir_reg__Object2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3476874840/0: expected 0, got %d", NCAPTURES);

  // _Object1 = ld `.Object`
  Rsh_Fir_reg__Object1_1 = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // _Object2 = force? _Object1
  Rsh_Fir_reg__Object2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg__Object1_1);
  // checkMissing(_Object2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg__Object2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return _Object2
  return Rsh_Fir_reg__Object2_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
