#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1649981529_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1649981529_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_as_numeric;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_as_numeric1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_as_numeric2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_levels;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_as_numeric3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_f6_;
  SEXP Rsh_Fir_reg_f7_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1649981529
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1649981529_, RHO, CCP);
  // st numeric = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf `as.numeric`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf `as.numeric` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L7_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // r1 = dyn base(<lang c("-.1", " 2.7 ", "B")>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D2_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn as_numeric(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L9_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn c("-.1", " 2.7 ", "B")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r3 = dyn base1("-.1", " 2.7 ", "B")
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

L13_:;
  // p = prom<V +>{
  //   return <int 5, 6, 7, 8, 9, 10>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r8 = dyn factor(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D0_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L12_:;
  // goto L0()
  // L0()
  goto L0_;

L14_:;
  // st f = r8
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym2 = ldf `as.numeric`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf `as.numeric` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // sym3 = ldf `as.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf `as.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L15_:;
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L16_:;
  // r9 = dyn base2(<sym f>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D4_:;
  // deopt 21 [f]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_f;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // sym5 = ldf `as.numeric`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base5 = ldf `as.numeric` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard5 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L17_:;
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // as_numeric1 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r11 = dyn as_numeric1(f1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L19_:;
  // sym4 = ldf `as.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf `as.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard4 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // r12 = dyn base3(<lang as.character(f)>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D5_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // as_numeric2 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r17 = dyn as_numeric2(r15)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric2_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L5_:;
  // c1 = `is.object`(r19)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args16);
  // if c1 then L31() else L32(r19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L32(r19)
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r19_;
    goto L32_;
  }

L18_:;
  // goto L2()
  // L2()
  goto L2_;

L21_:;
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L22_:;
  // r14 = dyn base4(<sym f>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L4_;

L26_:;
  // levels = ldf levels
  Rsh_Fir_reg_levels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

L27_:;
  // r18 = dyn base5(<lang levels(f)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r18)
  // L5(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L5_;

D6_:;
  // deopt 29 [f2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 34 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L23_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r16 = dyn as_character(f3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L25_:;
  // goto L3()
  // L3()
  goto L3_;

L28_:;
  // p1 = prom<V +>{
  //   f4 = ld f;
  //   f5 = force? f4;
  //   checkMissing(f5);
  //   return f5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r21 = dyn levels(p1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L31_:;
  // dr = tryDispatchBuiltin.1("[", r19)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L33() else L32(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L33()
    goto L33_;
  } else {
  // L32(dr)
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_dr;
    goto L32_;
  }

L32_:;
  // f6 = ld f
  Rsh_Fir_reg_f6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

D7_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 40 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 43 [r24, f6]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_f6_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L4_;

L29_:;
  // as_numeric3 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r22 = dyn as_numeric3(r21)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

L33_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L34_:;
  // f7 = force? f6
  Rsh_Fir_reg_f7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f6_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r25 = dyn __(r24, f7)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_f7_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L6(r25)
  // L6(r25)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r25_;
  goto L6_;

D11_:;
  // deopt 42 [r22]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L5(r22)
  // L5(r22)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r22_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 5, 6, 7, 8, 9, 10>
  return Rsh_const(CCP, 8);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f4_;
  SEXP Rsh_Fir_reg_f5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f4 = ld f
  Rsh_Fir_reg_f4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // f5 = force? f4
  Rsh_Fir_reg_f5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f4_);
  // checkMissing(f5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_f5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return f5
  return Rsh_Fir_reg_f5_;
}
SEXP Rsh_Fir_user_function_inner1649981529_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1649981529 dynamic dispatch ([length])

  return Rsh_Fir_user_version_inner1649981529_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1649981529_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1649981529 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1649981529/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_length_isMissing;
  SEXP Rsh_Fir_reg_length_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r2_;

  // Bind parameters
  Rsh_Fir_reg_length = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // length_isMissing = missing.0(length)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_length;
  Rsh_Fir_reg_length_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args28);
  // if length_isMissing then L0(0) else L0(length)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_length_isMissing)) {
  // L0(0)
    Rsh_Fir_reg_length_orDefault = Rsh_const(CCP, 16);
    goto L0_;
  } else {
  // L0(length)
    Rsh_Fir_reg_length_orDefault = Rsh_Fir_reg_length;
    goto L0_;
  }

L0_:;
  // st length = length_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_length_orDefault, RHO);
  (void)(Rsh_Fir_reg_length_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L2_:;
  // length1 = ld length
  Rsh_Fir_reg_length1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<lang vector("double", length)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 [length1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_length1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L4_:;
  // length2 = force? length1
  Rsh_Fir_reg_length2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length1_);
  // checkMissing(length2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_length2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r2 = dyn vector("double", length2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
