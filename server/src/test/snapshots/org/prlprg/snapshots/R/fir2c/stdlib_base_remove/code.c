#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3863518824_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3863518824_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3863518824_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3863518824_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_rm;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3863518824
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3863518824_, RHO, CCP);
  // st remove = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st tmp = <int 1, 2, 3, 4>
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // rm = ldf rm
  Rsh_Fir_reg_rm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   tmp = ld tmp;
  //   tmp1 = force? tmp;
  //   checkMissing(tmp1);
  //   return tmp1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn rm(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rm, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tmp;
  SEXP Rsh_Fir_reg_tmp1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // tmp = ld tmp
  Rsh_Fir_reg_tmp = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tmp1 = force? tmp
  Rsh_Fir_reg_tmp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp);
  // checkMissing(tmp1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tmp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return tmp1
  return Rsh_Fir_reg_tmp1_;
}
SEXP Rsh_Fir_user_function_inner3863518824_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3863518824 dynamic dispatch ([`...`, list, pos, envir, inherits])

  return Rsh_Fir_user_version_inner3863518824_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3863518824_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3863518824 version 0 (dots, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3863518824/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_pos;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_list_isMissing;
  SEXP Rsh_Fir_reg_list_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_pos_isMissing;
  SEXP Rsh_Fir_reg_pos_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_inherits_isMissing;
  SEXP Rsh_Fir_reg_inherits_orDefault;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg____length;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_vapply;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg__Primitive;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_list3_;
  SEXP Rsh_Fir_reg_list4_;
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_inherits2_;
  SEXP Rsh_Fir_reg_remove;
  SEXP Rsh_Fir_reg_r34_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_list = PARAMS[1];
  Rsh_Fir_reg_pos = PARAMS[2];
  Rsh_Fir_reg_envir = PARAMS[3];
  Rsh_Fir_reg_inherits = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // list_isMissing = missing.0(list)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_list;
  Rsh_Fir_reg_list_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if list_isMissing then L0() else L1(list)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_list_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(list)
    Rsh_Fir_reg_list_orDefault = Rsh_Fir_reg_list;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   character = ldf character;
  //   r = dyn character();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_list_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st list = list_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_list_orDefault, RHO);
  (void)(Rsh_Fir_reg_list_orDefault);
  // pos_isMissing = missing.0(pos)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_reg_pos_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if pos_isMissing then L2() else L3(pos)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pos_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(pos)
    Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_pos;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st pos = pos_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_pos_orDefault, RHO);
  (void)(Rsh_Fir_reg_pos_orDefault);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if envir_isMissing then L4() else L5(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L5_;
  }

L4_:;
  // p2 = prom<V +>{
  //   sym = ldf `as.environment`;
  //   base = ldf `as.environment` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   pos1 = ld pos;
  //   pos2 = force? pos1;
  //   checkMissing(pos2);
  //   as_environment = ldf `as.environment` in base;
  //   r5 = dyn as_environment(pos2);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(<sym pos>);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_2, 0, NULL, CCP, RHO);
  // goto L5(p2)
  // L5(p2)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p2_;
  goto L5_;

L5_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // inherits_isMissing = missing.0(inherits)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_inherits;
  Rsh_Fir_reg_inherits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if inherits_isMissing then L6(FALSE) else L6(inherits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_inherits_isMissing)) {
  // L6(FALSE)
    Rsh_Fir_reg_inherits_orDefault = Rsh_const(CCP, 11);
    goto L6_;
  } else {
  // L6(inherits)
    Rsh_Fir_reg_inherits_orDefault = Rsh_Fir_reg_inherits;
    goto L6_;
  }

L6_:;
  // st inherits = inherits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_inherits_orDefault, RHO);
  (void)(Rsh_Fir_reg_inherits_orDefault);
  // sym1 = ldf `...length`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf `...length` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L7_:;
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c then L18() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L8()
    goto L8_;
  }

L15_:;
  // ___length = ldf `...length` in base
  Rsh_Fir_reg____length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r9 = dyn ___length()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____length, 0, NULL, NULL, CCP, RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L16_:;
  // r7 = dyn base1()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L7_;

D0_:;
  // deopt 3 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard4 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L17_:;
  // goto L7(r9)
  // L7(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L7_;

L18_:;
  // __ = ldf `$` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r10 = dyn __(<lang match.call(expand.dots=FALSE)>, <sym ...>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // st dots = r10
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym2 = ldf all
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf all in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L9_:;
  // r18 = `!`(r12)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args15);
  // c1 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c1 then L24() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L24()
    goto L24_;
  } else {
  // L10()
    goto L10_;
  }

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;

L19_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

L20_:;
  // r11 = dyn base2(<lang vapply(dots, function((x=), `||`(is.symbol(x), is.character(x)), NULL), NA_LGL, USE.NAMES=FALSE)>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L9(r11)
  // L9(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L9_;

L33_:;
  // list3 = ld list
  Rsh_Fir_reg_list3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

L34_:;
  // r32 = dyn base4(<lang remove(list, envir, inherits)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L14(r32)
  // L14(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L14_;

D1_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 40 [list3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_list3_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym3 = ldf `.Primitive`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf `.Primitive` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L21_:;
  // p3 = prom<V +>{
  //   dots = ld dots;
  //   dots1 = force? dots;
  //   checkMissing(dots1);
  //   return dots1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   r14 = clos inner2501545716;
  //   return r14;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_4, 0, NULL, CCP, RHO);
  // r16 = dyn vapply[, , , `USE.NAMES`](p3, p4, NA_LGL, FALSE)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L24_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L35_:;
  // list4 = force? list3
  Rsh_Fir_reg_list4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list3_);
  // checkMissing(list4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_list4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

D2_:;
  // deopt 16 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 42 [envir1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // checkFun.0(r22)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r22_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args23));
  // r24 = r22 as cls
  Rsh_Fir_reg_r24_ = Rsh_Fir_cast(Rsh_Fir_reg_r22_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p5 = prom<V +>{
  //   list1 = ld list;
  //   list2 = force? list1;
  //   checkMissing(list2);
  //   return list2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_5, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   vapply1 = ldf vapply;
  //   p6 = prom<V +>{
  //     dots2 = ld dots;
  //     dots3 = force? dots2;
  //     checkMissing(dots3);
  //     return dots3;
  //   };
  //   p7 = prom<V +>{
  //     as_character = ld `as.character`;
  //     as_character1 = force? as_character;
  //     checkMissing(as_character1);
  //     return as_character1;
  //   };
  //   r28 = dyn vapply1(p6, p7, "");
  //   return r28;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_6, 0, NULL, CCP, RHO);
  // r30 = dyn r24(p5, p8)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r24_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L22_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r17 = dyn all(r16)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

L25_:;
  // r19 = dyn stop("... must contain names or character strings")
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L28_:;
  // _Primitive = ldf `.Primitive` in base
  Rsh_Fir_reg__Primitive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r23 = dyn _Primitive("c")
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Primitive, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // r21 = dyn base3("c")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r21)
  // L12(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L12_;

L36_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // inherits1 = ld inherits
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

D3_:;
  // deopt 18 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 23 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 30 [r23]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 34 [r30]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 44 [inherits1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_inherits1_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r17_;
  goto L9_;

L26_:;
  // goto L11()
  // L11()
  goto L11_;

L30_:;
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L12_;

L31_:;
  // st list = r30
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // goto L13()
  // L13()
  goto L13_;

L37_:;
  // inherits2 = force? inherits1
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inherits1_);
  // checkMissing(inherits2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_inherits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // remove = ldf remove in base
  Rsh_Fir_reg_remove = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r34 = dyn remove(list4, envir2, inherits2)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_list4_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_envir2_;
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_inherits2_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_remove, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 47 [r34]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L14(r34)
  // L14(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L14_;
}
SEXP Rsh_Fir_user_promise_inner3863518824_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3863518824_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // return -1.0
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_inner3863518824_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_reg_pos2_;
  SEXP Rsh_Fir_reg_as_environment;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `as.environment`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `as.environment` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_;

L1_:;
  // pos1 = ld pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // pos2 = force? pos1
  Rsh_Fir_reg_pos2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos1_);
  // checkMissing(pos2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_pos2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r5 = dyn as_environment(pos2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_pos2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base(<sym pos>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3863518824_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dots;
  SEXP Rsh_Fir_reg_dots1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // dots = ld dots
  Rsh_Fir_reg_dots = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // dots1 = force? dots
  Rsh_Fir_reg_dots1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots);
  // checkMissing(dots1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dots1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return dots1
  return Rsh_Fir_reg_dots1_;
}
SEXP Rsh_Fir_user_promise_inner3863518824_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // r14 = clos inner2501545716
  Rsh_Fir_reg_r14_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner3863518824_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_list2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // list1 = ld list
  Rsh_Fir_reg_list1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // list2 = force? list1
  Rsh_Fir_reg_list2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list1_);
  // checkMissing(list2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_list2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return list2
  return Rsh_Fir_reg_list2_;
}
SEXP Rsh_Fir_user_promise_inner3863518824_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vapply1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // vapply1 = ldf vapply
  Rsh_Fir_reg_vapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p6 = prom<V +>{
  //   dots2 = ld dots;
  //   dots3 = force? dots2;
  //   checkMissing(dots3);
  //   return dots3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_7, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   as_character = ld `as.character`;
  //   as_character1 = force? as_character;
  //   checkMissing(as_character1);
  //   return as_character1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3863518824_8, 0, NULL, CCP, RHO);
  // r28 = dyn vapply1(p6, p7, "")
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply1_, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_inner3863518824_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dots2_;
  SEXP Rsh_Fir_reg_dots3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // dots2 = ld dots
  Rsh_Fir_reg_dots2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // dots3 = force? dots2
  Rsh_Fir_reg_dots3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots2_);
  // checkMissing(dots3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dots3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return dots3
  return Rsh_Fir_reg_dots3_;
}
SEXP Rsh_Fir_user_promise_inner3863518824_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_as_character1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3863518824/0: expected 0, got %d", NCAPTURES);

  // as_character = ld `as.character`
  Rsh_Fir_reg_as_character = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // as_character1 = force? as_character
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_as_character);
  // checkMissing(as_character1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_as_character1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return as_character1
  return Rsh_Fir_reg_as_character1_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf `is.symbol`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base = ldf `is.symbol` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args37);
  // if c1 then L1(c1) else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L1(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_1;
    goto L1_;
  } else {
  // L6()
    goto L6_;
  }

L3_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 1 [x1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c2
  return Rsh_Fir_reg_c2_;

L5_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c = `is.symbol`(x2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(390, RHO, 1, Rsh_Fir_array_args40);
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c1;
  goto L0_;

L6_:;
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // c8 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // c9 = `||`(c6, c8)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args43);
  // goto L1(c9)
  // L1(c9)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c9_;
  goto L1_;

L7_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L8_:;
  // r2 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L2(c1, r2)
  // L2(c1, r2)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L2_;

D1_:;
  // deopt 5 [c1, x3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L9_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c7 = `is.character`(x4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args46);
  // goto L2(c1, c7)
  // L2(c1, c7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_c7_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
