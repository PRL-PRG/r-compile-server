#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3897153689_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3897153689_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3897153689_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3897153689_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3897153689
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3897153689_, RHO, CCP);
  // st `.deparseOpts` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner3897153689_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3897153689 dynamic dispatch ([control])

  return Rsh_Fir_user_version_inner3897153689_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3897153689_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3897153689 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3897153689/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_control;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_control1_;
  SEXP Rsh_Fir_reg_control2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_pmatch;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_opts;
  SEXP Rsh_Fir_reg_opts1_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_opts6_;
  SEXP Rsh_Fir_reg_opts7_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_opts8_;
  SEXP Rsh_Fir_reg_opts9_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_opts18_;
  SEXP Rsh_Fir_reg_opts19_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_any3_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_unique1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg__in_1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_opts30_;
  SEXP Rsh_Fir_reg_opts31_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_sum1_;
  SEXP Rsh_Fir_reg_r85_;

  // Bind parameters
  Rsh_Fir_reg_control = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st control = control
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_control, RHO);
  (void)(Rsh_Fir_reg_control);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L0_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args1);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c then L22() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L3_:;
  // c1 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c1 then L31() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym7 = ldf any
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base7 = ldf any in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard7 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L6_:;
  // c3 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args5);
  // if c3 then L39() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L39()
    goto L39_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym11 = ldf any
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base11 = ldf any in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard11 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L8_:;
  // c4 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c4 then L44() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L44()
    goto L44_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L48() else D14()
  // L48()
  goto L48_;

L11_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L59() else D20()
  // L59()
  goto L59_;

L12_:;
  // c8 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // if c8 then L55() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L55()
    goto L55_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L11()
  // L11()
  goto L11_;

L14_:;
  // c17 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c17 then L65() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L65()
    goto L65_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym13 = ldf sum
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base13 = ldf sum in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard13 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r82
  return Rsh_Fir_reg_r82_;

L18_:;
  // control1 = ld control
  Rsh_Fir_reg_control1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r = dyn base(<sym control>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [control1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_control1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // control2 = force? control1
  Rsh_Fir_reg_control2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control1_);
  // checkMissing(control2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_control2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn length(control2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_control2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 0.0
  return Rsh_const(CCP, 8);

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p = prom<V +>{
  //   sym1 = ldf `as.character`;
  //   base1 = ldf `as.character` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   control3 = ld control;
  //   control4 = force? control3;
  //   checkMissing(control4);
  //   as_character = ldf `as.character` in base;
  //   r8 = dyn as_character(control4);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(<sym control>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   __deparseOpts = ld `..deparseOpts`;
  //   __deparseOpts1 = force? __deparseOpts;
  //   checkMissing(__deparseOpts1);
  //   return __deparseOpts1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_1, 0, NULL, CCP, RHO);
  // r11 = dyn pmatch(p, p1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

D3_:;
  // deopt 16 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // st opts = r11
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym2 = ldf anyNA
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf anyNA in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // opts = ld opts
  Rsh_Fir_reg_opts = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L28_:;
  // r12 = dyn base2(<sym opts>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L3_;

D4_:;
  // deopt 20 [opts]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_opts;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // opts1 = force? opts
  Rsh_Fir_reg_opts1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts);
  // checkMissing(opts1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_opts1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r14 = dyn anyNA(opts1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_opts1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 23 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L3_;

L31_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p7 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p3 = prom<V +>{
  //     ngettext = ldf ngettext;
  //     p2 = prom<V +>{
  //       sym3 = ldf `as.integer`;
  //       base3 = ldf `as.integer` in base;
  //       guard3 = `==`.4(sym3, base3);
  //       if guard3 then L3() else L4();
  //     L0(r16):
  //       return r16;
  //     L3():
  //       sym4 = ldf sum;
  //       base4 = ldf sum in base;
  //       guard4 = `==`.4(sym4, base4);
  //       if guard4 then L5() else L6();
  //     L4():
  //       r15 = dyn base3(<lang sum(is.na(opts))>);
  //       goto L0(r15);
  //     L1(r18):
  //       as_integer = ldf `as.integer` in base;
  //       r23 = dyn as_integer(r18);
  //       goto L0(r23);
  //     L5():
  //       sym5 = ldf `is.na`;
  //       base5 = ldf `is.na` in base;
  //       guard5 = `==`.4(sym5, base5);
  //       if guard5 then L7() else L8();
  //     L6():
  //       r17 = dyn base4(<lang is.na(opts)>);
  //       goto L1(r17);
  //     L2(r20):
  //       sum = ldf sum in base;
  //       r22 = dyn sum(r20);
  //       goto L1(r22);
  //     L7():
  //       opts2 = ld opts;
  //       opts3 = force? opts2;
  //       checkMissing(opts3);
  //       is_na = ldf `is.na` in base;
  //       r21 = dyn is_na(opts3);
  //       goto L2(r21);
  //     L8():
  //       r19 = dyn base5(<sym opts>);
  //       goto L2(r19);
  //     };
  //     r25 = dyn ngettext(p2, "deparse option %s is not recognized", "deparse options %s are not recognized");
  //     return r25;
  //   };
  //   p6 = prom<V +>{
  //     paste = ldf paste;
  //     p5 = prom<V +>{
  //       sQuote = ldf sQuote;
  //       p4 = prom<V +>{
  //         control5 = ld control;
  //         control6 = force? control5;
  //         checkMissing(control6);
  //         c2 = `is.object`(control6);
  //         if c2 then L2() else L3(control6);
  //       L0(dx1):
  //         return dx1;
  //       L2():
  //         dr = tryDispatchBuiltin.1("[", control6);
  //         dc = getTryDispatchBuiltinDispatched(dr);
  //         if dc then L4() else L3(dr);
  //       L3(control8):
  //         sym6 = ldf `is.na`;
  //         base6 = ldf `is.na` in base;
  //         guard6 = `==`.4(sym6, base6);
  //         if guard6 then L5() else L6();
  //       L1(control11, r28):
  //         __ = ldf `[` in base;
  //         r30 = dyn __(control11, r28);
  //         goto L0(r30);
  //       L4():
  //         dx = getTryDispatchBuiltinValue(dr);
  //         goto L0(dx);
  //       L5():
  //         opts4 = ld opts;
  //         opts5 = force? opts4;
  //         checkMissing(opts5);
  //         is_na1 = ldf `is.na` in base;
  //         r29 = dyn is_na1(opts5);
  //         goto L1(control8, r29);
  //       L6():
  //         r27 = dyn base6(<sym opts>);
  //         goto L1(control8, r27);
  //       };
  //       r32 = dyn sQuote(p4);
  //       return r32;
  //     };
  //     r34 = dyn paste[, collapse](p5, ", ");
  //     return r34;
  //   };
  //   r36 = dyn sprintf(p3, p6);
  //   return r36;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_2, 0, NULL, CCP, RHO);
  // r38 = dyn stop[, `call.`, domain](p7, FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names20[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

D7_:;
  // deopt 31 [r38]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5()
  // L5()
  goto L5_;

L35_:;
  // opts6 = ld opts
  Rsh_Fir_reg_opts6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

L36_:;
  // r40 = dyn base7(<lang `==`(opts, 1)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L6(r40)
  // L6(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L6_;

D8_:;
  // deopt 36 [opts6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_opts6_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L37_:;
  // opts7 = force? opts6
  Rsh_Fir_reg_opts7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts6_);
  // checkMissing(opts7)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_opts7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r42 = `==`(opts7, 1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_opts7_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args51);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r43 = dyn any(r42)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

D9_:;
  // deopt 41 [r43]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r43)
  // L6(r43)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r43_;
  goto L6_;

L39_:;
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard8 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // opts8 = ld opts
  Rsh_Fir_reg_opts8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

L41_:;
  // r44 = dyn base8(<lang `==`(opts, 13)>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L8(r44)
  // L8(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L8_;

D10_:;
  // deopt 44 [opts8]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_opts8_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // opts9 = force? opts8
  Rsh_Fir_reg_opts9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts8_);
  // checkMissing(opts9)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_opts9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r46 = `==`(opts9, 13)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_opts9_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args56);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r47 = dyn any1(r46)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

D11_:;
  // deopt 49 [r47]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L8(r47)
  // L8(r47)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r47_;
  goto L8_;

L44_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

D12_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // r48 = dyn stop1("\"all\" and \"exact\" are mutually exclusive")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

D13_:;
  // deopt 53 [r48]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L10()
  // L10()
  goto L10_;

D14_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p8 = prom<V +>{
  //   sym9 = ldf c;
  //   base9 = ldf c in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L5() else L6();
  // L0(r51):
  //   return r51;
  // L5():
  //   opts10 = ld opts;
  //   opts11 = force? opts10;
  //   checkMissing(opts11);
  //   c5 = `is.object`(opts11);
  //   if c5 then L7() else L8(opts11);
  // L6():
  //   r50 = dyn base9(<lang `[`(opts, `!=`(opts, 1))>, <lang `:`(2.0, 6.0)>, 8, <lang if(`!`(any(`==`(opts, 10))), 11)>, 12);
  //   goto L0(r50);
  // L1(dx3):
  //   sym10 = ldf any;
  //   base10 = ldf any in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L10() else L11();
  // L7():
  //   dr2 = tryDispatchBuiltin.1("[", opts11);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L9() else L8(dr2);
  // L8(opts13):
  //   opts14 = ld opts;
  //   opts15 = force? opts14;
  //   checkMissing(opts15);
  //   r52 = `!=`(opts15, 1);
  //   __1 = ldf `[` in base;
  //   r53 = dyn __1(opts13, r52);
  //   goto L1(r53);
  // L2(r55):
  //   r58 = `!`(r55);
  //   c6 = `as.logical`(r58);
  //   if c6 then L12() else L3();
  // L9():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx2);
  // L10():
  //   opts16 = ld opts;
  //   opts17 = force? opts16;
  //   checkMissing(opts17);
  //   r56 = `==`(opts17, 10);
  //   any2 = ldf any in base;
  //   r57 = dyn any2(r56);
  //   goto L2(r57);
  // L11():
  //   r54 = dyn base10(<lang `==`(opts, 10)>);
  //   goto L2(r54);
  // L3():
  //   goto L4(NULL);
  // L4(r59):
  //   c7 = ldf c in base;
  //   r60 = dyn c7(dx3, <int 2, 3, 4, 5, 6>, 8, r59, 12);
  //   goto L0(r60);
  // L12():
  //   goto L4(11);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_8, 0, NULL, CCP, RHO);
  // r62 = dyn unique(p8)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

D15_:;
  // deopt 59 [r62]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // st opts = r62
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // goto L11()
  // L11()
  goto L11_;

L51_:;
  // opts18 = ld opts
  Rsh_Fir_reg_opts18_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L53() else D16()
  // L53()
  goto L53_;

L52_:;
  // r64 = dyn base11(<lang `==`(opts, 13)>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L12(r64)
  // L12(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L12_;

D16_:;
  // deopt 63 [opts18]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_opts18_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // opts19 = force? opts18
  Rsh_Fir_reg_opts19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts18_);
  // checkMissing(opts19)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_opts19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r66 = `==`(opts19, 13)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_opts19_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args80);
  // any3 = ldf any in base
  Rsh_Fir_reg_any3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r67 = dyn any3(r66)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any3_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L54() else D17()
  // L54()
  goto L54_;

D17_:;
  // deopt 68 [r67]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L12(r67)
  // L12(r67)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r67_;
  goto L12_;

L55_:;
  // unique1 = ldf unique
  Rsh_Fir_reg_unique1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L56() else D18()
  // L56()
  goto L56_;

D18_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p9 = prom<V +>{
  //   sym12 = ldf c;
  //   base12 = ldf c in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L2() else L3();
  // L0(r69):
  //   return r69;
  // L2():
  //   opts20 = ld opts;
  //   opts21 = force? opts20;
  //   checkMissing(opts21);
  //   c9 = `is.object`(opts21);
  //   if c9 then L4() else L5(opts21);
  // L3():
  //   r68 = dyn base12(<lang `[`(opts, `!=`(opts, 13))>, <lang `:`(2.0, 6.0)>, 8, 10, 12);
  //   goto L0(r68);
  // L1(dx5):
  //   c10 = ldf c in base;
  //   r72 = dyn c10(dx5, <int 2, 3, 4, 5, 6>, 8, 10, 12);
  //   goto L0(r72);
  // L4():
  //   dr4 = tryDispatchBuiltin.1("[", opts21);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L6() else L5(dr4);
  // L5(opts23):
  //   opts24 = ld opts;
  //   opts25 = force? opts24;
  //   checkMissing(opts25);
  //   r70 = `!=`(opts25, 13);
  //   __2 = ldf `[` in base;
  //   r71 = dyn __2(opts23, r70);
  //   goto L1(r71);
  // L6():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L1(dx4);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_9, 0, NULL, CCP, RHO);
  // r74 = dyn unique1(p9)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique1_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

D19_:;
  // deopt 72 [r74]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L57_:;
  // st opts = r74
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // goto L11()
  // L11()
  goto L11_;

D20_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p10 = prom<V +>{
  //   opts26 = ld opts;
  //   opts27 = force? opts26;
  //   checkMissing(opts27);
  //   return opts27;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_10, 0, NULL, CCP, RHO);
  // r76 = dyn _in_(10, p10)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

D21_:;
  // deopt 80 [r76]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // c11 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args96);
  // if c11 then L61() else L14(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L61()
    goto L61_;
  } else {
  // L14(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L14_;
  }

L61_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L62() else D22()
  // L62()
  goto L62_;

D22_:;
  // deopt 82 [c11]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L62_:;
  // p11 = prom<V +>{
  //   opts28 = ld opts;
  //   opts29 = force? opts28;
  //   checkMissing(opts29);
  //   return opts29;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_11, 0, NULL, CCP, RHO);
  // r78 = dyn _in_1(11, p11)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L63() else D23()
  // L63()
  goto L63_;

D23_:;
  // deopt 85 [c11, r78]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // c14 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args99);
  // c15 = `&&`(c11, c14)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args100);
  // goto L14(c15)
  // L14(c15)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c15_;
  goto L14_;

L65_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L66() else D24()
  // L66()
  goto L66_;

D24_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // r79 = dyn stop2("\"hexNumeric\" and \"digits17\" are mutually exclusive")
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L67() else D25()
  // L67()
  goto L67_;

D25_:;
  // deopt 90 [r79]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L16()
  // L16()
  goto L16_;

L69_:;
  // opts30 = ld opts
  Rsh_Fir_reg_opts30_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

L70_:;
  // r81 = dyn base13(<lang `^`(2.0, `(`(`-`(opts, 2.0)))>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L17(r81)
  // L17(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L17_;

D26_:;
  // deopt 96 [2.0, opts30]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_opts30_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L71_:;
  // opts31 = force? opts30
  Rsh_Fir_reg_opts31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts30_);
  // checkMissing(opts31)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_opts31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // r83 = `-`(opts31, 2.0)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_opts31_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args104);
  // r84 = `^`(2.0, r83)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args105);
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r85 = dyn sum1(r84)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

D27_:;
  // deopt 102 [r85]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L17(r85)
  // L17(r85)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r85_;
  goto L17_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_control3_;
  SEXP Rsh_Fir_reg_control4_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
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
  // control3 = ld control
  Rsh_Fir_reg_control3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // control4 = force? control3
  Rsh_Fir_reg_control4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control3_);
  // checkMissing(control4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_control4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r8 = dyn as_character(control4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_control4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1(<sym control>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___deparseOpts;
  SEXP Rsh_Fir_reg___deparseOpts1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // __deparseOpts = ld `..deparseOpts`
  Rsh_Fir_reg___deparseOpts = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // __deparseOpts1 = force? __deparseOpts
  Rsh_Fir_reg___deparseOpts1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___deparseOpts);
  // checkMissing(__deparseOpts1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg___deparseOpts1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return __deparseOpts1
  return Rsh_Fir_reg___deparseOpts1_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // p3 = prom<V +>{
  //   ngettext = ldf ngettext;
  //   p2 = prom<V +>{
  //     sym3 = ldf `as.integer`;
  //     base3 = ldf `as.integer` in base;
  //     guard3 = `==`.4(sym3, base3);
  //     if guard3 then L3() else L4();
  //   L0(r16):
  //     return r16;
  //   L3():
  //     sym4 = ldf sum;
  //     base4 = ldf sum in base;
  //     guard4 = `==`.4(sym4, base4);
  //     if guard4 then L5() else L6();
  //   L4():
  //     r15 = dyn base3(<lang sum(is.na(opts))>);
  //     goto L0(r15);
  //   L1(r18):
  //     as_integer = ldf `as.integer` in base;
  //     r23 = dyn as_integer(r18);
  //     goto L0(r23);
  //   L5():
  //     sym5 = ldf `is.na`;
  //     base5 = ldf `is.na` in base;
  //     guard5 = `==`.4(sym5, base5);
  //     if guard5 then L7() else L8();
  //   L6():
  //     r17 = dyn base4(<lang is.na(opts)>);
  //     goto L1(r17);
  //   L2(r20):
  //     sum = ldf sum in base;
  //     r22 = dyn sum(r20);
  //     goto L1(r22);
  //   L7():
  //     opts2 = ld opts;
  //     opts3 = force? opts2;
  //     checkMissing(opts3);
  //     is_na = ldf `is.na` in base;
  //     r21 = dyn is_na(opts3);
  //     goto L2(r21);
  //   L8():
  //     r19 = dyn base5(<sym opts>);
  //     goto L2(r19);
  //   };
  //   r25 = dyn ngettext(p2, "deparse option %s is not recognized", "deparse options %s are not recognized");
  //   return r25;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_3, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   paste = ldf paste;
  //   p5 = prom<V +>{
  //     sQuote = ldf sQuote;
  //     p4 = prom<V +>{
  //       control5 = ld control;
  //       control6 = force? control5;
  //       checkMissing(control6);
  //       c2 = `is.object`(control6);
  //       if c2 then L2() else L3(control6);
  //     L0(dx1):
  //       return dx1;
  //     L2():
  //       dr = tryDispatchBuiltin.1("[", control6);
  //       dc = getTryDispatchBuiltinDispatched(dr);
  //       if dc then L4() else L3(dr);
  //     L3(control8):
  //       sym6 = ldf `is.na`;
  //       base6 = ldf `is.na` in base;
  //       guard6 = `==`.4(sym6, base6);
  //       if guard6 then L5() else L6();
  //     L1(control11, r28):
  //       __ = ldf `[` in base;
  //       r30 = dyn __(control11, r28);
  //       goto L0(r30);
  //     L4():
  //       dx = getTryDispatchBuiltinValue(dr);
  //       goto L0(dx);
  //     L5():
  //       opts4 = ld opts;
  //       opts5 = force? opts4;
  //       checkMissing(opts5);
  //       is_na1 = ldf `is.na` in base;
  //       r29 = dyn is_na1(opts5);
  //       goto L1(control8, r29);
  //     L6():
  //       r27 = dyn base6(<sym opts>);
  //       goto L1(control8, r27);
  //     };
  //     r32 = dyn sQuote(p4);
  //     return r32;
  //   };
  //   r34 = dyn paste[, collapse](p5, ", ");
  //   return r34;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_5, 0, NULL, CCP, RHO);
  // r36 = dyn sprintf(p3, p6)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // p2 = prom<V +>{
  //   sym3 = ldf `as.integer`;
  //   base3 = ldf `as.integer` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L3() else L4();
  // L0(r16):
  //   return r16;
  // L3():
  //   sym4 = ldf sum;
  //   base4 = ldf sum in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L5() else L6();
  // L4():
  //   r15 = dyn base3(<lang sum(is.na(opts))>);
  //   goto L0(r15);
  // L1(r18):
  //   as_integer = ldf `as.integer` in base;
  //   r23 = dyn as_integer(r18);
  //   goto L0(r23);
  // L5():
  //   sym5 = ldf `is.na`;
  //   base5 = ldf `is.na` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L7() else L8();
  // L6():
  //   r17 = dyn base4(<lang is.na(opts)>);
  //   goto L1(r17);
  // L2(r20):
  //   sum = ldf sum in base;
  //   r22 = dyn sum(r20);
  //   goto L1(r22);
  // L7():
  //   opts2 = ld opts;
  //   opts3 = force? opts2;
  //   checkMissing(opts3);
  //   is_na = ldf `is.na` in base;
  //   r21 = dyn is_na(opts3);
  //   goto L2(r21);
  // L8():
  //   r19 = dyn base5(<sym opts>);
  //   goto L2(r19);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_4, 0, NULL, CCP, RHO);
  // r25 = dyn ngettext(p2, "deparse option %s is not recognized", "deparse options %s are not recognized")
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_opts2_;
  SEXP Rsh_Fir_reg_opts3_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard3 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r23 = dyn as_integer(r18)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r22 = dyn sum(r20)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r22)
  // L1(r22)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r22_;
  goto L1_;

L3_:;
  // sym4 = ldf sum
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf sum in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard4 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r15 = dyn base3(<lang sum(is.na(opts))>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;

L5_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard5 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r17 = dyn base4(<lang is.na(opts)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L1_;

L7_:;
  // opts2 = ld opts
  Rsh_Fir_reg_opts2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts3 = force? opts2
  Rsh_Fir_reg_opts3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts2_);
  // checkMissing(opts3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_opts3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r21 = dyn is_na(opts3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_opts3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2(r21)
  // L2(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L2_;

L8_:;
  // r19 = dyn base5(<sym opts>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r19)
  // L2(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p5 = prom<V +>{
  //   sQuote = ldf sQuote;
  //   p4 = prom<V +>{
  //     control5 = ld control;
  //     control6 = force? control5;
  //     checkMissing(control6);
  //     c2 = `is.object`(control6);
  //     if c2 then L2() else L3(control6);
  //   L0(dx1):
  //     return dx1;
  //   L2():
  //     dr = tryDispatchBuiltin.1("[", control6);
  //     dc = getTryDispatchBuiltinDispatched(dr);
  //     if dc then L4() else L3(dr);
  //   L3(control8):
  //     sym6 = ldf `is.na`;
  //     base6 = ldf `is.na` in base;
  //     guard6 = `==`.4(sym6, base6);
  //     if guard6 then L5() else L6();
  //   L1(control11, r28):
  //     __ = ldf `[` in base;
  //     r30 = dyn __(control11, r28);
  //     goto L0(r30);
  //   L4():
  //     dx = getTryDispatchBuiltinValue(dr);
  //     goto L0(dx);
  //   L5():
  //     opts4 = ld opts;
  //     opts5 = force? opts4;
  //     checkMissing(opts5);
  //     is_na1 = ldf `is.na` in base;
  //     r29 = dyn is_na1(opts5);
  //     goto L1(control8, r29);
  //   L6():
  //     r27 = dyn base6(<sym opts>);
  //     goto L1(control8, r27);
  //   };
  //   r32 = dyn sQuote(p4);
  //   return r32;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_6, 0, NULL, CCP, RHO);
  // r34 = dyn paste[, collapse](p5, ", ")
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // p4 = prom<V +>{
  //   control5 = ld control;
  //   control6 = force? control5;
  //   checkMissing(control6);
  //   c2 = `is.object`(control6);
  //   if c2 then L2() else L3(control6);
  // L0(dx1):
  //   return dx1;
  // L2():
  //   dr = tryDispatchBuiltin.1("[", control6);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L4() else L3(dr);
  // L3(control8):
  //   sym6 = ldf `is.na`;
  //   base6 = ldf `is.na` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L5() else L6();
  // L1(control11, r28):
  //   __ = ldf `[` in base;
  //   r30 = dyn __(control11, r28);
  //   goto L0(r30);
  // L4():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L5():
  //   opts4 = ld opts;
  //   opts5 = force? opts4;
  //   checkMissing(opts5);
  //   is_na1 = ldf `is.na` in base;
  //   r29 = dyn is_na1(opts5);
  //   goto L1(control8, r29);
  // L6():
  //   r27 = dyn base6(<sym opts>);
  //   goto L1(control8, r27);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3897153689_7, 0, NULL, CCP, RHO);
  // r32 = dyn sQuote(p4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_control5_;
  SEXP Rsh_Fir_reg_control6_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_control8_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_control11_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_opts4_;
  SEXP Rsh_Fir_reg_opts5_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // control5 = ld control
  Rsh_Fir_reg_control5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // control6 = force? control5
  Rsh_Fir_reg_control6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control5_);
  // checkMissing(control6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_control6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(control6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_control6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c2 then L2() else L3(control6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L2()
    goto L2_;
  } else {
  // L3(control6)
    Rsh_Fir_reg_control8_ = Rsh_Fir_reg_control6_;
    goto L3_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r30 = dyn __(control11, r28)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_control11_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r30_;
  goto L0_;

L2_:;
  // dr = tryDispatchBuiltin.1("[", control6)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_control6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_control8_ = Rsh_Fir_reg_dr;
    goto L3_;
  }

L3_:;
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard6 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L5_:;
  // opts4 = ld opts
  Rsh_Fir_reg_opts4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts5 = force? opts4
  Rsh_Fir_reg_opts5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts4_);
  // checkMissing(opts5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_opts5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r29 = dyn is_na1(opts5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_opts5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(control8, r29)
  // L1(control8, r29)
  Rsh_Fir_reg_control11_ = Rsh_Fir_reg_control8_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L1_;

L6_:;
  // r27 = dyn base6(<sym opts>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(control8, r27)
  // L1(control8, r27)
  Rsh_Fir_reg_control11_ = Rsh_Fir_reg_control8_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_opts10_;
  SEXP Rsh_Fir_reg_opts11_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_opts13_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_opts14_;
  SEXP Rsh_Fir_reg_opts15_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_opts16_;
  SEXP Rsh_Fir_reg_opts17_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_any2_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r60_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard9 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // return r51
  return Rsh_Fir_reg_r51_;

L1_:;
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard10 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L2_:;
  // r58 = `!`(r55)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args61);
  // c6 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c6 then L12() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L12()
    goto L12_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4(NULL)
  // L4(NULL)
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 38);
  goto L4_;

L4_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r60 = dyn c7(dx3, <int 2, 3, 4, 5, 6>, 8, r59, 12)
  SEXP Rsh_Fir_array_args63[5];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args63[3] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args63[4] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 5, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r60_;
  goto L0_;

L5_:;
  // opts10 = ld opts
  Rsh_Fir_reg_opts10_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts11 = force? opts10
  Rsh_Fir_reg_opts11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts10_);
  // checkMissing(opts11)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_opts11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(opts11)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_opts11_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args65);
  // if c5 then L7() else L8(opts11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L7()
    goto L7_;
  } else {
  // L8(opts11)
    Rsh_Fir_reg_opts13_ = Rsh_Fir_reg_opts11_;
    goto L8_;
  }

L6_:;
  // r50 = dyn base9(<lang `[`(opts, `!=`(opts, 1))>, <lang `:`(2.0, 6.0)>, 8, <lang if(`!`(any(`==`(opts, 10))), 11)>, 12)
  SEXP Rsh_Fir_array_args66[5];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args66[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args66[3] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args66[4] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names27[5];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_array_arg_names27[4] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 5, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L0_;

L7_:;
  // dr2 = tryDispatchBuiltin.1("[", opts11)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_opts11_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc1 then L9() else L8(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr2)
    Rsh_Fir_reg_opts13_ = Rsh_Fir_reg_dr2_;
    goto L8_;
  }

L8_:;
  // opts14 = ld opts
  Rsh_Fir_reg_opts14_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts15 = force? opts14
  Rsh_Fir_reg_opts15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts14_);
  // checkMissing(opts15)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_opts15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r52 = `!=`(opts15, 1)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_opts15_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args70);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r53 = dyn __1(opts13, r52)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_opts13_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L1(r53)
  // L1(r53)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r53_;
  goto L1_;

L9_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;

L10_:;
  // opts16 = ld opts
  Rsh_Fir_reg_opts16_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts17 = force? opts16
  Rsh_Fir_reg_opts17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts16_);
  // checkMissing(opts17)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_opts17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r56 = `==`(opts17, 10)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_opts17_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args74);
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r57 = dyn any2(r56)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L2(r57)
  // L2(r57)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r57_;
  goto L2_;

L11_:;
  // r54 = dyn base10(<lang `==`(opts, 10)>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L2(r54)
  // L2(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L2_;

L12_:;
  // goto L4(11)
  // L4(11)
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 47);
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_opts20_;
  SEXP Rsh_Fir_reg_opts21_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_opts23_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_opts24_;
  SEXP Rsh_Fir_reg_opts25_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r72_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard12 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r69
  return Rsh_Fir_reg_r69_;

L1_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r72 = dyn c10(dx5, <int 2, 3, 4, 5, 6>, 8, 10, 12)
  SEXP Rsh_Fir_array_args83[5];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args83[3] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args83[4] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names34[5];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_array_arg_names34[4] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 5, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r72)
  // L0(r72)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r72_;
  goto L0_;

L2_:;
  // opts20 = ld opts
  Rsh_Fir_reg_opts20_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts21 = force? opts20
  Rsh_Fir_reg_opts21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts20_);
  // checkMissing(opts21)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_opts21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(opts21)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_opts21_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args85);
  // if c9 then L4() else L5(opts21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L4()
    goto L4_;
  } else {
  // L5(opts21)
    Rsh_Fir_reg_opts23_ = Rsh_Fir_reg_opts21_;
    goto L5_;
  }

L3_:;
  // r68 = dyn base12(<lang `[`(opts, `!=`(opts, 13))>, <lang `:`(2.0, 6.0)>, 8, 10, 12)
  SEXP Rsh_Fir_array_args86[5];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args86[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args86[3] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args86[4] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names35[5];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_array_arg_names35[4] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 5, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r68)
  // L0(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L0_;

L4_:;
  // dr4 = tryDispatchBuiltin.1("[", opts21)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_opts21_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc2 then L6() else L5(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr4)
    Rsh_Fir_reg_opts23_ = Rsh_Fir_reg_dr4_;
    goto L5_;
  }

L5_:;
  // opts24 = ld opts
  Rsh_Fir_reg_opts24_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts25 = force? opts24
  Rsh_Fir_reg_opts25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts24_);
  // checkMissing(opts25)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_opts25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r70 = `!=`(opts25, 13)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_opts25_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args90);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r71 = dyn __2(opts23, r70)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_opts23_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L1(r71)
  // L1(r71)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r71_;
  goto L1_;

L6_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_opts26_;
  SEXP Rsh_Fir_reg_opts27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // opts26 = ld opts
  Rsh_Fir_reg_opts26_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts27 = force? opts26
  Rsh_Fir_reg_opts27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts26_);
  // checkMissing(opts27)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_opts27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return opts27
  return Rsh_Fir_reg_opts27_;
}
SEXP Rsh_Fir_user_promise_inner3897153689_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_opts28_;
  SEXP Rsh_Fir_reg_opts29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3897153689/0: expected 0, got %d", NCAPTURES);

  // opts28 = ld opts
  Rsh_Fir_reg_opts28_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // opts29 = force? opts28
  Rsh_Fir_reg_opts29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opts28_);
  // checkMissing(opts29)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_opts29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return opts29
  return Rsh_Fir_reg_opts29_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
