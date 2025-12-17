#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_form;
  SEXP Rsh_Fir_reg_form1_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_a0_;
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_a4_;
  SEXP Rsh_Fir_reg_a5_;
  SEXP Rsh_Fir_reg_as_numeric;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_a6_;
  SEXP Rsh_Fir_reg_a7_;
  SEXP Rsh_Fir_reg_a8_;
  SEXP Rsh_Fir_reg_a9_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_a10_;
  SEXP Rsh_Fir_reg_a11_;
  SEXP Rsh_Fir_reg_as_character2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_as_character3_;
  SEXP Rsh_Fir_reg_r32_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1649981529
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1649981529_, RHO, CCP);
  // st character = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r1 = dyn __(<sym y>, <lang `+`(`+`(a, b), c)>)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // st form = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L7_:;
  // form = ld form
  Rsh_Fir_reg_form = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r2 = dyn base(<sym form>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 8 [form]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_form;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // form1 = force? form
  Rsh_Fir_reg_form1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_form);
  // checkMissing(form1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_form1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r4 = dyn as_character(form1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_form1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L11_:;
  // p = prom<V +>{
  //   form2 = ld form;
  //   form3 = force? form2;
  //   checkMissing(form3);
  //   return form3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn deparse(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D1_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0()
  // L0()
  goto L0_;

L12_:;
  // st a0 = 0.011011011011011011
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L1_:;
  // st a1 = r8
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

L13_:;
  // a0 = ld a0
  Rsh_Fir_reg_a0_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L14_:;
  // r7 = dyn base1(<sym a0>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

D4_:;
  // deopt 21 [a0]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_a0_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // a1 = force? a0
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a0_);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r9 = dyn as_character1(a1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L17_:;
  // p1 = prom<V +>{
  //   a2 = ld a0;
  //   a3 = force? a2;
  //   checkMissing(a3);
  //   return a3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r11 = dyn format[, digits](p1, 16.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D5_:;
  // deopt 24 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 31 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L18_:;
  // sym2 = ldf `as.numeric`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `as.numeric` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L2_:;
  // st a2 = r13
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // a6 = ld a2
  Rsh_Fir_reg_a6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

L19_:;
  // a4 = ld a1
  Rsh_Fir_reg_a4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

L20_:;
  // r12 = dyn base2(<sym a1>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L2_;

D8_:;
  // deopt 34 [a4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_a4_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 39 [a6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_a6_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // a5 = force? a4
  Rsh_Fir_reg_a5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a4_);
  // checkMissing(a5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_a5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r14 = dyn as_numeric(a5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_a5_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

L23_:;
  // a7 = force? a6
  Rsh_Fir_reg_a7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a6_);
  // checkMissing(a7)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_a7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // a8 = ld a0
  Rsh_Fir_reg_a8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L24() else D11()
  // L24()
  goto L24_;

D9_:;
  // deopt 37 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 40 [a7, a8]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_a7_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_a8_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L2(r14)
  // L2(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L2_;

L24_:;
  // a9 = force? a8
  Rsh_Fir_reg_a9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a8_);
  // checkMissing(a9)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_a9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // `-`(a7, a9)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_a7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_a9_;
  (void)(Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args19));
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L3_:;
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L29() else D14()
  // L29()
  goto L29_;

L25_:;
  // a10 = ld a2
  Rsh_Fir_reg_a10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

L26_:;
  // r16 = dyn base3(<sym a2>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D12_:;
  // deopt 45 [a10]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_a10_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // a11 = force? a10
  Rsh_Fir_reg_a11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a10_);
  // checkMissing(a11)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_a11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // as_character2 = ldf `as.character` in base
  Rsh_Fir_reg_as_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r18 = dyn as_character2(a11)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_a11_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L28() else D13()
  // L28()
  goto L28_;

L29_:;
  // p2 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r20):
  //   return r20;
  // L1():
  //   a12 = ld a0;
  //   a13 = force? a12;
  //   checkMissing(a13);
  //   a14 = ld a2;
  //   a15 = force? a14;
  //   checkMissing(a15);
  //   c = ldf c in base;
  //   r21 = dyn c(a13, a15);
  //   goto L0(r21);
  // L2():
  //   r19 = dyn base4(<sym a0>, <sym a2>);
  //   goto L0(r19);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r23 = dyn print[, digits](p2, 16.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L30() else D15()
  // L30()
  goto L30_;

D13_:;
  // deopt 48 [r18]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 54 [r23]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3()
  // L3()
  goto L3_;

L30_:;
  // sym5 = ldf `as.character`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf `as.character` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard5 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

L31_:;
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard6 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L32_:;
  // r24 = dyn base5(<lang list(A="Abc", xy=c("x", "y"))>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L4(r24)
  // L4(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L4_;

L5_:;
  // as_character3 = ldf `as.character` in base
  Rsh_Fir_reg_as_character3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r32 = dyn as_character3(r27)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L39() else D18()
  // L39()
  goto L39_;

L33_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard7 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L34_:;
  // r26 = dyn base6[A, xy]("Abc", <lang c("x", "y")>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5(r26)
  // L5(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L5_;

D18_:;
  // deopt 71 [r32]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L6_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r31 = dyn list("Abc", r29)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L38() else D17()
  // L38()
  goto L38_;

L35_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r30 = dyn c1("x", "y")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L37() else D16()
  // L37()
  goto L37_;

L36_:;
  // r28 = dyn base7("x", "y")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L6(r28)
  // L6(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L6_;

L39_:;
  // goto L4(r32)
  // L4(r32)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r32_;
  goto L4_;

D16_:;
  // deopt 66 [r30]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 69 [r31]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L6(r30)
  // L6(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L6_;

L38_:;
  // goto L5(r31)
  // L5(r31)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r31_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_form2_;
  SEXP Rsh_Fir_reg_form3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // form2 = ld form
  Rsh_Fir_reg_form2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // form3 = force? form2
  Rsh_Fir_reg_form3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_form2_);
  // checkMissing(form3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_form3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return form3
  return Rsh_Fir_reg_form3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_a2_;
  SEXP Rsh_Fir_reg_a3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // a2 = ld a0
  Rsh_Fir_reg_a2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // a3 = force? a2
  Rsh_Fir_reg_a3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a2_);
  // checkMissing(a3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_a3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return a3
  return Rsh_Fir_reg_a3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_a12_;
  SEXP Rsh_Fir_reg_a13_;
  SEXP Rsh_Fir_reg_a14_;
  SEXP Rsh_Fir_reg_a15_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r20
  return Rsh_Fir_reg_r20_;

L1_:;
  // a12 = ld a0
  Rsh_Fir_reg_a12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // a13 = force? a12
  Rsh_Fir_reg_a13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a12_);
  // checkMissing(a13)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_a13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // a14 = ld a2
  Rsh_Fir_reg_a14_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // a15 = force? a14
  Rsh_Fir_reg_a15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a14_);
  // checkMissing(a15)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_a15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r21 = dyn c(a13, a15)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_a13_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_a15_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L0_;

L2_:;
  // r19 = dyn base4(<sym a0>, <sym a2>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;
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
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_length = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // length_isMissing = missing.0(length)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_length;
  Rsh_Fir_reg_length_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if length_isMissing then L0(0) else L0(length)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_length_isMissing)) {
  // L0(0)
    Rsh_Fir_reg_length_orDefault = Rsh_const(CCP, 25);
    goto L0_;
  } else {
  // L0(length)
    Rsh_Fir_reg_length_orDefault = Rsh_Fir_reg_length;
    goto L0_;
  }

L0_:;
  // st length = length_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_length_orDefault, RHO);
  (void)(Rsh_Fir_reg_length_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
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
  Rsh_Fir_reg_length1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<lang vector("character", length)>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 [length1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_length1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L4_:;
  // length2 = force? length1
  Rsh_Fir_reg_length2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length1_);
  // checkMissing(length2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_length2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r2 = dyn vector("character", length2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
