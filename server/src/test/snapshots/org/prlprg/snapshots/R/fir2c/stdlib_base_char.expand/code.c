#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1180332225_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1180332225_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1180332225_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1180332225_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_char_expand;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_char_expand1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r9_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1180332225
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1180332225_, RHO, CCP);
  // st `char.expand` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
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
  // st locPars = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // char_expand = ldf `char.expand`
  Rsh_Fir_reg_char_expand = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c("mean", "median", "mode")
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base("mean", "median", "mode")
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L4_:;
  // p = prom<V +>{
  //   locPars = ld locPars;
  //   locPars1 = force? locPars;
  //   checkMissing(locPars1);
  //   return locPars1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   warning = ldf warning;
  //   r5 = dyn warning("Could not expand!");
  //   return r5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn char_expand("me", p, p1)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_char_expand, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // char_expand1 = ldf `char.expand`
  Rsh_Fir_reg_char_expand1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   locPars2 = ld locPars;
  //   locPars3 = force? locPars2;
  //   checkMissing(locPars3);
  //   return locPars3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r9 = dyn char_expand1("mo", p2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_char_expand1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_locPars;
  SEXP Rsh_Fir_reg_locPars1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // locPars = ld locPars
  Rsh_Fir_reg_locPars = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // locPars1 = force? locPars
  Rsh_Fir_reg_locPars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_locPars);
  // checkMissing(locPars1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_locPars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return locPars1
  return Rsh_Fir_reg_locPars1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r5 = dyn warning("Could not expand!")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_locPars2_;
  SEXP Rsh_Fir_reg_locPars3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // locPars2 = ld locPars
  Rsh_Fir_reg_locPars2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // locPars3 = force? locPars2
  Rsh_Fir_reg_locPars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_locPars2_);
  // checkMissing(locPars3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_locPars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return locPars3
  return Rsh_Fir_reg_locPars3_;
}
SEXP Rsh_Fir_user_function_inner1180332225_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1180332225 dynamic dispatch ([input, target, nomatch])

  return Rsh_Fir_user_version_inner1180332225_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1180332225_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1180332225 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1180332225/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_input;
  SEXP Rsh_Fir_reg_target;
  SEXP Rsh_Fir_reg_nomatch;
  SEXP Rsh_Fir_reg_nomatch_isMissing;
  SEXP Rsh_Fir_reg_nomatch_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_input1_;
  SEXP Rsh_Fir_reg_input2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_input3_;
  SEXP Rsh_Fir_reg_input4_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_input5_;
  SEXP Rsh_Fir_reg_input6_;
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;
  SEXP Rsh_Fir_reg_charmatch;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_target8_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r24_;

  // Bind parameters
  Rsh_Fir_reg_input = PARAMS[0];
  Rsh_Fir_reg_target = PARAMS[1];
  Rsh_Fir_reg_nomatch = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st input = input
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_input, RHO);
  (void)(Rsh_Fir_reg_input);
  // st target = target
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_target, RHO);
  (void)(Rsh_Fir_reg_target);
  // nomatch_isMissing = missing.0(nomatch)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_nomatch;
  Rsh_Fir_reg_nomatch_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if nomatch_isMissing then L0() else L1(nomatch)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nomatch_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(nomatch)
    Rsh_Fir_reg_nomatch_orDefault = Rsh_Fir_reg_nomatch;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   stop = ldf stop;
  //   r = dyn stop("no match");
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1180332225_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_nomatch_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st nomatch = nomatch_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_nomatch_orDefault, RHO);
  (void)(Rsh_Fir_reg_nomatch_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // r5 = `!=`(r3, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args11);
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c then L19() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L19()
    goto L19_;
  } else {
  // L3()
    goto L3_;
  }

L15_:;
  // input1 = ld input
  Rsh_Fir_reg_input1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L16_:;
  // r2 = dyn base(<sym input>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L2_;

D0_:;
  // deopt 2 [input1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_input1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L17_:;
  // input2 = force? input1
  Rsh_Fir_reg_input2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_input1_);
  // checkMissing(input2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_input2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r4 = dyn length(input2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_input2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L19_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c2 then L26() else L6(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L26()
    goto L26_;
  } else {
  // L6(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L6_;
  }

L18_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_;
  goto L2_;

L20_:;
  // r6 = dyn stop1("'input' must have length 1")
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

L23_:;
  // input3 = ld input
  Rsh_Fir_reg_input3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L24_:;
  // r8 = dyn base1(<sym input>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_;
  goto L5_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 [input3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_input3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L6_:;
  // r12 = `!`(c4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args20);
  // c12 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c12 then L31() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L31()
    goto L31_;
  } else {
  // L8()
    goto L8_;
  }

L21_:;
  // goto L4()
  // L4()
  goto L4_;

L25_:;
  // input4 = force? input3
  Rsh_Fir_reg_input4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_input3_);
  // checkMissing(input4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_input4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(input4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_input4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args23);
  // goto L5(c1)
  // L5(c1)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_c1_;
  goto L5_;

L26_:;
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L7_:;
  // c9 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // c10 = `&&`(c7, c9)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args26);
  // goto L6(c10)
  // L6(c10)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c10_;
  goto L6_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L27_:;
  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

L28_:;
  // r10 = dyn base2(<sym target>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(c2, r10)
  // L7(c2, r10)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L7_;

L31_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

D5_:;
  // deopt 19 [c2, target1]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_target1_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // st y = r16
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym4 = ldf anyNA
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base4 = ldf anyNA in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard4 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L29_:;
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c8 = `is.character`(target2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_target2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args31);
  // goto L7(c2, c8)
  // L7(c2, c8)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c8_;
  goto L7_;

L32_:;
  // r13 = dyn stop2("'input' and 'target' must be character vectors")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L35_:;
  // input5 = ld input
  Rsh_Fir_reg_input5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

L36_:;
  // r15 = dyn base3(<lang charmatch(input, target, NA_INT)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r15)
  // L10(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L10_;

D7_:;
  // deopt 27 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 32 [input5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_input5_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L11_:;
  // c13 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c13 then L44() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L44()
    goto L44_;
  } else {
  // L12()
    goto L12_;
  }

L33_:;
  // goto L9()
  // L9()
  goto L9_;

L37_:;
  // input6 = force? input5
  Rsh_Fir_reg_input6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_input5_);
  // checkMissing(input6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_input6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L40_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

L41_:;
  // r18 = dyn base4(<sym y>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r18)
  // L11(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L11_;

D9_:;
  // deopt 34 [target3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_target3_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 42 [y]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L48() else D15()
  // L48()
  goto L48_;

L38_:;
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // charmatch = ldf charmatch in base
  Rsh_Fir_reg_charmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r17 = dyn charmatch(input6, target4, NA_INT)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_input6_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_target4_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charmatch, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

L42_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r20 = dyn anyNA(y1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L43() else D12()
  // L43()
  goto L43_;

L44_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

D10_:;
  // deopt 38 [r17]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 52 [target5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_target5_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L10(r17)
  // L10(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L10_;

L43_:;
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L11_;

L45_:;
  // p1 = prom<V +>{
  //   nomatch1 = ld nomatch;
  //   nomatch2 = force? nomatch1;
  //   checkMissing(nomatch2);
  //   return nomatch2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1180332225_1, 0, NULL, CCP, RHO);
  // r22 = dyn eval(p1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

L48_:;
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(target6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_target6_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args44);
  // if c14 then L49() else L50(target6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L49()
    goto L49_;
  } else {
  // L50(target6)
    Rsh_Fir_reg_target8_ = Rsh_Fir_reg_target6_;
    goto L50_;
  }

D14_:;
  // deopt 49 [r22]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L46_:;
  // goto L13()
  // L13()
  goto L13_;

L49_:;
  // dr = tryDispatchBuiltin.1("[", target6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_target6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc then L51() else L50(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L51()
    goto L51_;
  } else {
  // L50(dr)
    Rsh_Fir_reg_target8_ = Rsh_Fir_reg_dr;
    goto L50_;
  }

L50_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

D16_:;
  // deopt 54 [target8, y2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_target8_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L51_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L14(dx)
  // L14(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L14_;

L52_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r24 = dyn __(target8, y3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_target8_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r24)
  // L14(r24)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r24_;
  goto L14_;
}
SEXP Rsh_Fir_user_promise_inner1180332225_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1180332225/0: expected 0, got %d", NCAPTURES);

  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r = dyn stop("no match")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1180332225_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nomatch1_;
  SEXP Rsh_Fir_reg_nomatch2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1180332225/0: expected 0, got %d", NCAPTURES);

  // nomatch1 = ld nomatch
  Rsh_Fir_reg_nomatch1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // nomatch2 = force? nomatch1
  Rsh_Fir_reg_nomatch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nomatch1_);
  // checkMissing(nomatch2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_nomatch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return nomatch2
  return Rsh_Fir_reg_nomatch2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
