#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4097151118_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4097151118_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4097151118_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4097151118_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner4097151118
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4097151118_, RHO, CCP);
  // st `.methods_info` = r
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
SEXP Rsh_Fir_user_function_inner4097151118_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4097151118 dynamic dispatch ([generic, signature, visible, from])

  return Rsh_Fir_user_version_inner4097151118_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4097151118_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4097151118 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner4097151118/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_generic;  // generic
  SEXP Rsh_Fir_reg_signature;  // signature
  SEXP Rsh_Fir_reg_visible;  // visible
  SEXP Rsh_Fir_reg_from;  // from
  SEXP Rsh_Fir_reg_generic_isMissing;  // generic_isMissing
  SEXP Rsh_Fir_reg_generic_orDefault;  // generic_orDefault
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_signature_isMissing;  // signature_isMissing
  SEXP Rsh_Fir_reg_signature_orDefault;  // signature_orDefault
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_visible_isMissing;  // visible_isMissing
  SEXP Rsh_Fir_reg_visible_orDefault;  // visible_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_from_isMissing;  // from_isMissing
  SEXP Rsh_Fir_reg_from_orDefault;  // from_orDefault
  SEXP Rsh_Fir_reg_character2_;  // character2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_signature1_;  // signature1
  SEXP Rsh_Fir_reg_signature2_;  // signature2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_generic1_;  // generic1
  SEXP Rsh_Fir_reg_generic2_;  // generic2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_signature3_;  // signature3
  SEXP Rsh_Fir_reg_signature4_;  // signature4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_duplicated;  // duplicated
  SEXP Rsh_Fir_reg_signature5_;  // signature5
  SEXP Rsh_Fir_reg_signature6_;  // signature6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_data_frame;  // data_frame
  SEXP Rsh_Fir_reg_visible1_;  // visible1
  SEXP Rsh_Fir_reg_visible2_;  // visible2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_visible4_;  // visible4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_from1_;  // from1
  SEXP Rsh_Fir_reg_from2_;  // from2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_from4_;  // from4
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_keep2_;  // keep2
  SEXP Rsh_Fir_reg_keep3_;  // keep3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_generic3_;  // generic3
  SEXP Rsh_Fir_reg_generic4_;  // generic4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_generic6_;  // generic6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_keep4_;  // keep4
  SEXP Rsh_Fir_reg_keep5_;  // keep5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_rep1_;  // rep1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_signature7_;  // signature7
  SEXP Rsh_Fir_reg_signature8_;  // signature8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_signature10_;  // signature10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_keep6_;  // keep6
  SEXP Rsh_Fir_reg_keep7_;  // keep7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r32_;  // r32

  // Bind parameters
  Rsh_Fir_reg_generic = PARAMS[0];
  Rsh_Fir_reg_signature = PARAMS[1];
  Rsh_Fir_reg_visible = PARAMS[2];
  Rsh_Fir_reg_from = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // generic_isMissing = missing.0(generic)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_generic;
  Rsh_Fir_reg_generic_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if generic_isMissing then L0() else L1(generic)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_generic_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(generic)
    Rsh_Fir_reg_generic_orDefault = Rsh_Fir_reg_generic;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   character = ldf character;
  //   r = dyn character();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_generic_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st generic = generic_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_generic_orDefault, RHO);
  (void)(Rsh_Fir_reg_generic_orDefault);
  // signature_isMissing = missing.0(signature)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_signature;
  Rsh_Fir_reg_signature_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if signature_isMissing then L2() else L3(signature)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_signature_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(signature)
    Rsh_Fir_reg_signature_orDefault = Rsh_Fir_reg_signature;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   character1 = ldf character;
  //   r2 = dyn character1();
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_signature_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st signature = signature_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_signature_orDefault, RHO);
  (void)(Rsh_Fir_reg_signature_orDefault);
  // visible_isMissing = missing.0(visible)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_visible;
  Rsh_Fir_reg_visible_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if visible_isMissing then L4() else L5(visible)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_visible_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(visible)
    Rsh_Fir_reg_visible_orDefault = Rsh_Fir_reg_visible;
    goto L5_;
  }

L4_:;
  // p2 = prom<V +>{
  //   sym = ldf rep;
  //   base = ldf rep in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   rep = ldf rep in base;
  //   r6 = dyn rep(TRUE, <lang length(signature)>);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base(TRUE, <lang length(signature)>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_2, CCP, RHO);
  // goto L5(p2)
  // L5(p2)
  Rsh_Fir_reg_visible_orDefault = Rsh_Fir_reg_p2_;
  goto L5_;

L5_:;
  // st visible = visible_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_visible_orDefault, RHO);
  (void)(Rsh_Fir_reg_visible_orDefault);
  // from_isMissing = missing.0(from)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_from;
  Rsh_Fir_reg_from_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if from_isMissing then L6() else L7(from)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_from_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(from)
    Rsh_Fir_reg_from_orDefault = Rsh_Fir_reg_from;
    goto L7_;
  }

L6_:;
  // p3 = prom<V +>{
  //   character2 = ldf character;
  //   r8 = dyn character2();
  //   return r8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_3, CCP, RHO);
  // goto L7(p3)
  // L7(p3)
  Rsh_Fir_reg_from_orDefault = Rsh_Fir_reg_p3_;
  goto L7_;

L7_:;
  // st from = from_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_from_orDefault, RHO);
  (void)(Rsh_Fir_reg_from_orDefault);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L8_:;
  // c = `as.logical`(r11)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L15() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L11_:;
  // signature1 = ld signature
  Rsh_Fir_reg_signature1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r10 = dyn base1(<sym signature>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L8(r10)
  // L8(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L8_;

D0_:;
  // deopt 2 [signature1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_signature1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // signature2 = force? signature1
  Rsh_Fir_reg_signature2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature1_);
  // checkMissing(signature2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_signature2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r12 = dyn length(signature2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_signature2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 5 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L8_;

L15_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p4 = prom<V +>{
  //   generic1 = ld generic;
  //   generic2 = force? generic1;
  //   checkMissing(generic2);
  //   return generic2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_4, CCP, RHO);
  // p5 = prom<V +>{
  //   signature3 = ld signature;
  //   signature4 = force? signature3;
  //   checkMissing(signature4);
  //   return signature4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_5, CCP, RHO);
  // r15 = dyn paste0(p4, ",", p5, "-method")
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 4, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

D3_:;
  // deopt 12 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // st signature = r15
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L10()
  // L10()
  goto L10_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p6 = prom<V +>{
  //   signature5 = ld signature;
  //   signature6 = force? signature5;
  //   checkMissing(signature6);
  //   return signature6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_6, CCP, RHO);
  // r18 = dyn duplicated(p6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

D5_:;
  // deopt 19 [r18]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // r19 = `!`(r18)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // st keep = r19
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p7 = prom<V +>{
  //   visible1 = ld visible;
  //   visible2 = force? visible1;
  //   checkMissing(visible2);
  //   c1 = `is.object`(visible2);
  //   if c1 then L1() else L2(visible2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", visible2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(visible4):
  //   keep = ld keep;
  //   keep1 = force? keep;
  //   __ = ldf `[` in base;
  //   r20 = dyn __(visible4, keep1);
  //   goto L0(r20);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_7, CCP, RHO);
  // p8 = prom<V +>{
  //   from1 = ld from;
  //   from2 = force? from1;
  //   checkMissing(from2);
  //   c2 = `is.object`(from2);
  //   if c2 then L1() else L2(from2);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", from2);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(from4):
  //   keep2 = ld keep;
  //   keep3 = force? keep2;
  //   __1 = ldf `[` in base;
  //   r22 = dyn __1(from4, keep3);
  //   goto L0(r22);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_8, CCP, RHO);
  // p9 = prom<V +>{
  //   generic3 = ld generic;
  //   generic4 = force? generic3;
  //   checkMissing(generic4);
  //   c3 = `is.object`(generic4);
  //   if c3 then L1() else L2(generic4);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", generic4);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(generic6):
  //   keep4 = ld keep;
  //   keep5 = force? keep4;
  //   __2 = ldf `[` in base;
  //   r24 = dyn __2(generic6, keep5);
  //   goto L0(r24);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_9, CCP, RHO);
  // p10 = prom<V +>{
  //   sym2 = ldf rep;
  //   base2 = ldf rep in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r27):
  //   return r27;
  // L1():
  //   rep1 = ldf rep in base;
  //   r28 = dyn rep1(TRUE, <lang sum(keep)>);
  //   goto L0(r28);
  // L2():
  //   r26 = dyn base2(TRUE, <lang sum(keep)>);
  //   goto L0(r26);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_10, CCP, RHO);
  // p11 = prom<V +>{
  //   signature7 = ld signature;
  //   signature8 = force? signature7;
  //   checkMissing(signature8);
  //   c4 = `is.object`(signature8);
  //   if c4 then L1() else L2(signature8);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", signature8);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(signature10):
  //   keep6 = ld keep;
  //   keep7 = force? keep6;
  //   __3 = ldf `[` in base;
  //   r30 = dyn __3(signature10, keep7);
  //   goto L0(r30);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4097151118_11, CCP, RHO);
  // r32 = dyn data_frame[visible, from, generic, isS4, `row.names`, stringsAsFactors](p7, p8, p9, p10, p11, FALSE)
  SEXP Rsh_Fir_array_args45[6];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args45[3] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args45[4] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args45[5] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names12[6];
  Rsh_Fir_array_arg_names12[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names12[5] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 6, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 36 [r32]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner4097151118_1(SEXP CCP, SEXP RHO) {
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r2 = dyn character1()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_2(SEXP CCP, SEXP RHO) {
  // sym = ldf rep
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
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
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r6 = dyn rep(TRUE, <lang length(signature)>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base(TRUE, <lang length(signature)>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_3(SEXP CCP, SEXP RHO) {
  // character2 = ldf character
  Rsh_Fir_reg_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r8 = dyn character2()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character2_, 0, NULL, NULL, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_4(SEXP CCP, SEXP RHO) {
  // generic1 = ld generic
  Rsh_Fir_reg_generic1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // generic2 = force? generic1
  Rsh_Fir_reg_generic2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generic1_);
  // checkMissing(generic2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_generic2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return generic2
  return Rsh_Fir_reg_generic2_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_5(SEXP CCP, SEXP RHO) {
  // signature3 = ld signature
  Rsh_Fir_reg_signature3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // signature4 = force? signature3
  Rsh_Fir_reg_signature4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature3_);
  // checkMissing(signature4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_signature4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return signature4
  return Rsh_Fir_reg_signature4_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_6(SEXP CCP, SEXP RHO) {
  // signature5 = ld signature
  Rsh_Fir_reg_signature5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // signature6 = force? signature5
  Rsh_Fir_reg_signature6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature5_);
  // checkMissing(signature6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_signature6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return signature6
  return Rsh_Fir_reg_signature6_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_7(SEXP CCP, SEXP RHO) {
  // visible1 = ld visible
  Rsh_Fir_reg_visible1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // visible2 = force? visible1
  Rsh_Fir_reg_visible2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_visible1_);
  // checkMissing(visible2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_visible2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(visible2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_visible2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(visible2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(visible2)
    Rsh_Fir_reg_visible4_ = Rsh_Fir_reg_visible2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", visible2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_visible2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_visible4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r20 = dyn __(visible4, keep1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_visible4_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_keep1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_8(SEXP CCP, SEXP RHO) {
  // from1 = ld from
  Rsh_Fir_reg_from1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // from2 = force? from1
  Rsh_Fir_reg_from2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from1_);
  // checkMissing(from2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_from2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(from2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_from2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(from2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(from2)
    Rsh_Fir_reg_from4_ = Rsh_Fir_reg_from2_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", from2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_from2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_from4_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // keep2 = ld keep
  Rsh_Fir_reg_keep2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // keep3 = force? keep2
  Rsh_Fir_reg_keep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r22 = dyn __1(from4, keep3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_from4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_keep3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_9(SEXP CCP, SEXP RHO) {
  // generic3 = ld generic
  Rsh_Fir_reg_generic3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // generic4 = force? generic3
  Rsh_Fir_reg_generic4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generic3_);
  // checkMissing(generic4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_generic4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(generic4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_generic4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(generic4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(generic4)
    Rsh_Fir_reg_generic6_ = Rsh_Fir_reg_generic4_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", generic4)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_generic4_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_generic6_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // keep4 = ld keep
  Rsh_Fir_reg_keep4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // keep5 = force? keep4
  Rsh_Fir_reg_keep5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep4_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r24 = dyn __2(generic6, keep5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_generic6_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_keep5_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r24_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_10(SEXP CCP, SEXP RHO) {
  // sym2 = ldf rep
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf rep in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r27
  return Rsh_Fir_reg_r27_;

L1_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r28 = dyn rep1(TRUE, <lang sum(keep)>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r26 = dyn base2(TRUE, <lang sum(keep)>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4097151118_11(SEXP CCP, SEXP RHO) {
  // signature7 = ld signature
  Rsh_Fir_reg_signature7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // signature8 = force? signature7
  Rsh_Fir_reg_signature8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature7_);
  // checkMissing(signature8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_signature8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(signature8)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_signature8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c4 then L1() else L2(signature8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L1()
    goto L1_;
  } else {
  // L2(signature8)
    Rsh_Fir_reg_signature10_ = Rsh_Fir_reg_signature8_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", signature8)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_signature8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_signature10_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // keep6 = ld keep
  Rsh_Fir_reg_keep6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // keep7 = force? keep6
  Rsh_Fir_reg_keep7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep6_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r30 = dyn __3(signature10, keep7)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_signature10_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_keep7_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r30_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
