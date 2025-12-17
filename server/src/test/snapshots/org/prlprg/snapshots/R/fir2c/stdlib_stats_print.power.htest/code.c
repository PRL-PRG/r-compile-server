#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1591825523_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1591825523_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1591825523_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1591825523_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_power_t_test;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_print1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1591825523
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1591825523_, RHO, CCP);
  // st `print.power.htest` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // power_t_test = ldf `power.t.test`
  Rsh_Fir_reg_power_t_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn power_t_test[n, delta](20.0, 1.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_power_t_test, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st ptt = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   ptt = ld ptt;
  //   ptt1 = force? ptt;
  //   checkMissing(ptt1);
  //   return ptt1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn print[, digits](p, 4.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // print1 = ldf print
  Rsh_Fir_reg_print1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   ptt2 = ld ptt;
  //   ptt3 = force? ptt2;
  //   checkMissing(ptt3);
  //   return ptt3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn print1[, digits](p1, 12.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 22 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ptt;
  SEXP Rsh_Fir_reg_ptt1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ptt = ld ptt
  Rsh_Fir_reg_ptt = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ptt1 = force? ptt
  Rsh_Fir_reg_ptt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ptt);
  // checkMissing(ptt1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_ptt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return ptt1
  return Rsh_Fir_reg_ptt1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ptt2_;
  SEXP Rsh_Fir_reg_ptt3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ptt2 = ld ptt
  Rsh_Fir_reg_ptt2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ptt3 = force? ptt2
  Rsh_Fir_reg_ptt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ptt2_);
  // checkMissing(ptt3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_ptt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return ptt3
  return Rsh_Fir_reg_ptt3_;
}
SEXP Rsh_Fir_user_function_inner1591825523_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1591825523 dynamic dispatch ([x, digits, `...`])

  return Rsh_Fir_user_version_inner1591825523_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1591825523_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1591825523 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1591825523/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_digits;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_digits_isMissing;
  SEXP Rsh_Fir_reg_digits_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_cat1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_note;
  SEXP Rsh_Fir_reg_note1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_cat2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_cat3_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r42_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_digits = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if digits_isMissing then L0() else L1(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("digits");
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L1() else L2(x2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x4):
  //   r2 = `$`(x4, <sym method>);
  //   goto L0(r2);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_1, 0, NULL, CCP, RHO);
  // r4 = dyn cat("\n    ", p1, "\n\n")
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 6 [x5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L10_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args15);
  // if c1 then L12() else L13(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L13(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L13_;
  }

L11_:;
  // st note = dx3
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args16);
  // if c2 then L15() else L16(NULL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L16(NULL, l)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 21);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L16_;
  }

L12_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L14() else L13(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L13_;
  }

L13_:;
  // r5 = `$`(x8, <sym note>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args19);
  // goto L11(r5)
  // L11(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_1;
  goto L11_;

L2_:;
  // st x = dx5
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L14_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L11(dx2)
  // L11(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L11_;

L15_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, NULL)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args21);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc2 then L17() else L16(NULL, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L17()
    goto L17_;
  } else {
  // L16(NULL, dr4)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 21);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L16_;
  }

L16_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r19 = dyn ___(l5, r16, r17)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r19)
  // L2(r19)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L2_;

L17_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L2(dx4)
  // L2(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L2_;

L18_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r18 = dyn c3("method", "note")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L19_:;
  // r14 = dyn base("method", "note")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r7, l2, NULL, r14)
  // L3(r7, l2, NULL, r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r16_ = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r14_;
  goto L3_;

L21_:;
  // p7 = prom<V +>{
  //   paste = ldf paste;
  //   p3 = prom<V +>{
  //     format = ldf format;
  //     p2 = prom<V +>{
  //       sym1 = ldf names;
  //       base1 = ldf names in base;
  //       guard1 = `==`.4(sym1, base1);
  //       if guard1 then L1() else L2();
  //     L0(r21):
  //       return r21;
  //     L1():
  //       x9 = ld x;
  //       x10 = force? x9;
  //       checkMissing(x10);
  //       names = ldf names in base;
  //       r22 = dyn names(x10);
  //       goto L0(r22);
  //     L2():
  //       r20 = dyn base1(<sym x>);
  //       goto L0(r20);
  //     };
  //     r24 = dyn format[, width, justify](p2, 15, "right");
  //     return r24;
  //   };
  //   p6 = prom<V +>{
  //     format1 = ldf format;
  //     p4 = prom<V +>{
  //       x11 = ld x;
  //       x12 = force? x11;
  //       checkMissing(x12);
  //       return x12;
  //     };
  //     p5 = prom<V +>{
  //       digits1 = ld digits;
  //       digits2 = force? digits1;
  //       checkMissing(digits2);
  //       return digits2;
  //     };
  //     r28 = dyn format1[, digits](p4, p5);
  //     return r28;
  //   };
  //   r30 = dyn paste[, , sep](p3, p6, " = ");
  //   return r30;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_2, 0, NULL, CCP, RHO);
  // r32 = dyn cat1[, sep](p7, "\n")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D3_:;
  // deopt 18 [r7, l2, NULL, r18]
  SEXP Rsh_Fir_array_deopt_stack5[4];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(18, 4, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 26 [r32]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L3(r7, l2, NULL, r18)
  // L3(r7, l2, NULL, r18)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r16_ = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L3_;

L22_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L4_:;
  // r35 = `!`(r34)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args39);
  // c5 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c5 then L26() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L26()
    goto L26_;
  } else {
  // L5()
    goto L5_;
  }

L23_:;
  // note = ld note
  Rsh_Fir_reg_note = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

L24_:;
  // r33 = dyn base2(<sym note>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L4(r33)
  // L4(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L4_;

D6_:;
  // deopt 28 [note]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_note;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L5_:;
  // cat3 = ldf cat
  Rsh_Fir_reg_cat3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L6_:;
  // sym3 = ldf invisible
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base3 = ldf invisible in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L25_:;
  // note1 = force? note
  Rsh_Fir_reg_note1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_note);
  // checkMissing(note1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_note1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c4 = `==`(note1, NULL)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_note1_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args44);
  // goto L4(c4)
  // L4(c4)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_c4_;
  goto L4_;

L26_:;
  // cat2 = ldf cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

D7_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;

L27_:;
  // p8 = prom<V +>{
  //   note2 = ld note;
  //   note3 = force? note2;
  //   checkMissing(note3);
  //   return note3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_8, 0, NULL, CCP, RHO);
  // r37 = dyn cat2[, , , , sep]("\n", "NOTE: ", p8, "\n\n", "")
  SEXP Rsh_Fir_array_args46[5];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args46[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args46[4] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names15[5];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat2_, 5, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L28() else D8()
  // L28()
  goto L28_;

L30_:;
  // r39 = dyn cat3("\n")
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat3_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

L32_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L34() else D11()
  // L34()
  goto L34_;

L33_:;
  // r40 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L7(r40)
  // L7(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L7_;

D8_:;
  // deopt 40 [r37]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 44 [r39]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 47 [x13]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L6()
  // L6()
  goto L6_;

L31_:;
  // goto L6()
  // L6()
  goto L6_;

L34_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r42 = dyn invisible(x14)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

D12_:;
  // deopt 50 [r42]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L7(r42)
  // L7(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r = dyn getOption("digits")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1591825523_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args8);
  // if c then L1() else L2(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r2 = `$`(x4, <sym method>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args11);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // p3 = prom<V +>{
  //   format = ldf format;
  //   p2 = prom<V +>{
  //     sym1 = ldf names;
  //     base1 = ldf names in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r21):
  //     return r21;
  //   L1():
  //     x9 = ld x;
  //     x10 = force? x9;
  //     checkMissing(x10);
  //     names = ldf names in base;
  //     r22 = dyn names(x10);
  //     goto L0(r22);
  //   L2():
  //     r20 = dyn base1(<sym x>);
  //     goto L0(r20);
  //   };
  //   r24 = dyn format[, width, justify](p2, 15, "right");
  //   return r24;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_3, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   format1 = ldf format;
  //   p4 = prom<V +>{
  //     x11 = ld x;
  //     x12 = force? x11;
  //     checkMissing(x12);
  //     return x12;
  //   };
  //   p5 = prom<V +>{
  //     digits1 = ld digits;
  //     digits2 = force? digits1;
  //     checkMissing(digits2);
  //     return digits2;
  //   };
  //   r28 = dyn format1[, digits](p4, p5);
  //   return r28;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_5, 0, NULL, CCP, RHO);
  // r30 = dyn paste[, , sep](p3, p6, " = ")
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   names = ldf names in base;
  //   r22 = dyn names(x10);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base1(<sym x>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_4, 0, NULL, CCP, RHO);
  // r24 = dyn format[, width, justify](p2, 15, "right")
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r22 = dyn names(x10)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_format1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // format1 = ldf format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p4 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_6, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   digits1 = ld digits;
  //   digits2 = force? digits1;
  //   checkMissing(digits2);
  //   return digits2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1591825523_7, 0, NULL, CCP, RHO);
  // r28 = dyn format1[, digits](p4, p5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format1_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_digits1_;
  SEXP Rsh_Fir_reg_digits2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return digits2
  return Rsh_Fir_reg_digits2_;
}
SEXP Rsh_Fir_user_promise_inner1591825523_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_note2_;
  SEXP Rsh_Fir_reg_note3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1591825523/0: expected 0, got %d", NCAPTURES);

  // note2 = ld note
  Rsh_Fir_reg_note2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // note3 = force? note2
  Rsh_Fir_reg_note3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_note2_);
  // checkMissing(note3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_note3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return note3
  return Rsh_Fir_reg_note3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
