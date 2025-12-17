#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2560675370_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2560675370_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2560675370_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2560675370_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1031285476_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1031285476_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2560675370
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2560675370_, RHO, CCP);
  // st `bw.ucv` = r
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
SEXP Rsh_Fir_user_function_inner2560675370_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2560675370 dynamic dispatch ([x, nb, lower, upper, tol])

  return Rsh_Fir_user_version_inner2560675370_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2560675370_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2560675370 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2560675370/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_nb;  // nb
  SEXP Rsh_Fir_reg_lower;  // lower
  SEXP Rsh_Fir_reg_upper;  // upper
  SEXP Rsh_Fir_reg_tol;  // tol
  SEXP Rsh_Fir_reg_nb_isMissing;  // nb_isMissing
  SEXP Rsh_Fir_reg_nb_orDefault;  // nb_orDefault
  SEXP Rsh_Fir_reg_lower_isMissing;  // lower_isMissing
  SEXP Rsh_Fir_reg_lower_orDefault;  // lower_orDefault
  SEXP Rsh_Fir_reg_hmax;  // hmax
  SEXP Rsh_Fir_reg_hmax1_;  // hmax1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_upper_isMissing;  // upper_isMissing
  SEXP Rsh_Fir_reg_upper_orDefault;  // upper_orDefault
  SEXP Rsh_Fir_reg_hmax2_;  // hmax2
  SEXP Rsh_Fir_reg_hmax3_;  // hmax3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_tol_isMissing;  // tol_isMissing
  SEXP Rsh_Fir_reg_tol_orDefault;  // tol_orDefault
  SEXP Rsh_Fir_reg_lower1_;  // lower1
  SEXP Rsh_Fir_reg_lower2_;  // lower2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_nb1_;  // nb1
  SEXP Rsh_Fir_reg_nb2_;  // nb2
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_nb3_;  // nb3
  SEXP Rsh_Fir_reg_nb4_;  // nb4
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_nb5_;  // nb5
  SEXP Rsh_Fir_reg_nb6_;  // nb6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_var;  // var
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_bw_pair_cnts;  // bw_pair_cnts
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_nb7_;  // nb7
  SEXP Rsh_Fir_reg_nb8_;  // nb8
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_nb9_;  // nb9
  SEXP Rsh_Fir_reg_nb10_;  // nb10
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_Z;  // Z
  SEXP Rsh_Fir_reg_Z1_;  // Z1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_Z3_;  // Z3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_Z4_;  // Z4
  SEXP Rsh_Fir_reg_Z5_;  // Z5
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_Z7_;  // Z7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_optimize;  // optimize
  SEXP Rsh_Fir_reg_fucv;  // fucv
  SEXP Rsh_Fir_reg_fucv1_;  // fucv1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_lower3_;  // lower3
  SEXP Rsh_Fir_reg_lower4_;  // lower4
  SEXP Rsh_Fir_reg_upper1_;  // upper1
  SEXP Rsh_Fir_reg_upper2_;  // upper2
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_tol1_;  // tol1
  SEXP Rsh_Fir_reg_tol2_;  // tol2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_h;  // h
  SEXP Rsh_Fir_reg_h1_;  // h1
  SEXP Rsh_Fir_reg_lower5_;  // lower5
  SEXP Rsh_Fir_reg_lower6_;  // lower6
  SEXP Rsh_Fir_reg_tol3_;  // tol3
  SEXP Rsh_Fir_reg_tol4_;  // tol4
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_h2_;  // h2
  SEXP Rsh_Fir_reg_h3_;  // h3
  SEXP Rsh_Fir_reg_upper3_;  // upper3
  SEXP Rsh_Fir_reg_upper4_;  // upper4
  SEXP Rsh_Fir_reg_tol5_;  // tol5
  SEXP Rsh_Fir_reg_tol6_;  // tol6
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_h4_;  // h4
  SEXP Rsh_Fir_reg_h5_;  // h5

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_nb = PARAMS[1];
  Rsh_Fir_reg_lower = PARAMS[2];
  Rsh_Fir_reg_upper = PARAMS[3];
  Rsh_Fir_reg_tol = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // nb_isMissing = missing.0(nb)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_nb;
  Rsh_Fir_reg_nb_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if nb_isMissing then L0(1000) else L0(nb)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nb_isMissing)) {
  // L0(1000)
    Rsh_Fir_reg_nb_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(nb)
    Rsh_Fir_reg_nb_orDefault = Rsh_Fir_reg_nb;
    goto L0_;
  }

L0_:;
  // st nb = nb_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_nb_orDefault, RHO);
  (void)(Rsh_Fir_reg_nb_orDefault);
  // lower_isMissing = missing.0(lower)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lower;
  Rsh_Fir_reg_lower_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if lower_isMissing then L1() else L2(lower)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(lower)
    Rsh_Fir_reg_lower_orDefault = Rsh_Fir_reg_lower;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   hmax = ld hmax;
  //   hmax1 = force? hmax;
  //   checkMissing(hmax1);
  //   r = `*`(0.1, hmax1);
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_lower_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st lower = lower_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_lower_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_orDefault);
  // upper_isMissing = missing.0(upper)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_upper;
  Rsh_Fir_reg_upper_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if upper_isMissing then L3() else L4(upper)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_upper_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(upper)
    Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_upper;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   hmax2 = ld hmax;
  //   hmax3 = force? hmax2;
  //   checkMissing(hmax3);
  //   return hmax3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_1, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_p1_;
  goto L4_;

L4_:;
  // st upper = upper_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_upper_orDefault, RHO);
  (void)(Rsh_Fir_reg_upper_orDefault);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if tol_isMissing then L5() else L6(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L6_;
  }

L5_:;
  // p2 = prom<V +>{
  //   lower1 = ld lower;
  //   lower2 = force? lower1;
  //   checkMissing(lower2);
  //   r3 = `*`(0.1, lower2);
  //   return r3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_2, CCP, RHO);
  // goto L6(p2)
  // L6(p2)
  Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_p2_;
  goto L6_;

L6_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L7_:;
  // st n = r6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // r8 = `<`(r6, 2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c then L32() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L32()
    goto L32_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L10_:;
  // st n = r12
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L11_:;
  // c1 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c1 then L44() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L44()
    goto L44_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym3 = ldf `is.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf `is.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L14_:;
  // r22 = `!`(r20)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L52() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L52()
    goto L52_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym4 = ldf `as.integer`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base4 = ldf `as.integer` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L17_:;
  // st nb = r26
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard5 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L18_:;
  // c3 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c3 then L19(c3) else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L19(c3)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c3_;
    goto L19_;
  } else {
  // L64()
    goto L64_;
  }

L19_:;
  // c9 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c9 then L67() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L67()
    goto L67_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L71() else D21()
  // L71()
  goto L71_;

L22_:;
  // r43 = `*`(r38, r39)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L77() else D25()
  // L77()
  goto L77_;

L23_:;
  // st d = dx1
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // Z4 = ld Z
  Rsh_Fir_reg_Z4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L84() else D29()
  // L84()
  goto L84_;

L24_:;
  // st cnt = dx3
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // r54 = clos inner1031285476
  Rsh_Fir_reg_r54_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1031285476_, RHO, CCP);
  // st fucv = r54
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // optimize = ldf optimize
  Rsh_Fir_reg_optimize = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L88() else D30()
  // L88()
  goto L88_;

L25_:;
  // c20 = `as.logical`(c15)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c20 then L102() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L102()
    goto L102_;
  } else {
  // L26()
    goto L26_;
  }

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // h4 = ld h
  Rsh_Fir_reg_h4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L106() else D40()
  // L106()
  goto L106_;

L28_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L29_:;
  // r5 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L7(r5)
  // L7(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L7_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L30_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r7 = dyn length(x2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 5 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L7_;

L32_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r9 = dyn stop("need at least 2 data points")
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D3_:;
  // deopt 12 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L9()
  // L9()
  goto L9_;

L36_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

L37_:;
  // r11 = dyn base1(<sym n>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L10(r11)
  // L10(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L10_;

D4_:;
  // deopt 17 [n]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L38_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r13 = dyn as_integer(n1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

D5_:;
  // deopt 20 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L10(r13)
  // L10(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L10_;

L40_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L42() else D6()
  // L42()
  goto L42_;

L41_:;
  // r14 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L11(r14)
  // L11(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L11_;

D6_:;
  // deopt 24 [n2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L42_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r16 = dyn is_na(n3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

D7_:;
  // deopt 27 [r16]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L11(r16)
  // L11(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L11_;

L44_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // r17 = dyn stop1("invalid length(x)")
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

D9_:;
  // deopt 31 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L13()
  // L13()
  goto L13_;

L48_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

L49_:;
  // r19 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L14(r19)
  // L14(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L14_;

D10_:;
  // deopt 36 [x3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L50_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r21 = dyn is_numeric(x4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

D11_:;
  // deopt 39 [r21]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L14(r21)
  // L14(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L14_;

L52_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

D12_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // r23 = dyn stop2("invalid 'x'")
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

D13_:;
  // deopt 44 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L16()
  // L16()
  goto L16_;

L56_:;
  // nb1 = ld nb
  Rsh_Fir_reg_nb1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L57_:;
  // r25 = dyn base4(<sym nb>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L17(r25)
  // L17(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L17_;

D14_:;
  // deopt 49 [nb1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_nb1_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // nb2 = force? nb1
  Rsh_Fir_reg_nb2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb1_);
  // checkMissing(nb2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_nb2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r27 = dyn as_integer1(nb2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_nb2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L59() else D15()
  // L59()
  goto L59_;

D15_:;
  // deopt 52 [r27]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L17(r27)
  // L17(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L17_;

L60_:;
  // nb3 = ld nb
  Rsh_Fir_reg_nb3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

L61_:;
  // r28 = dyn base5(<sym nb>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L18(r28)
  // L18(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L18_;

D16_:;
  // deopt 56 [nb3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_nb3_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L62_:;
  // nb4 = force? nb3
  Rsh_Fir_reg_nb4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb3_);
  // checkMissing(nb4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_nb4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r30 = dyn is_na1(nb4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_nb4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

D17_:;
  // deopt 59 [r30]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L18(r30)
  // L18(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L18_;

L64_:;
  // nb5 = ld nb
  Rsh_Fir_reg_nb5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

D18_:;
  // deopt 60 [c3, nb5]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_nb5_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // nb6 = force? nb5
  Rsh_Fir_reg_nb6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb5_);
  // checkMissing(nb6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_nb6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r31 = `<=`(nb6, 0)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_nb6_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // c7 = `||`(c3, c6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L19(c7)
  // L19(c7)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c7_;
  goto L19_;

L67_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L68() else D19()
  // L68()
  goto L68_;

D19_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // r32 = dyn stop3("invalid 'nb'")
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L69() else D20()
  // L69()
  goto L69_;

D20_:;
  // deopt 68 [r32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L21()
  // L21()
  goto L21_;

D21_:;
  // deopt 74 ["double", l, "double"]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_const(CCP, 28);
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L71_:;
  // r34 = dyn storage_mode__(l, NULL, "double")
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L72() else D22()
  // L72()
  goto L72_;

D22_:;
  // deopt 76 ["double", r34]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L72_:;
  // st x = r34
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sym6 = ldf sqrt
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf sqrt in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard6 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // var = ldf var
  Rsh_Fir_reg_var = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L75() else D23()
  // L75()
  goto L75_;

L74_:;
  // r37 = dyn base6(<lang var(x)>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L22(1.144, r37)
  // L22(1.144, r37)
  Rsh_Fir_reg_r38_ = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
  goto L22_;

D23_:;
  // deopt 81 [1.144]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 33);
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // p3 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_3, CCP, RHO);
  // r41 = dyn var(p3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_var, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L76() else D24()
  // L76()
  goto L76_;

D24_:;
  // deopt 83 [1.144, r41]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L76_:;
  // r42 = sqrt(r41)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L22(1.144, r42)
  // L22(1.144, r42)
  Rsh_Fir_reg_r38_ = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r42_;
  goto L22_;

D25_:;
  // deopt 85 [r43, n4]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L77_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r44 = `^`(n5, -0.2)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // r45 = `*`(r43, r44)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // st hmax = r45
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // bw_pair_cnts = ldf bw_pair_cnts
  Rsh_Fir_reg_bw_pair_cnts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L78() else D26()
  // L78()
  goto L78_;

D26_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // p4 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_4, CCP, RHO);
  // p5 = prom<V +>{
  //   nb7 = ld nb;
  //   nb8 = force? nb7;
  //   checkMissing(nb8);
  //   return nb8;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_5, CCP, RHO);
  // p6 = prom<V +>{
  //   n6 = ld n;
  //   n7 = force? n6;
  //   checkMissing(n7);
  //   nb9 = ld nb;
  //   nb10 = force? nb9;
  //   checkMissing(nb10);
  //   r48 = `/`(nb10, 2.0);
  //   r49 = `>`(n7, r48);
  //   return r49;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_6, CCP, RHO);
  // r51 = dyn bw_pair_cnts(p4, p5, p6)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bw_pair_cnts, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L79() else D27()
  // L79()
  goto L79_;

D27_:;
  // deopt 96 [r51]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L79_:;
  // st Z = r51
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // Z = ld Z
  Rsh_Fir_reg_Z = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L80() else D28()
  // L80()
  goto L80_;

D28_:;
  // deopt 98 [Z]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_Z;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L80_:;
  // Z1 = force? Z
  Rsh_Fir_reg_Z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z);
  // checkMissing(Z1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_Z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(Z1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_Z1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c10 then L81() else L82(Z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L81()
    goto L81_;
  } else {
  // L82(Z1)
    Rsh_Fir_reg_Z3_ = Rsh_Fir_reg_Z1_;
    goto L82_;
  }

L81_:;
  // dr = tryDispatchBuiltin.1("[[", Z1)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_Z1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc then L83() else L82(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L83()
    goto L83_;
  } else {
  // L82(dr)
    Rsh_Fir_reg_Z3_ = Rsh_Fir_reg_dr;
    goto L82_;
  }

L82_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r52 = dyn __(Z3, 1)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_Z3_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L23(r52)
  // L23(r52)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r52_;
  goto L23_;

L83_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L23(dx)
  // L23(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L23_;

D29_:;
  // deopt 104 [Z4]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_Z4_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L84_:;
  // Z5 = force? Z4
  Rsh_Fir_reg_Z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Z4_);
  // checkMissing(Z5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_Z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(Z5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_Z5_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c11 then L85() else L86(Z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L85()
    goto L85_;
  } else {
  // L86(Z5)
    Rsh_Fir_reg_Z7_ = Rsh_Fir_reg_Z5_;
    goto L86_;
  }

L85_:;
  // dr2 = tryDispatchBuiltin.1("[[", Z5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_Z5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc1 then L87() else L86(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L87()
    goto L87_;
  } else {
  // L86(dr2)
    Rsh_Fir_reg_Z7_ = Rsh_Fir_reg_dr2_;
    goto L86_;
  }

L86_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r53 = dyn __1(Z7, 2)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_Z7_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L24(r53)
  // L24(r53)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r53_;
  goto L24_;

L87_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L24(dx2)
  // L24(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L24_;

D30_:;
  // deopt 114 []
  Rsh_Fir_deopt(114, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // p7 = prom<V +>{
  //   fucv = ld fucv;
  //   fucv1 = force? fucv;
  //   checkMissing(fucv1);
  //   return fucv1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym7 = ldf c;
  //   base7 = ldf c in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r57):
  //   return r57;
  // L1():
  //   lower3 = ld lower;
  //   lower4 = force? lower3;
  //   checkMissing(lower4);
  //   upper1 = ld upper;
  //   upper2 = force? upper1;
  //   checkMissing(upper2);
  //   c12 = ldf c in base;
  //   r58 = dyn c12(lower4, upper2);
  //   goto L0(r58);
  // L2():
  //   r56 = dyn base7(<sym lower>, <sym upper>);
  //   goto L0(r56);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_8, CCP, RHO);
  // p9 = prom<V +>{
  //   tol1 = ld tol;
  //   tol2 = force? tol1;
  //   checkMissing(tol2);
  //   return tol2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2560675370_9, CCP, RHO);
  // r61 = dyn optimize[, , tol](p7, p8, p9)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args85[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_optimize, 3, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L89() else D31()
  // L89()
  goto L89_;

D31_:;
  // deopt 119 [r61]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L89_:;
  // c13 = `is.object`(r61)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c13 then L91() else L92(r61)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L91()
    goto L91_;
  } else {
  // L92(r61)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r61_;
    goto L92_;
  }

L90_:;
  // st h = dx5
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // h = ld h
  Rsh_Fir_reg_h = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L94() else D32()
  // L94()
  goto L94_;

L91_:;
  // dr4 = tryDispatchBuiltin.1("$", r61)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc2 then L93() else L92(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L93()
    goto L93_;
  } else {
  // L92(dr4)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_dr4_;
    goto L92_;
  }

L92_:;
  // r64 = `$`(r63, <sym minimum>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L90(r64)
  // L90(r64)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r64_;
  goto L90_;

L93_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L90(dx4)
  // L90(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L90_;

D32_:;
  // deopt 122 [h]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_h;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L94_:;
  // h1 = force? h
  Rsh_Fir_reg_h1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h);
  // checkMissing(h1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_h1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // lower5 = ld lower
  Rsh_Fir_reg_lower5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L95() else D33()
  // L95()
  goto L95_;

D33_:;
  // deopt 123 [h1, lower5]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_h1_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_lower5_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L95_:;
  // lower6 = force? lower5
  Rsh_Fir_reg_lower6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower5_);
  // checkMissing(lower6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_lower6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // tol3 = ld tol
  Rsh_Fir_reg_tol3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L96() else D34()
  // L96()
  goto L96_;

D34_:;
  // deopt 124 [h1, lower6, tol3]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_h1_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_lower6_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_tol3_;
  Rsh_Fir_deopt(124, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L96_:;
  // tol4 = force? tol3
  Rsh_Fir_reg_tol4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol3_);
  // checkMissing(tol4)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_tol4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // r65 = `+`(lower6, tol4)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_lower6_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_tol4_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // r66 = `<`(h1, r65)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_h1_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c14 then L25(c14) else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L25(c14)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c14_;
    goto L25_;
  } else {
  // L97()
    goto L97_;
  }

L97_:;
  // h2 = ld h
  Rsh_Fir_reg_h2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L98() else D35()
  // L98()
  goto L98_;

D35_:;
  // deopt 128 [c14, h2]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_h2_;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L98_:;
  // h3 = force? h2
  Rsh_Fir_reg_h3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h2_);
  // checkMissing(h3)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_h3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // upper3 = ld upper
  Rsh_Fir_reg_upper3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L99() else D36()
  // L99()
  goto L99_;

D36_:;
  // deopt 129 [c14, h3, upper3]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_h3_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_upper3_;
  Rsh_Fir_deopt(129, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L99_:;
  // upper4 = force? upper3
  Rsh_Fir_reg_upper4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper3_);
  // checkMissing(upper4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_upper4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // tol5 = ld tol
  Rsh_Fir_reg_tol5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L100() else D37()
  // L100()
  goto L100_;

D37_:;
  // deopt 130 [c14, h3, upper4, tol5]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_h3_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_upper4_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_tol5_;
  Rsh_Fir_deopt(130, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L100_:;
  // tol6 = force? tol5
  Rsh_Fir_reg_tol6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol5_);
  // checkMissing(tol6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_tol6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // r67 = `-`(upper4, tol6)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_upper4_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_tol6_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // r68 = `>`(h3, r67)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_h3_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r68)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // c18 = `||`(c14, c17)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L25(c18)
  // L25(c18)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c18_;
  goto L25_;

L102_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L103() else D38()
  // L103()
  goto L103_;

D38_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

L103_:;
  // r69 = dyn warning("minimum occurred at one end of the range")
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L104() else D39()
  // L104()
  goto L104_;

D39_:;
  // deopt 138 [r69]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L27()
  // L27()
  goto L27_;

D40_:;
  // deopt 141 [h4]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_h4_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L106_:;
  // h5 = force? h4
  Rsh_Fir_reg_h5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h4_);
  // checkMissing(h5)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_h5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return h5
  return Rsh_Fir_reg_h5_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_(SEXP CCP, SEXP RHO) {
  // hmax = ld hmax
  Rsh_Fir_reg_hmax = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // hmax1 = force? hmax
  Rsh_Fir_reg_hmax1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hmax);
  // checkMissing(hmax1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_hmax1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // r = `*`(0.1, hmax1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_hmax1_;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2560675370_1(SEXP CCP, SEXP RHO) {
  // hmax2 = ld hmax
  Rsh_Fir_reg_hmax2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // hmax3 = force? hmax2
  Rsh_Fir_reg_hmax3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hmax2_);
  // checkMissing(hmax3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_hmax3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return hmax3
  return Rsh_Fir_reg_hmax3_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_2(SEXP CCP, SEXP RHO) {
  // lower1 = ld lower
  Rsh_Fir_reg_lower1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lower2 = force? lower1
  Rsh_Fir_reg_lower2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower1_);
  // checkMissing(lower2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_lower2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r3 = `*`(0.1, lower2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_lower2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_3(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_4(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_5(SEXP CCP, SEXP RHO) {
  // nb7 = ld nb
  Rsh_Fir_reg_nb7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // nb8 = force? nb7
  Rsh_Fir_reg_nb8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb7_);
  // checkMissing(nb8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_nb8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return nb8
  return Rsh_Fir_reg_nb8_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_6(SEXP CCP, SEXP RHO) {
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // nb9 = ld nb
  Rsh_Fir_reg_nb9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // nb10 = force? nb9
  Rsh_Fir_reg_nb10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb9_);
  // checkMissing(nb10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_nb10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // r48 = `/`(nb10, 2.0)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_nb10_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // r49 = `>`(n7, r48)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_7(SEXP CCP, SEXP RHO) {
  // fucv = ld fucv
  Rsh_Fir_reg_fucv = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // fucv1 = force? fucv
  Rsh_Fir_reg_fucv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fucv);
  // checkMissing(fucv1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_fucv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return fucv1
  return Rsh_Fir_reg_fucv1_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_8(SEXP CCP, SEXP RHO) {
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r57
  return Rsh_Fir_reg_r57_;

L1_:;
  // lower3 = ld lower
  Rsh_Fir_reg_lower3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lower4 = force? lower3
  Rsh_Fir_reg_lower4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower3_);
  // checkMissing(lower4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_lower4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // upper1 = ld upper
  Rsh_Fir_reg_upper1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // upper2 = force? upper1
  Rsh_Fir_reg_upper2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper1_);
  // checkMissing(upper2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_upper2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r58 = dyn c12(lower4, upper2)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_lower4_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_upper2_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L0_;

L2_:;
  // r56 = dyn base7(<sym lower>, <sym upper>)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2560675370_9(SEXP CCP, SEXP RHO) {
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return tol2
  return Rsh_Fir_reg_tol2_;
}
SEXP Rsh_Fir_user_function_inner1031285476_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1031285476 dynamic dispatch ([h])

  return Rsh_Fir_user_version_inner1031285476_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1031285476_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1031285476 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1031285476/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_h1;  // h
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_bw_ucv;  // C_bw_ucv
  SEXP Rsh_Fir_reg_C_bw_ucv1_;  // C_bw_ucv1
  SEXP Rsh_Fir_reg_n1;  // n
  SEXP Rsh_Fir_reg_n1_1;  // n1
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_cnt;  // cnt
  SEXP Rsh_Fir_reg_cnt1_;  // cnt1
  SEXP Rsh_Fir_reg_h1_1;  // h1
  SEXP Rsh_Fir_reg_h2_1;  // h2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_h1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st h = h
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_h1, RHO);
  (void)(Rsh_Fir_reg_h1);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
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
  return Rsh_Fir_reg_r1_;

L1_:;
  // C_bw_ucv = ld C_bw_ucv
  Rsh_Fir_reg_C_bw_ucv = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<sym C_bw_ucv>, <sym n>, <sym d>, <sym cnt>, <sym h>)
  SEXP Rsh_Fir_array_args107[5];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args107[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args107[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args107[4] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 5, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 1 [C_bw_ucv]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_C_bw_ucv;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L3_:;
  // C_bw_ucv1 = force? C_bw_ucv
  Rsh_Fir_reg_C_bw_ucv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_bw_ucv);
  // checkMissing(C_bw_ucv1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_C_bw_ucv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n1 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 2 [C_bw_ucv1, n]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_C_bw_ucv1_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_n1;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L4_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_n1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 3 [C_bw_ucv1, n1, d]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_C_bw_ucv1_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L5_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // cnt = ld cnt
  Rsh_Fir_reg_cnt = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 4 [C_bw_ucv1, n1, d1, cnt]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_C_bw_ucv1_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_d1_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_cnt;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L6_:;
  // cnt1 = force? cnt
  Rsh_Fir_reg_cnt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cnt);
  // checkMissing(cnt1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_cnt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // h1 = ld h
  Rsh_Fir_reg_h1_1 = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 5 [C_bw_ucv1, n1, d1, cnt1, h1]
  SEXP Rsh_Fir_array_deopt_stack38[5];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_C_bw_ucv1_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_d1_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_cnt1_;
  Rsh_Fir_array_deopt_stack38[4] = Rsh_Fir_reg_h1_1;
  Rsh_Fir_deopt(5, 5, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L7_:;
  // h2 = force? h1
  Rsh_Fir_reg_h2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_h1_1);
  // checkMissing(h2)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_h2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // vargs = dots[n1, d1, cnt1, h2]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n1_1;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_d1_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_cnt1_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_h2_1;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_bw_ucv1, vargs, <missing>)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_C_bw_ucv1_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args113[2] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
