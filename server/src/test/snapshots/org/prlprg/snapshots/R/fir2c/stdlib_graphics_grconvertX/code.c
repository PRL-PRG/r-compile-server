#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4021709123_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4021709123_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4021709123_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4021709123_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4021709123_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4021709123_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4021709123
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4021709123_, RHO, CCP);
  // st grconvertX = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner4021709123_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4021709123 dynamic dispatch ([x, from, to])

  return Rsh_Fir_user_version_inner4021709123_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4021709123_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4021709123 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner4021709123/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_from;  // from
  SEXP Rsh_Fir_reg_to;  // to
  SEXP Rsh_Fir_reg_from_isMissing;  // from_isMissing
  SEXP Rsh_Fir_reg_from_orDefault;  // from_orDefault
  SEXP Rsh_Fir_reg_to_isMissing;  // to_isMissing
  SEXP Rsh_Fir_reg_to_orDefault;  // to_orDefault
  SEXP Rsh_Fir_reg_pmatch;  // pmatch
  SEXP Rsh_Fir_reg_from1_;  // from1
  SEXP Rsh_Fir_reg_from2_;  // from2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__units;  // _units
  SEXP Rsh_Fir_reg__units1_;  // _units1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_pmatch1_;  // pmatch1
  SEXP Rsh_Fir_reg_to1_;  // to1
  SEXP Rsh_Fir_reg_to2_;  // to2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg__units2_;  // _units2
  SEXP Rsh_Fir_reg__units3_;  // _units3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_C_convertX;  // C_convertX
  SEXP Rsh_Fir_reg_C_convertX1_;  // C_convertX1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_from3_;  // from3
  SEXP Rsh_Fir_reg_from4_;  // from4
  SEXP Rsh_Fir_reg_to3_;  // to3
  SEXP Rsh_Fir_reg_to4_;  // to4
  SEXP Rsh_Fir_reg__External;  // _External
  SEXP Rsh_Fir_reg_r11_;  // r11

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_from = PARAMS[1];
  Rsh_Fir_reg_to = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // from_isMissing = missing.0(from)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_from;
  Rsh_Fir_reg_from_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if from_isMissing then L0("user") else L0(from)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_from_isMissing)) {
  // L0("user")
    Rsh_Fir_reg_from_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(from)
    Rsh_Fir_reg_from_orDefault = Rsh_Fir_reg_from;
    goto L0_;
  }

L0_:;
  // st from = from_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_from_orDefault, RHO);
  (void)(Rsh_Fir_reg_from_orDefault);
  // to_isMissing = missing.0(to)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_to;
  Rsh_Fir_reg_to_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if to_isMissing then L1("user") else L1(to)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_to_isMissing)) {
  // L1("user")
    Rsh_Fir_reg_to_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(to)
    Rsh_Fir_reg_to_orDefault = Rsh_Fir_reg_to;
    goto L1_;
  }

L1_:;
  // st to = to_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_to_orDefault, RHO);
  (void)(Rsh_Fir_reg_to_orDefault);
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L3_:;
  // from3 = ld from
  Rsh_Fir_reg_from3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   from1 = ld from;
  //   from2 = force? from1;
  //   checkMissing(from2);
  //   return from2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4021709123_, CCP, RHO);
  // p1 = prom<V +>{
  //   _units = ld `.units`;
  //   _units1 = force? _units;
  //   checkMissing(_units1);
  //   return _units1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4021709123_1, CCP, RHO);
  // r2 = dyn pmatch(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // st from = r2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   to1 = ld to;
  //   to2 = force? to1;
  //   checkMissing(to2);
  //   return to2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4021709123_2, CCP, RHO);
  // p3 = prom<V +>{
  //   _units2 = ld `.units`;
  //   _units3 = force? _units2;
  //   checkMissing(_units3);
  //   return _units3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4021709123_3, CCP, RHO);
  // r5 = dyn pmatch1(p2, p3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // st to = r5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym = ldf `.External`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `.External` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // C_convertX = ld C_convertX
  Rsh_Fir_reg_C_convertX = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L9_:;
  // r6 = dyn base(<sym C_convertX>, <lang as.double(x)>, <sym from>, <sym to>)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D4_:;
  // deopt 14 [C_convertX]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_convertX;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // C_convertX1 = force? C_convertX
  Rsh_Fir_reg_C_convertX1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_convertX);
  // checkMissing(C_convertX1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_C_convertX1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // sym1 = ldf `as.double`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `as.double` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L12_:;
  // r8 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D5_:;
  // deopt 18 [x1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r10 = dyn as_double(x2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 21 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L3_;

D7_:;
  // deopt 22 [from3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_from3_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // from4 = force? from3
  Rsh_Fir_reg_from4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from3_);
  // checkMissing(from4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_from4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // to3 = ld to
  Rsh_Fir_reg_to3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 24 [to3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_to3_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L16_:;
  // to4 = force? to3
  Rsh_Fir_reg_to4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to3_);
  // checkMissing(to4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_to4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // _External = ldf `.External` in base
  Rsh_Fir_reg__External = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn _External(C_convertX1, r9, from4, to4)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_C_convertX1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_from4_;
  Rsh_Fir_array_args17[3] = Rsh_Fir_reg_to4_;
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 27 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r11_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner4021709123_(SEXP CCP, SEXP RHO) {
  // from1 = ld from
  Rsh_Fir_reg_from1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // from2 = force? from1
  Rsh_Fir_reg_from2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from1_);
  // checkMissing(from2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_from2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return from2
  return Rsh_Fir_reg_from2_;
}
SEXP Rsh_Fir_user_promise_inner4021709123_1(SEXP CCP, SEXP RHO) {
  // _units = ld `.units`
  Rsh_Fir_reg__units = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // _units1 = force? _units
  Rsh_Fir_reg__units1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__units);
  // checkMissing(_units1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg__units1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return _units1
  return Rsh_Fir_reg__units1_;
}
SEXP Rsh_Fir_user_promise_inner4021709123_2(SEXP CCP, SEXP RHO) {
  // to1 = ld to
  Rsh_Fir_reg_to1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // to2 = force? to1
  Rsh_Fir_reg_to2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to1_);
  // checkMissing(to2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_to2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return to2
  return Rsh_Fir_reg_to2_;
}
SEXP Rsh_Fir_user_promise_inner4021709123_3(SEXP CCP, SEXP RHO) {
  // _units2 = ld `.units`
  Rsh_Fir_reg__units2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // _units3 = force? _units2
  Rsh_Fir_reg__units3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__units2_);
  // checkMissing(_units3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg__units3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return _units3
  return Rsh_Fir_reg__units3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
