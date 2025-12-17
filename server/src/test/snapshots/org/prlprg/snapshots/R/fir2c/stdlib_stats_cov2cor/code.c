#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4209080914_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4209080914_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4209080914_(SEXP CCP, SEXP RHO);
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
  // r = clos inner4209080914
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4209080914_, RHO, CCP);
  // st cov2cor = r
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
SEXP Rsh_Fir_user_function_inner4209080914_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4209080914 dynamic dispatch ([V])

  return Rsh_Fir_user_version_inner4209080914_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4209080914_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4209080914 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4209080914/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_V;  // V
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_V1_;  // V1
  SEXP Rsh_Fir_reg_V2_;  // V2
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_V3_;  // V3
  SEXP Rsh_Fir_reg_V4_;  // V4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_d5_;  // d5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_diag;  // diag
  SEXP Rsh_Fir_reg_V5_;  // V5
  SEXP Rsh_Fir_reg_V6_;  // V6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_D;  // D
  SEXP Rsh_Fir_reg_D1_;  // D1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_D2_;  // D2
  SEXP Rsh_Fir_reg_D3_;  // D3
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_D5_;  // D5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_pos2_;  // pos2
  SEXP Rsh_Fir_reg_pos3_;  // pos3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_pos4_;  // pos4
  SEXP Rsh_Fir_reg_pos5_;  // pos5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_pos6_;  // pos6
  SEXP Rsh_Fir_reg_pos7_;  // pos7
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_Is;  // Is
  SEXP Rsh_Fir_reg_Is1_;  // Is1
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_V7_;  // V7
  SEXP Rsh_Fir_reg_V8_;  // V8
  SEXP Rsh_Fir_reg_Is2_;  // Is2
  SEXP Rsh_Fir_reg_Is3_;  // Is3
  SEXP Rsh_Fir_reg_V9_;  // V9
  SEXP Rsh_Fir_reg_V10_;  // V10
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89

  // Bind parameters
  Rsh_Fir_reg_V = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st V = V
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_V, RHO);
  (void)(Rsh_Fir_reg_V);
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // st d = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // c = `is.object`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L30() else L31(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L31(r1)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r1_;
    goto L31_;
  }

L1_:;
  // st p = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L2_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L3(c1) else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L3(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L3_;
  } else {
  // L37()
    goto L37_;
  }

L3_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c10 then L5(c10) else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L5(c10)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c10_;
    goto L5_;
  } else {
  // L43()
    goto L43_;
  }

L4_:;
  // r13 = `!=`(r11, 2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c8 = `||`(c6, c7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L3(c8)
  // L3(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L3_;

L5_:;
  // c21 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c21 then L50() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L50()
    goto L50_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // r15 = `!=`(p5, dx3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c19 = `||`(c17, c18)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L5(c19)
  // L5(c19)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c19_;
  goto L5_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard3 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L9_:;
  // r23 = `!`(r19)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // D = ld D
  Rsh_Fir_reg_D = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

L10_:;
  // l = ld Is
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c23 = `is.object`(l)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c23 then L67() else L68(r27, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L67()
    goto L67_;
  } else {
  // L68(r27, l)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L68_;
  }

L11_:;
  // r33 = `/`(r31, dx5)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // r34 = sqrt(r33)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L10(r34)
  // L10(r34)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r34_;
  goto L10_;

L12_:;
  // st Is = dx7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // l3 = ld Is
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c24 = `is.object`(l3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c24 then L71() else L72(NA_REAL, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L71()
    goto L71_;
  } else {
  // L72(NA_REAL, l3)
    Rsh_Fir_reg_r41_ = Rsh_const(CCP, 10);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L72_;
  }

L13_:;
  // st Is = dx9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard5 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L14_:;
  // c25 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c25 then L15(c25) else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L15(c25)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c25_;
    goto L15_;
  } else {
  // L79()
    goto L79_;
  }

L15_:;
  // c37 = `as.logical`(c26)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c37 then L88() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L88()
    goto L88_;
  } else {
  // L18()
    goto L18_;
  }

L16_:;
  // c34 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c35 = `||`(c30, c34)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L15(c35)
  // L15(c35)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c35_;
  goto L15_;

L17_:;
  // r55 = `!`(r53)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r56 = dyn any1(r55)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L86() else D22()
  // L86()
  goto L86_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // V7 = ld V
  Rsh_Fir_reg_V7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L92() else D25()
  // L92()
  goto L92_;

L20_:;
  // r66 = `*`(r63, r64)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // l6 = ld r
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c38 = `is.object`(l6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c38 then L97() else L98(r66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L97()
    goto L97_;
  } else {
  // L98(r66)
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
    goto L98_;
  }

L21_:;
  // st r = dx11
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

L22_:;
  // goto L25()
  // L25()
  goto L25_;

L23_:;
  // st r = dx13
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L25()
  // L25()
  goto L25_;

L24_:;
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r86 = dyn ___3(l14, r82, r83)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L23(r81, r86)
  // L23(r81, r86)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r86_;
  goto L23_;

L25_:;
  // r88 = ld r
  Rsh_Fir_reg_r88_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L111() else D32()
  // L111()
  goto L111_;

L26_:;
  // V1 = ld V
  Rsh_Fir_reg_V1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r = dyn base(<sym V>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [V1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_V1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L28_:;
  // V2 = force? V1
  Rsh_Fir_reg_V2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_V1_);
  // checkMissing(V2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_V2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn dim(V2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_V2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L30_:;
  // dr = tryDispatchBuiltin.1("[", r1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r5 = dyn __(r4, 1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L1_;

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L33_:;
  // V3 = ld V
  Rsh_Fir_reg_V3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

L34_:;
  // r6 = dyn base1(<sym V>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D2_:;
  // deopt 13 [V3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_V3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L35_:;
  // V4 = force? V3
  Rsh_Fir_reg_V4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_V3_);
  // checkMissing(V4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_V4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r8 = dyn is_numeric(V4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_V4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

D3_:;
  // deopt 16 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L37_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

L39_:;
  // r10 = dyn base2(<sym d>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(c1, r10)
  // L4(c1, r10)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

D4_:;
  // deopt 20 [c1, d]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L40_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r12 = dyn length(d1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

D5_:;
  // deopt 23 [c1, r12]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L4(c1, r12)
  // L4(c1, r12)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L4_;

L43_:;
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L44() else D6()
  // L44()
  goto L44_;

D6_:;
  // deopt 27 [c10, p]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_p;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L44_:;
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L45() else D7()
  // L45()
  goto L45_;

D7_:;
  // deopt 28 [c10, p1, d2]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(28, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L45_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(d3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c13 then L46() else L47(c10, p1, d3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L46()
    goto L46_;
  } else {
  // L47(c10, p1, d3)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_p3_ = Rsh_Fir_reg_p1_;
    Rsh_Fir_reg_d5_ = Rsh_Fir_reg_d3_;
    goto L47_;
  }

L46_:;
  // dr2 = tryDispatchBuiltin.1("[", d3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_d3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc1 then L48() else L47(c10, p1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L48()
    goto L48_;
  } else {
  // L47(c10, p1, dr2)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_p3_ = Rsh_Fir_reg_p1_;
    Rsh_Fir_reg_d5_ = Rsh_Fir_reg_dr2_;
    goto L47_;
  }

L47_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r14 = dyn __1(d5, 2)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(c15, p3, r14)
  // L6(c15, p3, r14)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_p5_ = Rsh_Fir_reg_p3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L6_;

L48_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L6(c10, p1, dx2)
  // L6(c10, p1, dx2)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_p5_ = Rsh_Fir_reg_p1_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

L50_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L51() else D8()
  // L51()
  goto L51_;

D8_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // r16 = dyn stop("'V' is not a square numeric matrix")
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L52() else D9()
  // L52()
  goto L52_;

D9_:;
  // deopt 38 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L8()
  // L8()
  goto L8_;

L54_:;
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L56() else D10()
  // L56()
  goto L56_;

L55_:;
  // r18 = dyn base3(<lang `<-`(Is, `<-`(D, diag(V, names=FALSE)))>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D10_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p6 = prom<V +>{
  //   V5 = ld V;
  //   V6 = force? V5;
  //   checkMissing(V6);
  //   return V6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4209080914_, CCP, RHO);
  // r21 = dyn diag[, names](p6, FALSE)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

D11_:;
  // deopt 48 [r21]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L57_:;
  // st D = r21
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // st Is = r21
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r22 = dyn is_na(r21)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

D12_:;
  // deopt 52 [r22]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L9(r22)
  // L9(r22)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r22_;
  goto L9_;

D13_:;
  // deopt 53 [r23, D]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_D;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L59_:;
  // D1 = force? D
  Rsh_Fir_reg_D1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D);
  // checkMissing(D1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_D1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r24 = `>`(D1, 0.0)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_D1_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // r25 = `&&`(r23, r24)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // st pos = r25
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym4 = ldf sqrt
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base4 = ldf sqrt in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard4 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // D2 = ld D
  Rsh_Fir_reg_D2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L62() else D14()
  // L62()
  goto L62_;

L61_:;
  // r26 = dyn base4(<lang `/`(1.0, `[`(D, pos))>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L10_;

D14_:;
  // deopt 61 [1.0, D2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_D2_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L62_:;
  // D3 = force? D2
  Rsh_Fir_reg_D3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_D2_);
  // checkMissing(D3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_D3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(D3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_D3_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c22 then L63() else L64(1.0, D3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L63()
    goto L63_;
  } else {
  // L64(1.0, D3)
    Rsh_Fir_reg_r29_ = Rsh_const(CCP, 28);
    Rsh_Fir_reg_D5_ = Rsh_Fir_reg_D3_;
    goto L64_;
  }

L63_:;
  // dr4 = tryDispatchBuiltin.1("[", D3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_D3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc2 then L65() else L64(1.0, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L65()
    goto L65_;
  } else {
  // L64(1.0, dr4)
    Rsh_Fir_reg_r29_ = Rsh_const(CCP, 28);
    Rsh_Fir_reg_D5_ = Rsh_Fir_reg_dr4_;
    goto L64_;
  }

L64_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L66() else D15()
  // L66()
  goto L66_;

L65_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L11(1.0, dx4)
  // L11(1.0, dx4)
  Rsh_Fir_reg_r31_ = Rsh_const(CCP, 28);
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L11_;

D15_:;
  // deopt 63 [r29, D5, pos]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_D5_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_pos;
  Rsh_Fir_deopt(63, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L66_:;
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r32 = dyn __2(D5, pos1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_D5_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r29, r32)
  // L11(r29, r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r32_;
  goto L11_;

L67_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l, r27)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args66);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc3 then L69() else L68(r27, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L69()
    goto L69_;
  } else {
  // L68(r27, dr6)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L68_;
  }

L68_:;
  // pos2 = ld pos
  Rsh_Fir_reg_pos2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L70() else D16()
  // L70()
  goto L70_;

L69_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L12(dx6)
  // L12(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L12_;

D16_:;
  // deopt 69 [r36, l2, r27, pos2]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_pos2_;
  Rsh_Fir_deopt(69, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L70_:;
  // pos3 = force? pos2
  Rsh_Fir_reg_pos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r39 = dyn ___(l2, r27, pos3)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_pos3_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r39)
  // L12(r39)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r39_;
  goto L12_;

L71_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l3, NA_REAL)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc4 then L73() else L72(NA_REAL, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L73()
    goto L73_;
  } else {
  // L72(NA_REAL, dr8)
    Rsh_Fir_reg_r41_ = Rsh_const(CCP, 10);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L72_;
  }

L72_:;
  // pos4 = ld pos
  Rsh_Fir_reg_pos4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L74() else D17()
  // L74()
  goto L74_;

L73_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L13(dx8)
  // L13(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L13_;

D17_:;
  // deopt 76 [r41, l5, NA_REAL, pos4]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_pos4_;
  Rsh_Fir_deopt(76, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L74_:;
  // pos5 = force? pos4
  Rsh_Fir_reg_pos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos4_);
  // checkMissing(pos5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_pos5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r44 = `!`(pos5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_pos5_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r45 = dyn ___1(l5, NA_REAL, r44)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(r45)
  // L13(r45)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r45_;
  goto L13_;

L75_:;
  // pos6 = ld pos
  Rsh_Fir_reg_pos6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L77() else D18()
  // L77()
  goto L77_;

L76_:;
  // r46 = dyn base5(<lang `!`(pos)>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L14(r46)
  // L14(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L14_;

D18_:;
  // deopt 83 [pos6]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_pos6_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L77_:;
  // pos7 = force? pos6
  Rsh_Fir_reg_pos7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos6_);
  // checkMissing(pos7)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_pos7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r48 = `!`(pos7)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_pos7_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r49 = dyn any(r48)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L78() else D19()
  // L78()
  goto L78_;

D19_:;
  // deopt 87 [r49]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L14(r49)
  // L14(r49)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r49_;
  goto L14_;

L79_:;
  // sym6 = ldf any
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf any in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard6 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L80_:;
  // sym7 = ldf `is.finite`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base7 = ldf `is.finite` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard7 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L81_:;
  // r50 = dyn base6(<lang `!`(is.finite(Is))>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(c25, r50)
  // L16(c25, r50)
  Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L16_;

L82_:;
  // Is = ld Is
  Rsh_Fir_reg_Is = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L84() else D20()
  // L84()
  goto L84_;

L83_:;
  // r52 = dyn base7(<sym Is>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L17(c25, r52)
  // L17(c25, r52)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L17_;

D20_:;
  // deopt 92 [c25, Is]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_Is;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L84_:;
  // Is1 = force? Is
  Rsh_Fir_reg_Is1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Is);
  // checkMissing(Is1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_Is1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r54 = dyn is_finite(Is1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_Is1_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L85() else D21()
  // L85()
  goto L85_;

D21_:;
  // deopt 95 [c25, r54]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L17(c25, r54)
  // L17(c25, r54)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L17_;

D22_:;
  // deopt 98 [c33, r56]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L16(c33, r56)
  // L16(c33, r56)
  Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r56_;
  goto L16_;

L88_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L89() else D23()
  // L89()
  goto L89_;

D23_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L89_:;
  // r57 = dyn warning("diag(V) had non-positive or NA entries; the non-finite result may be dubious")
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L90() else D24()
  // L90()
  goto L90_;

D24_:;
  // deopt 103 [r57]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L19()
  // L19()
  goto L19_;

D25_:;
  // deopt 106 [V7]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_V7_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L92_:;
  // V8 = force? V7
  Rsh_Fir_reg_V8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_V7_);
  // checkMissing(V8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_V8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // st r = V8
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_V8_, RHO);
  (void)(Rsh_Fir_reg_V8_);
  // Is2 = ld Is
  Rsh_Fir_reg_Is2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L93() else D26()
  // L93()
  goto L93_;

D26_:;
  // deopt 109 [Is2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_Is2_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L93_:;
  // Is3 = force? Is2
  Rsh_Fir_reg_Is3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Is2_);
  // checkMissing(Is3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_Is3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // V9 = ld V
  Rsh_Fir_reg_V9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L94() else D27()
  // L94()
  goto L94_;

D27_:;
  // deopt 110 [Is3, V9]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_Is3_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_V9_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L94_:;
  // V10 = force? V9
  Rsh_Fir_reg_V10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_V9_);
  // checkMissing(V10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_V10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r59 = `*`(Is3, V10)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_Is3_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_V10_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // sym8 = ldf rep
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base8 = ldf rep in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard8 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L95_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r65 = dyn rep(<sym Is>, <sym p>)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L20(r59, r65)
  // L20(r59, r65)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L20_;

L96_:;
  // r62 = dyn base8[, each](<sym Is>, <sym p>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L20(r59, r62)
  // L20(r59, r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
  goto L20_;

L97_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l6, r66)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args94[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args94);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc5 then L99() else L98(r66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L99()
    goto L99_;
  } else {
  // L98(r66)
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
    goto L98_;
  }

L98_:;
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r71 = dyn ___2(l6, <missing>, r66)
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args96[2] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L21(r71)
  // L21(r71)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r71_;
  goto L21_;

L99_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L21(dx10)
  // L21(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L21_;

D28_:;
  // deopt 121 [p7]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L100_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c39 = `as.logical`(p8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c39 then L101() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L101()
    goto L101_;
  } else {
  // L22()
    goto L22_;
  }

L101_:;
  // l9 = ld r
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c40 = `is.object`(l9)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if c40 then L102() else L103(1.0, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L102()
    goto L102_;
  } else {
  // L103(1.0, l9)
    Rsh_Fir_reg_r73_ = Rsh_const(CCP, 28);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L103_;
  }

L102_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l9, 1.0)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args101[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args101);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc6 then L104() else L103(1.0, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L104()
    goto L104_;
  } else {
  // L103(1.0, dr12)
    Rsh_Fir_reg_r73_ = Rsh_const(CCP, 28);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr12_;
    goto L103_;
  }

L103_:;
  // sym9 = ldf `seq.int`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base9 = ldf `seq.int` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard9 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L104_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L23(1.0, dx12)
  // L23(1.0, dx12)
  Rsh_Fir_reg_r75_ = Rsh_const(CCP, 28);
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L23_;

L105_:;
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L107() else D29()
  // L107()
  goto L107_;

L106_:;
  // r80 = dyn base9[from, by, `length.out`](1, <lang `+`(p, 1)>, <sym p>)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args105[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L24(r73, l11, 1.0, r80)
  // L24(r73, l11, 1.0, r80)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_r82_ = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r80_;
  goto L24_;

D29_:;
  // deopt 130 [r73, l11, 1.0, p9]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_deopt(130, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L107_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r84 = `+`(p10, 1)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // p11 = ld p
  Rsh_Fir_reg_p11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L108() else D30()
  // L108()
  goto L108_;

D30_:;
  // deopt 135 [r73, l11, 1.0, p11]
  SEXP Rsh_Fir_array_deopt_stack27[4];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_p11_;
  Rsh_Fir_deopt(135, 4, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L108_:;
  // p12 = force? p11
  Rsh_Fir_reg_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p11_);
  // checkMissing(p12)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r85 = dyn seq_int(1, r84, p12)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L109() else D31()
  // L109()
  goto L109_;

D31_:;
  // deopt 139 [r73, l11, 1.0, r85]
  SEXP Rsh_Fir_array_deopt_stack28[4];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(139, 4, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L24(r73, l11, 1.0, r85)
  // L24(r73, l11, 1.0, r85)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_r82_ = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r85_;
  goto L24_;

D32_:;
  // deopt 144 [r88]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L111_:;
  // r89 = force? r88
  Rsh_Fir_reg_r89_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r88_);
  // checkMissing(r89)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r89_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r89
  return Rsh_Fir_reg_r89_;
}
SEXP Rsh_Fir_user_promise_inner4209080914_(SEXP CCP, SEXP RHO) {
  // V5 = ld V
  Rsh_Fir_reg_V5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // V6 = force? V5
  Rsh_Fir_reg_V6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_V5_);
  // checkMissing(V6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_V6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return V6
  return Rsh_Fir_reg_V6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
