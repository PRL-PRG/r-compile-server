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
SEXP Rsh_Fir_user_function_inner4192809571_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4192809571_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4192809571_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4192809571_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4192809571_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4192809571_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4192809571_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4192809571_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_gl;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_list2env;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_as_list;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_rbind;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_stopifnot1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_list2env1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r69_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4192809571
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4192809571_, RHO, CCP);
  // st list2env = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
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
  // st L = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // list2env = ldf list2env
  Rsh_Fir_reg_list2env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

L1_:;
  // gl = ldf gl
  Rsh_Fir_reg_gl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base[a, b, p, ff](1.0, <lang `:`(2.0, 4.0)>, <sym pi>, <lang gl(3.0, 4.0, labels=`[`(LETTERS, `:`(1.0, 3.0)))>)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   LETTERS = ld LETTERS;
  //   LETTERS1 = force? LETTERS;
  //   checkMissing(LETTERS1);
  //   c = `is.object`(LETTERS1);
  //   if c then L1() else L2(LETTERS1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", LETTERS1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(LETTERS3):
  //   __ = ldf `[` in base;
  //   r3 = dyn __(LETTERS3, <int 1, 2, 3>);
  //   goto L0(r3);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn gl[, , labels](3.0, 4.0, p)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gl, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L6_:;
  // p1 = prom<V +>{
  //   L = ld L;
  //   L1 = force? L;
  //   checkMissing(L1);
  //   return L1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r8 = dyn list2env(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2env, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D1_:;
  // deopt 18 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 26 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn list(1.0, <int 2, 3, 4>, 3.141592653589793, r5)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args11[3] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L7_:;
  // st e = r8
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D2_:;
  // deopt 21 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r6_;
  goto L0_;

L8_:;
  // p2 = prom<V +>{
  //   e = ld e;
  //   e1 = force? e;
  //   checkMissing(e1);
  //   return e1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn ls(p2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 31 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p5 = prom<V +>{
  //   ls1 = ldf ls;
  //   p3 = prom<V +>{
  //     e2 = ld e;
  //     e3 = force? e2;
  //     checkMissing(e3);
  //     return e3;
  //   };
  //   r12 = dyn ls1(p3);
  //   sort = ldf sort;
  //   p4 = prom<V +>{
  //     sym1 = ldf names;
  //     base1 = ldf names in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r14):
  //     return r14;
  //   L1():
  //     L2 = ld L;
  //     L3 = force? L2;
  //     checkMissing(L3);
  //     names = ldf names in base;
  //     r15 = dyn names(L3);
  //     goto L0(r15);
  //   L2():
  //     r13 = dyn base1(<sym L>);
  //     goto L0(r13);
  //   };
  //   r17 = dyn sort(p4);
  //   r18 = `==`(r12, r17);
  //   return r18;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   L4 = ld L;
  //   L5 = force? L4;
  //   checkMissing(L5);
  //   c1 = `is.object`(L5);
  //   if c1 then L4() else L5(L5);
  // L2():
  //   r20 = dyn base2(<lang `$`(L, b)>, <lang `$`(e, b)>);
  //   goto L0(r20);
  // L3(dx3):
  //   e4 = ld e;
  //   e5 = force? e4;
  //   checkMissing(e5);
  //   c2 = `is.object`(e5);
  //   if c2 then L8() else L9(e5);
  // L4():
  //   dr2 = tryDispatchBuiltin.1("$", L5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(L7):
  //   r22 = `$`(L7, <sym b>);
  //   goto L3(r22);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L3(dx2);
  // L7(dx5):
  //   identical = ldf identical in base;
  //   r24 = dyn identical(dx3, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r24);
  // L8():
  //   dr4 = tryDispatchBuiltin.1("$", e5);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L10() else L9(dr4);
  // L9(e7):
  //   r23 = `$`(e7, <sym b>);
  //   goto L7(r23);
  // L10():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L7(dx4);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r26 = dyn stopifnot(p5, p6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 36 [r26]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p7 = prom<V +>{
  //   e8 = ld e;
  //   e9 = force? e8;
  //   checkMissing(e9);
  //   return e9;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r28 = dyn as_list(p7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 40 [r28]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // st ll = r28
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // rbind = ldf rbind
  Rsh_Fir_reg_rbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p8 = prom<V +>{
  //   sym3 = ldf names;
  //   base3 = ldf names in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r30):
  //   return r30;
  // L1():
  //   L8 = ld L;
  //   L9 = force? L8;
  //   checkMissing(L9);
  //   names1 = ldf names in base;
  //   r31 = dyn names1(L9);
  //   goto L0(r31);
  // L2():
  //   r29 = dyn base3(<sym L>);
  //   goto L0(r29);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym4 = ldf names;
  //   base4 = ldf names in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r34):
  //   return r34;
  // L1():
  //   ll = ld ll;
  //   ll1 = force? ll;
  //   checkMissing(ll1);
  //   names2 = ldf names in base;
  //   r35 = dyn names2(ll1);
  //   goto L0(r35);
  // L2():
  //   r33 = dyn base4(<sym ll>);
  //   goto L0(r33);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r37 = dyn rbind(p8, p9)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rbind, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 46 [r37]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p12 = prom<V +>{
  //   sym5 = ldf identical;
  //   base5 = ldf identical in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L3() else L4();
  // L0(r39):
  //   return r39;
  // L3():
  //   L10 = ld L;
  //   L11 = force? L10;
  //   checkMissing(L11);
  //   c3 = `is.object`(L11);
  //   if c3 then L5() else L6(L11);
  // L4():
  //   r38 = dyn base5(<lang `[`(L, sort.list(names(L)))>, <lang `[`(ll, sort.list(names(ll)))>);
  //   goto L0(r38);
  // L1(dx7):
  //   ll2 = ld ll;
  //   ll3 = force? ll2;
  //   checkMissing(ll3);
  //   c4 = `is.object`(ll3);
  //   if c4 then L8() else L9(ll3);
  // L5():
  //   dr6 = tryDispatchBuiltin.1("[", L11);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L7() else L6(dr6);
  // L6(L13):
  //   sort_list = ldf `sort.list`;
  //   p10 = prom<V +>{
  //     sym6 = ldf names;
  //     base6 = ldf names in base;
  //     guard6 = `==`.4(sym6, base6);
  //     if guard6 then L1() else L2();
  //   L0(r41):
  //     return r41;
  //   L1():
  //     L14 = ld L;
  //     L15 = force? L14;
  //     checkMissing(L15);
  //     names3 = ldf names in base;
  //     r42 = dyn names3(L15);
  //     goto L0(r42);
  //   L2():
  //     r40 = dyn base6(<sym L>);
  //     goto L0(r40);
  //   };
  //   r44 = dyn sort_list(p10);
  //   __1 = ldf `[` in base;
  //   r45 = dyn __1(L13, r44);
  //   goto L1(r45);
  // L2(dx9):
  //   identical1 = ldf identical in base;
  //   r52 = dyn identical1(dx7, dx9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r52);
  // L7():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L1(dx6);
  // L8():
  //   dr8 = tryDispatchBuiltin.1("[", ll3);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L10() else L9(dr8);
  // L9(ll5):
  //   sort_list1 = ldf `sort.list`;
  //   p11 = prom<V +>{
  //     sym7 = ldf names;
  //     base7 = ldf names in base;
  //     guard7 = `==`.4(sym7, base7);
  //     if guard7 then L1() else L2();
  //   L0(r47):
  //     return r47;
  //   L1():
  //     ll6 = ld ll;
  //     ll7 = force? ll6;
  //     checkMissing(ll7);
  //     names4 = ldf names in base;
  //     r48 = dyn names4(ll7);
  //     goto L0(r48);
  //   L2():
  //     r46 = dyn base7(<sym ll>);
  //     goto L0(r46);
  //   };
  //   r50 = dyn sort_list1(p11);
  //   __2 = ldf `[` in base;
  //   r51 = dyn __2(ll5, r50);
  //   goto L2(r51);
  // L10():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L2(dx8);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r54 = dyn stopifnot1(p12)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 50 [r54]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // list2env1 = ldf list2env
  Rsh_Fir_reg_list2env1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p15 = prom<V +>{
  //   sym8 = ldf list;
  //   base8 = ldf list in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r56):
  //   return r56;
  // L1():
  //   LETTERS4 = ld LETTERS;
  //   LETTERS5 = force? LETTERS4;
  //   checkMissing(LETTERS5);
  //   data_frame = ldf `data.frame`;
  //   p13 = prom<V +>{
  //     rnorm = ldf rnorm;
  //     r57 = dyn rnorm(20.0);
  //     return r57;
  //   };
  //   p14 = prom<V +>{
  //     rbinom = ldf rbinom;
  //     r59 = dyn rbinom[, , prob](20.0, 1.0, 0.2);
  //     return r59;
  //   };
  //   r61 = dyn data_frame[x, y](p13, p14);
  //   list1 = ldf list in base;
  //   r62 = dyn list1(LETTERS5, "just an example", r61);
  //   goto L0(r62);
  // L2():
  //   r55 = dyn base8[abc, note, df](<sym LETTERS>, "just an example", <lang data.frame(x=rnorm(20.0), y=rbinom(20.0, 1.0, prob=0.2))>);
  //   goto L0(r55);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   e10 = ld e;
  //   e11 = force? e10;
  //   checkMissing(e11);
  //   return e11;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r65 = dyn list2env1[, envir](p15, p16)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2env1_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 56 [r65]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // __3 = ldf `::`
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // r66 = dyn __3("utils", "ls.str")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 61 [r66]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L21_:;
  // checkFun.0(r66)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r66_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args85));
  // r67 = r66 as cls
  Rsh_Fir_reg_r67_ = Rsh_Fir_cast(Rsh_Fir_reg_r66_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p17 = prom<V +>{
  //   e12 = ld e;
  //   e13 = force? e12;
  //   checkMissing(e13);
  //   return e13;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r69 = dyn r67(p17)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r67_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 64 [r69]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r69
  return Rsh_Fir_reg_r69_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_LETTERS;
  SEXP Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_LETTERS3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c = `is.object`(LETTERS1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args3);
  // if c then L1() else L2(LETTERS1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(LETTERS1)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_LETTERS1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", LETTERS1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r3 = dyn __(LETTERS3, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_LETTERS3_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L;
  SEXP Rsh_Fir_reg_L1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L = ld L
  Rsh_Fir_reg_L = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // L1 = force? L
  Rsh_Fir_reg_L1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L);
  // checkMissing(L1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_L1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return L1
  return Rsh_Fir_reg_L1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e;
  SEXP Rsh_Fir_reg_e1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return e1
  return Rsh_Fir_reg_e1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ls1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ls1 = ldf ls
  Rsh_Fir_reg_ls1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p3 = prom<V +>{
  //   e2 = ld e;
  //   e3 = force? e2;
  //   checkMissing(e3);
  //   return e3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r12 = dyn ls1(p3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   L2 = ld L;
  //   L3 = force? L2;
  //   checkMissing(L3);
  //   names = ldf names in base;
  //   r15 = dyn names(L3);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base1(<sym L>);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r17 = dyn sort(p4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // r18 = `==`(r12, r17)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args21);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_reg_e3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e2 = ld e
  Rsh_Fir_reg_e2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // e3 = force? e2
  Rsh_Fir_reg_e3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e2_);
  // checkMissing(e3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_e3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return e3
  return Rsh_Fir_reg_e3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_L2_;
  SEXP Rsh_Fir_reg_L3_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // L2 = ld L
  Rsh_Fir_reg_L2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // L3 = force? L2
  Rsh_Fir_reg_L3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L2_);
  // checkMissing(L3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_L3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r15 = dyn names(L3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_L3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L0_;

L2_:;
  // r13 = dyn base1(<sym L>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_L4_;
  SEXP Rsh_Fir_reg_L5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_L7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_e4_;
  SEXP Rsh_Fir_reg_e5_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_e7_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
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
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // L4 = ld L
  Rsh_Fir_reg_L4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // L5 = force? L4
  Rsh_Fir_reg_L5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L4_);
  // checkMissing(L5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_L5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(L5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_L5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c1 then L4() else L5(L5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4()
    goto L4_;
  } else {
  // L5(L5)
    Rsh_Fir_reg_L7_ = Rsh_Fir_reg_L5_;
    goto L5_;
  }

L2_:;
  // r20 = dyn base2(<lang `$`(L, b)>, <lang `$`(e, b)>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // e4 = ld e
  Rsh_Fir_reg_e4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // e5 = force? e4
  Rsh_Fir_reg_e5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e4_);
  // checkMissing(e5)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_e5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(e5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args27);
  // if c2 then L8() else L9(e5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L8()
    goto L8_;
  } else {
  // L9(e5)
    Rsh_Fir_reg_e7_ = Rsh_Fir_reg_e5_;
    goto L9_;
  }

L4_:;
  // dr2 = tryDispatchBuiltin.1("$", L5)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_L5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_L7_ = Rsh_Fir_reg_dr2_;
    goto L5_;
  }

L5_:;
  // r22 = `$`(L7, <sym b>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_L7_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args30);
  // goto L3(r22)
  // L3(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L3_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

L7_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r24 = dyn identical(dx3, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args32[9];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args32[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args32[5] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args32[6] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args32[7] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args32[8] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names11[9];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r24_;
  goto L0_;

L8_:;
  // dr4 = tryDispatchBuiltin.1("$", e5)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_e5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc2 then L10() else L9(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr4)
    Rsh_Fir_reg_e7_ = Rsh_Fir_reg_dr4_;
    goto L9_;
  }

L9_:;
  // r23 = `$`(e7, <sym b>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_e7_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args35);
  // goto L7(r23)
  // L7(r23)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r23_;
  goto L7_;

L10_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L7(dx4)
  // L7(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e8_;
  SEXP Rsh_Fir_reg_e9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e8 = ld e
  Rsh_Fir_reg_e8_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // e9 = force? e8
  Rsh_Fir_reg_e9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e8_);
  // checkMissing(e9)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_e9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return e9
  return Rsh_Fir_reg_e9_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_L8_;
  SEXP Rsh_Fir_reg_L9_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r31_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_;

L1_:;
  // L8 = ld L
  Rsh_Fir_reg_L8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // L9 = force? L8
  Rsh_Fir_reg_L9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L8_);
  // checkMissing(L9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_L9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r31 = dyn names1(L9)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_L9_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L0_;

L2_:;
  // r29 = dyn base3(<sym L>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_ll;
  SEXP Rsh_Fir_reg_ll1_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_r35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r34
  return Rsh_Fir_reg_r34_;

L1_:;
  // ll = ld ll
  Rsh_Fir_reg_ll = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // ll1 = force? ll
  Rsh_Fir_reg_ll1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll);
  // checkMissing(ll1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ll1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r35 = dyn names2(ll1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_ll1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L0_;

L2_:;
  // r33 = dyn base4(<sym ll>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_L10_;
  SEXP Rsh_Fir_reg_L11_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_L13_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_sort_list;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_ll2_;
  SEXP Rsh_Fir_reg_ll3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_ll5_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_sort_list1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r52_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf identical
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base5 = ldf identical in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard5 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r39
  return Rsh_Fir_reg_r39_;

L3_:;
  // L10 = ld L
  Rsh_Fir_reg_L10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // L11 = force? L10
  Rsh_Fir_reg_L11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L10_);
  // checkMissing(L11)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_L11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(L11)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_L11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args51);
  // if c3 then L5() else L6(L11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L5()
    goto L5_;
  } else {
  // L6(L11)
    Rsh_Fir_reg_L13_ = Rsh_Fir_reg_L11_;
    goto L6_;
  }

L4_:;
  // r38 = dyn base5(<lang `[`(L, sort.list(names(L)))>, <lang `[`(ll, sort.list(names(ll)))>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L0_;

L1_:;
  // ll2 = ld ll
  Rsh_Fir_reg_ll2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // ll3 = force? ll2
  Rsh_Fir_reg_ll3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll2_);
  // checkMissing(ll3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_ll3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(ll3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_ll3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args54);
  // if c4 then L8() else L9(ll3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L8()
    goto L8_;
  } else {
  // L9(ll3)
    Rsh_Fir_reg_ll5_ = Rsh_Fir_reg_ll3_;
    goto L9_;
  }

L5_:;
  // dr6 = tryDispatchBuiltin.1("[", L11)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_L11_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc3 then L7() else L6(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr6)
    Rsh_Fir_reg_L13_ = Rsh_Fir_reg_dr6_;
    goto L6_;
  }

L6_:;
  // sort_list = ldf `sort.list`
  Rsh_Fir_reg_sort_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // p10 = prom<V +>{
  //   sym6 = ldf names;
  //   base6 = ldf names in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   L14 = ld L;
  //   L15 = force? L14;
  //   checkMissing(L15);
  //   names3 = ldf names in base;
  //   r42 = dyn names3(L15);
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base6(<sym L>);
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r44 = dyn sort_list(p10)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_list, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names22, CCP, RHO);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r45 = dyn __1(L13, r44)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_L13_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r45)
  // L1(r45)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r45_;
  goto L1_;

L2_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r52 = dyn identical1(dx7, dx9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args63[9];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[5] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[6] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args63[7] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[8] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names24[9];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_array_arg_names24[6] = R_MissingArg;
  Rsh_Fir_array_arg_names24[7] = R_MissingArg;
  Rsh_Fir_array_arg_names24[8] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r52_;
  goto L0_;

L7_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L1(dx6)
  // L1(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L1_;

L8_:;
  // dr8 = tryDispatchBuiltin.1("[", ll3)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_ll3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc4 then L10() else L9(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr8)
    Rsh_Fir_reg_ll5_ = Rsh_Fir_reg_dr8_;
    goto L9_;
  }

L9_:;
  // sort_list1 = ldf `sort.list`
  Rsh_Fir_reg_sort_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // p11 = prom<V +>{
  //   sym7 = ldf names;
  //   base7 = ldf names in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r47):
  //   return r47;
  // L1():
  //   ll6 = ld ll;
  //   ll7 = force? ll6;
  //   checkMissing(ll7);
  //   names4 = ldf names in base;
  //   r48 = dyn names4(ll7);
  //   goto L0(r48);
  // L2():
  //   r46 = dyn base7(<sym ll>);
  //   goto L0(r46);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r50 = dyn sort_list1(p11)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_list1_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names27, CCP, RHO);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r51 = dyn __2(ll5, r50)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_ll5_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L2(r51)
  // L2(r51)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r51_;
  goto L2_;

L10_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L2(dx8)
  // L2(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_L14_;
  SEXP Rsh_Fir_reg_L15_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // L14 = ld L
  Rsh_Fir_reg_L14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // L15 = force? L14
  Rsh_Fir_reg_L15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L14_);
  // checkMissing(L15)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_L15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // names3 = ldf names in base
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r42 = dyn names3(L15)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_L15_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r40 = dyn base6(<sym L>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_ll6_;
  SEXP Rsh_Fir_reg_ll7_;
  SEXP Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // ll6 = ld ll
  Rsh_Fir_reg_ll6_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // ll7 = force? ll6
  Rsh_Fir_reg_ll7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll6_);
  // checkMissing(ll7)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_ll7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // names4 = ldf names in base
  Rsh_Fir_reg_names4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r48 = dyn names4(ll7)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_ll7_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names4_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // r46 = dyn base7(<sym ll>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_LETTERS4_;
  SEXP Rsh_Fir_reg_LETTERS5_;
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r62_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
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
  // LETTERS4 = ld LETTERS
  Rsh_Fir_reg_LETTERS4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // LETTERS5 = force? LETTERS4
  Rsh_Fir_reg_LETTERS5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS4_);
  // checkMissing(LETTERS5)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_LETTERS5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // p13 = prom<V +>{
  //   rnorm = ldf rnorm;
  //   r57 = dyn rnorm(20.0);
  //   return r57;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   rbinom = ldf rbinom;
  //   r59 = dyn rbinom[, , prob](20.0, 1.0, 0.2);
  //   return r59;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r61 = dyn data_frame[x, y](p13, p14)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_arg_names32[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names32, CCP, RHO);
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r62 = dyn list1(LETTERS5, "just an example", r61)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_LETTERS5_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r62)
  // L0(r62)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r62_;
  goto L0_;

L2_:;
  // r55 = dyn base8[abc, note, df](<sym LETTERS>, "just an example", <lang data.frame(x=rnorm(20.0), y=rbinom(20.0, 1.0, prob=0.2))>)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names34[2] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rnorm;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // r57 = dyn rnorm(20.0)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names30, CCP, RHO);
  // return r57
  return Rsh_Fir_reg_r57_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rbinom;
  SEXP Rsh_Fir_reg_r59_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rbinom = ldf rbinom
  Rsh_Fir_reg_rbinom = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // r59 = dyn rbinom[, , prob](20.0, 1.0, 0.2)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rbinom, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names31, CCP, RHO);
  // return r59
  return Rsh_Fir_reg_r59_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e10_;
  SEXP Rsh_Fir_reg_e11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e10 = ld e
  Rsh_Fir_reg_e10_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // e11 = force? e10
  Rsh_Fir_reg_e11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e10_);
  // checkMissing(e11)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_e11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return e11
  return Rsh_Fir_reg_e11_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e12_;
  SEXP Rsh_Fir_reg_e13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // e12 = ld e
  Rsh_Fir_reg_e12_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // e13 = force? e12
  Rsh_Fir_reg_e13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e12_);
  // checkMissing(e13)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_e13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return e13
  return Rsh_Fir_reg_e13_;
}
SEXP Rsh_Fir_user_function_inner4192809571_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4192809571 dynamic dispatch ([x, envir, parent, hash, size])

  return Rsh_Fir_user_version_inner4192809571_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4192809571_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4192809571 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4192809571/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_parent;
  SEXP Rsh_Fir_reg_hash;
  SEXP Rsh_Fir_reg_size;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_parent_isMissing;
  SEXP Rsh_Fir_reg_parent_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_hash_isMissing;
  SEXP Rsh_Fir_reg_hash_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_size_isMissing;
  SEXP Rsh_Fir_reg_size_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_new_env;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_envir3_;
  SEXP Rsh_Fir_reg_envir4_;
  SEXP Rsh_Fir_reg_list2env1;
  SEXP Rsh_Fir_reg_r23_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_envir = PARAMS[1];
  Rsh_Fir_reg_parent = PARAMS[2];
  Rsh_Fir_reg_hash = PARAMS[3];
  Rsh_Fir_reg_size = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args88);
  // if envir_isMissing then L0(NULL) else L0(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_envir_orDefault = Rsh_const(CCP, 55);
    goto L0_;
  } else {
  // L0(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L0_;
  }

L0_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // parent_isMissing = missing.0(parent)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_parent;
  Rsh_Fir_reg_parent_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args89);
  // if parent_isMissing then L1() else L2(parent)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_parent_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(parent)
    Rsh_Fir_reg_parent_orDefault = Rsh_Fir_reg_parent;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4192809571_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_parent_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st parent = parent_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_parent_orDefault, RHO);
  (void)(Rsh_Fir_reg_parent_orDefault);
  // hash_isMissing = missing.0(hash)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_hash;
  Rsh_Fir_reg_hash_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args90);
  // if hash_isMissing then L3() else L4(hash)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hash_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(hash)
    Rsh_Fir_reg_hash_orDefault = Rsh_Fir_reg_hash;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   r5 = `>`(r3, 100.0);
  //   visible.0();
  //   return r5;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   length = ldf length in base;
  //   r4 = dyn length(x2);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base(<sym x>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4192809571_1, 0, NULL, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_hash_orDefault = Rsh_Fir_reg_p1_1;
  goto L4_;

L4_:;
  // st hash = hash_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_hash_orDefault, RHO);
  (void)(Rsh_Fir_reg_hash_orDefault);
  // size_isMissing = missing.0(size)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_size;
  Rsh_Fir_reg_size_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args96);
  // if size_isMissing then L5() else L6(size)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_size_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(size)
    Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_size;
    goto L6_;
  }

L5_:;
  // p2 = prom<V +>{
  //   sym1 = ldf max;
  //   base1 = ldf max in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r8):
  //   return r8;
  // L2():
  //   sym2 = ldf length;
  //   base2 = ldf length in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L3():
  //   r7 = dyn base1(29, <lang length(x)>);
  //   goto L0(r7);
  // L1(r10):
  //   max = ldf max in base;
  //   r12 = dyn max(29, r10);
  //   goto L0(r12);
  // L4():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   length1 = ldf length in base;
  //   r11 = dyn length1(x4);
  //   goto L1(r11);
  // L5():
  //   r9 = dyn base2(<sym x>);
  //   goto L1(r9);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4192809571_2, 0, NULL, CCP, RHO);
  // goto L6(p2)
  // L6(p2)
  Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_p2_1;
  goto L6_;

L6_:;
  // st size = size_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_size_orDefault, RHO);
  (void)(Rsh_Fir_reg_size_orDefault);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard3 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L7_:;
  // c1 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args105);
  // if c1 then L14() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L14()
    goto L14_;
  } else {
  // L8()
    goto L8_;
  }

L11_:;
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r14 = dyn base3(<sym envir>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r14_1;
  goto L7_;

D0_:;
  // deopt 1 [envir1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard4 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L13_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c = `==`(envir2, NULL)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_envir2_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args109);
  // goto L7(c)
  // L7(c)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_c1;
  goto L7_;

L14_:;
  // new_env = ldf `new.env`
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r22
  return Rsh_Fir_reg_r22_1;

L15_:;
  // p3 = prom<V +>{
  //   hash1 = ld hash;
  //   hash2 = force? hash1;
  //   checkMissing(hash2);
  //   return hash2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4192809571_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   parent1 = ld parent;
  //   parent2 = force? parent1;
  //   checkMissing(parent2);
  //   return parent2;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4192809571_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   size1 = ld size;
  //   size2 = force? size1;
  //   checkMissing(size2);
  //   return size2;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4192809571_5, 0, NULL, CCP, RHO);
  // r19 = dyn new_env[hash, parent, size](p3, p4, p5)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args113[2] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_arg_names45[1] = Rsh_const(CCP, 57);
  Rsh_Fir_array_arg_names45[2] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 3, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L18_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L19_:;
  // r21 = dyn base4(<lang list2env(x, envir)>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_1;
  goto L10_;

D2_:;
  // deopt 12 [r19]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 18 [x5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L16_:;
  // st envir = r19
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L9()
  // L9()
  goto L9_;

L20_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // envir3 = ld envir
  Rsh_Fir_reg_envir3_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D4_:;
  // deopt 20 [envir3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_envir3_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L21_:;
  // envir4 = force? envir3
  Rsh_Fir_reg_envir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir3_);
  // checkMissing(envir4)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_envir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // list2env = ldf list2env in base
  Rsh_Fir_reg_list2env1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r23 = dyn list2env(x6, envir4)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_envir4_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2env1, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 23 [r23]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r23_1;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner4192809571_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4192809571/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner4192809571_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4192809571/0: expected 0, got %d", NCAPTURES);

  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r5 = `>`(r3, 100.0)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args92);
  // visible.0()
  (void)(Rsh_Fir_intrinsic_visible_v0(CCP, RHO, 0, NULL));
  // return r5
  return Rsh_Fir_reg_r5_1;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r4 = dyn length(x2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4192809571_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r12_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4192809571/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf max
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base1 = ldf max in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_1;

L2_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r7 = dyn base1(29, <lang length(x)>)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L0_;

L1_:;
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r12 = dyn max(29, r10)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r12_1;
  goto L0_;

L4_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r11 = dyn length1(x4)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_;
  goto L1_;

L5_:;
  // r9 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner4192809571_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_hash1_;
  SEXP Rsh_Fir_reg_hash2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4192809571/0: expected 0, got %d", NCAPTURES);

  // hash1 = ld hash
  Rsh_Fir_reg_hash1_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // hash2 = force? hash1
  Rsh_Fir_reg_hash2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hash1_);
  // checkMissing(hash2)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_hash2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return hash2
  return Rsh_Fir_reg_hash2_;
}
SEXP Rsh_Fir_user_promise_inner4192809571_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent1_;
  SEXP Rsh_Fir_reg_parent2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4192809571/0: expected 0, got %d", NCAPTURES);

  // parent1 = ld parent
  Rsh_Fir_reg_parent1_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // parent2 = force? parent1
  Rsh_Fir_reg_parent2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parent1_);
  // checkMissing(parent2)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_parent2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return parent2
  return Rsh_Fir_reg_parent2_;
}
SEXP Rsh_Fir_user_promise_inner4192809571_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_size1_;
  SEXP Rsh_Fir_reg_size2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4192809571/0: expected 0, got %d", NCAPTURES);

  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return size2
  return Rsh_Fir_reg_size2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
