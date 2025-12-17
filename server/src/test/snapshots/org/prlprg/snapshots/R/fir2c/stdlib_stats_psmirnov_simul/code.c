#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner964900509_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner964900509_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner964900509_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner964900509_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner964900509_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner964900509_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner964900509_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner964900509_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner964900509_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner964900509
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner964900509_, RHO, CCP);
  // st psmirnov_simul = r
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
SEXP Rsh_Fir_user_function_inner964900509_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner964900509 dynamic dispatch ([q, sizes, z, alternative, `lower.tail`, `log.p`, B])

  return Rsh_Fir_user_version_inner964900509_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner964900509_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner964900509 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner964900509/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_q;  // q
  SEXP Rsh_Fir_reg_sizes;  // sizes
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_alternative;  // alternative
  SEXP Rsh_Fir_reg_lower_tail;  // lower_tail
  SEXP Rsh_Fir_reg_log_p;  // log_p
  SEXP Rsh_Fir_reg_B;  // B
  SEXP Rsh_Fir_reg_z_isMissing;  // z_isMissing
  SEXP Rsh_Fir_reg_z_orDefault;  // z_orDefault
  SEXP Rsh_Fir_reg_alternative_isMissing;  // alternative_isMissing
  SEXP Rsh_Fir_reg_alternative_orDefault;  // alternative_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_lower_tail_isMissing;  // lower_tail_isMissing
  SEXP Rsh_Fir_reg_lower_tail_orDefault;  // lower_tail_orDefault
  SEXP Rsh_Fir_reg_log_p_isMissing;  // log_p_isMissing
  SEXP Rsh_Fir_reg_log_p_orDefault;  // log_p_orDefault
  SEXP Rsh_Fir_reg_rsmirnov;  // rsmirnov
  SEXP Rsh_Fir_reg_B1_;  // B1
  SEXP Rsh_Fir_reg_B2_;  // B2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sizes1_;  // sizes1
  SEXP Rsh_Fir_reg_sizes2_;  // sizes2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_alternative1_;  // alternative1
  SEXP Rsh_Fir_reg_alternative2_;  // alternative2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_ecdf;  // ecdf
  SEXP Rsh_Fir_reg_Dsim;  // Dsim
  SEXP Rsh_Fir_reg_Dsim1_;  // Dsim1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_q1_;  // q1
  SEXP Rsh_Fir_reg_q2_;  // q2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_q5_;  // q5
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg__Machine;  // _Machine
  SEXP Rsh_Fir_reg__Machine1_;  // _Machine1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_q7_;  // q7
  SEXP Rsh_Fir_reg__Machine3_;  // _Machine3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_q9_;  // q9
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_log_p1_;  // log_p1
  SEXP Rsh_Fir_reg_log_p2_;  // log_p2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_lower_tail1_;  // lower_tail1
  SEXP Rsh_Fir_reg_lower_tail2_;  // lower_tail2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_ret;  // ret
  SEXP Rsh_Fir_reg_ret1_;  // ret1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_ret2_;  // ret2
  SEXP Rsh_Fir_reg_ret3_;  // ret3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_lower_tail3_;  // lower_tail3
  SEXP Rsh_Fir_reg_lower_tail4_;  // lower_tail4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_ret4_;  // ret4
  SEXP Rsh_Fir_reg_ret5_;  // ret5
  SEXP Rsh_Fir_reg_ret6_;  // ret6
  SEXP Rsh_Fir_reg_ret7_;  // ret7
  SEXP Rsh_Fir_reg_r26_;  // r26

  // Bind parameters
  Rsh_Fir_reg_q = PARAMS[0];
  Rsh_Fir_reg_sizes = PARAMS[1];
  Rsh_Fir_reg_z = PARAMS[2];
  Rsh_Fir_reg_alternative = PARAMS[3];
  Rsh_Fir_reg_lower_tail = PARAMS[4];
  Rsh_Fir_reg_log_p = PARAMS[5];
  Rsh_Fir_reg_B = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st q = q
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_q, RHO);
  (void)(Rsh_Fir_reg_q);
  // st sizes = sizes
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_sizes, RHO);
  (void)(Rsh_Fir_reg_sizes);
  // z_isMissing = missing.0(z)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_z;
  Rsh_Fir_reg_z_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if z_isMissing then L0(NULL) else L0(z)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_z_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_z_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(z)
    Rsh_Fir_reg_z_orDefault = Rsh_Fir_reg_z;
    goto L0_;
  }

L0_:;
  // st z = z_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_z_orDefault, RHO);
  (void)(Rsh_Fir_reg_z_orDefault);
  // alternative_isMissing = missing.0(alternative)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_alternative;
  Rsh_Fir_reg_alternative_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if alternative_isMissing then L1() else L2(alternative)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_alternative_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(alternative)
    Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_alternative;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("two.sided", "less", "greater");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("two.sided", "less", "greater");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner964900509_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st alternative = alternative_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_alternative_orDefault, RHO);
  (void)(Rsh_Fir_reg_alternative_orDefault);
  // lower_tail_isMissing = missing.0(lower_tail)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_lower_tail;
  Rsh_Fir_reg_lower_tail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if lower_tail_isMissing then L3(TRUE) else L3(lower_tail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_tail_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_const(CCP, 10);
    goto L3_;
  } else {
  // L3(lower_tail)
    Rsh_Fir_reg_lower_tail_orDefault = Rsh_Fir_reg_lower_tail;
    goto L3_;
  }

L3_:;
  // st `lower.tail` = lower_tail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_lower_tail_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_tail_orDefault);
  // log_p_isMissing = missing.0(log_p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_log_p;
  Rsh_Fir_reg_log_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if log_p_isMissing then L4(FALSE) else L4(log_p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_p_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_log_p_orDefault = Rsh_const(CCP, 12);
    goto L4_;
  } else {
  // L4(log_p)
    Rsh_Fir_reg_log_p_orDefault = Rsh_Fir_reg_log_p;
    goto L4_;
  }

L4_:;
  // st `log.p` = log_p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_log_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_p_orDefault);
  // st B = B
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_B, RHO);
  (void)(Rsh_Fir_reg_B);
  // rsmirnov = ldf rsmirnov
  Rsh_Fir_reg_rsmirnov = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L5_:;
  // lower_tail3 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

L6_:;
  // sym3 = ldf log1p
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf log1p in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r20
  return Rsh_Fir_reg_r20_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_;

L9_:;
  // ret6 = ld ret
  Rsh_Fir_reg_ret6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   B1 = ld B;
  //   B2 = force? B1;
  //   checkMissing(B2);
  //   return B2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner964900509_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sizes1 = ld sizes;
  //   sizes2 = force? sizes1;
  //   checkMissing(sizes2);
  //   return sizes2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner964900509_2, CCP, RHO);
  // p3 = prom<V +>{
  //   z1 = ld z;
  //   z2 = force? z1;
  //   checkMissing(z2);
  //   return z2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner964900509_3, CCP, RHO);
  // p4 = prom<V +>{
  //   alternative1 = ld alternative;
  //   alternative2 = force? alternative1;
  //   checkMissing(alternative2);
  //   return alternative2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner964900509_4, CCP, RHO);
  // r8 = dyn rsmirnov[, sizes, z, alternative](p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names2[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rsmirnov, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 9 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // st Dsim = r8
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // ecdf = ldf ecdf
  Rsh_Fir_reg_ecdf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p5 = prom<V +>{
  //   Dsim = ld Dsim;
  //   Dsim1 = force? Dsim;
  //   checkMissing(Dsim1);
  //   return Dsim1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner964900509_5, CCP, RHO);
  // r10 = dyn ecdf(p5)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ecdf, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // checkFun.0(r10)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r10_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args15));
  // r11 = r10 as cls
  Rsh_Fir_reg_r11_ = Rsh_Fir_cast(Rsh_Fir_reg_r10_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p6 = prom<V +>{
  //   q1 = ld q;
  //   q2 = force? q1;
  //   checkMissing(q2);
  //   sym1 = ldf sqrt;
  //   base1 = ldf sqrt in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(q5, r13):
  //   r16 = `-`(q5, r13);
  //   return r16;
  // L1():
  //   _Machine = ld `.Machine`;
  //   _Machine1 = force? _Machine;
  //   checkMissing(_Machine1);
  //   c1 = `is.object`(_Machine1);
  //   if c1 then L4() else L5(q2, _Machine1);
  // L2():
  //   r12 = dyn base1(<lang `$`(.Machine, double.eps)>);
  //   goto L0(q2, r12);
  // L3(q9, dx1):
  //   r15 = sqrt(dx1);
  //   goto L0(q9, r15);
  // L4():
  //   dr = tryDispatchBuiltin.1("$", _Machine1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(q2, dr);
  // L5(q7, _Machine3):
  //   r14 = `$`(_Machine3, <sym double.eps>);
  //   goto L3(q7, r14);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L3(q2, dx);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner964900509_6, CCP, RHO);
  // r18 = dyn r11(p6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r11_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 17 [r18]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // st ret = r18
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // log_p1 = ld `log.p`
  Rsh_Fir_reg_log_p1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 19 [log_p1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_log_p1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // log_p2 = force? log_p1
  Rsh_Fir_reg_log_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_p1_);
  // checkMissing(log_p2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_log_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(log_p2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_log_p2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c2 then L16() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L16()
    goto L16_;
  } else {
  // L5()
    goto L5_;
  }

L16_:;
  // lower_tail1 = ld `lower.tail`
  Rsh_Fir_reg_lower_tail1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 21 [lower_tail1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_lower_tail1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // lower_tail2 = force? lower_tail1
  Rsh_Fir_reg_lower_tail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail1_);
  // checkMissing(lower_tail2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_lower_tail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(lower_tail2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_lower_tail2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c3 then L18() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L18()
    goto L18_;
  } else {
  // L6()
    goto L6_;
  }

L18_:;
  // sym2 = ldf log
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf log in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // ret = ld ret
  Rsh_Fir_reg_ret = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

L20_:;
  // r19 = dyn base2(<sym ret>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(r19)
  // L7(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L7_;

D7_:;
  // deopt 24 [ret]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ret;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // ret1 = force? ret
  Rsh_Fir_reg_ret1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret);
  // checkMissing(ret1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_ret1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r21 = log(ret1, 2.718281828459045)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_ret1_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L7_;

L23_:;
  // ret2 = ld ret
  Rsh_Fir_reg_ret2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L24_:;
  // r22 = dyn base3(<lang `-`(ret)>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

D8_:;
  // deopt 28 [ret2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ret2_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // ret3 = force? ret2
  Rsh_Fir_reg_ret3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret2_);
  // checkMissing(ret3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ret3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r24 = `-`(<missing>, ret3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_ret3_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // r25 = log1p(r24)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(174, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L8_;

D9_:;
  // deopt 32 [lower_tail3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_lower_tail3_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // lower_tail4 = force? lower_tail3
  Rsh_Fir_reg_lower_tail4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower_tail3_);
  // checkMissing(lower_tail4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_lower_tail4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(lower_tail4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_lower_tail4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c4 then L28() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L28()
    goto L28_;
  } else {
  // L9()
    goto L9_;
  }

L28_:;
  // ret4 = ld ret
  Rsh_Fir_reg_ret4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 34 [ret4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ret4_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // ret5 = force? ret4
  Rsh_Fir_reg_ret5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret4_);
  // checkMissing(ret5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ret5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ret5
  return Rsh_Fir_reg_ret5_;

D11_:;
  // deopt 37 [1.0, ret6]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_ret6_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // ret7 = force? ret6
  Rsh_Fir_reg_ret7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ret6_);
  // checkMissing(ret7)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ret7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r26 = `-`(1.0, ret7)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_ret7_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_inner964900509_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn c("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner964900509_1(SEXP CCP, SEXP RHO) {
  // B1 = ld B
  Rsh_Fir_reg_B1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // B2 = force? B1
  Rsh_Fir_reg_B2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_B1_);
  // checkMissing(B2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_B2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return B2
  return Rsh_Fir_reg_B2_;
}
SEXP Rsh_Fir_user_promise_inner964900509_2(SEXP CCP, SEXP RHO) {
  // sizes1 = ld sizes
  Rsh_Fir_reg_sizes1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sizes2 = force? sizes1
  Rsh_Fir_reg_sizes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes1_);
  // checkMissing(sizes2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sizes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return sizes2
  return Rsh_Fir_reg_sizes2_;
}
SEXP Rsh_Fir_user_promise_inner964900509_3(SEXP CCP, SEXP RHO) {
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return z2
  return Rsh_Fir_reg_z2_;
}
SEXP Rsh_Fir_user_promise_inner964900509_4(SEXP CCP, SEXP RHO) {
  // alternative1 = ld alternative
  Rsh_Fir_reg_alternative1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // alternative2 = force? alternative1
  Rsh_Fir_reg_alternative2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative1_);
  // checkMissing(alternative2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_alternative2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return alternative2
  return Rsh_Fir_reg_alternative2_;
}
SEXP Rsh_Fir_user_promise_inner964900509_5(SEXP CCP, SEXP RHO) {
  // Dsim = ld Dsim
  Rsh_Fir_reg_Dsim = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // Dsim1 = force? Dsim
  Rsh_Fir_reg_Dsim1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Dsim);
  // checkMissing(Dsim1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_Dsim1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return Dsim1
  return Rsh_Fir_reg_Dsim1_;
}
SEXP Rsh_Fir_user_promise_inner964900509_6(SEXP CCP, SEXP RHO) {
  // q1 = ld q
  Rsh_Fir_reg_q1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // q2 = force? q1
  Rsh_Fir_reg_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_q1_);
  // checkMissing(q2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // sym1 = ldf sqrt
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf sqrt in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r16 = `-`(q5, r13)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_q5_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L4() else L5(q2, _Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4()
    goto L4_;
  } else {
  // L5(q2, _Machine1)
    Rsh_Fir_reg_q7_ = Rsh_Fir_reg_q2_;
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L5_;
  }

L2_:;
  // r12 = dyn base1(<lang `$`(.Machine, double.eps)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(q2, r12)
  // L0(q2, r12)
  Rsh_Fir_reg_q5_ = Rsh_Fir_reg_q2_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;

L3_:;
  // r15 = sqrt(dx1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L0(q9, r15)
  // L0(q9, r15)
  Rsh_Fir_reg_q5_ = Rsh_Fir_reg_q9_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L0_;

L4_:;
  // dr = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(q2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(q2, dr)
    Rsh_Fir_reg_q7_ = Rsh_Fir_reg_q2_;
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // r14 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L3(q7, r14)
  // L3(q7, r14)
  Rsh_Fir_reg_q9_ = Rsh_Fir_reg_q7_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L3_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L3(q2, dx)
  // L3(q2, dx)
  Rsh_Fir_reg_q9_ = Rsh_Fir_reg_q2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
