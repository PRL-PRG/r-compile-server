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
SEXP Rsh_Fir_user_function_inner2171172657_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2171172657_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2171172657_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2171172657_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2171172657_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2171172657_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2171172657_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_formals;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_formals1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_str;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_is_primitive;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_formals3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_formals4_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_alist;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_formals__;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_r31_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2171172657
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2171172657_, RHO, CCP);
  // st formals = r
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
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // formals = ldf formals
  Rsh_Fir_reg_formals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

L2_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base(<sym stats>)
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

L4_:;
  // p = prom<V +>{
  //   stats = ld stats;
  //   stats1 = force? stats;
  //   checkMissing(stats1);
  //   return stats1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L6_:;
  // p1 = prom<V +>{
  //   lm = ld lm;
  //   lm1 = force? lm;
  //   checkMissing(lm1);
  //   return lm1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn formals(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

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

L5_:;
  // goto L0()
  // L0()
  goto L0_;

L7_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L1_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

L8_:;
  // formals1 = ldf formals
  Rsh_Fir_reg_formals1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L9_:;
  // r7 = dyn base1(<lang formals(lm)>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   lm2 = ld lm;
  //   lm3 = force? lm2;
  //   checkMissing(lm3);
  //   return lm3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r10 = dyn formals1(p2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

L13_:;
  // r12 = dyn __("methods", "formalArgs")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D5_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r11 = dyn names(r10)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

L14_:;
  // checkFun.0(r12)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r12_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args12));
  // r13 = r12 as cls
  Rsh_Fir_reg_r13_ = Rsh_Fir_cast(Rsh_Fir_reg_r12_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p3 = prom<V +>{
  //   lm4 = ld lm;
  //   lm5 = force? lm4;
  //   checkMissing(lm5);
  //   return lm5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r15 = dyn r13(p3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r13_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L15() else D9()
  // L15()
  goto L15_;

D6_:;
  // deopt 19 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 27 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L1()
  // L1()
  goto L1_;

L15_:;
  // str = ldf str
  Rsh_Fir_reg_str = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L16() else D10()
  // L16()
  goto L16_;

D10_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p5 = prom<V +>{
  //   formals2 = ldf formals;
  //   p4 = prom<V +>{
  //     lm6 = ld lm;
  //     lm7 = force? lm6;
  //     checkMissing(lm7);
  //     return lm7;
  //   };
  //   r17 = dyn formals2(p4);
  //   return r17;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r19 = dyn str(p5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

D11_:;
  // deopt 31 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // is_primitive = ldf `is.primitive`
  Rsh_Fir_reg_is_primitive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L18() else D12()
  // L18()
  goto L18_;

D12_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p6 = prom<V +>{
  //   __1 = ld `+`;
  //   __2 = force? __1;
  //   checkMissing(__2);
  //   return __2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r21 = dyn is_primitive(p6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_primitive, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

D13_:;
  // deopt 35 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // formals3 = ldf formals
  Rsh_Fir_reg_formals3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D14()
  // L20()
  goto L20_;

D14_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p7 = prom<V +>{
  //   __3 = ld `+`;
  //   __4 = force? __3;
  //   checkMissing(__4);
  //   return __4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r23 = dyn formals3(p7)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L21() else D15()
  // L21()
  goto L21_;

D15_:;
  // deopt 39 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // formals4 = ldf formals
  Rsh_Fir_reg_formals4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D16()
  // L22()
  goto L22_;

D16_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p9 = prom<V +>{
  //   args = ldf args;
  //   p8 = prom<V +>{
  //     __5 = ld `+`;
  //     __6 = force? __5;
  //     checkMissing(__6);
  //     return __6;
  //   };
  //   r25 = dyn args(p8);
  //   return r25;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r27 = dyn formals4(p9)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals4_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L23() else D17()
  // L23()
  goto L23_;

D17_:;
  // deopt 43 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // r28 = clos inner2501545716
  Rsh_Fir_reg_r28_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st f = r28
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // alist = ldf alist
  Rsh_Fir_reg_alist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L24() else D18()
  // L24()
  goto L24_;

D18_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r29 = dyn alist[a, b](<missing>, 3.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_alist, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L25() else D19()
  // L25()
  goto L25_;

D19_:;
  // deopt 53 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // l = ld f
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // formals__ = ldf `formals<-`
  Rsh_Fir_reg_formals__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L26() else D20()
  // L26()
  goto L26_;

D20_:;
  // deopt 55 [r29, l, r29]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L26_:;
  // r30 = dyn formals__(l, NULL, r29)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals__, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L27() else D21()
  // L27()
  goto L27_;

D21_:;
  // deopt 57 [r29, r30]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L27_:;
  // st f = r30
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L28() else D22()
  // L28()
  goto L28_;

D22_:;
  // deopt 59 [f]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_f;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L28_:;
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // f2 = ldf f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L29() else D23()
  // L29()
  goto L29_;

D23_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // r31 = dyn f2(2.0)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L30() else D24()
  // L30()
  goto L30_;

D24_:;
  // deopt 64 [r31]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stats;
  SEXP Rsh_Fir_reg_stats1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // stats1 = force? stats
  Rsh_Fir_reg_stats1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stats);
  // checkMissing(stats1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_stats1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return stats1
  return Rsh_Fir_reg_stats1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm;
  SEXP Rsh_Fir_reg_lm1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm = ld lm
  Rsh_Fir_reg_lm = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lm1 = force? lm
  Rsh_Fir_reg_lm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm);
  // checkMissing(lm1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_lm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return lm1
  return Rsh_Fir_reg_lm1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm2_;
  SEXP Rsh_Fir_reg_lm3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm2 = ld lm
  Rsh_Fir_reg_lm2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lm3 = force? lm2
  Rsh_Fir_reg_lm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm2_);
  // checkMissing(lm3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_lm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return lm3
  return Rsh_Fir_reg_lm3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm4_;
  SEXP Rsh_Fir_reg_lm5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm4 = ld lm
  Rsh_Fir_reg_lm4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lm5 = force? lm4
  Rsh_Fir_reg_lm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm4_);
  // checkMissing(lm5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_lm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return lm5
  return Rsh_Fir_reg_lm5_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formals2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // formals2 = ldf formals
  Rsh_Fir_reg_formals2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p4 = prom<V +>{
  //   lm6 = ld lm;
  //   lm7 = force? lm6;
  //   checkMissing(lm7);
  //   return lm7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r17 = dyn formals2(p4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm6_;
  SEXP Rsh_Fir_reg_lm7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm6 = ld lm
  Rsh_Fir_reg_lm6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lm7 = force? lm6
  Rsh_Fir_reg_lm7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lm6_);
  // checkMissing(lm7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_lm7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return lm7
  return Rsh_Fir_reg_lm7_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg___2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ld `+`
  Rsh_Fir_reg___1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // __2 = force? __1
  Rsh_Fir_reg___2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___1_);
  // checkMissing(__2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg___2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return __2
  return Rsh_Fir_reg___2_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg___4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __3 = ld `+`
  Rsh_Fir_reg___3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // __4 = force? __3
  Rsh_Fir_reg___4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___3_);
  // checkMissing(__4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg___4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return __4
  return Rsh_Fir_reg___4_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_args;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // args = ldf args
  Rsh_Fir_reg_args = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p8 = prom<V +>{
  //   __5 = ld `+`;
  //   __6 = force? __5;
  //   checkMissing(__6);
  //   return __6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r25 = dyn args(p8)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_args, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg___6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __5 = ld `+`
  Rsh_Fir_reg___5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // __6 = force? __5
  Rsh_Fir_reg___6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___5_);
  // checkMissing(__6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg___6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return __6
  return Rsh_Fir_reg___6_;
}
SEXP Rsh_Fir_user_function_inner2171172657_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2171172657 dynamic dispatch ([fun, envir])

  return Rsh_Fir_user_version_inner2171172657_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2171172657_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2171172657 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2171172657/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_fun;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_fun_isMissing;
  SEXP Rsh_Fir_reg_fun_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_fun1_;
  SEXP Rsh_Fir_reg_fun2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_get;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_fun5_;
  SEXP Rsh_Fir_reg_fun6_;
  SEXP Rsh_Fir_reg_formals1;
  SEXP Rsh_Fir_reg_r14_;

  // Bind parameters
  Rsh_Fir_reg_fun = PARAMS[0];
  Rsh_Fir_reg_envir = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // fun_isMissing = missing.0(fun)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_fun;
  Rsh_Fir_reg_fun_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args29);
  // if fun_isMissing then L0() else L1(fun)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fun_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(fun)
    Rsh_Fir_reg_fun_orDefault = Rsh_Fir_reg_fun;
    goto L1_;
  }

L0_:;
  // p1 = prom<V +>{
  //   sys_function = ldf `sys.function`;
  //   p = prom<V +>{
  //     sys_parent = ldf `sys.parent`;
  //     r = dyn sys_parent();
  //     return r;
  //   };
  //   r2 = dyn sys_function(p);
  //   return r2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2171172657_, 0, NULL, CCP, RHO);
  // goto L1(p1)
  // L1(p1)
  Rsh_Fir_reg_fun_orDefault = Rsh_Fir_reg_p1_1;
  goto L1_;

L1_:;
  // st fun = fun_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_fun_orDefault, RHO);
  (void)(Rsh_Fir_reg_fun_orDefault);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args31);
  // if envir_isMissing then L2() else L3(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L3_;
  }

L2_:;
  // p2 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r4 = dyn parent_frame();
  //   return r4;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2171172657_2, 0, NULL, CCP, RHO);
  // goto L3(p2)
  // L3(p2)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p2_1;
  goto L3_;

L3_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L4_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c1 then L11() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L5()
    goto L5_;
  }

L8_:;
  // fun1 = ld fun
  Rsh_Fir_reg_fun1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r6 = dyn base(<sym fun>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L4_;

D0_:;
  // deopt 1 [fun1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_fun1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L10_:;
  // fun2 = force? fun1
  Rsh_Fir_reg_fun2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun1_);
  // checkMissing(fun2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_fun2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c = `is.character`(fun2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_fun2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args37);
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_c;
  goto L4_;

L11_:;
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_1;

L12_:;
  // p3 = prom<V +>{
  //   fun3 = ld fun;
  //   fun4 = force? fun3;
  //   checkMissing(fun4);
  //   return fun4;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2171172657_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   envir1 = ld envir;
  //   envir2 = force? envir1;
  //   checkMissing(envir2);
  //   return envir2;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2171172657_4, 0, NULL, CCP, RHO);
  // r10 = dyn get[, mode, envir](p3, "function", p4)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L15_:;
  // fun5 = ld fun
  Rsh_Fir_reg_fun5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L16_:;
  // r12 = dyn base1(<lang formals(fun)>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r12_1;
  goto L7_;

D2_:;
  // deopt 11 [r10]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 17 [fun5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_fun5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L13_:;
  // st fun = r10
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // goto L6()
  // L6()
  goto L6_;

L17_:;
  // fun6 = force? fun5
  Rsh_Fir_reg_fun6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun5_);
  // checkMissing(fun6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_fun6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // formals = ldf formals in base
  Rsh_Fir_reg_formals1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r14 = dyn formals(fun6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_fun6_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals1, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 20 [r14]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r14_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner2171172657_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_function;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2171172657/0: expected 0, got %d", NCAPTURES);

  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p = prom<V +>{
  //   sys_parent = ldf `sys.parent`;
  //   r = dyn sys_parent();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2171172657_1, 0, NULL, CCP, RHO);
  // r2 = dyn sys_function(p)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner2171172657_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2171172657/0: expected 0, got %d", NCAPTURES);

  // sys_parent = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // r = dyn sys_parent()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2171172657_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r4_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2171172657/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // r4 = dyn parent_frame()
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_1;
}
SEXP Rsh_Fir_user_promise_inner2171172657_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fun3_;
  SEXP Rsh_Fir_reg_fun4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2171172657/0: expected 0, got %d", NCAPTURES);

  // fun3 = ld fun
  Rsh_Fir_reg_fun3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // fun4 = force? fun3
  Rsh_Fir_reg_fun4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun3_);
  // checkMissing(fun4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_fun4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return fun4
  return Rsh_Fir_reg_fun4_;
}
SEXP Rsh_Fir_user_promise_inner2171172657_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2171172657/0: expected 0, got %d", NCAPTURES);

  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return envir2
  return Rsh_Fir_reg_envir2_;
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
  SEXP Rsh_Fir_reg_a;
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_b;
  SEXP Rsh_Fir_reg_b1_;
  SEXP Rsh_Fir_reg_r2;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [a]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L0_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // b = ld b
  Rsh_Fir_reg_b = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 1 [a1, b]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_b;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L1_:;
  // b1 = force? b
  Rsh_Fir_reg_b1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b);
  // checkMissing(b1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_b1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r = `+`(a1, b1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_b1_;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args46);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
