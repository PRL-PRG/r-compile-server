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
SEXP Rsh_Fir_user_function_inner2110719471_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2110719471_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2110719471_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2110719471_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_cat1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_encodeString1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_encodeString2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_encodeString3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_encodeString4_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_encodeString5_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_encodeString6_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2110719471
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2110719471_, RHO, CCP);
  // st encodeString = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st x = "ab\u0008c\ndef"
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn print(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
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
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn cat(p1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 13 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p3 = prom<V +>{
  //   encodeString = ldf encodeString;
  //   p2 = prom<V +>{
  //     x4 = ld x;
  //     x5 = force? x4;
  //     checkMissing(x5);
  //     return x5;
  //   };
  //   r6 = dyn encodeString(p2);
  //   return r6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn cat1[, , sep](p3, "\n", "")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p4 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r10 = dyn factor(p4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L8() else D7()
  // L8()
  goto L8_;

D7_:;
  // deopt 24 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // st x = r12
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // encodeString1 = ldf encodeString
  Rsh_Fir_reg_encodeString1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

L9_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r13 = dyn c("a", "ab", "abcde")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

L10_:;
  // r11 = dyn base("a", "ab", "abcde")
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;

D8_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L12_:;
  // p5 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r15 = dyn encodeString1(p5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // encodeString2 = ldf encodeString
  Rsh_Fir_reg_encodeString2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p6 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r17 = dyn encodeString2(p6, 2.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString2_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 41 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // encodeString3 = ldf encodeString
  Rsh_Fir_reg_encodeString3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p7 = prom<V +>{
  //   x12 = ld x;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   return x13;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r19 = dyn encodeString3[, width](p7, NA_LGL)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString3_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 47 [r19]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // encodeString4 = ldf encodeString
  Rsh_Fir_reg_encodeString4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p8 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r21 = dyn encodeString4[, width, justify](p8, NA_LGL, "c")
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString4_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 55 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // encodeString5 = ldf encodeString
  Rsh_Fir_reg_encodeString5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p9 = prom<V +>{
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   return x17;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r23 = dyn encodeString5[, width, justify](p9, NA_LGL, "r")
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString5_, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 63 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // encodeString6 = ldf encodeString
  Rsh_Fir_reg_encodeString6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p10 = prom<V +>{
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   return x19;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r25 = dyn encodeString6[, width, quote, justify](p10, NA_LGL, "'", "r")
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString6_, 4, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L23() else D20()
  // L23()
  goto L23_;

D20_:;
  // deopt 73 [r25]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_encodeString;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // encodeString = ldf encodeString
  Rsh_Fir_reg_encodeString = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p2 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r6 = dyn encodeString(p2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return x13
  return Rsh_Fir_reg_x13_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return x17
  return Rsh_Fir_reg_x17_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return x19
  return Rsh_Fir_reg_x19_;
}
SEXP Rsh_Fir_user_function_inner2110719471_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2110719471 dynamic dispatch ([x, width, quote, `na.encode`, justify])

  return Rsh_Fir_user_version_inner2110719471_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2110719471_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2110719471 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2110719471/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_width;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_na_encode;
  SEXP Rsh_Fir_reg_justify;
  SEXP Rsh_Fir_reg_width_isMissing;
  SEXP Rsh_Fir_reg_width_orDefault;
  SEXP Rsh_Fir_reg_quote_isMissing;
  SEXP Rsh_Fir_reg_quote_orDefault;
  SEXP Rsh_Fir_reg_na_encode_isMissing;
  SEXP Rsh_Fir_reg_na_encode_orDefault;
  SEXP Rsh_Fir_reg_justify_isMissing;
  SEXP Rsh_Fir_reg_justify_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_attributes;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_at;
  SEXP Rsh_Fir_reg_at1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_attributes__;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_oldClass__;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_match_arg;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_reg_width1_;
  SEXP Rsh_Fir_reg_width2_;
  SEXP Rsh_Fir_reg_quote1_;
  SEXP Rsh_Fir_reg_quote2_;
  SEXP Rsh_Fir_reg_justify3_;
  SEXP Rsh_Fir_reg_justify4_;
  SEXP Rsh_Fir_reg_na_encode1_;
  SEXP Rsh_Fir_reg_na_encode2_;
  SEXP Rsh_Fir_reg_encodeString1;
  SEXP Rsh_Fir_reg_r23_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_width = PARAMS[1];
  Rsh_Fir_reg_quote = PARAMS[2];
  Rsh_Fir_reg_na_encode = PARAMS[3];
  Rsh_Fir_reg_justify = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // width_isMissing = missing.0(width)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_width;
  Rsh_Fir_reg_width_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if width_isMissing then L0(0) else L0(width)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_width_isMissing)) {
  // L0(0)
    Rsh_Fir_reg_width_orDefault = Rsh_const(CCP, 21);
    goto L0_;
  } else {
  // L0(width)
    Rsh_Fir_reg_width_orDefault = Rsh_Fir_reg_width;
    goto L0_;
  }

L0_:;
  // st width = width_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_width_orDefault, RHO);
  (void)(Rsh_Fir_reg_width_orDefault);
  // quote_isMissing = missing.0(quote)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_quote;
  Rsh_Fir_reg_quote_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args25);
  // if quote_isMissing then L1("") else L1(quote)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quote_isMissing)) {
  // L1("")
    Rsh_Fir_reg_quote_orDefault = Rsh_const(CCP, 6);
    goto L1_;
  } else {
  // L1(quote)
    Rsh_Fir_reg_quote_orDefault = Rsh_Fir_reg_quote;
    goto L1_;
  }

L1_:;
  // st quote = quote_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_quote_orDefault, RHO);
  (void)(Rsh_Fir_reg_quote_orDefault);
  // na_encode_isMissing = missing.0(na_encode)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_na_encode;
  Rsh_Fir_reg_na_encode_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args26);
  // if na_encode_isMissing then L2(TRUE) else L2(na_encode)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_encode_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_na_encode_orDefault = Rsh_const(CCP, 22);
    goto L2_;
  } else {
  // L2(na_encode)
    Rsh_Fir_reg_na_encode_orDefault = Rsh_Fir_reg_na_encode;
    goto L2_;
  }

L2_:;
  // st `na.encode` = na_encode_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_na_encode_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_encode_orDefault);
  // justify_isMissing = missing.0(justify)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_justify;
  Rsh_Fir_reg_justify_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args27);
  // if justify_isMissing then L3() else L4(justify)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_justify_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(justify)
    Rsh_Fir_reg_justify_orDefault = Rsh_Fir_reg_justify;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("left", "right", "centre", "none");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("left", "right", "centre", "none");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2110719471_, 0, NULL, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_justify_orDefault = Rsh_Fir_reg_p1;
  goto L4_;

L4_:;
  // st justify = justify_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_justify_orDefault, RHO);
  (void)(Rsh_Fir_reg_justify_orDefault);
  // sym1 = ldf attributes
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base1 = ldf attributes in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L5_:;
  // st at = r5
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf `as.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base2 = ldf `as.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L10_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_1;
  goto L5_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L6_:;
  // st x = r8
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // at = ld at
  Rsh_Fir_reg_at = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L12_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r6 = dyn attributes(x2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L14_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L15_:;
  // r7 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L6_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 [x3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 14 [at]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_at;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_1;
  goto L5_;

L16_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r9 = dyn as_character(x4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L18_:;
  // at1 = force? at
  Rsh_Fir_reg_at1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at);
  // checkMissing(at1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_at1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

D3_:;
  // deopt 12 [r9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 17 [at1, l, at1]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_at1_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_at1_;
  Rsh_Fir_deopt(17, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_;
  goto L6_;

L19_:;
  // r10 = dyn attributes__(l, NULL, at1)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_at1_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

D6_:;
  // deopt 19 [at1, r10]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_at1_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L20_:;
  // st x = r10
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // oldClass__ = ldf `oldClass<-`
  Rsh_Fir_reg_oldClass__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 24 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_const(CCP, 32);
  Rsh_Fir_deopt(24, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L21_:;
  // r11 = dyn oldClass__(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass__, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

D8_:;
  // deopt 26 [NULL, r11]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L22_:;
  // st x = r11
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L7_:;
  // r20 = `-`(r13, 1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args43);
  // st justify = r20
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym5 = ldf `.Internal`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base5 = ldf `.Internal` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard5 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L23_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

L24_:;
  // r12 = dyn base3(<lang match.arg(justify)>, <lang c("left", "right", "centre", "none")>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r12_1;
  goto L7_;

D9_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;

L25_:;
  // p1 = prom<V +>{
  //   justify1 = ld justify;
  //   justify2 = force? justify1;
  //   checkMissing(justify2);
  //   return justify2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2110719471_1, 0, NULL, CCP, RHO);
  // r15 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

L31_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

L32_:;
  // r21 = dyn base5(<lang encodeString(x, width, quote, justify, na.encode)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L9(r21)
  // L9(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_1;
  goto L9_;

D10_:;
  // deopt 33 [r15]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 51 [x5]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x5_1;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L26_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L33_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // width1 = ld width
  Rsh_Fir_reg_width1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

D14_:;
  // deopt 53 [width1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_width1_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L8_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r19 = dyn match(r15, r17, NA_INT, NULL)
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

L27_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r18 = dyn c1("left", "right", "centre", "none")
  SEXP Rsh_Fir_array_args52[4];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 4, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L28_:;
  // r16 = dyn base4("left", "right", "centre", "none")
  SEXP Rsh_Fir_array_args53[4];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 4, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r16_;
  goto L8_;

L34_:;
  // width2 = force? width1
  Rsh_Fir_reg_width2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_width1_);
  // checkMissing(width2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_width2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // quote1 = ld quote
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L35() else D15()
  // L35()
  goto L35_;

D11_:;
  // deopt 41 [r18]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 45 [r19]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 55 [quote1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_quote1_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r17_1 = Rsh_Fir_reg_r18_;
  goto L8_;

L30_:;
  // goto L7(r19)
  // L7(r19)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r19_1;
  goto L7_;

L35_:;
  // quote2 = force? quote1
  Rsh_Fir_reg_quote2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quote1_);
  // checkMissing(quote2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_quote2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // justify3 = ld justify
  Rsh_Fir_reg_justify3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L36() else D16()
  // L36()
  goto L36_;

D16_:;
  // deopt 57 [justify3]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_justify3_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L36_:;
  // justify4 = force? justify3
  Rsh_Fir_reg_justify4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_justify3_);
  // checkMissing(justify4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_justify4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // na_encode1 = ld `na.encode`
  Rsh_Fir_reg_na_encode1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L37() else D17()
  // L37()
  goto L37_;

D17_:;
  // deopt 59 [na_encode1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_na_encode1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L37_:;
  // na_encode2 = force? na_encode1
  Rsh_Fir_reg_na_encode2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_encode1_);
  // checkMissing(na_encode2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_na_encode2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // encodeString = ldf encodeString in base
  Rsh_Fir_reg_encodeString1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r23 = dyn encodeString(x6, width2, quote2, justify4, na_encode2)
  SEXP Rsh_Fir_array_args58[5];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_width2_;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_quote2_;
  Rsh_Fir_array_args58[3] = Rsh_Fir_reg_justify4_;
  Rsh_Fir_array_args58[4] = Rsh_Fir_reg_na_encode2_;
  SEXP Rsh_Fir_array_arg_names27[5];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_array_arg_names27[4] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_encodeString1, 5, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L38() else D18()
  // L38()
  goto L38_;

D18_:;
  // deopt 62 [r23]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_1;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner2110719471_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2110719471/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
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
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn c("left", "right", "centre", "none")
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 4, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("left", "right", "centre", "none")
  SEXP Rsh_Fir_array_args30[4];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 4, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2110719471_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_justify1_;
  SEXP Rsh_Fir_reg_justify2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2110719471/0: expected 0, got %d", NCAPTURES);

  // justify1 = ld justify
  Rsh_Fir_reg_justify1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // justify2 = force? justify1
  Rsh_Fir_reg_justify2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_justify1_);
  // checkMissing(justify2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_justify2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return justify2
  return Rsh_Fir_reg_justify2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
