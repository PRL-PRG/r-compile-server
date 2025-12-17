#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1243904590_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1243904590_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1243904590_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1243904590_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1243904590_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1243904590_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1243904590_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1243904590
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1243904590_, RHO, CCP);
  // st `.vcov.aliased` = r
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
SEXP Rsh_Fir_user_function_inner1243904590_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1243904590 dynamic dispatch ([aliased, vc, complete])

  return Rsh_Fir_user_version_inner1243904590_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1243904590_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1243904590 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1243904590/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_aliased;  // aliased
  SEXP Rsh_Fir_reg_vc;  // vc
  SEXP Rsh_Fir_reg_complete;  // complete
  SEXP Rsh_Fir_reg_complete_isMissing;  // complete_isMissing
  SEXP Rsh_Fir_reg_complete_orDefault;  // complete_orDefault
  SEXP Rsh_Fir_reg_complete1_;  // complete1
  SEXP Rsh_Fir_reg_complete2_;  // complete2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_vc1_;  // vc1
  SEXP Rsh_Fir_reg_vc2_;  // vc2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_aliased1_;  // aliased1
  SEXP Rsh_Fir_reg_aliased2_;  // aliased2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_aliased3_;  // aliased3
  SEXP Rsh_Fir_reg_aliased4_;  // aliased4
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_aliased5_;  // aliased5
  SEXP Rsh_Fir_reg_aliased6_;  // aliased6
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_P;  // P
  SEXP Rsh_Fir_reg_P1_;  // P1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_P2_;  // P2
  SEXP Rsh_Fir_reg_P3_;  // P3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_cn;  // cn
  SEXP Rsh_Fir_reg_cn1_;  // cn1
  SEXP Rsh_Fir_reg_cn2_;  // cn2
  SEXP Rsh_Fir_reg_cn3_;  // cn3
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_aliased7_;  // aliased7
  SEXP Rsh_Fir_reg_aliased8_;  // aliased8
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_vc3_;  // vc3
  SEXP Rsh_Fir_reg_vc4_;  // vc4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_vc6_;  // vc6
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_VC;  // VC
  SEXP Rsh_Fir_reg_VC1_;  // VC1
  SEXP Rsh_Fir_reg_vc9_;  // vc9
  SEXP Rsh_Fir_reg_vc10_;  // vc10

  // Bind parameters
  Rsh_Fir_reg_aliased = PARAMS[0];
  Rsh_Fir_reg_vc = PARAMS[1];
  Rsh_Fir_reg_complete = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st aliased = aliased
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_aliased, RHO);
  (void)(Rsh_Fir_reg_aliased);
  // st vc = vc
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_vc, RHO);
  (void)(Rsh_Fir_reg_vc);
  // complete_isMissing = missing.0(complete)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_complete;
  Rsh_Fir_reg_complete_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if complete_isMissing then L0(TRUE) else L0(complete)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_complete_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_complete_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(complete)
    Rsh_Fir_reg_complete_orDefault = Rsh_Fir_reg_complete;
    goto L0_;
  }

L0_:;
  // st complete = complete_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_complete_orDefault, RHO);
  (void)(Rsh_Fir_reg_complete_orDefault);
  // complete1 = ld complete
  Rsh_Fir_reg_complete1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L1_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c9 then L17() else L3(c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L17()
    goto L17_;
  } else {
  // L3(c9)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
    goto L3_;
  }

L2_:;
  // st P = r6
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // r8 = `<`(r5, r6)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L1(c7)
  // L1(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L1_;

L3_:;
  // c18 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c18 then L23() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L23()
    goto L23_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // c15 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c16 = `&&`(c14, c15)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L3(c16)
  // L3(c16)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c16_;
  goto L3_;

L5_:;
  // vc9 = ld vc
  Rsh_Fir_reg_vc9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L40() else D17()
  // L40()
  goto L40_;

L6_:;
  // st cn = r13
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

L7_:;
  // st VC = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // VC = ld VC
  Rsh_Fir_reg_VC = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L38() else D16()
  // L38()
  goto L38_;

D0_:;
  // deopt 0 [complete1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_complete1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // complete2 = force? complete1
  Rsh_Fir_reg_complete2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_complete1_);
  // checkMissing(complete2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_complete2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(complete2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_complete2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L9() else L1(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L1(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L1_;
  }

L9_:;
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 3 [c]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   vc1 = ld vc;
  //   vc2 = force? vc1;
  //   checkMissing(vc2);
  //   return vc2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1243904590_, CCP, RHO);
  // r1 = dyn NROW(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 5 [c, r1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // aliased1 = ld aliased
  Rsh_Fir_reg_aliased1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L13_:;
  // r4 = dyn base(<sym aliased>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(c, r1, r4)
  // L2(c, r1, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r4_;
  goto L2_;

D3_:;
  // deopt 7 [c, r1, aliased1]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_aliased1_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // aliased2 = force? aliased1
  Rsh_Fir_reg_aliased2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliased1_);
  // checkMissing(aliased2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_aliased2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r7 = dyn length(aliased2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_aliased2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 10 [c, r1, r7]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(10, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2(c, r1, r7)
  // L2(c, r1, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

L17_:;
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // aliased3 = ld aliased
  Rsh_Fir_reg_aliased3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L19_:;
  // r9 = dyn base1(<sym aliased>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(c9, r9)
  // L4(c9, r9)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D5_:;
  // deopt 16 [c9, aliased3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_aliased3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // aliased4 = force? aliased3
  Rsh_Fir_reg_aliased4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliased3_);
  // checkMissing(aliased4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_aliased4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn any(aliased4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_aliased4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 19 [c9, r11]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L4(c9, r11)
  // L4(c9, r11)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L4_;

L23_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // aliased5 = ld aliased
  Rsh_Fir_reg_aliased5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

L25_:;
  // r12 = dyn base2(<sym aliased>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

D7_:;
  // deopt 23 [aliased5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_aliased5_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // aliased6 = force? aliased5
  Rsh_Fir_reg_aliased6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliased5_);
  // checkMissing(aliased6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_aliased6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r14 = dyn names(aliased6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_aliased6_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 26 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L6_;

D9_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p1 = prom<V +>{
  //   P = ld P;
  //   P1 = force? P;
  //   checkMissing(P1);
  //   return P1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1243904590_1, CCP, RHO);
  // p2 = prom<V +>{
  //   P2 = ld P;
  //   P3 = force? P2;
  //   checkMissing(P3);
  //   return P3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1243904590_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym3 = ldf list;
  //   base3 = ldf list in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   cn = ld cn;
  //   cn1 = force? cn;
  //   checkMissing(cn1);
  //   cn2 = ld cn;
  //   cn3 = force? cn2;
  //   checkMissing(cn3);
  //   list = ldf list in base;
  //   r19 = dyn list(cn1, cn3);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base3(<sym cn>, <sym cn>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1243904590_3, CCP, RHO);
  // r21 = dyn matrix[, , , dimnames](NA_REAL, p1, p2, p3)
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args31[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 35 [r21]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // st VC = r21
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p4 = prom<V +>{
  //   aliased7 = ld aliased;
  //   aliased8 = force? aliased7;
  //   checkMissing(aliased8);
  //   r22 = `!`(aliased8);
  //   return r22;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1243904590_4, CCP, RHO);
  // r24 = dyn which(p4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 40 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L31_:;
  // st j = r24
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // vc3 = ld vc
  Rsh_Fir_reg_vc3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

D13_:;
  // deopt 42 [vc3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_vc3_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // vc4 = force? vc3
  Rsh_Fir_reg_vc4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vc3_);
  // checkMissing(vc4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_vc4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // l = ld VC
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c19 = `is.object`(l)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c19 then L33() else L34(vc4, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L33()
    goto L33_;
  } else {
  // L34(vc4, l)
    Rsh_Fir_reg_vc6_ = Rsh_Fir_reg_vc4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L34_;
  }

L33_:;
  // dr = tryDispatchBuiltin.0("[<-", l, vc4)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_vc4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args37);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc then L35() else L34(vc4, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L35()
    goto L35_;
  } else {
  // L34(vc4, dr)
    Rsh_Fir_reg_vc6_ = Rsh_Fir_reg_vc4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L34_;
  }

L34_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L36() else D14()
  // L36()
  goto L36_;

L35_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D14_:;
  // deopt 45 [vc6, l2, vc4, j]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_vc6_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_vc4_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(45, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L36_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

D15_:;
  // deopt 46 [vc6, l2, vc4, j1, j2]
  SEXP Rsh_Fir_array_deopt_stack13[5];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_vc6_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_vc4_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_deopt_stack13[4] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(46, 5, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L37_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r25 = dyn ___(l2, vc4, j1, j3)
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_vc4_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_args40[3] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r25)
  // L7(r25)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r25_;
  goto L7_;

D16_:;
  // deopt 50 [VC]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_VC;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L38_:;
  // VC1 = force? VC
  Rsh_Fir_reg_VC1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_VC);
  // checkMissing(VC1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_VC1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return VC1
  return Rsh_Fir_reg_VC1_;

D17_:;
  // deopt 52 [vc9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_vc9_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L40_:;
  // vc10 = force? vc9
  Rsh_Fir_reg_vc10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vc9_);
  // checkMissing(vc10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_vc10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return vc10
  return Rsh_Fir_reg_vc10_;
}
SEXP Rsh_Fir_user_promise_inner1243904590_(SEXP CCP, SEXP RHO) {
  // vc1 = ld vc
  Rsh_Fir_reg_vc1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // vc2 = force? vc1
  Rsh_Fir_reg_vc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vc1_);
  // checkMissing(vc2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_vc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return vc2
  return Rsh_Fir_reg_vc2_;
}
SEXP Rsh_Fir_user_promise_inner1243904590_1(SEXP CCP, SEXP RHO) {
  // P = ld P
  Rsh_Fir_reg_P = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // P1 = force? P
  Rsh_Fir_reg_P1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P);
  // checkMissing(P1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_P1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return P1
  return Rsh_Fir_reg_P1_;
}
SEXP Rsh_Fir_user_promise_inner1243904590_2(SEXP CCP, SEXP RHO) {
  // P2 = ld P
  Rsh_Fir_reg_P2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // P3 = force? P2
  Rsh_Fir_reg_P3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P2_);
  // checkMissing(P3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_P3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return P3
  return Rsh_Fir_reg_P3_;
}
SEXP Rsh_Fir_user_promise_inner1243904590_3(SEXP CCP, SEXP RHO) {
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // cn = ld cn
  Rsh_Fir_reg_cn = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // cn1 = force? cn
  Rsh_Fir_reg_cn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cn);
  // checkMissing(cn1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_cn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // cn2 = ld cn
  Rsh_Fir_reg_cn2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // cn3 = force? cn2
  Rsh_Fir_reg_cn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cn2_);
  // checkMissing(cn3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_cn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r19 = dyn list(cn1, cn3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_cn1_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_cn3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base3(<sym cn>, <sym cn>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1243904590_4(SEXP CCP, SEXP RHO) {
  // aliased7 = ld aliased
  Rsh_Fir_reg_aliased7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // aliased8 = force? aliased7
  Rsh_Fir_reg_aliased8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliased7_);
  // checkMissing(aliased8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_aliased8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r22 = `!`(aliased8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_aliased8_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
