#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_effects;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r17_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner64320599
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner64320599_, RHO, CCP);
  // st effects = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // st y = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L4_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(<int 1, 2, 3>, 7.0, 5.0)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<lang `:`(1.0, 3.0)>, 7.0, 5.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 10 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st x = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // effects = ldf effects
  Rsh_Fir_reg_effects = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L6_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L7_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn c1(<int 1, 2, 3>, <int 6, 7>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L8_:;
  // r4 = dyn base1(<lang `:`(1.0, 3.0)>, <lang `:`(6.0, 7.0)>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D1_:;
  // deopt 19 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L10_:;
  // p1 = prom<V +>{
  //   lm = ldf lm;
  //   p = prom<V +>{
  //     __ = ldf `~` in base;
  //     r7 = dyn __(<sym y>, <sym x>);
  //     return r7;
  //   };
  //   r9 = dyn lm(p);
  //   return r9;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r11 = dyn effects(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_effects, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // st ee = r11
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;

L12_:;
  // sym3 = ldf round
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf round in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard3 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L13_:;
  // r12 = dyn base2(<lang round(`-`(ee, effects(lm(`~`(`+`(y, 10.0), I(`-`(x, 3.8)))))), 3.0)>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L2_;

L3_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r17 = dyn c2(r15)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L14_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r16 = dyn round(<lang `-`(ee, effects(lm(`~`(`+`(y, 10.0), I(`-`(x, 3.8))))))>, 3.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r16)
  // L3(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L3_;

L15_:;
  // r14 = dyn base3(<lang `-`(ee, effects(lm(`~`(`+`(y, 10.0), I(`-`(x, 3.8))))))>, 3.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L3_;

D4_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2(r17)
  // L2(r17)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r17_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lm;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // lm = ldf lm
  Rsh_Fir_reg_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // p = prom<V +>{
  //   __ = ldf `~` in base;
  //   r7 = dyn __(<sym y>, <sym x>);
  //   return r7;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn lm(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lm, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r7 = dyn __(<sym y>, <sym x>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner64320599 dynamic dispatch ([object, `...`])

  return Rsh_Fir_user_version_inner64320599_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner64320599 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner64320599/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
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
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r2 = dyn UseMethod("effects")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("effects")
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
