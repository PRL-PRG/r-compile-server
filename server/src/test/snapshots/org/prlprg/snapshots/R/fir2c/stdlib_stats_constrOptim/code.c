#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2530300614_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2530300614_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2530300614_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2530300614_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1589173713_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1589173713_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1589173713_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3391087164_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3391087164_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3391087164_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3391087164_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2530300614
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2530300614_, RHO, CCP);
  // st constrOptim = r
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
SEXP Rsh_Fir_user_function_inner2530300614_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2530300614 dynamic dispatch ([theta, f, grad, ui, ci, mu, control, method, `outer.iterations`, `outer.eps`, `...`, hessian])

  return Rsh_Fir_user_version_inner2530300614_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2530300614_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2530300614 version 0 (*, *, *, *, *, *, *, *, *, *, dots, * -+> V)

  if (NPARAMS != 12) Rsh_error("FIŘ arity mismatch for inner2530300614/0: expected 12, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_theta;  // theta
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_grad;  // grad
  SEXP Rsh_Fir_reg_ui;  // ui
  SEXP Rsh_Fir_reg_ci;  // ci
  SEXP Rsh_Fir_reg_mu;  // mu
  SEXP Rsh_Fir_reg_control;  // control
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_outer_iterations;  // outer_iterations
  SEXP Rsh_Fir_reg_outer_eps;  // outer_eps
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_hessian;  // hessian
  SEXP Rsh_Fir_reg_mu_isMissing;  // mu_isMissing
  SEXP Rsh_Fir_reg_mu_orDefault;  // mu_orDefault
  SEXP Rsh_Fir_reg_control_isMissing;  // control_isMissing
  SEXP Rsh_Fir_reg_control_orDefault;  // control_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_method_isMissing;  // method_isMissing
  SEXP Rsh_Fir_reg_method_orDefault;  // method_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_grad1_;  // grad1
  SEXP Rsh_Fir_reg_grad2_;  // grad2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_outer_iterations_isMissing;  // outer_iterations_isMissing
  SEXP Rsh_Fir_reg_outer_iterations_orDefault;  // outer_iterations_orDefault
  SEXP Rsh_Fir_reg_outer_eps_isMissing;  // outer_eps_isMissing
  SEXP Rsh_Fir_reg_outer_eps_orDefault;  // outer_eps_orDefault
  SEXP Rsh_Fir_reg_hessian_isMissing;  // hessian_isMissing
  SEXP Rsh_Fir_reg_hessian_orDefault;  // hessian_orDefault
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_control1_;  // control1
  SEXP Rsh_Fir_reg_control2_;  // control2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_control4_;  // control4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_control5_;  // control5
  SEXP Rsh_Fir_reg_control6_;  // control6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_control8_;  // control8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_mu1_;  // mu1
  SEXP Rsh_Fir_reg_mu2_;  // mu2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_ui1_;  // ui1
  SEXP Rsh_Fir_reg_ui2_;  // ui2
  SEXP Rsh_Fir_reg_theta1_;  // theta1
  SEXP Rsh_Fir_reg_theta2_;  // theta2
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_ci1_;  // ci1
  SEXP Rsh_Fir_reg_ci2_;  // ci2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_theta3_;  // theta3
  SEXP Rsh_Fir_reg_theta4_;  // theta4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_R;  // R
  SEXP Rsh_Fir_reg_theta5_;  // theta5
  SEXP Rsh_Fir_reg_theta6_;  // theta6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_theta7_;  // theta7
  SEXP Rsh_Fir_reg_theta8_;  // theta8
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_grad3_;  // grad3
  SEXP Rsh_Fir_reg_grad4_;  // grad4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_mu3_;  // mu3
  SEXP Rsh_Fir_reg_mu4_;  // mu4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_outer_iterations1_;  // outer_iterations1
  SEXP Rsh_Fir_reg_outer_iterations2_;  // outer_iterations2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_obj;  // obj
  SEXP Rsh_Fir_reg_obj1_;  // obj1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_theta9_;  // theta9
  SEXP Rsh_Fir_reg_theta10_;  // theta10
  SEXP Rsh_Fir_reg_optim;  // optim
  SEXP Rsh_Fir_reg_theta_old;  // theta_old
  SEXP Rsh_Fir_reg_theta_old1_;  // theta_old1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_fun;  // fun
  SEXP Rsh_Fir_reg_fun1_;  // fun1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_gradient;  // gradient
  SEXP Rsh_Fir_reg_gradient1_;  // gradient1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_control9_;  // control9
  SEXP Rsh_Fir_reg_control10_;  // control10
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_method3_;  // method3
  SEXP Rsh_Fir_reg_method4_;  // method4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_hessian1_;  // hessian1
  SEXP Rsh_Fir_reg_hessian2_;  // hessian2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_ddd3_;  // ddd3
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_a3_;  // a3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r_old;  // r_old
  SEXP Rsh_Fir_reg_r_old1_;  // r_old1
  SEXP Rsh_Fir_reg_is_finite1_;  // is_finite1
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r_old2_;  // r_old2
  SEXP Rsh_Fir_reg_r_old3_;  // r_old3
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_abs1_;  // abs1
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_outer_eps1_;  // outer_eps1
  SEXP Rsh_Fir_reg_outer_eps2_;  // outer_eps2
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_a4_;  // a4
  SEXP Rsh_Fir_reg_a5_;  // a5
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_a7_;  // a7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_totCounts;  // totCounts
  SEXP Rsh_Fir_reg_totCounts1_;  // totCounts1
  SEXP Rsh_Fir_reg_a8_;  // a8
  SEXP Rsh_Fir_reg_a9_;  // a9
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_totCounts3_;  // totCounts3
  SEXP Rsh_Fir_reg_a11_;  // a11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_totCounts5_;  // totCounts5
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_theta11_;  // theta11
  SEXP Rsh_Fir_reg_theta12_;  // theta12
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_ddd4_;  // ddd4
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_s_mu;  // s_mu
  SEXP Rsh_Fir_reg_s_mu1_;  // s_mu1
  SEXP Rsh_Fir_reg_obj2_;  // obj2
  SEXP Rsh_Fir_reg_obj3_;  // obj3
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_s_mu2_;  // s_mu2
  SEXP Rsh_Fir_reg_s_mu3_;  // s_mu3
  SEXP Rsh_Fir_reg_obj_old;  // obj_old
  SEXP Rsh_Fir_reg_obj_old1_;  // obj_old1
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_i45_;  // i45
  SEXP Rsh_Fir_reg_outer_iterations3_;  // outer_iterations3
  SEXP Rsh_Fir_reg_outer_iterations4_;  // outer_iterations4
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_gettext;  // gettext
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_mu5_;  // mu5
  SEXP Rsh_Fir_reg_mu6_;  // mu6
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_obj4_;  // obj4
  SEXP Rsh_Fir_reg_obj5_;  // obj5
  SEXP Rsh_Fir_reg_obj_old2_;  // obj_old2
  SEXP Rsh_Fir_reg_obj_old3_;  // obj_old3
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_gettextf;  // gettextf
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_mu7_;  // mu7
  SEXP Rsh_Fir_reg_mu8_;  // mu8
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_obj6_;  // obj6
  SEXP Rsh_Fir_reg_obj7_;  // obj7
  SEXP Rsh_Fir_reg_obj_old4_;  // obj_old4
  SEXP Rsh_Fir_reg_obj_old5_;  // obj_old5
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_gettextf1_;  // gettextf1
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_i51_;  // i51
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_i53_;  // i53
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_totCounts6_;  // totCounts6
  SEXP Rsh_Fir_reg_totCounts7_;  // totCounts7
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_totCounts9_;  // totCounts9
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_a12_;  // a12
  SEXP Rsh_Fir_reg_a13_;  // a13
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_a15_;  // a15
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_l25_;  // l25
  SEXP Rsh_Fir_reg_c70_;  // c70
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_a16_;  // a16
  SEXP Rsh_Fir_reg_a17_;  // a17
  SEXP Rsh_Fir_reg_c71_;  // c71
  SEXP Rsh_Fir_reg_a19_;  // a19
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_ddd5_;  // ddd5
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_c72_;  // c72
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_l30_;  // l30
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_a20_;  // a20
  SEXP Rsh_Fir_reg_a21_;  // a21
  SEXP Rsh_Fir_reg_c73_;  // c73
  SEXP Rsh_Fir_reg_a23_;  // a23
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_a24_;  // a24
  SEXP Rsh_Fir_reg_a25_;  // a25
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_a27_;  // a27
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_c75_;  // c75
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_l33_;  // l33
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_a28_;  // a28
  SEXP Rsh_Fir_reg_a29_;  // a29

  // Bind parameters
  Rsh_Fir_reg_theta = PARAMS[0];
  Rsh_Fir_reg_f = PARAMS[1];
  Rsh_Fir_reg_grad = PARAMS[2];
  Rsh_Fir_reg_ui = PARAMS[3];
  Rsh_Fir_reg_ci = PARAMS[4];
  Rsh_Fir_reg_mu = PARAMS[5];
  Rsh_Fir_reg_control = PARAMS[6];
  Rsh_Fir_reg_method = PARAMS[7];
  Rsh_Fir_reg_outer_iterations = PARAMS[8];
  Rsh_Fir_reg_outer_eps = PARAMS[9];
  Rsh_Fir_reg_ddd = PARAMS[10];
  Rsh_Fir_reg_hessian = PARAMS[11];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st theta = theta
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_theta, RHO);
  (void)(Rsh_Fir_reg_theta);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // st grad = grad
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_grad, RHO);
  (void)(Rsh_Fir_reg_grad);
  // st ui = ui
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ui, RHO);
  (void)(Rsh_Fir_reg_ui);
  // st ci = ci
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ci, RHO);
  (void)(Rsh_Fir_reg_ci);
  // mu_isMissing = missing.0(mu)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_mu;
  Rsh_Fir_reg_mu_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if mu_isMissing then L0(1.0E-4) else L0(mu)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mu_isMissing)) {
  // L0(1.0E-4)
    Rsh_Fir_reg_mu_orDefault = Rsh_const(CCP, 6);
    goto L0_;
  } else {
  // L0(mu)
    Rsh_Fir_reg_mu_orDefault = Rsh_Fir_reg_mu;
    goto L0_;
  }

L0_:;
  // st mu = mu_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_mu_orDefault, RHO);
  (void)(Rsh_Fir_reg_mu_orDefault);
  // control_isMissing = missing.0(control)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_control;
  Rsh_Fir_reg_control_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if control_isMissing then L1() else L2(control)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_control_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(control)
    Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_control;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   list = ldf list in base;
  //   r2 = dyn list();
  //   goto L0(r2);
  // L2():
  //   r = dyn base();
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st control = control_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_control_orDefault, RHO);
  (void)(Rsh_Fir_reg_control_orDefault);
  // method_isMissing = missing.0(method)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_method;
  Rsh_Fir_reg_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if method_isMissing then L3() else L4(method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_method_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(method)
    Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_method;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   sym1 = ldf `is.null`;
  //   base1 = ldf `is.null` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r5):
  //   c1 = `as.logical`(r5);
  //   if c1 then L4() else L1();
  // L2():
  //   grad1 = ld grad;
  //   grad2 = force? grad1;
  //   checkMissing(grad2);
  //   c = `==`(grad2, NULL);
  //   goto L0(c);
  // L3():
  //   r4 = dyn base1(<sym grad>);
  //   goto L0(r4);
  // L1():
  //   return "BFGS";
  // L4():
  //   return "Nelder-Mead";
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_1, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_p1_;
  goto L4_;

L4_:;
  // st method = method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_method_orDefault);
  // outer_iterations_isMissing = missing.0(outer_iterations)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_outer_iterations;
  Rsh_Fir_reg_outer_iterations_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if outer_iterations_isMissing then L5(100.0) else L5(outer_iterations)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_outer_iterations_isMissing)) {
  // L5(100.0)
    Rsh_Fir_reg_outer_iterations_orDefault = Rsh_const(CCP, 15);
    goto L5_;
  } else {
  // L5(outer_iterations)
    Rsh_Fir_reg_outer_iterations_orDefault = Rsh_Fir_reg_outer_iterations;
    goto L5_;
  }

L5_:;
  // st `outer.iterations` = outer_iterations_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_outer_iterations_orDefault, RHO);
  (void)(Rsh_Fir_reg_outer_iterations_orDefault);
  // outer_eps_isMissing = missing.0(outer_eps)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_outer_eps;
  Rsh_Fir_reg_outer_eps_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if outer_eps_isMissing then L6(1.0E-5) else L6(outer_eps)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_outer_eps_isMissing)) {
  // L6(1.0E-5)
    Rsh_Fir_reg_outer_eps_orDefault = Rsh_const(CCP, 17);
    goto L6_;
  } else {
  // L6(outer_eps)
    Rsh_Fir_reg_outer_eps_orDefault = Rsh_Fir_reg_outer_eps;
    goto L6_;
  }

L6_:;
  // st `outer.eps` = outer_eps_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_outer_eps_orDefault, RHO);
  (void)(Rsh_Fir_reg_outer_eps_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // hessian_isMissing = missing.0(hessian)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_hessian;
  Rsh_Fir_reg_hessian_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if hessian_isMissing then L7(FALSE) else L7(hessian)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hessian_isMissing)) {
  // L7(FALSE)
    Rsh_Fir_reg_hessian_orDefault = Rsh_const(CCP, 20);
    goto L7_;
  } else {
  // L7(hessian)
    Rsh_Fir_reg_hessian_orDefault = Rsh_Fir_reg_hessian;
    goto L7_;
  }

L7_:;
  // st hessian = hessian_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_hessian_orDefault, RHO);
  (void)(Rsh_Fir_reg_hessian_orDefault);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L8_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c4 then L50() else L9(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L50()
    goto L50_;
  } else {
  // L9(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L9_;
  }

L9_:;
  // c15 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c15 then L57() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L57()
    goto L57_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // r15 = clos inner1589173713
  Rsh_Fir_reg_r15_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1589173713_, RHO, CCP);
  // st R = r15
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // r16 = clos inner1589173713
  Rsh_Fir_reg_r16_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1589173713_, RHO, CCP);
  // st dR = r16
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard3 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L12_:;
  // c16 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c16 then L67() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L67()
    goto L67_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // f1 = ldf f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L71() else D10()
  // L71()
  goto L71_;

L15_:;
  // r37 = clos inner3391087164
  Rsh_Fir_reg_r37_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3391087164_, RHO, CCP);
  // goto L19(r37)
  // L19(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L19_;

L16_:;
  // c18 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c18 then L79() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L79()
    goto L79_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // grad3 = ld grad
  Rsh_Fir_reg_grad3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L81() else D15()
  // L81()
  goto L81_;

L18_:;
  // goto L19(r35)
  // L19(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L19_;

L19_:;
  // st gradient = r36
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // st totCounts = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_const(CCP, 26), RHO);
  (void)(Rsh_const(CCP, 26));
  // sym5 = ldf sign
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf sign in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard5 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L20_:;
  // st `s.mu` = r39
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym6 = ldf seq_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf seq_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard6 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L21_:;
  // s = toForSeq(r42)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 31);
  // goto L22(i)
  // L22(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L22_;

L22_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // c19 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if c19 then L89() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L89()
    goto L89_;
  } else {
  // L34()
    goto L34_;
  }

L23_:;
  // c21 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c21 then L104() else L24(i11, c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L104()
    goto L104_;
  } else {
  // L24(i11, c21)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L24_;
  }

L24_:;
  // c30 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c30 then L110() else L26(i13, c30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L110()
    goto L110_;
  } else {
  // L26(i13, c30)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c30_;
    goto L26_;
  }

L25_:;
  // c27 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // c28 = `&&`(c26, c27)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L24(i16, c28)
  // L24(i16, c28)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c28_;
  goto L24_;

L26_:;
  // c42 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c42 then L122() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L122()
    goto L122_;
  } else {
  // L29()
    goto L29_;
  }

L27_:;
  // sym10 = ldf abs
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base10 = ldf abs in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard10 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L28_:;
  // r79 = `+`(r74, r75)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // outer_eps1 = ld `outer.eps`
  Rsh_Fir_reg_outer_eps1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L120() else D33()
  // L120()
  goto L120_;

L29_:;
  // a4 = ld a
  Rsh_Fir_reg_a4_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L125() else D34()
  // L125()
  goto L125_;

L30_:;
  // i44 = ld i
  Rsh_Fir_reg_i44_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L145() else D43()
  // L145()
  goto L145_;

L32_:;
  // goto L22(i39)
  // L22(i39)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i39_;
  goto L22_;

L34_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // obj = ld obj
  Rsh_Fir_reg_obj = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L90() else D18()
  // L90()
  goto L90_;

L35_:;
  // goto L36()
  // L36()
  goto L36_;

L36_:;
  // mu5 = ld mu
  Rsh_Fir_reg_mu5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L159() else D47()
  // L159()
  goto L159_;

L37_:;
  // c55 = `as.logical`(c51)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c55 then L164() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L164()
    goto L164_;
  } else {
  // L38()
    goto L38_;
  }

L38_:;
  // goto L39()
  // L39()
  goto L39_;

L39_:;
  // mu7 = ld mu
  Rsh_Fir_reg_mu7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L176() else D52()
  // L176()
  goto L176_;

L40_:;
  // c64 = `as.logical`(c60)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c60_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c64 then L181() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L181()
    goto L181_;
  } else {
  // L41()
    goto L41_;
  }

L41_:;
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // i50 = ld i
  Rsh_Fir_reg_i50_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L193() else D57()
  // L193()
  goto L193_;

L43_:;
  // control1 = ld control
  Rsh_Fir_reg_control1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L45() else D0()
  // L45()
  goto L45_;

L44_:;
  // r7 = dyn base2(<lang `$`(control, fnscale)>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L8(r7)
  // L8(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L8_;

D0_:;
  // deopt 1 [control1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_control1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L45_:;
  // control2 = force? control1
  Rsh_Fir_reg_control2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control1_);
  // checkMissing(control2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_control2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(control2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_control2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c2 then L47() else L48(control2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L47()
    goto L47_;
  } else {
  // L48(control2)
    Rsh_Fir_reg_control4_ = Rsh_Fir_reg_control2_;
    goto L48_;
  }

L46_:;
  // c3 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L8(c3)
  // L8(c3)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_c3_;
  goto L8_;

L47_:;
  // dr = tryDispatchBuiltin.1("$", control2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_control2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc then L49() else L48(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L49()
    goto L49_;
  } else {
  // L48(dr)
    Rsh_Fir_reg_control4_ = Rsh_Fir_reg_dr;
    goto L48_;
  }

L48_:;
  // r9 = `$`(control4, <sym fnscale>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_control4_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L46(r9)
  // L46(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L46_;

L49_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L46(dx)
  // L46(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L46_;

L50_:;
  // control5 = ld control
  Rsh_Fir_reg_control5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L51() else D1()
  // L51()
  goto L51_;

D1_:;
  // deopt 6 [c4, control5]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_control5_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L51_:;
  // control6 = force? control5
  Rsh_Fir_reg_control6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control5_);
  // checkMissing(control6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_control6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(control6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_control6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c7 then L53() else L54(c4, control6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L53()
    goto L53_;
  } else {
  // L54(c4, control6)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
    Rsh_Fir_reg_control8_ = Rsh_Fir_reg_control6_;
    goto L54_;
  }

L52_:;
  // r12 = `<`(dx3, 0.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c11, c12)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L9(c13)
  // L9(c13)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c13_;
  goto L9_;

L53_:;
  // dr2 = tryDispatchBuiltin.1("$", control6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_control6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L55() else L54(c4, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L55()
    goto L55_;
  } else {
  // L54(c4, dr2)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
    Rsh_Fir_reg_control8_ = Rsh_Fir_reg_dr2_;
    goto L54_;
  }

L54_:;
  // r11 = `$`(control8, <sym fnscale>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_control8_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L52(c9, r11)
  // L52(c9, r11)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L52_;

L55_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L52(c4, dx2)
  // L52(c4, dx2)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L52_;

L57_:;
  // mu1 = ld mu
  Rsh_Fir_reg_mu1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L58() else D2()
  // L58()
  goto L58_;

D2_:;
  // deopt 12 [mu1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_mu1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L58_:;
  // mu2 = force? mu1
  Rsh_Fir_reg_mu2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu1_);
  // checkMissing(mu2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_mu2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r13 = `-`(<missing>, mu2)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_mu2_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // st mu = r13
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // goto L11()
  // L11()
  goto L11_;

L60_:;
  // ui1 = ld ui
  Rsh_Fir_reg_ui1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L62() else D3()
  // L62()
  goto L62_;

L61_:;
  // r17 = dyn base3(<lang `<=`(`-`(`%*%`(ui, theta), ci), 0.0)>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L12(r17)
  // L12(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L12_;

D3_:;
  // deopt 27 [ui1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_ui1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L62_:;
  // ui2 = force? ui1
  Rsh_Fir_reg_ui2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ui1_);
  // checkMissing(ui2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ui2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // theta1 = ld theta
  Rsh_Fir_reg_theta1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D4()
  // L63()
  goto L63_;

D4_:;
  // deopt 29 [theta1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_theta1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L63_:;
  // theta2 = force? theta1
  Rsh_Fir_reg_theta2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta1_);
  // checkMissing(theta2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_theta2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r19 = dyn ___(ui2, theta2)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_ui2_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_theta2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L64() else D5()
  // L64()
  goto L64_;

D5_:;
  // deopt 32 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L64_:;
  // ci1 = ld ci
  Rsh_Fir_reg_ci1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L65() else D6()
  // L65()
  goto L65_;

D6_:;
  // deopt 32 [r19, ci1]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_ci1_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L65_:;
  // ci2 = force? ci1
  Rsh_Fir_reg_ci2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ci1_);
  // checkMissing(ci2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_ci2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r20 = `-`(r19, ci2)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_ci2_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // r21 = `<=`(r20, 0.0)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r22 = dyn any(r21)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L66() else D7()
  // L66()
  goto L66_;

D7_:;
  // deopt 38 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r22_;
  goto L12_;

L67_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L68() else D8()
  // L68()
  goto L68_;

D8_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // r23 = dyn stop("initial value is not in the interior of the feasible region")
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L69() else D9()
  // L69()
  goto L69_;

D9_:;
  // deopt 42 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L14()
  // L14()
  goto L14_;

D10_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // p2 = prom<V +>{
  //   theta3 = ld theta;
  //   theta4 = force? theta3;
  //   checkMissing(theta4);
  //   return theta4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_2, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r26 = dyn f1[, `...`](p2, ddd1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f1_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L72() else D11()
  // L72()
  goto L72_;

D11_:;
  // deopt 49 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L72_:;
  // st obj = r26
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // R = ldf R
  Rsh_Fir_reg_R = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L73() else D12()
  // L73()
  goto L73_;

D12_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // p3 = prom<V +>{
  //   theta5 = ld theta;
  //   theta6 = force? theta5;
  //   checkMissing(theta6);
  //   return theta6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_3, CCP, RHO);
  // p4 = prom<V +>{
  //   theta7 = ld theta;
  //   theta8 = force? theta7;
  //   checkMissing(theta8);
  //   return theta8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_4, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r29 = dyn R[, , `...`](p3, p4, ddd2)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L74() else D13()
  // L74()
  goto L74_;

D13_:;
  // deopt 56 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L74_:;
  // st r = r29
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // r30 = clos inner3391087164
  Rsh_Fir_reg_r30_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3391087164_, RHO, CCP);
  // st fun = r30
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L75() else D14()
  // L75()
  goto L75_;

D14_:;
  // deopt 61 [method1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_method1_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L75_:;
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r31 = `==`(method2, "SANN")
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_method2_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c17 then L76() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L76()
    goto L76_;
  } else {
  // L15()
    goto L15_;
  }

L76_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard4 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L77_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r34 = dyn missing(<sym grad>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L16(r34)
  // L16(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L16_;

L78_:;
  // r32 = dyn base4(<sym grad>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L16(r32)
  // L16(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L16_;

L79_:;
  // goto L18(NULL)
  // L18(NULL)
  Rsh_Fir_reg_r35_ = Rsh_const(CCP, 12);
  goto L18_;

D15_:;
  // deopt 70 [grad3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_grad3_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L81_:;
  // grad4 = force? grad3
  Rsh_Fir_reg_grad4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grad3_);
  // checkMissing(grad4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_grad4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // goto L18(grad4)
  // L18(grad4)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_grad4_;
  goto L18_;

L83_:;
  // mu3 = ld mu
  Rsh_Fir_reg_mu3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L85() else D16()
  // L85()
  goto L85_;

L84_:;
  // r38 = dyn base5(<sym mu>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L20(r38)
  // L20(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L20_;

D16_:;
  // deopt 79 [mu3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_mu3_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L85_:;
  // mu4 = force? mu3
  Rsh_Fir_reg_mu4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu3_);
  // checkMissing(mu4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_mu4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r40 = sign(mu4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_mu4_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(170, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L20(r40)
  // L20(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L20_;

L86_:;
  // outer_iterations1 = ld `outer.iterations`
  Rsh_Fir_reg_outer_iterations1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L88() else D17()
  // L88()
  goto L88_;

L87_:;
  // r41 = dyn base6(<sym outer.iterations>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L21_;

D17_:;
  // deopt 84 [outer_iterations1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_outer_iterations1_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L88_:;
  // outer_iterations2 = force? outer_iterations1
  Rsh_Fir_reg_outer_iterations2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outer_iterations1_);
  // checkMissing(outer_iterations2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_outer_iterations2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r43 = seq_len(outer_iterations2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_outer_iterations2_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L21(r43)
  // L21(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L21_;

L89_:;
  // goto L30()
  // L30()
  goto L30_;

D18_:;
  // deopt 87 [i2, obj]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_obj;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L90_:;
  // obj1 = force? obj
  Rsh_Fir_reg_obj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj);
  // checkMissing(obj1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_obj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // st `obj.old` = obj1
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_obj1_, RHO);
  (void)(Rsh_Fir_reg_obj1_);
  // r44 = ld r
  Rsh_Fir_reg_r44_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L91() else D19()
  // L91()
  goto L91_;

D19_:;
  // deopt 90 [i2, r44]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L91_:;
  // r45 = force? r44
  Rsh_Fir_reg_r45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r44_);
  // checkMissing(r45)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // st `r.old` = r45
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // theta9 = ld theta
  Rsh_Fir_reg_theta9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L92() else D20()
  // L92()
  goto L92_;

D20_:;
  // deopt 93 [i2, theta9]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_theta9_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L92_:;
  // theta10 = force? theta9
  Rsh_Fir_reg_theta10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta9_);
  // checkMissing(theta10)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_theta10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // st `theta.old` = theta10
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_theta10_, RHO);
  (void)(Rsh_Fir_reg_theta10_);
  // optim = ldf optim
  Rsh_Fir_reg_optim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L93() else D21()
  // L93()
  goto L93_;

D21_:;
  // deopt 97 [i2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L93_:;
  // p5 = prom<V +>{
  //   theta_old = ld `theta.old`;
  //   theta_old1 = force? theta_old;
  //   checkMissing(theta_old1);
  //   return theta_old1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_5, CCP, RHO);
  // p6 = prom<V +>{
  //   fun = ld fun;
  //   fun1 = force? fun;
  //   checkMissing(fun1);
  //   return fun1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_6, CCP, RHO);
  // p7 = prom<V +>{
  //   gradient = ld gradient;
  //   gradient1 = force? gradient;
  //   checkMissing(gradient1);
  //   return gradient1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_7, CCP, RHO);
  // p8 = prom<V +>{
  //   control9 = ld control;
  //   control10 = force? control9;
  //   checkMissing(control10);
  //   return control10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_8, CCP, RHO);
  // p9 = prom<V +>{
  //   method3 = ld method;
  //   method4 = force? method3;
  //   checkMissing(method4);
  //   return method4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_9, CCP, RHO);
  // p10 = prom<V +>{
  //   hessian1 = ld hessian;
  //   hessian2 = force? hessian1;
  //   checkMissing(hessian2);
  //   return hessian2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_10, CCP, RHO);
  // ddd3 = ld `...`
  Rsh_Fir_reg_ddd3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r52 = dyn optim[, , , control, method, hessian, `...`](p5, p6, p7, p8, p9, p10, ddd3)
  SEXP Rsh_Fir_array_args90[7];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args90[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args90[3] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args90[4] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args90[5] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args90[6] = Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_array_arg_names12[7];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names12[5] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names12[6] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_optim, 7, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L94() else D22()
  // L94()
  goto L94_;

D22_:;
  // deopt 108 [i2, r52]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L94_:;
  // st a = r52
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

D23_:;
  // deopt 110 [i2, a]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L95_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(a1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c20 then L97() else L98(i2, a1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L97()
    goto L97_;
  } else {
  // L98(i2, a1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_a3_ = Rsh_Fir_reg_a1_;
    goto L98_;
  }

L96_:;
  // st r = dx5
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym7 = ldf `is.finite`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base7 = ldf `is.finite` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard7 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L97_:;
  // dr4 = tryDispatchBuiltin.1("$", a1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_a1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc2 then L99() else L98(i2, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L99()
    goto L99_;
  } else {
  // L98(i2, dr4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_a3_ = Rsh_Fir_reg_dr4_;
    goto L98_;
  }

L98_:;
  // r53 = `$`(a3, <sym value>)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_a3_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L96(i6, r53)
  // L96(i6, r53)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r53_;
  goto L96_;

L99_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L96(i2, dx4)
  // L96(i2, dx4)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L96_;

L100_:;
  // r56 = ld r
  Rsh_Fir_reg_r56_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L102() else D24()
  // L102()
  goto L102_;

L101_:;
  // r54 = dyn base7(<sym r>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L23(i8, r54)
  // L23(i8, r54)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L23_;

D24_:;
  // deopt 116 [i8, r56]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L102_:;
  // r57 = force? r56
  Rsh_Fir_reg_r57_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r56_);
  // checkMissing(r57)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r57_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r58 = dyn is_finite(r57)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L103() else D25()
  // L103()
  goto L103_;

D25_:;
  // deopt 119 [i8, r58]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L23(i8, r58)
  // L23(i8, r58)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r58_;
  goto L23_;

L104_:;
  // sym8 = ldf `is.finite`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base8 = ldf `is.finite` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard8 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L105_:;
  // r_old = ld `r.old`
  Rsh_Fir_reg_r_old = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L107() else D26()
  // L107()
  goto L107_;

L106_:;
  // r59 = dyn base8(<sym r.old>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L25(i11, c21, r59)
  // L25(i11, c21, r59)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L25_;

D26_:;
  // deopt 122 [i11, c21, r_old]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r_old;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L107_:;
  // r_old1 = force? r_old
  Rsh_Fir_reg_r_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r_old);
  // checkMissing(r_old1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // is_finite1 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r61 = dyn is_finite1(r_old1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r_old1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite1_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L108() else D27()
  // L108()
  goto L108_;

D27_:;
  // deopt 125 [i11, c21, r61]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(125, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L25(i11, c21, r61)
  // L25(i11, c21, r61)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L25_;

L110_:;
  // sym9 = ldf abs
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base9 = ldf abs in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard9 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // r64 = ld r
  Rsh_Fir_reg_r64_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L113() else D28()
  // L113()
  goto L113_;

L112_:;
  // r62 = dyn base9(<lang `-`(r, r.old)>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L27(i13, c30, r62)
  // L27(i13, c30, r62)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L27_;

D28_:;
  // deopt 129 [i13, c30, r64]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(129, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L113_:;
  // r65 = force? r64
  Rsh_Fir_reg_r65_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r64_);
  // checkMissing(r65)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r65_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r_old2 = ld `r.old`
  Rsh_Fir_reg_r_old2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L114() else D29()
  // L114()
  goto L114_;

D29_:;
  // deopt 130 [i13, c30, r65, r_old2]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_r_old2_;
  Rsh_Fir_deopt(130, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L114_:;
  // r_old3 = force? r_old2
  Rsh_Fir_reg_r_old3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r_old2_);
  // checkMissing(r_old3)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r_old3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r66 = `-`(r65, r_old3)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r_old3_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r67 = dyn abs(r66)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L115() else D30()
  // L115()
  goto L115_;

D30_:;
  // deopt 134 [i13, c30, r67]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(134, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L27(i13, c30, r67)
  // L27(i13, c30, r67)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r67_;
  goto L27_;

L116_:;
  // r76 = ld r
  Rsh_Fir_reg_r76_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L118() else D31()
  // L118()
  goto L118_;

L117_:;
  // r72 = dyn base10(<sym r>)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L28(i22, c35, r63, 0.001, r72)
  // L28(i22, c35, r63, 0.001, r72)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r74_ = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r72_;
  goto L28_;

D31_:;
  // deopt 137 [i22, c35, r63, 0.001, r76]
  SEXP Rsh_Fir_array_deopt_stack28[5];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_const(CCP, 57);
  Rsh_Fir_array_deopt_stack28[4] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(137, 5, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L118_:;
  // r77 = force? r76
  Rsh_Fir_reg_r77_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r76_);
  // checkMissing(r77)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r77_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r78 = dyn abs1(r77)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L119() else D32()
  // L119()
  goto L119_;

D32_:;
  // deopt 140 [i22, c35, r63, 0.001, r78]
  SEXP Rsh_Fir_array_deopt_stack29[5];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_const(CCP, 57);
  Rsh_Fir_array_deopt_stack29[4] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(140, 5, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L28(i22, c35, r63, 0.001, r78)
  // L28(i22, c35, r63, 0.001, r78)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r74_ = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r78_;
  goto L28_;

D33_:;
  // deopt 141 [i25, c38, r73, r79, outer_eps1]
  SEXP Rsh_Fir_array_deopt_stack30[5];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_deopt_stack30[4] = Rsh_Fir_reg_outer_eps1_;
  Rsh_Fir_deopt(141, 5, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L120_:;
  // outer_eps2 = force? outer_eps1
  Rsh_Fir_reg_outer_eps2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outer_eps1_);
  // checkMissing(outer_eps2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_outer_eps2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // r80 = `*`(r79, outer_eps2)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_outer_eps2_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // r81 = `<`(r73, r80)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // c39 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // c40 = `&&`(c38, c39)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L26(i25, c40)
  // L26(i25, c40)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c40_;
  goto L26_;

L122_:;
  // goto L30()
  // L30()
  goto L30_;

D34_:;
  // deopt 150 [i19, a4]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_a4_;
  Rsh_Fir_deopt(150, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L125_:;
  // a5 = force? a4
  Rsh_Fir_reg_a5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a4_);
  // checkMissing(a5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_a5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // c43 = `is.object`(a5)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_a5_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if c43 then L127() else L128(i19, a5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L127()
    goto L127_;
  } else {
  // L128(i19, a5)
    Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_a7_ = Rsh_Fir_reg_a5_;
    goto L128_;
  }

L126_:;
  // st theta = dx7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // totCounts = ld totCounts
  Rsh_Fir_reg_totCounts = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L130() else D35()
  // L130()
  goto L130_;

L127_:;
  // dr6 = tryDispatchBuiltin.1("$", a5)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_a5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc3 then L129() else L128(i19, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L129()
    goto L129_;
  } else {
  // L128(i19, dr6)
    Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_a7_ = Rsh_Fir_reg_dr6_;
    goto L128_;
  }

L128_:;
  // r83 = `$`(a7, <sym par>)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_a7_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L126(i33, r83)
  // L126(i33, r83)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r83_;
  goto L126_;

L129_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L126(i19, dx6)
  // L126(i19, dx6)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L126_;

D35_:;
  // deopt 154 [i35, totCounts]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_totCounts;
  Rsh_Fir_deopt(154, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L130_:;
  // totCounts1 = force? totCounts
  Rsh_Fir_reg_totCounts1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_totCounts);
  // checkMissing(totCounts1)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_totCounts1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // a8 = ld a
  Rsh_Fir_reg_a8_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L131() else D36()
  // L131()
  goto L131_;

D36_:;
  // deopt 155 [i35, totCounts1, a8]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_totCounts1_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_a8_;
  Rsh_Fir_deopt(155, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L131_:;
  // a9 = force? a8
  Rsh_Fir_reg_a9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a8_);
  // checkMissing(a9)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_a9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(a9)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_a9_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c44 then L133() else L134(i35, totCounts1, a9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L133()
    goto L133_;
  } else {
  // L134(i35, totCounts1, a9)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_totCounts3_ = Rsh_Fir_reg_totCounts1_;
    Rsh_Fir_reg_a11_ = Rsh_Fir_reg_a9_;
    goto L134_;
  }

L132_:;
  // r85 = `+`(totCounts5, dx9)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_totCounts5_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // st totCounts = r85
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r85_, RHO);
  (void)(Rsh_Fir_reg_r85_);
  // f2 = ldf f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L136() else D37()
  // L136()
  goto L136_;

L133_:;
  // dr8 = tryDispatchBuiltin.1("$", a9)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_a9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args129);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc4 then L135() else L134(i35, totCounts1, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L135()
    goto L135_;
  } else {
  // L134(i35, totCounts1, dr8)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_totCounts3_ = Rsh_Fir_reg_totCounts1_;
    Rsh_Fir_reg_a11_ = Rsh_Fir_reg_dr8_;
    goto L134_;
  }

L134_:;
  // r84 = `$`(a11, <sym counts>)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_a11_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L132(i37, totCounts3, r84)
  // L132(i37, totCounts3, r84)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_totCounts5_ = Rsh_Fir_reg_totCounts3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r84_;
  goto L132_;

L135_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L132(i35, totCounts1, dx8)
  // L132(i35, totCounts1, dx8)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_totCounts5_ = Rsh_Fir_reg_totCounts1_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L132_;

D37_:;
  // deopt 161 [i39]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L136_:;
  // p11 = prom<V +>{
  //   theta11 = ld theta;
  //   theta12 = force? theta11;
  //   checkMissing(theta12);
  //   return theta12;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_11, CCP, RHO);
  // ddd4 = ld `...`
  Rsh_Fir_reg_ddd4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r87 = dyn f2[, `...`](p11, ddd4)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_ddd4_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f2_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L137() else D38()
  // L137()
  goto L137_;

D38_:;
  // deopt 164 [i39, r87]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(164, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L137_:;
  // st obj = r87
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r87_, RHO);
  (void)(Rsh_Fir_reg_r87_);
  // s_mu = ld `s.mu`
  Rsh_Fir_reg_s_mu = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L138() else D39()
  // L138()
  goto L138_;

D39_:;
  // deopt 166 [i39, s_mu]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_s_mu;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L138_:;
  // s_mu1 = force? s_mu
  Rsh_Fir_reg_s_mu1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_mu);
  // checkMissing(s_mu1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_s_mu1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // obj2 = ld obj
  Rsh_Fir_reg_obj2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L139() else D40()
  // L139()
  goto L139_;

D40_:;
  // deopt 167 [i39, s_mu1, obj2]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_s_mu1_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_obj2_;
  Rsh_Fir_deopt(167, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L139_:;
  // obj3 = force? obj2
  Rsh_Fir_reg_obj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj2_);
  // checkMissing(obj3)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_obj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // r88 = `*`(s_mu1, obj3)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_s_mu1_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_obj3_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // s_mu2 = ld `s.mu`
  Rsh_Fir_reg_s_mu2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L140() else D41()
  // L140()
  goto L140_;

D41_:;
  // deopt 169 [i39, r88, s_mu2]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_s_mu2_;
  Rsh_Fir_deopt(169, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L140_:;
  // s_mu3 = force? s_mu2
  Rsh_Fir_reg_s_mu3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_mu2_);
  // checkMissing(s_mu3)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_s_mu3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // obj_old = ld `obj.old`
  Rsh_Fir_reg_obj_old = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L141() else D42()
  // L141()
  goto L141_;

D42_:;
  // deopt 170 [i39, r88, s_mu3, obj_old]
  SEXP Rsh_Fir_array_deopt_stack39[4];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_s_mu3_;
  Rsh_Fir_array_deopt_stack39[3] = Rsh_Fir_reg_obj_old;
  Rsh_Fir_deopt(170, 4, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L141_:;
  // obj_old1 = force? obj_old
  Rsh_Fir_reg_obj_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj_old);
  // checkMissing(obj_old1)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_obj_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // r89 = `*`(s_mu3, obj_old1)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_s_mu3_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_obj_old1_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // r90 = `>`(r88, r89)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // c45 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c45 then L142() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L142()
    goto L142_;
  } else {
  // L32()
    goto L32_;
  }

L142_:;
  // goto L30()
  // L30()
  goto L30_;

D43_:;
  // deopt 181 [i44]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i44_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L145_:;
  // i45 = force? i44
  Rsh_Fir_reg_i45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i44_);
  // checkMissing(i45)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_i45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // outer_iterations3 = ld `outer.iterations`
  Rsh_Fir_reg_outer_iterations3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L146() else D44()
  // L146()
  goto L146_;

D44_:;
  // deopt 182 [i45, outer_iterations3]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_outer_iterations3_;
  Rsh_Fir_deopt(182, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L146_:;
  // outer_iterations4 = force? outer_iterations3
  Rsh_Fir_reg_outer_iterations4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outer_iterations3_);
  // checkMissing(outer_iterations4)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_outer_iterations4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // r92 = `==`(i45, outer_iterations4)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_outer_iterations4_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // c46 = `as.logical`(r92)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c46 then L147() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L147()
    goto L147_;
  } else {
  // L35()
    goto L35_;
  }

L147_:;
  // l1 = ld a
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c47 = `is.object`(l1)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if c47 then L149() else L150(7.0, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L149()
    goto L149_;
  } else {
  // L150(7.0, l1)
    Rsh_Fir_reg_r94_ = Rsh_const(CCP, 60);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L150_;
  }

L148_:;
  // st a = dx11
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L152() else D45()
  // L152()
  goto L152_;

L149_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l1, 7.0)
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args148[2] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args148);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // if dc5 then L151() else L150(7.0, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L151()
    goto L151_;
  } else {
  // L150(7.0, dr10)
    Rsh_Fir_reg_r94_ = Rsh_const(CCP, 60);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr10_;
    goto L150_;
  }

L150_:;
  // r97 = `$<-`(l3, <sym convergence>, 7.0)
  SEXP Rsh_Fir_array_args150[3];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args150[2] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L148(r97)
  // L148(r97)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r97_;
  goto L148_;

L151_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // goto L148(dx10)
  // L148(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L148_;

D45_:;
  // deopt 191 []
  Rsh_Fir_deopt(191, 0, NULL, CCP, RHO);
  return R_NilValue;

L152_:;
  // r98 = dyn gettext("Barrier algorithm ran out of iterations and did not converge")
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L153() else D46()
  // L153()
  goto L153_;

D46_:;
  // deopt 193 [r98]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L153_:;
  // l4 = ld a
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c48 = `is.object`(l4)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c48 then L155() else L156(r98, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L155()
    goto L155_;
  } else {
  // L156(r98, l4)
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r98_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L156_;
  }

L154_:;
  // st a = dx13
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L36()
  // L36()
  goto L36_;

L155_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l4, r98)
  SEXP Rsh_Fir_array_args154[3];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args154[2] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args154);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if dc6 then L157() else L156(r98, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L157()
    goto L157_;
  } else {
  // L156(r98, dr12)
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r98_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr12_;
    goto L156_;
  }

L156_:;
  // r103 = `$<-`(l6, <sym message>, r98)
  SEXP Rsh_Fir_array_args156[3];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args156[2] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L154(r100, r103)
  // L154(r100, r103)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r103_;
  goto L154_;

L157_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L154(r98, dx12)
  // L154(r98, dx12)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L154_;

D47_:;
  // deopt 199 [mu5]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_mu5_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L159_:;
  // mu6 = force? mu5
  Rsh_Fir_reg_mu6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu5_);
  // checkMissing(mu6)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_mu6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // r105 = `>`(mu6, 0.0)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_mu6_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // c49 = `as.logical`(r105)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if c49 then L160() else L37(c49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L160()
    goto L160_;
  } else {
  // L37(c49)
    Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c49_;
    goto L37_;
  }

L160_:;
  // obj4 = ld obj
  Rsh_Fir_reg_obj4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L161() else D48()
  // L161()
  goto L161_;

D48_:;
  // deopt 203 [c49, obj4]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_obj4_;
  Rsh_Fir_deopt(203, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L161_:;
  // obj5 = force? obj4
  Rsh_Fir_reg_obj5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj4_);
  // checkMissing(obj5)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_obj5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // obj_old2 = ld `obj.old`
  Rsh_Fir_reg_obj_old2_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L162() else D49()
  // L162()
  goto L162_;

D49_:;
  // deopt 204 [c49, obj5, obj_old2]
  SEXP Rsh_Fir_array_deopt_stack45[3];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_obj5_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_obj_old2_;
  Rsh_Fir_deopt(204, 3, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L162_:;
  // obj_old3 = force? obj_old2
  Rsh_Fir_reg_obj_old3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj_old2_);
  // checkMissing(obj_old3)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_obj_old3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // r106 = `>`(obj5, obj_old3)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_obj5_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_obj_old3_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // c52 = `as.logical`(r106)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // c53 = `&&`(c49, c52)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_c52_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L37(c53)
  // L37(c53)
  Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c53_;
  goto L37_;

L164_:;
  // l7 = ld a
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c56 = `is.object`(l7)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if c56 then L166() else L167(11.0, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L166()
    goto L166_;
  } else {
  // L167(11.0, l7)
    Rsh_Fir_reg_r108_ = Rsh_const(CCP, 66);
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L167_;
  }

L165_:;
  // st a = dx15
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // check L169() else D50()
  // L169()
  goto L169_;

L166_:;
  // dr14 = tryDispatchBuiltin.0("$<-", l7, 11.0)
  SEXP Rsh_Fir_array_args167[3];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args167[2] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args167);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if dc7 then L168() else L167(11.0, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L168()
    goto L168_;
  } else {
  // L167(11.0, dr14)
    Rsh_Fir_reg_r108_ = Rsh_const(CCP, 66);
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr14_;
    goto L167_;
  }

L167_:;
  // r111 = `$<-`(l9, <sym convergence>, 11.0)
  SEXP Rsh_Fir_array_args169[3];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args169[1] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args169[2] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L165(r111)
  // L165(r111)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r111_;
  goto L165_;

L168_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L165(dx14)
  // L165(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L165_;

D50_:;
  // deopt 214 []
  Rsh_Fir_deopt(214, 0, NULL, CCP, RHO);
  return R_NilValue;

L169_:;
  // p12 = prom<V +>{
  //   i46 = ld i;
  //   i47 = force? i46;
  //   checkMissing(i47);
  //   return i47;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_12, CCP, RHO);
  // r113 = dyn gettextf("Objective function increased at outer iteration %d", p12)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L170() else D51()
  // L170()
  goto L170_;

D51_:;
  // deopt 217 [r113]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L170_:;
  // l10 = ld a
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c57 = `is.object`(l10)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if c57 then L172() else L173(r113, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L172()
    goto L172_;
  } else {
  // L173(r113, l10)
    Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r113_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L173_;
  }

L171_:;
  // st a = dx17
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L39()
  // L39()
  goto L39_;

L172_:;
  // dr16 = tryDispatchBuiltin.0("$<-", l10, r113)
  SEXP Rsh_Fir_array_args174[3];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args174);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc8 then L174() else L173(r113, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L174()
    goto L174_;
  } else {
  // L173(r113, dr16)
    Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r113_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr16_;
    goto L173_;
  }

L173_:;
  // r118 = `$<-`(l12, <sym message>, r113)
  SEXP Rsh_Fir_array_args176[3];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args176[2] = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L171(r115, r118)
  // L171(r115, r118)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r118_;
  goto L171_;

L174_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L171(r113, dx16)
  // L171(r113, dx16)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L171_;

D52_:;
  // deopt 223 [mu7]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_mu7_;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L176_:;
  // mu8 = force? mu7
  Rsh_Fir_reg_mu8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu7_);
  // checkMissing(mu8)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_mu8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // r120 = `<`(mu8, 0.0)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_mu8_;
  Rsh_Fir_array_args179[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // c58 = `as.logical`(r120)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_r120_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // if c58 then L177() else L40(c58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L177()
    goto L177_;
  } else {
  // L40(c58)
    Rsh_Fir_reg_c60_ = Rsh_Fir_reg_c58_;
    goto L40_;
  }

L177_:;
  // obj6 = ld obj
  Rsh_Fir_reg_obj6_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L178() else D53()
  // L178()
  goto L178_;

D53_:;
  // deopt 227 [c58, obj6]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_obj6_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L178_:;
  // obj7 = force? obj6
  Rsh_Fir_reg_obj7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj6_);
  // checkMissing(obj7)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_obj7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // obj_old4 = ld `obj.old`
  Rsh_Fir_reg_obj_old4_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L179() else D54()
  // L179()
  goto L179_;

D54_:;
  // deopt 228 [c58, obj7, obj_old4]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_obj7_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_obj_old4_;
  Rsh_Fir_deopt(228, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L179_:;
  // obj_old5 = force? obj_old4
  Rsh_Fir_reg_obj_old5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj_old4_);
  // checkMissing(obj_old5)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_obj_old5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // r121 = `<`(obj7, obj_old5)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_obj7_;
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_obj_old5_;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // c61 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // c62 = `&&`(c58, c61)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_c61_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L40(c62)
  // L40(c62)
  Rsh_Fir_reg_c60_ = Rsh_Fir_reg_c62_;
  goto L40_;

L181_:;
  // l13 = ld a
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c65 = `is.object`(l13)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if c65 then L183() else L184(11.0, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L183()
    goto L183_;
  } else {
  // L184(11.0, l13)
    Rsh_Fir_reg_r123_ = Rsh_const(CCP, 66);
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L184_;
  }

L182_:;
  // st a = dx19
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // check L186() else D55()
  // L186()
  goto L186_;

L183_:;
  // dr18 = tryDispatchBuiltin.0("$<-", l13, 11.0)
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args187[2] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args187);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // if dc9 then L185() else L184(11.0, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L185()
    goto L185_;
  } else {
  // L184(11.0, dr18)
    Rsh_Fir_reg_r123_ = Rsh_const(CCP, 66);
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr18_;
    goto L184_;
  }

L184_:;
  // r126 = `$<-`(l15, <sym convergence>, 11.0)
  SEXP Rsh_Fir_array_args189[3];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args189[2] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // goto L182(r126)
  // L182(r126)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r126_;
  goto L182_;

L185_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L182(dx18)
  // L182(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L182_;

D55_:;
  // deopt 238 []
  Rsh_Fir_deopt(238, 0, NULL, CCP, RHO);
  return R_NilValue;

L186_:;
  // p13 = prom<V +>{
  //   i48 = ld i;
  //   i49 = force? i48;
  //   checkMissing(i49);
  //   return i49;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_13, CCP, RHO);
  // r128 = dyn gettextf1("Objective function decreased at outer iteration %d", p13)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L187() else D56()
  // L187()
  goto L187_;

D56_:;
  // deopt 241 [r128]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r128_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L187_:;
  // l16 = ld a
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c66 = `is.object`(l16)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if c66 then L189() else L190(r128, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L189()
    goto L189_;
  } else {
  // L190(r128, l16)
    Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r128_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L190_;
  }

L188_:;
  // st a = dx21
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L42()
  // L42()
  goto L42_;

L189_:;
  // dr20 = tryDispatchBuiltin.0("$<-", l16, r128)
  SEXP Rsh_Fir_array_args194[3];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args194[2] = Rsh_Fir_reg_r128_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args194);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // if dc10 then L191() else L190(r128, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L191()
    goto L191_;
  } else {
  // L190(r128, dr20)
    Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r128_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr20_;
    goto L190_;
  }

L190_:;
  // r133 = `$<-`(l18, <sym message>, r128)
  SEXP Rsh_Fir_array_args196[3];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args196[1] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args196[2] = Rsh_Fir_reg_r128_;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // goto L188(r130, r133)
  // L188(r130, r133)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r130_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r133_;
  goto L188_;

L191_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // goto L188(r128, dx20)
  // L188(r128, dx20)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r128_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L188_;

D57_:;
  // deopt 247 [i50]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_deopt(247, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L193_:;
  // i51 = force? i50
  Rsh_Fir_reg_i51_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i50_);
  // checkMissing(i51)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_i51_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // l19 = ld a
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c67 = `is.object`(l19)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty());
  // if c67 then L195() else L196(i51, l19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L195()
    goto L195_;
  } else {
  // L196(i51, l19)
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i51_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
    goto L196_;
  }

L194_:;
  // st a = dx23
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // totCounts6 = ld totCounts
  Rsh_Fir_reg_totCounts6_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L198() else D58()
  // L198()
  goto L198_;

L195_:;
  // dr22 = tryDispatchBuiltin.0("$<-", l19, i51)
  SEXP Rsh_Fir_array_args200[3];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args200[2] = Rsh_Fir_reg_i51_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args200);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if dc11 then L197() else L196(i51, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L197()
    goto L197_;
  } else {
  // L196(i51, dr22)
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i51_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_dr22_;
    goto L196_;
  }

L196_:;
  // r135 = `$<-`(l21, <sym outer.iterations>, i51)
  SEXP Rsh_Fir_array_args202[3];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args202[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args202[2] = Rsh_Fir_reg_i51_;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // goto L194(r135)
  // L194(r135)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r135_;
  goto L194_;

L197_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // goto L194(dx22)
  // L194(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L194_;

D58_:;
  // deopt 252 [totCounts6]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_totCounts6_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L198_:;
  // totCounts7 = force? totCounts6
  Rsh_Fir_reg_totCounts7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_totCounts6_);
  // checkMissing(totCounts7)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_totCounts7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // l22 = ld a
  Rsh_Fir_reg_l22_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c68 = `is.object`(l22)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // if c68 then L200() else L201(totCounts7, l22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L200()
    goto L200_;
  } else {
  // L201(totCounts7, l22)
    Rsh_Fir_reg_totCounts9_ = Rsh_Fir_reg_totCounts7_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    goto L201_;
  }

L199_:;
  // st a = dx25
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // a12 = ld a
  Rsh_Fir_reg_a12_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L203() else D59()
  // L203()
  goto L203_;

L200_:;
  // dr24 = tryDispatchBuiltin.0("$<-", l22, totCounts7)
  SEXP Rsh_Fir_array_args206[3];
  Rsh_Fir_array_args206[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args206[2] = Rsh_Fir_reg_totCounts7_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args206);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // if dc12 then L202() else L201(totCounts7, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L202()
    goto L202_;
  } else {
  // L201(totCounts7, dr24)
    Rsh_Fir_reg_totCounts9_ = Rsh_Fir_reg_totCounts7_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr24_;
    goto L201_;
  }

L201_:;
  // r136 = `$<-`(l24, <sym counts>, totCounts7)
  SEXP Rsh_Fir_array_args208[3];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args208[1] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args208[2] = Rsh_Fir_reg_totCounts7_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // goto L199(r136)
  // L199(r136)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r136_;
  goto L199_;

L202_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // goto L199(dx24)
  // L199(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L199_;

D59_:;
  // deopt 257 [a12]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_a12_;
  Rsh_Fir_deopt(257, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L203_:;
  // a13 = force? a12
  Rsh_Fir_reg_a13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a12_);
  // checkMissing(a13)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_a13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // c69 = `is.object`(a13)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_a13_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // if c69 then L205() else L206(a13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L205()
    goto L205_;
  } else {
  // L206(a13)
    Rsh_Fir_reg_a15_ = Rsh_Fir_reg_a13_;
    goto L206_;
  }

L204_:;
  // l25 = ld a
  Rsh_Fir_reg_l25_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c70 = `is.object`(l25)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_l25_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // if c70 then L209() else L210(dx27, l25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L209()
    goto L209_;
  } else {
  // L210(dx27, l25)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
    Rsh_Fir_reg_l27_ = Rsh_Fir_reg_l25_;
    goto L210_;
  }

L205_:;
  // dr26 = tryDispatchBuiltin.1("$", a13)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_a13_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args213);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if dc13 then L207() else L206(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L207()
    goto L207_;
  } else {
  // L206(dr26)
    Rsh_Fir_reg_a15_ = Rsh_Fir_reg_dr26_;
    goto L206_;
  }

L206_:;
  // r137 = `$`(a15, <sym value>)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_a15_;
  Rsh_Fir_array_args215[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L204(r137)
  // L204(r137)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r137_;
  goto L204_;

L207_:;
  // dx26 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // goto L204(dx26)
  // L204(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L204_;

L208_:;
  // st a = dx33
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // f3 = ldf f
  Rsh_Fir_reg_f3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L212() else D60()
  // L212()
  goto L212_;

L209_:;
  // dr28 = tryDispatchBuiltin.0("$<-", l25, dx27)
  SEXP Rsh_Fir_array_args217[3];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_args217[2] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args217);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if dc14 then L211() else L210(dx27, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L211()
    goto L211_;
  } else {
  // L210(dx27, dr28)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
    Rsh_Fir_reg_l27_ = Rsh_Fir_reg_dr28_;
    goto L210_;
  }

L210_:;
  // r138 = `$<-`(l27, <sym barrier.value>, dx27)
  SEXP Rsh_Fir_array_args219[3];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args219[1] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args219[2] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // goto L208(r138)
  // L208(r138)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r138_;
  goto L208_;

L211_:;
  // dx31 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // goto L208(dx31)
  // L208(dx31)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
  goto L208_;

D60_:;
  // deopt 264 []
  Rsh_Fir_deopt(264, 0, NULL, CCP, RHO);
  return R_NilValue;

L212_:;
  // p14 = prom<V +>{
  //   a16 = ld a;
  //   a17 = force? a16;
  //   checkMissing(a17);
  //   c71 = `is.object`(a17);
  //   if c71 then L1() else L2(a17);
  // L0(dx35):
  //   return dx35;
  // L1():
  //   dr30 = tryDispatchBuiltin.1("$", a17);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L3() else L2(dr30);
  // L2(a19):
  //   r139 = `$`(a19, <sym par>);
  //   goto L0(r139);
  // L3():
  //   dx34 = getTryDispatchBuiltinValue(dr30);
  //   goto L0(dx34);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2530300614_14, CCP, RHO);
  // ddd5 = ld `...`
  Rsh_Fir_reg_ddd5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r141 = dyn f3[, `...`](p14, ddd5)
  SEXP Rsh_Fir_array_args227[2];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_ddd5_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f3_, 2, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L213() else D61()
  // L213()
  goto L213_;

D61_:;
  // deopt 267 [r141]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(267, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L213_:;
  // l28 = ld a
  Rsh_Fir_reg_l28_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c72 = `is.object`(l28)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_reg_c72_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty());
  // if c72 then L215() else L216(r141, l28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c72_)) {
  // L215()
    goto L215_;
  } else {
  // L216(r141, l28)
    Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r141_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l28_;
    goto L216_;
  }

L214_:;
  // st a = dx37
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // a20 = ld a
  Rsh_Fir_reg_a20_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L218() else D62()
  // L218()
  goto L218_;

L215_:;
  // dr32 = tryDispatchBuiltin.0("$<-", l28, r141)
  SEXP Rsh_Fir_array_args229[3];
  Rsh_Fir_array_args229[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args229[2] = Rsh_Fir_reg_r141_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args229);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty());
  // if dc16 then L217() else L216(r141, dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L217()
    goto L217_;
  } else {
  // L216(r141, dr32)
    Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r141_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_dr32_;
    goto L216_;
  }

L216_:;
  // r146 = `$<-`(l30, <sym value>, r141)
  SEXP Rsh_Fir_array_args231[3];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args231[2] = Rsh_Fir_reg_r141_;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // goto L214(r146)
  // L214(r146)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r146_;
  goto L214_;

L217_:;
  // dx36 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L214(dx36)
  // L214(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L214_;

D62_:;
  // deopt 271 [a20]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_a20_;
  Rsh_Fir_deopt(271, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L218_:;
  // a21 = force? a20
  Rsh_Fir_reg_a21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a20_);
  // checkMissing(a21)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_a21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty()));
  // c73 = `is.object`(a21)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_a21_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // if c73 then L220() else L221(a21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c73_)) {
  // L220()
    goto L220_;
  } else {
  // L221(a21)
    Rsh_Fir_reg_a23_ = Rsh_Fir_reg_a21_;
    goto L221_;
  }

L219_:;
  // a24 = ld a
  Rsh_Fir_reg_a24_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L223() else D63()
  // L223()
  goto L223_;

L220_:;
  // dr34 = tryDispatchBuiltin.1("$", a21)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_a21_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args235);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty());
  // if dc17 then L222() else L221(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L222()
    goto L222_;
  } else {
  // L221(dr34)
    Rsh_Fir_reg_a23_ = Rsh_Fir_reg_dr34_;
    goto L221_;
  }

L221_:;
  // r147 = `$`(a23, <sym barrier.value>)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_a23_;
  Rsh_Fir_array_args237[1] = Rsh_const(CCP, 70);
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // goto L219(r147)
  // L219(r147)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r147_;
  goto L219_;

L222_:;
  // dx38 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // goto L219(dx38)
  // L219(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L219_;

D63_:;
  // deopt 273 [dx39, a24]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_a24_;
  Rsh_Fir_deopt(273, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L223_:;
  // a25 = force? a24
  Rsh_Fir_reg_a25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a24_);
  // checkMissing(a25)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_a25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty()));
  // c74 = `is.object`(a25)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_a25_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty());
  // if c74 then L225() else L226(dx39, a25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c74_)) {
  // L225()
    goto L225_;
  } else {
  // L226(dx39, a25)
    Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx39_;
    Rsh_Fir_reg_a27_ = Rsh_Fir_reg_a25_;
    goto L226_;
  }

L224_:;
  // r149 = `-`(dx44, dx45)
  SEXP Rsh_Fir_array_args241[2];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_dx44_;
  Rsh_Fir_array_args241[1] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // l31 = ld a
  Rsh_Fir_reg_l31_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c75 = `is.object`(l31)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_l31_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // if c75 then L229() else L230(r149, l31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c75_)) {
  // L229()
    goto L229_;
  } else {
  // L230(r149, l31)
    Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r149_;
    Rsh_Fir_reg_l33_ = Rsh_Fir_reg_l31_;
    goto L230_;
  }

L225_:;
  // dr36 = tryDispatchBuiltin.1("$", a25)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_a25_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args243);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty());
  // if dc18 then L227() else L226(dx39, dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L227()
    goto L227_;
  } else {
  // L226(dx39, dr36)
    Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx39_;
    Rsh_Fir_reg_a27_ = Rsh_Fir_reg_dr36_;
    goto L226_;
  }

L226_:;
  // r148 = `$`(a27, <sym value>)
  SEXP Rsh_Fir_array_args245[2];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_a27_;
  Rsh_Fir_array_args245[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty());
  // goto L224(dx41, r148)
  // L224(dx41, r148)
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r148_;
  goto L224_;

L227_:;
  // dx43 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // goto L224(dx39, dx43)
  // L224(dx39, dx43)
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx43_;
  goto L224_;

L228_:;
  // st a = dx47
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx47_, RHO);
  (void)(Rsh_Fir_reg_dx47_);
  // a28 = ld a
  Rsh_Fir_reg_a28_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L232() else D64()
  // L232()
  goto L232_;

L229_:;
  // dr38 = tryDispatchBuiltin.0("$<-", l31, r149)
  SEXP Rsh_Fir_array_args247[3];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args247[1] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_args247[2] = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args247);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // if dc19 then L231() else L230(r149, dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L231()
    goto L231_;
  } else {
  // L230(r149, dr38)
    Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r149_;
    Rsh_Fir_reg_l33_ = Rsh_Fir_reg_dr38_;
    goto L230_;
  }

L230_:;
  // r154 = `$<-`(l33, <sym barrier.value>, r149)
  SEXP Rsh_Fir_array_args249[3];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_l33_;
  Rsh_Fir_array_args249[1] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args249[2] = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // goto L228(r154)
  // L228(r154)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r154_;
  goto L228_;

L231_:;
  // dx46 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty());
  // goto L228(dx46)
  // L228(dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L228_;

D64_:;
  // deopt 280 [a28]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_a28_;
  Rsh_Fir_deopt(280, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L232_:;
  // a29 = force? a28
  Rsh_Fir_reg_a29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a28_);
  // checkMissing(a29)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_a29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return a29
  return Rsh_Fir_reg_a29_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
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
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // return "BFGS"
  return Rsh_const(CCP, 11);

L2_:;
  // grad1 = ld grad
  Rsh_Fir_reg_grad1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // grad2 = force? grad1
  Rsh_Fir_reg_grad2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grad1_);
  // checkMissing(grad2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_grad2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `==`(grad2, NULL)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_grad2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_c;
  goto L0_;

L3_:;
  // r4 = dyn base1(<sym grad>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;

L4_:;
  // return "Nelder-Mead"
  return Rsh_const(CCP, 13);
}
SEXP Rsh_Fir_user_promise_inner2530300614_2(SEXP CCP, SEXP RHO) {
  // theta3 = ld theta
  Rsh_Fir_reg_theta3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // theta4 = force? theta3
  Rsh_Fir_reg_theta4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta3_);
  // checkMissing(theta4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_theta4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return theta4
  return Rsh_Fir_reg_theta4_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_3(SEXP CCP, SEXP RHO) {
  // theta5 = ld theta
  Rsh_Fir_reg_theta5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // theta6 = force? theta5
  Rsh_Fir_reg_theta6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta5_);
  // checkMissing(theta6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_theta6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return theta6
  return Rsh_Fir_reg_theta6_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_4(SEXP CCP, SEXP RHO) {
  // theta7 = ld theta
  Rsh_Fir_reg_theta7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // theta8 = force? theta7
  Rsh_Fir_reg_theta8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta7_);
  // checkMissing(theta8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_theta8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return theta8
  return Rsh_Fir_reg_theta8_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_5(SEXP CCP, SEXP RHO) {
  // theta_old = ld `theta.old`
  Rsh_Fir_reg_theta_old = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // theta_old1 = force? theta_old
  Rsh_Fir_reg_theta_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta_old);
  // checkMissing(theta_old1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_theta_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return theta_old1
  return Rsh_Fir_reg_theta_old1_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_6(SEXP CCP, SEXP RHO) {
  // fun = ld fun
  Rsh_Fir_reg_fun = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // fun1 = force? fun
  Rsh_Fir_reg_fun1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fun);
  // checkMissing(fun1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_fun1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return fun1
  return Rsh_Fir_reg_fun1_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_7(SEXP CCP, SEXP RHO) {
  // gradient = ld gradient
  Rsh_Fir_reg_gradient = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // gradient1 = force? gradient
  Rsh_Fir_reg_gradient1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gradient);
  // checkMissing(gradient1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_gradient1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return gradient1
  return Rsh_Fir_reg_gradient1_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_8(SEXP CCP, SEXP RHO) {
  // control9 = ld control
  Rsh_Fir_reg_control9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // control10 = force? control9
  Rsh_Fir_reg_control10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control9_);
  // checkMissing(control10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_control10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return control10
  return Rsh_Fir_reg_control10_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_9(SEXP CCP, SEXP RHO) {
  // method3 = ld method
  Rsh_Fir_reg_method3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // method4 = force? method3
  Rsh_Fir_reg_method4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method3_);
  // checkMissing(method4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_method4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return method4
  return Rsh_Fir_reg_method4_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_10(SEXP CCP, SEXP RHO) {
  // hessian1 = ld hessian
  Rsh_Fir_reg_hessian1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // hessian2 = force? hessian1
  Rsh_Fir_reg_hessian2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hessian1_);
  // checkMissing(hessian2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_hessian2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return hessian2
  return Rsh_Fir_reg_hessian2_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_11(SEXP CCP, SEXP RHO) {
  // theta11 = ld theta
  Rsh_Fir_reg_theta11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // theta12 = force? theta11
  Rsh_Fir_reg_theta12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta11_);
  // checkMissing(theta12)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_theta12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // return theta12
  return Rsh_Fir_reg_theta12_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_12(SEXP CCP, SEXP RHO) {
  // i46 = ld i
  Rsh_Fir_reg_i46_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // i47 = force? i46
  Rsh_Fir_reg_i47_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i46_);
  // checkMissing(i47)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_i47_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // return i47
  return Rsh_Fir_reg_i47_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_13(SEXP CCP, SEXP RHO) {
  // i48 = ld i
  Rsh_Fir_reg_i48_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // i49 = force? i48
  Rsh_Fir_reg_i49_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i48_);
  // checkMissing(i49)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_i49_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // return i49
  return Rsh_Fir_reg_i49_;
}
SEXP Rsh_Fir_user_promise_inner2530300614_14(SEXP CCP, SEXP RHO) {
  // a16 = ld a
  Rsh_Fir_reg_a16_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // a17 = force? a16
  Rsh_Fir_reg_a17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a16_);
  // checkMissing(a17)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_a17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // c71 = `is.object`(a17)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_a17_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // if c71 then L1() else L2(a17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c71_)) {
  // L1()
    goto L1_;
  } else {
  // L2(a17)
    Rsh_Fir_reg_a19_ = Rsh_Fir_reg_a17_;
    goto L2_;
  }

L0_:;
  // return dx35
  return Rsh_Fir_reg_dx35_;

L1_:;
  // dr30 = tryDispatchBuiltin.1("$", a17)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_a17_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args223);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // if dc15 then L3() else L2(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr30)
    Rsh_Fir_reg_a19_ = Rsh_Fir_reg_dr30_;
    goto L2_;
  }

L2_:;
  // r139 = `$`(a19, <sym par>)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_a19_;
  Rsh_Fir_array_args225[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L0(r139)
  // L0(r139)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r139_;
  goto L0_;

L3_:;
  // dx34 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // goto L0(dx34)
  // L0(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1589173713_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1589173713 dynamic dispatch ([theta, `theta.old`, `...`])

  return Rsh_Fir_user_version_inner1589173713_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1589173713_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1589173713 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1589173713/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_theta1;  // theta
  SEXP Rsh_Fir_reg_theta_old1;  // theta_old
  SEXP Rsh_Fir_reg_ddd1;  // ddd
  SEXP Rsh_Fir_reg_ui1;  // ui
  SEXP Rsh_Fir_reg_ui1_1;  // ui1
  SEXP Rsh_Fir_reg_theta1_1;  // theta1
  SEXP Rsh_Fir_reg_theta2_1;  // theta2
  SEXP Rsh_Fir_reg____1;  // ___
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_ui_theta;  // ui_theta
  SEXP Rsh_Fir_reg_ui_theta1_;  // ui_theta1
  SEXP Rsh_Fir_reg_ci1;  // ci
  SEXP Rsh_Fir_reg_ci1_1;  // ci1
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_gi;  // gi
  SEXP Rsh_Fir_reg_gi1_;  // gi1
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_any1;  // any
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_ui2_1;  // ui2
  SEXP Rsh_Fir_reg_ui3_;  // ui3
  SEXP Rsh_Fir_reg_theta_old1_1;  // theta_old1
  SEXP Rsh_Fir_reg_theta_old2_;  // theta_old2
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_ci2_1;  // ci2
  SEXP Rsh_Fir_reg_ci3_;  // ci3
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_gi_old;  // gi_old
  SEXP Rsh_Fir_reg_gi_old1_;  // gi_old1
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_gi_old4_;  // gi_old4
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_gi2_;  // gi2
  SEXP Rsh_Fir_reg_gi3_;  // gi3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_ui_theta2_;  // ui_theta2
  SEXP Rsh_Fir_reg_ui_theta3_;  // ui_theta3
  SEXP Rsh_Fir_reg_r16_1;  // r16
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r17_1;  // r17
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_bar;  // bar
  SEXP Rsh_Fir_reg_bar1_;  // bar1
  SEXP Rsh_Fir_reg_is_finite1;  // is_finite
  SEXP Rsh_Fir_reg_r20_1;  // r20
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_f1;  // f
  SEXP Rsh_Fir_reg_theta3_1;  // theta3
  SEXP Rsh_Fir_reg_theta4_1;  // theta4
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_ddd1_1;  // ddd1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_mu1;  // mu
  SEXP Rsh_Fir_reg_mu1_1;  // mu1
  SEXP Rsh_Fir_reg_bar2_;  // bar2
  SEXP Rsh_Fir_reg_bar3_;  // bar3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_1;  // r26

  // Bind parameters
  Rsh_Fir_reg_theta1 = PARAMS[0];
  Rsh_Fir_reg_theta_old1 = PARAMS[1];
  Rsh_Fir_reg_ddd1 = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st theta = theta
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_theta1, RHO);
  (void)(Rsh_Fir_reg_theta1);
  // st `theta.old` = theta_old
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_theta_old1, RHO);
  (void)(Rsh_Fir_reg_theta_old1);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_ddd1, RHO);
  (void)(Rsh_Fir_reg_ddd1);
  // ui = ld ui
  Rsh_Fir_reg_ui1 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L0_:;
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty());
  // if c then L17() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L17()
    goto L17_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // ui2 = ld ui
  Rsh_Fir_reg_ui2_1 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

L3_:;
  // st bar = r11
  Rsh_Fir_store(Rsh_const(CCP, 71), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // sym3 = ldf `is.finite`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base3 = ldf `is.finite` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args253);
  // if guard3 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L4_:;
  // r15 = `*`(gi_old4, r13)
  SEXP Rsh_Fir_array_args254[2];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_gi_old4_;
  Rsh_Fir_array_args254[1] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty());
  // ui_theta2 = ld `ui.theta`
  Rsh_Fir_reg_ui_theta2_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L30() else D13()
  // L30()
  goto L30_;

L5_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty());
  // if c1 then L36() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L36()
    goto L36_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // f = ldf f
  Rsh_Fir_reg_f1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L38() else D17()
  // L38()
  goto L38_;

D0_:;
  // deopt 1 [ui]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_ui1;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L8_:;
  // ui1 = force? ui
  Rsh_Fir_reg_ui1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_ui1);
  // checkMissing(ui1)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_ui1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty()));
  // theta1 = ld theta
  Rsh_Fir_reg_theta1_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 3 [theta1]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_theta1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L9_:;
  // theta2 = force? theta1
  Rsh_Fir_reg_theta2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta1_1);
  // checkMissing(theta2)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_theta2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r = dyn ___(ui1, theta2)
  SEXP Rsh_Fir_array_args259[2];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_ui1_1;
  Rsh_Fir_array_args259[1] = Rsh_Fir_reg_theta2_1;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1, 2, Rsh_Fir_array_args259, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 6 [r]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L10_:;
  // st `ui.theta` = r
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_r2, RHO);
  (void)(Rsh_Fir_reg_r2);
  // ui_theta = ld `ui.theta`
  Rsh_Fir_reg_ui_theta = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 8 [ui_theta]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_ui_theta;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L11_:;
  // ui_theta1 = force? ui_theta
  Rsh_Fir_reg_ui_theta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ui_theta);
  // checkMissing(ui_theta1)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_ui_theta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // ci = ld ci
  Rsh_Fir_reg_ci1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 9 [ui_theta1, ci]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_ui_theta1_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_ci1;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L12_:;
  // ci1 = force? ci
  Rsh_Fir_reg_ci1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_ci1);
  // checkMissing(ci1)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_ci1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty()));
  // r1 = `-`(ui_theta1, ci1)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_ui_theta1_;
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_ci1_1;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty());
  // st gi = r1
  Rsh_Fir_store(Rsh_const(CCP, 73), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym = ldf any
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base = ldf any in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args263[2];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args263[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args263);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // gi = ld gi
  Rsh_Fir_reg_gi = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

L14_:;
  // r2 = dyn base(<lang `<`(gi, 0.0)>)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args264, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_1;
  goto L0_;

D5_:;
  // deopt 15 [gi]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_gi;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L15_:;
  // gi1 = force? gi
  Rsh_Fir_reg_gi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gi);
  // checkMissing(gi1)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_gi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty()));
  // r4 = `<`(gi1, 0.0)
  SEXP Rsh_Fir_array_args266[2];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_gi1_;
  Rsh_Fir_array_args266[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r5 = dyn any(r4)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1, 1, Rsh_Fir_array_args267, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

D6_:;
  // deopt 20 [r5]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r5_1;
  goto L0_;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NA_REAL
  return Rsh_const(CCP, 75);

D7_:;
  // deopt 27 [ui2]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_ui2_1;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L20_:;
  // ui3 = force? ui2
  Rsh_Fir_reg_ui3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ui2_1);
  // checkMissing(ui3)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_ui3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty()));
  // theta_old1 = ld `theta.old`
  Rsh_Fir_reg_theta_old1_1 = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 29 [theta_old1]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_theta_old1_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L21_:;
  // theta_old2 = force? theta_old1
  Rsh_Fir_reg_theta_old2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta_old1_1);
  // checkMissing(theta_old2)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_theta_old2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty()));
  // ___1 = ldf `%*%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r8 = dyn ___1(ui3, theta_old2)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_ui3_;
  Rsh_Fir_array_args270[1] = Rsh_Fir_reg_theta_old2_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args270, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 32 [r8]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L22_:;
  // ci2 = ld ci
  Rsh_Fir_reg_ci2_1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L23() else D10()
  // L23()
  goto L23_;

D10_:;
  // deopt 32 [r8, ci2]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_ci2_1;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L23_:;
  // ci3 = force? ci2
  Rsh_Fir_reg_ci3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ci2_1);
  // checkMissing(ci3)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_ci3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty()));
  // r9 = `-`(r8, ci3)
  SEXP Rsh_Fir_array_args272[2];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_ci3_;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty());
  // st `gi.old` = r9
  Rsh_Fir_store(Rsh_const(CCP, 76), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // sym1 = ldf sum
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base1 = ldf sum in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args273[2];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args273[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args273);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // gi_old = ld `gi.old`
  Rsh_Fir_reg_gi_old = Rsh_Fir_load(Rsh_const(CCP, 76), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

L25_:;
  // r10 = dyn base1(<lang `-`(`*`(gi.old, log(gi)), ui.theta)>)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args274, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L3_;

D11_:;
  // deopt 38 [gi_old]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_gi_old;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L26_:;
  // gi_old1 = force? gi_old
  Rsh_Fir_reg_gi_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gi_old);
  // checkMissing(gi_old1)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_gi_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty()));
  // sym2 = ldf log
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base2 = ldf log in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args276[2];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args276[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args276);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // gi2 = ld gi
  Rsh_Fir_reg_gi2_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L29() else D12()
  // L29()
  goto L29_;

L28_:;
  // r12 = dyn base2(<sym gi>)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L4(gi_old1, r12)
  // L4(gi_old1, r12)
  Rsh_Fir_reg_gi_old4_ = Rsh_Fir_reg_gi_old1_;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r12_1;
  goto L4_;

D12_:;
  // deopt 40 [gi_old1, gi2]
  SEXP Rsh_Fir_array_deopt_stack70[2];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_gi_old1_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_gi2_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L29_:;
  // gi3 = force? gi2
  Rsh_Fir_reg_gi3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gi2_);
  // checkMissing(gi3)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_gi3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty()));
  // r14 = log(gi3, 2.718281828459045)
  SEXP Rsh_Fir_array_args279[2];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_gi3_;
  Rsh_Fir_array_args279[1] = Rsh_const(CCP, 80);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty());
  // goto L4(gi_old1, r14)
  // L4(gi_old1, r14)
  Rsh_Fir_reg_gi_old4_ = Rsh_Fir_reg_gi_old1_;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r14_;
  goto L4_;

D13_:;
  // deopt 43 [r15, ui_theta2]
  SEXP Rsh_Fir_array_deopt_stack71[2];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_ui_theta2_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L30_:;
  // ui_theta3 = force? ui_theta2
  Rsh_Fir_reg_ui_theta3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ui_theta2_);
  // checkMissing(ui_theta3)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_ui_theta3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty()));
  // r16 = `-`(r15, ui_theta3)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_array_args281[1] = Rsh_Fir_reg_ui_theta3_;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r17 = dyn sum(r16)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args282, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L31() else D14()
  // L31()
  goto L31_;

D14_:;
  // deopt 47 [r17]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L3(r17)
  // L3(r17)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r17_1;
  goto L3_;

L32_:;
  // bar = ld bar
  Rsh_Fir_reg_bar = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L34() else D15()
  // L34()
  goto L34_;

L33_:;
  // r18 = dyn base3(<sym bar>)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L5(r18)
  // L5(r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_1;
  goto L5_;

D15_:;
  // deopt 51 [bar]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_bar;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L34_:;
  // bar1 = force? bar
  Rsh_Fir_reg_bar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar);
  // checkMissing(bar1)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_bar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r20 = dyn is_finite(bar1)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_bar1_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite1, 1, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L35() else D16()
  // L35()
  goto L35_;

D16_:;
  // deopt 54 [r20]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r20_1;
  goto L5_;

L36_:;
  // st bar = -Infinity
  Rsh_Fir_store(Rsh_const(CCP, 71), Rsh_const(CCP, 81), RHO);
  (void)(Rsh_const(CCP, 81));
  // goto L7()
  // L7()
  goto L7_;

D17_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p = prom<V +>{
  //   theta3 = ld theta;
  //   theta4 = force? theta3;
  //   checkMissing(theta4);
  //   return theta4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1589173713_, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_1 = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r24 = dyn f[, `...`](p, ddd1)
  SEXP Rsh_Fir_array_args287[2];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args287[1] = Rsh_Fir_reg_ddd1_1;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f1, 2, Rsh_Fir_array_args287, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L39() else D18()
  // L39()
  goto L39_;

D18_:;
  // deopt 65 [r24]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L39_:;
  // mu = ld mu
  Rsh_Fir_reg_mu1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L40() else D19()
  // L40()
  goto L40_;

D19_:;
  // deopt 65 [r24, mu]
  SEXP Rsh_Fir_array_deopt_stack76[2];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_mu1;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L40_:;
  // mu1 = force? mu
  Rsh_Fir_reg_mu1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_mu1);
  // checkMissing(mu1)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_mu1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty()));
  // bar2 = ld bar
  Rsh_Fir_reg_bar2_ = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L41() else D20()
  // L41()
  goto L41_;

D20_:;
  // deopt 66 [r24, mu1, bar2]
  SEXP Rsh_Fir_array_deopt_stack77[3];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_mu1_1;
  Rsh_Fir_array_deopt_stack77[2] = Rsh_Fir_reg_bar2_;
  Rsh_Fir_deopt(66, 3, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L41_:;
  // bar3 = force? bar2
  Rsh_Fir_reg_bar3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bar2_);
  // checkMissing(bar3)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_bar3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty()));
  // r25 = `*`(mu1, bar3)
  SEXP Rsh_Fir_array_args290[2];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_mu1_1;
  Rsh_Fir_array_args290[1] = Rsh_Fir_reg_bar3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty());
  // r26 = `-`(r24, r25)
  SEXP Rsh_Fir_array_args291[2];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args291[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r26
  return Rsh_Fir_reg_r26_1;
}
SEXP Rsh_Fir_user_promise_inner1589173713_(SEXP CCP, SEXP RHO) {
  // theta3 = ld theta
  Rsh_Fir_reg_theta3_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // theta4 = force? theta3
  Rsh_Fir_reg_theta4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta3_1);
  // checkMissing(theta4)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_theta4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty()));
  // return theta4
  return Rsh_Fir_reg_theta4_1;
}
SEXP Rsh_Fir_user_function_inner3391087164_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3391087164 dynamic dispatch ([theta, `...`])

  return Rsh_Fir_user_version_inner3391087164_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3391087164_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3391087164 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3391087164/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_theta2;  // theta
  SEXP Rsh_Fir_reg_ddd2;  // ddd
  SEXP Rsh_Fir_reg_R1;  // R
  SEXP Rsh_Fir_reg_theta1_2;  // theta1
  SEXP Rsh_Fir_reg_theta2_2;  // theta2
  SEXP Rsh_Fir_reg_p2;  // p
  SEXP Rsh_Fir_reg_theta_old2;  // theta_old
  SEXP Rsh_Fir_reg_theta_old1_2;  // theta_old1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_ddd1_2;  // ddd1
  SEXP Rsh_Fir_reg_r2_2;  // r2

  // Bind parameters
  Rsh_Fir_reg_theta2 = PARAMS[0];
  Rsh_Fir_reg_ddd2 = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st theta = theta
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_theta2, RHO);
  (void)(Rsh_Fir_reg_theta2);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_ddd2, RHO);
  (void)(Rsh_Fir_reg_ddd2);
  // R = ldf R
  Rsh_Fir_reg_R1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   theta1 = ld theta;
  //   theta2 = force? theta1;
  //   checkMissing(theta2);
  //   return theta2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391087164_, CCP, RHO);
  // p1 = prom<V +>{
  //   theta_old = ld `theta.old`;
  //   theta_old1 = force? theta_old;
  //   checkMissing(theta_old1);
  //   return theta_old1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391087164_1, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_2 = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // r2 = dyn R[, , `...`](p, p1, ddd1)
  SEXP Rsh_Fir_array_args294[3];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args294[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args294[2] = Rsh_Fir_reg_ddd1_2;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R1, 3, Rsh_Fir_array_args294, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_2;
}
SEXP Rsh_Fir_user_promise_inner3391087164_(SEXP CCP, SEXP RHO) {
  // theta1 = ld theta
  Rsh_Fir_reg_theta1_2 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // theta2 = force? theta1
  Rsh_Fir_reg_theta2_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta1_2);
  // checkMissing(theta2)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_theta2_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty()));
  // return theta2
  return Rsh_Fir_reg_theta2_2;
}
SEXP Rsh_Fir_user_promise_inner3391087164_1(SEXP CCP, SEXP RHO) {
  // theta_old = ld `theta.old`
  Rsh_Fir_reg_theta_old2 = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // theta_old1 = force? theta_old
  Rsh_Fir_reg_theta_old1_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_theta_old2);
  // checkMissing(theta_old1)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_theta_old1_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty()));
  // return theta_old1
  return Rsh_Fir_reg_theta_old1_2;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
