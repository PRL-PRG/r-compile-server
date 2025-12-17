#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1591666593_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1591666593_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1591666593_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_is_matrix;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_warpbreaks;
  SEXP Rsh_Fir_reg_warpbreaks1_;
  SEXP Rsh_Fir_reg_is_matrix1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_warpbreaks2_;
  SEXP Rsh_Fir_reg_warpbreaks3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_as_matrix1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_mdat;
  SEXP Rsh_Fir_reg_mdat1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1591666593
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1591666593_, RHO, CCP);
  // st matrix = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf `is.matrix`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf `is.matrix` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // sym1 = ldf `is.matrix`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf `is.matrix` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L3_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r1 = dyn base(<lang as.matrix(`:`(1.0, 10.0))>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // `!`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  (void)(Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args3));
  // warpbreaks2 = ld warpbreaks
  Rsh_Fir_reg_warpbreaks2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

L5_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn as_matrix(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

L8_:;
  // warpbreaks = ld warpbreaks
  Rsh_Fir_reg_warpbreaks = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

L9_:;
  // r6 = dyn base1(<sym warpbreaks>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L1_;

D1_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 [warpbreaks]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_warpbreaks;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 18 [warpbreaks2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_warpbreaks2_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r5 = dyn is_matrix(r4)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L10_:;
  // warpbreaks1 = force? warpbreaks
  Rsh_Fir_reg_warpbreaks1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warpbreaks);
  // checkMissing(warpbreaks1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_warpbreaks1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // is_matrix1 = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn is_matrix1(warpbreaks1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_warpbreaks1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L12_:;
  // warpbreaks3 = force? warpbreaks2
  Rsh_Fir_reg_warpbreaks3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warpbreaks2_);
  // checkMissing(warpbreaks3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_warpbreaks3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `is.object`(warpbreaks3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_warpbreaks3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L2_:;
  // as_matrix1 = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

L7_:;
  // goto L0()
  // L0()
  goto L0_;

L11_:;
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L1_;

L13_:;
  // dr = tryDispatchBuiltin.1("[", warpbreaks3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_warpbreaks3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L15() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L15()
    goto L15_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r10 = dyn __(warpbreaks3, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, <missing>)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_warpbreaks3_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L2()
  // L2()
  goto L2_;

L16_:;
  // p1 = prom<V +>{
  //   warpbreaks6 = ld warpbreaks;
  //   warpbreaks7 = force? warpbreaks6;
  //   checkMissing(warpbreaks7);
  //   c1 = `is.object`(warpbreaks7);
  //   if c1 then L1() else L2();
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", warpbreaks7);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2();
  // L2():
  //   __1 = ldf `[` in base;
  //   r11 = dyn __1(warpbreaks7, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, <missing>);
  //   goto L0(r11);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r13 = dyn as_matrix1(p1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

D8_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   c2 = ldf c in base;
  //   r16 = dyn c2(1.0, 2.0, 3.0, 11.0, 12.0, 13.0);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base2(1.0, 2.0, 3.0, 11.0, 12.0, 13.0);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym3 = ldf list;
  //   base3 = ldf list in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L3() else L4();
  // L0(r19):
  //   return r19;
  // L3():
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L5() else L6();
  // L4():
  //   r18 = dyn base3(<lang c("row1", "row2")>, <lang c("C.1", "C.2", "C.3")>);
  //   goto L0(r18);
  // L1(r21):
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L7() else L8();
  // L5():
  //   c3 = ldf c in base;
  //   r22 = dyn c3("row1", "row2");
  //   goto L1(r22);
  // L6():
  //   r20 = dyn base4("row1", "row2");
  //   goto L1(r20);
  // L2(r24):
  //   list = ldf list in base;
  //   r26 = dyn list(r21, r24);
  //   goto L0(r26);
  // L7():
  //   c4 = ldf c in base;
  //   r25 = dyn c4("C.1", "C.2", "C.3");
  //   goto L2(r25);
  // L8():
  //   r23 = dyn base5("C.1", "C.2", "C.3");
  //   goto L2(r23);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r28 = dyn matrix[, nrow, ncol, byrow, dimnames](p2, 2.0, 3.0, TRUE, p3)
  SEXP Rsh_Fir_array_args34[5];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args34[4] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names16[5];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names16[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names16[4] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 5, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

D9_:;
  // deopt 40 [r28]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // st mdat = r28
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // mdat = ld mdat
  Rsh_Fir_reg_mdat = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L20() else D10()
  // L20()
  goto L20_;

D10_:;
  // deopt 42 [mdat]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_mdat;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // mdat1 = force? mdat
  Rsh_Fir_reg_mdat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdat);
  // checkMissing(mdat1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_mdat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return mdat1
  return Rsh_Fir_reg_mdat1_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 5);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warpbreaks6_;
  SEXP Rsh_Fir_reg_warpbreaks7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // warpbreaks6 = ld warpbreaks
  Rsh_Fir_reg_warpbreaks6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // warpbreaks7 = force? warpbreaks6
  Rsh_Fir_reg_warpbreaks7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warpbreaks6_);
  // checkMissing(warpbreaks7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_warpbreaks7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(warpbreaks7)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_warpbreaks7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args16);
  // if c1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", warpbreaks7)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_warpbreaks7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn __1(warpbreaks7, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, <missing>)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_warpbreaks7_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
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
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r16 = dyn c2(1.0, 2.0, 3.0, 11.0, 12.0, 13.0)
  SEXP Rsh_Fir_array_args23[6];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[5] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[6];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_array_arg_names8[4] = R_MissingArg;
  Rsh_Fir_array_arg_names8[5] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 6, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base2(1.0, 2.0, 3.0, 11.0, 12.0, 13.0)
  SEXP Rsh_Fir_array_args24[6];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args24[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args24[5] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names9[6];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 6, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard3 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L3_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard4 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r18 = dyn base3(<lang c("row1", "row2")>, <lang c("C.1", "C.2", "C.3")>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;

L1_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard5 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r22 = dyn c3("row1", "row2")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r22)
  // L1(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L1_;

L6_:;
  // r20 = dyn base4("row1", "row2")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r20)
  // L1(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L1_;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r26 = dyn list(r21, r24)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r26_;
  goto L0_;

L7_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r25 = dyn c4("C.1", "C.2", "C.3")
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L2(r25)
  // L2(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L2_;

L8_:;
  // r23 = dyn base5("C.1", "C.2", "C.3")
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L2(r23)
  // L2(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L2_;
}
SEXP Rsh_Fir_user_function_inner1591666593_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1591666593 dynamic dispatch ([data, nrow, ncol, byrow, dimnames])

  return Rsh_Fir_user_version_inner1591666593_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1591666593_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1591666593 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1591666593/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_data;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_byrow;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_data_isMissing;
  SEXP Rsh_Fir_reg_data_orDefault;
  SEXP Rsh_Fir_reg_nrow_isMissing;
  SEXP Rsh_Fir_reg_nrow_orDefault;
  SEXP Rsh_Fir_reg_ncol_isMissing;
  SEXP Rsh_Fir_reg_ncol_orDefault;
  SEXP Rsh_Fir_reg_byrow_isMissing;
  SEXP Rsh_Fir_reg_byrow_orDefault;
  SEXP Rsh_Fir_reg_dimnames_isMissing;
  SEXP Rsh_Fir_reg_dimnames_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_reg_data2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_data3_;
  SEXP Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_reg_is_atomic;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_data7_;
  SEXP Rsh_Fir_reg_data8_;
  SEXP Rsh_Fir_reg_nrow1_;
  SEXP Rsh_Fir_reg_nrow2_;
  SEXP Rsh_Fir_reg_ncol1_;
  SEXP Rsh_Fir_reg_ncol2_;
  SEXP Rsh_Fir_reg_byrow1_;
  SEXP Rsh_Fir_reg_byrow2_;
  SEXP Rsh_Fir_reg_dimnames1_;
  SEXP Rsh_Fir_reg_dimnames2_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_matrix1;
  SEXP Rsh_Fir_reg_r17_;

  // Bind parameters
  Rsh_Fir_reg_data = PARAMS[0];
  Rsh_Fir_reg_nrow = PARAMS[1];
  Rsh_Fir_reg_ncol = PARAMS[2];
  Rsh_Fir_reg_byrow = PARAMS[3];
  Rsh_Fir_reg_dimnames = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // data_isMissing = missing.0(data)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_data;
  Rsh_Fir_reg_data_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args36);
  // if data_isMissing then L0(NA_LGL) else L0(data)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_data_isMissing)) {
  // L0(NA_LGL)
    Rsh_Fir_reg_data_orDefault = Rsh_const(CCP, 30);
    goto L0_;
  } else {
  // L0(data)
    Rsh_Fir_reg_data_orDefault = Rsh_Fir_reg_data;
    goto L0_;
  }

L0_:;
  // st data = data_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_data_orDefault, RHO);
  (void)(Rsh_Fir_reg_data_orDefault);
  // nrow_isMissing = missing.0(nrow)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_nrow;
  Rsh_Fir_reg_nrow_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if nrow_isMissing then L1(1.0) else L1(nrow)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nrow_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_nrow_orDefault = Rsh_const(CCP, 10);
    goto L1_;
  } else {
  // L1(nrow)
    Rsh_Fir_reg_nrow_orDefault = Rsh_Fir_reg_nrow;
    goto L1_;
  }

L1_:;
  // st nrow = nrow_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_nrow_orDefault, RHO);
  (void)(Rsh_Fir_reg_nrow_orDefault);
  // ncol_isMissing = missing.0(ncol)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ncol;
  Rsh_Fir_reg_ncol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if ncol_isMissing then L2(1.0) else L2(ncol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ncol_isMissing)) {
  // L2(1.0)
    Rsh_Fir_reg_ncol_orDefault = Rsh_const(CCP, 10);
    goto L2_;
  } else {
  // L2(ncol)
    Rsh_Fir_reg_ncol_orDefault = Rsh_Fir_reg_ncol;
    goto L2_;
  }

L2_:;
  // st ncol = ncol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_ncol_orDefault, RHO);
  (void)(Rsh_Fir_reg_ncol_orDefault);
  // byrow_isMissing = missing.0(byrow)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_byrow;
  Rsh_Fir_reg_byrow_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if byrow_isMissing then L3(FALSE) else L3(byrow)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_byrow_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_byrow_orDefault = Rsh_const(CCP, 32);
    goto L3_;
  } else {
  // L3(byrow)
    Rsh_Fir_reg_byrow_orDefault = Rsh_Fir_reg_byrow;
    goto L3_;
  }

L3_:;
  // st byrow = byrow_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_byrow_orDefault, RHO);
  (void)(Rsh_Fir_reg_byrow_orDefault);
  // dimnames_isMissing = missing.0(dimnames)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dimnames;
  Rsh_Fir_reg_dimnames_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args40);
  // if dimnames_isMissing then L4(NULL) else L4(dimnames)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dimnames_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_dimnames_orDefault = Rsh_const(CCP, 33);
    goto L4_;
  } else {
  // L4(dimnames)
    Rsh_Fir_reg_dimnames_orDefault = Rsh_Fir_reg_dimnames;
    goto L4_;
  }

L4_:;
  // st dimnames = dimnames_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_dimnames_orDefault, RHO);
  (void)(Rsh_Fir_reg_dimnames_orDefault);
  // sym = ldf `is.object`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base = ldf `is.object` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L5_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c1 then L6(c1) else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L6(c1)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1_1;
    goto L6_;
  } else {
  // L16()
    goto L16_;
  }

L13_:;
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<sym data>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L5(r)
  // L5(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L5_;

D0_:;
  // deopt 1 [data1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_data1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L6_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c10 then L22() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L22()
    goto L22_;
  } else {
  // L8()
    goto L8_;
  }

L15_:;
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c = `is.object`(data2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_data2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // goto L5(c)
  // L5(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L5_;

L16_:;
  // sym1 = ldf `is.atomic`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base1 = ldf `is.atomic` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L7_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args48);
  // c7 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // c8 = `||`(c6, c7)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args50);
  // goto L6(c8)
  // L6(c8)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c8_;
  goto L6_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard2 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L17_:;
  // data3 = ld data
  Rsh_Fir_reg_data3_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

L18_:;
  // r2 = dyn base1(<sym data>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L7(c1, r2)
  // L7(c1, r2)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L7_;

L22_:;
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D1_:;
  // deopt 6 [c1, data3]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_data3_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_1;

L19_:;
  // data4 = force? data3
  Rsh_Fir_reg_data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data3_);
  // checkMissing(data4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // is_atomic = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r4 = dyn is_atomic(data4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L23_:;
  // p = prom<V +>{
  //   data5 = ld data;
  //   data6 = force? data5;
  //   checkMissing(data6);
  //   return data6;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591666593_, 0, NULL, CCP, RHO);
  // r7 = dyn as_vector(p)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L26_:;
  // data7 = ld data
  Rsh_Fir_reg_data7_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L27_:;
  // r9 = dyn base2(<lang matrix(data, nrow, ncol, byrow, dimnames, missing(nrow), missing(ncol))>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L10(r9)
  // L10(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L10_;

D2_:;
  // deopt 9 [c1, r4]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 21 [data7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_data7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L7(c1, r4)
  // L7(c1, r4)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_1;
  goto L7_;

L24_:;
  // st data = r7
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // goto L9()
  // L9()
  goto L9_;

L28_:;
  // data8 = force? data7
  Rsh_Fir_reg_data8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data7_);
  // checkMissing(data8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_data8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // nrow1 = ld nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 23 [nrow1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_nrow1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L29_:;
  // nrow2 = force? nrow1
  Rsh_Fir_reg_nrow2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrow1_);
  // checkMissing(nrow2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_nrow2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // ncol1 = ld ncol
  Rsh_Fir_reg_ncol1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 25 [ncol1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_ncol1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L30_:;
  // ncol2 = force? ncol1
  Rsh_Fir_reg_ncol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncol1_);
  // checkMissing(ncol2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_ncol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // byrow1 = ld byrow
  Rsh_Fir_reg_byrow1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

D8_:;
  // deopt 27 [byrow1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_byrow1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L31_:;
  // byrow2 = force? byrow1
  Rsh_Fir_reg_byrow2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_byrow1_);
  // checkMissing(byrow2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_byrow2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // dimnames1 = ld dimnames
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 29 [dimnames1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_dimnames1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L32_:;
  // dimnames2 = force? dimnames1
  Rsh_Fir_reg_dimnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimnames1_);
  // checkMissing(dimnames2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dimnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L11_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard4 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L33_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r13 = dyn missing(<sym nrow>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L11(r13)
  // L11(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_1;
  goto L11_;

L34_:;
  // r11 = dyn base3(<sym nrow>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L11(r11)
  // L11(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_1;
  goto L11_;

L12_:;
  // matrix = ldf matrix in base
  Rsh_Fir_reg_matrix1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r17 = dyn matrix(data8, nrow2, ncol2, byrow2, dimnames2, r12, r15)
  SEXP Rsh_Fir_array_args67[7];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_data8_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_nrow2_;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_ncol2_;
  Rsh_Fir_array_args67[3] = Rsh_Fir_reg_byrow2_;
  Rsh_Fir_array_args67[4] = Rsh_Fir_reg_dimnames2_;
  Rsh_Fir_array_args67[5] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args67[6] = Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_array_arg_names24[7];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_array_arg_names24[6] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1, 7, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L35_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r16 = dyn missing1(<sym ncol>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L12(r16)
  // L12(r16)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r16_1;
  goto L12_;

L36_:;
  // r14 = dyn base4(<sym ncol>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L12(r14)
  // L12(r14)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r14_1;
  goto L12_;

D10_:;
  // deopt 38 [r17]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L10(r17)
  // L10(r17)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r17_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner1591666593_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data5_;
  SEXP Rsh_Fir_reg_data6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591666593/0: expected 0, got %d", NCAPTURES);

  // data5 = ld data
  Rsh_Fir_reg_data5_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // data6 = force? data5
  Rsh_Fir_reg_data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data5_);
  // checkMissing(data6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return data6
  return Rsh_Fir_reg_data6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
