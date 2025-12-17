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
SEXP Rsh_Fir_user_function_inner2532465258_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2532465258_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2532465258_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2532465258_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner741670229_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner741670229_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_nlm;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_nlm1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_nlm3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_nlm4_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r45_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2532465258
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2532465258_, RHO, CCP);
  // st nlm = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = clos inner2501545716
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st f = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // nlm = ldf nlm
  Rsh_Fir_reg_nlm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   c = ldf c in base;
  //   r5 = dyn c(10.0, 10.0);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(10.0, 10.0);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn nlm(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlm, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 10 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // nlm1 = ldf nlm
  Rsh_Fir_reg_nlm1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   f2 = ld f;
  //   f3 = force? f2;
  //   checkMissing(f3);
  //   return f3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   c1 = ldf c in base;
  //   r11 = dyn c1(10.0, 10.0);
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base1(10.0, 10.0);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r13 = dyn nlm1[, , `print.level`](p2, p3, 2.0)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlm1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 17 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r14 = dyn __("utils", "str")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // checkFun.0(r14)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r14_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args11));
  // r15 = r14 as cls
  Rsh_Fir_reg_r15_ = Rsh_Fir_cast(Rsh_Fir_reg_r14_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p6 = prom<V +>{
  //   nlm2 = ldf nlm;
  //   p4 = prom<V +>{
  //     f4 = ld f;
  //     f5 = force? f4;
  //     checkMissing(f5);
  //     return f5;
  //   };
  //   p5 = prom<V +>{
  //     sym2 = ldf c;
  //     base2 = ldf c in base;
  //     guard2 = `==`.4(sym2, base2);
  //     if guard2 then L1() else L2();
  //   L0(r18):
  //     return r18;
  //   L1():
  //     c2 = ldf c in base;
  //     r19 = dyn c2(5.0);
  //     goto L0(r19);
  //   L2():
  //     r17 = dyn base2(5.0);
  //     goto L0(r17);
  //   };
  //   r21 = dyn nlm2[, , hessian](p4, p5, TRUE);
  //   return r21;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r23 = dyn r15(p6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r15_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 25 [r23]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // r24 = clos inner741670229
  Rsh_Fir_reg_r24_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner741670229_, RHO, CCP);
  // st f = r24
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // nlm3 = ldf nlm
  Rsh_Fir_reg_nlm3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p7 = prom<V +>{
  //   f6 = ld f;
  //   f7 = force? f6;
  //   checkMissing(f7);
  //   return f7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r27):
  //   return r27;
  // L1():
  //   c3 = ldf c in base;
  //   r28 = dyn c3(10.0, 10.0);
  //   goto L0(r28);
  // L2():
  //   r26 = dyn base3(10.0, 10.0);
  //   goto L0(r26);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r31):
  //   return r31;
  // L1():
  //   c4 = ldf c in base;
  //   r32 = dyn c4(3.0, 5.0);
  //   goto L0(r32);
  // L2():
  //   r30 = dyn base4(3.0, 5.0);
  //   goto L0(r30);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r34 = dyn nlm3[, , a](p7, p8, p9)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlm3_, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 35 [r34]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // r35 = clos inner741670229
  Rsh_Fir_reg_r35_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner741670229_, RHO, CCP);
  // st f = r35
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // nlm4 = ldf nlm
  Rsh_Fir_reg_nlm4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p10 = prom<V +>{
  //   f8 = ld f;
  //   f9 = force? f8;
  //   checkMissing(f9);
  //   return f9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r38):
  //   return r38;
  // L1():
  //   c5 = ldf c in base;
  //   r39 = dyn c5(10.0, 10.0);
  //   goto L0(r39);
  // L2():
  //   r37 = dyn base5(10.0, 10.0);
  //   goto L0(r37);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r42):
  //   return r42;
  // L1():
  //   c6 = ldf c in base;
  //   r43 = dyn c6(3.0, 5.0);
  //   goto L0(r43);
  // L2():
  //   r41 = dyn base6(3.0, 5.0);
  //   goto L0(r41);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r45 = dyn nlm4[, , a](p10, p11, p12)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlm4_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 45 [r45]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  return Rsh_Fir_reg_r4_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r5 = dyn c(10.0, 10.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base(10.0, 10.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
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
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r11 = dyn c1(10.0, 10.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base1(10.0, 10.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nlm2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nlm2 = ldf nlm
  Rsh_Fir_reg_nlm2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p4 = prom<V +>{
  //   f4 = ld f;
  //   f5 = force? f4;
  //   checkMissing(f5);
  //   return f5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   c2 = ldf c in base;
  //   r19 = dyn c2(5.0);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base2(5.0);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r21 = dyn nlm2[, , hessian](p4, p5, TRUE)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nlm2_, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f4_;
  SEXP Rsh_Fir_reg_f5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f4 = ld f
  Rsh_Fir_reg_f4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f5 = force? f4
  Rsh_Fir_reg_f5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f4_);
  // checkMissing(f5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_f5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return f5
  return Rsh_Fir_reg_f5_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r19 = dyn c2(5.0)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base2(5.0)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f6_;
  SEXP Rsh_Fir_reg_f7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f6 = ld f
  Rsh_Fir_reg_f6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f7 = force? f6
  Rsh_Fir_reg_f7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f6_);
  // checkMissing(f7)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_f7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return f7
  return Rsh_Fir_reg_f7_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r27
  return Rsh_Fir_reg_r27_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r28 = dyn c3(10.0, 10.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r26 = dyn base3(10.0, 10.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r31
  return Rsh_Fir_reg_r31_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r32 = dyn c4(3.0, 5.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L0_;

L2_:;
  // r30 = dyn base4(3.0, 5.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f8_;
  SEXP Rsh_Fir_reg_f9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f8 = ld f
  Rsh_Fir_reg_f8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f9 = force? f8
  Rsh_Fir_reg_f9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f8_);
  // checkMissing(f9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_f9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return f9
  return Rsh_Fir_reg_f9_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r38
  return Rsh_Fir_reg_r38_;

L1_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r39 = dyn c5(10.0, 10.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r37 = dyn base5(10.0, 10.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r42
  return Rsh_Fir_reg_r42_;

L1_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r43 = dyn c6(3.0, 5.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L0_;

L2_:;
  // r41 = dyn base6(3.0, 5.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2532465258_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2532465258 dynamic dispatch ([f, p, `...`, hessian, typsize, fscale, `print.level`, ndigit, gradtol, stepmax, steptol, iterlim, `check.analyticals`])

  return Rsh_Fir_user_version_inner2532465258_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2532465258_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2532465258 version 0 (*, *, dots, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 13) Rsh_error("FIŘ arity mismatch for inner2532465258/0: expected 13, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_f1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_hessian;
  SEXP Rsh_Fir_reg_typsize;
  SEXP Rsh_Fir_reg_fscale;
  SEXP Rsh_Fir_reg_print_level;
  SEXP Rsh_Fir_reg_ndigit;
  SEXP Rsh_Fir_reg_gradtol;
  SEXP Rsh_Fir_reg_stepmax;
  SEXP Rsh_Fir_reg_steptol;
  SEXP Rsh_Fir_reg_iterlim;
  SEXP Rsh_Fir_reg_check_analyticals;
  SEXP Rsh_Fir_reg_hessian_isMissing;
  SEXP Rsh_Fir_reg_hessian_orDefault;
  SEXP Rsh_Fir_reg_typsize_isMissing;
  SEXP Rsh_Fir_reg_typsize_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_fscale_isMissing;
  SEXP Rsh_Fir_reg_fscale_orDefault;
  SEXP Rsh_Fir_reg_print_level_isMissing;
  SEXP Rsh_Fir_reg_print_level_orDefault;
  SEXP Rsh_Fir_reg_ndigit_isMissing;
  SEXP Rsh_Fir_reg_ndigit_orDefault;
  SEXP Rsh_Fir_reg_gradtol_isMissing;
  SEXP Rsh_Fir_reg_gradtol_orDefault;
  SEXP Rsh_Fir_reg_stepmax_isMissing;
  SEXP Rsh_Fir_reg_stepmax_orDefault;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_steptol_isMissing;
  SEXP Rsh_Fir_reg_steptol_orDefault;
  SEXP Rsh_Fir_reg_iterlim_isMissing;
  SEXP Rsh_Fir_reg_iterlim_orDefault;
  SEXP Rsh_Fir_reg_check_analyticals_isMissing;
  SEXP Rsh_Fir_reg_check_analyticals_orDefault;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_print_level1_;
  SEXP Rsh_Fir_reg_print_level2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_print_level3_;
  SEXP Rsh_Fir_reg_print_level4_;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_print_level5_;
  SEXP Rsh_Fir_reg_print_level6_;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_c3_1;
  SEXP Rsh_Fir_reg_c4_1;
  SEXP Rsh_Fir_reg_c6_1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r32_1;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_print_level7_;
  SEXP Rsh_Fir_reg_print_level8_;
  SEXP Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_check_analyticals1_;
  SEXP Rsh_Fir_reg_check_analyticals2_;
  SEXP Rsh_Fir_reg_r41_1;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_r42_1;
  SEXP Rsh_Fir_reg_sym6_1;
  SEXP Rsh_Fir_reg_base6_1;
  SEXP Rsh_Fir_reg_guard6_1;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_1;
  SEXP Rsh_Fir_reg_C_nlm;
  SEXP Rsh_Fir_reg_C_nlm1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_hessian1_;
  SEXP Rsh_Fir_reg_hessian2_;
  SEXP Rsh_Fir_reg_typsize3_;
  SEXP Rsh_Fir_reg_typsize4_;
  SEXP Rsh_Fir_reg_fscale1_;
  SEXP Rsh_Fir_reg_fscale2_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_ndigit1_;
  SEXP Rsh_Fir_reg_ndigit2_;
  SEXP Rsh_Fir_reg_gradtol1_;
  SEXP Rsh_Fir_reg_gradtol2_;
  SEXP Rsh_Fir_reg_stepmax1_;
  SEXP Rsh_Fir_reg_stepmax2_;
  SEXP Rsh_Fir_reg_steptol1_;
  SEXP Rsh_Fir_reg_steptol2_;
  SEXP Rsh_Fir_reg_iterlim1_;
  SEXP Rsh_Fir_reg_iterlim2_;
  SEXP Rsh_Fir_reg__External2_;
  SEXP Rsh_Fir_reg_r47_;

  // Bind parameters
  Rsh_Fir_reg_f1 = PARAMS[0];
  Rsh_Fir_reg_p1 = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_hessian = PARAMS[3];
  Rsh_Fir_reg_typsize = PARAMS[4];
  Rsh_Fir_reg_fscale = PARAMS[5];
  Rsh_Fir_reg_print_level = PARAMS[6];
  Rsh_Fir_reg_ndigit = PARAMS[7];
  Rsh_Fir_reg_gradtol = PARAMS[8];
  Rsh_Fir_reg_stepmax = PARAMS[9];
  Rsh_Fir_reg_steptol = PARAMS[10];
  Rsh_Fir_reg_iterlim = PARAMS[11];
  Rsh_Fir_reg_check_analyticals = PARAMS[12];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_f1, RHO);
  (void)(Rsh_Fir_reg_f1);
  // st p = p
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_p1, RHO);
  (void)(Rsh_Fir_reg_p1);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // hessian_isMissing = missing.0(hessian)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_hessian;
  Rsh_Fir_reg_hessian_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if hessian_isMissing then L0(FALSE) else L0(hessian)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hessian_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_hessian_orDefault = Rsh_const(CCP, 16);
    goto L0_;
  } else {
  // L0(hessian)
    Rsh_Fir_reg_hessian_orDefault = Rsh_Fir_reg_hessian;
    goto L0_;
  }

L0_:;
  // st hessian = hessian_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_hessian_orDefault, RHO);
  (void)(Rsh_Fir_reg_hessian_orDefault);
  // typsize_isMissing = missing.0(typsize)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_typsize;
  Rsh_Fir_reg_typsize_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args35);
  // if typsize_isMissing then L1() else L2(typsize)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_typsize_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(typsize)
    Rsh_Fir_reg_typsize_orDefault = Rsh_Fir_reg_typsize;
    goto L2_;
  }

L1_:;
  // p1 = prom<V +>{
  //   sym = ldf rep;
  //   base = ldf rep in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   rep = ldf rep in base;
  //   r2 = dyn rep(1.0, <lang length(p)>);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(1.0, <lang length(p)>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2532465258_, 0, NULL, CCP, RHO);
  // goto L2(p1)
  // L2(p1)
  Rsh_Fir_reg_typsize_orDefault = Rsh_Fir_reg_p1_1;
  goto L2_;

L2_:;
  // st typsize = typsize_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_typsize_orDefault, RHO);
  (void)(Rsh_Fir_reg_typsize_orDefault);
  // fscale_isMissing = missing.0(fscale)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_fscale;
  Rsh_Fir_reg_fscale_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if fscale_isMissing then L3(1.0) else L3(fscale)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fscale_isMissing)) {
  // L3(1.0)
    Rsh_Fir_reg_fscale_orDefault = Rsh_const(CCP, 18);
    goto L3_;
  } else {
  // L3(fscale)
    Rsh_Fir_reg_fscale_orDefault = Rsh_Fir_reg_fscale;
    goto L3_;
  }

L3_:;
  // st fscale = fscale_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_fscale_orDefault, RHO);
  (void)(Rsh_Fir_reg_fscale_orDefault);
  // print_level_isMissing = missing.0(print_level)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_print_level;
  Rsh_Fir_reg_print_level_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args40);
  // if print_level_isMissing then L4(0.0) else L4(print_level)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_print_level_isMissing)) {
  // L4(0.0)
    Rsh_Fir_reg_print_level_orDefault = Rsh_const(CCP, 22);
    goto L4_;
  } else {
  // L4(print_level)
    Rsh_Fir_reg_print_level_orDefault = Rsh_Fir_reg_print_level;
    goto L4_;
  }

L4_:;
  // st `print.level` = print_level_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_print_level_orDefault, RHO);
  (void)(Rsh_Fir_reg_print_level_orDefault);
  // ndigit_isMissing = missing.0(ndigit)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_ndigit;
  Rsh_Fir_reg_ndigit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args41);
  // if ndigit_isMissing then L5(12.0) else L5(ndigit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ndigit_isMissing)) {
  // L5(12.0)
    Rsh_Fir_reg_ndigit_orDefault = Rsh_const(CCP, 23);
    goto L5_;
  } else {
  // L5(ndigit)
    Rsh_Fir_reg_ndigit_orDefault = Rsh_Fir_reg_ndigit;
    goto L5_;
  }

L5_:;
  // st ndigit = ndigit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_ndigit_orDefault, RHO);
  (void)(Rsh_Fir_reg_ndigit_orDefault);
  // gradtol_isMissing = missing.0(gradtol)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_gradtol;
  Rsh_Fir_reg_gradtol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args42);
  // if gradtol_isMissing then L6(1.0E-6) else L6(gradtol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_gradtol_isMissing)) {
  // L6(1.0E-6)
    Rsh_Fir_reg_gradtol_orDefault = Rsh_const(CCP, 25);
    goto L6_;
  } else {
  // L6(gradtol)
    Rsh_Fir_reg_gradtol_orDefault = Rsh_Fir_reg_gradtol;
    goto L6_;
  }

L6_:;
  // st gradtol = gradtol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_gradtol_orDefault, RHO);
  (void)(Rsh_Fir_reg_gradtol_orDefault);
  // stepmax_isMissing = missing.0(stepmax)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_stepmax;
  Rsh_Fir_reg_stepmax_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args43);
  // if stepmax_isMissing then L7() else L8(stepmax)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_stepmax_isMissing)) {
  // L7()
    goto L7_;
  } else {
  // L8(stepmax)
    Rsh_Fir_reg_stepmax_orDefault = Rsh_Fir_reg_stepmax;
    goto L8_;
  }

L7_:;
  // p4 = prom<V +>{
  //   sym1 = ldf max;
  //   base1 = ldf max in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L3() else L4();
  // L0(r5):
  //   return r5;
  // L3():
  //   sym2 = ldf sqrt;
  //   base2 = ldf sqrt in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L5() else L6();
  // L4():
  //   r4 = dyn base1(<lang `*`(1000.0, sqrt(sum(`^`(`(`(`/`(p, typsize)), 2.0))))>, 1000.0);
  //   goto L0(r4);
  // L1(r9, r10):
  //   r20 = `*`(r9, r10);
  //   max = ldf max in base;
  //   r21 = dyn max(r20, 1000.0);
  //   goto L0(r21);
  // L5():
  //   sym3 = ldf sum;
  //   base3 = ldf sum in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L7() else L8();
  // L6():
  //   r8 = dyn base2(<lang sum(`^`(`(`(`/`(p, typsize)), 2.0))>);
  //   goto L1(1000.0, r8);
  // L2(r14, r15):
  //   r19 = sqrt(r15);
  //   goto L1(r14, r19);
  // L7():
  //   p2 = ld p;
  //   p3 = force? p2;
  //   checkMissing(p3);
  //   typsize1 = ld typsize;
  //   typsize2 = force? typsize1;
  //   checkMissing(typsize2);
  //   r16 = `/`(p3, typsize2);
  //   r17 = `^`(r16, 2.0);
  //   sum = ldf sum in base;
  //   r18 = dyn sum(r17);
  //   goto L2(1000.0, r18);
  // L8():
  //   r13 = dyn base3(<lang `^`(`(`(`/`(p, typsize)), 2.0)>);
  //   goto L2(1000.0, r13);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2532465258_1, 0, NULL, CCP, RHO);
  // goto L8(p4)
  // L8(p4)
  Rsh_Fir_reg_stepmax_orDefault = Rsh_Fir_reg_p4_1;
  goto L8_;

L8_:;
  // st stepmax = stepmax_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_stepmax_orDefault, RHO);
  (void)(Rsh_Fir_reg_stepmax_orDefault);
  // steptol_isMissing = missing.0(steptol)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_steptol;
  Rsh_Fir_reg_steptol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args58);
  // if steptol_isMissing then L9(1.0E-6) else L9(steptol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_steptol_isMissing)) {
  // L9(1.0E-6)
    Rsh_Fir_reg_steptol_orDefault = Rsh_const(CCP, 25);
    goto L9_;
  } else {
  // L9(steptol)
    Rsh_Fir_reg_steptol_orDefault = Rsh_Fir_reg_steptol;
    goto L9_;
  }

L9_:;
  // st steptol = steptol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_steptol_orDefault, RHO);
  (void)(Rsh_Fir_reg_steptol_orDefault);
  // iterlim_isMissing = missing.0(iterlim)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_iterlim;
  Rsh_Fir_reg_iterlim_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args59);
  // if iterlim_isMissing then L10(100.0) else L10(iterlim)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_iterlim_isMissing)) {
  // L10(100.0)
    Rsh_Fir_reg_iterlim_orDefault = Rsh_const(CCP, 36);
    goto L10_;
  } else {
  // L10(iterlim)
    Rsh_Fir_reg_iterlim_orDefault = Rsh_Fir_reg_iterlim;
    goto L10_;
  }

L10_:;
  // st iterlim = iterlim_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_iterlim_orDefault, RHO);
  (void)(Rsh_Fir_reg_iterlim_orDefault);
  // check_analyticals_isMissing = missing.0(check_analyticals)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_check_analyticals;
  Rsh_Fir_reg_check_analyticals_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args60);
  // if check_analyticals_isMissing then L11(TRUE) else L11(check_analyticals)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_check_analyticals_isMissing)) {
  // L11(TRUE)
    Rsh_Fir_reg_check_analyticals_orDefault = Rsh_const(CCP, 10);
    goto L11_;
  } else {
  // L11(check_analyticals)
    Rsh_Fir_reg_check_analyticals_orDefault = Rsh_Fir_reg_check_analyticals;
    goto L11_;
  }

L11_:;
  // st `check.analyticals` = check_analyticals_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_check_analyticals_orDefault, RHO);
  (void)(Rsh_Fir_reg_check_analyticals_orDefault);
  // sym4 = ldf `as.integer`
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base4 = ldf `as.integer` in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard4 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L12_:;
  // st `print.level` = r24
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r24_1, RHO);
  (void)(Rsh_Fir_reg_r24_1);
  // print_level3 = ld `print.level`
  Rsh_Fir_reg_print_level3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L21_:;
  // print_level1 = ld `print.level`
  Rsh_Fir_reg_print_level1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r23 = dyn base4(<sym print.level>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_r23_1;
  goto L12_;

D0_:;
  // deopt 2 [print_level1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_print_level1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 7 [print_level3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_print_level3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // print_level2 = force? print_level1
  Rsh_Fir_reg_print_level2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_print_level1_);
  // checkMissing(print_level2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_print_level2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r25 = dyn as_integer(print_level2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_print_level2_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

L25_:;
  // print_level4 = force? print_level3
  Rsh_Fir_reg_print_level4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_print_level3_);
  // checkMissing(print_level4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_print_level4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r26 = `<`(print_level4, 0.0)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_print_level4_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args66);
  // c = `as.logical`(r26)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // if c then L13(c) else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L13(c)
    Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c1;
    goto L13_;
  } else {
  // L26()
    goto L26_;
  }

D1_:;
  // deopt 5 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L13_:;
  // c6 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_c6_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c6 then L29() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_1)) {
  // L29()
    goto L29_;
  } else {
  // L14()
    goto L14_;
  }

L24_:;
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_r25_;
  goto L12_;

L26_:;
  // print_level5 = ld `print.level`
  Rsh_Fir_reg_print_level5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 11 [c, print_level5]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_print_level5_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard5 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L27_:;
  // print_level6 = force? print_level5
  Rsh_Fir_reg_print_level6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_print_level5_);
  // checkMissing(print_level6)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_print_level6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r27 = `>`(print_level6, 2.0)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_print_level6_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args71);
  // c3 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args72);
  // c4 = `||`(c, c3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_c3_1;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args73);
  // goto L13(c4)
  // L13(c4)
  Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c4_1;
  goto L13_;

L29_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r36 = `+`(r33, r34)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_r34_1;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args74);
  // c8 = `is.object`(r36)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args75);
  // if c8 then L36() else L37(r36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L36()
    goto L36_;
  } else {
  // L37(r36)
    Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_r36_;
    goto L37_;
  }

L30_:;
  // r28 = dyn stop("'print.level' must be in {0,1,2}")
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

L33_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r35 = dyn c7(8.0, 0.0, 16.0)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r35_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L34_:;
  // r32 = dyn base5(8.0, 0.0, 16.0)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r32_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L16(1.0, r32)
  // L16(1.0, r32)
  Rsh_Fir_reg_r33_ = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r32_1;
  goto L16_;

D5_:;
  // deopt 19 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 29 [1.0, r35]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r35_1;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L17_:;
  // st msg = dx1
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // check_analyticals1 = ld `check.analyticals`
  Rsh_Fir_reg_check_analyticals1_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

L31_:;
  // goto L15()
  // L15()
  goto L15_;

L35_:;
  // goto L16(1.0, r35)
  // L16(1.0, r35)
  Rsh_Fir_reg_r33_ = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r35_1;
  goto L16_;

L36_:;
  // dr = tryDispatchBuiltin.1("[", r36)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc then L38() else L37(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L38()
    goto L38_;
  } else {
  // L37(dr)
    Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_dr;
    goto L37_;
  }

L37_:;
  // print_level7 = ld `print.level`
  Rsh_Fir_reg_print_level7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

D7_:;
  // deopt 32 [r38, 1.0, print_level7]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_print_level7_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 37 [check_analyticals1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_check_analyticals1_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L38_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L17(dx)
  // L17(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L17_;

L39_:;
  // print_level8 = force? print_level7
  Rsh_Fir_reg_print_level8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_print_level7_);
  // checkMissing(print_level8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_print_level8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r39 = `+`(1.0, print_level8)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_print_level8_;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args83);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r40 = dyn __(r38, r39)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r40_;
  goto L17_;

L40_:;
  // check_analyticals2 = force? check_analyticals1
  Rsh_Fir_reg_check_analyticals2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_analyticals1_);
  // checkMissing(check_analyticals2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_check_analyticals2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // r41 = `!`(check_analyticals2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_check_analyticals2_;
  Rsh_Fir_reg_r41_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args86);
  // c9 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r41_1;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args87);
  // if c9 then L41() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L41()
    goto L41_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym6 = ldf `.External2`
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base6 = ldf `.External2` in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard6 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L41_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 40 [msg]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r45
  return Rsh_Fir_reg_r45_1;

L42_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r42 = `+`(msg1, 6.0)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r42_1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args90);
  // st msg = r42
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r42_1, RHO);
  (void)(Rsh_Fir_reg_r42_1);
  // goto L19()
  // L19()
  goto L19_;

L44_:;
  // C_nlm = ld C_nlm
  Rsh_Fir_reg_C_nlm = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L45_:;
  // r44 = dyn base6(<sym C_nlm>, <lang function((x=), f(x, ...), NULL)>, <sym p>, <sym hessian>, <sym typsize>, <sym fscale>, <sym msg>, <sym ndigit>, <sym gradtol>, <sym stepmax>, <sym steptol>, <sym iterlim>)
  SEXP Rsh_Fir_array_args91[12];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args91[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args91[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args91[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args91[5] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args91[6] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args91[7] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args91[8] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args91[9] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args91[10] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args91[11] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names34[12];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_array_arg_names34[4] = R_MissingArg;
  Rsh_Fir_array_arg_names34[5] = R_MissingArg;
  Rsh_Fir_array_arg_names34[6] = R_MissingArg;
  Rsh_Fir_array_arg_names34[7] = R_MissingArg;
  Rsh_Fir_array_arg_names34[8] = R_MissingArg;
  Rsh_Fir_array_arg_names34[9] = R_MissingArg;
  Rsh_Fir_array_arg_names34[10] = R_MissingArg;
  Rsh_Fir_array_arg_names34[11] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 12, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L20(r44)
  // L20(r44)
  Rsh_Fir_reg_r45_1 = Rsh_Fir_reg_r44_;
  goto L20_;

D10_:;
  // deopt 49 [C_nlm]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_C_nlm;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L46_:;
  // C_nlm1 = force? C_nlm
  Rsh_Fir_reg_C_nlm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_nlm);
  // checkMissing(C_nlm1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_C_nlm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r46 = clos inner2501545716
  Rsh_Fir_reg_r46_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // p5 = ld p
  Rsh_Fir_reg_p5_1 = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

D11_:;
  // deopt 53 [p5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L47_:;
  // p6 = force? p5
  Rsh_Fir_reg_p6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p5_1);
  // checkMissing(p6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // hessian1 = ld hessian
  Rsh_Fir_reg_hessian1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

D12_:;
  // deopt 55 [hessian1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_hessian1_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L48_:;
  // hessian2 = force? hessian1
  Rsh_Fir_reg_hessian2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hessian1_);
  // checkMissing(hessian2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_hessian2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // typsize3 = ld typsize
  Rsh_Fir_reg_typsize3_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

D13_:;
  // deopt 57 [typsize3]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_typsize3_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L49_:;
  // typsize4 = force? typsize3
  Rsh_Fir_reg_typsize4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_typsize3_);
  // checkMissing(typsize4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_typsize4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // fscale1 = ld fscale
  Rsh_Fir_reg_fscale1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

D14_:;
  // deopt 59 [fscale1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_fscale1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L50_:;
  // fscale2 = force? fscale1
  Rsh_Fir_reg_fscale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fscale1_);
  // checkMissing(fscale2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_fscale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L51() else D15()
  // L51()
  goto L51_;

D15_:;
  // deopt 61 [msg2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L51_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // ndigit1 = ld ndigit
  Rsh_Fir_reg_ndigit1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

D16_:;
  // deopt 63 [ndigit1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_ndigit1_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L52_:;
  // ndigit2 = force? ndigit1
  Rsh_Fir_reg_ndigit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ndigit1_);
  // checkMissing(ndigit2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_ndigit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // gradtol1 = ld gradtol
  Rsh_Fir_reg_gradtol1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L53() else D17()
  // L53()
  goto L53_;

D17_:;
  // deopt 65 [gradtol1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_gradtol1_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L53_:;
  // gradtol2 = force? gradtol1
  Rsh_Fir_reg_gradtol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gradtol1_);
  // checkMissing(gradtol2)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_gradtol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // stepmax1 = ld stepmax
  Rsh_Fir_reg_stepmax1_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L54() else D18()
  // L54()
  goto L54_;

D18_:;
  // deopt 67 [stepmax1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_stepmax1_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L54_:;
  // stepmax2 = force? stepmax1
  Rsh_Fir_reg_stepmax2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stepmax1_);
  // checkMissing(stepmax2)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_stepmax2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // steptol1 = ld steptol
  Rsh_Fir_reg_steptol1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L55() else D19()
  // L55()
  goto L55_;

D19_:;
  // deopt 69 [steptol1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_steptol1_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L55_:;
  // steptol2 = force? steptol1
  Rsh_Fir_reg_steptol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_steptol1_);
  // checkMissing(steptol2)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_steptol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // iterlim1 = ld iterlim
  Rsh_Fir_reg_iterlim1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L56() else D20()
  // L56()
  goto L56_;

D20_:;
  // deopt 71 [iterlim1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_iterlim1_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L56_:;
  // iterlim2 = force? iterlim1
  Rsh_Fir_reg_iterlim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iterlim1_);
  // checkMissing(iterlim2)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_iterlim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // _External2 = ldf `.External2` in base
  Rsh_Fir_reg__External2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r47 = dyn _External2(C_nlm1, r46, p6, hessian2, typsize4, fscale2, msg3, ndigit2, gradtol2, stepmax2, steptol2, iterlim2)
  SEXP Rsh_Fir_array_args103[12];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_C_nlm1_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args103[3] = Rsh_Fir_reg_hessian2_;
  Rsh_Fir_array_args103[4] = Rsh_Fir_reg_typsize4_;
  Rsh_Fir_array_args103[5] = Rsh_Fir_reg_fscale2_;
  Rsh_Fir_array_args103[6] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_array_args103[7] = Rsh_Fir_reg_ndigit2_;
  Rsh_Fir_array_args103[8] = Rsh_Fir_reg_gradtol2_;
  Rsh_Fir_array_args103[9] = Rsh_Fir_reg_stepmax2_;
  Rsh_Fir_array_args103[10] = Rsh_Fir_reg_steptol2_;
  Rsh_Fir_array_args103[11] = Rsh_Fir_reg_iterlim2_;
  SEXP Rsh_Fir_array_arg_names35[12];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_array_arg_names35[4] = R_MissingArg;
  Rsh_Fir_array_arg_names35[5] = R_MissingArg;
  Rsh_Fir_array_arg_names35[6] = R_MissingArg;
  Rsh_Fir_array_arg_names35[7] = R_MissingArg;
  Rsh_Fir_array_arg_names35[8] = R_MissingArg;
  Rsh_Fir_array_arg_names35[9] = R_MissingArg;
  Rsh_Fir_array_arg_names35[10] = R_MissingArg;
  Rsh_Fir_array_arg_names35[11] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External2_, 12, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L57() else D21()
  // L57()
  goto L57_;

D21_:;
  // deopt 74 [r47]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L20(r47)
  // L20(r47)
  Rsh_Fir_reg_r45_1 = Rsh_Fir_reg_r47_;
  goto L20_;
}
SEXP Rsh_Fir_user_promise_inner2532465258_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2532465258/0: expected 0, got %d", NCAPTURES);

  // sym = ldf rep
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
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
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r2 = dyn rep(1.0, <lang length(p)>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(1.0, <lang length(p)>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2532465258_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_typsize1_;
  SEXP Rsh_Fir_reg_typsize2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r21_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2532465258/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf max
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base1 = ldf max in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard1 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_1;

L3_:;
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard2 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r4 = dyn base1(<lang `*`(1000.0, sqrt(sum(`^`(`(`(`/`(p, typsize)), 2.0))))>, 1000.0)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L0_;

L1_:;
  // r20 = `*`(r9, r10)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args47);
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r21 = dyn max(r20, 1000.0)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r21_1;
  goto L0_;

L5_:;
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard3 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r8 = dyn base2(<lang sum(`^`(`(`(`/`(p, typsize)), 2.0))>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L1(1000.0, r8)
  // L1(1000.0, r8)
  Rsh_Fir_reg_r9_1 = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r8_;
  goto L1_;

L2_:;
  // r19 = sqrt(r15)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args51);
  // goto L1(r14, r19)
  // L1(r14, r19)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r19_1;
  goto L1_;

L7_:;
  // p2 = ld p
  Rsh_Fir_reg_p2_1 = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // p3 = force? p2
  Rsh_Fir_reg_p3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_1);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // typsize1 = ld typsize
  Rsh_Fir_reg_typsize1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // typsize2 = force? typsize1
  Rsh_Fir_reg_typsize2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_typsize1_);
  // checkMissing(typsize2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_typsize2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r16 = `/`(p3, typsize2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_typsize2_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args54);
  // r17 = `^`(r16, 2.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args55);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r18 = dyn sum(r17)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L2(1000.0, r18)
  // L2(1000.0, r18)
  Rsh_Fir_reg_r14_1 = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r18_1;
  goto L2_;

L8_:;
  // r13 = dyn base3(<lang `^`(`(`(`/`(p, typsize)), 2.0)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L2(1000.0, r13)
  // L2(1000.0, r13)
  Rsh_Fir_reg_r14_1 = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r13_1;
  goto L2_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_f2;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_reg_r1_2;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // f = ldf f
  Rsh_Fir_reg_f2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, 0, NULL, CCP, RHO);
  // ddd = ld `...`
  Rsh_Fir_reg_ddd1 = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // r1 = dyn f[, `...`](p, ddd)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f2, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_2;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2501545716/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_function_inner741670229_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner741670229 dynamic dispatch ([x, a])

  return Rsh_Fir_user_version_inner741670229_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner741670229_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner741670229 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner741670229/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_a;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_3;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_a2_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_sum1;
  SEXP Rsh_Fir_reg_r4_2;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_a = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st a = a
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_a, RHO);
  (void)(Rsh_Fir_reg_a);
  // sym = ldf sum
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base = ldf sum in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_3;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang `^`(`(`(`-`(x, a)), 2.0)>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_3 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // a1 = ld a
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [x2, a1]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_a1_;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L4_:;
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // r2 = `-`(x2, a2)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_a2_;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args110);
  // r3 = `^`(r2, 2.0)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args111);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r4 = dyn sum(r3)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r4_2;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_3 = Rsh_Fir_reg_r4_2;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
