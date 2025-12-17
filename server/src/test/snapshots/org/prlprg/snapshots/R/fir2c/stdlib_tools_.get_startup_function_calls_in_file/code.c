#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner490449083_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner490449083_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner490449083_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner490449083_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner490449083_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner490449083_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner490449083_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner490449083_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner490449083
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner490449083_, RHO, CCP);
  // st `.get_startup_function_calls_in_file` = r
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
SEXP Rsh_Fir_user_function_inner490449083_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner490449083 dynamic dispatch ([file, encoding])

  return Rsh_Fir_user_version_inner490449083_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner490449083_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner490449083 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner490449083/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_encoding_isMissing;  // encoding_isMissing
  SEXP Rsh_Fir_reg_encoding_orDefault;  // encoding_orDefault
  SEXP Rsh_Fir_reg__parse_code_file;  // _parse_code_file
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_exprs;  // exprs
  SEXP Rsh_Fir_reg_exprs1_;  // exprs1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_e5_;  // e5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_e7_;  // e7
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_e9_;  // e9
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_e10_;  // e10
  SEXP Rsh_Fir_reg_e11_;  // e11
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_e13_;  // e13
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i45_;  // i45
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_is_call;  // is_call
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_i51_;  // i51
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_c70_;  // c70
  SEXP Rsh_Fir_reg_i56_;  // i56
  SEXP Rsh_Fir_reg_c72_;  // c72
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_as_character2_;  // as_character2
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c75_;  // c75
  SEXP Rsh_Fir_reg_c76_;  // c76
  SEXP Rsh_Fir_reg_c78_;  // c78
  SEXP Rsh_Fir_reg_i61_;  // i61
  SEXP Rsh_Fir_reg_c80_;  // c80
  SEXP Rsh_Fir_reg_w;  // w
  SEXP Rsh_Fir_reg_w1_;  // w1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c81_;  // c81
  SEXP Rsh_Fir_reg_c82_;  // c82
  SEXP Rsh_Fir_reg_c84_;  // c84
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_i67_;  // i67
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_i70_;  // i70
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_as_character3_;  // as_character3
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_i73_;  // i73
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_calls;  // calls
  SEXP Rsh_Fir_reg_calls1_;  // calls1
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_c85_;  // c85
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_i74_;  // i74
  SEXP Rsh_Fir_reg_calls2_;  // calls2
  SEXP Rsh_Fir_reg_calls3_;  // calls3

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_encoding = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if encoding_isMissing then L0(NA_LGL) else L0(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L0(NA_LGL)
    Rsh_Fir_reg_encoding_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L0_;
  }

L0_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // _parse_code_file = ldf `.parse_code_file`
  Rsh_Fir_reg__parse_code_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L1_:;
  // st calls = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // exprs = ld exprs
  Rsh_Fir_reg_exprs = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L32() else D3()
  // L32()
  goto L32_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if c then L33() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L33()
    goto L33_;
  } else {
  // L26()
    goto L26_;
  }

L3_:;
  // r9 = `>`(r7, 2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L38() else L4(i7, c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L38()
    goto L38_;
  } else {
  // L4(i7, c1)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L4_;
  }

L4_:;
  // c16 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c16 then L46() else L7(i9, c16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L46()
    goto L46_;
  } else {
  // L7(i9, c16)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i9_;
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c16_;
    goto L7_;
  }

L5_:;
  // c13 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c14 = `&&`(c6, c13)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L4(i12, c14)
  // L4(i12, c14)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c14_;
  goto L4_;

L6_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c12 = `is.symbol`(dx1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(390, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L5(i16, c11, c12)
  // L5(i16, c11, c12)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c12_;
  goto L5_;

L7_:;
  // c23 = `as.logical`(c18)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c23 then L50() else L8(i19, c23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L50()
    goto L50_;
  } else {
  // L8(i19, c23)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c23_;
    goto L8_;
  }

L8_:;
  // c40 = `as.logical`(c25)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c40 then L62() else L12(i22, c40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L62()
    goto L62_;
  } else {
  // L12(i22, c40)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i22_;
    Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c40_;
    goto L12_;
  }

L9_:;
  // r29 = `==`(r23, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c37 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c38 = `&&`(c28, c37)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L8(i25, c38)
  // L8(i25, c38)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c38_;
  goto L8_;

L10_:;
  // st y = r25
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r28 = dyn length1(r25)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L60() else D11()
  // L60()
  goto L60_;

L11_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r27 = dyn as_character1(dx3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L59() else D10()
  // L59()
  goto L59_;

L12_:;
  // c47 = `as.logical`(c42)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c47 then L66() else L13(i35, c47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L66()
    goto L66_;
  } else {
  // L13(i35, c47)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c47_;
    goto L13_;
  }

L13_:;
  // c61 = `as.logical`(c49)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c61 then L75() else L16(i38, c61)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L75()
    goto L75_;
  } else {
  // L16(i38, c61)
    Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i38_;
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c61_;
    goto L16_;
  }

L14_:;
  // c58 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c59 = `&&`(c52, c58)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_c58_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L13(i41, c59)
  // L13(i41, c59)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c59_;
  goto L13_;

L15_:;
  // st z = dx5
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // is_call = ldf `is.call` in base
  Rsh_Fir_reg_is_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r39 = dyn is_call(dx5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_call, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L73() else D15()
  // L73()
  goto L73_;

L16_:;
  // c78 = `as.logical`(c63)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_c78_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c78 then L87() else L20(i48, c78)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c78_)) {
  // L87()
    goto L87_;
  } else {
  // L20(i48, c78)
    Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_c80_ = Rsh_Fir_reg_c78_;
    goto L20_;
  }

L17_:;
  // r47 = `==`(r41, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c75 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c76 = `&&`(c66, c75)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c66_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c75_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L16(i51, c76)
  // L16(i51, c76)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i51_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c76_;
  goto L16_;

L18_:;
  // st w = r43
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r46 = dyn length2(r43)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L85() else D18()
  // L85()
  goto L85_;

L19_:;
  // as_character2 = ldf `as.character` in base
  Rsh_Fir_reg_as_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r45 = dyn as_character2(dx7)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L84() else D17()
  // L84()
  goto L84_;

L20_:;
  // c84 = `as.logical`(c80)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c80_;
  Rsh_Fir_reg_c84_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c84 then L90() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c84_)) {
  // L90()
    goto L90_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L25(i61)
  // L25(i61)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i61_;
  goto L25_;

L22_:;
  // st new = r50
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym12 = ldf `as.character`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base12 = ldf `as.character` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard12 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L23_:;
  // l1 = ld new
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L99() else D24()
  // L99()
  goto L99_;

L24_:;
  // st calls = r57
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // goto L25(i73)
  // L25(i73)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i73_;
  goto L25_;

L25_:;
  // goto L2(i74)
  // L2(i74)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i74_;
  goto L2_;

L26_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // st e = x
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner490449083_, CCP, RHO);
  // p1 = prom<V +>{
  //   encoding1 = ld encoding;
  //   encoding2 = force? encoding1;
  //   checkMissing(encoding2);
  //   return encoding2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner490449083_1, CCP, RHO);
  // r2 = dyn _parse_code_file(p, p1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__parse_code_file, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L28_:;
  // st exprs = r2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r5 = dyn list()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L30_:;
  // r3 = dyn base()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D3_:;
  // deopt 11 [exprs]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_exprs;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // exprs1 = force? exprs
  Rsh_Fir_reg_exprs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs);
  // checkMissing(exprs1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_exprs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // s = toForSeq(exprs1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_exprs1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 22);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L33_:;
  // calls2 = ld calls
  Rsh_Fir_reg_calls2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L107() else D29()
  // L107()
  goto L107_;

L34_:;
  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

L35_:;
  // r6 = dyn base1(<sym e>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(i2, r6)
  // L3(i2, r6)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D4_:;
  // deopt 15 [i2, e]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_e;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L36_:;
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r8 = dyn length(e1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

D5_:;
  // deopt 18 [i2, r8]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L3(i2, r8)
  // L3(i2, r8)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L38_:;
  // sym2 = ldf `is.name`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf `is.name` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // e2 = ld e
  Rsh_Fir_reg_e2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

L40_:;
  // r10 = dyn base2(<lang `<-`(x, `[[`(e, 1))>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(i7, c1, r10)
  // L5(i7, c1, r10)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

D6_:;
  // deopt 22 [i7, c1, e2]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_e2_;
  Rsh_Fir_deopt(22, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L41_:;
  // e3 = force? e2
  Rsh_Fir_reg_e3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e2_);
  // checkMissing(e3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_e3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(e3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_e3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c7 then L42() else L43(i7, c1, e3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L42()
    goto L42_;
  } else {
  // L43(i7, c1, e3)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_e5_ = Rsh_Fir_reg_e3_;
    goto L43_;
  }

L42_:;
  // dr = tryDispatchBuiltin.1("[[", e3)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_e3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc then L44() else L43(i7, c1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L44()
    goto L44_;
  } else {
  // L43(i7, c1, dr)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_e5_ = Rsh_Fir_reg_dr;
    goto L43_;
  }

L43_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r12 = dyn __(e5, 1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(i14, c9, r12)
  // L6(i14, c9, r12)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L6_;

L44_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L6(i7, c1, dx)
  // L6(i7, c1, dx)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L46_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

D7_:;
  // deopt 31 [i9, c16]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // p2 = prom<V +>{
  //   sym3 = ldf `as.character`;
  //   base3 = ldf `as.character` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   as_character = ldf `as.character` in base;
  //   r15 = dyn as_character(x2);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base3(<sym x>);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner490449083_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   c19 = ldf c in base;
  //   r19 = dyn c19("<-", "=");
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base4("<-", "=");
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner490449083_3, CCP, RHO);
  // r21 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

D8_:;
  // deopt 34 [i9, c16, r21]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L48_:;
  // c20 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // c21 = `&&`(c16, c20)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L7(i9, c21)
  // L7(i9, c21)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c21_;
  goto L7_;

L50_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // sym6 = ldf `as.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf `as.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard6 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L52_:;
  // r22 = dyn base5(<lang `<-`(y, as.character(`[[`(e, 2)))>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(i19, c23, r22)
  // L9(i19, c23, r22)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L9_;

L53_:;
  // e6 = ld e
  Rsh_Fir_reg_e6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L55() else D9()
  // L55()
  goto L55_;

L54_:;
  // r24 = dyn base6(<lang `[[`(e, 2)>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(i19, c23, r24)
  // L10(i19, c23, r24)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L10_;

D9_:;
  // deopt 40 [i19, c23, e6]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_e6_;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L55_:;
  // e7 = force? e6
  Rsh_Fir_reg_e7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e6_);
  // checkMissing(e7)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_e7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(e7)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_e7_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c32 then L56() else L57(i19, c23, e7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L56()
    goto L56_;
  } else {
  // L57(i19, c23, e7)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_e9_ = Rsh_Fir_reg_e7_;
    goto L57_;
  }

L56_:;
  // dr2 = tryDispatchBuiltin.1("[[", e7)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_e7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc1 then L58() else L57(i19, c23, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L58()
    goto L58_;
  } else {
  // L57(i19, c23, dr2)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_e9_ = Rsh_Fir_reg_dr2_;
    goto L57_;
  }

L57_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r26 = dyn __1(e9, 2)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_e9_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L11(i30, c34, r26)
  // L11(i30, c34, r26)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r26_;
  goto L11_;

L58_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L11(i19, c23, dx2)
  // L11(i19, c23, dx2)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L11_;

D10_:;
  // deopt 46 [i32, c36, r27]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L10(i32, c36, r27)
  // L10(i32, c36, r27)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r27_;
  goto L10_;

D11_:;
  // deopt 49 [i28, c31, r28]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L9(i28, c31, r28)
  // L9(i28, c31, r28)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r28_;
  goto L9_;

L62_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L63() else D12()
  // L63()
  goto L63_;

D12_:;
  // deopt 54 [i22, c40]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L63_:;
  // p4 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner490449083_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sym7 = ldf c;
  //   base7 = ldf c in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   c43 = ldf c in base;
  //   r33 = dyn c43(".First.lib", ".onAttach", ".onLoad");
  //   goto L0(r33);
  // L2():
  //   r31 = dyn base7(".First.lib", ".onAttach", ".onLoad");
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner490449083_5, CCP, RHO);
  // r35 = dyn _in_1(p4, p5)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

D13_:;
  // deopt 57 [i22, c40, r35]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(57, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L64_:;
  // c44 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // c45 = `&&`(c40, c44)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L12(i22, c45)
  // L12(i22, c45)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c45_;
  goto L12_;

L66_:;
  // sym8 = ldf `is.call`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf `is.call` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard8 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L67_:;
  // e10 = ld e
  Rsh_Fir_reg_e10_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L69() else D14()
  // L69()
  goto L69_;

L68_:;
  // r36 = dyn base8(<lang `<-`(z, `[[`(e, 3))>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L14(i35, c47, r36)
  // L14(i35, c47, r36)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L14_;

D14_:;
  // deopt 61 [i35, c47, e10]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_e10_;
  Rsh_Fir_deopt(61, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L69_:;
  // e11 = force? e10
  Rsh_Fir_reg_e11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e10_);
  // checkMissing(e11)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_e11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(e11)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_e11_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c53 then L70() else L71(i35, c47, e11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L70()
    goto L70_;
  } else {
  // L71(i35, c47, e11)
    Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c47_;
    Rsh_Fir_reg_e13_ = Rsh_Fir_reg_e11_;
    goto L71_;
  }

L70_:;
  // dr4 = tryDispatchBuiltin.1("[[", e11)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_e11_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc2 then L72() else L71(i35, c47, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L72()
    goto L72_;
  } else {
  // L71(i35, c47, dr4)
    Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c47_;
    Rsh_Fir_reg_e13_ = Rsh_Fir_reg_dr4_;
    goto L71_;
  }

L71_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r38 = dyn __2(e13, 3)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_e13_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L15(i43, c55, r38)
  // L15(i43, c55, r38)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c55_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r38_;
  goto L15_;

L72_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L15(i35, c47, dx4)
  // L15(i35, c47, dx4)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L15_;

D15_:;
  // deopt 68 [i45, c57, r39]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_c57_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(68, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L14(i45, c57, r39)
  // L14(i45, c57, r39)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r39_;
  goto L14_;

L75_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard9 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L76_:;
  // sym10 = ldf `as.character`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base10 = ldf `as.character` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard10 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L77_:;
  // r40 = dyn base9(<lang `<-`(w, as.character(`[[`(z, 1)))>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L17(i38, c61, r40)
  // L17(i38, c61, r40)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_reg_c61_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L17_;

L78_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L80() else D16()
  // L80()
  goto L80_;

L79_:;
  // r42 = dyn base10(<lang `[[`(z, 1)>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L18(i38, c61, r42)
  // L18(i38, c61, r42)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c61_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L18_;

D16_:;
  // deopt 74 [i38, c61, z]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L80_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c70 = `is.object`(z1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c70 then L81() else L82(i38, c61, z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L81()
    goto L81_;
  } else {
  // L82(i38, c61, z1)
    Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i38_;
    Rsh_Fir_reg_c72_ = Rsh_Fir_reg_c61_;
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L82_;
  }

L81_:;
  // dr6 = tryDispatchBuiltin.1("[[", z1)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc3 then L83() else L82(i38, c61, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L83()
    goto L83_;
  } else {
  // L82(i38, c61, dr6)
    Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i38_;
    Rsh_Fir_reg_c72_ = Rsh_Fir_reg_c61_;
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr6_;
    goto L82_;
  }

L82_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r44 = dyn __3(z3, 1)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L19(i56, c72, r44)
  // L19(i56, c72, r44)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i56_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c72_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r44_;
  goto L19_;

L83_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L19(i38, c61, dx6)
  // L19(i38, c61, dx6)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c61_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L19_;

D17_:;
  // deopt 80 [i58, c74, r45]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i58_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_c74_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(80, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L18(i58, c74, r45)
  // L18(i58, c74, r45)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c74_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r45_;
  goto L18_;

D18_:;
  // deopt 83 [i54, c69, r46]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_c69_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(83, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L17(i54, c69, r46)
  // L17(i54, c69, r46)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_reg_c69_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r46_;
  goto L17_;

L87_:;
  // w = ld w
  Rsh_Fir_reg_w = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L88() else D19()
  // L88()
  goto L88_;

D19_:;
  // deopt 87 [i48, c78, w]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_c78_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_w;
  Rsh_Fir_deopt(87, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L88_:;
  // w1 = force? w
  Rsh_Fir_reg_w1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_w);
  // checkMissing(w1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_w1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r48 = `==`(w1, "function")
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_w1_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // c81 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c81_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // c82 = `&&`(c78, c81)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_c78_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_c81_;
  Rsh_Fir_reg_c82_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L20(i48, c82)
  // L20(i48, c82)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_c80_ = Rsh_Fir_reg_c82_;
  goto L20_;

L90_:;
  // sym11 = ldf list
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base11 = ldf list in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard11 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L91_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L93() else D20()
  // L93()
  goto L93_;

L92_:;
  // r49 = dyn base11(<sym z>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L22(i61, r49)
  // L22(i61, r49)
  Rsh_Fir_reg_i67_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L22_;

D20_:;
  // deopt 94 [i61, z4]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L93_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r51 = dyn list1(z5)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L94() else D21()
  // L94()
  goto L94_;

D21_:;
  // deopt 97 [i61, r51]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L22(i61, r51)
  // L22(i61, r51)
  Rsh_Fir_reg_i67_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L22_;

L95_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L97() else D22()
  // L97()
  goto L97_;

L96_:;
  // r52 = dyn base12(<sym y>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L23(i67, r52)
  // L23(i67, r52)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i67_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L23_;

D22_:;
  // deopt 101 [i67, y2]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i67_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L97_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // as_character3 = ldf `as.character` in base
  Rsh_Fir_reg_as_character3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r54 = dyn as_character3(y3)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character3_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L98() else D23()
  // L98()
  goto L98_;

D23_:;
  // deopt 104 [i67, r54]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i67_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(104, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L23(i67, r54)
  // L23(i67, r54)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i67_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L23_;

D24_:;
  // deopt 106 [i70, r53, l1, r53]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(106, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L99_:;
  // r55 = dyn names__(l1, NULL, r53)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L100() else D25()
  // L100()
  goto L100_;

D25_:;
  // deopt 108 [i70, r53, r55]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(108, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L100_:;
  // st new = r55
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // sym13 = ldf c
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base13 = ldf c in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard13 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L101_:;
  // calls = ld calls
  Rsh_Fir_reg_calls = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L103() else D26()
  // L103()
  goto L103_;

L102_:;
  // r56 = dyn base13(<sym calls>, <sym new>)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L24(i70, r56)
  // L24(i70, r56)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L24_;

D26_:;
  // deopt 112 [i70, calls]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_calls;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L103_:;
  // calls1 = force? calls
  Rsh_Fir_reg_calls1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_calls);
  // checkMissing(calls1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_calls1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // new = ld new
  Rsh_Fir_reg_new = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L104() else D27()
  // L104()
  goto L104_;

D27_:;
  // deopt 114 [i70, new]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_new;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L104_:;
  // new1 = force? new
  Rsh_Fir_reg_new1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new);
  // checkMissing(new1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_new1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c85 = ldf c in base
  Rsh_Fir_reg_c85_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r58 = dyn c85(calls1, new1)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_calls1_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_new1_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c85_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L105() else D28()
  // L105()
  goto L105_;

D28_:;
  // deopt 117 [i70, r58]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L24(i70, r58)
  // L24(i70, r58)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L24_;

D29_:;
  // deopt 124 [calls2]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_calls2_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L107_:;
  // calls3 = force? calls2
  Rsh_Fir_reg_calls3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_calls2_);
  // checkMissing(calls3)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_calls3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return calls3
  return Rsh_Fir_reg_calls3_;
}
SEXP Rsh_Fir_user_promise_inner490449083_(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_user_promise_inner490449083_1(SEXP CCP, SEXP RHO) {
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return encoding2
  return Rsh_Fir_reg_encoding2_;
}
SEXP Rsh_Fir_user_promise_inner490449083_2(SEXP CCP, SEXP RHO) {
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r15 = dyn as_character(x2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L0_;

L2_:;
  // r13 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner490449083_3(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r19 = dyn c19("<-", "=")
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base4("<-", "=")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner490449083_4(SEXP CCP, SEXP RHO) {
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_inner490449083_5(SEXP CCP, SEXP RHO) {
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // c43 = ldf c in base
  Rsh_Fir_reg_c43_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r33 = dyn c43(".First.lib", ".onAttach", ".onLoad")
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c43_, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L0_;

L2_:;
  // r31 = dyn base7(".First.lib", ".onAttach", ".onLoad")
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
