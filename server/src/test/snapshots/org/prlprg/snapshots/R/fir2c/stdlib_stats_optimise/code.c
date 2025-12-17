#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner174310025_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner174310025_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner174310025_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner174310025_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner174310025_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner174310025_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner174310025_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3031791826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3031791826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3031791826_(SEXP CCP, SEXP RHO);
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
  // r = clos inner174310025
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner174310025_, RHO, CCP);
  // st optimise = r
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
SEXP Rsh_Fir_user_function_inner174310025_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner174310025 dynamic dispatch ([f, interval, `...`, lower, upper, maximum, tol])

  return Rsh_Fir_user_version_inner174310025_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner174310025_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner174310025 version 0 (*, *, dots, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner174310025/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_interval;  // interval
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_lower;  // lower
  SEXP Rsh_Fir_reg_upper;  // upper
  SEXP Rsh_Fir_reg_maximum;  // maximum
  SEXP Rsh_Fir_reg_tol;  // tol
  SEXP Rsh_Fir_reg_lower_isMissing;  // lower_isMissing
  SEXP Rsh_Fir_reg_lower_orDefault;  // lower_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_interval1_;  // interval1
  SEXP Rsh_Fir_reg_interval2_;  // interval2
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_upper_isMissing;  // upper_isMissing
  SEXP Rsh_Fir_reg_upper_orDefault;  // upper_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_interval3_;  // interval3
  SEXP Rsh_Fir_reg_interval4_;  // interval4
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_maximum_isMissing;  // maximum_isMissing
  SEXP Rsh_Fir_reg_maximum_orDefault;  // maximum_orDefault
  SEXP Rsh_Fir_reg_tol_isMissing;  // tol_isMissing
  SEXP Rsh_Fir_reg_tol_orDefault;  // tol_orDefault
  SEXP Rsh_Fir_reg__Machine;  // _Machine
  SEXP Rsh_Fir_reg__Machine1_;  // _Machine1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__Machine3_;  // _Machine3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_maximum1_;  // maximum1
  SEXP Rsh_Fir_reg_maximum2_;  // maximum2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_C_do_fmin;  // C_do_fmin
  SEXP Rsh_Fir_reg_C_do_fmin1_;  // C_do_fmin1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_lower1_;  // lower1
  SEXP Rsh_Fir_reg_lower2_;  // lower2
  SEXP Rsh_Fir_reg_upper1_;  // upper1
  SEXP Rsh_Fir_reg_upper2_;  // upper2
  SEXP Rsh_Fir_reg_tol1_;  // tol1
  SEXP Rsh_Fir_reg_tol2_;  // tol2
  SEXP Rsh_Fir_reg__External2_;  // _External2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_val2_;  // val2
  SEXP Rsh_Fir_reg_val3_;  // val3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_C_do_fmin2_;  // C_do_fmin2
  SEXP Rsh_Fir_reg_C_do_fmin3_;  // C_do_fmin3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_lower3_;  // lower3
  SEXP Rsh_Fir_reg_lower4_;  // lower4
  SEXP Rsh_Fir_reg_upper3_;  // upper3
  SEXP Rsh_Fir_reg_upper4_;  // upper4
  SEXP Rsh_Fir_reg_tol3_;  // tol3
  SEXP Rsh_Fir_reg_tol4_;  // tol4
  SEXP Rsh_Fir_reg__External3_;  // _External3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_val4_;  // val4
  SEXP Rsh_Fir_reg_val5_;  // val5
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_val6_;  // val6
  SEXP Rsh_Fir_reg_val7_;  // val7
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r28_;  // r28

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];
  Rsh_Fir_reg_interval = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_lower = PARAMS[3];
  Rsh_Fir_reg_upper = PARAMS[4];
  Rsh_Fir_reg_maximum = PARAMS[5];
  Rsh_Fir_reg_tol = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // st interval = interval
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_interval, RHO);
  (void)(Rsh_Fir_reg_interval);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // lower_isMissing = missing.0(lower)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lower;
  Rsh_Fir_reg_lower_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lower_isMissing then L0() else L1(lower)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(lower)
    Rsh_Fir_reg_lower_orDefault = Rsh_Fir_reg_lower;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf min;
  //   base = ldf min in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   interval1 = ld interval;
  //   interval2 = force? interval1;
  //   checkMissing(interval2);
  //   min = ldf min in base;
  //   r2 = dyn min(interval2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym interval>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_lower_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st lower = lower_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_lower_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_orDefault);
  // upper_isMissing = missing.0(upper)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_upper;
  Rsh_Fir_reg_upper_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if upper_isMissing then L2() else L3(upper)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_upper_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(upper)
    Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_upper;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   sym1 = ldf max;
  //   base1 = ldf max in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   interval3 = ld interval;
  //   interval4 = force? interval3;
  //   checkMissing(interval4);
  //   max = ldf max in base;
  //   r6 = dyn max(interval4);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym interval>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st upper = upper_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_upper_orDefault, RHO);
  (void)(Rsh_Fir_reg_upper_orDefault);
  // maximum_isMissing = missing.0(maximum)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_maximum;
  Rsh_Fir_reg_maximum_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if maximum_isMissing then L4(FALSE) else L4(maximum)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_maximum_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_maximum_orDefault = Rsh_const(CCP, 8);
    goto L4_;
  } else {
  // L4(maximum)
    Rsh_Fir_reg_maximum_orDefault = Rsh_Fir_reg_maximum;
    goto L4_;
  }

L4_:;
  // st maximum = maximum_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_maximum_orDefault, RHO);
  (void)(Rsh_Fir_reg_maximum_orDefault);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if tol_isMissing then L5() else L6(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L6_;
  }

L5_:;
  // p2 = prom<V +>{
  //   _Machine = ld `.Machine`;
  //   _Machine1 = force? _Machine;
  //   checkMissing(_Machine1);
  //   c = `is.object`(_Machine1);
  //   if c then L1() else L2(_Machine1);
  // L0(dx1):
  //   r9 = `^`(dx1, 0.25);
  //   return r9;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", _Machine1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(_Machine3):
  //   r8 = `$`(_Machine3, <sym double.eps>);
  //   goto L0(r8);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_2, CCP, RHO);
  // goto L6(p2)
  // L6(p2)
  Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_p2_;
  goto L6_;

L6_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // maximum1 = ld maximum
  Rsh_Fir_reg_maximum1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L7_:;
  // sym4 = ldf `.External2`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `.External2` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard4 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L8_:;
  // st val = r12
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;

L10_:;
  // st val = r21
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard5 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

D0_:;
  // deopt 0 [maximum1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_maximum1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // maximum2 = force? maximum1
  Rsh_Fir_reg_maximum2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maximum1_);
  // checkMissing(maximum2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_maximum2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(maximum2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_maximum2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L13() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L13()
    goto L13_;
  } else {
  // L7()
    goto L7_;
  }

L13_:;
  // sym2 = ldf `.External2`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf `.External2` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // C_do_fmin = ld C_do_fmin
  Rsh_Fir_reg_C_do_fmin = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L15_:;
  // r11 = dyn base2(<sym C_do_fmin>, <lang function((arg=), `-`(f(arg, ...)), NULL)>, <sym lower>, <sym upper>, <sym tol>)
  SEXP Rsh_Fir_array_args25[5];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args25[4] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[5];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 5, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L8(r11)
  // L8(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L8_;

D1_:;
  // deopt 4 [C_do_fmin]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_do_fmin;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // C_do_fmin1 = force? C_do_fmin
  Rsh_Fir_reg_C_do_fmin1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_do_fmin);
  // checkMissing(C_do_fmin1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_C_do_fmin1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r13 = clos inner3031791826
  Rsh_Fir_reg_r13_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3031791826_, RHO, CCP);
  // lower1 = ld lower
  Rsh_Fir_reg_lower1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 8 [lower1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_lower1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // lower2 = force? lower1
  Rsh_Fir_reg_lower2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower1_);
  // checkMissing(lower2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_lower2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // upper1 = ld upper
  Rsh_Fir_reg_upper1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 10 [upper1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_upper1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // upper2 = force? upper1
  Rsh_Fir_reg_upper2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper1_);
  // checkMissing(upper2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_upper2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 12 [tol1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_tol1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // _External2 = ldf `.External2` in base
  Rsh_Fir_reg__External2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r14 = dyn _External2(C_do_fmin1, r13, lower2, upper2, tol2)
  SEXP Rsh_Fir_array_args30[5];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_C_do_fmin1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_lower2_;
  Rsh_Fir_array_args30[3] = Rsh_Fir_reg_upper2_;
  Rsh_Fir_array_args30[4] = Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_array_arg_names5[5];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External2_, 5, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

D5_:;
  // deopt 15 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r14_;
  goto L8_;

L21_:;
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L22_:;
  // r15 = dyn base3[maximum, objective](<sym val>, <lang f(val, ...)>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L9_;

D6_:;
  // deopt 19 [val]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_val;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // f1 = ldf f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p3 = prom<V +>{
  //   val2 = ld val;
  //   val3 = force? val2;
  //   checkMissing(val3);
  //   return val3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r18 = dyn f1[, `...`](p3, ddd1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f1_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

D8_:;
  // deopt 26 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r19 = dyn list(val1, r18)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_val1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

D9_:;
  // deopt 29 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r19_;
  goto L9_;

L28_:;
  // C_do_fmin2 = ld C_do_fmin
  Rsh_Fir_reg_C_do_fmin2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

L29_:;
  // r20 = dyn base4(<sym C_do_fmin>, <lang function((arg=), f(arg, ...), NULL)>, <sym lower>, <sym upper>, <sym tol>)
  SEXP Rsh_Fir_array_args36[5];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[4] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[5];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 5, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L10_;

D10_:;
  // deopt 32 [C_do_fmin2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_do_fmin2_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // C_do_fmin3 = force? C_do_fmin2
  Rsh_Fir_reg_C_do_fmin3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_do_fmin2_);
  // checkMissing(C_do_fmin3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_C_do_fmin3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r22 = clos inner3031791826
  Rsh_Fir_reg_r22_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3031791826_, RHO, CCP);
  // lower3 = ld lower
  Rsh_Fir_reg_lower3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

D11_:;
  // deopt 36 [lower3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_lower3_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L31_:;
  // lower4 = force? lower3
  Rsh_Fir_reg_lower4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower3_);
  // checkMissing(lower4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_lower4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // upper3 = ld upper
  Rsh_Fir_reg_upper3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

D12_:;
  // deopt 38 [upper3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_upper3_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // upper4 = force? upper3
  Rsh_Fir_reg_upper4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper3_);
  // checkMissing(upper4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_upper4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // tol3 = ld tol
  Rsh_Fir_reg_tol3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

D13_:;
  // deopt 40 [tol3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_tol3_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // tol4 = force? tol3
  Rsh_Fir_reg_tol4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol3_);
  // checkMissing(tol4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_tol4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // _External3 = ldf `.External2` in base
  Rsh_Fir_reg__External3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r23 = dyn _External3(C_do_fmin3, r22, lower4, upper4, tol4)
  SEXP Rsh_Fir_array_args41[5];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_C_do_fmin3_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_lower4_;
  Rsh_Fir_array_args41[3] = Rsh_Fir_reg_upper4_;
  Rsh_Fir_array_args41[4] = Rsh_Fir_reg_tol4_;
  SEXP Rsh_Fir_array_arg_names10[5];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External3_, 5, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

D14_:;
  // deopt 43 [r23]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r23_;
  goto L10_;

L35_:;
  // val4 = ld val
  Rsh_Fir_reg_val4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

L36_:;
  // r24 = dyn base5[minimum, objective](<sym val>, <lang f(val, ...)>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L11_;

D15_:;
  // deopt 47 [val4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_val4_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L37_:;
  // val5 = force? val4
  Rsh_Fir_reg_val5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val4_);
  // checkMissing(val5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_val5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // f2 = ldf f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L38() else D16()
  // L38()
  goto L38_;

D16_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p4 = prom<V +>{
  //   val6 = ld val;
  //   val7 = force? val6;
  //   checkMissing(val7);
  //   return val7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_4, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r27 = dyn f2[, `...`](p4, ddd2)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f2_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L39() else D17()
  // L39()
  goto L39_;

D17_:;
  // deopt 54 [r27]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L39_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r28 = dyn list1(val5, r27)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_val5_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L40() else D18()
  // L40()
  goto L40_;

D18_:;
  // deopt 57 [r28]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r28_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner174310025_(SEXP CCP, SEXP RHO) {
  // sym = ldf min
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf min in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // interval1 = ld interval
  Rsh_Fir_reg_interval1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // interval2 = force? interval1
  Rsh_Fir_reg_interval2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interval1_);
  // checkMissing(interval2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_interval2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn min(interval2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_interval2_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym interval>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner174310025_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf max
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf max in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // interval3 = ld interval
  Rsh_Fir_reg_interval3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // interval4 = force? interval3
  Rsh_Fir_reg_interval4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interval3_);
  // checkMissing(interval4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_interval4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r6 = dyn max(interval4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_interval4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym interval>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner174310025_2(SEXP CCP, SEXP RHO) {
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(_Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Machine1)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L2_;
  }

L0_:;
  // r9 = `^`(dx1, 0.25)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r8 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner174310025_3(SEXP CCP, SEXP RHO) {
  // val2 = ld val
  Rsh_Fir_reg_val2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // val3 = force? val2
  Rsh_Fir_reg_val3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val2_);
  // checkMissing(val3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_val3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return val3
  return Rsh_Fir_reg_val3_;
}
SEXP Rsh_Fir_user_promise_inner174310025_4(SEXP CCP, SEXP RHO) {
  // val6 = ld val
  Rsh_Fir_reg_val6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // val7 = force? val6
  Rsh_Fir_reg_val7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val6_);
  // checkMissing(val7)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_val7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return val7
  return Rsh_Fir_reg_val7_;
}
SEXP Rsh_Fir_user_function_inner3031791826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3031791826 dynamic dispatch ([arg])

  return Rsh_Fir_user_version_inner3031791826_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3031791826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3031791826 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3031791826/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_arg;  // arg
  SEXP Rsh_Fir_reg_f1;  // f
  SEXP Rsh_Fir_reg_arg1_;  // arg1
  SEXP Rsh_Fir_reg_arg2_;  // arg2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_ddd1;  // ddd
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_r2_1;  // r2

  // Bind parameters
  Rsh_Fir_reg_arg = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st arg = arg
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_arg, RHO);
  (void)(Rsh_Fir_reg_arg);
  // f = ldf f
  Rsh_Fir_reg_f1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   arg1 = ld arg;
  //   arg2 = force? arg1;
  //   checkMissing(arg2);
  //   return arg2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3031791826_, CCP, RHO);
  // ddd = ld `...`
  Rsh_Fir_reg_ddd1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r1 = dyn f[, `...`](p, ddd)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f1, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L1_:;
  // r2 = `-`(<missing>, r1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner3031791826_(SEXP CCP, SEXP RHO) {
  // arg1 = ld arg
  Rsh_Fir_reg_arg1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // arg2 = force? arg1
  Rsh_Fir_reg_arg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg1_);
  // checkMissing(arg2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_arg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return arg2
  return Rsh_Fir_reg_arg2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
