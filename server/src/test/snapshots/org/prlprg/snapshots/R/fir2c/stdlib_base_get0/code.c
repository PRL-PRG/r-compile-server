#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1896859337_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1896859337_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1896859337_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1896859337
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1896859337_, RHO, CCP);
  // st get0 = r
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
SEXP Rsh_Fir_user_function_inner1896859337_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1896859337 dynamic dispatch ([x, envir, mode, inherits, ifnotfound])

  return Rsh_Fir_user_version_inner1896859337_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1896859337_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1896859337 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1896859337/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_envir;  // envir
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_ifnotfound;  // ifnotfound
  SEXP Rsh_Fir_reg_envir_isMissing;  // envir_isMissing
  SEXP Rsh_Fir_reg_envir_orDefault;  // envir_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_pos_to_env;  // pos_to_env
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_mode_isMissing;  // mode_isMissing
  SEXP Rsh_Fir_reg_mode_orDefault;  // mode_orDefault
  SEXP Rsh_Fir_reg_inherits_isMissing;  // inherits_isMissing
  SEXP Rsh_Fir_reg_inherits_orDefault;  // inherits_orDefault
  SEXP Rsh_Fir_reg_ifnotfound_isMissing;  // ifnotfound_isMissing
  SEXP Rsh_Fir_reg_ifnotfound_orDefault;  // ifnotfound_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_envir1_;  // envir1
  SEXP Rsh_Fir_reg_envir2_;  // envir2
  SEXP Rsh_Fir_reg_mode1_;  // mode1
  SEXP Rsh_Fir_reg_mode2_;  // mode2
  SEXP Rsh_Fir_reg_inherits1_;  // inherits1
  SEXP Rsh_Fir_reg_inherits2_;  // inherits2
  SEXP Rsh_Fir_reg_ifnotfound1_;  // ifnotfound1
  SEXP Rsh_Fir_reg_ifnotfound2_;  // ifnotfound2
  SEXP Rsh_Fir_reg_get0_;  // get0
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_envir = PARAMS[1];
  Rsh_Fir_reg_mode = PARAMS[2];
  Rsh_Fir_reg_inherits = PARAMS[3];
  Rsh_Fir_reg_ifnotfound = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if envir_isMissing then L0() else L1(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf `pos.to.env`;
  //   base = ldf `pos.to.env` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   pos_to_env = ldf `pos.to.env` in base;
  //   r2 = dyn pos_to_env(-1);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<lang `-`(1)>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1896859337_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // mode_isMissing = missing.0(mode)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_mode;
  Rsh_Fir_reg_mode_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if mode_isMissing then L2("any") else L2(mode)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mode_isMissing)) {
  // L2("any")
    Rsh_Fir_reg_mode_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(mode)
    Rsh_Fir_reg_mode_orDefault = Rsh_Fir_reg_mode;
    goto L2_;
  }

L2_:;
  // st mode = mode_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_mode_orDefault, RHO);
  (void)(Rsh_Fir_reg_mode_orDefault);
  // inherits_isMissing = missing.0(inherits)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_inherits;
  Rsh_Fir_reg_inherits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if inherits_isMissing then L3(TRUE) else L3(inherits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_inherits_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_inherits_orDefault = Rsh_const(CCP, 8);
    goto L3_;
  } else {
  // L3(inherits)
    Rsh_Fir_reg_inherits_orDefault = Rsh_Fir_reg_inherits;
    goto L3_;
  }

L3_:;
  // st inherits = inherits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_inherits_orDefault, RHO);
  (void)(Rsh_Fir_reg_inherits_orDefault);
  // ifnotfound_isMissing = missing.0(ifnotfound)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ifnotfound;
  Rsh_Fir_reg_ifnotfound_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if ifnotfound_isMissing then L4(NULL) else L4(ifnotfound)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ifnotfound_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_ifnotfound_orDefault = Rsh_const(CCP, 10);
    goto L4_;
  } else {
  // L4(ifnotfound)
    Rsh_Fir_reg_ifnotfound_orDefault = Rsh_Fir_reg_ifnotfound;
    goto L4_;
  }

L4_:;
  // st ifnotfound = ifnotfound_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_ifnotfound_orDefault, RHO);
  (void)(Rsh_Fir_reg_ifnotfound_orDefault);
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L6_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r4 = dyn base1(<lang get0(x, envir, mode, inherits, ifnotfound)>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L5_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [envir1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // mode1 = ld mode
  Rsh_Fir_reg_mode1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 6 [mode1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_mode1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // mode2 = force? mode1
  Rsh_Fir_reg_mode2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mode1_);
  // checkMissing(mode2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_mode2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // inherits1 = ld inherits
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 8 [inherits1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_inherits1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // inherits2 = force? inherits1
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inherits1_);
  // checkMissing(inherits2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_inherits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // ifnotfound1 = ld ifnotfound
  Rsh_Fir_reg_ifnotfound1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 10 [ifnotfound1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ifnotfound1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // ifnotfound2 = force? ifnotfound1
  Rsh_Fir_reg_ifnotfound2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ifnotfound1_);
  // checkMissing(ifnotfound2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ifnotfound2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // get0 = ldf get0 in base
  Rsh_Fir_reg_get0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r6 = dyn get0(x2, envir2, mode2, inherits2, ifnotfound2)
  SEXP Rsh_Fir_array_args14[5];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_envir2_;
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_mode2_;
  Rsh_Fir_array_args14[3] = Rsh_Fir_reg_inherits2_;
  Rsh_Fir_array_args14[4] = Rsh_Fir_reg_ifnotfound2_;
  SEXP Rsh_Fir_array_arg_names3[5];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get0_, 5, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 13 [r6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner1896859337_(SEXP CCP, SEXP RHO) {
  // sym = ldf `pos.to.env`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `pos.to.env` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // pos_to_env = ldf `pos.to.env` in base
  Rsh_Fir_reg_pos_to_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn pos_to_env(-1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pos_to_env, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<lang `-`(1)>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
