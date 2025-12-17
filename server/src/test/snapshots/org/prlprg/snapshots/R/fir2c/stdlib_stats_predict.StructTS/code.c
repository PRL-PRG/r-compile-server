#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner389459126_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner389459126_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner389459126_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner389459126_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner389459126_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner389459126_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner389459126_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner389459126_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner389459126_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner389459126_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner389459126
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner389459126_, RHO, CCP);
  // st `predict.StructTS` = r
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
SEXP Rsh_Fir_user_function_inner389459126_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner389459126 dynamic dispatch ([object, `n.ahead`, `se.fit`, `...`])

  return Rsh_Fir_user_version_inner389459126_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner389459126_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner389459126 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner389459126/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_n_ahead;  // n_ahead
  SEXP Rsh_Fir_reg_se_fit;  // se_fit
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_n_ahead_isMissing;  // n_ahead_isMissing
  SEXP Rsh_Fir_reg_n_ahead_orDefault;  // n_ahead_orDefault
  SEXP Rsh_Fir_reg_se_fit_isMissing;  // se_fit_isMissing
  SEXP Rsh_Fir_reg_se_fit_orDefault;  // se_fit_orDefault
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_KalmanForecast;  // KalmanForecast
  SEXP Rsh_Fir_reg_n_ahead1_;  // n_ahead1
  SEXP Rsh_Fir_reg_n_ahead2_;  // n_ahead2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_ts;  // ts
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_xtsp;  // xtsp
  SEXP Rsh_Fir_reg_xtsp1_;  // xtsp1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_xtsp3_;  // xtsp3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_xtsp4_;  // xtsp4
  SEXP Rsh_Fir_reg_xtsp5_;  // xtsp5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_xtsp7_;  // xtsp7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_xtsp8_;  // xtsp8
  SEXP Rsh_Fir_reg_xtsp9_;  // xtsp9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_xtsp11_;  // xtsp11
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_se_fit1_;  // se_fit1
  SEXP Rsh_Fir_reg_se_fit2_;  // se_fit2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_ts1_;  // ts1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_xtsp12_;  // xtsp12
  SEXP Rsh_Fir_reg_xtsp13_;  // xtsp13
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_xtsp15_;  // xtsp15
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_xtsp16_;  // xtsp16
  SEXP Rsh_Fir_reg_xtsp17_;  // xtsp17
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_xtsp19_;  // xtsp19
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_xtsp20_;  // xtsp20
  SEXP Rsh_Fir_reg_xtsp21_;  // xtsp21
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_xtsp23_;  // xtsp23
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_pred;  // pred
  SEXP Rsh_Fir_reg_pred1_;  // pred1
  SEXP Rsh_Fir_reg_se;  // se
  SEXP Rsh_Fir_reg_se1_;  // se1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_pred2_;  // pred2
  SEXP Rsh_Fir_reg_pred3_;  // pred3

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_n_ahead = PARAMS[1];
  Rsh_Fir_reg_se_fit = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // n_ahead_isMissing = missing.0(n_ahead)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_n_ahead;
  Rsh_Fir_reg_n_ahead_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if n_ahead_isMissing then L0(1) else L0(n_ahead)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_ahead_isMissing)) {
  // L0(1)
    Rsh_Fir_reg_n_ahead_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(n_ahead)
    Rsh_Fir_reg_n_ahead_orDefault = Rsh_Fir_reg_n_ahead;
    goto L0_;
  }

L0_:;
  // st `n.ahead` = n_ahead_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_n_ahead_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_ahead_orDefault);
  // se_fit_isMissing = missing.0(se_fit)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_se_fit;
  Rsh_Fir_reg_se_fit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if se_fit_isMissing then L1(TRUE) else L1(se_fit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_se_fit_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_se_fit_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(se_fit)
    Rsh_Fir_reg_se_fit_orDefault = Rsh_Fir_reg_se_fit;
    goto L1_;
  }

L1_:;
  // st `se.fit` = se_fit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_se_fit_orDefault, RHO);
  (void)(Rsh_Fir_reg_se_fit_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L2_:;
  // pred2 = ld pred
  Rsh_Fir_reg_pred2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r37
  return Rsh_Fir_reg_r37_;

D0_:;
  // deopt 0 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L6() else L7(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L7(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L7_;
  }

L5_:;
  // st xtsp = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // KalmanForecast = ldf KalmanForecast
  Rsh_Fir_reg_KalmanForecast = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L6_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // r = `$`(object4, <sym xtsp>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L5(r)
  // L5(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L5_;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   n_ahead1 = ld `n.ahead`;
  //   n_ahead2 = force? n_ahead1;
  //   checkMissing(n_ahead2);
  //   return n_ahead2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_, CCP, RHO);
  // p1 = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   c1 = `is.object`(object6);
  //   if c1 then L1() else L2(object6);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", object6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(object8):
  //   r2 = `$`(object8, <sym model>);
  //   goto L0(r2);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_1, CCP, RHO);
  // r4 = dyn KalmanForecast(p, p1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_KalmanForecast, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // st z = r4
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // ts = ldf ts
  Rsh_Fir_reg_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p2 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   c2 = `is.object`(z1);
  //   if c2 then L1() else L2(z1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", z1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(z3):
  //   __ = ldf `[[` in base;
  //   r5 = dyn __(z3, 1);
  //   goto L0(r5);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_2, CCP, RHO);
  // p3 = prom<V +>{
  //   xtsp = ld xtsp;
  //   xtsp1 = force? xtsp;
  //   checkMissing(xtsp1);
  //   c3 = `is.object`(xtsp1);
  //   if c3 then L2() else L3(xtsp1);
  // L0(dx7):
  //   xtsp4 = ld xtsp;
  //   xtsp5 = force? xtsp4;
  //   checkMissing(xtsp5);
  //   c4 = `is.object`(xtsp5);
  //   if c4 then L5() else L6(dx7, 1.0, xtsp5);
  // L2():
  //   dr6 = tryDispatchBuiltin.1("[", xtsp1);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L4() else L3(dr6);
  // L3(xtsp3):
  //   __1 = ldf `[` in base;
  //   r7 = dyn __1(xtsp3, 2);
  //   goto L0(r7);
  // L1(dx12, r11, dx13):
  //   r13 = `/`(r11, dx13);
  //   r14 = `+`(dx12, r13);
  //   return r14;
  // L4():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // L5():
  //   dr8 = tryDispatchBuiltin.1("[", xtsp5);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L7() else L6(dx7, 1.0, dr8);
  // L6(dx9, r9, xtsp7):
  //   __2 = ldf `[` in base;
  //   r12 = dyn __2(xtsp7, 3);
  //   goto L1(dx9, r9, r12);
  // L7():
  //   dx11 = getTryDispatchBuiltinValue(dr8);
  //   goto L1(dx7, 1.0, dx11);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_3, CCP, RHO);
  // p4 = prom<V +>{
  //   xtsp8 = ld xtsp;
  //   xtsp9 = force? xtsp8;
  //   checkMissing(xtsp9);
  //   c5 = `is.object`(xtsp9);
  //   if c5 then L1() else L2(xtsp9);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", xtsp9);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(xtsp11):
  //   __3 = ldf `[` in base;
  //   r16 = dyn __3(xtsp11, 3);
  //   goto L0(r16);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_4, CCP, RHO);
  // r18 = dyn ts[, start, frequency](p2, p3, p4)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 17 [r18]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // st pred = r18
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // se_fit1 = ld `se.fit`
  Rsh_Fir_reg_se_fit1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 19 [se_fit1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_se_fit1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // se_fit2 = force? se_fit1
  Rsh_Fir_reg_se_fit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_se_fit1_);
  // checkMissing(se_fit2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_se_fit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(se_fit2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_se_fit2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c6 then L14() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L14()
    goto L14_;
  } else {
  // L2()
    goto L2_;
  }

L14_:;
  // ts1 = ldf ts
  Rsh_Fir_reg_ts1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p5 = prom<V +>{
  //   sym = ldf sqrt;
  //   base = ldf sqrt in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r20):
  //   return r20;
  // L2():
  //   z4 = ld z;
  //   z5 = force? z4;
  //   checkMissing(z5);
  //   c7 = `is.object`(z5);
  //   if c7 then L4() else L5(z5);
  // L3():
  //   r19 = dyn base(<lang `[[`(z, 2)>);
  //   goto L0(r19);
  // L1(dx17):
  //   r22 = sqrt(dx17);
  //   goto L0(r22);
  // L4():
  //   dr12 = tryDispatchBuiltin.1("[[", z5);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L6() else L5(dr12);
  // L5(z7):
  //   __4 = ldf `[[` in base;
  //   r21 = dyn __4(z7, 2);
  //   goto L1(r21);
  // L6():
  //   dx16 = getTryDispatchBuiltinValue(dr12);
  //   goto L1(dx16);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_5, CCP, RHO);
  // p6 = prom<V +>{
  //   xtsp12 = ld xtsp;
  //   xtsp13 = force? xtsp12;
  //   checkMissing(xtsp13);
  //   c8 = `is.object`(xtsp13);
  //   if c8 then L2() else L3(xtsp13);
  // L0(dx19):
  //   xtsp16 = ld xtsp;
  //   xtsp17 = force? xtsp16;
  //   checkMissing(xtsp17);
  //   c9 = `is.object`(xtsp17);
  //   if c9 then L5() else L6(dx19, 1.0, xtsp17);
  // L2():
  //   dr14 = tryDispatchBuiltin.1("[", xtsp13);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L4() else L3(dr14);
  // L3(xtsp15):
  //   __5 = ldf `[` in base;
  //   r24 = dyn __5(xtsp15, 2);
  //   goto L0(r24);
  // L1(dx24, r28, dx25):
  //   r30 = `/`(r28, dx25);
  //   r31 = `+`(dx24, r30);
  //   return r31;
  // L4():
  //   dx18 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx18);
  // L5():
  //   dr16 = tryDispatchBuiltin.1("[", xtsp17);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L7() else L6(dx19, 1.0, dr16);
  // L6(dx21, r26, xtsp19):
  //   __6 = ldf `[` in base;
  //   r29 = dyn __6(xtsp19, 3);
  //   goto L1(dx21, r26, r29);
  // L7():
  //   dx23 = getTryDispatchBuiltinValue(dr16);
  //   goto L1(dx19, 1.0, dx23);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_6, CCP, RHO);
  // p7 = prom<V +>{
  //   xtsp20 = ld xtsp;
  //   xtsp21 = force? xtsp20;
  //   checkMissing(xtsp21);
  //   c10 = `is.object`(xtsp21);
  //   if c10 then L1() else L2(xtsp21);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", xtsp21);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(xtsp23):
  //   __7 = ldf `[` in base;
  //   r33 = dyn __7(xtsp23, 3);
  //   goto L0(r33);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner389459126_7, CCP, RHO);
  // r35 = dyn ts1[, start, frequency](p5, p6, p7)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts1_, 3, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

D7_:;
  // deopt 28 [r35]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // st se = r35
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // pred = ld pred
  Rsh_Fir_reg_pred = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

L18_:;
  // r36 = dyn base1[pred, se](<sym pred>, <sym se>)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r36)
  // L3(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L3_;

D8_:;
  // deopt 32 [pred]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_pred;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // pred1 = force? pred
  Rsh_Fir_reg_pred1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pred);
  // checkMissing(pred1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_pred1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // se = ld se
  Rsh_Fir_reg_se = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 35 [se]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_se;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // se1 = force? se
  Rsh_Fir_reg_se1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_se);
  // checkMissing(se1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_se1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r38 = dyn list(pred1, se1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_pred1_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_se1_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 39 [r38]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L3(r38)
  // L3(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L3_;

D11_:;
  // deopt 40 [pred2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_pred2_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // pred3 = force? pred2
  Rsh_Fir_reg_pred3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pred2_);
  // checkMissing(pred3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_pred3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return pred3
  return Rsh_Fir_reg_pred3_;
}
SEXP Rsh_Fir_user_promise_inner389459126_(SEXP CCP, SEXP RHO) {
  // n_ahead1 = ld `n.ahead`
  Rsh_Fir_reg_n_ahead1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n_ahead2 = force? n_ahead1
  Rsh_Fir_reg_n_ahead2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_ahead1_);
  // checkMissing(n_ahead2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n_ahead2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return n_ahead2
  return Rsh_Fir_reg_n_ahead2_;
}
SEXP Rsh_Fir_user_promise_inner389459126_1(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r2 = `$`(object8, <sym model>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r2_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner389459126_2(SEXP CCP, SEXP RHO) {
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(z1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", z1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r5 = dyn __(z3, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r5_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner389459126_3(SEXP CCP, SEXP RHO) {
  // xtsp = ld xtsp
  Rsh_Fir_reg_xtsp = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // xtsp1 = force? xtsp
  Rsh_Fir_reg_xtsp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp);
  // checkMissing(xtsp1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_xtsp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(xtsp1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c3 then L2() else L3(xtsp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L2()
    goto L2_;
  } else {
  // L3(xtsp1)
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_xtsp1_;
    goto L3_;
  }

L0_:;
  // xtsp4 = ld xtsp
  Rsh_Fir_reg_xtsp4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // xtsp5 = force? xtsp4
  Rsh_Fir_reg_xtsp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp4_);
  // checkMissing(xtsp5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_xtsp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(xtsp5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c4 then L5() else L6(dx7, 1.0, xtsp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx7, 1.0, xtsp5)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_xtsp5_;
    goto L6_;
  }

L1_:;
  // r13 = `/`(r11, dx13)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // r14 = `+`(dx12, r13)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // return r14
  return Rsh_Fir_reg_r14_;

L2_:;
  // dr6 = tryDispatchBuiltin.1("[", xtsp1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc3 then L4() else L3(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr6)
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_dr6_;
    goto L3_;
  }

L3_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r7 = dyn __1(xtsp3, 2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_xtsp3_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r7_;
  goto L0_;

L4_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;

L5_:;
  // dr8 = tryDispatchBuiltin.1("[", xtsp5)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc4 then L7() else L6(dx7, 1.0, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dx7, 1.0, dr8)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_dr8_;
    goto L6_;
  }

L6_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r12 = dyn __2(xtsp7, 3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_xtsp7_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(dx9, r9, r12)
  // L1(dx9, r9, r12)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r12_;
  goto L1_;

L7_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L1(dx7, 1.0, dx11)
  // L1(dx7, 1.0, dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r11_ = Rsh_const(CCP, 16);
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner389459126_4(SEXP CCP, SEXP RHO) {
  // xtsp8 = ld xtsp
  Rsh_Fir_reg_xtsp8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // xtsp9 = force? xtsp8
  Rsh_Fir_reg_xtsp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp8_);
  // checkMissing(xtsp9)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_xtsp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(xtsp9)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_xtsp9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(xtsp9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp9)
    Rsh_Fir_reg_xtsp11_ = Rsh_Fir_reg_xtsp9_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", xtsp9)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_xtsp9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_xtsp11_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r16 = dyn __3(xtsp11, 3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_xtsp11_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner389459126_5(SEXP CCP, SEXP RHO) {
  // sym = ldf sqrt
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf sqrt in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r20
  return Rsh_Fir_reg_r20_;

L1_:;
  // r22 = sqrt(dx17)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(z5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c7 then L4() else L5(z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L4()
    goto L4_;
  } else {
  // L5(z5)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L5_;
  }

L3_:;
  // r19 = dyn base(<lang `[[`(z, 2)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;

L4_:;
  // dr12 = tryDispatchBuiltin.1("[[", z5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc6 then L6() else L5(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr12)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr12_;
    goto L5_;
  }

L5_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r21 = dyn __4(z7, 2)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r21)
  // L1(r21)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r21_;
  goto L1_;

L6_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L1(dx16)
  // L1(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner389459126_6(SEXP CCP, SEXP RHO) {
  // xtsp12 = ld xtsp
  Rsh_Fir_reg_xtsp12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // xtsp13 = force? xtsp12
  Rsh_Fir_reg_xtsp13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp12_);
  // checkMissing(xtsp13)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_xtsp13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(xtsp13)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_xtsp13_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c8 then L2() else L3(xtsp13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L2()
    goto L2_;
  } else {
  // L3(xtsp13)
    Rsh_Fir_reg_xtsp15_ = Rsh_Fir_reg_xtsp13_;
    goto L3_;
  }

L0_:;
  // xtsp16 = ld xtsp
  Rsh_Fir_reg_xtsp16_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // xtsp17 = force? xtsp16
  Rsh_Fir_reg_xtsp17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp16_);
  // checkMissing(xtsp17)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_xtsp17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(xtsp17)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_xtsp17_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c9 then L5() else L6(dx19, 1.0, xtsp17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx19, 1.0, xtsp17)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_r26_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_xtsp19_ = Rsh_Fir_reg_xtsp17_;
    goto L6_;
  }

L1_:;
  // r30 = `/`(r28, dx25)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // r31 = `+`(dx24, r30)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // return r31
  return Rsh_Fir_reg_r31_;

L2_:;
  // dr14 = tryDispatchBuiltin.1("[", xtsp13)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_xtsp13_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc7 then L4() else L3(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr14)
    Rsh_Fir_reg_xtsp15_ = Rsh_Fir_reg_dr14_;
    goto L3_;
  }

L3_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r24 = dyn __5(xtsp15, 2)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_xtsp15_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r24_;
  goto L0_;

L4_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;

L5_:;
  // dr16 = tryDispatchBuiltin.1("[", xtsp17)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_xtsp17_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc8 then L7() else L6(dx19, 1.0, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dx19, 1.0, dr16)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_r26_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_xtsp19_ = Rsh_Fir_reg_dr16_;
    goto L6_;
  }

L6_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r29 = dyn __6(xtsp19, 3)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_xtsp19_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(dx21, r26, r29)
  // L1(dx21, r26, r29)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r29_;
  goto L1_;

L7_:;
  // dx23 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L1(dx19, 1.0, dx23)
  // L1(dx19, 1.0, dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_r28_ = Rsh_const(CCP, 16);
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner389459126_7(SEXP CCP, SEXP RHO) {
  // xtsp20 = ld xtsp
  Rsh_Fir_reg_xtsp20_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // xtsp21 = force? xtsp20
  Rsh_Fir_reg_xtsp21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp20_);
  // checkMissing(xtsp21)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_xtsp21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(xtsp21)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_xtsp21_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c10 then L1() else L2(xtsp21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xtsp21)
    Rsh_Fir_reg_xtsp23_ = Rsh_Fir_reg_xtsp21_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", xtsp21)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_xtsp21_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_xtsp23_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r33 = dyn __7(xtsp23, 3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_xtsp23_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r33_;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
