#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2152688913_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2152688913_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2152688913_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2152688913_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner2152688913
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2152688913_, RHO, CCP);
  // st `plot.function` = r
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
SEXP Rsh_Fir_user_function_inner2152688913_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2152688913 dynamic dispatch ([x, y, to, from, xlim, ylab, `...`])

  return Rsh_Fir_user_version_inner2152688913_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2152688913_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2152688913 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner2152688913/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_to;  // to
  SEXP Rsh_Fir_reg_from;  // from
  SEXP Rsh_Fir_reg_xlim;  // xlim
  SEXP Rsh_Fir_reg_ylab;  // ylab
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_y_isMissing;  // y_isMissing
  SEXP Rsh_Fir_reg_y_orDefault;  // y_orDefault
  SEXP Rsh_Fir_reg_to_isMissing;  // to_isMissing
  SEXP Rsh_Fir_reg_to_orDefault;  // to_orDefault
  SEXP Rsh_Fir_reg_from_isMissing;  // from_isMissing
  SEXP Rsh_Fir_reg_from_orDefault;  // from_orDefault
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_xlim_isMissing;  // xlim_isMissing
  SEXP Rsh_Fir_reg_xlim_orDefault;  // xlim_orDefault
  SEXP Rsh_Fir_reg_ylab_isMissing;  // ylab_isMissing
  SEXP Rsh_Fir_reg_ylab_orDefault;  // ylab_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_xlim1_;  // xlim1
  SEXP Rsh_Fir_reg_xlim2_;  // xlim2
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_from1_;  // from1
  SEXP Rsh_Fir_reg_from2_;  // from2
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_missing2_;  // missing2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_xlim3_;  // xlim3
  SEXP Rsh_Fir_reg_xlim4_;  // xlim4
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_xlim6_;  // xlim6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_missing3_;  // missing3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_xlim7_;  // xlim7
  SEXP Rsh_Fir_reg_xlim8_;  // xlim8
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_xlim10_;  // xlim10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_ylab1_;  // ylab1
  SEXP Rsh_Fir_reg_ylab2_;  // ylab2
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_deparse;  // deparse
  SEXP Rsh_Fir_reg_sx;  // sx
  SEXP Rsh_Fir_reg_sx1_;  // sx1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_xname;  // xname
  SEXP Rsh_Fir_reg_xname1_;  // xname1
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_sx2_;  // sx2
  SEXP Rsh_Fir_reg_sx3_;  // sx3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_xname2_;  // xname2
  SEXP Rsh_Fir_reg_xname3_;  // xname3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_curve;  // curve
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_from3_;  // from3
  SEXP Rsh_Fir_reg_from4_;  // from4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_to1_;  // to1
  SEXP Rsh_Fir_reg_to2_;  // to2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_xlim11_;  // xlim11
  SEXP Rsh_Fir_reg_xlim12_;  // xlim12
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_ylab3_;  // ylab3
  SEXP Rsh_Fir_reg_ylab4_;  // ylab4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r52_;  // r52

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_to = PARAMS[2];
  Rsh_Fir_reg_from = PARAMS[3];
  Rsh_Fir_reg_xlim = PARAMS[4];
  Rsh_Fir_reg_ylab = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if y_isMissing then L0(0.0) else L0(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_y_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L0_;
  }

L0_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // to_isMissing = missing.0(to)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_to;
  Rsh_Fir_reg_to_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if to_isMissing then L1(1.0) else L1(to)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_to_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_to_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(to)
    Rsh_Fir_reg_to_orDefault = Rsh_Fir_reg_to;
    goto L1_;
  }

L1_:;
  // st to = to_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_to_orDefault, RHO);
  (void)(Rsh_Fir_reg_to_orDefault);
  // from_isMissing = missing.0(from)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_from;
  Rsh_Fir_reg_from_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if from_isMissing then L2() else L3(from)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_from_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(from)
    Rsh_Fir_reg_from_orDefault = Rsh_Fir_reg_from;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_from_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st from = from_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_from_orDefault, RHO);
  (void)(Rsh_Fir_reg_from_orDefault);
  // xlim_isMissing = missing.0(xlim)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_xlim;
  Rsh_Fir_reg_xlim_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if xlim_isMissing then L4(NULL) else L4(xlim)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlim_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_xlim_orDefault = Rsh_const(CCP, 7);
    goto L4_;
  } else {
  // L4(xlim)
    Rsh_Fir_reg_xlim_orDefault = Rsh_Fir_reg_xlim;
    goto L4_;
  }

L4_:;
  // st xlim = xlim_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_xlim_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlim_orDefault);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if ylab_isMissing then L5(NULL) else L5(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L5(NULL)
    Rsh_Fir_reg_ylab_orDefault = Rsh_const(CCP, 7);
    goto L5_;
  } else {
  // L5(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L5_;
  }

L5_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L6_:;
  // r4 = `!`(r2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L38() else L7(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L38()
    goto L38_;
  } else {
  // L7(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L7_;
  }

L7_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c9 then L42() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L42()
    goto L42_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // c6 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L7(c7)
  // L7(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L7_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L11_:;
  // c11 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c11 then L48() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L48()
    goto L48_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard4 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L13_:;
  // c13 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c13 then L52() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L52()
    goto L52_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15(NULL)
  // L15(NULL)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 7);
  goto L15_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard6 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L17_:;
  // c14 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c14 then L57() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L57()
    goto L57_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L20()
  // L20()
  goto L20_;

L19_:;
  // st from = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L21_:;
  // c16 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c16 then L65() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L65()
    goto L65_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L16()
  // L16()
  goto L16_;

L23_:;
  // st to = dx4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // goto L16()
  // L16()
  goto L16_;

L24_:;
  // c19 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c19 then L74() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L74()
    goto L74_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L35()
  // L35()
  goto L35_;

L26_:;
  // st sx = r25
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L77() else D6()
  // L77()
  goto L77_;

L27_:;
  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard8 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L28_:;
  // goto L29(dx6)
  // L29(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L29_;

L29_:;
  // st ylab = dx7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L35()
  // L35()
  goto L35_;

L30_:;
  // c22 = `is.object`(r36)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c22 then L90() else L91(r36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L90()
    goto L90_;
  } else {
  // L91(r36)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r36_;
    goto L91_;
  }

L31_:;
  // st xname = dx9
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym9 = ldf `is.null`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base9 = ldf `is.null` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard9 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L32_:;
  // c24 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c24 then L96() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L96()
    goto L96_;
  } else {
  // L33()
    goto L33_;
  }

L33_:;
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L98() else D13()
  // L98()
  goto L98_;

L35_:;
  // curve = ldf curve
  Rsh_Fir_reg_curve = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L101() else D15()
  // L101()
  goto L101_;

L36_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r3 = dyn missing(<sym y>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L6(r3)
  // L6(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L6_;

L37_:;
  // r1 = dyn base(<sym y>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L6(r1)
  // L6(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L6_;

L38_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r7 = dyn missing1(<sym from>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L8(c, r7)
  // L8(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L8_;

L40_:;
  // r5 = dyn base1(<sym from>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L8(c, r5)
  // L8(c, r5)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L8_;

L42_:;
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L43() else D0()
  // L43()
  goto L43_;

D0_:;
  // deopt 8 [y3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L43_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // st from = y4
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_y4_, RHO);
  (void)(Rsh_Fir_reg_y4_);
  // goto L10()
  // L10()
  goto L10_;

L45_:;
  // xlim1 = ld xlim
  Rsh_Fir_reg_xlim1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L47() else D1()
  // L47()
  goto L47_;

L46_:;
  // r8 = dyn base2(<sym xlim>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L11(r8)
  // L11(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L11_;

D1_:;
  // deopt 14 [xlim1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_xlim1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L47_:;
  // xlim2 = force? xlim1
  Rsh_Fir_reg_xlim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim1_);
  // checkMissing(xlim2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_xlim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c10 = `==`(xlim2, NULL)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_xlim2_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L11(c10)
  // L11(c10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c10_;
  goto L11_;

L48_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard3 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // from1 = ld from
  Rsh_Fir_reg_from1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L51() else D2()
  // L51()
  goto L51_;

L50_:;
  // r10 = dyn base3(<sym from>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L13(r10)
  // L13(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L13_;

D2_:;
  // deopt 18 [from1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_from1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L51_:;
  // from2 = force? from1
  Rsh_Fir_reg_from2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from1_);
  // checkMissing(from2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_from2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c12 = `==`(from2, NULL)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_from2_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L13(c12)
  // L13(c12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c12_;
  goto L13_;

L52_:;
  // st from = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // goto L15(0.0)
  // L15(0.0)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 2);
  goto L15_;

L55_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r16 = dyn missing2(<sym from>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L17(r16)
  // L17(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L17_;

L56_:;
  // r14 = dyn base4(<sym from>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L17(r14)
  // L17(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L17_;

L57_:;
  // xlim3 = ld xlim
  Rsh_Fir_reg_xlim3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L58() else D3()
  // L58()
  goto L58_;

D3_:;
  // deopt 29 [xlim3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_xlim3_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L58_:;
  // xlim4 = force? xlim3
  Rsh_Fir_reg_xlim4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim3_);
  // checkMissing(xlim4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_xlim4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(xlim4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_xlim4_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c15 then L59() else L60(xlim4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L59()
    goto L59_;
  } else {
  // L60(xlim4)
    Rsh_Fir_reg_xlim6_ = Rsh_Fir_reg_xlim4_;
    goto L60_;
  }

L59_:;
  // dr = tryDispatchBuiltin.1("[", xlim4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_xlim4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc then L61() else L60(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L61()
    goto L61_;
  } else {
  // L60(dr)
    Rsh_Fir_reg_xlim6_ = Rsh_Fir_reg_dr;
    goto L60_;
  }

L60_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r17 = dyn __(xlim6, 1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_xlim6_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L19(r17)
  // L19(r17)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L19_;

L61_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L19(dx)
  // L19(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L19_;

L63_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r20 = dyn missing3(<sym to>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L21(r20)
  // L21(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L21_;

L64_:;
  // r18 = dyn base5(<sym to>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L21(r18)
  // L21(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L21_;

L65_:;
  // xlim7 = ld xlim
  Rsh_Fir_reg_xlim7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L66() else D4()
  // L66()
  goto L66_;

D4_:;
  // deopt 40 [xlim7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_xlim7_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L66_:;
  // xlim8 = force? xlim7
  Rsh_Fir_reg_xlim8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim7_);
  // checkMissing(xlim8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_xlim8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(xlim8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_xlim8_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c17 then L67() else L68(xlim8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L67()
    goto L67_;
  } else {
  // L68(xlim8)
    Rsh_Fir_reg_xlim10_ = Rsh_Fir_reg_xlim8_;
    goto L68_;
  }

L67_:;
  // dr2 = tryDispatchBuiltin.1("[", xlim8)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_xlim8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc1 then L69() else L68(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L69()
    goto L69_;
  } else {
  // L68(dr2)
    Rsh_Fir_reg_xlim10_ = Rsh_Fir_reg_dr2_;
    goto L68_;
  }

L68_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r21 = dyn __1(xlim10, 2)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_xlim10_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L23(r21)
  // L23(r21)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r21_;
  goto L23_;

L69_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L23(dx3)
  // L23(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L23_;

L71_:;
  // ylab1 = ld ylab
  Rsh_Fir_reg_ylab1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L73() else D5()
  // L73()
  goto L73_;

L72_:;
  // r22 = dyn base6(<sym ylab>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L24(r22)
  // L24(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L24_;

D5_:;
  // deopt 49 [ylab1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ylab1_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L73_:;
  // ylab2 = force? ylab1
  Rsh_Fir_reg_ylab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab1_);
  // checkMissing(ylab2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ylab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c18 = `==`(ylab2, NULL)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ylab2_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L24(c18)
  // L24(c18)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_c18_;
  goto L24_;

L74_:;
  // sym7 = ldf substitute
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf substitute in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard7 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L75_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r26 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L26(r26)
  // L26(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L26_;

L76_:;
  // r24 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L26(r24)
  // L26(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L26_;

D6_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_1, CCP, RHO);
  // r28 = dyn mode(p1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L78() else D7()
  // L78()
  goto L78_;

D7_:;
  // deopt 59 [r28]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L78_:;
  // r29 = `!=`(r28, "name")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c20 then L79() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L79()
    goto L79_;
  } else {
  // L27()
    goto L27_;
  }

L79_:;
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L80() else D8()
  // L80()
  goto L80_;

D8_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p2 = prom<V +>{
  //   sx = ld sx;
  //   sx1 = force? sx;
  //   checkMissing(sx1);
  //   return sx1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_2, CCP, RHO);
  // r31 = dyn deparse(p2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L81() else D9()
  // L81()
  goto L81_;

D9_:;
  // deopt 65 [r31]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L81_:;
  // c21 = `is.object`(r31)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c21 then L82() else L83(r31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L82()
    goto L82_;
  } else {
  // L83(r31)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
    goto L83_;
  }

L82_:;
  // dr4 = tryDispatchBuiltin.1("[", r31)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc2 then L84() else L83(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L84()
    goto L84_;
  } else {
  // L83(dr4)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_dr4_;
    goto L83_;
  }

L83_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r34 = dyn __2(r33, 1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L28(r34)
  // L28(r34)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r34_;
  goto L28_;

L84_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L28(dx5)
  // L28(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L28_;

L86_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L88() else D10()
  // L88()
  goto L88_;

L87_:;
  // r35 = dyn base8(<sym ...>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L30(r35)
  // L30(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L30_;

D10_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // r37 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L89() else D11()
  // L89()
  goto L89_;

D11_:;
  // deopt 73 [r37]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L30(r37)
  // L30(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L30_;

L90_:;
  // dr6 = tryDispatchBuiltin.1("[[", r36)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc3 then L92() else L91(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L92()
    goto L92_;
  } else {
  // L91(dr6)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_dr6_;
    goto L91_;
  }

L91_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r40 = dyn __3(r39, "xname")
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L31(r40)
  // L31(r40)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r40_;
  goto L31_;

L92_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L31(dx8)
  // L31(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L31_;

L93_:;
  // xname = ld xname
  Rsh_Fir_reg_xname = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L95() else D12()
  // L95()
  goto L95_;

L94_:;
  // r41 = dyn base9(<sym xname>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L32(r41)
  // L32(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L32_;

D12_:;
  // deopt 79 [xname]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_xname;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L95_:;
  // xname1 = force? xname
  Rsh_Fir_reg_xname1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xname);
  // checkMissing(xname1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_xname1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c23 = `==`(xname1, NULL)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_xname1_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L32(c23)
  // L32(c23)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_c23_;
  goto L32_;

L96_:;
  // st xname = "x"
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_const(CCP, 29), RHO);
  (void)(Rsh_const(CCP, 29));
  // goto L34()
  // L34()
  goto L34_;

D13_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L98_:;
  // p3 = prom<V +>{
  //   sx2 = ld sx;
  //   sx3 = force? sx2;
  //   checkMissing(sx3);
  //   return sx3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_3, CCP, RHO);
  // p4 = prom<V +>{
  //   xname2 = ld xname;
  //   xname3 = force? xname2;
  //   checkMissing(xname3);
  //   return xname3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_4, CCP, RHO);
  // r46 = dyn paste0(p3, "(", p4, ")")
  SEXP Rsh_Fir_array_args82[4];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args82[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 4, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L99() else D14()
  // L99()
  goto L99_;

D14_:;
  // deopt 93 [r46]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L29(r46)
  // L29(r46)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r46_;
  goto L29_;

D15_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // p5 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_5, CCP, RHO);
  // p6 = prom<V +>{
  //   from3 = ld from;
  //   from4 = force? from3;
  //   checkMissing(from4);
  //   return from4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_6, CCP, RHO);
  // p7 = prom<V +>{
  //   to1 = ld to;
  //   to2 = force? to1;
  //   checkMissing(to2);
  //   return to2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_7, CCP, RHO);
  // p8 = prom<V +>{
  //   xlim11 = ld xlim;
  //   xlim12 = force? xlim11;
  //   checkMissing(xlim12);
  //   return xlim12;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_8, CCP, RHO);
  // p9 = prom<V +>{
  //   ylab3 = ld ylab;
  //   ylab4 = force? ylab3;
  //   checkMissing(ylab4);
  //   return ylab4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2152688913_9, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // r52 = dyn curve[expr, from, to, xlim, ylab, `...`](p5, p6, p7, p8, p9, ddd2)
  SEXP Rsh_Fir_array_args88[6];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args88[3] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args88[4] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args88[5] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names23[6];
  Rsh_Fir_array_arg_names23[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names23[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names23[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names23[5] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_curve, 6, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L102() else D16()
  // L102()
  goto L102_;

D16_:;
  // deopt 110 [r52]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L102_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r52
  return Rsh_Fir_reg_r52_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_(SEXP CCP, SEXP RHO) {
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_2(SEXP CCP, SEXP RHO) {
  // sx = ld sx
  Rsh_Fir_reg_sx = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // sx1 = force? sx
  Rsh_Fir_reg_sx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sx);
  // checkMissing(sx1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return sx1
  return Rsh_Fir_reg_sx1_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_3(SEXP CCP, SEXP RHO) {
  // sx2 = ld sx
  Rsh_Fir_reg_sx2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // sx3 = force? sx2
  Rsh_Fir_reg_sx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sx2_);
  // checkMissing(sx3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return sx3
  return Rsh_Fir_reg_sx3_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_4(SEXP CCP, SEXP RHO) {
  // xname2 = ld xname
  Rsh_Fir_reg_xname2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // xname3 = force? xname2
  Rsh_Fir_reg_xname3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xname2_);
  // checkMissing(xname3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_xname3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return xname3
  return Rsh_Fir_reg_xname3_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_5(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_6(SEXP CCP, SEXP RHO) {
  // from3 = ld from
  Rsh_Fir_reg_from3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // from4 = force? from3
  Rsh_Fir_reg_from4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from3_);
  // checkMissing(from4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_from4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return from4
  return Rsh_Fir_reg_from4_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_7(SEXP CCP, SEXP RHO) {
  // to1 = ld to
  Rsh_Fir_reg_to1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // to2 = force? to1
  Rsh_Fir_reg_to2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to1_);
  // checkMissing(to2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_to2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return to2
  return Rsh_Fir_reg_to2_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_8(SEXP CCP, SEXP RHO) {
  // xlim11 = ld xlim
  Rsh_Fir_reg_xlim11_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // xlim12 = force? xlim11
  Rsh_Fir_reg_xlim12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim11_);
  // checkMissing(xlim12)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_xlim12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return xlim12
  return Rsh_Fir_reg_xlim12_;
}
SEXP Rsh_Fir_user_promise_inner2152688913_9(SEXP CCP, SEXP RHO) {
  // ylab3 = ld ylab
  Rsh_Fir_reg_ylab3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // ylab4 = force? ylab3
  Rsh_Fir_reg_ylab4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab3_);
  // checkMissing(ylab4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ylab4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return ylab4
  return Rsh_Fir_reg_ylab4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
