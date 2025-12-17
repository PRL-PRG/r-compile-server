#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3531894330_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3531894330_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3531894330_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3531894330_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3531894330_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3531894330_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner3531894330
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3531894330_, RHO, CCP);
  // st `spec.taper` = r
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
SEXP Rsh_Fir_user_function_inner3531894330_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3531894330 dynamic dispatch ([x, p])

  return Rsh_Fir_user_version_inner3531894330_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3531894330_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3531894330 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3531894330/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p_isMissing;  // p_isMissing
  SEXP Rsh_Fir_reg_p_orDefault;  // p_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_attributes;  // attributes
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_nc;  // nc
  SEXP Rsh_Fir_reg_nc1_;  // nc1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_nc2_;  // nc2
  SEXP Rsh_Fir_reg_nc3_;  // nc3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_nr;  // nr
  SEXP Rsh_Fir_reg_nr1_;  // nr1
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_nr3_;  // nr3
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_nr5_;  // nr5
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_nr6_;  // nr6
  SEXP Rsh_Fir_reg_nr7_;  // nr7
  SEXP Rsh_Fir_reg_m6_;  // m6
  SEXP Rsh_Fir_reg_m7_;  // m7
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_rev;  // rev
  SEXP Rsh_Fir_reg_w2_;  // w2
  SEXP Rsh_Fir_reg_w3_;  // w3
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_attributes__;  // attributes__
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_p = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // p_isMissing = missing.0(p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  Rsh_Fir_reg_p_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if p_isMissing then L0(0.1) else L0(p)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_p_isMissing)) {
  // L0(0.1)
    Rsh_Fir_reg_p_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(p)
    Rsh_Fir_reg_p_orDefault = Rsh_Fir_reg_p;
    goto L0_;
  }

L0_:;
  // st p = p_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_p_orDefault, RHO);
  (void)(Rsh_Fir_reg_p_orDefault);
  // sym = ldf any
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf any in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L2(c) else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L29()
    goto L29_;
  }

L2_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c9 then L35() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L35()
    goto L35_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // c6 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L2(c7)
  // L2(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf attributes
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf attributes in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L6_:;
  // st a = r11
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

L7_:;
  // r20 = `==`(r18, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c10 then L51() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L51()
    goto L51_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L9_:;
  // st p = r22
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L64() else D19()
  // L64()
  goto L64_;

L11_:;
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

L12_:;
  // goto L10()
  // L10()
  goto L10_;

L13_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // c12 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if c12 then L67() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L67()
    goto L67_;
  } else {
  // L24()
    goto L24_;
  }

L14_:;
  // st m = r34
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L76() else D25()
  // L76()
  goto L76_;

L15_:;
  // r36 = `*`(nr5, dx1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_nr5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // r37 = floor(r36)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L14(i11, r37)
  // L14(i11, r37)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r37_;
  goto L14_;

L16_:;
  // sym7 = ldf cos
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf cos in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard7 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L18_:;
  // r66 = `-`(r46, r47)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // r67 = `*`(r45, r66)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st w = r67
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard9 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L19_:;
  // r62 = `*`(r57, r58)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L86() else D28()
  // L86()
  goto L86_;

L20_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L98() else D36()
  // L98()
  goto L98_;

L21_:;
  // rev = ldf rev
  Rsh_Fir_reg_rev = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L95() else D33()
  // L95()
  goto L95_;

L22_:;
  // r83 = `*`(r81, dx3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c17 = `is.object`(l1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c17 then L103() else L104(i33, r83, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L103()
    goto L103_;
  } else {
  // L104(i33, r83, l1)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r83_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L104_;
  }

L23_:;
  // st x = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L13(i39)
  // L13(i39)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i39_;
  goto L13_;

L24_:;
  // x9 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_x9_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // st i = x9
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_x9_, RHO);
  (void)(Rsh_Fir_reg_x9_);
  // sym6 = ldf floor
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base6 = ldf floor in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard6 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L25_:;
  // p1 = ld p
  Rsh_Fir_reg_p1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L26_:;
  // r = dyn base(<lang `<`(p, 0.0)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [p1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L27_:;
  // p2 = force? p1
  Rsh_Fir_reg_p2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r2 = `<`(p2, 0.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r3 = dyn any(r2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

D1_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L1_;

L29_:;
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

L31_:;
  // r4 = dyn base1(<lang `>`(p, 0.5)>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(c, r4)
  // L3(c, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

D2_:;
  // deopt 10 [c, p3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r6 = `>`(p4, 0.5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r7 = dyn any1(r6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

D3_:;
  // deopt 15 [c, r7]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L3(c, r7)
  // L3(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r7_;
  goto L3_;

L35_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r8 = dyn stop("'p' must be between 0 and 0.5")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

D5_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L5()
  // L5()
  goto L5_;

L39_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

L40_:;
  // r10 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

D6_:;
  // deopt 25 [x1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L41_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r12 = dyn attributes(x2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

D7_:;
  // deopt 28 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L6_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p5 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3531894330_, CCP, RHO);
  // r14 = dyn as_matrix(p5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

D9_:;
  // deopt 33 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // st x = r14
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p6 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3531894330_1, CCP, RHO);
  // r16 = dyn ncol(p6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D11_:;
  // deopt 38 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // st nc = r16
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

L48_:;
  // r17 = dyn base3(<sym p>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L7_;

D12_:;
  // deopt 42 [p7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r19 = dyn length(p8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

D13_:;
  // deopt 45 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L7(r19)
  // L7(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L7_;

L51_:;
  // sym4 = ldf rep
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf rep in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r23 = dyn rep(<sym p>, <sym nc>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L9_;

L53_:;
  // r21 = dyn base4(<sym p>, <sym nc>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r21)
  // L9(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L9_;

L55_:;
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

L56_:;
  // r25 = dyn base5(<sym p>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

D14_:;
  // deopt 54 [p9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L57_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r27 = dyn length1(p10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

D15_:;
  // deopt 57 [r27]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L11_;

D16_:;
  // deopt 57 [r26, nc]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L59_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r28 = `!=`(r26, nc1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c11 then L60() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L60()
    goto L60_;
  } else {
  // L12()
    goto L12_;
  }

L60_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

D17_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // r29 = dyn stop1("length of 'p' must be 1 or equal the number of columns of 'x'")
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

D18_:;
  // deopt 63 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L10()
  // L10()
  goto L10_;

D19_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // p11 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3531894330_2, CCP, RHO);
  // r31 = dyn nrow(p11)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L65() else D20()
  // L65()
  goto L65_;

D20_:;
  // deopt 69 [r31]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // st nr = r31
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L66() else D21()
  // L66()
  goto L66_;

D21_:;
  // deopt 72 [1, nc2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_nc2_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r32 = `:`(1, nc3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_nc3_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // s = toForSeq(r32)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 31);
  // goto L13(i)
  // L13(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L13_;

L67_:;
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L107() else D39()
  // L107()
  goto L107_;

L68_:;
  // nr = ld nr
  Rsh_Fir_reg_nr = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L70() else D22()
  // L70()
  goto L70_;

L69_:;
  // r33 = dyn base6(<lang `*`(nr, `[`(p, i))>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(i2, r33)
  // L14(i2, r33)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L14_;

D22_:;
  // deopt 76 [i2, nr]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_nr;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L70_:;
  // nr1 = force? nr
  Rsh_Fir_reg_nr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr);
  // checkMissing(nr1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_nr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // p12 = ld p
  Rsh_Fir_reg_p12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L71() else D23()
  // L71()
  goto L71_;

D23_:;
  // deopt 77 [i2, nr1, p12]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_nr1_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_p12_;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // p13 = force? p12
  Rsh_Fir_reg_p13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p12_);
  // checkMissing(p13)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(p13)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c13 then L72() else L73(i2, nr1, p13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L72()
    goto L72_;
  } else {
  // L73(i2, nr1, p13)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_nr3_ = Rsh_Fir_reg_nr1_;
    Rsh_Fir_reg_p15_ = Rsh_Fir_reg_p13_;
    goto L73_;
  }

L72_:;
  // dr = tryDispatchBuiltin.1("[", p13)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc then L74() else L73(i2, nr1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L74()
    goto L74_;
  } else {
  // L73(i2, nr1, dr)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_nr3_ = Rsh_Fir_reg_nr1_;
    Rsh_Fir_reg_p15_ = Rsh_Fir_reg_dr;
    goto L73_;
  }

L73_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

L74_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L15(i2, nr1, dx)
  // L15(i2, nr1, dx)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_nr5_ = Rsh_Fir_reg_nr1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

D24_:;
  // deopt 79 [i9, nr3, p15, i12]
  SEXP Rsh_Fir_array_deopt_stack19[4];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_nr3_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(79, 4, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r35 = dyn __(p15, i13)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(i9, nr3, r35)
  // L15(i9, nr3, r35)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_nr5_ = Rsh_Fir_reg_nr3_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r35_;
  goto L15_;

D25_:;
  // deopt 85 [i7, m]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L76_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r38 = `==`(m1, 0.0)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c14 then L77() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L77()
    goto L77_;
  } else {
  // L16()
    goto L16_;
  }

L77_:;
  // goto L13(i7)
  // L13(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L13_;

L80_:;
  // sym8 = ldf `seq.int`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base8 = ldf `seq.int` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard8 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L81_:;
  // r44 = dyn base7(<lang `/`(`*`(pi, seq.int(1.0, `-`(`*`(2.0, m), 1.0), by=2.0)), `(`(`*`(2.0, m)))>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(i7, 0.5, 1.0, r44)
  // L18(i7, 0.5, 1.0, r44)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r45_ = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r46_ = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r44_;
  goto L18_;

L82_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L84() else D26()
  // L84()
  goto L84_;

L83_:;
  // r54 = dyn base8[, , by](1.0, <lang `-`(`*`(2.0, m), 1.0)>, 2.0)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args73[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(i7, 0.5, 1.0, 3.141592653589793, r54)
  // L19(i7, 0.5, 1.0, 3.141592653589793, r54)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r56_ = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r57_ = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r54_;
  goto L19_;

D26_:;
  // deopt 101 [i7, 0.5, 1.0, 3.141592653589793, 2.0, m2]
  SEXP Rsh_Fir_array_deopt_stack21[6];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack21[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_deopt_stack21[3] = Rsh_const(CCP, 41);
  Rsh_Fir_array_deopt_stack21[4] = Rsh_const(CCP, 39);
  Rsh_Fir_array_deopt_stack21[5] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(101, 6, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L84_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r59 = `*`(2.0, m3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // r60 = `-`(r59, 1.0)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r61 = dyn seq_int(1.0, r60, 2.0)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L85() else D27()
  // L85()
  goto L85_;

D27_:;
  // deopt 109 [i7, 0.5, 1.0, 3.141592653589793, r61]
  SEXP Rsh_Fir_array_deopt_stack22[5];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack22[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_deopt_stack22[3] = Rsh_const(CCP, 41);
  Rsh_Fir_array_deopt_stack22[4] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(109, 5, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L19(i7, 0.5, 1.0, 3.141592653589793, r61)
  // L19(i7, 0.5, 1.0, 3.141592653589793, r61)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r56_ = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r57_ = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r61_;
  goto L19_;

D28_:;
  // deopt 111 [i23, r55, r56, r62, 2.0, m4]
  SEXP Rsh_Fir_array_deopt_stack23[6];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack23[4] = Rsh_const(CCP, 39);
  Rsh_Fir_array_deopt_stack23[5] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(111, 6, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L86_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r63 = `*`(2.0, m5)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_m5_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // r64 = `/`(r62, r63)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // r65 = cos(r64)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(175, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L18(i23, r55, r56, r65)
  // L18(i23, r55, r56, r65)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r65_;
  goto L18_;

L87_:;
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L89() else D29()
  // L89()
  goto L89_;

L88_:;
  // r68 = dyn base9(<sym w>, <lang rep_len(1.0, `-`(nr, `*`(2.0, m)))>, <lang rev(w)>)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(i20, r68)
  // L20(i20, r68)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L20_;

D29_:;
  // deopt 121 [i20, w]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_w;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L89_:;
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // sym10 = ldf rep_len
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base10 = ldf rep_len in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard10 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L90_:;
  // nr6 = ld nr
  Rsh_Fir_reg_nr6_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

L91_:;
  // r70 = dyn base10(1.0, <lang `-`(nr, `*`(2.0, m))>)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(i20, r70)
  // L21(i20, r70)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L21_;

D30_:;
  // deopt 126 [i20, nr6]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_nr6_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L92_:;
  // nr7 = force? nr6
  Rsh_Fir_reg_nr7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr6_);
  // checkMissing(nr7)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_nr7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

D31_:;
  // deopt 128 [i20, nr7, 2.0, m6]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_nr7_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_m6_;
  Rsh_Fir_deopt(128, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L93_:;
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // r72 = `*`(2.0, m7)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_m7_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // r73 = `-`(nr7, r72)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_nr7_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r74 = dyn rep_len(1.0, r73)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L94() else D32()
  // L94()
  goto L94_;

D32_:;
  // deopt 133 [i20, r74]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(133, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L21(i20, r74)
  // L21(i20, r74)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r74_;
  goto L21_;

D33_:;
  // deopt 135 [i29]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L95_:;
  // p16 = prom<V +>{
  //   w2 = ld w;
  //   w3 = force? w2;
  //   checkMissing(w3);
  //   return w3;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3531894330_3, CCP, RHO);
  // r76 = dyn rev(p16)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L96() else D34()
  // L96()
  goto L96_;

D34_:;
  // deopt 137 [i29, r76]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(137, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L96_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r77 = dyn c15(w1, r71, r76)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_w1_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L97() else D35()
  // L97()
  goto L97_;

D35_:;
  // deopt 139 [i29, r77]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L20(i29, r77)
  // L20(i29, r77)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r77_;
  goto L20_;

D36_:;
  // deopt 139 [i26, r69, x10]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(139, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L98_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(x11)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if c16 then L99() else L100(i26, r69, x11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L99()
    goto L99_;
  } else {
  // L100(i26, r69, x11)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x11_;
    goto L100_;
  }

L99_:;
  // dr2 = tryDispatchBuiltin.1("[", x11)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc1 then L101() else L100(i26, r69, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L101()
    goto L101_;
  } else {
  // L100(i26, r69, dr2)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_dr2_;
    goto L100_;
  }

L100_:;
  // i34 = ld i
  Rsh_Fir_reg_i34_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L102() else D37()
  // L102()
  goto L102_;

L101_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L22(i26, r69, dx2)
  // L22(i26, r69, dx2)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L22_;

D37_:;
  // deopt 142 [i31, r79, x13, i34]
  SEXP Rsh_Fir_array_deopt_stack32[4];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_i34_;
  Rsh_Fir_deopt(142, 4, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L102_:;
  // i35 = force? i34
  Rsh_Fir_reg_i35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i34_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r82 = dyn __1(x11, <missing>, i35)
  SEXP Rsh_Fir_array_args99[3];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args99[2] = Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L22(i31, r79, r82)
  // L22(i31, r79, r82)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r82_;
  goto L22_;

L103_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l1, r83)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args100);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc2 then L105() else L104(i33, r83, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L105()
    goto L105_;
  } else {
  // L104(i33, r83, dr4)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r83_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr4_;
    goto L104_;
  }

L104_:;
  // i40 = ld i
  Rsh_Fir_reg_i40_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L106() else D38()
  // L106()
  goto L106_;

L105_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L23(i33, dx4)
  // L23(i33, dx4)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L23_;

D38_:;
  // deopt 149 [i37, r85, l3, r83, i40]
  SEXP Rsh_Fir_array_deopt_stack33[5];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_deopt_stack33[4] = Rsh_Fir_reg_i40_;
  Rsh_Fir_deopt(149, 5, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L106_:;
  // i41 = force? i40
  Rsh_Fir_reg_i41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i40_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r88 = dyn ___(l1, <missing>, i41, r83)
  SEXP Rsh_Fir_array_args103[4];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_args103[3] = Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L23(i37, r88)
  // L23(i37, r88)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r88_;
  goto L23_;

D39_:;
  // deopt 157 [a]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L107_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // l4 = ld x
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L108() else D40()
  // L108()
  goto L108_;

D40_:;
  // deopt 160 [a1, l4, a1]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_a1_;
  Rsh_Fir_deopt(160, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L108_:;
  // r89 = dyn attributes__(l4, NULL, a1)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L109() else D41()
  // L109()
  goto L109_;

D41_:;
  // deopt 162 [a1, r89]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(162, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L109_:;
  // st x = r89
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L110() else D42()
  // L110()
  goto L110_;

D42_:;
  // deopt 164 [x14]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L110_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_inner3531894330_(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner3531894330_1(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner3531894330_2(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner3531894330_3(SEXP CCP, SEXP RHO) {
  // w2 = ld w
  Rsh_Fir_reg_w2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // w3 = force? w2
  Rsh_Fir_reg_w3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w2_);
  // checkMissing(w3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_w3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return w3
  return Rsh_Fir_reg_w3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
