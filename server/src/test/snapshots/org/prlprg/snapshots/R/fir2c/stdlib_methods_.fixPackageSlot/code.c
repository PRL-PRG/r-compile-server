#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1828272920_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1828272920_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1828272920_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1828272920_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner1828272920
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1828272920_, RHO, CCP);
  // st `.fixPackageSlot` = r
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
SEXP Rsh_Fir_user_function_inner1828272920_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1828272920 dynamic dispatch ([def, sig])

  return Rsh_Fir_user_version_inner1828272920_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1828272920_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1828272920 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1828272920/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_sig;  // sig
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sig1_;  // sig1
  SEXP Rsh_Fir_reg_sig2_;  // sig2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_pkgs;  // pkgs
  SEXP Rsh_Fir_reg_pkgs1_;  // pkgs1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sig3_;  // sig3
  SEXP Rsh_Fir_reg_sig4_;  // sig4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_pkgs2_;  // pkgs2
  SEXP Rsh_Fir_reg_pkgs3_;  // pkgs3
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_fixme;  // fixme
  SEXP Rsh_Fir_reg_fixme1_;  // fixme1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_pkgs4_;  // pkgs4
  SEXP Rsh_Fir_reg_pkgs5_;  // pkgs5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_fixme2_;  // fixme2
  SEXP Rsh_Fir_reg_fixme3_;  // fixme3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_pkgs6_;  // pkgs6
  SEXP Rsh_Fir_reg_pkgs7_;  // pkgs7
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sig5_;  // sig5
  SEXP Rsh_Fir_reg_sig6_;  // sig6
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sig7_;  // sig7
  SEXP Rsh_Fir_reg_sig8_;  // sig8
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_pkgs8_;  // pkgs8
  SEXP Rsh_Fir_reg_pkgs9_;  // pkgs9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sig9_;  // sig9
  SEXP Rsh_Fir_reg_sig10_;  // sig10
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_pkgs10_;  // pkgs10
  SEXP Rsh_Fir_reg_pkgs11_;  // pkgs11
  SEXP Rsh_Fir_reg_nzchar1_;  // nzchar1
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_fixme4_;  // fixme4
  SEXP Rsh_Fir_reg_fixme5_;  // fixme5
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_pkgs12_;  // pkgs12
  SEXP Rsh_Fir_reg_pkgs13_;  // pkgs13
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_fixme6_;  // fixme6
  SEXP Rsh_Fir_reg_fixme7_;  // fixme7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_pkgs14_;  // pkgs14
  SEXP Rsh_Fir_reg_pkgs15_;  // pkgs15
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_sig11_;  // sig11
  SEXP Rsh_Fir_reg_sig12_;  // sig12
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sig13_;  // sig13
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_def2_;  // def2

  // Bind parameters
  Rsh_Fir_reg_def = PARAMS[0];
  Rsh_Fir_reg_sig = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st def = def
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_def, RHO);
  (void)(Rsh_Fir_reg_def);
  // st sig = sig
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_sig, RHO);
  (void)(Rsh_Fir_reg_sig);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L0_:;
  // st pkgs = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L1_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L33() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // sym3 = ldf nzchar
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf nzchar in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L4_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st fixme = r14
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L5_:;
  // c2 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c2 then L45() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L45()
    goto L45_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L25()
  // L25()
  goto L25_;

L7_:;
  // c3 = `is.object`(r19)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c3 then L49() else L50(r19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L49()
    goto L49_;
  } else {
  // L50(r19)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r19_;
    goto L50_;
  }

L8_:;
  // s = toForSeq(dx1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 9);
  // goto L9(i)
  // L9(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L9_;

L9_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // c4 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if c4 then L53() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L53()
    goto L53_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // st pkgs = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L9(i8)
  // L9(i8)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i8_;
  goto L9_;

L11_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r24 = dyn __1(<lang getClass(`[[`(sig, i), .Force=TRUE)>, <sym package>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // l1 = ld pkgs
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c5 = `is.object`(l1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c5 then L54() else L55(i2, r24, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L54()
    goto L54_;
  } else {
  // L55(i2, r24, l1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L55_;
  }

L12_:;
  // st pkgs = r34
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard7 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L13_:;
  // c7 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c7 then L71() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L71()
    goto L71_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym9 = ldf nzchar
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base9 = ldf nzchar in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard9 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L16_:;
  // r47 = `!`(r45)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // st fixme = r47
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard10 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L17_:;
  // c8 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c8 then L83() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L83()
    goto L83_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L24(NULL)
  // L24(NULL)
  Rsh_Fir_reg_sig13_ = Rsh_const(CCP, 11);
  goto L24_;

L19_:;
  // c9 = `is.object`(r52)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c9 then L87() else L88(r52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L87()
    goto L87_;
  } else {
  // L88(r52)
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r52_;
    goto L88_;
  }

L20_:;
  // s1 = toForSeq(dx5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // l6 = length(s1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // i11 = 0
  Rsh_Fir_reg_i11_ = Rsh_const(CCP, 9);
  // goto L21(i11)
  // L21(i11)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i11_;
  goto L21_;

L21_:;
  // i13 = `+`.1(i12, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i13_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // c10 = `<`.1(l6, i13)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if c10 then L91() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L91()
    goto L91_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // st pkgs = dx7
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L21(i19)
  // L21(i19)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i19_;
  goto L21_;

L23_:;
  // x1 = `[[`(s1, i13, NULL, TRUE)
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // __4 = ldf `@` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r57 = dyn __4(<lang getClass(`[[`(sig, i), .Force=TRUE)>, <sym package>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names1, CCP, RHO);
  // l7 = ld pkgs
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c11 = `is.object`(l7)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c11 then L92() else L93(i13, r57, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L92()
    goto L92_;
  } else {
  // L93(i13, r57, l7)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L93_;
  }

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // def1 = ld def
  Rsh_Fir_reg_def1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L104() else D36()
  // L104()
  goto L104_;

L26_:;
  // sig1 = ld sig
  Rsh_Fir_reg_sig1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r = dyn base(<sym sig>, "package")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [sig1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_sig1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L28_:;
  // sig2 = force? sig1
  Rsh_Fir_reg_sig2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig1_);
  // checkMissing(sig2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sig2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn attr(sig2, "package")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sig2_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L30_:;
  // pkgs = ld pkgs
  Rsh_Fir_reg_pkgs = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

L31_:;
  // r3 = dyn base1(<sym pkgs>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [pkgs]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_pkgs;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // pkgs1 = force? pkgs
  Rsh_Fir_reg_pkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs);
  // checkMissing(pkgs1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_pkgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c = `==`(pkgs1, NULL)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_pkgs1_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L1_;

L33_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p = prom<V +>{
  //   sym2 = ldf length;
  //   base2 = ldf length in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   sig3 = ld sig;
  //   sig4 = force? sig3;
  //   checkMissing(sig4);
  //   length = ldf length in base;
  //   r7 = dyn length(sig4);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base2(<sym sig>);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828272920_, CCP, RHO);
  // r9 = dyn character(p)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L35() else D4()
  // L35()
  goto L35_;

D4_:;
  // deopt 15 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L35_:;
  // st pkgs = r9
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L3()
  // L3()
  goto L3_;

L37_:;
  // pkgs2 = ld pkgs
  Rsh_Fir_reg_pkgs2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L39() else D5()
  // L39()
  goto L39_;

L38_:;
  // r11 = dyn base3(<sym pkgs>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L4_;

D5_:;
  // deopt 21 [pkgs2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_pkgs2_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L39_:;
  // pkgs3 = force? pkgs2
  Rsh_Fir_reg_pkgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs2_);
  // checkMissing(pkgs3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_pkgs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r13 = dyn nzchar(pkgs3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_pkgs3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

D6_:;
  // deopt 24 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L4_;

L41_:;
  // fixme = ld fixme
  Rsh_Fir_reg_fixme = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

L42_:;
  // r15 = dyn base4(<sym fixme>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r15)
  // L5(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L5_;

D7_:;
  // deopt 29 [fixme]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_fixme;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L43_:;
  // fixme1 = force? fixme
  Rsh_Fir_reg_fixme1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixme);
  // checkMissing(fixme1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_fixme1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r17 = dyn any(fixme1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_fixme1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

D8_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L5_;

L45_:;
  // sym5 = ldf seq_along
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf seq_along in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard5 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // pkgs4 = ld pkgs
  Rsh_Fir_reg_pkgs4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

L47_:;
  // r18 = dyn base5(<sym pkgs>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D9_:;
  // deopt 34 [pkgs4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_pkgs4_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // pkgs5 = force? pkgs4
  Rsh_Fir_reg_pkgs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs4_);
  // checkMissing(pkgs5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_pkgs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // r20 = seq_along(pkgs5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_pkgs5_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L7_;

L49_:;
  // dr = tryDispatchBuiltin.1("[", r19)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc then L51() else L50(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L51()
    goto L51_;
  } else {
  // L50(dr)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_dr;
    goto L50_;
  }

L50_:;
  // fixme2 = ld fixme
  Rsh_Fir_reg_fixme2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

L51_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

D10_:;
  // deopt 37 [r22, fixme2]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_fixme2_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L52_:;
  // fixme3 = force? fixme2
  Rsh_Fir_reg_fixme3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixme2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r23 = dyn __(r22, fixme3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_fixme3_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L8_;

L53_:;
  // pkgs6 = ld pkgs
  Rsh_Fir_reg_pkgs6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

L54_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l1, r24)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args54);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc1 then L56() else L55(i2, r24, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L56()
    goto L56_;
  } else {
  // L55(i2, r24, dr2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L55_;
  }

L55_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

L56_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L10(i2, dx2)
  // L10(i2, dx2)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D11_:;
  // deopt 43 [i6, r26, l3, r24, i9]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(43, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L57_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r29 = dyn ____(l3, r24, i10)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(i6, r29)
  // L10(i6, r29)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r29_;
  goto L10_;

D12_:;
  // deopt 50 [pkgs6]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_pkgs6_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // pkgs7 = force? pkgs6
  Rsh_Fir_reg_pkgs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs6_);
  // checkMissing(pkgs7)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_pkgs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // l4 = ld sig
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

D13_:;
  // deopt 53 [pkgs7, l4, pkgs7]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // r30 = dyn attr__(l4, NULL, "package", pkgs7)
  SEXP Rsh_Fir_array_args59[4];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args59[3] = Rsh_Fir_reg_pkgs7_;
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L60() else D14()
  // L60()
  goto L60_;

D14_:;
  // deopt 56 [pkgs7, r30]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L60_:;
  // st sig = r30
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // sig5 = ld sig
  Rsh_Fir_reg_sig5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L61() else D15()
  // L61()
  goto L61_;

D15_:;
  // deopt 58 [sig5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_sig5_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L61_:;
  // sig6 = force? sig5
  Rsh_Fir_reg_sig6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig5_);
  // checkMissing(sig6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sig6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // l5 = ld def
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

D16_:;
  // deopt 61 [sig6, l5, sig6]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_sig6_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_sig6_;
  Rsh_Fir_deopt(61, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L62_:;
  // r31 = dyn ___(l5, NULL, "target", sig6)
  SEXP Rsh_Fir_array_args61[4];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args61[3] = Rsh_Fir_reg_sig6_;
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

D17_:;
  // deopt 64 [sig6, r31]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_sig6_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L63_:;
  // st def = r31
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r32 = dyn __2(<sym def>, <sym defined>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names17, CCP, RHO);
  // st sig = r32
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym6 = ldf attr
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base6 = ldf attr in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard6 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L64_:;
  // sig7 = ld sig
  Rsh_Fir_reg_sig7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L66() else D18()
  // L66()
  goto L66_;

L65_:;
  // r33 = dyn base6(<sym sig>, "package")
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L12_;

D18_:;
  // deopt 71 [sig7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_sig7_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L66_:;
  // sig8 = force? sig7
  Rsh_Fir_reg_sig8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig7_);
  // checkMissing(sig8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sig8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r35 = dyn attr1(sig8, "package")
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sig8_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

D19_:;
  // deopt 75 [r35]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L12_;

L68_:;
  // pkgs8 = ld pkgs
  Rsh_Fir_reg_pkgs8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L70() else D20()
  // L70()
  goto L70_;

L69_:;
  // r36 = dyn base7(<sym pkgs>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r36)
  // L13(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L13_;

D20_:;
  // deopt 78 [pkgs8]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_pkgs8_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L70_:;
  // pkgs9 = force? pkgs8
  Rsh_Fir_reg_pkgs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs8_);
  // checkMissing(pkgs9)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_pkgs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c6 = `==`(pkgs9, NULL)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_pkgs9_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L13(c6)
  // L13(c6)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_c6_;
  goto L13_;

L71_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

D21_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // p1 = prom<V +>{
  //   sym8 = ldf length;
  //   base8 = ldf length in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r39):
  //   return r39;
  // L1():
  //   sig9 = ld sig;
  //   sig10 = force? sig9;
  //   checkMissing(sig10);
  //   length1 = ldf length in base;
  //   r40 = dyn length1(sig10);
  //   goto L0(r40);
  // L2():
  //   r38 = dyn base8(<sym sig>);
  //   goto L0(r38);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828272920_1, CCP, RHO);
  // r42 = dyn character1(p1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

D22_:;
  // deopt 84 [r42]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // st pkgs = r42
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // goto L15()
  // L15()
  goto L15_;

L75_:;
  // pkgs10 = ld pkgs
  Rsh_Fir_reg_pkgs10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L77() else D23()
  // L77()
  goto L77_;

L76_:;
  // r44 = dyn base9(<sym pkgs>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L16(r44)
  // L16(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L16_;

D23_:;
  // deopt 90 [pkgs10]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_pkgs10_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L77_:;
  // pkgs11 = force? pkgs10
  Rsh_Fir_reg_pkgs11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs10_);
  // checkMissing(pkgs11)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_pkgs11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // nzchar1 = ldf nzchar in base
  Rsh_Fir_reg_nzchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r46 = dyn nzchar1(pkgs11)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_pkgs11_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar1_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L78() else D24()
  // L78()
  goto L78_;

D24_:;
  // deopt 93 [r46]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L16(r46)
  // L16(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L16_;

L79_:;
  // fixme4 = ld fixme
  Rsh_Fir_reg_fixme4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L81() else D25()
  // L81()
  goto L81_;

L80_:;
  // r48 = dyn base10(<sym fixme>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L17(r48)
  // L17(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L17_;

D25_:;
  // deopt 98 [fixme4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_fixme4_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L81_:;
  // fixme5 = force? fixme4
  Rsh_Fir_reg_fixme5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixme4_);
  // checkMissing(fixme5)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_fixme5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r50 = dyn any1(fixme5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_fixme5_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L82() else D26()
  // L82()
  goto L82_;

D26_:;
  // deopt 101 [r50]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L17(r50)
  // L17(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L17_;

L83_:;
  // sym11 = ldf seq_along
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base11 = ldf seq_along in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard11 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // pkgs12 = ld pkgs
  Rsh_Fir_reg_pkgs12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L86() else D27()
  // L86()
  goto L86_;

L85_:;
  // r51 = dyn base11(<sym pkgs>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L19(r51)
  // L19(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L19_;

D27_:;
  // deopt 103 [pkgs12]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_pkgs12_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L86_:;
  // pkgs13 = force? pkgs12
  Rsh_Fir_reg_pkgs13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs12_);
  // checkMissing(pkgs13)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_pkgs13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r53 = seq_along(pkgs13)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_pkgs13_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L19(r53)
  // L19(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L19_;

L87_:;
  // dr4 = tryDispatchBuiltin.1("[", r52)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc2 then L89() else L88(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr4)
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_dr4_;
    goto L88_;
  }

L88_:;
  // fixme6 = ld fixme
  Rsh_Fir_reg_fixme6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L90() else D28()
  // L90()
  goto L90_;

L89_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L20(dx4)
  // L20(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L20_;

D28_:;
  // deopt 106 [r55, fixme6]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_fixme6_;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L90_:;
  // fixme7 = force? fixme6
  Rsh_Fir_reg_fixme7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixme6_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r56 = dyn __3(r55, fixme7)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_fixme7_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L20(r56)
  // L20(r56)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r56_;
  goto L20_;

L91_:;
  // pkgs14 = ld pkgs
  Rsh_Fir_reg_pkgs14_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L96() else D30()
  // L96()
  goto L96_;

L92_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l7, r57)
  SEXP Rsh_Fir_array_args89[3];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args89[2] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args89);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc3 then L94() else L93(i13, r57, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L94()
    goto L94_;
  } else {
  // L93(i13, r57, dr6)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr6_;
    goto L93_;
  }

L93_:;
  // i20 = ld i
  Rsh_Fir_reg_i20_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L95() else D29()
  // L95()
  goto L95_;

L94_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L22(i13, dx6)
  // L22(i13, dx6)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L22_;

D29_:;
  // deopt 112 [i17, r59, l9, r57, i20]
  SEXP Rsh_Fir_array_deopt_stack27[5];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack27[4] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(112, 5, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L95_:;
  // i21 = force? i20
  Rsh_Fir_reg_i21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i20_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r62 = dyn ____1(l9, r57, i21)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L22(i17, r62)
  // L22(i17, r62)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r62_;
  goto L22_;

D30_:;
  // deopt 119 [pkgs14]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_pkgs14_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L96_:;
  // pkgs15 = force? pkgs14
  Rsh_Fir_reg_pkgs15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs14_);
  // checkMissing(pkgs15)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_pkgs15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // l10 = ld sig
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L97() else D31()
  // L97()
  goto L97_;

D31_:;
  // deopt 122 [pkgs15, l10, pkgs15]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_pkgs15_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_pkgs15_;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L97_:;
  // r63 = dyn attr__1(l10, NULL, "package", pkgs15)
  SEXP Rsh_Fir_array_args94[4];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args94[3] = Rsh_Fir_reg_pkgs15_;
  SEXP Rsh_Fir_array_arg_names31[4];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L98() else D32()
  // L98()
  goto L98_;

D32_:;
  // deopt 125 [pkgs15, r63]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_pkgs15_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L98_:;
  // st sig = r63
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // sig11 = ld sig
  Rsh_Fir_reg_sig11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L99() else D33()
  // L99()
  goto L99_;

D33_:;
  // deopt 127 [sig11]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_sig11_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L99_:;
  // sig12 = force? sig11
  Rsh_Fir_reg_sig12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig11_);
  // checkMissing(sig12)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sig12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // l11 = ld def
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___1 = ldf `@<-`
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L100() else D34()
  // L100()
  goto L100_;

D34_:;
  // deopt 130 [sig12, l11, sig12]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_sig12_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_sig12_;
  Rsh_Fir_deopt(130, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L100_:;
  // r64 = dyn ___1(l11, NULL, "defined", sig12)
  SEXP Rsh_Fir_array_args96[4];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args96[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args96[3] = Rsh_Fir_reg_sig12_;
  SEXP Rsh_Fir_array_arg_names32[4];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L101() else D35()
  // L101()
  goto L101_;

D35_:;
  // deopt 133 [sig12, r64]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_sig12_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(133, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L101_:;
  // st def = r64
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // goto L24(sig12)
  // L24(sig12)
  Rsh_Fir_reg_sig13_ = Rsh_Fir_reg_sig12_;
  goto L24_;

D36_:;
  // deopt 139 [def1]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_def1_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L104_:;
  // def2 = force? def1
  Rsh_Fir_reg_def2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def1_);
  // checkMissing(def2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_def2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return def2
  return Rsh_Fir_reg_def2_;
}
SEXP Rsh_Fir_user_promise_inner1828272920_(SEXP CCP, SEXP RHO) {
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // sig3 = ld sig
  Rsh_Fir_reg_sig3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sig4 = force? sig3
  Rsh_Fir_reg_sig4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig3_);
  // checkMissing(sig4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sig4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r7 = dyn length(sig4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sig4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base2(<sym sig>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1828272920_1(SEXP CCP, SEXP RHO) {
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r39
  return Rsh_Fir_reg_r39_;

L1_:;
  // sig9 = ld sig
  Rsh_Fir_reg_sig9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sig10 = force? sig9
  Rsh_Fir_reg_sig10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig9_);
  // checkMissing(sig10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sig10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r40 = dyn length1(sig10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sig10_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // r38 = dyn base8(<sym sig>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
