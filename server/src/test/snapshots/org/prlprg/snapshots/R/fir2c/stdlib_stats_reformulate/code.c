#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner133029931_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner133029931_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner133029931_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner133029931_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner133029931_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner133029931_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner133029931_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner133029931_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner133029931
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner133029931_, RHO, CCP);
  // st reformulate = r
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
SEXP Rsh_Fir_user_function_inner133029931_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner133029931 dynamic dispatch ([termlabels, response, intercept, env])

  return Rsh_Fir_user_version_inner133029931_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner133029931_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner133029931 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner133029931/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_termlabels;  // termlabels
  SEXP Rsh_Fir_reg_response;  // response
  SEXP Rsh_Fir_reg_intercept;  // intercept
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_response_isMissing;  // response_isMissing
  SEXP Rsh_Fir_reg_response_orDefault;  // response_orDefault
  SEXP Rsh_Fir_reg_intercept_isMissing;  // intercept_isMissing
  SEXP Rsh_Fir_reg_intercept_orDefault;  // intercept_orDefault
  SEXP Rsh_Fir_reg_env_isMissing;  // env_isMissing
  SEXP Rsh_Fir_reg_env_orDefault;  // env_orDefault
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_termlabels1_;  // termlabels1
  SEXP Rsh_Fir_reg_termlabels2_;  // termlabels2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_termlabels3_;  // termlabels3
  SEXP Rsh_Fir_reg_termlabels4_;  // termlabels4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_termlabels5_;  // termlabels5
  SEXP Rsh_Fir_reg_termlabels6_;  // termlabels6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_intercept1_;  // intercept1
  SEXP Rsh_Fir_reg_intercept2_;  // intercept2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_termtext;  // termtext
  SEXP Rsh_Fir_reg_termtext1_;  // termtext1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_str2lang;  // str2lang
  SEXP Rsh_Fir_reg_termtext2_;  // termtext2
  SEXP Rsh_Fir_reg_termtext3_;  // termtext3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_response1_;  // response1
  SEXP Rsh_Fir_reg_response2_;  // response2
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_call;  // call
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_call1_;  // call1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_formula;  // formula
  SEXP Rsh_Fir_reg_fexpr;  // fexpr
  SEXP Rsh_Fir_reg_fexpr1_;  // fexpr1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r29_;  // r29

  // Bind parameters
  Rsh_Fir_reg_termlabels = PARAMS[0];
  Rsh_Fir_reg_response = PARAMS[1];
  Rsh_Fir_reg_intercept = PARAMS[2];
  Rsh_Fir_reg_env = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st termlabels = termlabels
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_termlabels, RHO);
  (void)(Rsh_Fir_reg_termlabels);
  // response_isMissing = missing.0(response)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_response;
  Rsh_Fir_reg_response_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if response_isMissing then L0(NULL) else L0(response)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_response_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_response_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(response)
    Rsh_Fir_reg_response_orDefault = Rsh_Fir_reg_response;
    goto L0_;
  }

L0_:;
  // st response = response_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_response_orDefault, RHO);
  (void)(Rsh_Fir_reg_response_orDefault);
  // intercept_isMissing = missing.0(intercept)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_intercept;
  Rsh_Fir_reg_intercept_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if intercept_isMissing then L1(TRUE) else L1(intercept)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_intercept_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_intercept_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(intercept)
    Rsh_Fir_reg_intercept_orDefault = Rsh_Fir_reg_intercept;
    goto L1_;
  }

L1_:;
  // st intercept = intercept_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_intercept_orDefault, RHO);
  (void)(Rsh_Fir_reg_intercept_orDefault);
  // env_isMissing = missing.0(env)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_env;
  Rsh_Fir_reg_env_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if env_isMissing then L2() else L3(env)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_env_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(env)
    Rsh_Fir_reg_env_orDefault = Rsh_Fir_reg_env;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner133029931_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_env_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st env = env_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_env_orDefault, RHO);
  (void)(Rsh_Fir_reg_env_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L4_:;
  // r4 = `!`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L5(c1) else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L5(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L5_;
  } else {
  // L18()
    goto L18_;
  }

L5_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c10 then L24() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L24()
    goto L24_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c8 = `||`(c6, c7)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L5(c8)
  // L5(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L5_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // str2lang = ldf str2lang
  Rsh_Fir_reg_str2lang = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

L11_:;
  // c13 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c13 then L40() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L40()
    goto L40_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // sym4 = ldf call
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf call in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L13_:;
  // goto L14(r22)
  // L14(r22)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
  goto L14_;

L14_:;
  // st fexpr = r24
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // formula = ldf formula
  Rsh_Fir_reg_formula = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

L15_:;
  // termlabels1 = ld termlabels
  Rsh_Fir_reg_termlabels1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L16_:;
  // r2 = dyn base(<sym termlabels>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L4_;

D0_:;
  // deopt 1 [termlabels1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_termlabels1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // termlabels2 = force? termlabels1
  Rsh_Fir_reg_termlabels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_termlabels1_);
  // checkMissing(termlabels2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_termlabels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `is.character`(termlabels2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_termlabels2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L4_;

L18_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // termlabels3 = ld termlabels
  Rsh_Fir_reg_termlabels3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

L20_:;
  // r5 = dyn base1(<sym termlabels>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L6(c1, r5)
  // L6(c1, r5)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L6_;

D1_:;
  // deopt 7 [c1, termlabels3]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_termlabels3_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // termlabels4 = force? termlabels3
  Rsh_Fir_reg_termlabels4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_termlabels3_);
  // checkMissing(termlabels4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_termlabels4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r7 = dyn length(termlabels4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_termlabels4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

D2_:;
  // deopt 10 [c1, r7]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L6(c1, r7)
  // L6(c1, r7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L6_;

L24_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

D3_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r9 = dyn stop("'termlabels' must be a character vector of length at least one")
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 16 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L8()
  // L8()
  goto L8_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p1 = prom<V +>{
  //   termlabels5 = ld termlabels;
  //   termlabels6 = force? termlabels5;
  //   checkMissing(termlabels6);
  //   return termlabels6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner133029931_1, CCP, RHO);
  // r12 = dyn paste[, collapse](p1, "+")
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // st termtext = r12
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // intercept1 = ld intercept
  Rsh_Fir_reg_intercept1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 26 [intercept1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_intercept1_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // intercept2 = force? intercept1
  Rsh_Fir_reg_intercept2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intercept1_);
  // checkMissing(intercept2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_intercept2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r13 = `!`(intercept2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_intercept2_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c11 then L31() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L31()
    goto L31_;
  } else {
  // L9()
    goto L9_;
  }

L31_:;
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p2 = prom<V +>{
  //   termtext = ld termtext;
  //   termtext1 = force? termtext;
  //   checkMissing(termtext1);
  //   return termtext1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner133029931_2, CCP, RHO);
  // r15 = dyn paste1(p2, "- 1")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

D9_:;
  // deopt 33 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // st termtext = r15
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L10()
  // L10()
  goto L10_;

D10_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p3 = prom<V +>{
  //   termtext2 = ld termtext;
  //   termtext3 = force? termtext2;
  //   checkMissing(termtext3);
  //   return termtext3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner133029931_3, CCP, RHO);
  // r18 = dyn str2lang(p3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str2lang, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

D11_:;
  // deopt 40 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // st terms = r18
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // response1 = ld response
  Rsh_Fir_reg_response1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

L38_:;
  // r19 = dyn base2(<sym response>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L11_;

D12_:;
  // deopt 43 [response1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_response1_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // response2 = force? response1
  Rsh_Fir_reg_response2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_response1_);
  // checkMissing(response2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_response2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c12 = `==`(response2, NULL)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_response2_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L11(c12)
  // L11(c12)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_c12_;
  goto L11_;

L40_:;
  // sym3 = ldf call
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf call in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard3 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // call = ldf call in base
  Rsh_Fir_reg_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r23 = dyn call("~", <sym terms>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_call, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L13(r23)
  // L13(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L13_;

L42_:;
  // r21 = dyn base3("~", <sym terms>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L13(r21)
  // L13(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L13_;

L44_:;
  // call1 = ldf call in base
  Rsh_Fir_reg_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r26 = dyn call1("~", <lang if(is.character(response), {
  //     if(`!=`(length(response), 1.0), stop(gettextf("'%s' must be a character string", "response"), domain=NA_LGL));
  //     tryCatch(str2lang(response), error=function((e=), {
  //           `<-`(sc, sys.calls());
  //           `<-`(sc1, lapply(sc, `[[`, 1));
  //           `<-`(isF, function((cl=), `&&`(is.symbol(cl), `==`(cl, quote(reformulate))), NULL));
  //           `<-`(reformCall, `[[`(sc, match(TRUE, vapply(sc1, isF, NA_LGL))));
  //           warning(warningCondition(message=paste(sprintf("Unparseable 'response' \"%s\"; use is deprecated.  Use as.name(.) or `..`!", response), conditionMessage(e), sep="\n"), class=c("reformulate", "deprecatedWarning"), call=reformCall));
  //           as.symbol(response)
  //         }, NULL))
  //   }, response)>, <sym terms>)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_call1_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r26_;
  goto L14_;

L45_:;
  // r25 = dyn base4("~", <lang if(is.character(response), {
  //     if(`!=`(length(response), 1.0), stop(gettextf("'%s' must be a character string", "response"), domain=NA_LGL));
  //     tryCatch(str2lang(response), error=function((e=), {
  //           `<-`(sc, sys.calls());
  //           `<-`(sc1, lapply(sc, `[[`, 1));
  //           `<-`(isF, function((cl=), `&&`(is.symbol(cl), `==`(cl, quote(reformulate))), NULL));
  //           `<-`(reformCall, `[[`(sc, match(TRUE, vapply(sc1, isF, NA_LGL))));
  //           warning(warningCondition(message=paste(sprintf("Unparseable 'response' \"%s\"; use is deprecated.  Use as.name(.) or `..`!", response), conditionMessage(e), sep="\n"), class=c("reformulate", "deprecatedWarning"), call=reformCall));
  //           as.symbol(response)
  //         }, NULL))
  //   }, response)>, <sym terms>)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L14(r25)
  // L14(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L14_;

D13_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p4 = prom<V +>{
  //   fexpr = ld fexpr;
  //   fexpr1 = force? fexpr;
  //   checkMissing(fexpr1);
  //   return fexpr1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner133029931_4, CCP, RHO);
  // p5 = prom<V +>{
  //   env1 = ld env;
  //   env2 = force? env1;
  //   checkMissing(env2);
  //   return env2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner133029931_5, CCP, RHO);
  // r29 = dyn formula(p4, p5)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formula, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L47() else D14()
  // L47()
  goto L47_;

D14_:;
  // deopt 57 [r29]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L47_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_inner133029931_(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner133029931_1(SEXP CCP, SEXP RHO) {
  // termlabels5 = ld termlabels
  Rsh_Fir_reg_termlabels5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // termlabels6 = force? termlabels5
  Rsh_Fir_reg_termlabels6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_termlabels5_);
  // checkMissing(termlabels6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_termlabels6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return termlabels6
  return Rsh_Fir_reg_termlabels6_;
}
SEXP Rsh_Fir_user_promise_inner133029931_2(SEXP CCP, SEXP RHO) {
  // termtext = ld termtext
  Rsh_Fir_reg_termtext = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // termtext1 = force? termtext
  Rsh_Fir_reg_termtext1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_termtext);
  // checkMissing(termtext1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_termtext1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return termtext1
  return Rsh_Fir_reg_termtext1_;
}
SEXP Rsh_Fir_user_promise_inner133029931_3(SEXP CCP, SEXP RHO) {
  // termtext2 = ld termtext
  Rsh_Fir_reg_termtext2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // termtext3 = force? termtext2
  Rsh_Fir_reg_termtext3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_termtext2_);
  // checkMissing(termtext3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_termtext3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return termtext3
  return Rsh_Fir_reg_termtext3_;
}
SEXP Rsh_Fir_user_promise_inner133029931_4(SEXP CCP, SEXP RHO) {
  // fexpr = ld fexpr
  Rsh_Fir_reg_fexpr = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // fexpr1 = force? fexpr
  Rsh_Fir_reg_fexpr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fexpr);
  // checkMissing(fexpr1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_fexpr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return fexpr1
  return Rsh_Fir_reg_fexpr1_;
}
SEXP Rsh_Fir_user_promise_inner133029931_5(SEXP CCP, SEXP RHO) {
  // env1 = ld env
  Rsh_Fir_reg_env1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // env2 = force? env1
  Rsh_Fir_reg_env2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1_);
  // checkMissing(env2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_env2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return env2
  return Rsh_Fir_reg_env2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
