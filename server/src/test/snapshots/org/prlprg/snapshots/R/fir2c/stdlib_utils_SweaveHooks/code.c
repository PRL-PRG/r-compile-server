#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner933521238_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner933521238_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner933521238_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner933521238_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner933521238_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner933521238
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner933521238_, RHO, CCP);
  // st SweaveHooks = r
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
SEXP Rsh_Fir_user_function_inner933521238_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner933521238 dynamic dispatch ([options, run, envir])

  return Rsh_Fir_user_version_inner933521238_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner933521238_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner933521238 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner933521238/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_run;  // run
  SEXP Rsh_Fir_reg_envir;  // envir
  SEXP Rsh_Fir_reg_run_isMissing;  // run_isMissing
  SEXP Rsh_Fir_reg_run_orDefault;  // run_orDefault
  SEXP Rsh_Fir_reg_envir_isMissing;  // envir_isMissing
  SEXP Rsh_Fir_reg_envir_orDefault;  // envir_orDefault
  SEXP Rsh_Fir_reg__GlobalEnv;  // _GlobalEnv
  SEXP Rsh_Fir_reg__GlobalEnv1_;  // _GlobalEnv1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_SweaveHooks;  // SweaveHooks
  SEXP Rsh_Fir_reg_SweaveHooks1_;  // SweaveHooks1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_options1_;  // options1
  SEXP Rsh_Fir_reg_options2_;  // options2
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_options4_;  // options4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_options5_;  // options5
  SEXP Rsh_Fir_reg_options6_;  // options6
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_options8_;  // options8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_SweaveHooks2_;  // SweaveHooks2
  SEXP Rsh_Fir_reg_SweaveHooks3_;  // SweaveHooks3
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_SweaveHooks5_;  // SweaveHooks5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_k7_;  // k7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_is_function;  // is_function
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_run1_;  // run1
  SEXP Rsh_Fir_reg_run2_;  // run2
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_SweaveHooks6_;  // SweaveHooks6
  SEXP Rsh_Fir_reg_SweaveHooks7_;  // SweaveHooks7
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_SweaveHooks9_;  // SweaveHooks9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg_k11_;  // k11
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_envir1_;  // envir1
  SEXP Rsh_Fir_reg_envir2_;  // envir2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_z3_;  // z3

  // Bind parameters
  Rsh_Fir_reg_options = PARAMS[0];
  Rsh_Fir_reg_run = PARAMS[1];
  Rsh_Fir_reg_envir = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st options = options
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_options, RHO);
  (void)(Rsh_Fir_reg_options);
  // run_isMissing = missing.0(run)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_run;
  Rsh_Fir_reg_run_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if run_isMissing then L0(FALSE) else L0(run)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_run_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_run_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(run)
    Rsh_Fir_reg_run_orDefault = Rsh_Fir_reg_run;
    goto L0_;
  }

L0_:;
  // st run = run_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_run_orDefault, RHO);
  (void)(Rsh_Fir_reg_run_orDefault);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if envir_isMissing then L1() else L2(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   _GlobalEnv = ld `.GlobalEnv`;
  //   _GlobalEnv1 = force? _GlobalEnv;
  //   checkMissing(_GlobalEnv1);
  //   return _GlobalEnv1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner933521238_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L3_:;
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L30() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L30()
    goto L30_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

L6_:;
  // s = toForSeq(r8)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 8);
  // goto L9(i)
  // L9(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L9_;

L8_:;
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L81() else D21()
  // L81()
  goto L81_;

L9_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // c2 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if c2 then L8() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L8()
    goto L8_;
  } else {
  // L25()
    goto L25_;
  }

L10_:;
  // c3 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L11(i7, c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L11(i7, c3)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L11_;
  }

L11_:;
  // c18 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c18 then L52() else L14(i9, c18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L52()
    goto L52_;
  } else {
  // L14(i9, c18)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c18_;
    goto L14_;
  }

L12_:;
  // c15 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c16 = `&&`(c8, c15)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L11(i12, c16)
  // L11(i12, c16)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c16_;
  goto L11_;

L13_:;
  // c14 = `is.logical`(dx1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L12(i16, c13, c14)
  // L12(i16, c13, c14)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_c14_;
  goto L12_;

L14_:;
  // c29 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c29 then L59() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L59()
    goto L59_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // c26 = `as.logical`(dx3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c27 = `&&`(c25, c26)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L14(i23, c27)
  // L14(i23, c27)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c27_;
  goto L14_;

L16_:;
  // goto L24(i19)
  // L24(i19)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i19_;
  goto L24_;

L17_:;
  // c31 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c31 then L68() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L68()
    goto L68_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r20 = dyn is_function(dx5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L67() else D14()
  // L67()
  goto L67_;

L19_:;
  // goto L23(i29, NULL)
  // L23(i29, NULL)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 12);
  goto L23_;

L20_:;
  // st z = r22
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // run1 = ld run
  Rsh_Fir_reg_run1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

L21_:;
  // goto L22(i38, NULL)
  // L22(i38, NULL)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_r29_ = Rsh_const(CCP, 12);
  goto L22_;

L22_:;
  // goto L23(i41, r29)
  // L23(i41, r29)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L23_;

L23_:;
  // goto L24(i42)
  // L24(i42)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i42_;
  goto L24_;

L24_:;
  // goto L9(i43)
  // L9(i43)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i43_;
  goto L9_;

L25_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // st k = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L26_:;
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r1 = dyn base(<lang `<-`(SweaveHooks, getOption("SweaveHooks"))>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r1)
  // L3(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L3_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // r3 = dyn getOption("SweaveHooks")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

D1_:;
  // deopt 4 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L29_:;
  // st SweaveHooks = r3
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // c = `==`(r3, NULL)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c;
  goto L3_;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 12);

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r6 = dyn character()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D3_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L34_:;
  // st z = r6
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // SweaveHooks = ld SweaveHooks
  Rsh_Fir_reg_SweaveHooks = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L36_:;
  // r7 = dyn base1(<sym SweaveHooks>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 0);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L6_;

D4_:;
  // deopt 18 [SweaveHooks]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_SweaveHooks;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L37_:;
  // SweaveHooks1 = force? SweaveHooks
  Rsh_Fir_reg_SweaveHooks1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_SweaveHooks);
  // checkMissing(SweaveHooks1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_SweaveHooks1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r9 = dyn names(SweaveHooks1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_SweaveHooks1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

D5_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L6_;

L39_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

L40_:;
  // r10 = dyn base2(<sym k>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L10(i2, r10)
  // L10(i2, r10)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L10_;

D6_:;
  // deopt 26 [i2, k]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r12 = dyn nzchar(k1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

D7_:;
  // deopt 29 [i2, r12]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L10(i2, r12)
  // L10(i2, r12)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L10_;

L43_:;
  // sym3 = ldf `is.logical`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf `is.logical` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard3 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // options1 = ld options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L46() else D8()
  // L46()
  goto L46_;

L45_:;
  // r13 = dyn base3(<lang `[[`(options, k)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L12(i7, c3, r13)
  // L12(i7, c3, r13)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L12_;

D8_:;
  // deopt 31 [i7, c3, options1]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_options1_;
  Rsh_Fir_deopt(31, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L46_:;
  // options2 = force? options1
  Rsh_Fir_reg_options2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options1_);
  // checkMissing(options2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_options2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(options2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_options2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c9 then L47() else L48(i7, c3, options2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L47()
    goto L47_;
  } else {
  // L48(i7, c3, options2)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_options4_ = Rsh_Fir_reg_options2_;
    goto L48_;
  }

L47_:;
  // dr = tryDispatchBuiltin.1("[[", options2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_options2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L49() else L48(i7, c3, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L49()
    goto L49_;
  } else {
  // L48(i7, c3, dr)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_options4_ = Rsh_Fir_reg_dr;
    goto L48_;
  }

L48_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L50() else D9()
  // L50()
  goto L50_;

L49_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L13(i7, c3, dx)
  // L13(i7, c3, dx)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

D9_:;
  // deopt 33 [i14, c11, options4, k2]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_options4_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(33, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r15 = dyn __(options4, k3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_options4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L13(i14, c11, r15)
  // L13(i14, c11, r15)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r15_;
  goto L13_;

L52_:;
  // options5 = ld options
  Rsh_Fir_reg_options5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D10()
  // L53()
  goto L53_;

D10_:;
  // deopt 38 [i9, c18, options5]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_options5_;
  Rsh_Fir_deopt(38, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L53_:;
  // options6 = force? options5
  Rsh_Fir_reg_options6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options5_);
  // checkMissing(options6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_options6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(options6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_options6_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c21 then L54() else L55(i9, c18, options6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L54()
    goto L54_;
  } else {
  // L55(i9, c18, options6)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_;
    Rsh_Fir_reg_options8_ = Rsh_Fir_reg_options6_;
    goto L55_;
  }

L54_:;
  // dr2 = tryDispatchBuiltin.1("[[", options6)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_options6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc1 then L56() else L55(i9, c18, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L56()
    goto L56_;
  } else {
  // L55(i9, c18, dr2)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_;
    Rsh_Fir_reg_options8_ = Rsh_Fir_reg_dr2_;
    goto L55_;
  }

L55_:;
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

L56_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L15(i9, c18, dx2)
  // L15(i9, c18, dx2)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

D11_:;
  // deopt 40 [i21, c23, options8, k4]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_options8_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_k4_;
  Rsh_Fir_deopt(40, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L57_:;
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r16 = dyn __1(options8, k5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_options8_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_k5_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L15(i21, c23, r16)
  // L15(i21, c23, r16)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_;
  goto L15_;

L59_:;
  // sym4 = ldf `is.function`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf `is.function` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard4 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // SweaveHooks2 = ld SweaveHooks
  Rsh_Fir_reg_SweaveHooks2_ = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // check L62() else D12()
  // L62()
  goto L62_;

L61_:;
  // r17 = dyn base4(<lang `[[`(SweaveHooks, k)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L17(i19, r17)
  // L17(i19, r17)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L17_;

D12_:;
  // deopt 46 [i19, SweaveHooks2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_SweaveHooks2_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L62_:;
  // SweaveHooks3 = force? SweaveHooks2
  Rsh_Fir_reg_SweaveHooks3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_SweaveHooks2_);
  // checkMissing(SweaveHooks3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_SweaveHooks3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(SweaveHooks3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_SweaveHooks3_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c30 then L63() else L64(i19, SweaveHooks3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L63()
    goto L63_;
  } else {
  // L64(i19, SweaveHooks3)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_SweaveHooks5_ = Rsh_Fir_reg_SweaveHooks3_;
    goto L64_;
  }

L63_:;
  // dr4 = tryDispatchBuiltin.1("[[", SweaveHooks3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_SweaveHooks3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L65() else L64(i19, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L65()
    goto L65_;
  } else {
  // L64(i19, dr4)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_SweaveHooks5_ = Rsh_Fir_reg_dr4_;
    goto L64_;
  }

L64_:;
  // k6 = ld k
  Rsh_Fir_reg_k6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L66() else D13()
  // L66()
  goto L66_;

L65_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L18(i19, dx4)
  // L18(i19, dx4)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L18_;

D13_:;
  // deopt 48 [i31, SweaveHooks5, k6]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_SweaveHooks5_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_k6_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L66_:;
  // k7 = force? k6
  Rsh_Fir_reg_k7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k6_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r19 = dyn __2(SweaveHooks5, k7)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_SweaveHooks5_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_k7_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L18(i31, r19)
  // L18(i31, r19)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L18_;

D14_:;
  // deopt 52 [i33, r20]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L17(i33, r20)
  // L17(i33, r20)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r20_;
  goto L17_;

L68_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard5 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L69_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L71() else D15()
  // L71()
  goto L71_;

L70_:;
  // r21 = dyn base5(<sym z>, <sym k>)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L20(i29, r21)
  // L20(i29, r21)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L20_;

D15_:;
  // deopt 55 [i29, z]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L71_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // k8 = ld k
  Rsh_Fir_reg_k8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L72() else D16()
  // L72()
  goto L72_;

D16_:;
  // deopt 57 [i29, k8]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_k8_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L72_:;
  // k9 = force? k8
  Rsh_Fir_reg_k9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k8_);
  // checkMissing(k9)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_k9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c32 = ldf c in base
  Rsh_Fir_reg_c32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r23 = dyn c32(z1, k9)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_k9_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c32_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L73() else D17()
  // L73()
  goto L73_;

D17_:;
  // deopt 60 [i29, r23]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L20(i29, r23)
  // L20(i29, r23)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L20_;

D18_:;
  // deopt 62 [i38, run1]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_run1_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L74_:;
  // run2 = force? run1
  Rsh_Fir_reg_run2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_run1_);
  // checkMissing(run2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_run2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c33 = `as.logical`(run2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_run2_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c33 then L75() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L75()
    goto L75_;
  } else {
  // L21()
    goto L21_;
  }

L75_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L76() else D19()
  // L76()
  goto L76_;

D19_:;
  // deopt 65 [i38]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L76_:;
  // p1 = prom<V +>{
  //   SweaveHooks6 = ld SweaveHooks;
  //   SweaveHooks7 = force? SweaveHooks6;
  //   checkMissing(SweaveHooks7);
  //   c34 = `is.object`(SweaveHooks7);
  //   if c34 then L1() else L2(SweaveHooks7);
  // L0(dx7):
  //   checkFun.0(dx7);
  //   dx8 = dx7 as cls;
  //   r25 = dyn dx8();
  //   return r25;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", SweaveHooks7);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(SweaveHooks9):
  //   k10 = ld k;
  //   k11 = force? k10;
  //   __3 = ldf `[[` in base;
  //   r24 = dyn __3(SweaveHooks9, k11);
  //   goto L0(r24);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner933521238_1, CCP, RHO);
  // p2 = prom<V +>{
  //   envir1 = ld envir;
  //   envir2 = force? envir1;
  //   checkMissing(envir2);
  //   return envir2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner933521238_2, CCP, RHO);
  // r28 = dyn eval[, envir](p1, p2)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L77() else D20()
  // L77()
  goto L77_;

D20_:;
  // deopt 69 [i38, r28]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L22(i38, r28)
  // L22(i38, r28)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L22_;

D21_:;
  // deopt 80 [z2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L81_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z3
  return Rsh_Fir_reg_z3_;
}
SEXP Rsh_Fir_user_promise_inner933521238_(SEXP CCP, SEXP RHO) {
  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return _GlobalEnv1
  return Rsh_Fir_reg__GlobalEnv1_;
}
SEXP Rsh_Fir_user_promise_inner933521238_1(SEXP CCP, SEXP RHO) {
  // SweaveHooks6 = ld SweaveHooks
  Rsh_Fir_reg_SweaveHooks6_ = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // SweaveHooks7 = force? SweaveHooks6
  Rsh_Fir_reg_SweaveHooks7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_SweaveHooks6_);
  // checkMissing(SweaveHooks7)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_SweaveHooks7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(SweaveHooks7)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_SweaveHooks7_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c34 then L1() else L2(SweaveHooks7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L1()
    goto L1_;
  } else {
  // L2(SweaveHooks7)
    Rsh_Fir_reg_SweaveHooks9_ = Rsh_Fir_reg_SweaveHooks7_;
    goto L2_;
  }

L0_:;
  // checkFun.0(dx7)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dx7_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args62));
  // dx8 = dx7 as cls
  Rsh_Fir_reg_dx8_ = Rsh_Fir_cast(Rsh_Fir_reg_dx7_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r25 = dyn dx8()
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx8_, 0, NULL, NULL, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", SweaveHooks7)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_SweaveHooks7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_SweaveHooks9_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // k10 = ld k
  Rsh_Fir_reg_k10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // k11 = force? k10
  Rsh_Fir_reg_k11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k10_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r24 = dyn __3(SweaveHooks9, k11)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_SweaveHooks9_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_k11_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r24_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner933521238_2(SEXP CCP, SEXP RHO) {
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return envir2
  return Rsh_Fir_reg_envir2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
