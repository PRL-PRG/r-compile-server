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
SEXP Rsh_Fir_user_function_inner1396911006_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1396911006_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1912617395_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1912617395_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1912617395_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1912617395_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1912617395_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1912617395_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1912617395_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1912617395_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_isClass;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_removeClass;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_setClass;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_new;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_slot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_slot1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_slot__;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_getSlots;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_getSlots1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_slotNames;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_slotNames1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_S4toList;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_removeClass1_;
  SEXP Rsh_Fir_reg_r41_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1396911006
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1396911006_, RHO, CCP);
  // st slot = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // isClass = ldf isClass
  Rsh_Fir_reg_isClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // r1 = dyn isClass("track")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isClass, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args1);
  // if c then L5() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // setClass = ldf setClass
  Rsh_Fir_reg_setClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

L5_:;
  // removeClass = ldf removeClass
  Rsh_Fir_reg_removeClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r2 = dyn removeClass("track")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_removeClass, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

L9_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   c1 = ldf c in base;
  //   r6 = dyn c1("numeric", "numeric");
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base[x, y]("numeric", "numeric");
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r8 = dyn setClass[, slots]("track", p)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setClass, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D3_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1()
  // L1()
  goto L1_;

L10_:;
  // new = ldf new
  Rsh_Fir_reg_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L11() else D6()
  // L11()
  goto L11_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p1 = prom<V +>{
  //   return <int -4, -3, -2, -1, 0, 1, 2, 3, 4>;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf exp;
  //   base1 = ldf exp in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   r12 = exp(<int -4, -3, -2, -1, 0, 1, 2, 3, 4>);
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base1(<lang `:`(`-`(4.0), 4.0)>);
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r14 = dyn new[, x, y]("track", p1, p2)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L12() else D7()
  // L12()
  goto L12_;

D7_:;
  // deopt 26 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // st myTrack = r14
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // slot = ldf slot
  Rsh_Fir_reg_slot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D8()
  // L13()
  goto L13_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p3 = prom<V +>{
  //   myTrack = ld myTrack;
  //   myTrack1 = force? myTrack;
  //   checkMissing(myTrack1);
  //   return myTrack1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r16 = dyn slot(p3, "x")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L14() else D9()
  // L14()
  goto L14_;

D9_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // sym2 = ldf log
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf log in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // l = ld myTrack
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // slot__ = ldf `slot<-`
  Rsh_Fir_reg_slot__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L19() else D12()
  // L19()
  goto L19_;

L15_:;
  // slot1 = ldf slot
  Rsh_Fir_reg_slot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D10()
  // L17()
  goto L17_;

L16_:;
  // r17 = dyn base2(<lang slot(myTrack, "y")>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(r17)
  // L2(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L2_;

D10_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 41 [r18, l, r18]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // p4 = prom<V +>{
  //   myTrack2 = ld myTrack;
  //   myTrack3 = force? myTrack2;
  //   checkMissing(myTrack3);
  //   return myTrack3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r20 = dyn slot1(p4, "y")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L18() else D11()
  // L18()
  goto L18_;

L19_:;
  // r22 = dyn slot__(l, NULL, "y", r18)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args17[3] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot__, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L20() else D13()
  // L20()
  goto L20_;

D11_:;
  // deopt 38 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 44 [r18, r22]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // r21 = log(r20, 2.718281828459045)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args18);
  // goto L2(r21)
  // L2(r21)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r21_;
  goto L2_;

L20_:;
  // st myTrack = r22
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L21() else D14()
  // L21()
  goto L21_;

D14_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r23 = dyn __("utils", "str")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L22() else D15()
  // L22()
  goto L22_;

D15_:;
  // deopt 50 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // checkFun.0(r23)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r23_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args20));
  // r24 = r23 as cls
  Rsh_Fir_reg_r24_ = Rsh_Fir_cast(Rsh_Fir_reg_r23_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p5 = prom<V +>{
  //   myTrack4 = ld myTrack;
  //   myTrack5 = force? myTrack4;
  //   checkMissing(myTrack5);
  //   return myTrack5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r26 = dyn r24(p5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r24_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L23() else D16()
  // L23()
  goto L23_;

D16_:;
  // deopt 53 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // getSlots = ldf getSlots
  Rsh_Fir_reg_getSlots = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L24() else D17()
  // L24()
  goto L24_;

D17_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r27 = dyn getSlots("track")
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getSlots, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L25() else D18()
  // L25()
  goto L25_;

D18_:;
  // deopt 57 [r27]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // getSlots1 = ldf getSlots
  Rsh_Fir_reg_getSlots1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L26() else D19()
  // L26()
  goto L26_;

D19_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p6 = prom<V +>{
  //   getClass = ldf getClass;
  //   r28 = dyn getClass("track");
  //   return r28;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r30 = dyn getSlots1(p6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getSlots1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L27() else D20()
  // L27()
  goto L27_;

D20_:;
  // deopt 61 [r30]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L27_:;
  // slotNames = ldf slotNames
  Rsh_Fir_reg_slotNames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L28() else D21()
  // L28()
  goto L28_;

D21_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p7 = prom<V +>{
  //   sym3 = ldf class;
  //   base3 = ldf class in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   myTrack6 = ld myTrack;
  //   myTrack7 = force? myTrack6;
  //   checkMissing(myTrack7);
  //   class = ldf class in base;
  //   r33 = dyn class(myTrack7);
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base3(<sym myTrack>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r35 = dyn slotNames(p7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slotNames, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L29() else D22()
  // L29()
  goto L29_;

D22_:;
  // deopt 65 [r35]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L29_:;
  // slotNames1 = ldf slotNames
  Rsh_Fir_reg_slotNames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L30() else D23()
  // L30()
  goto L30_;

D23_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p8 = prom<V +>{
  //   myTrack8 = ld myTrack;
  //   myTrack9 = force? myTrack8;
  //   checkMissing(myTrack9);
  //   return myTrack9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r37 = dyn slotNames1(p8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slotNames1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L31() else D24()
  // L31()
  goto L31_;

D24_:;
  // deopt 69 [r37]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L31_:;
  // r38 = clos inner1912617395
  Rsh_Fir_reg_r38_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1912617395_, RHO, CCP);
  // st S4toList = r38
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // S4toList = ldf S4toList
  Rsh_Fir_reg_S4toList = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L32() else D25()
  // L32()
  goto L32_;

D25_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p9 = prom<V +>{
  //   myTrack10 = ld myTrack;
  //   myTrack11 = force? myTrack10;
  //   checkMissing(myTrack11);
  //   return myTrack11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r40 = dyn S4toList(p9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_S4toList, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L33() else D26()
  // L33()
  goto L33_;

D26_:;
  // deopt 76 [r40]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L33_:;
  // removeClass1 = ldf removeClass
  Rsh_Fir_reg_removeClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L34() else D27()
  // L34()
  goto L34_;

D27_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // r41 = dyn removeClass1("track")
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_removeClass1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L35() else D28()
  // L35()
  goto L35_;

D28_:;
  // deopt 80 [r41]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r6 = dyn c1("numeric", "numeric")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base[x, y]("numeric", "numeric")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int -4, -3, -2, -1, 0, 1, 2, 3, 4>
  return Rsh_const(CCP, 11);
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf exp
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf exp in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // r12 = exp(<int -4, -3, -2, -1, 0, 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(172, RHO, 1, Rsh_Fir_array_args8);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base1(<lang `:`(`-`(4.0), 4.0)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_myTrack;
  SEXP Rsh_Fir_reg_myTrack1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // myTrack = ld myTrack
  Rsh_Fir_reg_myTrack = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // myTrack1 = force? myTrack
  Rsh_Fir_reg_myTrack1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_myTrack);
  // checkMissing(myTrack1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_myTrack1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return myTrack1
  return Rsh_Fir_reg_myTrack1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_myTrack2_;
  SEXP Rsh_Fir_reg_myTrack3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // myTrack2 = ld myTrack
  Rsh_Fir_reg_myTrack2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // myTrack3 = force? myTrack2
  Rsh_Fir_reg_myTrack3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_myTrack2_);
  // checkMissing(myTrack3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_myTrack3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return myTrack3
  return Rsh_Fir_reg_myTrack3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_myTrack4_;
  SEXP Rsh_Fir_reg_myTrack5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // myTrack4 = ld myTrack
  Rsh_Fir_reg_myTrack4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // myTrack5 = force? myTrack4
  Rsh_Fir_reg_myTrack5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_myTrack4_);
  // checkMissing(myTrack5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_myTrack5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return myTrack5
  return Rsh_Fir_reg_myTrack5_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getClass;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // getClass = ldf getClass
  Rsh_Fir_reg_getClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // r28 = dyn getClass("track")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_myTrack6_;
  SEXP Rsh_Fir_reg_myTrack7_;
  SEXP Rsh_Fir_reg_class;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf class
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf class in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // myTrack6 = ld myTrack
  Rsh_Fir_reg_myTrack6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // myTrack7 = force? myTrack6
  Rsh_Fir_reg_myTrack7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_myTrack6_);
  // checkMissing(myTrack7)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_myTrack7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r33 = dyn class(myTrack7)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_myTrack7_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base3(<sym myTrack>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_myTrack8_;
  SEXP Rsh_Fir_reg_myTrack9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // myTrack8 = ld myTrack
  Rsh_Fir_reg_myTrack8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // myTrack9 = force? myTrack8
  Rsh_Fir_reg_myTrack9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_myTrack8_);
  // checkMissing(myTrack9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_myTrack9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return myTrack9
  return Rsh_Fir_reg_myTrack9_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_myTrack10_;
  SEXP Rsh_Fir_reg_myTrack11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // myTrack10 = ld myTrack
  Rsh_Fir_reg_myTrack10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // myTrack11 = force? myTrack10
  Rsh_Fir_reg_myTrack11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_myTrack10_);
  // checkMissing(myTrack11)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_myTrack11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return myTrack11
  return Rsh_Fir_reg_myTrack11_;
}
SEXP Rsh_Fir_user_function_inner1396911006_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1396911006 dynamic dispatch ([object, name])

  return Rsh_Fir_user_version_inner1396911006_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1396911006_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1396911006 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1396911006/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_name;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_C_R_get_slot;
  SEXP Rsh_Fir_reg_C_R_get_slot1_;
  SEXP Rsh_Fir_reg_object1_;
  SEXP Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_reg_name1_;
  SEXP Rsh_Fir_reg_name2_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_name = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
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
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // C_R_get_slot = ld C_R_get_slot
  Rsh_Fir_reg_C_R_get_slot = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<sym C_R_get_slot>, <sym object>, <sym name>)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [C_R_get_slot]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_C_R_get_slot;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L3_:;
  // C_R_get_slot1 = force? C_R_get_slot
  Rsh_Fir_reg_C_R_get_slot1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_R_get_slot);
  // checkMissing(C_R_get_slot1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_C_R_get_slot1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 2 [C_R_get_slot1, object1]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_C_R_get_slot1_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L4_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 3 [C_R_get_slot1, object2, name1]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_C_R_get_slot1_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L5_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // vargs = dots[object2, name2]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_name2_;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_R_get_slot1, vargs, <missing>)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_C_R_get_slot1_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args41);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1912617395_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1912617395 dynamic dispatch ([obj])

  return Rsh_Fir_user_version_inner1912617395_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1912617395_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1912617395 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1912617395/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_obj;
  SEXP Rsh_Fir_reg_slotNames1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r8_1;

  // Bind parameters
  Rsh_Fir_reg_obj = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st obj = obj
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_obj, RHO);
  (void)(Rsh_Fir_reg_obj);
  // slotNames = ldf slotNames
  Rsh_Fir_reg_slotNames1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   obj1 = ld obj;
  //   obj2 = force? obj1;
  //   checkMissing(obj2);
  //   return obj2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1912617395_, 0, NULL, CCP, RHO);
  // r1 = dyn slotNames(p)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slotNames1, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L1_:;
  // st sn = r1
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r1_2, RHO);
  (void)(Rsh_Fir_reg_r1_2);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p4 = prom<V +>{
  //   lapply = ldf lapply;
  //   p1 = prom<V +>{
  //     sn = ld sn;
  //     sn1 = force? sn;
  //     checkMissing(sn1);
  //     return sn1;
  //   };
  //   p2 = prom<V +>{
  //     slot = ld slot;
  //     slot1 = force? slot;
  //     checkMissing(slot1);
  //     return slot1;
  //   };
  //   p3 = prom<V +>{
  //     obj3 = ld obj;
  //     obj4 = force? obj3;
  //     checkMissing(obj4);
  //     return obj4;
  //   };
  //   r5 = dyn lapply[, , object](p1, p2, p3);
  //   return r5;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1912617395_1, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sn2 = ld sn;
  //   sn3 = force? sn2;
  //   checkMissing(sn3);
  //   return sn3;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1912617395_5, 0, NULL, CCP, RHO);
  // r8 = dyn structure[, names](p4, p5)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_1;
}
SEXP Rsh_Fir_user_promise_inner1912617395_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_obj1_;
  SEXP Rsh_Fir_reg_obj2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1912617395/0: expected 0, got %d", NCAPTURES);

  // obj1 = ld obj
  Rsh_Fir_reg_obj1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // obj2 = force? obj1
  Rsh_Fir_reg_obj2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj1_);
  // checkMissing(obj2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_obj2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return obj2
  return Rsh_Fir_reg_obj2_;
}
SEXP Rsh_Fir_user_promise_inner1912617395_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lapply;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1912617395/0: expected 0, got %d", NCAPTURES);

  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p1 = prom<V +>{
  //   sn = ld sn;
  //   sn1 = force? sn;
  //   checkMissing(sn1);
  //   return sn1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1912617395_2, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   slot = ld slot;
  //   slot1 = force? slot;
  //   checkMissing(slot1);
  //   return slot1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1912617395_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   obj3 = ld obj;
  //   obj4 = force? obj3;
  //   checkMissing(obj4);
  //   return obj4;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1912617395_4, 0, NULL, CCP, RHO);
  // r5 = dyn lapply[, , object](p1, p2, p3)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names24, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_1;
}
SEXP Rsh_Fir_user_promise_inner1912617395_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sn;
  SEXP Rsh_Fir_reg_sn1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1912617395/0: expected 0, got %d", NCAPTURES);

  // sn = ld sn
  Rsh_Fir_reg_sn = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // sn1 = force? sn
  Rsh_Fir_reg_sn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sn);
  // checkMissing(sn1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return sn1
  return Rsh_Fir_reg_sn1_;
}
SEXP Rsh_Fir_user_promise_inner1912617395_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_slot1;
  SEXP Rsh_Fir_reg_slot1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1912617395/0: expected 0, got %d", NCAPTURES);

  // slot = ld slot
  Rsh_Fir_reg_slot1 = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // slot1 = force? slot
  Rsh_Fir_reg_slot1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_slot1);
  // checkMissing(slot1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_slot1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return slot1
  return Rsh_Fir_reg_slot1_1;
}
SEXP Rsh_Fir_user_promise_inner1912617395_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_obj3_;
  SEXP Rsh_Fir_reg_obj4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1912617395/0: expected 0, got %d", NCAPTURES);

  // obj3 = ld obj
  Rsh_Fir_reg_obj3_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // obj4 = force? obj3
  Rsh_Fir_reg_obj4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj3_);
  // checkMissing(obj4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_obj4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return obj4
  return Rsh_Fir_reg_obj4_;
}
SEXP Rsh_Fir_user_promise_inner1912617395_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sn2_;
  SEXP Rsh_Fir_reg_sn3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1912617395/0: expected 0, got %d", NCAPTURES);

  // sn2 = ld sn
  Rsh_Fir_reg_sn2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // sn3 = force? sn2
  Rsh_Fir_reg_sn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sn2_);
  // checkMissing(sn3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return sn3
  return Rsh_Fir_reg_sn3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
