#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2148457334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2148457334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2148457334_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2148457334_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2148457334
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2148457334_, RHO, CCP);
  // st spl_coef_conv = r
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
SEXP Rsh_Fir_user_function_inner2148457334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2148457334 dynamic dispatch ([z])

  return Rsh_Fir_user_version_inner2148457334_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2148457334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2148457334 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2148457334/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_diff;  // diff
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_z6_;  // z6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_diff1_;  // diff1
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_z10_;  // z10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_z12_;  // z12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_z13_;  // z13
  SEXP Rsh_Fir_reg_z14_;  // z14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_z16_;  // z16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_z17_;  // z17
  SEXP Rsh_Fir_reg_z18_;  // z18
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_z20_;  // z20
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_b0_;  // b0
  SEXP Rsh_Fir_reg_b1_;  // b1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_b2_;  // b2
  SEXP Rsh_Fir_reg_b3_;  // b3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_h;  // h
  SEXP Rsh_Fir_reg_h1_;  // h1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_h2_;  // h2
  SEXP Rsh_Fir_reg_h3_;  // h3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_b4_;  // b4
  SEXP Rsh_Fir_reg_b5_;  // b5
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_b7_;  // b7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_b8_;  // b8
  SEXP Rsh_Fir_reg_b9_;  // b9
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_b11_;  // b11
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_h4_;  // h4
  SEXP Rsh_Fir_reg_h5_;  // h5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_h7_;  // h7
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_h8_;  // h8
  SEXP Rsh_Fir_reg_h9_;  // h9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_h11_;  // h11
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_cc;  // cc
  SEXP Rsh_Fir_reg_cc1_;  // cc1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_h12_;  // h12
  SEXP Rsh_Fir_reg_h13_;  // h13
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_b12_;  // b12
  SEXP Rsh_Fir_reg_b13_;  // b13
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_b14_;  // b14
  SEXP Rsh_Fir_reg_b15_;  // b15
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_h14_;  // h14
  SEXP Rsh_Fir_reg_h15_;  // h15
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_dd;  // dd
  SEXP Rsh_Fir_reg_dd1_;  // dd1
  SEXP Rsh_Fir_reg_dd2_;  // dd2
  SEXP Rsh_Fir_reg_dd3_;  // dd3
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_dd5_;  // dd5
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_z21_;  // z21
  SEXP Rsh_Fir_reg_z22_;  // z22

  // Bind parameters
  Rsh_Fir_reg_z = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st z = z
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_z, RHO);
  (void)(Rsh_Fir_reg_z);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L0_:;
  // st n = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // diff = ldf diff
  Rsh_Fir_reg_diff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L1_:;
  // st b0 = dx11
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // z17 = ld z
  Rsh_Fir_reg_z17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

L2_:;
  // st b1 = dx17
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

L3_:;
  // r30 = `*`(r27, dx19)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // b4 = ld b0
  Rsh_Fir_reg_b4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

L4_:;
  // b8 = ld b1
  Rsh_Fir_reg_b8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

L5_:;
  // r47 = `*`(r44, dx27)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // r48 = `+`(dx26, r47)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // h4 = ld h
  Rsh_Fir_reg_h4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L60() else D20()
  // L60()
  goto L60_;

L6_:;
  // r59 = `*`(r56, dx29)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // r60 = `+`(r55, r59)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // h8 = ld h
  Rsh_Fir_reg_h8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L65() else D22()
  // L65()
  goto L65_;

L7_:;
  // r67 = `^`(dx31, 2.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // r68 = `/`(r64, r67)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st c1 = r68
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L8_:;
  // l = ld z
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c15 = `is.object`(l)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c15 then L76() else L77(r70, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L76()
    goto L76_;
  } else {
  // L77(r70, l)
    Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r70_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L77_;
  }

L9_:;
  // l3 = ld z
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c18 = `is.object`(l3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c18 then L94() else L95(r84, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L94()
    goto L94_;
  } else {
  // L95(r84, l3)
    Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L95_;
  }

L10_:;
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r87 = dyn c17(dd1, dx35)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dd1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L92() else D35()
  // L92()
  goto L92_;

L11_:;
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base(<lang `$`(z, x)>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [z1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `is.object`(z2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L15() else L16(z2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L16(z2)
    Rsh_Fir_reg_z4_ = Rsh_Fir_reg_z2_;
    goto L16_;
  }

L14_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn length(dx1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L15_:;
  // dr = tryDispatchBuiltin.1("$", z2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_z2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L17()
    goto L17_;
  } else {
  // L16(dr)
    Rsh_Fir_reg_z4_ = Rsh_Fir_reg_dr;
    goto L16_;
  }

L16_:;
  // r2 = `$`(z4, <sym x>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L14(r2)
  // L14(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L14_;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L14(dx)
  // L14(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L14_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p = prom<V +>{
  //   z5 = ld z;
  //   z6 = force? z5;
  //   checkMissing(z6);
  //   c1 = `is.object`(z6);
  //   if c1 then L1() else L2(z6);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", z6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(z8):
  //   r4 = `$`(z8, <sym x>);
  //   goto L0(r4);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2148457334_, CCP, RHO);
  // r6 = dyn diff(p)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // st h = r6
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // diff1 = ldf diff
  Rsh_Fir_reg_diff1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p1 = prom<V +>{
  //   z9 = ld z;
  //   z10 = force? z9;
  //   checkMissing(z10);
  //   c2 = `is.object`(z10);
  //   if c2 then L1() else L2(z10);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", z10);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(z12):
  //   r7 = `$`(z12, <sym y>);
  //   goto L0(r7);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2148457334_1, CCP, RHO);
  // r9 = dyn diff1(p1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 16 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // r10 = `-`(<missing>, r9)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // st y = r10
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // z13 = ld z
  Rsh_Fir_reg_z13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

D6_:;
  // deopt 19 [z13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_z13_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // z14 = force? z13
  Rsh_Fir_reg_z14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z13_);
  // checkMissing(z14)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_z14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(z14)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_z14_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c3 then L25() else L26(z14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L25()
    goto L25_;
  } else {
  // L26(z14)
    Rsh_Fir_reg_z16_ = Rsh_Fir_reg_z14_;
    goto L26_;
  }

L24_:;
  // c4 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c4 then L28() else L29(dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L28()
    goto L28_;
  } else {
  // L29(dx7)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    goto L29_;
  }

L25_:;
  // dr6 = tryDispatchBuiltin.1("$", z14)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_z14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc3 then L27() else L26(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr6)
    Rsh_Fir_reg_z16_ = Rsh_Fir_reg_dr6_;
    goto L26_;
  }

L26_:;
  // r11 = `$`(z16, <sym b>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_z16_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L24(r11)
  // L24(r11)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r11_;
  goto L24_;

L27_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L24(dx6)
  // L24(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L24_;

L28_:;
  // dr8 = tryDispatchBuiltin.1("[", dx7)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc4 then L30() else L29(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr8)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dr8_;
    goto L29_;
  }

L29_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L30_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L1(dx10)
  // L1(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L1_;

D7_:;
  // deopt 22 [dx9, n]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r12 = `-`(<missing>, n1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r13 = dyn __(dx9, r12)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r13_;
  goto L1_;

D8_:;
  // deopt 27 [z17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_z17_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // z18 = force? z17
  Rsh_Fir_reg_z18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z17_);
  // checkMissing(z18)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_z18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(z18)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_z18_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c5 then L34() else L35(z18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L34()
    goto L34_;
  } else {
  // L35(z18)
    Rsh_Fir_reg_z20_ = Rsh_Fir_reg_z18_;
    goto L35_;
  }

L33_:;
  // c6 = `is.object`(dx13)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c6 then L37() else L38(dx13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L37()
    goto L37_;
  } else {
  // L38(dx13)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    goto L38_;
  }

L34_:;
  // dr10 = tryDispatchBuiltin.1("$", z18)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_z18_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc5 then L36() else L35(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr10)
    Rsh_Fir_reg_z20_ = Rsh_Fir_reg_dr10_;
    goto L35_;
  }

L35_:;
  // r14 = `$`(z20, <sym b>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_z20_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L33(r14)
  // L33(r14)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r14_;
  goto L33_;

L36_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L33(dx12)
  // L33(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L33_;

L37_:;
  // dr12 = tryDispatchBuiltin.1("[", dx13)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc6 then L39() else L38(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L39()
    goto L39_;
  } else {
  // L38(dr12)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dr12_;
    goto L38_;
  }

L38_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r15 = dyn __1(dx15, -1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r15)
  // L2(r15)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r15_;
  goto L2_;

L39_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L2(dx16)
  // L2(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L2_;

D9_:;
  // deopt 35 [3.0, y]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r16 = `*`(3.0, y1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // b0 = ld b0
  Rsh_Fir_reg_b0_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

D10_:;
  // deopt 38 [r16, 2.0, b0]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_b0_;
  Rsh_Fir_deopt(38, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L41_:;
  // b1 = force? b0
  Rsh_Fir_reg_b1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b0_);
  // checkMissing(b1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_b1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r17 = `*`(2.0, b1)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_b1_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // b2 = ld b1
  Rsh_Fir_reg_b2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

D11_:;
  // deopt 40 [r16, r17, b2]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_b2_;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // b3 = force? b2
  Rsh_Fir_reg_b3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b2_);
  // checkMissing(b3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_b3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r18 = `+`(r17, b3)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_b3_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // h = ld h
  Rsh_Fir_reg_h = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L43() else D12()
  // L43()
  goto L43_;

D12_:;
  // deopt 42 [r16, r18, h]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_h;
  Rsh_Fir_deopt(42, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L43_:;
  // h1 = force? h
  Rsh_Fir_reg_h1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h);
  // checkMissing(h1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_h1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r19 = `*`(r18, h1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_h1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // r20 = `+`(r16, r19)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // r21 = `-`(<missing>, r20)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // h2 = ld h
  Rsh_Fir_reg_h2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

D13_:;
  // deopt 46 [r21, h2]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_h2_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L44_:;
  // h3 = force? h2
  Rsh_Fir_reg_h3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h2_);
  // checkMissing(h3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_h3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r22 = `^`(h3, 2.0)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_h3_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // r23 = `/`(r21, r22)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // st cc = r23
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L45() else D14()
  // L45()
  goto L45_;

D14_:;
  // deopt 53 [3.0, y2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L45_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(y3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c7 then L46() else L47(3.0, y3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L46()
    goto L46_;
  } else {
  // L47(3.0, y3)
    Rsh_Fir_reg_r25_ = Rsh_const(CCP, 20);
    Rsh_Fir_reg_y5_ = Rsh_Fir_reg_y3_;
    goto L47_;
  }

L46_:;
  // dr14 = tryDispatchBuiltin.1("[", y3)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc7 then L48() else L47(3.0, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L48()
    goto L48_;
  } else {
  // L47(3.0, dr14)
    Rsh_Fir_reg_r25_ = Rsh_const(CCP, 20);
    Rsh_Fir_reg_y5_ = Rsh_Fir_reg_dr14_;
    goto L47_;
  }

L47_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

L48_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L3(3.0, dx18)
  // L3(3.0, dx18)
  Rsh_Fir_reg_r27_ = Rsh_const(CCP, 20);
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L3_;

D15_:;
  // deopt 55 [r25, y5, n2]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_y5_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r28 = `-`(n3, 1)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r29 = dyn __2(y5, r28)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r25, r29)
  // L3(r25, r29)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r29_;
  goto L3_;

D16_:;
  // deopt 60 [r30, b4]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_b4_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L50_:;
  // b5 = force? b4
  Rsh_Fir_reg_b5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b4_);
  // checkMissing(b5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_b5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(b5)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_b5_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c8 then L51() else L52(r30, b5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L51()
    goto L51_;
  } else {
  // L52(r30, b5)
    Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_b7_ = Rsh_Fir_reg_b5_;
    goto L52_;
  }

L51_:;
  // dr16 = tryDispatchBuiltin.1("[", b5)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_b5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args82);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc8 then L53() else L52(r30, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L53()
    goto L53_;
  } else {
  // L52(r30, dr16)
    Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_b7_ = Rsh_Fir_reg_dr16_;
    goto L52_;
  }

L52_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L54() else D17()
  // L54()
  goto L54_;

L53_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L4(r30, dx20)
  // L4(r30, dx20)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L4_;

D17_:;
  // deopt 62 [r32, b7, n4]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_b7_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(62, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // r35 = `-`(n5, 1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r36 = dyn __3(b7, r35)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_b7_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r32, r36)
  // L4(r32, r36)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r36_;
  goto L4_;

D18_:;
  // deopt 67 [r34, dx21, 2.0, b8]
  SEXP Rsh_Fir_array_deopt_stack16[4];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_b8_;
  Rsh_Fir_deopt(67, 4, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // b9 = force? b8
  Rsh_Fir_reg_b9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b8_);
  // checkMissing(b9)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_b9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(b9)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_b9_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c9 then L56() else L57(r34, dx21, 2.0, b9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L56()
    goto L56_;
  } else {
  // L57(r34, dx21, 2.0, b9)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    Rsh_Fir_reg_r40_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_b11_ = Rsh_Fir_reg_b9_;
    goto L57_;
  }

L56_:;
  // dr18 = tryDispatchBuiltin.1("[", b9)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_b9_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc9 then L58() else L57(r34, dx21, 2.0, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L58()
    goto L58_;
  } else {
  // L57(r34, dx21, 2.0, dr18)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    Rsh_Fir_reg_r40_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_b11_ = Rsh_Fir_reg_dr18_;
    goto L57_;
  }

L57_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L59() else D19()
  // L59()
  goto L59_;

L58_:;
  // dx25 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L5(r34, dx21, 2.0, dx25)
  // L5(r34, dx21, 2.0, dx25)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_r44_ = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx25_;
  goto L5_;

D19_:;
  // deopt 69 [r39, dx23, r40, b11, n6]
  SEXP Rsh_Fir_array_deopt_stack17[5];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_b11_;
  Rsh_Fir_array_deopt_stack17[4] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(69, 5, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L59_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // r45 = `-`(n7, 1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r46 = dyn __4(b11, r45)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_b11_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r39, dx23, r40, r46)
  // L5(r39, dx23, r40, r46)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r46_;
  goto L5_;

D20_:;
  // deopt 75 [r43, r48, h4]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_h4_;
  Rsh_Fir_deopt(75, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L60_:;
  // h5 = force? h4
  Rsh_Fir_reg_h5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h4_);
  // checkMissing(h5)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_h5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(h5)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_h5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c10 then L61() else L62(r43, r48, h5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L61()
    goto L61_;
  } else {
  // L62(r43, r48, h5)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r43_;
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_h7_ = Rsh_Fir_reg_h5_;
    goto L62_;
  }

L61_:;
  // dr20 = tryDispatchBuiltin.1("[", h5)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_h5_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc10 then L63() else L62(r43, r48, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L63()
    goto L63_;
  } else {
  // L62(r43, r48, dr20)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r43_;
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_h7_ = Rsh_Fir_reg_dr20_;
    goto L62_;
  }

L62_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

L63_:;
  // dx28 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L6(r43, r48, dx28)
  // L6(r43, r48, dx28)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L6_;

D21_:;
  // deopt 77 [r51, r52, h7, n8]
  SEXP Rsh_Fir_array_deopt_stack19[4];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_h7_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(77, 4, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L64_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // r57 = `-`(n9, 1)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r58 = dyn __5(h7, r57)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_h7_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r51, r52, r58)
  // L6(r51, r52, r58)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r58_;
  goto L6_;

D22_:;
  // deopt 83 [r60, h8]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_h8_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L65_:;
  // h9 = force? h8
  Rsh_Fir_reg_h9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h8_);
  // checkMissing(h9)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_h9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(h9)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_h9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c11 then L66() else L67(r60, h9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L66()
    goto L66_;
  } else {
  // L67(r60, h9)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r60_;
    Rsh_Fir_reg_h11_ = Rsh_Fir_reg_h9_;
    goto L67_;
  }

L66_:;
  // dr22 = tryDispatchBuiltin.1("[", h9)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_h9_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc11 then L68() else L67(r60, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L68()
    goto L68_;
  } else {
  // L67(r60, dr22)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r60_;
    Rsh_Fir_reg_h11_ = Rsh_Fir_reg_dr22_;
    goto L67_;
  }

L67_:;
  // n10 = ld n
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L69() else D23()
  // L69()
  goto L69_;

L68_:;
  // dx30 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L7(r60, dx30)
  // L7(r60, dx30)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L7_;

D23_:;
  // deopt 85 [r62, h11, n10]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_h11_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L69_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // r65 = `-`(n11, 1)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r66 = dyn __6(h11, r65)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_h11_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r62, r66)
  // L7(r62, r66)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r66_;
  goto L7_;

L70_:;
  // cc = ld cc
  Rsh_Fir_reg_cc = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L72() else D24()
  // L72()
  goto L72_;

L71_:;
  // r69 = dyn base1(<sym cc>, <sym c1>)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r69)
  // L8(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L8_;

D24_:;
  // deopt 96 [cc]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_cc;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // cc1 = force? cc
  Rsh_Fir_reg_cc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cc);
  // checkMissing(cc1)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_cc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c12 = ld c1
  Rsh_Fir_reg_c12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L73() else D25()
  // L73()
  goto L73_;

D25_:;
  // deopt 98 [c12]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L73_:;
  // c13 = force? c12
  Rsh_Fir_reg_c13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c12_);
  // checkMissing(c13)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_c13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r71 = dyn c14(cc1, c13)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_cc1_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L74() else D26()
  // L74()
  goto L74_;

D26_:;
  // deopt 101 [r71]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L8(r71)
  // L8(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L8_;

L75_:;
  // st z = dx33
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L79() else D27()
  // L79()
  goto L79_;

L76_:;
  // dr24 = tryDispatchBuiltin.0("$<-", l, r70)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args116);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc12 then L78() else L77(r70, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L78()
    goto L78_;
  } else {
  // L77(r70, dr24)
    Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r70_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr24_;
    goto L77_;
  }

L77_:;
  // r76 = `$<-`(l2, <sym c>, r70)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L75(r76)
  // L75(r76)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r76_;
  goto L75_;

L78_:;
  // dx32 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L75(dx32)
  // L75(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L75_;

D27_:;
  // deopt 106 [2.0, y6]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_y6_;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L79_:;
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // r77 = `*`(2.0, y7)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // h12 = ld h
  Rsh_Fir_reg_h12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L80() else D28()
  // L80()
  goto L80_;

D28_:;
  // deopt 108 [r77, h12]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_h12_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L80_:;
  // h13 = force? h12
  Rsh_Fir_reg_h13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h12_);
  // checkMissing(h13)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_h13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // r78 = `/`(r77, h13)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_h13_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // b12 = ld b0
  Rsh_Fir_reg_b12_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L81() else D29()
  // L81()
  goto L81_;

D29_:;
  // deopt 110 [r78, b12]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_b12_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L81_:;
  // b13 = force? b12
  Rsh_Fir_reg_b13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b12_);
  // checkMissing(b13)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_b13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // r79 = `+`(r78, b13)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_b13_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // b14 = ld b1
  Rsh_Fir_reg_b14_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L82() else D30()
  // L82()
  goto L82_;

D30_:;
  // deopt 112 [r79, b14]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_b14_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L82_:;
  // b15 = force? b14
  Rsh_Fir_reg_b15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b14_);
  // checkMissing(b15)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_b15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // r80 = `+`(r79, b15)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_b15_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // h14 = ld h
  Rsh_Fir_reg_h14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L83() else D31()
  // L83()
  goto L83_;

D31_:;
  // deopt 114 [r80, h14]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_h14_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L83_:;
  // h15 = force? h14
  Rsh_Fir_reg_h15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h14_);
  // checkMissing(h15)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_h15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // r81 = `^`(h15, 2.0)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_h15_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // r82 = `/`(r80, r81)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // st dd = r82
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args131);
  // if guard2 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // dd = ld dd
  Rsh_Fir_reg_dd = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L86() else D32()
  // L86()
  goto L86_;

L85_:;
  // r83 = dyn base2(<sym dd>, <lang `[`(dd, `-`(n, 1))>)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(r83)
  // L9(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L9_;

D32_:;
  // deopt 122 [dd]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_dd;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L86_:;
  // dd1 = force? dd
  Rsh_Fir_reg_dd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd);
  // checkMissing(dd1)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // dd2 = ld dd
  Rsh_Fir_reg_dd2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L87() else D33()
  // L87()
  goto L87_;

D33_:;
  // deopt 124 [dd2]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_dd2_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L87_:;
  // dd3 = force? dd2
  Rsh_Fir_reg_dd3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd2_);
  // checkMissing(dd3)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dd3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(dd3)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dd3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c16 then L88() else L89(dd3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L88()
    goto L88_;
  } else {
  // L89(dd3)
    Rsh_Fir_reg_dd5_ = Rsh_Fir_reg_dd3_;
    goto L89_;
  }

L88_:;
  // dr26 = tryDispatchBuiltin.1("[", dd3)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_dd3_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args136);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if dc13 then L90() else L89(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L90()
    goto L90_;
  } else {
  // L89(dr26)
    Rsh_Fir_reg_dd5_ = Rsh_Fir_reg_dr26_;
    goto L89_;
  }

L89_:;
  // n12 = ld n
  Rsh_Fir_reg_n12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L91() else D34()
  // L91()
  goto L91_;

L90_:;
  // dx34 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L10(dx34)
  // L10(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L10_;

D34_:;
  // deopt 126 [dd5, n12]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_dd5_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_n12_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L91_:;
  // n13 = force? n12
  Rsh_Fir_reg_n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n12_);
  // checkMissing(n13)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // r85 = `-`(n13, 1)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_n13_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r86 = dyn __7(dd5, r85)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dd5_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r86)
  // L10(r86)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r86_;
  goto L10_;

D35_:;
  // deopt 132 [r87]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L9(r87)
  // L9(r87)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r87_;
  goto L9_;

L93_:;
  // st z = dx37
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // z21 = ld z
  Rsh_Fir_reg_z21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L97() else D36()
  // L97()
  goto L97_;

L94_:;
  // dr28 = tryDispatchBuiltin.0("$<-", l3, r84)
  SEXP Rsh_Fir_array_args142[3];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args142[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args142);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc14 then L96() else L95(r84, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L96()
    goto L96_;
  } else {
  // L95(r84, dr28)
    Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr28_;
    goto L95_;
  }

L95_:;
  // r92 = `$<-`(l5, <sym d>, r84)
  SEXP Rsh_Fir_array_args144[3];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args144[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L93(r92)
  // L93(r92)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r92_;
  goto L93_;

L96_:;
  // dx36 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L93(dx36)
  // L93(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L93_;

D36_:;
  // deopt 136 [z21]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_z21_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L97_:;
  // z22 = force? z21
  Rsh_Fir_reg_z22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z21_);
  // checkMissing(z22)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_z22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z22
  return Rsh_Fir_reg_z22_;
}
SEXP Rsh_Fir_user_promise_inner2148457334_(SEXP CCP, SEXP RHO) {
  // z5 = ld z
  Rsh_Fir_reg_z5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z6 = force? z5
  Rsh_Fir_reg_z6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z5_);
  // checkMissing(z6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_z6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(z6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_z6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(z6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(z6)
    Rsh_Fir_reg_z8_ = Rsh_Fir_reg_z6_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", z6)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_z6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_z8_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r4 = `$`(z8, <sym x>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_z8_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2148457334_1(SEXP CCP, SEXP RHO) {
  // z9 = ld z
  Rsh_Fir_reg_z9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z10 = force? z9
  Rsh_Fir_reg_z10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z9_);
  // checkMissing(z10)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_z10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(z10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_z10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(z10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(z10)
    Rsh_Fir_reg_z12_ = Rsh_Fir_reg_z10_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", z10)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_z10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_z12_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r7 = `$`(z12, <sym y>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_z12_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r7_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
