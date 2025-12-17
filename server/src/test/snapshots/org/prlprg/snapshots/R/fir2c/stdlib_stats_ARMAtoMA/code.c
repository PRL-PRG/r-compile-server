#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1712107733_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1712107733_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1712107733_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1712107733_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_ARMAtoMA;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1712107733
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1712107733_, RHO, CCP);
  // st ARMAtoMA = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // ARMAtoMA = ldf ARMAtoMA
  Rsh_Fir_reg_ARMAtoMA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(1.0, -0.25);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(1.0, <lang `-`(0.25)>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn ARMAtoMA(p, 1.0, 10.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAtoMA, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st n = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 14 [1.0, 3.0, n]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r6 = `*`(3.0, n1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args5);
  // r7 = `+`(1.0, r6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args6);
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 18 [r7, 2.0, n2]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r8 = `-`(<missing>, n3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args8);
  // r9 = `^`(2.0, r8)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args9);
  // r10 = `*`(r7, r9)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args10);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;
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
  // r3 = dyn c(1.0, -0.25)
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
  // r1 = dyn base(1.0, <lang `-`(0.25)>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1712107733_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1712107733 dynamic dispatch ([ar, ma, `lag.max`])

  return Rsh_Fir_user_version_inner1712107733_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1712107733_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1712107733 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1712107733/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ar;
  SEXP Rsh_Fir_reg_ma;
  SEXP Rsh_Fir_reg_lag_max;
  SEXP Rsh_Fir_reg_ar_isMissing;
  SEXP Rsh_Fir_reg_ar_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_ma_isMissing;
  SEXP Rsh_Fir_reg_ma_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_C_ARMAtoMA;
  SEXP Rsh_Fir_reg_C_ARMAtoMA1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_C_ARMAtoMA4_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_ar1_;
  SEXP Rsh_Fir_reg_ar2_;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_C_ARMAtoMA7_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_ma1_;
  SEXP Rsh_Fir_reg_ma2_;
  SEXP Rsh_Fir_reg_as_double1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_C_ARMAtoMA10_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_lag_max1_;
  SEXP Rsh_Fir_reg_lag_max2_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r24_;

  // Bind parameters
  Rsh_Fir_reg_ar = PARAMS[0];
  Rsh_Fir_reg_ma = PARAMS[1];
  Rsh_Fir_reg_lag_max = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // ar_isMissing = missing.0(ar)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ar;
  Rsh_Fir_reg_ar_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if ar_isMissing then L0() else L1(ar)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ar_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(ar)
    Rsh_Fir_reg_ar_orDefault = Rsh_Fir_reg_ar;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   numeric = ldf numeric;
  //   r = dyn numeric();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1712107733_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_ar_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st ar = ar_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_ar_orDefault, RHO);
  (void)(Rsh_Fir_reg_ar_orDefault);
  // ma_isMissing = missing.0(ma)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ma;
  Rsh_Fir_reg_ma_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if ma_isMissing then L2() else L3(ma)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ma_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(ma)
    Rsh_Fir_reg_ma_orDefault = Rsh_Fir_reg_ma;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   numeric1 = ldf numeric;
  //   r2 = dyn numeric1();
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1712107733_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_ma_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st ma = ma_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_ma_orDefault, RHO);
  (void)(Rsh_Fir_reg_ma_orDefault);
  // st `lag.max` = lag_max
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_lag_max, RHO);
  (void)(Rsh_Fir_reg_lag_max);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_1;

L8_:;
  // C_ARMAtoMA = ld C_ARMAtoMA
  Rsh_Fir_reg_C_ARMAtoMA = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r4 = dyn base(<sym C_ARMAtoMA>, <lang as.double(ar)>, <lang as.double(ma)>, <lang as.integer(lag.max)>)
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 4, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_;
  goto L4_;

D0_:;
  // deopt 1 [C_ARMAtoMA]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_ARMAtoMA;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // C_ARMAtoMA1 = force? C_ARMAtoMA
  Rsh_Fir_reg_C_ARMAtoMA1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_ARMAtoMA);
  // checkMissing(C_ARMAtoMA1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_C_ARMAtoMA1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // sym1 = ldf `as.double`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf `as.double` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L5_:;
  // sym2 = ldf `as.double`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf `as.double` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L11_:;
  // ar1 = ld ar
  Rsh_Fir_reg_ar1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L12_:;
  // r6 = dyn base1(<sym ar>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(C_ARMAtoMA1, r6)
  // L5(C_ARMAtoMA1, r6)
  Rsh_Fir_reg_C_ARMAtoMA4_ = Rsh_Fir_reg_C_ARMAtoMA1_;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L5_;

D1_:;
  // deopt 4 [C_ARMAtoMA1, ar1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_ARMAtoMA1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_ar1_;
  Rsh_Fir_deopt(4, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L6_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L13_:;
  // ar2 = force? ar1
  Rsh_Fir_reg_ar2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ar1_);
  // checkMissing(ar2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ar2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r8 = dyn as_double(ar2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ar2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L15_:;
  // ma1 = ld ma
  Rsh_Fir_reg_ma1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L16_:;
  // r11 = dyn base2(<sym ma>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(C_ARMAtoMA4, r7, r11)
  // L6(C_ARMAtoMA4, r7, r11)
  Rsh_Fir_reg_C_ARMAtoMA7_ = Rsh_Fir_reg_C_ARMAtoMA4_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r11_;
  goto L6_;

D2_:;
  // deopt 7 [C_ARMAtoMA1, r8]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_ARMAtoMA1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 9 [C_ARMAtoMA4, r7, ma1]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_ARMAtoMA4_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_ma1_;
  Rsh_Fir_deopt(9, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L7_:;
  // vargs = dots[r20, r21, r22]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r24 = `.Call`(C_ARMAtoMA10, vargs, <missing>)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_C_ARMAtoMA10_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args23);
  // goto L4(r24)
  // L4(r24)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r24_;
  goto L4_;

L14_:;
  // goto L5(C_ARMAtoMA1, r8)
  // L5(C_ARMAtoMA1, r8)
  Rsh_Fir_reg_C_ARMAtoMA4_ = Rsh_Fir_reg_C_ARMAtoMA1_;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_1;
  goto L5_;

L17_:;
  // ma2 = force? ma1
  Rsh_Fir_reg_ma2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ma1_);
  // checkMissing(ma2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_ma2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r14 = dyn as_double1(ma2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_ma2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L19_:;
  // lag_max1 = ld `lag.max`
  Rsh_Fir_reg_lag_max1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

L20_:;
  // r19 = dyn base3(<sym lag.max>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(C_ARMAtoMA7, r12, r13, r19)
  // L7(C_ARMAtoMA7, r12, r13, r19)
  Rsh_Fir_reg_C_ARMAtoMA10_ = Rsh_Fir_reg_C_ARMAtoMA7_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r19_;
  goto L7_;

D4_:;
  // deopt 12 [C_ARMAtoMA4, r7, r14]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_ARMAtoMA4_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 14 [C_ARMAtoMA7, r12, r13, lag_max1]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_ARMAtoMA7_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_lag_max1_;
  Rsh_Fir_deopt(14, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L6(C_ARMAtoMA4, r7, r14)
  // L6(C_ARMAtoMA4, r7, r14)
  Rsh_Fir_reg_C_ARMAtoMA7_ = Rsh_Fir_reg_C_ARMAtoMA4_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L6_;

L21_:;
  // lag_max2 = force? lag_max1
  Rsh_Fir_reg_lag_max2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag_max1_);
  // checkMissing(lag_max2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_lag_max2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r23 = dyn as_integer(lag_max2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_lag_max2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D6_:;
  // deopt 17 [C_ARMAtoMA7, r12, r13, r23]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_ARMAtoMA7_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(17, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L7(C_ARMAtoMA7, r12, r13, r23)
  // L7(C_ARMAtoMA7, r12, r13, r23)
  Rsh_Fir_reg_C_ARMAtoMA10_ = Rsh_Fir_reg_C_ARMAtoMA7_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner1712107733_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1712107733/0: expected 0, got %d", NCAPTURES);

  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // r = dyn numeric()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1712107733_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric1_;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1712107733/0: expected 0, got %d", NCAPTURES);

  // numeric1 = ldf numeric
  Rsh_Fir_reg_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // r2 = dyn numeric1()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric1_, 0, NULL, NULL, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
