#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner177682377_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner177682377_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner177682377_(SEXP CCP, SEXP RHO);
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
  // r = clos inner177682377
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner177682377_, RHO, CCP);
  // st rgamma = r
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
SEXP Rsh_Fir_user_function_inner177682377_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner177682377 dynamic dispatch ([n, shape, rate, scale])

  return Rsh_Fir_user_version_inner177682377_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner177682377_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner177682377 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner177682377/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_shape;  // shape
  SEXP Rsh_Fir_reg_rate;  // rate
  SEXP Rsh_Fir_reg_scale;  // scale
  SEXP Rsh_Fir_reg_rate_isMissing;  // rate_isMissing
  SEXP Rsh_Fir_reg_rate_orDefault;  // rate_orDefault
  SEXP Rsh_Fir_reg_scale_isMissing;  // scale_isMissing
  SEXP Rsh_Fir_reg_scale_orDefault;  // scale_orDefault
  SEXP Rsh_Fir_reg_rate1_;  // rate1
  SEXP Rsh_Fir_reg_rate2_;  // rate2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_rate3_;  // rate3
  SEXP Rsh_Fir_reg_rate4_;  // rate4
  SEXP Rsh_Fir_reg_scale1_;  // scale1
  SEXP Rsh_Fir_reg_scale2_;  // scale2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_C_rgamma;  // C_rgamma
  SEXP Rsh_Fir_reg_C_rgamma1_;  // C_rgamma1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_shape1_;  // shape1
  SEXP Rsh_Fir_reg_shape2_;  // shape2
  SEXP Rsh_Fir_reg_scale3_;  // scale3
  SEXP Rsh_Fir_reg_scale4_;  // scale4
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r22_;  // r22

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_shape = PARAMS[1];
  Rsh_Fir_reg_rate = PARAMS[2];
  Rsh_Fir_reg_scale = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st shape = shape
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_shape, RHO);
  (void)(Rsh_Fir_reg_shape);
  // rate_isMissing = missing.0(rate)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_rate;
  Rsh_Fir_reg_rate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if rate_isMissing then L0(1.0) else L0(rate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rate_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_rate_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(rate)
    Rsh_Fir_reg_rate_orDefault = Rsh_Fir_reg_rate;
    goto L0_;
  }

L0_:;
  // st rate = rate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_rate_orDefault, RHO);
  (void)(Rsh_Fir_reg_rate_orDefault);
  // scale_isMissing = missing.0(scale)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_scale;
  Rsh_Fir_reg_scale_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if scale_isMissing then L1() else L2(scale)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_scale_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(scale)
    Rsh_Fir_reg_scale_orDefault = Rsh_Fir_reg_scale;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   rate1 = ld rate;
  //   rate2 = force? rate1;
  //   checkMissing(rate2);
  //   r = `/`(1.0, rate2);
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner177682377_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_scale_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st scale = scale_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_scale_orDefault, RHO);
  (void)(Rsh_Fir_reg_scale_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L3_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L14() else L4(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L4(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L4_;
  }

L4_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c9 then L18() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L18()
    goto L18_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L4(c7)
  // L4(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L4_;

L6_:;
  // goto L10()
  // L10()
  goto L10_;

L7_:;
  // r15 = `<`(r11, 1.0E-15)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c10 then L24() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L24()
    goto L24_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym3 = ldf `.Call`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf `.Call` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard3 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

L12_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r4 = dyn missing(<sym rate>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L3_;

L13_:;
  // r2 = dyn base(<sym rate>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

L14_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r8 = dyn missing1(<sym scale>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(c, r8)
  // L5(c, r8)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L5_;

L16_:;
  // r6 = dyn base1(<sym scale>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(c, r6)
  // L5(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L5_;

L18_:;
  // sym2 = ldf abs
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf abs in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // rate3 = ld rate
  Rsh_Fir_reg_rate3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

L20_:;
  // r10 = dyn base2(<lang `-`(`*`(rate, scale), 1.0)>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L7_;

D0_:;
  // deopt 11 [rate3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_rate3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L21_:;
  // rate4 = force? rate3
  Rsh_Fir_reg_rate4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rate3_);
  // checkMissing(rate4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_rate4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // scale1 = ld scale
  Rsh_Fir_reg_scale1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 12 [rate4, scale1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_rate4_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_scale1_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // scale2 = force? scale1
  Rsh_Fir_reg_scale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale1_);
  // checkMissing(scale2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_scale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r12 = `*`(rate4, scale2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_rate4_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_scale2_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // r13 = `-`(r12, 1.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r14 = dyn abs(r13)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D2_:;
  // deopt 18 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r14_;
  goto L7_;

L24_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

D3_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r16 = dyn warning("specify 'rate' or 'scale' but not both")
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 24 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L9(r16)
  // L9(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L9_;

D5_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // r18 = dyn stop("specify 'rate' or 'scale' but not both")
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 28 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L9_;

L31_:;
  // C_rgamma = ld C_rgamma
  Rsh_Fir_reg_C_rgamma = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L32_:;
  // r20 = dyn base3(<sym C_rgamma>, <sym n>, <sym shape>, <sym scale>)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

D7_:;
  // deopt 32 [C_rgamma]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_rgamma;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // C_rgamma1 = force? C_rgamma
  Rsh_Fir_reg_C_rgamma1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_rgamma);
  // checkMissing(C_rgamma1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_C_rgamma1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 33 [C_rgamma1, n1]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_rgamma1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // shape1 = ld shape
  Rsh_Fir_reg_shape1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

D9_:;
  // deopt 34 [C_rgamma1, n2, shape1]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_rgamma1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_shape1_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // shape2 = force? shape1
  Rsh_Fir_reg_shape2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape1_);
  // checkMissing(shape2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_shape2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // scale3 = ld scale
  Rsh_Fir_reg_scale3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

D10_:;
  // deopt 35 [C_rgamma1, n2, shape2, scale3]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_rgamma1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_shape2_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_scale3_;
  Rsh_Fir_deopt(35, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // scale4 = force? scale3
  Rsh_Fir_reg_scale4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale3_);
  // checkMissing(scale4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_scale4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // vargs = dots[n2, shape2, scale4]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_shape2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_scale4_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r22 = `.Call`(C_rgamma1, vargs, <missing>)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_C_rgamma1_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner177682377_(SEXP CCP, SEXP RHO) {
  // rate1 = ld rate
  Rsh_Fir_reg_rate1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // rate2 = force? rate1
  Rsh_Fir_reg_rate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rate1_);
  // checkMissing(rate2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_rate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // r = `/`(1.0, rate2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_rate2_;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
