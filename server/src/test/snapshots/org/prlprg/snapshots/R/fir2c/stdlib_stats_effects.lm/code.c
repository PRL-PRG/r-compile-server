#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2149446420_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2149446420_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2149446420_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2149446420_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2149446420_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2149446420
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2149446420_, RHO, CCP);
  // st `effects.lm` = r
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
SEXP Rsh_Fir_user_function_inner2149446420_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2149446420 dynamic dispatch ([object, `set.sign`, `...`])

  return Rsh_Fir_user_version_inner2149446420_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2149446420_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2149446420 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2149446420/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_set_sign;  // set_sign
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_set_sign_isMissing;  // set_sign_isMissing
  SEXP Rsh_Fir_reg_set_sign_orDefault;  // set_sign_orDefault
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_eff;  // eff
  SEXP Rsh_Fir_reg_eff1_;  // eff1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_set_sign1_;  // set_sign1
  SEXP Rsh_Fir_reg_set_sign2_;  // set_sign2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_eff2_;  // eff2
  SEXP Rsh_Fir_reg_eff3_;  // eff3
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_dd;  // dd
  SEXP Rsh_Fir_reg_dd1_;  // dd1
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_dd2_;  // dd2
  SEXP Rsh_Fir_reg_dd3_;  // dd3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_eff4_;  // eff4
  SEXP Rsh_Fir_reg_eff5_;  // eff5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_eff7_;  // eff7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dd4_;  // dd4
  SEXP Rsh_Fir_reg_dd5_;  // dd5
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_dd6_;  // dd6
  SEXP Rsh_Fir_reg_dd7_;  // dd7
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_eff8_;  // eff8
  SEXP Rsh_Fir_reg_eff9_;  // eff9
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_eff11_;  // eff11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_abs1_;  // abs1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_structure;  // structure
  SEXP Rsh_Fir_reg_eff12_;  // eff12
  SEXP Rsh_Fir_reg_eff13_;  // eff13
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r80_;  // r80

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_set_sign = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // set_sign_isMissing = missing.0(set_sign)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_set_sign;
  Rsh_Fir_reg_set_sign_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if set_sign_isMissing then L0(FALSE) else L0(set_sign)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_set_sign_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_set_sign_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(set_sign)
    Rsh_Fir_reg_set_sign_orDefault = Rsh_Fir_reg_set_sign;
    goto L0_;
  }

L0_:;
  // st `set.sign` = set_sign_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_set_sign_orDefault, RHO);
  (void)(Rsh_Fir_reg_set_sign_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L1_:;
  // c2 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L28() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L28()
    goto L28_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // set_sign1 = ld `set.sign`
  Rsh_Fir_reg_set_sign1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L4_:;
  // goto L19()
  // L19()
  goto L19_;

L5_:;
  // c4 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c4 then L40() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L40()
    goto L40_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // sym5 = ldf seq_along
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf seq_along in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard5 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L7_:;
  // c5 = `is.object`(r14)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c5 then L45() else L46(r13, r14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L45()
    goto L45_;
  } else {
  // L46(r13, r14)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r14_;
    goto L46_;
  }

L8_:;
  // r23 = `:`(r21, dx3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st r = r23
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym3 = ldf sign
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf sign in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L9_:;
  // sym4 = ldf abs
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf abs in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L10_:;
  // r40 = `*`(r30, r31)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // l = ld eff
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c7 = `is.object`(l)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c7 then L59() else L60(r40, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L59()
    goto L59_;
  } else {
  // L60(r40, l)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r40_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L60_;
  }

L11_:;
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r39 = dyn abs(dx5)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L12_:;
  // st eff = dx7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L13(r44)
  // L13(r44)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r44_;
  goto L13_;

L13_:;
  // goto L19()
  // L19()
  goto L19_;

L14_:;
  // st r = r50
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym6 = ldf sign
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base6 = ldf sign in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard6 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L15_:;
  // sym7 = ldf abs
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf abs in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L16_:;
  // r68 = `*`(r58, r59)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // l3 = ld eff
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c9 = `is.object`(l3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c9 then L78() else L79(r68, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L78()
    goto L78_;
  } else {
  // L79(r68, l3)
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r68_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L79_;
  }

L17_:;
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r67 = dyn abs1(dx9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L77() else D20()
  // L77()
  goto L77_;

L18_:;
  // st eff = dx11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L13(r72)
  // L13(r72)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r72_;
  goto L13_;

L19_:;
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L83() else D22()
  // L83()
  goto L83_;

D0_:;
  // deopt 0 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L22() else L23(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L23(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L23_;
  }

L21_:;
  // st eff = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L22_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L24() else L23(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L23_;
  }

L23_:;
  // r = `$`(object4, <sym effects>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L21(r)
  // L21(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L21_;

L24_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L21(dx)
  // L21(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L21_;

L25_:;
  // eff = ld eff
  Rsh_Fir_reg_eff = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

L26_:;
  // r1 = dyn base(<sym eff>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L1_;

D1_:;
  // deopt 5 [eff]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_eff;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // eff1 = force? eff
  Rsh_Fir_reg_eff1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eff);
  // checkMissing(eff1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_eff1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c1 = `==`(eff1, NULL)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_eff1_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L1(c1)
  // L1(c1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c1_;
  goto L1_;

L28_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // r3 = dyn stop("'object' has no 'effects' component")
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

D3_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L3()
  // L3()
  goto L3_;

D4_:;
  // deopt 14 [set_sign1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_set_sign1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // set_sign2 = force? set_sign1
  Rsh_Fir_reg_set_sign2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_set_sign1_);
  // checkMissing(set_sign2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_set_sign2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(set_sign2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_set_sign2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c3 then L33() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L4()
    goto L4_;
  }

L33_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   return object6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2149446420_, CCP, RHO);
  // r6 = dyn coef(p)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

D6_:;
  // deopt 19 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // st dd = r6
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf `is.matrix`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf `is.matrix` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // eff2 = ld eff
  Rsh_Fir_reg_eff2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

L37_:;
  // r7 = dyn base1(<sym eff>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

D7_:;
  // deopt 23 [eff2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_eff2_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L38_:;
  // eff3 = force? eff2
  Rsh_Fir_reg_eff3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eff2_);
  // checkMissing(eff3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_eff3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r9 = dyn is_matrix(eff3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_eff3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

D8_:;
  // deopt 26 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L5_;

L40_:;
  // sym2 = ldf dim
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf dim in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // dd = ld dd
  Rsh_Fir_reg_dd = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L42_:;
  // r12 = dyn base2(<sym dd>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(1, r12)
  // L7(1, r12)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  goto L7_;

D9_:;
  // deopt 30 [1, dd]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_dd;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // dd1 = force? dd
  Rsh_Fir_reg_dd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd);
  // checkMissing(dd1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r15 = dyn dim(dd1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dd1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D10_:;
  // deopt 33 [1, r15]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L7(1, r15)
  // L7(1, r15)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L45_:;
  // dr2 = tryDispatchBuiltin.1("[", r14)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc1 then L47() else L46(r13, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L47()
    goto L47_;
  } else {
  // L46(r13, dr2)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_dr2_;
    goto L46_;
  }

L46_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r22 = dyn __(r19, 1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r18, r22)
  // L8(r18, r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L8_;

L47_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L8(r13, dx2)
  // L8(r13, dx2)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L48_:;
  // dd2 = ld dd
  Rsh_Fir_reg_dd2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

L49_:;
  // r24 = dyn base3(<sym dd>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r24)
  // L9(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L9_;

D11_:;
  // deopt 40 [dd2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dd2_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // dd3 = force? dd2
  Rsh_Fir_reg_dd3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd2_);
  // checkMissing(dd3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dd3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r26 = sign(dd3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dd3_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(170, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L9_;

L51_:;
  // eff4 = ld eff
  Rsh_Fir_reg_eff4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

L52_:;
  // r29 = dyn base4(<lang `[`(eff, r, )>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r25, r29)
  // L10(r25, r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r29_;
  goto L10_;

D12_:;
  // deopt 44 [r25, eff4]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_eff4_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L53_:;
  // eff5 = force? eff4
  Rsh_Fir_reg_eff5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eff4_);
  // checkMissing(eff5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_eff5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(eff5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_eff5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c6 then L54() else L55(r25, eff5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L54()
    goto L54_;
  } else {
  // L55(r25, eff5)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r25_;
    Rsh_Fir_reg_eff7_ = Rsh_Fir_reg_eff5_;
    goto L55_;
  }

L54_:;
  // dr4 = tryDispatchBuiltin.1("[", eff5)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_eff5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L56() else L55(r25, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L56()
    goto L56_;
  } else {
  // L55(r25, dr4)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r25_;
    Rsh_Fir_reg_eff7_ = Rsh_Fir_reg_dr4_;
    goto L55_;
  }

L55_:;
  // r36 = ld r
  Rsh_Fir_reg_r36_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L56_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L11(r25, dx4)
  // L11(r25, dx4)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L11_;

D13_:;
  // deopt 46 [r33, eff7, r36]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_eff7_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L57_:;
  // r37 = force? r36
  Rsh_Fir_reg_r37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r36_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r38 = dyn __1(eff5, r37, <missing>)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_eff5_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r33, r38)
  // L11(r33, r38)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r38_;
  goto L11_;

D14_:;
  // deopt 52 [r35, r39]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L10(r35, r39)
  // L10(r35, r39)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r39_;
  goto L10_;

L59_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l, r40)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args53);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc3 then L61() else L60(r40, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L61()
    goto L61_;
  } else {
  // L60(r40, dr6)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r40_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L60_;
  }

L60_:;
  // r45 = ld r
  Rsh_Fir_reg_r45_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L61_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L12(r40, dx6)
  // L12(r40, dx6)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L12_;

D15_:;
  // deopt 55 [r42, l2, r40, r45]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(55, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L62_:;
  // r46 = force? r45
  Rsh_Fir_reg_r46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r45_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r47 = dyn ___(l, r46, <missing>, r40)
  SEXP Rsh_Fir_array_args56[4];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args56[3] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L12(r42, r47)
  // L12(r42, r47)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r47_;
  goto L12_;

L64_:;
  // dd4 = ld dd
  Rsh_Fir_reg_dd4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

L65_:;
  // r49 = dyn base5(<sym dd>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L14(r49)
  // L14(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L14_;

D16_:;
  // deopt 62 [dd4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dd4_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L66_:;
  // dd5 = force? dd4
  Rsh_Fir_reg_dd5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd4_);
  // checkMissing(dd5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dd5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r51 = seq_along(dd5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dd5_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L14(r51)
  // L14(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L14_;

L67_:;
  // dd6 = ld dd
  Rsh_Fir_reg_dd6_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L69() else D17()
  // L69()
  goto L69_;

L68_:;
  // r52 = dyn base6(<sym dd>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(r52)
  // L15(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L15_;

D17_:;
  // deopt 67 [dd6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_dd6_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L69_:;
  // dd7 = force? dd6
  Rsh_Fir_reg_dd7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd6_);
  // checkMissing(dd7)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dd7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r54 = sign(dd7)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dd7_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(170, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L15(r54)
  // L15(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L15_;

L70_:;
  // eff8 = ld eff
  Rsh_Fir_reg_eff8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L72() else D18()
  // L72()
  goto L72_;

L71_:;
  // r57 = dyn base7(<lang `[`(eff, r)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L16(r53, r57)
  // L16(r53, r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
  goto L16_;

D18_:;
  // deopt 71 [r53, eff8]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_eff8_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L72_:;
  // eff9 = force? eff8
  Rsh_Fir_reg_eff9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eff8_);
  // checkMissing(eff9)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_eff9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(eff9)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_eff9_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c8 then L73() else L74(r53, eff9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L73()
    goto L73_;
  } else {
  // L74(r53, eff9)
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_eff11_ = Rsh_Fir_reg_eff9_;
    goto L74_;
  }

L73_:;
  // dr8 = tryDispatchBuiltin.1("[", eff9)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_eff9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc4 then L75() else L74(r53, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L75()
    goto L75_;
  } else {
  // L74(r53, dr8)
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_eff11_ = Rsh_Fir_reg_dr8_;
    goto L74_;
  }

L74_:;
  // r64 = ld r
  Rsh_Fir_reg_r64_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L76() else D19()
  // L76()
  goto L76_;

L75_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L17(r53, dx8)
  // L17(r53, dx8)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L17_;

D19_:;
  // deopt 73 [r61, eff11, r64]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_eff11_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(73, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L76_:;
  // r65 = force? r64
  Rsh_Fir_reg_r65_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r64_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r66 = dyn __2(eff11, r65)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_eff11_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(r61, r66)
  // L17(r61, r66)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r66_;
  goto L17_;

D20_:;
  // deopt 77 [r63, r67]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L16(r63, r67)
  // L16(r63, r67)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r67_;
  goto L16_;

L78_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l3, r68)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc5 then L80() else L79(r68, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L80()
    goto L80_;
  } else {
  // L79(r68, dr10)
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r68_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr10_;
    goto L79_;
  }

L79_:;
  // r73 = ld r
  Rsh_Fir_reg_r73_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L81() else D21()
  // L81()
  goto L81_;

L80_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L18(r68, dx10)
  // L18(r68, dx10)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L18_;

D21_:;
  // deopt 80 [r70, l5, r68, r73]
  SEXP Rsh_Fir_array_deopt_stack19[4];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(80, 4, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L81_:;
  // r74 = force? r73
  Rsh_Fir_reg_r74_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r73_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r75 = dyn ___1(l5, r68, r74)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L18(r70, r75)
  // L18(r70, r75)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r75_;
  goto L18_;

D22_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // p1 = prom<V +>{
  //   eff12 = ld eff;
  //   eff13 = force? eff12;
  //   checkMissing(eff13);
  //   return eff13;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2149446420_1, CCP, RHO);
  // p2 = prom<V +>{
  //   object7 = ld object;
  //   object8 = force? object7;
  //   checkMissing(object8);
  //   c10 = `is.object`(object8);
  //   if c10 then L1() else L2(object8);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", object8);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(object10):
  //   r78 = `$`(object10, <sym assign>);
  //   goto L0(r78);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2149446420_2, CCP, RHO);
  // r80 = dyn structure[, assign, class](p1, p2, "coef")
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L84() else D23()
  // L84()
  goto L84_;

D23_:;
  // deopt 93 [r80]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r80
  return Rsh_Fir_reg_r80_;
}
SEXP Rsh_Fir_user_promise_inner2149446420_(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return object6
  return Rsh_Fir_reg_object6_;
}
SEXP Rsh_Fir_user_promise_inner2149446420_1(SEXP CCP, SEXP RHO) {
  // eff12 = ld eff
  Rsh_Fir_reg_eff12_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // eff13 = force? eff12
  Rsh_Fir_reg_eff13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eff12_);
  // checkMissing(eff13)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_eff13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return eff13
  return Rsh_Fir_reg_eff13_;
}
SEXP Rsh_Fir_user_promise_inner2149446420_2(SEXP CCP, SEXP RHO) {
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(object8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c10 then L1() else L2(object8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object8)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_object8_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", object8)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r78 = `$`(object10, <sym assign>)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L0(r78)
  // L0(r78)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r78_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
