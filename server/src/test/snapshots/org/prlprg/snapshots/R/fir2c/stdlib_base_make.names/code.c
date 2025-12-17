#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1304584622_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1304584622_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1304584622_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1304584622_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_make_names;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_make_names1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_make_names2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_make_names3_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_state_name;
  SEXP Rsh_Fir_reg_state_name1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_state_name3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_make_names4_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_state_name6_;
  SEXP Rsh_Fir_reg_state_name7_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r24_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1304584622
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1304584622_, RHO, CCP);
  // st `make.names` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // make_names = ldf `make.names`
  Rsh_Fir_reg_make_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c("a and b", "a-and-b");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base("a and b", "a-and-b");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn make_names[, unique](p, TRUE)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // make_names1 = ldf `make.names`
  Rsh_Fir_reg_make_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   c1 = ldf c in base;
  //   r8 = dyn c1("a and b", "a_and_b");
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1("a and b", "a_and_b");
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn make_names1[, unique](p1, TRUE)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // make_names2 = ldf `make.names`
  Rsh_Fir_reg_make_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   c2 = ldf c in base;
  //   r13 = dyn c2("a and b", "a_and_b");
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base2("a and b", "a_and_b");
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r15 = dyn make_names2[, unique, allow_](p2, TRUE, FALSE)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names2_, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 22 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // make_names3 = ldf `make.names`
  Rsh_Fir_reg_make_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p3 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   c3 = ldf c in base;
  //   r18 = dyn c3("", "X");
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3("", "X");
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r20 = dyn make_names3[, unique](p3, TRUE)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names3_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L8() else D7()
  // L8()
  goto L8_;

D7_:;
  // deopt 28 [r20]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // state_name = ld `state.name`
  Rsh_Fir_reg_state_name = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L9() else D8()
  // L9()
  goto L9_;

D8_:;
  // deopt 29 [state_name]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_state_name;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // state_name1 = force? state_name
  Rsh_Fir_reg_state_name1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state_name);
  // checkMissing(state_name1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_state_name1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(state_name1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_state_name1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args17);
  // if c4 then L10() else L11(state_name1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L10()
    goto L10_;
  } else {
  // L11(state_name1)
    Rsh_Fir_reg_state_name3_ = Rsh_Fir_reg_state_name1_;
    goto L11_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L10_:;
  // dr = tryDispatchBuiltin.1("[", state_name1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_state_name1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_state_name3_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // make_names4 = ldf `make.names`
  Rsh_Fir_reg_make_names4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D9_:;
  // deopt 32 [state_name3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_state_name3_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L13_:;
  // p4 = prom<V +>{
  //   state_name4 = ld `state.name`;
  //   state_name5 = force? state_name4;
  //   checkMissing(state_name5);
  //   return state_name5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r22 = dyn make_names4(p4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names4_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L14() else D10()
  // L14()
  goto L14_;

D10_:;
  // deopt 34 [state_name3, r22]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_state_name3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // state_name6 = ld `state.name`
  Rsh_Fir_reg_state_name6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L15() else D11()
  // L15()
  goto L15_;

D11_:;
  // deopt 34 [state_name3, r22, state_name6]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_state_name3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_state_name6_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L15_:;
  // state_name7 = force? state_name6
  Rsh_Fir_reg_state_name7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state_name6_);
  // checkMissing(state_name7)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_state_name7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r23 = `!=`(r22, state_name7)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_state_name7_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args24);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r24 = dyn __(state_name3, r23)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_state_name3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r24_;
  goto L0_;
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
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
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
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c("a and b", "a-and-b")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
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
  // r1 = dyn base("a and b", "a-and-b")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
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
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn c1("a and b", "a_and_b")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1("a and b", "a_and_b")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  // return r12
  return Rsh_Fir_reg_r12_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r13 = dyn c2("a and b", "a_and_b")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base2("a and b", "a_and_b")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r17
  return Rsh_Fir_reg_r17_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r18 = dyn c3("", "X")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3("", "X")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_state_name4_;
  SEXP Rsh_Fir_reg_state_name5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // state_name4 = ld `state.name`
  Rsh_Fir_reg_state_name4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // state_name5 = force? state_name4
  Rsh_Fir_reg_state_name5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state_name4_);
  // checkMissing(state_name5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_state_name5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return state_name5
  return Rsh_Fir_reg_state_name5_;
}
SEXP Rsh_Fir_user_function_inner1304584622_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1304584622 dynamic dispatch ([names, unique, allow_])

  return Rsh_Fir_user_version_inner1304584622_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1304584622_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1304584622 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1304584622/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_allow_;
  SEXP Rsh_Fir_reg_unique_isMissing;
  SEXP Rsh_Fir_reg_unique_orDefault;
  SEXP Rsh_Fir_reg_allow__isMissing;
  SEXP Rsh_Fir_reg_allow__orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_reg_allow_1_;
  SEXP Rsh_Fir_reg_allow_2_;
  SEXP Rsh_Fir_reg_make_names1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_unique1_;
  SEXP Rsh_Fir_reg_unique2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_order;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_make_unique;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_o2_;
  SEXP Rsh_Fir_reg_o3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_names13_;
  SEXP Rsh_Fir_reg_names14_;

  // Bind parameters
  Rsh_Fir_reg_names = PARAMS[0];
  Rsh_Fir_reg_unique = PARAMS[1];
  Rsh_Fir_reg_allow_ = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_names, RHO);
  (void)(Rsh_Fir_reg_names);
  // unique_isMissing = missing.0(unique)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_unique;
  Rsh_Fir_reg_unique_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args26);
  // if unique_isMissing then L0(FALSE) else L0(unique)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unique_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_unique_orDefault = Rsh_const(CCP, 7);
    goto L0_;
  } else {
  // L0(unique)
    Rsh_Fir_reg_unique_orDefault = Rsh_Fir_reg_unique;
    goto L0_;
  }

L0_:;
  // st unique = unique_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_unique_orDefault, RHO);
  (void)(Rsh_Fir_reg_unique_orDefault);
  // allow__isMissing = missing.0(allow_)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_allow_;
  Rsh_Fir_reg_allow__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args27);
  // if allow__isMissing then L1(TRUE) else L1(allow_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_allow__isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_allow__orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(allow_)
    Rsh_Fir_reg_allow__orDefault = Rsh_Fir_reg_allow_;
    goto L1_;
  }

L1_:;
  // st allow_ = allow__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_allow__orDefault, RHO);
  (void)(Rsh_Fir_reg_allow__orDefault);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // st names = r1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L7_:;
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym names>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [names1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_names1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L3_:;
  // st names2 = r4
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // unique1 = ld unique
  Rsh_Fir_reg_unique1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L9_:;
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r2 = dyn as_character(names2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L11_:;
  // names3 = ld names
  Rsh_Fir_reg_names3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base1(<lang make.names(names, allow_)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L3_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 [names3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_names3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 16 [unique1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_unique1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L2_;

L13_:;
  // names4 = force? names3
  Rsh_Fir_reg_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names3_);
  // checkMissing(names4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // allow_1 = ld allow_
  Rsh_Fir_reg_allow_1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L16_:;
  // unique2 = force? unique1
  Rsh_Fir_reg_unique2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unique1_);
  // checkMissing(unique2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_unique2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(unique2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_unique2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c then L17() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L17()
    goto L17_;
  } else {
  // L4()
    goto L4_;
  }

D3_:;
  // deopt 11 [allow_1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_allow_1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // names13 = ld names2
  Rsh_Fir_reg_names13_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L27() else D11()
  // L27()
  goto L27_;

L14_:;
  // allow_2 = force? allow_1
  Rsh_Fir_reg_allow_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allow_1_);
  // checkMissing(allow_2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_allow_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // make_names = ldf `make.names` in base
  Rsh_Fir_reg_make_names1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r5 = dyn make_names(names4, allow_2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_names4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_allow_2_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_names1, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L17_:;
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D4_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 34 [names13]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_names13_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_1;
  goto L3_;

L18_:;
  // p = prom<V +>{
  //   names5 = ld names;
  //   names6 = force? names5;
  //   checkMissing(names6);
  //   names7 = ld names2;
  //   names8 = force? names7;
  //   checkMissing(names8);
  //   r6 = `!=`(names6, names8);
  //   return r6;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1304584622_, 0, NULL, CCP, RHO);
  // r8 = dyn order(p)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

L27_:;
  // names14 = force? names13
  Rsh_Fir_reg_names14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names13_);
  // checkMissing(names14)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_names14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return names14
  return Rsh_Fir_reg_names14_;

D7_:;
  // deopt 21 [r8]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L19_:;
  // st o = r8
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // make_unique = ldf `make.unique`
  Rsh_Fir_reg_make_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p1 = prom<V +>{
  //   names9 = ld names2;
  //   names10 = force? names9;
  //   checkMissing(names10);
  //   c1 = `is.object`(names10);
  //   if c1 then L1() else L2(names10);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", names10);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(names12):
  //   o = ld o;
  //   o1 = force? o;
  //   __ = ldf `[` in base;
  //   r9 = dyn __(names12, o1);
  //   goto L0(r9);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1304584622_1, 0, NULL, CCP, RHO);
  // r11 = dyn make_unique(p1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 26 [r11]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L21_:;
  // l = ld names2
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args51);
  // if c2 then L22() else L23(r11, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L22()
    goto L22_;
  } else {
  // L23(r11, l)
    Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r11_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L23_;
  }

L5_:;
  // st names2 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L6()
  // L6()
  goto L6_;

L22_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r11)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args52);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc1 then L24() else L23(r11, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L24()
    goto L24_;
  } else {
  // L23(r11, dr2)
    Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r11_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L23_;
  }

L23_:;
  // o2 = ld o
  Rsh_Fir_reg_o2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 28 [r13, l2, r11, o2]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_o2_;
  Rsh_Fir_deopt(28, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L24_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L5(r11, dx2)
  // L5(r11, dx2)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r11_1;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

L25_:;
  // o3 = force? o2
  Rsh_Fir_reg_o3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r16 = dyn ___(l2, r11, o3)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_o3_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L5(r13, r16)
  // L5(r13, r16)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_1;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner1304584622_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_names5_;
  SEXP Rsh_Fir_reg_names6_;
  SEXP Rsh_Fir_reg_names7_;
  SEXP Rsh_Fir_reg_names8_;
  SEXP Rsh_Fir_reg_r6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1304584622/0: expected 0, got %d", NCAPTURES);

  // names5 = ld names
  Rsh_Fir_reg_names5_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // names6 = force? names5
  Rsh_Fir_reg_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names5_);
  // checkMissing(names6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // names7 = ld names2
  Rsh_Fir_reg_names7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // names8 = force? names7
  Rsh_Fir_reg_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names7_);
  // checkMissing(names8)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r6 = `!=`(names6, names8)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_names6_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_names8_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args41);
  // return r6
  return Rsh_Fir_reg_r6_1;
}
SEXP Rsh_Fir_user_promise_inner1304584622_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_names9_;
  SEXP Rsh_Fir_reg_names10_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_names12_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_o;
  SEXP Rsh_Fir_reg_o1_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1304584622/0: expected 0, got %d", NCAPTURES);

  // names9 = ld names2
  Rsh_Fir_reg_names9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // names10 = force? names9
  Rsh_Fir_reg_names10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names9_);
  // checkMissing(names10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_names10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(names10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_names10_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args45);
  // if c1 then L1() else L2(names10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(names10)
    Rsh_Fir_reg_names12_ = Rsh_Fir_reg_names10_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("[", names10)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_names10_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_names12_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // o = ld o
  Rsh_Fir_reg_o = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // o1 = force? o
  Rsh_Fir_reg_o1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r9 = dyn __(names12, o1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_names12_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_o1_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
