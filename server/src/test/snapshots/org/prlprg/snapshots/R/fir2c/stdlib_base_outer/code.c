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
SEXP Rsh_Fir_user_function_inner3229052351_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3229052351_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3229052351_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3229052351_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3229052351_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3229052351_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3229052351_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg__o_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_outer1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg__o_1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r22_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3229052351
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3229052351_, RHO, CCP);
  // st outer = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9>
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 6 [x]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [x1, l, x1]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(9, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // r1 = dyn names__(l, NULL, x1)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 11 [x1, r1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L2_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // _o_ = ldf `%o%`
  Rsh_Fir_reg__o_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn _o_(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__o_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 17 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L4_:;
  // st y = <int 2, 3, 4, 5, 6, 7, 8>
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r6 = dyn paste[, , sep](p2, ":", "")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 27 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L6_:;
  // l1 = ld y
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 29 [r6, l1, r6]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L7_:;
  // r7 = dyn names__1(l1, NULL, r6)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 31 [r6, r7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L8_:;
  // st y = r7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p3 = prom<V +>{
  //   y2 = ld y;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   return y3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   __ = ld `^`;
  //   __1 = force? __;
  //   checkMissing(__1);
  //   return __1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r11 = dyn outer(p3, p4, p5)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 38 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L10_:;
  // outer1 = ldf outer
  Rsh_Fir_reg_outer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p6 = prom<V +>{
  //   month_abb = ld `month.abb`;
  //   month_abb1 = force? month_abb;
  //   checkMissing(month_abb1);
  //   return month_abb1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   return <int 1999, 2000, 2001, 2002, 2003>;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   paste1 = ld paste;
  //   paste2 = force? paste1;
  //   checkMissing(paste2);
  //   return paste2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r15 = dyn outer1[, , FUN](p6, p7, p8)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer1_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 45 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L12_:;
  // _o_1 = ldf `%o%`
  Rsh_Fir_reg__o_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p11 = prom<V +>{
  //   _o_2 = ldf `%o%`;
  //   p9 = prom<V +>{
  //     x8 = ld x;
  //     x9 = force? x8;
  //     checkMissing(x9);
  //     return x9;
  //   };
  //   p10 = prom<V +>{
  //     x10 = ld x;
  //     x11 = force? x10;
  //     checkMissing(x11);
  //     return x11;
  //   };
  //   r18 = dyn _o_2(p9, p10);
  //   return r18;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   y4 = ld y;
  //   y5 = force? y4;
  //   checkMissing(y5);
  //   c = `is.object`(y5);
  //   if c then L1() else L2(y5);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", y5);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(y7):
  //   __2 = ldf `[` in base;
  //   r20 = dyn __2(y7, <int 1, 2, 3>);
  //   goto L0(r20);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r22 = dyn _o_1(p11, p12)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__o_1_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L14() else D14()
  // L14()
  goto L14_;

D14_:;
  // deopt 50 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
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
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return y3
  return Rsh_Fir_reg_y3_;
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
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg___1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ld `^`
  Rsh_Fir_reg___ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // __1 = force? __
  Rsh_Fir_reg___1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___);
  // checkMissing(__1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg___1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return __1
  return Rsh_Fir_reg___1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_month_abb;
  SEXP Rsh_Fir_reg_month_abb1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // month_abb = ld `month.abb`
  Rsh_Fir_reg_month_abb = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // month_abb1 = force? month_abb
  Rsh_Fir_reg_month_abb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month_abb);
  // checkMissing(month_abb1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_month_abb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return month_abb1
  return Rsh_Fir_reg_month_abb1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1999, 2000, 2001, 2002, 2003>
  return Rsh_const(CCP, 14);
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_paste2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // paste1 = ld paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // paste2 = force? paste1
  Rsh_Fir_reg_paste2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paste1_);
  // checkMissing(paste2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_paste2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return paste2
  return Rsh_Fir_reg_paste2_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__o_2_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _o_2 = ldf `%o%`
  Rsh_Fir_reg__o_2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // p9 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r18 = dyn _o_2(p9, p10)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__o_2_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c = `is.object`(y5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args19);
  // if c then L1() else L2(y5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(y5)
    Rsh_Fir_reg_y7_ = Rsh_Fir_reg_y5_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", y5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_y5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_y7_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r20 = dyn __2(y7, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3229052351_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3229052351 dynamic dispatch ([X, Y, FUN, `...`])

  return Rsh_Fir_user_version_inner3229052351_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3229052351_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3229052351 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3229052351/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_X;
  SEXP Rsh_Fir_reg_Y;
  SEXP Rsh_Fir_reg_FUN;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_FUN_isMissing;
  SEXP Rsh_Fir_reg_FUN_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_X1_;
  SEXP Rsh_Fir_reg_X2_;
  SEXP Rsh_Fir_reg_is_array;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_X3_;
  SEXP Rsh_Fir_reg_X4_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_X5_;
  SEXP Rsh_Fir_reg_X6_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_nx;
  SEXP Rsh_Fir_reg_nx1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_X7_;
  SEXP Rsh_Fir_reg_X8_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_X9_;
  SEXP Rsh_Fir_reg_X10_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_no_nx;
  SEXP Rsh_Fir_reg_no_nx1_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_X11_;
  SEXP Rsh_Fir_reg_X12_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_Y1_;
  SEXP Rsh_Fir_reg_Y2_;
  SEXP Rsh_Fir_reg_is_array1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_Y3_;
  SEXP Rsh_Fir_reg_Y4_;
  SEXP Rsh_Fir_reg_dim1_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_Y5_;
  SEXP Rsh_Fir_reg_Y6_;
  SEXP Rsh_Fir_reg_dimnames1_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_ny;
  SEXP Rsh_Fir_reg_ny1_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_Y7_;
  SEXP Rsh_Fir_reg_Y8_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_Y9_;
  SEXP Rsh_Fir_reg_Y10_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_no_ny;
  SEXP Rsh_Fir_reg_no_ny1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_Y11_;
  SEXP Rsh_Fir_reg_Y12_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_FUN1_;
  SEXP Rsh_Fir_reg_FUN2_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_FUN3_;
  SEXP Rsh_Fir_reg_FUN4_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_as_vector1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_tcrossprod;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_match_fun;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_X15_;
  SEXP Rsh_Fir_reg_X16_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_rep1_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_FUN7_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_dX;
  SEXP Rsh_Fir_reg_dX1_;
  SEXP Rsh_Fir_reg_dY;
  SEXP Rsh_Fir_reg_dY1_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_no_nx2_;
  SEXP Rsh_Fir_reg_no_nx3_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_no_ny2_;
  SEXP Rsh_Fir_reg_no_ny3_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_no_nx4_;
  SEXP Rsh_Fir_reg_no_nx5_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_sym25_;
  SEXP Rsh_Fir_reg_base25_;
  SEXP Rsh_Fir_reg_guard25_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_sym26_;
  SEXP Rsh_Fir_reg_base26_;
  SEXP Rsh_Fir_reg_guard26_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_dX2_;
  SEXP Rsh_Fir_reg_dX3_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_no_ny4_;
  SEXP Rsh_Fir_reg_no_ny5_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_sym27_;
  SEXP Rsh_Fir_reg_base27_;
  SEXP Rsh_Fir_reg_guard27_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_sym28_;
  SEXP Rsh_Fir_reg_base28_;
  SEXP Rsh_Fir_reg_guard28_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_dY2_;
  SEXP Rsh_Fir_reg_dY3_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_vector1_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_sym29_;
  SEXP Rsh_Fir_reg_base29_;
  SEXP Rsh_Fir_reg_guard29_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_nx2_;
  SEXP Rsh_Fir_reg_nx3_;
  SEXP Rsh_Fir_reg_ny2_;
  SEXP Rsh_Fir_reg_ny3_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_l1_1;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_robj;
  SEXP Rsh_Fir_reg_robj1_;

  // Bind parameters
  Rsh_Fir_reg_X = PARAMS[0];
  Rsh_Fir_reg_Y = PARAMS[1];
  Rsh_Fir_reg_FUN = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st X = X
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_X, RHO);
  (void)(Rsh_Fir_reg_X);
  // st Y = Y
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_Y, RHO);
  (void)(Rsh_Fir_reg_Y);
  // FUN_isMissing = missing.0(FUN)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_FUN;
  Rsh_Fir_reg_FUN_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args25);
  // if FUN_isMissing then L0("*") else L0(FUN)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_FUN_isMissing)) {
  // L0("*")
    Rsh_Fir_reg_FUN_orDefault = Rsh_const(CCP, 21);
    goto L0_;
  } else {
  // L0(FUN)
    Rsh_Fir_reg_FUN_orDefault = Rsh_Fir_reg_FUN;
    goto L0_;
  }

L0_:;
  // st FUN = FUN_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_FUN_orDefault, RHO);
  (void)(Rsh_Fir_reg_FUN_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.array`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf `is.array` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c then L54() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L54()
    goto L54_;
  } else {
  // L2()
    goto L2_;
  }

L50_:;
  // X1 = ld X
  Rsh_Fir_reg_X1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L52() else D0()
  // L52()
  goto L52_;

L51_:;
  // r = dyn base(<sym X>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [X1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard4 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L6_:;
  // sym9 = ldf `is.array`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base9 = ldf `is.array` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard9 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L52_:;
  // X2 = force? X1
  Rsh_Fir_reg_X2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X1_);
  // checkMissing(X2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_X2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // is_array = ldf `is.array` in base
  Rsh_Fir_reg_is_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r2 = dyn is_array(X2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_X2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L53() else D1()
  // L53()
  goto L53_;

L54_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard1 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L3_:;
  // st dX = r4
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // sym2 = ldf dimnames
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base2 = ldf dimnames in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard2 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L7_:;
  // st dX = r13
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard5 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L13_:;
  // c4 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c4 then L91() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L91()
    goto L91_;
  } else {
  // L14()
    goto L14_;
  }

L53_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

L55_:;
  // X3 = ld X
  Rsh_Fir_reg_X3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L57() else D2()
  // L57()
  goto L57_;

L56_:;
  // r3 = dyn base1(<sym X>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L3_;

L67_:;
  // X7 = ld X
  Rsh_Fir_reg_X7_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L69() else D7()
  // L69()
  goto L69_;

L68_:;
  // r12 = dyn base4(<sym X>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L7_;

L87_:;
  // Y1 = ld Y
  Rsh_Fir_reg_Y1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L89() else D15()
  // L89()
  goto L89_;

L88_:;
  // r27 = dyn base9(<sym Y>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(r27)
  // L13(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L13_;

D2_:;
  // deopt 8 [X3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_X3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 27 [X7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_X7_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 59 [Y1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_Y1_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L4_:;
  // st nx = r7
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard3 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L8_:;
  // st `no.nx` = r16
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // no_nx = ld `no.nx`
  Rsh_Fir_reg_no_nx = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L77() else D11()
  // L77()
  goto L77_;

L14_:;
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard13 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L18_:;
  // sym18 = ldf `is.character`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base18 = ldf `is.character` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard18 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L57_:;
  // X4 = force? X3
  Rsh_Fir_reg_X4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X3_);
  // checkMissing(X4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_X4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r5 = dyn dim(X4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_X4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L58() else D3()
  // L58()
  goto L58_;

L59_:;
  // X5 = ld X
  Rsh_Fir_reg_X5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L61() else D4()
  // L61()
  goto L61_;

L60_:;
  // r6 = dyn base2(<sym X>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L4_;

L69_:;
  // X8 = force? X7
  Rsh_Fir_reg_X8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X7_);
  // checkMissing(X8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_X8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r14 = dyn length(X8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_X8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L70() else D8()
  // L70()
  goto L70_;

L71_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard6 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L72_:;
  // r15 = dyn base5(<lang names(X)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_1;
  goto L8_;

L89_:;
  // Y2 = force? Y1
  Rsh_Fir_reg_Y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y1_);
  // checkMissing(Y2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_Y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // is_array1 = ldf `is.array` in base
  Rsh_Fir_reg_is_array1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r29 = dyn is_array1(Y2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_Y2_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L90() else D16()
  // L90()
  goto L90_;

L91_:;
  // sym10 = ldf dim
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base10 = ldf dim in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard10 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 [X5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_X5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 30 [r14]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 41 [no_nx]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_no_nx;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 62 [r29]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L5_:;
  // st `no.nx` = r10
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // goto L6()
  // L6()
  goto L6_;

L9_:;
  // c2 = `==`(r18, NULL)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // goto L8(c2)
  // L8(c2)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_c2_;
  goto L8_;

L15_:;
  // st dY = r31
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym11 = ldf dimnames
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base11 = ldf dimnames in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard11 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L19_:;
  // st dY = r40
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym14 = ldf `is.null`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base14 = ldf `is.null` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard14 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L25_:;
  // c9 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // if c9 then L127() else L26(c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L127()
    goto L127_;
  } else {
  // L26(c9)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
    goto L26_;
  }

L58_:;
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_;
  goto L3_;

L61_:;
  // X6 = force? X5
  Rsh_Fir_reg_X6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X5_);
  // checkMissing(X6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_X6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r8 = dyn dimnames(X6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_X6_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L62() else D5()
  // L62()
  goto L62_;

L63_:;
  // nx = ld nx
  Rsh_Fir_reg_nx = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L65() else D6()
  // L65()
  goto L65_;

L64_:;
  // r9 = dyn base3(<sym nx>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

L70_:;
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L7_;

L73_:;
  // X9 = ld X
  Rsh_Fir_reg_X9_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L75() else D9()
  // L75()
  goto L75_;

L74_:;
  // r17 = dyn base6(<sym X>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_;
  goto L9_;

L77_:;
  // no_nx1 = force? no_nx
  Rsh_Fir_reg_no_nx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no_nx);
  // checkMissing(no_nx1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_no_nx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r20 = `!`(no_nx1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_no_nx1_;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args62);
  // c3 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c3 then L78() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L78()
    goto L78_;
  } else {
  // L10()
    goto L10_;
  }

L90_:;
  // goto L13(r29)
  // L13(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L13_;

L92_:;
  // Y3 = ld Y
  Rsh_Fir_reg_Y3_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L94() else D17()
  // L94()
  goto L94_;

L93_:;
  // r30 = dyn base10(<sym Y>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L15(r30)
  // L15(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L15_;

L104_:;
  // Y7 = ld Y
  Rsh_Fir_reg_Y7_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L106() else D22()
  // L106()
  goto L106_;

L105_:;
  // r39 = dyn base13(<sym Y>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L19(r39)
  // L19(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L19_;

L124_:;
  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L126() else D30()
  // L126()
  goto L126_;

L125_:;
  // r54 = dyn base18(<sym FUN>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L25(r54)
  // L25(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L25_;

D5_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 21 [nx]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nx;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 35 [X9]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_X9_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 65 [Y3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_Y3_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 84 [Y7]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_Y7_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 115 [FUN1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_FUN1_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L6()
  // L6()
  goto L6_;

L16_:;
  // st ny = r34
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard12 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L20_:;
  // st `no.ny` = r43
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // no_ny = ld `no.ny`
  Rsh_Fir_reg_no_ny = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L114() else D26()
  // L114()
  goto L114_;

L26_:;
  // c15 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c15 then L130() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L130()
    goto L130_;
  } else {
  // L27()
    goto L27_;
  }

L62_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_;
  goto L4_;

L65_:;
  // nx1 = force? nx
  Rsh_Fir_reg_nx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx);
  // checkMissing(nx1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_nx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c1 = `==`(nx1, NULL)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_nx1_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args70);
  // goto L5(c1)
  // L5(c1)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c1_;
  goto L5_;

L75_:;
  // X10 = force? X9
  Rsh_Fir_reg_X10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X9_);
  // checkMissing(X10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_X10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r19 = dyn names(X10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_X10_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L76() else D10()
  // L76()
  goto L76_;

L78_:;
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard7 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L94_:;
  // Y4 = force? Y3
  Rsh_Fir_reg_Y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y3_);
  // checkMissing(Y4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_Y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r32 = dyn dim1(Y4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_Y4_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L95() else D18()
  // L95()
  goto L95_;

L96_:;
  // Y5 = ld Y
  Rsh_Fir_reg_Y5_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L98() else D19()
  // L98()
  goto L98_;

L97_:;
  // r33 = dyn base11(<sym Y>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L16_;

L106_:;
  // Y8 = force? Y7
  Rsh_Fir_reg_Y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y7_);
  // checkMissing(Y8)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_Y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r41 = dyn length1(Y8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_Y8_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L107() else D23()
  // L107()
  goto L107_;

L108_:;
  // sym15 = ldf names
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base15 = ldf names in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard15 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L109_:;
  // r42 = dyn base14(<lang names(Y)>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L20(r42)
  // L20(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L20_;

L126_:;
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c8 = `is.character`(FUN2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_FUN2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args82);
  // goto L25(c8)
  // L25(c8)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_c8_;
  goto L25_;

L127_:;
  // FUN3 = ld FUN
  Rsh_Fir_reg_FUN3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L128() else D31()
  // L128()
  goto L128_;

D10_:;
  // deopt 38 [r19]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 68 [r32]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 72 [Y5]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_Y5_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 87 [r41]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 98 [no_ny]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_no_ny;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 118 [c9, FUN3]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_FUN3_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L11_:;
  // st nx = r22
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r22_1, RHO);
  (void)(Rsh_Fir_reg_r22_1);
  // goto L6()
  // L6()
  goto L6_;

L17_:;
  // st `no.ny` = r37
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // goto L18()
  // L18()
  goto L18_;

L21_:;
  // c6 = `==`(r45, NULL)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args83);
  // goto L20(c6)
  // L20(c6)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_c6_;
  goto L20_;

L27_:;
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L145() else D39()
  // L145()
  goto L145_;

L32_:;
  // st robj = r70
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r70_, RHO);
  (void)(Rsh_Fir_reg_r70_);
  // sym24 = ldf c
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base24 = ldf c in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard24 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L76_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_;
  goto L9_;

L79_:;
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard8 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L80_:;
  // r21 = dyn base7(<lang names(X)>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_;
  goto L11_;

L95_:;
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L15_;

L98_:;
  // Y6 = force? Y5
  Rsh_Fir_reg_Y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y5_);
  // checkMissing(Y6)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_Y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // dimnames1 = ldf dimnames in base
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r35 = dyn dimnames1(Y6)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_Y6_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L99() else D20()
  // L99()
  goto L99_;

L100_:;
  // ny = ld ny
  Rsh_Fir_reg_ny = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L102() else D21()
  // L102()
  goto L102_;

L101_:;
  // r36 = dyn base12(<sym ny>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L17(r36)
  // L17(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L17_;

L107_:;
  // goto L19(r41)
  // L19(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L19_;

L110_:;
  // Y9 = ld Y
  Rsh_Fir_reg_Y9_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L112() else D24()
  // L112()
  goto L112_;

L111_:;
  // r44 = dyn base15(<sym Y>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L21(r44)
  // L21(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L21_;

L114_:;
  // no_ny1 = force? no_ny
  Rsh_Fir_reg_no_ny1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no_ny);
  // checkMissing(no_ny1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_no_ny1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r47 = `!`(no_ny1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_no_ny1_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args92);
  // c7 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args93);
  // if c7 then L115() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L115()
    goto L115_;
  } else {
  // L22()
    goto L22_;
  }

L128_:;
  // FUN4 = force? FUN3
  Rsh_Fir_reg_FUN4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN3_);
  // checkMissing(FUN4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_FUN4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r56 = `==`(FUN4, "*")
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_FUN4_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args95);
  // c12 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args96);
  // c13 = `&&`(c9, c12)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args97);
  // goto L26(c13)
  // L26(c13)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c13_;
  goto L26_;

L130_:;
  // sym19 = ldf missing
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base19 = ldf missing in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard19 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

D20_:;
  // deopt 75 [r35]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 78 [ny]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_ny;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 92 [Y9]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_Y9_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 146 []
  Rsh_Fir_deopt(146, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r26 = dyn list(r24)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L85() else D14()
  // L85()
  goto L85_;

L22_:;
  // goto L18()
  // L18()
  goto L18_;

L28_:;
  // r60 = `!`(r58)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args100);
  // c16 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args101);
  // if c16 then L133() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L133()
    goto L133_;
  } else {
  // L29()
    goto L29_;
  }

L38_:;
  // l = ld robj
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L164() else D48()
  // L164()
  goto L164_;

L81_:;
  // X11 = ld X
  Rsh_Fir_reg_X11_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L83() else D12()
  // L83()
  goto L83_;

L82_:;
  // r23 = dyn base8(<sym X>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

L99_:;
  // goto L16(r35)
  // L16(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L16_;

L102_:;
  // ny1 = force? ny
  Rsh_Fir_reg_ny1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny);
  // checkMissing(ny1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_ny1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c5 = `==`(ny1, NULL)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_ny1_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args104);
  // goto L17(c5)
  // L17(c5)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_c5_;
  goto L17_;

L112_:;
  // Y10 = force? Y9
  Rsh_Fir_reg_Y10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y9_);
  // checkMissing(Y10)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_Y10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r46 = dyn names2(Y10)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_Y10_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L113() else D25()
  // L113()
  goto L113_;

L115_:;
  // sym16 = ldf list
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base16 = ldf list in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard16 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L131_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r59 = dyn missing(<sym ...>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L28(r59)
  // L28(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L28_;

L132_:;
  // r57 = dyn base19(<sym ...>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L28(r57)
  // L28(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L28_;

L145_:;
  // p2 = prom<V +>{
  //   FUN5 = ld FUN;
  //   FUN6 = force? FUN5;
  //   checkMissing(FUN6);
  //   return FUN6;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3229052351_, 0, NULL, CCP, RHO);
  // r72 = dyn match_fun(p2)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L146() else D40()
  // L146()
  goto L146_;

L159_:;
  // dX = ld dX
  Rsh_Fir_reg_dX = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L161() else D45()
  // L161()
  goto L161_;

L160_:;
  // r86 = dyn base24(<sym dX>, <sym dY>)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L38(r86)
  // L38(r86)
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r86_;
  goto L38_;

D12_:;
  // deopt 48 [X11]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_X11_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 53 [r26]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 95 [r46]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 148 [r72]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 175 [dX]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_dX;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 182 [r87, l, r87]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(182, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L23_:;
  // st ny = r49
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // goto L18()
  // L18()
  goto L18_;

L29_:;
  // goto L30()
  // L30()
  goto L30_;

L30_:;
  // sym20 = ldf tcrossprod
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base20 = ldf tcrossprod in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard20 then L137() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L137()
    goto L137_;
  } else {
  // L138()
    goto L138_;
  }

L83_:;
  // X12 = force? X11
  Rsh_Fir_reg_X12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X11_);
  // checkMissing(X12)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_X12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r25 = dyn names1(X12)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_X12_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L84() else D13()
  // L84()
  goto L84_;

L85_:;
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r26_;
  goto L11_;

L113_:;
  // goto L21(r46)
  // L21(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L21_;

L116_:;
  // sym17 = ldf names
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base17 = ldf names in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args116);
  // if guard17 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L117_:;
  // r48 = dyn base16(<lang names(Y)>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L23(r48)
  // L23(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L23_;

L133_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L134() else D32()
  // L134()
  goto L134_;

L146_:;
  // st FUN = r72
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r72_, RHO);
  (void)(Rsh_Fir_reg_r72_);
  // sym21 = ldf rep
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base21 = ldf rep in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard21 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L161_:;
  // dX1 = force? dX
  Rsh_Fir_reg_dX1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX);
  // checkMissing(dX1)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dX1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // dY = ld dY
  Rsh_Fir_reg_dY = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L162() else D46()
  // L162()
  goto L162_;

L164_:;
  // r89 = dyn dim__(l, NULL, r87)
  SEXP Rsh_Fir_array_args120[3];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args120[2] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L165() else D49()
  // L165()
  goto L165_;

D13_:;
  // deopt 51 [r25]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 128 []
  Rsh_Fir_deopt(128, 0, NULL, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 177 [dY]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_dY;
  Rsh_Fir_deopt(177, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 184 [r87, r89]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(184, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L24_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r53 = dyn list1(r51)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L122() else D29()
  // L122()
  goto L122_;

L31_:;
  // goto L32(r64)
  // L32(r64)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r64_;
  goto L32_;

L33_:;
  // st Y = r74
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // sym22 = ldf length
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base22 = ldf length in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard22 then L149() else L150()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L149()
    goto L149_;
  } else {
  // L150()
    goto L150_;
  }

L84_:;
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

L118_:;
  // Y11 = ld Y
  Rsh_Fir_reg_Y11_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L120() else D27()
  // L120()
  goto L120_;

L119_:;
  // r50 = dyn base17(<sym Y>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L24(r50)
  // L24(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L24_;

L134_:;
  // r61 = dyn stop("using ... with FUN = \"*\" is an error")
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L135() else D33()
  // L135()
  goto L135_;

L137_:;
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L139() else D34()
  // L139()
  goto L139_;

L138_:;
  // r63 = dyn base20(<lang as.vector(X)>, <lang as.vector(Y)>)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L31(r63)
  // L31(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L31_;

L147_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r75 = dyn rep(<sym Y>, <lang rep.int(length(X), length(Y))>)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L33(r75)
  // L33(r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L33_;

L148_:;
  // r73 = dyn base21(<sym Y>, <lang rep.int(length(X), length(Y))>)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L33(r73)
  // L33(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L33_;

L162_:;
  // dY1 = force? dY
  Rsh_Fir_reg_dY1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dY);
  // checkMissing(dY1)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dY1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r88 = dyn c18(dX1, dY1)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dX1_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_dY1_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L163() else D47()
  // L163()
  goto L163_;

L165_:;
  // st robj = r89
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // no_nx2 = ld `no.nx`
  Rsh_Fir_reg_no_nx2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L166() else D50()
  // L166()
  goto L166_;

D27_:;
  // deopt 105 [Y11]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_Y11_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 110 [r53]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 130 [r61]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 180 [r88]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 186 [no_nx2]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_no_nx2_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L34_:;
  // c17 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args130);
  // if c17 then L153() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L153()
    goto L153_;
  } else {
  // L35()
    goto L35_;
  }

L120_:;
  // Y12 = force? Y11
  Rsh_Fir_reg_Y12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y11_);
  // checkMissing(Y12)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_Y12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // names3 = ldf names in base
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r52 = dyn names3(Y12)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_Y12_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L121() else D28()
  // L121()
  goto L121_;

L122_:;
  // goto L23(r53)
  // L23(r53)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r53_;
  goto L23_;

L135_:;
  // goto L30()
  // L30()
  goto L30_;

L139_:;
  // p = prom<V +>{
  //   X13 = ld X;
  //   X14 = force? X13;
  //   checkMissing(X14);
  //   return X14;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3229052351_1, 0, NULL, CCP, RHO);
  // r66 = dyn as_vector(p)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L140() else D35()
  // L140()
  goto L140_;

L149_:;
  // X15 = ld X
  Rsh_Fir_reg_X15_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L151() else D41()
  // L151()
  goto L151_;

L150_:;
  // r76 = dyn base22(<sym X>)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L34(r76)
  // L34(r76)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r76_;
  goto L34_;

L163_:;
  // goto L38(r88)
  // L38(r88)
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r88_;
  goto L38_;

L166_:;
  // no_nx3 = force? no_nx2
  Rsh_Fir_reg_no_nx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no_nx2_);
  // checkMissing(no_nx3)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_no_nx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c19 = `as.logical`(no_nx3)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_no_nx3_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args137);
  // if c19 then L167() else L39(c19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L167()
    goto L167_;
  } else {
  // L39(c19)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c19_;
    goto L39_;
  }

D28_:;
  // deopt 108 [r52]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 138 [r66]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 156 [X15]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_X15_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L37()
  // L37()
  goto L37_;

L37_:;
  // FUN7 = ldf FUN
  Rsh_Fir_reg_FUN7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L157() else D43()
  // L157()
  goto L157_;

L39_:;
  // r90 = `!`(c21)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args138);
  // c25 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args139);
  // if c25 then L170() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L170()
    goto L170_;
  } else {
  // L40()
    goto L40_;
  }

L121_:;
  // goto L24(r52)
  // L24(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L24_;

L140_:;
  // as_vector1 = ldf `as.vector`
  Rsh_Fir_reg_as_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L141() else D36()
  // L141()
  goto L141_;

L151_:;
  // X16 = force? X15
  Rsh_Fir_reg_X16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X15_);
  // checkMissing(X16)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_X16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r78 = dyn length2(X16)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_X16_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L152() else D42()
  // L152()
  goto L152_;

L153_:;
  // sym23 = ldf rep
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base23 = ldf rep in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args142);
  // if guard23 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L167_:;
  // no_ny2 = ld `no.ny`
  Rsh_Fir_reg_no_ny2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L168() else D51()
  // L168()
  goto L168_;

D36_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 159 [r78]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 167 []
  Rsh_Fir_deopt(167, 0, NULL, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 188 [c19, no_ny2]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_no_ny2_;
  Rsh_Fir_deopt(188, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L36_:;
  // st X = r80
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // goto L37()
  // L37()
  goto L37_;

L40_:;
  // goto L49()
  // L49()
  goto L49_;

L49_:;
  // robj = ld robj
  Rsh_Fir_reg_robj = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L199() else D65()
  // L199()
  goto L199_;

L141_:;
  // p1 = prom<V +>{
  //   Y13 = ld Y;
  //   Y14 = force? Y13;
  //   checkMissing(Y14);
  //   return Y14;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3229052351_2, 0, NULL, CCP, RHO);
  // r68 = dyn as_vector1(p1)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector1_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L142() else D37()
  // L142()
  goto L142_;

L152_:;
  // goto L34(r78)
  // L34(r78)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r78_;
  goto L34_;

L154_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r81 = dyn rep1(<sym X>, <lang ceiling(`/`(length(Y), length(X)))>)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L36(r81)
  // L36(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L36_;

L155_:;
  // r79 = dyn base23[, times](<sym X>, <lang ceiling(`/`(length(Y), length(X)))>)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L36(r79)
  // L36(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L36_;

L157_:;
  // p3 = prom<V +>{
  //   X17 = ld X;
  //   X18 = force? X17;
  //   checkMissing(X18);
  //   return X18;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3229052351_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   Y15 = ld Y;
  //   Y16 = force? Y15;
  //   checkMissing(Y16);
  //   return Y16;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3229052351_4, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // r85 = dyn FUN7[, , `...`](p3, p4, ddd1)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names58[3];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_array_arg_names58[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_FUN7_, 3, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L158() else D44()
  // L158()
  goto L158_;

L168_:;
  // no_ny3 = force? no_ny2
  Rsh_Fir_reg_no_ny3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no_ny2_);
  // checkMissing(no_ny3)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_no_ny3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c22 = `as.logical`(no_ny3)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_no_ny3_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args151);
  // c23 = `&&`(c19, c22)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args152);
  // goto L39(c23)
  // L39(c23)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c23_;
  goto L39_;

L170_:;
  // no_nx4 = ld `no.nx`
  Rsh_Fir_reg_no_nx4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L171() else D52()
  // L171()
  goto L171_;

D37_:;
  // deopt 142 [r68]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 171 [r85]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 192 [no_nx4]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_no_nx4_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 237 [robj]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_robj;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L142_:;
  // tcrossprod = ldf tcrossprod in base
  Rsh_Fir_reg_tcrossprod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r69 = dyn tcrossprod(r66, r68)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tcrossprod, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L143() else D38()
  // L143()
  goto L143_;

L158_:;
  // goto L32(r85)
  // L32(r85)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r85_;
  goto L32_;

L171_:;
  // no_nx5 = force? no_nx4
  Rsh_Fir_reg_no_nx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no_nx4_);
  // checkMissing(no_nx5)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_no_nx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // c26 = `as.logical`(no_nx5)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_no_nx5_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args155);
  // if c26 then L172() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L172()
    goto L172_;
  } else {
  // L41()
    goto L41_;
  }

L199_:;
  // robj1 = force? robj
  Rsh_Fir_reg_robj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_robj);
  // checkMissing(robj1)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_robj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return robj1
  return Rsh_Fir_reg_robj1_;

D38_:;
  // deopt 144 [r69]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L41_:;
  // no_ny4 = ld `no.ny`
  Rsh_Fir_reg_no_ny4_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L181() else D56()
  // L181()
  goto L181_;

L44_:;
  // sym29 = ldf c
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base29 = ldf c in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args157);
  // if guard29 then L191() else L192()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L191()
    goto L191_;
  } else {
  // L192()
    goto L192_;
  }

L143_:;
  // goto L31(r69)
  // L31(r69)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r69_;
  goto L31_;

L172_:;
  // sym25 = ldf vector
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base25 = ldf vector in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args158);
  // if guard25 then L173() else L174()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L173()
    goto L173_;
  } else {
  // L174()
    goto L174_;
  }

D56_:;
  // deopt 206 [no_ny4]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_no_ny4_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L42_:;
  // st nx = r92
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r92_, RHO);
  (void)(Rsh_Fir_reg_r92_);
  // goto L44()
  // L44()
  goto L44_;

L48_:;
  // l1 = ld robj
  Rsh_Fir_reg_l1_1 = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L196() else D63()
  // L196()
  goto L196_;

L173_:;
  // sym26 = ldf length
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base26 = ldf length in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard26 then L175() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L175()
    goto L175_;
  } else {
  // L176()
    goto L176_;
  }

L174_:;
  // r91 = dyn base25("list", <lang length(dX)>)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L42(r91)
  // L42(r91)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L42_;

L181_:;
  // no_ny5 = force? no_ny4
  Rsh_Fir_reg_no_ny5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no_ny4_);
  // checkMissing(no_ny5)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_no_ny5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // c27 = `as.logical`(no_ny5)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_no_ny5_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args162);
  // if c27 then L182() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L182()
    goto L182_;
  } else {
  // L45()
    goto L45_;
  }

L191_:;
  // nx2 = ld nx
  Rsh_Fir_reg_nx2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L193() else D60()
  // L193()
  goto L193_;

L192_:;
  // r104 = dyn base29(<sym nx>, <sym ny>)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 2, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L48(r104)
  // L48(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L48_;

D60_:;
  // deopt 224 [nx2]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_nx2_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D63_:;
  // deopt 231 [r105, l1, r105]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_l1_1;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(231, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L43_:;
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r96 = dyn vector("list", r94)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L179() else D55()
  // L179()
  goto L179_;

L45_:;
  // goto L44()
  // L44()
  goto L44_;

L175_:;
  // dX2 = ld dX
  Rsh_Fir_reg_dX2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L177() else D53()
  // L177()
  goto L177_;

L176_:;
  // r93 = dyn base26(<sym dX>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L43(r93)
  // L43(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L43_;

L182_:;
  // sym27 = ldf vector
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base27 = ldf vector in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args166);
  // if guard27 then L183() else L184()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L183()
    goto L183_;
  } else {
  // L184()
    goto L184_;
  }

L193_:;
  // nx3 = force? nx2
  Rsh_Fir_reg_nx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx2_);
  // checkMissing(nx3)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_nx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // ny2 = ld ny
  Rsh_Fir_reg_ny2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L194() else D61()
  // L194()
  goto L194_;

L196_:;
  // r107 = dyn dimnames__(l1, NULL, r105)
  SEXP Rsh_Fir_array_args168[3];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_l1_1;
  Rsh_Fir_array_args168[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args168[2] = Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_array_arg_names64[3];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L197() else D64()
  // L197()
  goto L197_;

D53_:;
  // deopt 199 [dX2]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_dX2_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 204 [r96]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(204, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 226 [ny2]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_ny2_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 233 [r105, r107]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(233, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L46_:;
  // st ny = r99
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r99_, RHO);
  (void)(Rsh_Fir_reg_r99_);
  // goto L44()
  // L44()
  goto L44_;

L177_:;
  // dX3 = force? dX2
  Rsh_Fir_reg_dX3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX2_);
  // checkMissing(dX3)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dX3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r95 = dyn length3(dX3)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dX3_;
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L178() else D54()
  // L178()
  goto L178_;

L179_:;
  // goto L42(r96)
  // L42(r96)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r96_;
  goto L42_;

L183_:;
  // sym28 = ldf length
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base28 = ldf length in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args171);
  // if guard28 then L185() else L186()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L185()
    goto L185_;
  } else {
  // L186()
    goto L186_;
  }

L184_:;
  // r98 = dyn base27("list", <lang length(dY)>)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args172[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 2, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L46(r98)
  // L46(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L46_;

L194_:;
  // ny3 = force? ny2
  Rsh_Fir_reg_ny3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ny2_);
  // checkMissing(ny3)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_ny3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // c28 = ldf c in base
  Rsh_Fir_reg_c28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r106 = dyn c28(nx3, ny3)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_nx3_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_ny3_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c28_, 2, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L195() else D62()
  // L195()
  goto L195_;

L197_:;
  // st robj = r107
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r107_, RHO);
  (void)(Rsh_Fir_reg_r107_);
  // goto L49()
  // L49()
  goto L49_;

D54_:;
  // deopt 202 [r95]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(202, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 229 [r106]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(229, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L47_:;
  // vector1 = ldf vector in base
  Rsh_Fir_reg_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r103 = dyn vector1("list", r101)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_array_arg_names68[2];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector1_, 2, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L189() else D59()
  // L189()
  goto L189_;

L178_:;
  // goto L43(r95)
  // L43(r95)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r95_;
  goto L43_;

L185_:;
  // dY2 = ld dY
  Rsh_Fir_reg_dY2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L187() else D57()
  // L187()
  goto L187_;

L186_:;
  // r100 = dyn base28(<sym dY>)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L47(r100)
  // L47(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L47_;

L195_:;
  // goto L48(r106)
  // L48(r106)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r106_;
  goto L48_;

D57_:;
  // deopt 213 [dY2]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_dY2_;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 218 [r103]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L187_:;
  // dY3 = force? dY2
  Rsh_Fir_reg_dY3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dY2_);
  // checkMissing(dY3)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dY3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r102 = dyn length4(dY3)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dY3_;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L188() else D58()
  // L188()
  goto L188_;

L189_:;
  // goto L46(r103)
  // L46(r103)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r103_;
  goto L46_;

D58_:;
  // deopt 216 [r102]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(216, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L188_:;
  // goto L47(r102)
  // L47(r102)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r102_;
  goto L47_;
}
SEXP Rsh_Fir_user_promise_inner3229052351_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FUN5_;
  SEXP Rsh_Fir_reg_FUN6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3229052351/0: expected 0, got %d", NCAPTURES);

  // FUN5 = ld FUN
  Rsh_Fir_reg_FUN5_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // FUN6 = force? FUN5
  Rsh_Fir_reg_FUN6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN5_);
  // checkMissing(FUN6)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_FUN6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return FUN6
  return Rsh_Fir_reg_FUN6_;
}
SEXP Rsh_Fir_user_promise_inner3229052351_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X13_;
  SEXP Rsh_Fir_reg_X14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3229052351/0: expected 0, got %d", NCAPTURES);

  // X13 = ld X
  Rsh_Fir_reg_X13_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // X14 = force? X13
  Rsh_Fir_reg_X14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X13_);
  // checkMissing(X14)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_X14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // return X14
  return Rsh_Fir_reg_X14_;
}
SEXP Rsh_Fir_user_promise_inner3229052351_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Y13_;
  SEXP Rsh_Fir_reg_Y14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3229052351/0: expected 0, got %d", NCAPTURES);

  // Y13 = ld Y
  Rsh_Fir_reg_Y13_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // Y14 = force? Y13
  Rsh_Fir_reg_Y14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y13_);
  // checkMissing(Y14)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_Y14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // return Y14
  return Rsh_Fir_reg_Y14_;
}
SEXP Rsh_Fir_user_promise_inner3229052351_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X17_;
  SEXP Rsh_Fir_reg_X18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3229052351/0: expected 0, got %d", NCAPTURES);

  // X17 = ld X
  Rsh_Fir_reg_X17_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // X18 = force? X17
  Rsh_Fir_reg_X18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X17_);
  // checkMissing(X18)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_X18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // return X18
  return Rsh_Fir_reg_X18_;
}
SEXP Rsh_Fir_user_promise_inner3229052351_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Y15_;
  SEXP Rsh_Fir_reg_Y16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3229052351/0: expected 0, got %d", NCAPTURES);

  // Y15 = ld Y
  Rsh_Fir_reg_Y15_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // Y16 = force? Y15
  Rsh_Fir_reg_Y16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y15_);
  // checkMissing(Y16)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_Y16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return Y16
  return Rsh_Fir_reg_Y16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
