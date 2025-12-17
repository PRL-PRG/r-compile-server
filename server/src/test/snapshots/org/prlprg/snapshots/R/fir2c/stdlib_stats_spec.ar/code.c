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
SEXP Rsh_Fir_user_function_inner881778619_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner881778619_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner881778619_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881778619_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_spec_ar;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_spec_ar1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_spec_ar2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_spec_ar3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_spec_ar4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_spec_ar5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_spec_ar6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r30_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner881778619
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner881778619_, RHO, CCP);
  // st `spec.ar` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
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
  // spec_ar = ldf `spec.ar`
  Rsh_Fir_reg_spec_ar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // p1 = prom<V +>{
  //   lh = ld lh;
  //   lh1 = force? lh;
  //   checkMissing(lh1);
  //   return lh1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn spec_ar(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spec_ar, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // spec_ar1 = ldf `spec.ar`
  Rsh_Fir_reg_spec_ar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   ldeaths = ld ldeaths;
  //   ldeaths1 = force? ldeaths;
  //   checkMissing(ldeaths1);
  //   return ldeaths1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn spec_ar1(p2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spec_ar1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // spec_ar2 = ldf `spec.ar`
  Rsh_Fir_reg_spec_ar2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p3 = prom<V +>{
  //   ldeaths2 = ld ldeaths;
  //   ldeaths3 = force? ldeaths2;
  //   checkMissing(ldeaths3);
  //   return ldeaths3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r10 = dyn spec_ar2[, method](p3, "burg")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spec_ar2_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 21 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // spec_ar3 = ldf `spec.ar`
  Rsh_Fir_reg_spec_ar3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p4 = prom<V +>{
  //   sym1 = ldf log;
  //   base1 = ldf log in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   lynx = ld lynx;
  //   lynx1 = force? lynx;
  //   checkMissing(lynx1);
  //   r13 = log(lynx1, 2.718281828459045);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base1(<sym lynx>);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r15 = dyn spec_ar3(p4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spec_ar3_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 25 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // spec_ar4 = ldf `spec.ar`
  Rsh_Fir_reg_spec_ar4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p5 = prom<V +>{
  //   sym2 = ldf log;
  //   base2 = ldf log in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   lynx2 = ld lynx;
  //   lynx3 = force? lynx2;
  //   checkMissing(lynx3);
  //   r18 = log(lynx3, 2.718281828459045);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base2(<sym lynx>);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r20 = dyn spec_ar4[, method, add, col](p5, "burg", TRUE, "purple")
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spec_ar4_, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 35 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // spec_ar5 = ldf `spec.ar`
  Rsh_Fir_reg_spec_ar5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p6 = prom<V +>{
  //   sym3 = ldf log;
  //   base3 = ldf log in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   lynx4 = ld lynx;
  //   lynx5 = force? lynx4;
  //   checkMissing(lynx5);
  //   r23 = log(lynx5, 2.718281828459045);
  //   goto L0(r23);
  // L2():
  //   r21 = dyn base3(<sym lynx>);
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r25 = dyn spec_ar5[, method, add, col](p6, "mle", TRUE, "forest green")
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names10[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spec_ar5_, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 45 [r25]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // spec_ar6 = ldf `spec.ar`
  Rsh_Fir_reg_spec_ar6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p7 = prom<V +>{
  //   sym4 = ldf log;
  //   base4 = ldf log in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r27):
  //   return r27;
  // L1():
  //   lynx6 = ld lynx;
  //   lynx7 = force? lynx6;
  //   checkMissing(lynx7);
  //   r28 = log(lynx7, 2.718281828459045);
  //   goto L0(r28);
  // L2():
  //   r26 = dyn base4(<sym lynx>);
  //   goto L0(r26);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r30 = dyn spec_ar6[, method, add, col](p7, "ols", TRUE, "blue")
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spec_ar6_, 4, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 55 [r30]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lh;
  SEXP Rsh_Fir_reg_lh1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lh = ld lh
  Rsh_Fir_reg_lh = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lh1 = force? lh
  Rsh_Fir_reg_lh1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lh);
  // checkMissing(lh1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_lh1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return lh1
  return Rsh_Fir_reg_lh1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ldeaths;
  SEXP Rsh_Fir_reg_ldeaths1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ldeaths = ld ldeaths
  Rsh_Fir_reg_ldeaths = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ldeaths1 = force? ldeaths
  Rsh_Fir_reg_ldeaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldeaths);
  // checkMissing(ldeaths1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ldeaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return ldeaths1
  return Rsh_Fir_reg_ldeaths1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ldeaths2_;
  SEXP Rsh_Fir_reg_ldeaths3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ldeaths2 = ld ldeaths
  Rsh_Fir_reg_ldeaths2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ldeaths3 = force? ldeaths2
  Rsh_Fir_reg_ldeaths3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldeaths2_);
  // checkMissing(ldeaths3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ldeaths3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return ldeaths3
  return Rsh_Fir_reg_ldeaths3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_lynx;
  SEXP Rsh_Fir_reg_lynx1_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf log
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf log in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // lynx = ld lynx
  Rsh_Fir_reg_lynx = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // lynx1 = force? lynx
  Rsh_Fir_reg_lynx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lynx);
  // checkMissing(lynx1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_lynx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r13 = log(lynx1, 2.718281828459045)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_lynx1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args12);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base1(<sym lynx>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_lynx2_;
  SEXP Rsh_Fir_reg_lynx3_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf log
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf log in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
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
  // lynx2 = ld lynx
  Rsh_Fir_reg_lynx2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // lynx3 = force? lynx2
  Rsh_Fir_reg_lynx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lynx2_);
  // checkMissing(lynx3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_lynx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r18 = log(lynx3, 2.718281828459045)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_lynx3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args17);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base2(<sym lynx>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_lynx4_;
  SEXP Rsh_Fir_reg_lynx5_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf log
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf log in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // lynx4 = ld lynx
  Rsh_Fir_reg_lynx4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // lynx5 = force? lynx4
  Rsh_Fir_reg_lynx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lynx4_);
  // checkMissing(lynx5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_lynx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r23 = log(lynx5, 2.718281828459045)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_lynx5_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args22);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r21 = dyn base3(<sym lynx>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_lynx6_;
  SEXP Rsh_Fir_reg_lynx7_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf log
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf log in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
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
  // lynx6 = ld lynx
  Rsh_Fir_reg_lynx6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // lynx7 = force? lynx6
  Rsh_Fir_reg_lynx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lynx6_);
  // checkMissing(lynx7)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_lynx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r28 = log(lynx7, 2.718281828459045)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_lynx7_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args27);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r26 = dyn base4(<sym lynx>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner881778619_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner881778619 dynamic dispatch ([x, `n.freq`, order, plot, `na.action`, method, `...`])

  return Rsh_Fir_user_version_inner881778619_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner881778619_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner881778619 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner881778619/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_n_freq;
  SEXP Rsh_Fir_reg_order;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_na_action;
  SEXP Rsh_Fir_reg_method;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_order_isMissing;
  SEXP Rsh_Fir_reg_order_orDefault;
  SEXP Rsh_Fir_reg_plot_isMissing;
  SEXP Rsh_Fir_reg_plot_orDefault;
  SEXP Rsh_Fir_reg_na_action_isMissing;
  SEXP Rsh_Fir_reg_na_action_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_method_isMissing;
  SEXP Rsh_Fir_reg_method_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_na_action1_;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_frequency;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_NCOL;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_ar;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_cn;
  SEXP Rsh_Fir_reg_cn1_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_is_array;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_n_freq1_;
  SEXP Rsh_Fir_reg_n_freq2_;
  SEXP Rsh_Fir_reg_seq_int;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_nser;
  SEXP Rsh_Fir_reg_nser1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_order5_;
  SEXP Rsh_Fir_reg_order6_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_outer1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_var_p;
  SEXP Rsh_Fir_reg_var_p1_;
  SEXP Rsh_Fir_reg_xfreq;
  SEXP Rsh_Fir_reg_xfreq1_;
  SEXP Rsh_Fir_reg_cs;
  SEXP Rsh_Fir_reg_cs1_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_sn;
  SEXP Rsh_Fir_reg_sn1_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_var_p2_;
  SEXP Rsh_Fir_reg_var_p3_;
  SEXP Rsh_Fir_reg_xfreq2_;
  SEXP Rsh_Fir_reg_xfreq3_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_freq4_;
  SEXP Rsh_Fir_reg_freq5_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg__NotYetImplemented;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_freq6_;
  SEXP Rsh_Fir_reg_freq7_;
  SEXP Rsh_Fir_reg_xfreq4_;
  SEXP Rsh_Fir_reg_xfreq5_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_spec;
  SEXP Rsh_Fir_reg_spec1_;
  SEXP Rsh_Fir_reg_coh;
  SEXP Rsh_Fir_reg_coh1_;
  SEXP Rsh_Fir_reg_phase;
  SEXP Rsh_Fir_reg_phase1_;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_series;
  SEXP Rsh_Fir_reg_series1_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_plot1_;
  SEXP Rsh_Fir_reg_plot2_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_plot3_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_spg_out2_;
  SEXP Rsh_Fir_reg_spg_out3_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_spg_out4_;
  SEXP Rsh_Fir_reg_spg_out5_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_n_freq = PARAMS[1];
  Rsh_Fir_reg_order = PARAMS[2];
  Rsh_Fir_reg_plot = PARAMS[3];
  Rsh_Fir_reg_na_action = PARAMS[4];
  Rsh_Fir_reg_method = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `n.freq` = n_freq
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_n_freq, RHO);
  (void)(Rsh_Fir_reg_n_freq);
  // order_isMissing = missing.0(order)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_order;
  Rsh_Fir_reg_order_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args30);
  // if order_isMissing then L0(NULL) else L0(order)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_order_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_order_orDefault = Rsh_const(CCP, 20);
    goto L0_;
  } else {
  // L0(order)
    Rsh_Fir_reg_order_orDefault = Rsh_Fir_reg_order;
    goto L0_;
  }

L0_:;
  // st order = order_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_order_orDefault, RHO);
  (void)(Rsh_Fir_reg_order_orDefault);
  // plot_isMissing = missing.0(plot)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_plot;
  Rsh_Fir_reg_plot_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args31);
  // if plot_isMissing then L1(TRUE) else L1(plot)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_plot_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_plot_orDefault = Rsh_const(CCP, 10);
    goto L1_;
  } else {
  // L1(plot)
    Rsh_Fir_reg_plot_orDefault = Rsh_Fir_reg_plot;
    goto L1_;
  }

L1_:;
  // st plot = plot_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_plot_orDefault, RHO);
  (void)(Rsh_Fir_reg_plot_orDefault);
  // na_action_isMissing = missing.0(na_action)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_na_action;
  Rsh_Fir_reg_na_action_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args32);
  // if na_action_isMissing then L2() else L3(na_action)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_action_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(na_action)
    Rsh_Fir_reg_na_action_orDefault = Rsh_Fir_reg_na_action;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   na_fail = ld `na.fail`;
  //   na_fail1 = force? na_fail;
  //   checkMissing(na_fail1);
  //   return na_fail1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_, 0, NULL, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_na_action_orDefault = Rsh_Fir_reg_p1;
  goto L3_;

L3_:;
  // st `na.action` = na_action_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_na_action_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_action_orDefault);
  // method_isMissing = missing.0(method)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_method;
  Rsh_Fir_reg_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if method_isMissing then L4("yule-walker") else L4(method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_method_isMissing)) {
  // L4("yule-walker")
    Rsh_Fir_reg_method_orDefault = Rsh_const(CCP, 25);
    goto L4_;
  } else {
  // L4(method)
    Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_method;
    goto L4_;
  }

L4_:;
  // st method = method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_method_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L5_:;
  // r4 = `!`(r2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args36);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args37);
  // if c then L34() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L34()
    goto L34_;
  } else {
  // L6()
    goto L6_;
  }

L30_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

L31_:;
  // r1 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r1)
  // L5(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_1;
  goto L5_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L6_:;
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard3 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L7_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L95() else D26()
  // L95()
  goto L95_;

L32_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r3 = dyn is_list(x2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L33() else D1()
  // L33()
  goto L33_;

L34_:;
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 99 [x29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L8_:;
  // st cn = r28
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r28_1, RHO);
  (void)(Rsh_Fir_reg_r28_1);
  // sym6 = ldf anyNA
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base6 = ldf anyNA in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard6 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L33_:;
  // goto L5(r3)
  // L5(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L5_;

L35_:;
  // p1 = prom<V +>{
  //   sym1 = ldf substitute;
  //   base1 = ldf substitute in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   substitute = ldf substitute in base;
  //   r7 = dyn substitute(<sym x>);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base1(<sym x>);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_1, 0, NULL, CCP, RHO);
  // r9 = dyn deparse1(p1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L46_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L47_:;
  // r27 = dyn base3(<lang c("ar", "var.pred", "order")>, <lang names(x)>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L8(r27)
  // L8(r27)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r27_1;
  goto L8_;

L95_:;
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(x30)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args50);
  // if c10 then L97() else L98(x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L97()
    goto L97_;
  } else {
  // L98(x30)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L98_;
  }

D3_:;
  // deopt 10 [r9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L9_:;
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L11_:;
  // c3 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c3 then L60() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L60()
    goto L60_;
  } else {
  // L12()
    goto L12_;
  }

L36_:;
  // st series = r9
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // na_action1 = ldf `na.action`
  Rsh_Fir_reg_na_action1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L48_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r31 = dyn c2("ar", "var.pred", "order")
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

L49_:;
  // r29 = dyn base4("ar", "var.pred", "order")
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L9(r29)
  // L9(r29)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r29_;
  goto L9_;

L56_:;
  // cn = ld cn
  Rsh_Fir_reg_cn = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

L57_:;
  // r36 = dyn base6(<sym cn>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r36)
  // L11(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L11_;

L96_:;
  // st order = dx11
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym9 = ldf missing
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base9 = ldf missing in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard9 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L97_:;
  // dr10 = tryDispatchBuiltin.1("$", x30)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc5 then L99() else L98(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L99()
    goto L99_;
  } else {
  // L98(dr10)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr10_;
    goto L98_;
  }

L98_:;
  // r54 = `$`(x32, <sym order>)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args59);
  // goto L96(r54)
  // L96(r54)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r54_;
  goto L96_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 46 [r31]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 60 [cn]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_cn;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L10_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r35 = dyn match(r30, r33, NA_INT, NULL)
  SEXP Rsh_Fir_array_args60[4];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args60[3] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

L18_:;
  // c11 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c11 then L102() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L102()
    goto L102_;
  } else {
  // L19()
    goto L19_;
  }

L37_:;
  // p3 = prom<V +>{
  //   as_ts = ldf `as.ts`;
  //   p2 = prom<V +>{
  //     x3 = ld x;
  //     x4 = force? x3;
  //     checkMissing(x4);
  //     return x4;
  //   };
  //   r11 = dyn as_ts(p2);
  //   return r11;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_2, 0, NULL, CCP, RHO);
  // r13 = dyn na_action1(p3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_na_action1_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L50_:;
  // goto L9(r31)
  // L9(r31)
  Rsh_Fir_reg_r30_1 = Rsh_Fir_reg_r31_;
  goto L9_;

L51_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

L52_:;
  // r32 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L10_;

L58_:;
  // cn1 = force? cn
  Rsh_Fir_reg_cn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cn);
  // checkMissing(cn1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_cn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r38 = dyn anyNA(cn1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_cn1_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L59() else D17()
  // L59()
  goto L59_;

L60_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

L99_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L96(dx10)
  // L96(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L96_;

L100_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r57 = dyn missing(<sym n.freq>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L18(r57)
  // L18(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L18_;

L101_:;
  // r55 = dyn base9(<sym n.freq>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L18(r55)
  // L18(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L18_;

D5_:;
  // deopt 15 [r13]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 49 [x11]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 56 [r35]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 63 [r38]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 70 [x13]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym10 = ldf `seq.int`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base10 = ldf `seq.int` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard10 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L38_:;
  // st x = r13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r13_1, RHO);
  (void)(Rsh_Fir_reg_r13_1);
  // frequency = ldf frequency
  Rsh_Fir_reg_frequency = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L53_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r34 = dyn names(x12)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

L55_:;
  // goto L8(r35)
  // L8(r35)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r35_;
  goto L8_;

L59_:;
  // goto L11(r38)
  // L11(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L11_;

L61_:;
  // r39 = dyn stop("'x' must be a time series or an ar() fit")
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

L64_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x14)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args76);
  // if c4 then L66() else L67(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L66()
    goto L66_;
  } else {
  // L67(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L67_;
  }

L102_:;
  // st `n.freq` = 500.0
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 49), RHO);
  (void)(Rsh_const(CCP, 49));
  // goto L20()
  // L20()
  goto L20_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 52 [r34]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 67 [r39]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L21_:;
  // st freq = r60
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // nser = ld nser
  Rsh_Fir_reg_nser = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L108() else D29()
  // L108()
  goto L108_;

L39_:;
  // p4 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_4, 0, NULL, CCP, RHO);
  // r15 = dyn frequency(p4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_frequency, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L54_:;
  // goto L10(r34)
  // L10(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L10_;

L62_:;
  // goto L13()
  // L13()
  goto L13_;

L65_:;
  // st series = dx1
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

L66_:;
  // dr = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc then L68() else L67(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L68()
    goto L68_;
  } else {
  // L67(dr)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr;
    goto L67_;
  }

L67_:;
  // r41 = `$`(x16, <sym series>)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args81);
  // goto L65(r41)
  // L65(r41)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r41_;
  goto L65_;

L104_:;
  // n_freq1 = ld `n.freq`
  Rsh_Fir_reg_n_freq1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L106() else D27()
  // L106()
  goto L106_;

L105_:;
  // r59 = dyn base10[, , `length.out`](0.0, 0.5, <sym n.freq>)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L21(r59)
  // L21(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L21_;

D7_:;
  // deopt 20 [r15]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 74 [x17]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 115 [n_freq1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_n_freq1_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 121 [nser]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_nser;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L40_:;
  // st xfreq = r15
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L68_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L65(dx)
  // L65(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L65_;

L69_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x18)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args85);
  // if c5 then L71() else L72(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L71()
    goto L71_;
  } else {
  // L72(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L72_;
  }

L106_:;
  // n_freq2 = force? n_freq1
  Rsh_Fir_reg_n_freq2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_freq1_);
  // checkMissing(n_freq2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_n_freq2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r61 = dyn seq_int(0.0, 0.5, n_freq2)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_n_freq2_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L107() else D28()
  // L107()
  goto L107_;

L108_:;
  // nser1 = force? nser
  Rsh_Fir_reg_nser1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nser);
  // checkMissing(nser1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_nser1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r62 = `==`(nser1, 1.0)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_nser1_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args89);
  // c12 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c12 then L109() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L109()
    goto L109_;
  } else {
  // L22()
    goto L22_;
  }

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 119 [r61]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L22_:;
  // _NotYetImplemented = ldf `.NotYetImplemented`
  Rsh_Fir_reg__NotYetImplemented = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L145() else D50()
  // L145()
  goto L145_;

L26_:;
  // sym13 = ldf list
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base13 = ldf list in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard13 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L41_:;
  // p5 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_5, 0, NULL, CCP, RHO);
  // r17 = dyn NCOL(p5)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

L70_:;
  // st xfreq = dx3
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym7 = ldf `is.array`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base7 = ldf `is.array` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard7 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L71_:;
  // dr2 = tryDispatchBuiltin.1("$", x18)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args95);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc1 then L73() else L72(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L73()
    goto L73_;
  } else {
  // L72(dr2)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr2_;
    goto L72_;
  }

L72_:;
  // r42 = `$`(x20, <sym frequency>)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args97);
  // goto L70(r42)
  // L70(r42)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r42_;
  goto L70_;

L107_:;
  // goto L21(r61)
  // L21(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L21_;

L109_:;
  // st phase = NULL
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_const(CCP, 20), RHO);
  (void)(Rsh_const(CCP, 20));
  // st coh = NULL
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_const(CCP, 20), RHO);
  (void)(Rsh_const(CCP, 20));
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L110() else D30()
  // L110()
  goto L110_;

D9_:;
  // deopt 25 [r17]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 130 []
  Rsh_Fir_deopt(130, 0, NULL, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 194 []
  Rsh_Fir_deopt(194, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // c7 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args98);
  // if c7 then L82() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L82()
    goto L82_;
  } else {
  // L15()
    goto L15_;
  }

L27_:;
  // st `spg.out` = r99
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r99_, RHO);
  (void)(Rsh_Fir_reg_r99_);
  // l = ld `spg.out`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L160() else D63()
  // L160()
  goto L160_;

L42_:;
  // st nser = r17
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r17_1, RHO);
  (void)(Rsh_Fir_reg_r17_1);
  // ar = ldf ar
  Rsh_Fir_reg_ar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

L73_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L70(dx2)
  // L70(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L70_;

L74_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L76() else D22()
  // L76()
  goto L76_;

L75_:;
  // r43 = dyn base7(<lang `$`(x, ar)>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L14(r43)
  // L14(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L14_;

L110_:;
  // p11 = prom<V +>{
  //   x33 = ld x;
  //   x34 = force? x33;
  //   checkMissing(x34);
  //   c13 = `is.object`(x34);
  //   if c13 then L1() else L2(x34);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", x34);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(x36):
  //   r63 = `$`(x36, <sym var.pred>);
  //   goto L0(r63);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_6, 0, NULL, CCP, RHO);
  // r65 = dyn as_vector(p11)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L111() else D31()
  // L111()
  goto L111_;

L145_:;
  // r97 = dyn _NotYetImplemented()
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__NotYetImplemented, 0, NULL, NULL, CCP, RHO);
  // check L146() else D51()
  // L146()
  goto L146_;

L147_:;
  // freq6 = ld freq
  Rsh_Fir_reg_freq6_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L149() else D52()
  // L149()
  goto L149_;

L148_:;
  // r98 = dyn base13[freq, spec, coh, phase, `n.used`, series, method](<lang `*`(freq, xfreq)>, <sym spec>, <sym coh>, <sym phase>, <lang nrow(x)>, <sym series>, <lang paste0("AR (", order, ") spectrum ")>)
  SEXP Rsh_Fir_array_args108[7];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args108[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args108[3] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args108[4] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args108[5] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args108[6] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names37[7];
  Rsh_Fir_array_arg_names37[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_arg_names37[1] = Rsh_const(CCP, 70);
  Rsh_Fir_array_arg_names37[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_arg_names37[3] = Rsh_const(CCP, 61);
  Rsh_Fir_array_arg_names37[4] = Rsh_const(CCP, 73);
  Rsh_Fir_array_arg_names37[5] = Rsh_const(CCP, 37);
  Rsh_Fir_array_arg_names37[6] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 7, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L27(r98)
  // L27(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L27_;

D10_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 80 [x21]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 132 [r65]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 195 [r97]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 198 [freq6]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_freq6_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D63_:;
  // deopt 233 ["spec", l, "spec"]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_const(CCP, 74);
  Rsh_Fir_deopt(233, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L15_:;
  // st nser = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_const(CCP, 57), RHO);
  (void)(Rsh_const(CCP, 57));
  // goto L7()
  // L7()
  goto L7_;

L43_:;
  // p6 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_7, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   sym2 = ldf `is.null`;
  //   base2 = ldf `is.null` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r20):
  //   return r20;
  // L1():
  //   order1 = ld order;
  //   order2 = force? order1;
  //   checkMissing(order2);
  //   c1 = `==`(order2, NULL);
  //   goto L0(c1);
  // L2():
  //   r19 = dyn base2(<sym order>);
  //   goto L0(r19);
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_8, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   order3 = ld order;
  //   order4 = force? order3;
  //   checkMissing(order4);
  //   return order4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_9, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   na_action2 = ld `na.action`;
  //   na_action3 = force? na_action2;
  //   checkMissing(na_action3);
  //   return na_action3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   method1 = ld method;
  //   method2 = force? method1;
  //   checkMissing(method2);
  //   return method2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_11, 0, NULL, CCP, RHO);
  // r25 = dyn ar[, , , `na.action`, method](p6, p7, p8, p9, p10)
  SEXP Rsh_Fir_array_args117[5];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args117[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args117[4] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names39[5];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names39[4] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ar, 5, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

L76_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x22)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c6 then L78() else L79(x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L78()
    goto L78_;
  } else {
  // L79(x22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L79_;
  }

L82_:;
  // sym8 = ldf dim
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // base8 = ldf dim in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args120);
  // if guard8 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L111_:;
  // st `var.p` = r65
  Rsh_Fir_store(Rsh_const(CCP, 77), Rsh_Fir_reg_r65_, RHO);
  (void)(Rsh_Fir_reg_r65_);
  // order5 = ld order
  Rsh_Fir_reg_order5_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L112() else D32()
  // L112()
  goto L112_;

L146_:;
  // goto L26()
  // L26()
  goto L26_;

L149_:;
  // freq7 = force? freq6
  Rsh_Fir_reg_freq7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_freq6_);
  // checkMissing(freq7)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_freq7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // xfreq4 = ld xfreq
  Rsh_Fir_reg_xfreq4_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L150() else D53()
  // L150()
  goto L150_;

L160_:;
  // r106 = dyn class__(l, NULL, "spec")
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args122[2] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L161() else D64()
  // L161()
  goto L161_;

D11_:;
  // deopt 36 [r25]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r25_1;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 134 [order5]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_order5_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 199 [freq7, xfreq4]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_freq7_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_xfreq4_;
  Rsh_Fir_deopt(199, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 235 ["spec", r106]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(235, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L16_:;
  // c9 = `is.object`(r48)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args123);
  // if c9 then L91() else L92(r48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L91()
    goto L91_;
  } else {
  // L92(r48)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r48_;
    goto L92_;
  }

L44_:;
  // st x = r25
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r25_1, RHO);
  (void)(Rsh_Fir_reg_r25_1);
  // goto L7()
  // L7()
  goto L7_;

L77_:;
  // is_array = ldf `is.array` in base
  Rsh_Fir_reg_is_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r46 = dyn is_array(dx5)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L81() else D23()
  // L81()
  goto L81_;

L78_:;
  // dr4 = tryDispatchBuiltin.1("$", x22)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args125);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc2 then L80() else L79(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L80()
    goto L80_;
  } else {
  // L79(dr4)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr4_;
    goto L79_;
  }

L79_:;
  // r45 = `$`(x24, <sym ar>)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args127);
  // goto L77(r45)
  // L77(r45)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r45_;
  goto L77_;

L83_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L85() else D24()
  // L85()
  goto L85_;

L84_:;
  // r47 = dyn base8(<lang `$`(x, ar)>)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L16(r47)
  // L16(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L16_;

L112_:;
  // order6 = force? order5
  Rsh_Fir_reg_order6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order5_);
  // checkMissing(order6)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_order6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // r66 = `>=`(order6, 1.0)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_order6_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args130);
  // c14 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args131);
  // if c14 then L113() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L113()
    goto L113_;
  } else {
  // L23()
    goto L23_;
  }

L150_:;
  // xfreq5 = force? xfreq4
  Rsh_Fir_reg_xfreq5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xfreq4_);
  // checkMissing(xfreq5)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_xfreq5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // r100 = `*`(freq7, xfreq5)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_freq7_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_xfreq5_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args133);
  // spec = ld spec
  Rsh_Fir_reg_spec = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L151() else D54()
  // L151()
  goto L151_;

L161_:;
  // st `spg.out` = r106
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r106_, RHO);
  (void)(Rsh_Fir_reg_r106_);
  // plot1 = ld plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L162() else D65()
  // L162()
  goto L162_;

D23_:;
  // deopt 84 [r46]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 87 [x25]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 203 [spec]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_spec;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 237 [plot1]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_plot1_;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L17_:;
  // st nser = dx9
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L7()
  // L7()
  goto L7_;

L23_:;
  // sym11 = ldf `rep.int`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 78), RHO);
  // base11 = ldf `rep.int` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 78), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args134);
  // if guard11 then L135() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L135()
    goto L135_;
  } else {
  // L136()
    goto L136_;
  }

L24_:;
  // st spec = r89
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // goto L26()
  // L26()
  goto L26_;

L80_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L77(dx4)
  // L77(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L77_;

L81_:;
  // goto L14(r46)
  // L14(r46)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r46_;
  goto L14_;

L85_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x26)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args137);
  // if c8 then L87() else L88(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L87()
    goto L87_;
  } else {
  // L88(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L88_;
  }

L91_:;
  // dr8 = tryDispatchBuiltin.1("[", r48)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc4 then L93() else L92(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L93()
    goto L93_;
  } else {
  // L92(dr8)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_dr8_;
    goto L92_;
  }

L92_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r53 = dyn __(r52, 2)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L17(r53)
  // L17(r53)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r53_;
  goto L17_;

L113_:;
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L114() else D33()
  // L114()
  goto L114_;

L151_:;
  // spec1 = force? spec
  Rsh_Fir_reg_spec1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spec);
  // checkMissing(spec1)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_spec1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // coh = ld coh
  Rsh_Fir_reg_coh = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L152() else D55()
  // L152()
  goto L152_;

L162_:;
  // plot2 = force? plot1
  Rsh_Fir_reg_plot2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_plot1_);
  // checkMissing(plot2)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_plot2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(plot2)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_plot2_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args143);
  // if c17 then L163() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L163()
    goto L163_;
  } else {
  // L28()
    goto L28_;
  }

D33_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 206 [coh]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_coh;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L28_:;
  // spg_out4 = ld `spg.out`
  Rsh_Fir_reg_spg_out4_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L171() else D70()
  // L171()
  goto L171_;

L86_:;
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r50 = dyn dim(dx7)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L90() else D25()
  // L90()
  goto L90_;

L87_:;
  // dr6 = tryDispatchBuiltin.1("$", x26)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args145);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc3 then L89() else L88(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr6)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr6_;
    goto L88_;
  }

L88_:;
  // r49 = `$`(x28, <sym ar>)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args147);
  // goto L86(r49)
  // L86(r49)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r49_;
  goto L86_;

L93_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L17(dx8)
  // L17(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L17_;

L114_:;
  // p12 = prom<V +>{
  //   freq = ld freq;
  //   freq1 = force? freq;
  //   checkMissing(freq1);
  //   return freq1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   order7 = ld order;
  //   order8 = force? order7;
  //   checkMissing(order8);
  //   r68 = `:`(1, order8);
  //   return r68;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   r70 = clos inner799576941;
  //   return r70;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_14, 0, NULL, CCP, RHO);
  // r72 = dyn outer(p12, p13, p14)
  SEXP Rsh_Fir_array_args152[3];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args152[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 3, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L115() else D34()
  // L115()
  goto L115_;

L135_:;
  // var_p2 = ld `var.p`
  Rsh_Fir_reg_var_p2_ = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // check L137() else D45()
  // L137()
  goto L137_;

L136_:;
  // r90 = dyn base11(<lang `/`(var.p, xfreq)>, <lang length(freq)>)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L24(r90)
  // L24(r90)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r90_;
  goto L24_;

L152_:;
  // coh1 = force? coh
  Rsh_Fir_reg_coh1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coh);
  // checkMissing(coh1)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_coh1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // phase = ld phase
  Rsh_Fir_reg_phase = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L153() else D56()
  // L153()
  goto L153_;

L163_:;
  // plot3 = ldf plot
  Rsh_Fir_reg_plot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L164() else D66()
  // L164()
  goto L164_;

D25_:;
  // deopt 91 [r50]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 144 [r72]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 180 [var_p2]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_var_p2_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 209 [phase]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_phase;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 240 []
  Rsh_Fir_deopt(240, 0, NULL, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 252 [spg_out4]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_spg_out4_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L89_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L86(dx6)
  // L86(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L86_;

L90_:;
  // goto L16(r50)
  // L16(r50)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r50_;
  goto L16_;

L115_:;
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L116() else D35()
  // L116()
  goto L116_;

L137_:;
  // var_p3 = force? var_p2
  Rsh_Fir_reg_var_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var_p2_);
  // checkMissing(var_p3)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_var_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // xfreq2 = ld xfreq
  Rsh_Fir_reg_xfreq2_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L138() else D46()
  // L138()
  goto L138_;

L153_:;
  // phase1 = force? phase
  Rsh_Fir_reg_phase1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_phase);
  // checkMissing(phase1)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_phase1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L154() else D57()
  // L154()
  goto L154_;

L164_:;
  // p20 = prom<V +>{
  //   spg_out = ld `spg.out`;
  //   spg_out1 = force? spg_out;
  //   checkMissing(spg_out1);
  //   return spg_out1;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_15, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // r108 = dyn plot3[, ci, `...`](p20, 0.0, ddd1)
  SEXP Rsh_Fir_array_args159[3];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args159[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = Rsh_const(CCP, 87);
  Rsh_Fir_array_arg_names47[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot3_, 3, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L165() else D67()
  // L165()
  goto L165_;

L171_:;
  // spg_out5 = force? spg_out4
  Rsh_Fir_reg_spg_out5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spg_out4_);
  // checkMissing(spg_out5)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_spg_out5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return spg_out5
  return Rsh_Fir_reg_spg_out5_;

D35_:;
  // deopt 145 [x37]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 181 [var_p3, xfreq2]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_var_p3_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_xfreq2_;
  Rsh_Fir_deopt(181, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 213 []
  Rsh_Fir_deopt(213, 0, NULL, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 245 [r108]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L116_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(x38)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args162);
  // if c15 then L118() else L119(x38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L118()
    goto L118_;
  } else {
  // L119(x38)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_x38_;
    goto L119_;
  }

L138_:;
  // xfreq3 = force? xfreq2
  Rsh_Fir_reg_xfreq3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xfreq2_);
  // checkMissing(xfreq3)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_xfreq3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // r91 = `/`(var_p3, xfreq3)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_var_p3_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_xfreq3_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args164);
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args165);
  // if guard12 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L154_:;
  // p18 = prom<V +>{
  //   x45 = ld x;
  //   x46 = force? x45;
  //   checkMissing(x46);
  //   return x46;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_16, 0, NULL, CCP, RHO);
  // r102 = dyn nrow(p18)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L155() else D58()
  // L155()
  goto L155_;

L165_:;
  // sym14 = ldf invisible
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 89), RHO);
  // base14 = ldf invisible in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 89), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args168);
  // if guard14 then L166() else L167()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L166()
    goto L166_;
  } else {
  // L167()
    goto L167_;
  }

D58_:;
  // deopt 215 [r102]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L25_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 78), RHO);
  // r95 = dyn rep_int(r91, r93)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L143() else D49()
  // L143()
  goto L143_;

L29_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r110
  return Rsh_Fir_reg_r110_;

L117_:;
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 90), RHO);
  // r74 = dyn ___(r72, dx15)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L121() else D36()
  // L121()
  goto L121_;

L118_:;
  // dr14 = tryDispatchBuiltin.1("$", x38)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args171);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc7 then L120() else L119(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L120()
    goto L120_;
  } else {
  // L119(dr14)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_dr14_;
    goto L119_;
  }

L119_:;
  // r73 = `$`(x40, <sym ar>)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args173);
  // goto L117(r73)
  // L117(r73)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r73_;
  goto L117_;

L139_:;
  // freq4 = ld freq
  Rsh_Fir_reg_freq4_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L141() else D47()
  // L141()
  goto L141_;

L140_:;
  // r92 = dyn base12(<sym freq>)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L25(r92)
  // L25(r92)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L25_;

L155_:;
  // series = ld series
  Rsh_Fir_reg_series = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L156() else D59()
  // L156()
  goto L156_;

L166_:;
  // spg_out2 = ld `spg.out`
  Rsh_Fir_reg_spg_out2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L168() else D68()
  // L168()
  goto L168_;

L167_:;
  // r109 = dyn base14(<sym spg.out>)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L29(r109)
  // L29(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L29_;

D36_:;
  // deopt 149 [r74]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 186 [freq4]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_freq4_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 191 [r95]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 217 [series]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_series;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 248 [spg_out2]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_spg_out2_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L120_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L117(dx14)
  // L117(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L117_;

L121_:;
  // st cs = r74
  Rsh_Fir_store(Rsh_const(CCP, 91), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // outer1 = ldf outer
  Rsh_Fir_reg_outer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L122() else D37()
  // L122()
  goto L122_;

L141_:;
  // freq5 = force? freq4
  Rsh_Fir_reg_freq5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_freq4_);
  // checkMissing(freq5)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_freq5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // r94 = dyn length(freq5)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_freq5_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L142() else D48()
  // L142()
  goto L142_;

L143_:;
  // goto L24(r95)
  // L24(r95)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r95_;
  goto L24_;

L156_:;
  // series1 = force? series
  Rsh_Fir_reg_series1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_series);
  // checkMissing(series1)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_series1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 92), RHO);
  // check L157() else D60()
  // L157()
  goto L157_;

L168_:;
  // spg_out3 = force? spg_out2
  Rsh_Fir_reg_spg_out3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spg_out2_);
  // checkMissing(spg_out3)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_spg_out3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 89), RHO);
  // r111 = dyn invisible(spg_out3)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_spg_out3_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L169() else D69()
  // L169()
  goto L169_;

D37_:;
  // deopt 153 []
  Rsh_Fir_deopt(153, 0, NULL, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 189 [r94]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 221 []
  Rsh_Fir_deopt(221, 0, NULL, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 251 [r111]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L122_:;
  // p15 = prom<V +>{
  //   freq2 = ld freq;
  //   freq3 = force? freq2;
  //   checkMissing(freq3);
  //   return freq3;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_17, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   order9 = ld order;
  //   order10 = force? order9;
  //   checkMissing(order10);
  //   r76 = `:`(1, order10);
  //   return r76;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_18, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   r78 = clos inner799576941;
  //   return r78;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_19, 0, NULL, CCP, RHO);
  // r80 = dyn outer1(p15, p16, p17)
  SEXP Rsh_Fir_array_args185[3];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args185[2] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer1_, 3, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L123() else D38()
  // L123()
  goto L123_;

L142_:;
  // goto L25(r94)
  // L25(r94)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r94_;
  goto L25_;

L157_:;
  // p19 = prom<V +>{
  //   order11 = ld order;
  //   order12 = force? order11;
  //   checkMissing(order12);
  //   return order12;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_20, 0, NULL, CCP, RHO);
  // r104 = dyn paste0("AR (", p19, ") spectrum ")
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args187[2] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names56[3];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L158() else D61()
  // L158()
  goto L158_;

L169_:;
  // goto L29(r111)
  // L29(r111)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r111_;
  goto L29_;

D38_:;
  // deopt 157 [r80]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 225 [r104]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L123_:;
  // x41 = ld x
  Rsh_Fir_reg_x41_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L124() else D39()
  // L124()
  goto L124_;

L158_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r105 = dyn list(r100, spec1, coh1, phase1, r102, series1, r104)
  SEXP Rsh_Fir_array_args188[7];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_spec1_;
  Rsh_Fir_array_args188[2] = Rsh_Fir_reg_coh1_;
  Rsh_Fir_array_args188[3] = Rsh_Fir_reg_phase1_;
  Rsh_Fir_array_args188[4] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_args188[5] = Rsh_Fir_reg_series1_;
  Rsh_Fir_array_args188[6] = Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_array_arg_names57[7];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_array_arg_names57[2] = R_MissingArg;
  Rsh_Fir_array_arg_names57[3] = R_MissingArg;
  Rsh_Fir_array_arg_names57[4] = R_MissingArg;
  Rsh_Fir_array_arg_names57[5] = R_MissingArg;
  Rsh_Fir_array_arg_names57[6] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 7, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L159() else D62()
  // L159()
  goto L159_;

D39_:;
  // deopt 158 [x41]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_x41_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 228 [r105]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(228, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L124_:;
  // x42 = force? x41
  Rsh_Fir_reg_x42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x41_);
  // checkMissing(x42)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_x42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(x42)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args190);
  // if c16 then L126() else L127(x42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L126()
    goto L126_;
  } else {
  // L127(x42)
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_x42_;
    goto L127_;
  }

L159_:;
  // goto L27(r105)
  // L27(r105)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r105_;
  goto L27_;

L125_:;
  // ___1 = ldf `%*%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 90), RHO);
  // r82 = dyn ___1(r80, dx17)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L129() else D40()
  // L129()
  goto L129_;

L126_:;
  // dr16 = tryDispatchBuiltin.1("$", x42)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args192);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if dc8 then L128() else L127(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L128()
    goto L128_;
  } else {
  // L127(dr16)
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_dr16_;
    goto L127_;
  }

L127_:;
  // r81 = `$`(x44, <sym ar>)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_array_args194[1] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args194);
  // goto L125(r81)
  // L125(r81)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r81_;
  goto L125_;

D40_:;
  // deopt 162 [r82]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L128_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // goto L125(dx16)
  // L125(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L125_;

L129_:;
  // st sn = r82
  Rsh_Fir_store(Rsh_const(CCP, 95), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // var_p = ld `var.p`
  Rsh_Fir_reg_var_p = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // check L130() else D41()
  // L130()
  goto L130_;

D41_:;
  // deopt 164 [var_p]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_var_p;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L130_:;
  // var_p1 = force? var_p
  Rsh_Fir_reg_var_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var_p);
  // checkMissing(var_p1)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_var_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // xfreq = ld xfreq
  Rsh_Fir_reg_xfreq = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L131() else D42()
  // L131()
  goto L131_;

D42_:;
  // deopt 165 [var_p1, xfreq]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_var_p1_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_xfreq;
  Rsh_Fir_deopt(165, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L131_:;
  // xfreq1 = force? xfreq
  Rsh_Fir_reg_xfreq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xfreq);
  // checkMissing(xfreq1)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_xfreq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // cs = ld cs
  Rsh_Fir_reg_cs = Rsh_Fir_load(Rsh_const(CCP, 91), RHO);
  // check L132() else D43()
  // L132()
  goto L132_;

D43_:;
  // deopt 167 [var_p1, xfreq1, 1.0, cs]
  SEXP Rsh_Fir_array_deopt_stack64[4];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_var_p1_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_xfreq1_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_const(CCP, 57);
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_cs;
  Rsh_Fir_deopt(167, 4, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L132_:;
  // cs1 = force? cs
  Rsh_Fir_reg_cs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cs);
  // checkMissing(cs1)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_cs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // r83 = `-`(1.0, cs1)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_cs1_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args199);
  // r84 = `^`(r83, 2.0)
  SEXP Rsh_Fir_array_args200[2];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_args200[1] = Rsh_const(CCP, 96);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args200);
  // sn = ld sn
  Rsh_Fir_reg_sn = Rsh_Fir_load(Rsh_const(CCP, 95), RHO);
  // check L133() else D44()
  // L133()
  goto L133_;

D44_:;
  // deopt 171 [var_p1, xfreq1, r84, sn]
  SEXP Rsh_Fir_array_deopt_stack65[4];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_var_p1_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_xfreq1_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack65[3] = Rsh_Fir_reg_sn;
  Rsh_Fir_deopt(171, 4, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L133_:;
  // sn1 = force? sn
  Rsh_Fir_reg_sn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sn);
  // checkMissing(sn1)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_sn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // r85 = `^`(sn1, 2.0)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_sn1_;
  Rsh_Fir_array_args202[1] = Rsh_const(CCP, 96);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args202);
  // r86 = `+`(r84, r85)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args203);
  // r87 = `*`(xfreq1, r86)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_xfreq1_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args204);
  // r88 = `/`(var_p1, r87)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_var_p1_;
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args205);
  // goto L24(r88)
  // L24(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L24_;
}
SEXP Rsh_Fir_user_promise_inner881778619_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_na_fail;
  SEXP Rsh_Fir_reg_na_fail1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // na_fail = ld `na.fail`
  Rsh_Fir_reg_na_fail = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // na_fail1 = force? na_fail
  Rsh_Fir_reg_na_fail1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_fail);
  // checkMissing(na_fail1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_na_fail1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return na_fail1
  return Rsh_Fir_reg_na_fail1_;
}
SEXP Rsh_Fir_user_promise_inner881778619_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_1;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r7 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner881778619_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_ts;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r11_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // as_ts = ldf `as.ts`
  Rsh_Fir_reg_as_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881778619_3, 0, NULL, CCP, RHO);
  // r11 = dyn as_ts(p2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_ts, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names23, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_1;
}
SEXP Rsh_Fir_user_promise_inner881778619_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner881778619_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner881778619_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner881778619_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_x34_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_r63_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(x34)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args102);
  // if c13 then L1() else L2(x34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x34)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_x34_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", x34)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r63 = `$`(x36, <sym var.pred>)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args105);
  // goto L0(r63)
  // L0(r63)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r63_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner881778619_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner881778619_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_order1_;
  SEXP Rsh_Fir_reg_order2_;
  SEXP Rsh_Fir_reg_c1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 75), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 75), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r20
  return Rsh_Fir_reg_r20_1;

L1_:;
  // order1 = ld order
  Rsh_Fir_reg_order1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // order2 = force? order1
  Rsh_Fir_reg_order2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order1_);
  // checkMissing(order2)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_order2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c1 = `==`(order2, NULL)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_order2_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args112);
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_c1_;
  goto L0_;

L2_:;
  // r19 = dyn base2(<sym order>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_1 = Rsh_Fir_reg_r19_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner881778619_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order3_;
  SEXP Rsh_Fir_reg_order4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // order3 = ld order
  Rsh_Fir_reg_order3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // order4 = force? order3
  Rsh_Fir_reg_order4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order3_);
  // checkMissing(order4)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_order4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return order4
  return Rsh_Fir_reg_order4_;
}
SEXP Rsh_Fir_user_promise_inner881778619_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_na_action2_;
  SEXP Rsh_Fir_reg_na_action3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // na_action2 = ld `na.action`
  Rsh_Fir_reg_na_action2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // na_action3 = force? na_action2
  Rsh_Fir_reg_na_action3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_action2_);
  // checkMissing(na_action3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_na_action3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // return na_action3
  return Rsh_Fir_reg_na_action3_;
}
SEXP Rsh_Fir_user_promise_inner881778619_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_method1_;
  SEXP Rsh_Fir_reg_method2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // return method2
  return Rsh_Fir_reg_method2_;
}
SEXP Rsh_Fir_user_promise_inner881778619_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_freq;
  SEXP Rsh_Fir_reg_freq1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // freq = ld freq
  Rsh_Fir_reg_freq = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // freq1 = force? freq
  Rsh_Fir_reg_freq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_freq);
  // checkMissing(freq1)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_freq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return freq1
  return Rsh_Fir_reg_freq1_;
}
SEXP Rsh_Fir_user_promise_inner881778619_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order7_;
  SEXP Rsh_Fir_reg_order8_;
  SEXP Rsh_Fir_reg_r68_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // order7 = ld order
  Rsh_Fir_reg_order7_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // order8 = force? order7
  Rsh_Fir_reg_order8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order7_);
  // checkMissing(order8)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_order8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // r68 = `:`(1, order8)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_order8_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args151);
  // return r68
  return Rsh_Fir_reg_r68_;
}
SEXP Rsh_Fir_user_promise_inner881778619_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r70_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // r70 = clos inner799576941
  Rsh_Fir_reg_r70_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // return r70
  return Rsh_Fir_reg_r70_;
}
SEXP Rsh_Fir_user_promise_inner881778619_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_spg_out;
  SEXP Rsh_Fir_reg_spg_out1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // spg_out = ld `spg.out`
  Rsh_Fir_reg_spg_out = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // spg_out1 = force? spg_out
  Rsh_Fir_reg_spg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spg_out);
  // checkMissing(spg_out1)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_spg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // return spg_out1
  return Rsh_Fir_reg_spg_out1_;
}
SEXP Rsh_Fir_user_promise_inner881778619_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_reg_x46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // x45 = ld x
  Rsh_Fir_reg_x45_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x46 = force? x45
  Rsh_Fir_reg_x46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x45_);
  // checkMissing(x46)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_x46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // return x46
  return Rsh_Fir_reg_x46_;
}
SEXP Rsh_Fir_user_promise_inner881778619_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_freq2_;
  SEXP Rsh_Fir_reg_freq3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // freq2 = ld freq
  Rsh_Fir_reg_freq2_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // freq3 = force? freq2
  Rsh_Fir_reg_freq3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_freq2_);
  // checkMissing(freq3)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_freq3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // return freq3
  return Rsh_Fir_reg_freq3_;
}
SEXP Rsh_Fir_user_promise_inner881778619_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order9_;
  SEXP Rsh_Fir_reg_order10_;
  SEXP Rsh_Fir_reg_r76_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // order9 = ld order
  Rsh_Fir_reg_order9_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // order10 = force? order9
  Rsh_Fir_reg_order10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order9_);
  // checkMissing(order10)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_order10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // r76 = `:`(1, order10)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_order10_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args184);
  // return r76
  return Rsh_Fir_reg_r76_;
}
SEXP Rsh_Fir_user_promise_inner881778619_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r78_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // r78 = clos inner799576941
  Rsh_Fir_reg_r78_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // return r78
  return Rsh_Fir_reg_r78_;
}
SEXP Rsh_Fir_user_promise_inner881778619_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order11_;
  SEXP Rsh_Fir_reg_order12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881778619/0: expected 0, got %d", NCAPTURES);

  // order11 = ld order
  Rsh_Fir_reg_order11_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // order12 = force? order11
  Rsh_Fir_reg_order12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order11_);
  // checkMissing(order12)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_order12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // return order12
  return Rsh_Fir_reg_order12_;
}
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner799576941 dynamic dispatch ([x, y])

  return Rsh_Fir_user_version_inner799576941_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner799576941 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner799576941/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_2;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 97), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // sym = ldf cos
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 98), RHO);
  // base = ldf cos in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 98), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args206);
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
  return Rsh_Fir_reg_r1_2;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang `*`(`*`(`*`(2.0, pi), x), y)>)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 99);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [6.283185307179586, x1]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_const(CCP, 100);
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // r2 = `*`(6.283185307179586, x2)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 100);
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args209);
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 97), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 4 [r2, y1]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L4_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // r3 = `*`(r2, y2)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args211);
  // r4 = cos(r3)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_builtin(175, RHO, 1, Rsh_Fir_array_args212);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r4_2;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
