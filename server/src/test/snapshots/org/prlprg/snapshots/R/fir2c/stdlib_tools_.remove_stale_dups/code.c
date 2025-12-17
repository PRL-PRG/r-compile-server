#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner972780175_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner972780175_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner972780175_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner972780175_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner972780175_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner972780175_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner972780175_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner972780175_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner972780175
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner972780175_, RHO, CCP);
  // st `.remove_stale_dups` = r
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
SEXP Rsh_Fir_user_function_inner972780175_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner972780175 dynamic dispatch ([ap])

  return Rsh_Fir_user_version_inner972780175_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner972780175_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner972780175 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner972780175/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ap;  // ap
  SEXP Rsh_Fir_reg_ap1_;  // ap1
  SEXP Rsh_Fir_reg_ap2_;  // ap2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_pkgs;  // pkgs
  SEXP Rsh_Fir_reg_pkgs1_;  // pkgs1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_pkgs3_;  // pkgs3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_duplicated;  // duplicated
  SEXP Rsh_Fir_reg_pkgs4_;  // pkgs4
  SEXP Rsh_Fir_reg_pkgs5_;  // pkgs5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_dup_pkgs;  // dup_pkgs
  SEXP Rsh_Fir_reg_dup_pkgs1_;  // dup_pkgs1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_ap5_;  // ap5
  SEXP Rsh_Fir_reg_ap6_;  // ap6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_ap8_;  // ap8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_duplicated1_;  // duplicated1
  SEXP Rsh_Fir_reg_ap9_;  // ap9
  SEXP Rsh_Fir_reg_ap10_;  // ap10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_ap12_;  // ap12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_ap16_;  // ap16
  SEXP Rsh_Fir_reg_ap17_;  // ap17
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_pkgs6_;  // pkgs6
  SEXP Rsh_Fir_reg_pkgs7_;  // pkgs7
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_pkgs9_;  // pkgs9
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_duplicated2_;  // duplicated2
  SEXP Rsh_Fir_reg_pkgs10_;  // pkgs10
  SEXP Rsh_Fir_reg_pkgs11_;  // pkgs11
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dup_pkgs2_;  // dup_pkgs2
  SEXP Rsh_Fir_reg_dup_pkgs3_;  // dup_pkgs3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dup_pkgs4_;  // dup_pkgs4
  SEXP Rsh_Fir_reg_dup_pkgs5_;  // dup_pkgs5
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_dp;  // dp
  SEXP Rsh_Fir_reg_dp1_;  // dp1
  SEXP Rsh_Fir_reg_pkgs12_;  // pkgs12
  SEXP Rsh_Fir_reg_pkgs13_;  // pkgs13
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_package_version;  // package_version
  SEXP Rsh_Fir_reg_ap20_;  // ap20
  SEXP Rsh_Fir_reg_ap21_;  // ap21
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_ap23_;  // ap23
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_wh;  // wh
  SEXP Rsh_Fir_reg_wh1_;  // wh1
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_vers;  // vers
  SEXP Rsh_Fir_reg_vers1_;  // vers1
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_vers2_;  // vers2
  SEXP Rsh_Fir_reg_vers3_;  // vers3
  SEXP Rsh_Fir_reg_keep_ver;  // keep_ver
  SEXP Rsh_Fir_reg_keep_ver1_;  // keep_ver1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_which_max;  // which_max
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_wh2_;  // wh2
  SEXP Rsh_Fir_reg_wh3_;  // wh3
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_wh5_;  // wh5
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_keep_idx;  // keep_idx
  SEXP Rsh_Fir_reg_keep_idx1_;  // keep_idx1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_wh6_;  // wh6
  SEXP Rsh_Fir_reg_wh7_;  // wh7
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_wh8_;  // wh8
  SEXP Rsh_Fir_reg_wh9_;  // wh9
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_wh11_;  // wh11
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_end_i;  // end_i
  SEXP Rsh_Fir_reg_end_i1_;  // end_i1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_end_i2_;  // end_i2
  SEXP Rsh_Fir_reg_end_i3_;  // end_i3
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_stale_dups;  // stale_dups
  SEXP Rsh_Fir_reg_stale_dups1_;  // stale_dups1
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_ap24_;  // ap24
  SEXP Rsh_Fir_reg_ap25_;  // ap25
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_ap27_;  // ap27
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_stale_dups2_;  // stale_dups2
  SEXP Rsh_Fir_reg_stale_dups3_;  // stale_dups3
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_ap28_;  // ap28
  SEXP Rsh_Fir_reg_ap29_;  // ap29

  // Bind parameters
  Rsh_Fir_reg_ap = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ap = ap
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ap, RHO);
  (void)(Rsh_Fir_reg_ap);
  // ap1 = ld ap
  Rsh_Fir_reg_ap1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L0_:;
  // st pkgs = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // pkgs = ld pkgs
  Rsh_Fir_reg_pkgs = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

L1_:;
  // st dup_pkgs = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L2_:;
  // r7 = `>`(r5, 100.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c2 then L32() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L7()
  // L7()
  goto L7_;

L4_:;
  // st ap = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // ap16 = ld ap
  Rsh_Fir_reg_ap16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L5_:;
  // st pkgs = dx9
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // pkgs6 = ld pkgs
  Rsh_Fir_reg_pkgs6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

L6_:;
  // st dup_pkgs = dx11
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

L8_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c8 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c8 then L53() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L53()
    goto L53_;
  } else {
  // L14()
    goto L14_;
  }

L9_:;
  // st keep_ver = r32
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym4 = ldf `which.max`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf `which.max` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L10_:;
  // st keep_idx = r35
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // wh2 = ld wh
  Rsh_Fir_reg_wh2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L67() else D25()
  // L67()
  goto L67_;

L11_:;
  // st wh = dx16
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

L12_:;
  // r43 = `+`(i22, r41)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // r44 = `-`(r43, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st end_i = r44
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // wh8 = ld wh
  Rsh_Fir_reg_wh8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L77() else D30()
  // L77()
  goto L77_;

L13_:;
  // st stale_dups = dx18
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx18_, RHO);
  (void)(Rsh_Fir_reg_dx18_);
  // end_i2 = ld end_i
  Rsh_Fir_reg_end_i2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L83() else D33()
  // L83()
  goto L83_;

L14_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st dp = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

L15_:;
  // c12 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c12 then L88() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L88()
    goto L88_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // ap28 = ld ap
  Rsh_Fir_reg_ap28_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L95() else D38()
  // L95()
  goto L95_;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx20
  return Rsh_Fir_reg_dx20_;

D0_:;
  // deopt 0 [ap1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ap1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // ap2 = force? ap1
  Rsh_Fir_reg_ap2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ap1_);
  // checkMissing(ap2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ap2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c = `is.object`(ap2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ap2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("[", ap2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_ap2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r = dyn __(ap2, <missing>, "Package")
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_ap2_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L0_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D1_:;
  // deopt 7 [pkgs]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_pkgs;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // pkgs1 = force? pkgs
  Rsh_Fir_reg_pkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs);
  // checkMissing(pkgs1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_pkgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(pkgs1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_pkgs1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L24(pkgs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L24(pkgs1)
    Rsh_Fir_reg_pkgs3_ = Rsh_Fir_reg_pkgs1_;
    goto L24_;
  }

L23_:;
  // dr2 = tryDispatchBuiltin.1("[", pkgs1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_pkgs1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr2)
    Rsh_Fir_reg_pkgs3_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L25_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;

D2_:;
  // deopt 10 [pkgs3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // p = prom<V +>{
  //   pkgs4 = ld pkgs;
  //   pkgs5 = force? pkgs4;
  //   checkMissing(pkgs5);
  //   return pkgs5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner972780175_, CCP, RHO);
  // r2 = dyn duplicated(p)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 12 [pkgs3, r2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r3 = dyn __1(pkgs3, r2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r3_;
  goto L1_;

L28_:;
  // dup_pkgs = ld dup_pkgs
  Rsh_Fir_reg_dup_pkgs = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

L29_:;
  // r4 = dyn base(<sym dup_pkgs>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D4_:;
  // deopt 17 [dup_pkgs]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dup_pkgs;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // dup_pkgs1 = force? dup_pkgs
  Rsh_Fir_reg_dup_pkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dup_pkgs);
  // checkMissing(dup_pkgs1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dup_pkgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r6 = dyn length(dup_pkgs1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dup_pkgs1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D5_:;
  // deopt 20 [r6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L32_:;
  // ap5 = ld ap
  Rsh_Fir_reg_ap5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

D6_:;
  // deopt 23 [ap5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ap5_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // ap6 = force? ap5
  Rsh_Fir_reg_ap6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ap5_);
  // checkMissing(ap6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_ap6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(ap6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_ap6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c3 then L34() else L35(ap6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L34()
    goto L34_;
  } else {
  // L35(ap6)
    Rsh_Fir_reg_ap8_ = Rsh_Fir_reg_ap6_;
    goto L35_;
  }

L34_:;
  // dr4 = tryDispatchBuiltin.1("[", ap6)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_ap6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc2 then L36() else L35(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr4)
    Rsh_Fir_reg_ap8_ = Rsh_Fir_reg_dr4_;
    goto L35_;
  }

L35_:;
  // duplicated1 = ldf duplicated
  Rsh_Fir_reg_duplicated1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L36_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L4(dx4)
  // L4(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L4_;

D7_:;
  // deopt 26 [ap8]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_ap8_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // p1 = prom<V +>{
  //   ap9 = ld ap;
  //   ap10 = force? ap9;
  //   checkMissing(ap10);
  //   c4 = `is.object`(ap10);
  //   if c4 then L2() else L3(ap10);
  // L0(dx7):
  //   return dx7;
  // L2():
  //   dr6 = tryDispatchBuiltin.1("[", ap10);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L4() else L3(dr6);
  // L3(ap12):
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L5() else L6();
  // L1(r9):
  //   __2 = ldf `[` in base;
  //   r11 = dyn __2(ap10, <missing>, r9);
  //   goto L0(r11);
  // L4():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // L5():
  //   c5 = ldf c in base;
  //   r10 = dyn c5("Package", "Version");
  //   goto L1(r10);
  // L6():
  //   r8 = dyn base1("Package", "Version");
  //   goto L1(r8);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner972780175_1, CCP, RHO);
  // r13 = dyn duplicated1(p1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D8_:;
  // deopt 28 [ap8, r13]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ap8_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // r14 = `!`(r13)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r15 = dyn __3(ap6, r14, <missing>, FALSE)
  SEXP Rsh_Fir_array_args43[4];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ap6_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 4, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r15)
  // L4(r15)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r15_;
  goto L4_;

D9_:;
  // deopt 36 [ap16]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_ap16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // ap17 = force? ap16
  Rsh_Fir_reg_ap17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ap16_);
  // checkMissing(ap17)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ap17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(ap17)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ap17_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c6 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // dr8 = tryDispatchBuiltin.1("[", ap17)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_ap17_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc4 then L42() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L42()
    goto L42_;
  } else {
  // L41()
    goto L41_;
  }

L41_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r16 = dyn __4(ap17, <missing>, "Package")
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ap17_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r16_;
  goto L5_;

L42_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L5(dx8)
  // L5(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L5_;

D10_:;
  // deopt 43 [pkgs6]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_pkgs6_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L43_:;
  // pkgs7 = force? pkgs6
  Rsh_Fir_reg_pkgs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs6_);
  // checkMissing(pkgs7)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_pkgs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(pkgs7)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c7 then L44() else L45(pkgs7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L44()
    goto L44_;
  } else {
  // L45(pkgs7)
    Rsh_Fir_reg_pkgs9_ = Rsh_Fir_reg_pkgs7_;
    goto L45_;
  }

L44_:;
  // dr10 = tryDispatchBuiltin.1("[", pkgs7)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_pkgs7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc5 then L46() else L45(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr10)
    Rsh_Fir_reg_pkgs9_ = Rsh_Fir_reg_dr10_;
    goto L45_;
  }

L45_:;
  // duplicated2 = ldf duplicated
  Rsh_Fir_reg_duplicated2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L46_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L6(dx10)
  // L6(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L6_;

D11_:;
  // deopt 46 [pkgs9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_pkgs9_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L47_:;
  // p2 = prom<V +>{
  //   pkgs10 = ld pkgs;
  //   pkgs11 = force? pkgs10;
  //   checkMissing(pkgs11);
  //   return pkgs11;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner972780175_2, CCP, RHO);
  // r18 = dyn duplicated2(p2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

D12_:;
  // deopt 48 [pkgs9, r18]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_pkgs9_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r19 = dyn __5(pkgs9, r18)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_pkgs9_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r19_;
  goto L6_;

D13_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p3 = prom<V +>{
  //   sym2 = ldf length;
  //   base2 = ldf length in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   dup_pkgs2 = ld dup_pkgs;
  //   dup_pkgs3 = force? dup_pkgs2;
  //   checkMissing(dup_pkgs3);
  //   length1 = ldf length in base;
  //   r22 = dyn length1(dup_pkgs3);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base2(<sym dup_pkgs>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner972780175_3, CCP, RHO);
  // r24 = dyn integer(p3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L51() else D14()
  // L51()
  goto L51_;

D14_:;
  // deopt 56 [r24]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L51_:;
  // st stale_dups = r24
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // st i = 1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // dup_pkgs4 = ld dup_pkgs
  Rsh_Fir_reg_dup_pkgs4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L52() else D15()
  // L52()
  goto L52_;

D15_:;
  // deopt 61 [dup_pkgs4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dup_pkgs4_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L52_:;
  // dup_pkgs5 = force? dup_pkgs4
  Rsh_Fir_reg_dup_pkgs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dup_pkgs4_);
  // checkMissing(dup_pkgs5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dup_pkgs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // s = toForSeq(dup_pkgs5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dup_pkgs5_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 27);
  // goto L8(i)
  // L8(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L8_;

L53_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard6 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

D16_:;
  // deopt 64 [i2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // p4 = prom<V +>{
  //   dp = ld dp;
  //   dp1 = force? dp;
  //   checkMissing(dp1);
  //   pkgs12 = ld pkgs;
  //   pkgs13 = force? pkgs12;
  //   checkMissing(pkgs13);
  //   r25 = `==`(dp1, pkgs13);
  //   return r25;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner972780175_4, CCP, RHO);
  // r27 = dyn which(p4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L55() else D17()
  // L55()
  goto L55_;

D17_:;
  // deopt 66 [i2, r27]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // st wh = r27
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // package_version = ldf package_version
  Rsh_Fir_reg_package_version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L56() else D18()
  // L56()
  goto L56_;

D18_:;
  // deopt 69 [i2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L56_:;
  // p5 = prom<V +>{
  //   ap20 = ld ap;
  //   ap21 = force? ap20;
  //   checkMissing(ap21);
  //   c9 = `is.object`(ap21);
  //   if c9 then L1() else L2(ap21);
  // L0(dx14):
  //   return dx14;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", ap21);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(ap23):
  //   wh = ld wh;
  //   wh1 = force? wh;
  //   __6 = ldf `[` in base;
  //   r28 = dyn __6(ap23, wh1, "Version");
  //   goto L0(r28);
  // L3():
  //   dx13 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx13);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner972780175_5, CCP, RHO);
  // r30 = dyn package_version(p5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_package_version, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

D19_:;
  // deopt 71 [i2, r30]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L57_:;
  // st vers = r30
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // sym3 = ldf max
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base3 = ldf max in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard3 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // vers = ld vers
  Rsh_Fir_reg_vers = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L60() else D20()
  // L60()
  goto L60_;

L59_:;
  // r31 = dyn base3(<sym vers>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L9(i2, r31)
  // L9(i2, r31)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L9_;

D20_:;
  // deopt 75 [i2, vers]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_vers;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L60_:;
  // vers1 = force? vers
  Rsh_Fir_reg_vers1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vers);
  // checkMissing(vers1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_vers1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r33 = dyn max(vers1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_vers1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L61() else D21()
  // L61()
  goto L61_;

D21_:;
  // deopt 78 [i2, r33]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L9(i2, r33)
  // L9(i2, r33)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L9_;

L62_:;
  // vers2 = ld vers
  Rsh_Fir_reg_vers2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L64() else D22()
  // L64()
  goto L64_;

L63_:;
  // r34 = dyn base4(<lang `==`(vers, keep_ver)>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L10(i7, r34)
  // L10(i7, r34)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L10_;

D22_:;
  // deopt 82 [i7, vers2]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_vers2_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L64_:;
  // vers3 = force? vers2
  Rsh_Fir_reg_vers3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vers2_);
  // checkMissing(vers3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_vers3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // keep_ver = ld keep_ver
  Rsh_Fir_reg_keep_ver = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L65() else D23()
  // L65()
  goto L65_;

D23_:;
  // deopt 83 [i7, vers3, keep_ver]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_vers3_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_keep_ver;
  Rsh_Fir_deopt(83, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L65_:;
  // keep_ver1 = force? keep_ver
  Rsh_Fir_reg_keep_ver1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_ver);
  // checkMissing(keep_ver1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_keep_ver1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // r36 = `==`(vers3, keep_ver1)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_vers3_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_keep_ver1_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // which_max = ldf `which.max` in base
  Rsh_Fir_reg_which_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r37 = dyn which_max(r36)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_max, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L66() else D24()
  // L66()
  goto L66_;

D24_:;
  // deopt 87 [i7, r37]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L10(i7, r37)
  // L10(i7, r37)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r37_;
  goto L10_;

D25_:;
  // deopt 89 [i10, wh2]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_wh2_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L67_:;
  // wh3 = force? wh2
  Rsh_Fir_reg_wh3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wh2_);
  // checkMissing(wh3)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_wh3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(wh3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_wh3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c10 then L68() else L69(i10, wh3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L68()
    goto L68_;
  } else {
  // L69(i10, wh3)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_wh5_ = Rsh_Fir_reg_wh3_;
    goto L69_;
  }

L68_:;
  // dr14 = tryDispatchBuiltin.1("[", wh3)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_wh3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc7 then L70() else L69(i10, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L70()
    goto L70_;
  } else {
  // L69(i10, dr14)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_wh5_ = Rsh_Fir_reg_dr14_;
    goto L69_;
  }

L69_:;
  // keep_idx = ld keep_idx
  Rsh_Fir_reg_keep_idx = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

L70_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L11(i10, dx15)
  // L11(i10, dx15)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L11_;

D26_:;
  // deopt 91 [i12, wh5, keep_idx]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_wh5_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_keep_idx;
  Rsh_Fir_deopt(91, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L71_:;
  // keep_idx1 = force? keep_idx
  Rsh_Fir_reg_keep_idx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_idx);
  // checkMissing(keep_idx1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_keep_idx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r38 = `-`(<missing>, keep_idx1)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_keep_idx1_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r39 = dyn __7(wh5, r38)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_wh5_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L11(i12, r39)
  // L11(i12, r39)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r39_;
  goto L11_;

D27_:;
  // deopt 96 [i14, i15]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L72_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // checkMissing(i16)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_i16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard5 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // wh6 = ld wh
  Rsh_Fir_reg_wh6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L75() else D28()
  // L75()
  goto L75_;

L74_:;
  // r40 = dyn base5(<sym wh>)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L12(i14, i16, r40)
  // L12(i14, i16, r40)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L12_;

D28_:;
  // deopt 99 [i14, i16, wh6]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_wh6_;
  Rsh_Fir_deopt(99, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L75_:;
  // wh7 = force? wh6
  Rsh_Fir_reg_wh7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wh6_);
  // checkMissing(wh7)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_wh7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r42 = dyn length2(wh7)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_wh7_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L76() else D29()
  // L76()
  goto L76_;

D29_:;
  // deopt 102 [i14, i16, r42]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(102, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L12(i14, i16, r42)
  // L12(i14, i16, r42)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L12_;

D30_:;
  // deopt 107 [i21, wh8]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_wh8_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L77_:;
  // wh9 = force? wh8
  Rsh_Fir_reg_wh9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wh8_);
  // checkMissing(wh9)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_wh9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // l1 = ld stale_dups
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // c11 = `is.object`(l1)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if c11 then L78() else L79(i21, wh9, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L78()
    goto L78_;
  } else {
  // L79(i21, wh9, l1)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_wh11_ = Rsh_Fir_reg_wh9_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L79_;
  }

L78_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l1, wh9)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_wh9_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args102);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if dc8 then L80() else L79(i21, wh9, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L80()
    goto L80_;
  } else {
  // L79(i21, wh9, dr16)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_wh11_ = Rsh_Fir_reg_wh9_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr16_;
    goto L79_;
  }

L79_:;
  // i27 = ld i
  Rsh_Fir_reg_i27_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L81() else D31()
  // L81()
  goto L81_;

L80_:;
  // dx17 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L13(i21, dx17)
  // L13(i21, dx17)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L13_;

D31_:;
  // deopt 110 [i24, wh11, l3, wh9, i27]
  SEXP Rsh_Fir_array_deopt_stack30[5];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_wh11_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_wh9_;
  Rsh_Fir_array_deopt_stack30[4] = Rsh_Fir_reg_i27_;
  Rsh_Fir_deopt(110, 5, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L81_:;
  // i28 = force? i27
  Rsh_Fir_reg_i28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i27_);
  // checkMissing(i28)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_i28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // end_i = ld end_i
  Rsh_Fir_reg_end_i = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L82() else D32()
  // L82()
  goto L82_;

D32_:;
  // deopt 111 [i24, wh11, l3, wh9, i28, end_i]
  SEXP Rsh_Fir_array_deopt_stack31[6];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_wh11_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_wh9_;
  Rsh_Fir_array_deopt_stack31[4] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack31[5] = Rsh_Fir_reg_end_i;
  Rsh_Fir_deopt(111, 6, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L82_:;
  // end_i1 = force? end_i
  Rsh_Fir_reg_end_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_i);
  // checkMissing(end_i1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_end_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r45 = `:`(i28, end_i1)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_end_i1_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r46 = dyn ___(l3, wh9, r45)
  SEXP Rsh_Fir_array_args108[3];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_wh9_;
  Rsh_Fir_array_args108[2] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L13(i24, r46)
  // L13(i24, r46)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r46_;
  goto L13_;

D33_:;
  // deopt 116 [i26, end_i2]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_end_i2_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L83_:;
  // end_i3 = force? end_i2
  Rsh_Fir_reg_end_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_i2_);
  // checkMissing(end_i3)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_end_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // r47 = `+`(end_i3, 1)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_end_i3_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // st i = r47
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L8(i26)
  // L8(i26)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i26_;
  goto L8_;

L84_:;
  // stale_dups = ld stale_dups
  Rsh_Fir_reg_stale_dups = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L86() else D34()
  // L86()
  goto L86_;

L85_:;
  // r48 = dyn base6(<sym stale_dups>)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L15(r48)
  // L15(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L15_;

D34_:;
  // deopt 126 [stale_dups]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_stale_dups;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L86_:;
  // stale_dups1 = force? stale_dups
  Rsh_Fir_reg_stale_dups1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stale_dups);
  // checkMissing(stale_dups1)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_stale_dups1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r50 = dyn length3(stale_dups1)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_stale_dups1_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L87() else D35()
  // L87()
  goto L87_;

D35_:;
  // deopt 129 [r50]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L15(r50)
  // L15(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L15_;

L88_:;
  // ap24 = ld ap
  Rsh_Fir_reg_ap24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L89() else D36()
  // L89()
  goto L89_;

D36_:;
  // deopt 130 [ap24]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ap24_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L89_:;
  // ap25 = force? ap24
  Rsh_Fir_reg_ap25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ap24_);
  // checkMissing(ap25)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_ap25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(ap25)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_ap25_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if c13 then L90() else L91(ap25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L90()
    goto L90_;
  } else {
  // L91(ap25)
    Rsh_Fir_reg_ap27_ = Rsh_Fir_reg_ap25_;
    goto L91_;
  }

L90_:;
  // dr18 = tryDispatchBuiltin.1("[", ap25)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_ap25_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args116);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc9 then L92() else L91(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L92()
    goto L92_;
  } else {
  // L91(dr18)
    Rsh_Fir_reg_ap27_ = Rsh_Fir_reg_dr18_;
    goto L91_;
  }

L91_:;
  // stale_dups2 = ld stale_dups
  Rsh_Fir_reg_stale_dups2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L93() else D37()
  // L93()
  goto L93_;

L92_:;
  // dx19 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L17(dx19)
  // L17(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L17_;

D37_:;
  // deopt 132 [ap27, stale_dups2]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_ap27_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_stale_dups2_;
  Rsh_Fir_deopt(132, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L93_:;
  // stale_dups3 = force? stale_dups2
  Rsh_Fir_reg_stale_dups3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stale_dups2_);
  // checkMissing(stale_dups3)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_stale_dups3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // r51 = `-`(<missing>, stale_dups3)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_stale_dups3_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r52 = dyn __8(ap25, r51, <missing>, FALSE)
  SEXP Rsh_Fir_array_args121[4];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_ap25_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args121[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args121[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 4, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r52_;
  goto L17_;

D38_:;
  // deopt 140 [ap28]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_ap28_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L95_:;
  // ap29 = force? ap28
  Rsh_Fir_reg_ap29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ap28_);
  // checkMissing(ap29)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_ap29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ap29
  return Rsh_Fir_reg_ap29_;
}
SEXP Rsh_Fir_user_promise_inner972780175_(SEXP CCP, SEXP RHO) {
  // pkgs4 = ld pkgs
  Rsh_Fir_reg_pkgs4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // pkgs5 = force? pkgs4
  Rsh_Fir_reg_pkgs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs4_);
  // checkMissing(pkgs5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_pkgs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return pkgs5
  return Rsh_Fir_reg_pkgs5_;
}
SEXP Rsh_Fir_user_promise_inner972780175_1(SEXP CCP, SEXP RHO) {
  // ap9 = ld ap
  Rsh_Fir_reg_ap9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ap10 = force? ap9
  Rsh_Fir_reg_ap10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ap9_);
  // checkMissing(ap10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ap10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(ap10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_ap10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c4 then L2() else L3(ap10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L2()
    goto L2_;
  } else {
  // L3(ap10)
    Rsh_Fir_reg_ap12_ = Rsh_Fir_reg_ap10_;
    goto L3_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r11 = dyn __2(ap10, <missing>, r9)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_ap10_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // dr6 = tryDispatchBuiltin.1("[", ap10)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_ap10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc3 then L4() else L3(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr6)
    Rsh_Fir_reg_ap12_ = Rsh_Fir_reg_dr6_;
    goto L3_;
  }

L3_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;

L5_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r10 = dyn c5("Package", "Version")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L1_;

L6_:;
  // r8 = dyn base1("Package", "Version")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner972780175_2(SEXP CCP, SEXP RHO) {
  // pkgs10 = ld pkgs
  Rsh_Fir_reg_pkgs10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // pkgs11 = force? pkgs10
  Rsh_Fir_reg_pkgs11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs10_);
  // checkMissing(pkgs11)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_pkgs11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return pkgs11
  return Rsh_Fir_reg_pkgs11_;
}
SEXP Rsh_Fir_user_promise_inner972780175_3(SEXP CCP, SEXP RHO) {
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // dup_pkgs2 = ld dup_pkgs
  Rsh_Fir_reg_dup_pkgs2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // dup_pkgs3 = force? dup_pkgs2
  Rsh_Fir_reg_dup_pkgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dup_pkgs2_);
  // checkMissing(dup_pkgs3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dup_pkgs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r22 = dyn length1(dup_pkgs3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dup_pkgs3_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base2(<sym dup_pkgs>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner972780175_4(SEXP CCP, SEXP RHO) {
  // dp = ld dp
  Rsh_Fir_reg_dp = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // dp1 = force? dp
  Rsh_Fir_reg_dp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dp);
  // checkMissing(dp1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // pkgs12 = ld pkgs
  Rsh_Fir_reg_pkgs12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // pkgs13 = force? pkgs12
  Rsh_Fir_reg_pkgs13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs12_);
  // checkMissing(pkgs13)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_pkgs13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r25 = `==`(dp1, pkgs13)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dp1_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_pkgs13_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner972780175_5(SEXP CCP, SEXP RHO) {
  // ap20 = ld ap
  Rsh_Fir_reg_ap20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ap21 = force? ap20
  Rsh_Fir_reg_ap21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ap20_);
  // checkMissing(ap21)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_ap21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(ap21)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_ap21_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c9 then L1() else L2(ap21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(ap21)
    Rsh_Fir_reg_ap23_ = Rsh_Fir_reg_ap21_;
    goto L2_;
  }

L0_:;
  // return dx14
  return Rsh_Fir_reg_dx14_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", ap21)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_ap21_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_ap23_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // wh = ld wh
  Rsh_Fir_reg_wh = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // wh1 = force? wh
  Rsh_Fir_reg_wh1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wh);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r28 = dyn __6(ap23, wh1, "Version")
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_ap23_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_wh1_;
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r28_;
  goto L0_;

L3_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(dx13)
  // L0(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
