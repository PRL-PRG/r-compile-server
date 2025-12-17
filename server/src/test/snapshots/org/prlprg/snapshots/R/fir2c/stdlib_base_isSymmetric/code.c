#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_isSymmetric;  // isSymmetric
  SEXP Rsh_Fir_reg_diag;  // diag
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_D3_;  // D3
  SEXP Rsh_Fir_reg_D4_;  // D4
  SEXP Rsh_Fir_reg_isSymmetric1_;  // isSymmetric1
  SEXP Rsh_Fir_reg_D5_;  // D5
  SEXP Rsh_Fir_reg_D6_;  // D6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_isSymmetric2_;  // isSymmetric2
  SEXP Rsh_Fir_reg_D7_;  // D7
  SEXP Rsh_Fir_reg_D8_;  // D8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_t;  // t
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_Z;  // Z
  SEXP Rsh_Fir_reg_Z1_;  // Z1
  SEXP Rsh_Fir_reg_Conj;  // Conj
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_Z2_;  // Z2
  SEXP Rsh_Fir_reg_Z3_;  // Z3
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_Z4_;  // Z4
  SEXP Rsh_Fir_reg_Z5_;  // Z5
  SEXP Rsh_Fir_reg_isSymmetric3_;  // isSymmetric3
  SEXP Rsh_Fir_reg_Z6_;  // Z6
  SEXP Rsh_Fir_reg_Z7_;  // Z7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_isSymmetric4_;  // isSymmetric4
  SEXP Rsh_Fir_reg_Z8_;  // Z8
  SEXP Rsh_Fir_reg_Z9_;  // Z9
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_isSymmetric5_;  // isSymmetric5
  SEXP Rsh_Fir_reg_Z10_;  // Z10
  SEXP Rsh_Fir_reg_Z11_;  // Z11
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_colnames__;  // colnames__
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_isSymmetric6_;  // isSymmetric6
  SEXP Rsh_Fir_reg_D9_;  // D9
  SEXP Rsh_Fir_reg_D10_;  // D10
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_isSymmetric7_;  // isSymmetric7
  SEXP Rsh_Fir_reg_D11_;  // D11
  SEXP Rsh_Fir_reg_D12_;  // D12
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r39_;  // r39

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner64320599
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner64320599_, RHO, CCP);
  // st isSymmetric = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // isSymmetric = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // st D3 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // D3 = ld D3
  Rsh_Fir_reg_D3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L1_:;
  // st Z = r14
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

L2_:;
  // l3 = ld D3
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L31() else D21()
  // L31()
  goto L31_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   diag = ldf diag;
  //   r1 = dyn diag(3.0);
  //   st D3 = r1;
  //   invisible.0();
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // r3 = dyn isSymmetric(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // l = ld D3
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L5() else L6(1.0E-100, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L6(1.0E-100, l)
    Rsh_Fir_reg_r5_ = Rsh_const(CCP, 7);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L6_;
  }

L5_:;
  // dr = tryDispatchBuiltin.0("[<-", l, 1.0E-100)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args3);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(1.0E-100, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(1.0E-100, dr)
    Rsh_Fir_reg_r5_ = Rsh_const(CCP, 7);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r8 = dyn ___(l2, 1.0E-100, 2.0, 1.0)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L0_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D2_:;
  // deopt 15 [D3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_D3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // D4 = force? D3
  Rsh_Fir_reg_D4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D3_);
  // checkMissing(D4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_D4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // isSymmetric1 = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   D5 = ld D3;
  //   D6 = force? D5;
  //   checkMissing(D6);
  //   return D6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r10 = dyn isSymmetric1(p1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 20 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // isSymmetric2 = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p2 = prom<V +>{
  //   D7 = ld D3;
  //   D8 = force? D7;
  //   checkMissing(D8);
  //   return D8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, CCP, RHO);
  // r12 = dyn isSymmetric2[, tol](p2, 0.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric2_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 26 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // sym = ldf sqrt
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf sqrt in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

L14_:;
  // r13 = dyn base(<lang matrix(`+`(`:`(`-`(1.0), 2.0), 0.0i), 2.0)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L1_;

D7_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p3 = prom<V +>{
  //   return <cplx -1.0+0.0i, 0.0i, 1.0+0.0i, 2.0+0.0i>;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, CCP, RHO);
  // r16 = dyn matrix(p3, 2.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // r17 = sqrt(r16)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r17_;
  goto L1_;

D9_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p4 = prom<V +>{
  //   sym1 = ldf Conj;
  //   base1 = ldf Conj in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   Z = ld Z;
  //   Z1 = force? Z;
  //   checkMissing(Z1);
  //   Conj = ldf Conj in base;
  //   r20 = dyn Conj(Z1);
  //   goto L0(r20);
  // L2():
  //   r18 = dyn base1(<sym Z>);
  //   goto L0(r18);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, CCP, RHO);
  // r22 = dyn t(p4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 39 [r22]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L18_:;
  // Z2 = ld Z
  Rsh_Fir_reg_Z2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

D11_:;
  // deopt 40 [Z2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_Z2_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // Z3 = force? Z2
  Rsh_Fir_reg_Z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z2_);
  // checkMissing(Z3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_Z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // ___1 = ldf `%*%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r23 = dyn ___1(r22, Z3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_Z3_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

D12_:;
  // deopt 43 [r23]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L20_:;
  // st Z = r23
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // Z4 = ld Z
  Rsh_Fir_reg_Z4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

D13_:;
  // deopt 45 [Z4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_Z4_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // Z5 = force? Z4
  Rsh_Fir_reg_Z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z4_);
  // checkMissing(Z5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_Z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // isSymmetric3 = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D14()
  // L22()
  goto L22_;

D14_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p5 = prom<V +>{
  //   Z6 = ld Z;
  //   Z7 = force? Z6;
  //   checkMissing(Z7);
  //   return Z7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, CCP, RHO);
  // r25 = dyn isSymmetric3(p5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L23() else D15()
  // L23()
  goto L23_;

D15_:;
  // deopt 50 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // isSymmetric4 = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L24() else D16()
  // L24()
  goto L24_;

D16_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p6 = prom<V +>{
  //   Z8 = ld Z;
  //   Z9 = force? Z8;
  //   checkMissing(Z9);
  //   r26 = `+`(Z9, 1.0);
  //   return r26;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, CCP, RHO);
  // r28 = dyn isSymmetric4(p6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L25() else D17()
  // L25()
  goto L25_;

D17_:;
  // deopt 54 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // isSymmetric5 = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L26() else D18()
  // L26()
  goto L26_;

D18_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p7 = prom<V +>{
  //   Z10 = ld Z;
  //   Z11 = force? Z10;
  //   checkMissing(Z11);
  //   r29 = `+`(Z11, 1.0i);
  //   return r29;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, CCP, RHO);
  // r31 = dyn isSymmetric5(p7)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric5_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L27() else D19()
  // L27()
  goto L27_;

D19_:;
  // deopt 58 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L27_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r34 = dyn c1("X", "Y", "Z")
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L30() else D20()
  // L30()
  goto L30_;

L29_:;
  // r32 = dyn base2("X", "Y", "Z")
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L2(r32)
  // L2(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L2_;

D20_:;
  // deopt 65 [r34]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L2(r34)
  // L2(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L2_;

D21_:;
  // deopt 67 [r33, l3, r33]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(67, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L31_:;
  // r35 = dyn colnames__(l3, NULL, r33)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L32() else D22()
  // L32()
  goto L32_;

D22_:;
  // deopt 69 [r33, r35]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L32_:;
  // st D3 = r35
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // isSymmetric6 = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L33() else D23()
  // L33()
  goto L33_;

D23_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p8 = prom<V +>{
  //   D9 = ld D3;
  //   D10 = force? D9;
  //   checkMissing(D10);
  //   return D10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, CCP, RHO);
  // r37 = dyn isSymmetric6(p8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric6_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L34() else D24()
  // L34()
  goto L34_;

D24_:;
  // deopt 74 [r37]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L34_:;
  // isSymmetric7 = ldf isSymmetric
  Rsh_Fir_reg_isSymmetric7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L35() else D25()
  // L35()
  goto L35_;

D25_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p9 = prom<V +>{
  //   D11 = ld D3;
  //   D12 = force? D11;
  //   checkMissing(D12);
  //   return D12;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, CCP, RHO);
  // r39 = dyn isSymmetric7[, `check.attributes`](p9, FALSE)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isSymmetric7_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L36() else D26()
  // L36()
  goto L36_;

D26_:;
  // deopt 80 [r39]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L36_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // r1 = dyn diag(3.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // st D3 = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // D5 = ld D3
  Rsh_Fir_reg_D5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // D6 = force? D5
  Rsh_Fir_reg_D6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D5_);
  // checkMissing(D6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_D6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return D6
  return Rsh_Fir_reg_D6_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO) {
  // D7 = ld D3
  Rsh_Fir_reg_D7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // D8 = force? D7
  Rsh_Fir_reg_D8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D7_);
  // checkMissing(D8)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_D8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return D8
  return Rsh_Fir_reg_D8_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO) {
  // return <cplx -1.0+0.0i, 0.0i, 1.0+0.0i, 2.0+0.0i>
  return Rsh_const(CCP, 17);
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO) {
  // sym1 = ldf Conj
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf Conj in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // Z = ld Z
  Rsh_Fir_reg_Z = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Z1 = force? Z
  Rsh_Fir_reg_Z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z);
  // checkMissing(Z1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_Z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // Conj = ldf Conj in base
  Rsh_Fir_reg_Conj = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r20 = dyn Conj(Z1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_Z1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Conj, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L2_:;
  // r18 = dyn base1(<sym Z>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO) {
  // Z6 = ld Z
  Rsh_Fir_reg_Z6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Z7 = force? Z6
  Rsh_Fir_reg_Z7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z6_);
  // checkMissing(Z7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_Z7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return Z7
  return Rsh_Fir_reg_Z7_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO) {
  // Z8 = ld Z
  Rsh_Fir_reg_Z8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Z9 = force? Z8
  Rsh_Fir_reg_Z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z8_);
  // checkMissing(Z9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_Z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r26 = `+`(Z9, 1.0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_Z9_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO) {
  // Z10 = ld Z
  Rsh_Fir_reg_Z10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Z11 = force? Z10
  Rsh_Fir_reg_Z11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z10_);
  // checkMissing(Z11)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_Z11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r29 = `+`(Z11, 1.0i)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_Z11_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO) {
  // D9 = ld D3
  Rsh_Fir_reg_D9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // D10 = force? D9
  Rsh_Fir_reg_D10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D9_);
  // checkMissing(D10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_D10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return D10
  return Rsh_Fir_reg_D10_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO) {
  // D11 = ld D3
  Rsh_Fir_reg_D11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // D12 = force? D11
  Rsh_Fir_reg_D12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D11_);
  // checkMissing(D12)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_D12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return D12
  return Rsh_Fir_reg_D12_;
}
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner64320599 dynamic dispatch ([object, `...`])

  return Rsh_Fir_user_version_inner64320599_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner64320599 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner64320599/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_UseMethod;  // UseMethod
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r2 = dyn UseMethod("isSymmetric")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("isSymmetric")
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
