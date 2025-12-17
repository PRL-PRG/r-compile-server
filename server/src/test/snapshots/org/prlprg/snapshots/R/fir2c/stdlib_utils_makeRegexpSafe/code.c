#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1236783023
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1236783023_, RHO, CCP);
  // st makeRegexpSafe = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1236783023 dynamic dispatch ([s])

  return Rsh_Fir_user_version_inner1236783023_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1236783023 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1236783023/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_gsub1_;  // gsub1
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_gsub2_;  // gsub2
  SEXP Rsh_Fir_reg_s5_;  // s5
  SEXP Rsh_Fir_reg_s6_;  // s6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_gsub3_;  // gsub3
  SEXP Rsh_Fir_reg_s7_;  // s7
  SEXP Rsh_Fir_reg_s8_;  // s8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_gsub4_;  // gsub4
  SEXP Rsh_Fir_reg_s9_;  // s9
  SEXP Rsh_Fir_reg_s10_;  // s10
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_gsub5_;  // gsub5
  SEXP Rsh_Fir_reg_s11_;  // s11
  SEXP Rsh_Fir_reg_s12_;  // s12
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_gsub6_;  // gsub6
  SEXP Rsh_Fir_reg_s13_;  // s13
  SEXP Rsh_Fir_reg_s14_;  // s14
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_gsub7_;  // gsub7
  SEXP Rsh_Fir_reg_s15_;  // s15
  SEXP Rsh_Fir_reg_s16_;  // s16
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_gsub8_;  // gsub8
  SEXP Rsh_Fir_reg_s17_;  // s17
  SEXP Rsh_Fir_reg_s18_;  // s18
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_s19_;  // s19
  SEXP Rsh_Fir_reg_s20_;  // s20

  // Bind parameters
  Rsh_Fir_reg_s = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   s1 = ld s;
  //   s2 = force? s1;
  //   checkMissing(s2);
  //   return s2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_, CCP, RHO);
  // r1 = dyn gsub[, , , fixed]("\\", "\\\\", p, TRUE)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st s = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // gsub1 = ldf gsub
  Rsh_Fir_reg_gsub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   s3 = ld s;
  //   s4 = force? s3;
  //   checkMissing(s4);
  //   return s4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_1, CCP, RHO);
  // r3 = dyn gsub1[, , , fixed]("(", "\\(", p1, TRUE)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub1_, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // st s = r3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // gsub2 = ldf gsub
  Rsh_Fir_reg_gsub2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   s5 = ld s;
  //   s6 = force? s5;
  //   checkMissing(s6);
  //   return s6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_2, CCP, RHO);
  // r5 = dyn gsub2[, , , fixed]("*", "\\*", p2, TRUE)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub2_, 4, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 25 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st s = r5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // gsub3 = ldf gsub
  Rsh_Fir_reg_gsub3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   s7 = ld s;
  //   s8 = force? s7;
  //   checkMissing(s8);
  //   return s8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_3, CCP, RHO);
  // r7 = dyn gsub3[, , , fixed]("+", "\\+", p3, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub3_, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 34 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // st s = r7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // gsub4 = ldf gsub
  Rsh_Fir_reg_gsub4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   s9 = ld s;
  //   s10 = force? s9;
  //   checkMissing(s10);
  //   return s10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_4, CCP, RHO);
  // r9 = dyn gsub4[, , , fixed]("?", "\\?", p4, TRUE)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub4_, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 43 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // st s = r9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // gsub5 = ldf gsub
  Rsh_Fir_reg_gsub5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p5 = prom<V +>{
  //   s11 = ld s;
  //   s12 = force? s11;
  //   checkMissing(s12);
  //   return s12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_5, CCP, RHO);
  // r11 = dyn gsub5[, , , fixed]("[", "\\[", p5, TRUE)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub5_, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 52 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // st s = r11
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // gsub6 = ldf gsub
  Rsh_Fir_reg_gsub6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p6 = prom<V +>{
  //   s13 = ld s;
  //   s14 = force? s13;
  //   checkMissing(s14);
  //   return s14;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_6, CCP, RHO);
  // r13 = dyn gsub6[, , , fixed]("{", "\\{", p6, TRUE)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub6_, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 61 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // st s = r13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // gsub7 = ldf gsub
  Rsh_Fir_reg_gsub7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p7 = prom<V +>{
  //   s15 = ld s;
  //   s16 = force? s15;
  //   checkMissing(s16);
  //   return s16;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_7, CCP, RHO);
  // r15 = dyn gsub7[, , , fixed](".", "\\.", p7, TRUE)
  SEXP Rsh_Fir_array_args15[4];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub7_, 4, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L15() else D15()
  // L15()
  goto L15_;

D15_:;
  // deopt 70 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // st s = r15
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // gsub8 = ldf gsub
  Rsh_Fir_reg_gsub8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L16() else D16()
  // L16()
  goto L16_;

D16_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p8 = prom<V +>{
  //   s17 = ld s;
  //   s18 = force? s17;
  //   checkMissing(s18);
  //   return s18;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_8, CCP, RHO);
  // r17 = dyn gsub8[, , , fixed]("^", "\\^", p8, TRUE)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub8_, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L17() else D17()
  // L17()
  goto L17_;

D17_:;
  // deopt 79 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // st s = r17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // s19 = ld s
  Rsh_Fir_reg_s19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D18()
  // L18()
  goto L18_;

D18_:;
  // deopt 81 [s19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_s19_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L18_:;
  // s20 = force? s19
  Rsh_Fir_reg_s20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s19_);
  // checkMissing(s20)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return s20
  return Rsh_Fir_reg_s20_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO) {
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return s2
  return Rsh_Fir_reg_s2_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO) {
  // s3 = ld s
  Rsh_Fir_reg_s3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s4 = force? s3
  Rsh_Fir_reg_s4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s3_);
  // checkMissing(s4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return s4
  return Rsh_Fir_reg_s4_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO) {
  // s5 = ld s
  Rsh_Fir_reg_s5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s6 = force? s5
  Rsh_Fir_reg_s6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s5_);
  // checkMissing(s6)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return s6
  return Rsh_Fir_reg_s6_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_3(SEXP CCP, SEXP RHO) {
  // s7 = ld s
  Rsh_Fir_reg_s7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s8 = force? s7
  Rsh_Fir_reg_s8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s7_);
  // checkMissing(s8)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return s8
  return Rsh_Fir_reg_s8_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_4(SEXP CCP, SEXP RHO) {
  // s9 = ld s
  Rsh_Fir_reg_s9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s10 = force? s9
  Rsh_Fir_reg_s10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s9_);
  // checkMissing(s10)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return s10
  return Rsh_Fir_reg_s10_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_5(SEXP CCP, SEXP RHO) {
  // s11 = ld s
  Rsh_Fir_reg_s11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s12 = force? s11
  Rsh_Fir_reg_s12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s11_);
  // checkMissing(s12)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return s12
  return Rsh_Fir_reg_s12_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_6(SEXP CCP, SEXP RHO) {
  // s13 = ld s
  Rsh_Fir_reg_s13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s14 = force? s13
  Rsh_Fir_reg_s14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s13_);
  // checkMissing(s14)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return s14
  return Rsh_Fir_reg_s14_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_7(SEXP CCP, SEXP RHO) {
  // s15 = ld s
  Rsh_Fir_reg_s15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s16 = force? s15
  Rsh_Fir_reg_s16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s15_);
  // checkMissing(s16)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return s16
  return Rsh_Fir_reg_s16_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_8(SEXP CCP, SEXP RHO) {
  // s17 = ld s
  Rsh_Fir_reg_s17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s18 = force? s17
  Rsh_Fir_reg_s18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s17_);
  // checkMissing(s18)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return s18
  return Rsh_Fir_reg_s18_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
