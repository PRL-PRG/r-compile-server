#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2317352355_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2317352355_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2317352355_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2317352355_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2317352355
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2317352355_, RHO, CCP);
  // st `de.ncols` = r
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
SEXP Rsh_Fir_user_function_inner2317352355_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2317352355 dynamic dispatch ([inlist])

  return Rsh_Fir_user_version_inner2317352355_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2317352355_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2317352355 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2317352355/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_inlist;  // inlist
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_inlist1_;  // inlist1
  SEXP Rsh_Fir_reg_inlist2_;  // inlist2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_inlist3_;  // inlist3
  SEXP Rsh_Fir_reg_inlist4_;  // inlist4
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
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_telt;  // telt
  SEXP Rsh_Fir_reg_telt1_;  // telt1
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_telt2_;  // telt2
  SEXP Rsh_Fir_reg_telt3_;  // telt3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_telt4_;  // telt4
  SEXP Rsh_Fir_reg_telt5_;  // telt5
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_telt6_;  // telt6
  SEXP Rsh_Fir_reg_telt7_;  // telt7
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_telt8_;  // telt8
  SEXP Rsh_Fir_reg_telt9_;  // telt9
  SEXP Rsh_Fir_reg_is_vector;  // is_vector
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_telt10_;  // telt10
  SEXP Rsh_Fir_reg_telt11_;  // telt11
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i52_;  // i52
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_i56_;  // i56
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i60_;  // i60
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i61_;  // i61
  SEXP Rsh_Fir_reg_i62_;  // i62
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_i65_;  // i65
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_telt12_;  // telt12
  SEXP Rsh_Fir_reg_telt13_;  // telt13
  SEXP Rsh_Fir_reg_is_vector1_;  // is_vector1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i69_;  // i69
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i71_;  // i71
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i72_;  // i72
  SEXP Rsh_Fir_reg_i73_;  // i73
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i75_;  // i75
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i77_;  // i77
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i78_;  // i78
  SEXP Rsh_Fir_reg_i79_;  // i79
  SEXP Rsh_Fir_reg____5_;  // ___5
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_i80_;  // i80
  SEXP Rsh_Fir_reg_i81_;  // i81
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_ncols;  // ncols
  SEXP Rsh_Fir_reg_ncols1_;  // ncols1

  // Bind parameters
  Rsh_Fir_reg_inlist = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st inlist = inlist
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_inlist, RHO);
  (void)(Rsh_Fir_reg_inlist);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if c then L24() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L24()
    goto L24_;
  } else {
  // L20()
    goto L20_;
  }

L1_:;
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L29() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L29()
    goto L29_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym2 = ldf `is.list`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf `is.list` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L3_:;
  // st ncols = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // l4 = ld ncols
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c3 = `is.object`(l4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L36() else L37(i13, 2, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L36()
    goto L36_;
  } else {
  // L37(i13, 2, l4)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r16_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L37_;
  }

L4_:;
  // st ncols = dx3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L5(i19)
  // L5(i19)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i19_;
  goto L5_;

L5_:;
  // i80 = ld i
  Rsh_Fir_reg_i80_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L85() else D26()
  // L85()
  goto L85_;

L6_:;
  // c4 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L45() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L45()
    goto L45_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym5 = ldf `is.vector`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf `is.vector` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L8_:;
  // i31 = `+`.1(i30, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_i31_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // c5 = `<`.1(l7, i31)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if c5 then L47() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L47()
    goto L47_;
  } else {
  // L12()
    goto L12_;
  }

L9_:;
  // r27 = `!`(r25)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c6 then L52() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L52()
    goto L52_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11(i40, i41)
  // L11(i40, i41)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i41_;
  goto L11_;

L11_:;
  // goto L8(i46, i47)
  // L8(i46, i47)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i47_;
  goto L8_;

L12_:;
  // x1 = `[[`(s1, i31, NULL, TRUE)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // st telt2 = x1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // sym3 = ldf `is.vector`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `is.vector` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L13_:;
  // l8 = ld ncols
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c7 = `is.object`(l8)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c7 then L60() else L61(i50, r31, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L60()
    goto L60_;
  } else {
  // L61(i50, r31, l8)
    Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r31_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L61_;
  }

L14_:;
  // st ncols = dx5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // l11 = ld ncols
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c8 = `is.object`(l11)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c8 then L64() else L65(i54, 3, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L64()
    goto L64_;
  } else {
  // L65(i54, 3, l11)
    Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i54_;
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L65_;
  }

L15_:;
  // st ncols = dx7
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L5(i60)
  // L5(i60)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i60_;
  goto L5_;

L16_:;
  // c9 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c9 then L73() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L73()
    goto L73_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L83() else D24()
  // L83()
  goto L83_;

L18_:;
  // st ncols = dx9
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // l17 = ld ncols
  Rsh_Fir_reg_l17_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c11 = `is.object`(l17)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c11 then L78() else L79(i71, 1, l17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L78()
    goto L78_;
  } else {
  // L79(i71, 1, l17)
    Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i71_;
    Rsh_Fir_reg_r52_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    goto L79_;
  }

L19_:;
  // st ncols = dx11
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L5(i77)
  // L5(i77)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i77_;
  goto L5_;

L20_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // st telt = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym1 = ldf `is.matrix`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf `is.matrix` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   inlist1 = ld inlist;
  //   inlist2 = force? inlist1;
  //   checkMissing(inlist2);
  //   length = ldf length in base;
  //   r2 = dyn length(inlist2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym inlist>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2317352355_, CCP, RHO);
  // r4 = dyn matrix[, nrow, ncol](0.0, p, 2)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // st ncols = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // st i = 1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // inlist3 = ld inlist
  Rsh_Fir_reg_inlist3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D2_:;
  // deopt 12 [inlist3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_inlist3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // inlist4 = force? inlist3
  Rsh_Fir_reg_inlist4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist3_);
  // checkMissing(inlist4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_inlist4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // s = toForSeq(inlist4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_inlist4_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 20);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L24_:;
  // ncols = ld ncols
  Rsh_Fir_reg_ncols = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L86() else D27()
  // L86()
  goto L86_;

L25_:;
  // telt = ld telt
  Rsh_Fir_reg_telt = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

L26_:;
  // r5 = dyn base1(<sym telt>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(i2, r5)
  // L1(i2, r5)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D3_:;
  // deopt 16 [i2, telt]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_telt;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L27_:;
  // telt1 = force? telt
  Rsh_Fir_reg_telt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt);
  // checkMissing(telt1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_telt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r7 = dyn is_matrix(telt1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_telt1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 19 [i2, r7]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L1(i2, r7)
  // L1(i2, r7)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L1_;

L29_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 21 [i7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // p1 = prom<V +>{
  //   telt2 = ld telt;
  //   telt3 = force? telt2;
  //   checkMissing(telt3);
  //   return telt3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2317352355_1, CCP, RHO);
  // r9 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

D6_:;
  // deopt 23 [i7, r9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // l1 = ld ncols
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c2 = `is.object`(l1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c2 then L32() else L33(i7, r9, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L33(i7, r9, l1)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L33_;
  }

L32_:;
  // dr = tryDispatchBuiltin.0("[<-", l1, r9)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args33);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc then L34() else L33(i7, r9, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L34()
    goto L34_;
  } else {
  // L33(i7, r9, dr)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L33_;
  }

L33_:;
  // i14 = ld i
  Rsh_Fir_reg_i14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L35() else D7()
  // L35()
  goto L35_;

L34_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L3(i7, dx)
  // L3(i7, dx)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D7_:;
  // deopt 25 [i11, r11, l3, r9, i14]
  SEXP Rsh_Fir_array_deopt_stack6[5];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack6[4] = Rsh_Fir_reg_i14_;
  Rsh_Fir_deopt(25, 5, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // i15 = force? i14
  Rsh_Fir_reg_i15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i14_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn ___(l3, r9, i15, 1)
  SEXP Rsh_Fir_array_args36[4];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(i11, r14)
  // L3(i11, r14)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L3_;

L36_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l4, 2)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args37);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc1 then L38() else L37(i13, 2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L38()
    goto L38_;
  } else {
  // L37(i13, 2, dr2)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r16_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr2_;
    goto L37_;
  }

L37_:;
  // i20 = ld i
  Rsh_Fir_reg_i20_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

L38_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L4(i13, 2, dx2)
  // L4(i13, 2, dx2)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r18_ = Rsh_const(CCP, 6);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D8_:;
  // deopt 33 [i17, r16, l6, 2, i20]
  SEXP Rsh_Fir_array_deopt_stack7[5];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack7[4] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(33, 5, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L39_:;
  // i21 = force? i20
  Rsh_Fir_reg_i21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i20_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r19 = dyn ___1(l6, 2, i21, 2)
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(i17, r16, r19)
  // L4(i17, r16, r19)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r19_;
  goto L4_;

L41_:;
  // telt4 = ld telt
  Rsh_Fir_reg_telt4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L42_:;
  // r21 = dyn base2(<sym telt>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(i7, r21)
  // L6(i7, r21)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L6_;

D9_:;
  // deopt 40 [i7, telt4]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_telt4_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // telt5 = force? telt4
  Rsh_Fir_reg_telt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt4_);
  // checkMissing(telt5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_telt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r23 = dyn is_list(telt5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_telt5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D10_:;
  // deopt 43 [i7, r23]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L6(i7, r23)
  // L6(i7, r23)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L6_;

L45_:;
  // telt6 = ld telt
  Rsh_Fir_reg_telt6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D11_:;
  // deopt 44 [i25, telt6]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_telt6_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // telt7 = force? telt6
  Rsh_Fir_reg_telt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt6_);
  // checkMissing(telt7)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_telt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(telt7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_telt7_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // l7 = length(s1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // i28 = 0
  Rsh_Fir_reg_i28_ = Rsh_const(CCP, 20);
  // goto L8(i25, i28)
  // L8(i25, i28)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
  goto L8_;

L47_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L48_:;
  // telt8 = ld telt2
  Rsh_Fir_reg_telt8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

L49_:;
  // r24 = dyn base3(<sym telt2>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(i29, i31, r24)
  // L9(i29, i31, r24)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L9_;

D12_:;
  // deopt 48 [i29, i31, telt8]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_telt8_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // telt9 = force? telt8
  Rsh_Fir_reg_telt9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt8_);
  // checkMissing(telt9)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_telt9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r26 = dyn is_vector(telt9, "any")
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_telt9_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

D13_:;
  // deopt 52 [i29, i31, r26]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(52, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L9(i29, i31, r26)
  // L9(i29, i31, r26)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L9_;

L52_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

D14_:;
  // deopt 55 [i40, i41]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_i41_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L53_:;
  // r28 = dyn stop("wrong argument to 'dataentry'")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

D15_:;
  // deopt 57 [i40, i41, r28]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(57, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L11(i40, i41)
  // L11(i40, i41)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i41_;
  goto L11_;

L56_:;
  // telt10 = ld telt
  Rsh_Fir_reg_telt10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

L57_:;
  // r30 = dyn base4(<sym telt>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(i29, r30)
  // L13(i29, r30)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L13_;

D16_:;
  // deopt 65 [i29, telt10]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_telt10_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L58_:;
  // telt11 = force? telt10
  Rsh_Fir_reg_telt11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt10_);
  // checkMissing(telt11)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_telt11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r32 = dyn length1(telt11)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_telt11_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L59() else D17()
  // L59()
  goto L59_;

D17_:;
  // deopt 68 [i29, r32]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L13(i29, r32)
  // L13(i29, r32)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L13_;

L60_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l8, r31)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args55);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc2 then L62() else L61(i50, r31, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L62()
    goto L62_;
  } else {
  // L61(i50, r31, dr4)
    Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r31_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr4_;
    goto L61_;
  }

L61_:;
  // i55 = ld i
  Rsh_Fir_reg_i55_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L63() else D18()
  // L63()
  goto L63_;

L62_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L14(i50, dx4)
  // L14(i50, dx4)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;

D18_:;
  // deopt 70 [i52, r34, l10, r31, i55]
  SEXP Rsh_Fir_array_deopt_stack17[5];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack17[4] = Rsh_Fir_reg_i55_;
  Rsh_Fir_deopt(70, 5, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // i56 = force? i55
  Rsh_Fir_reg_i56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i55_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r37 = dyn ___2(l10, r31, i56, 1)
  SEXP Rsh_Fir_array_args58[4];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_i56_;
  Rsh_Fir_array_args58[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L14(i52, r37)
  // L14(i52, r37)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r37_;
  goto L14_;

L64_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l11, 3)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args59);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc3 then L66() else L65(i54, 3, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L66()
    goto L66_;
  } else {
  // L65(i54, 3, dr6)
    Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i54_;
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr6_;
    goto L65_;
  }

L65_:;
  // i61 = ld i
  Rsh_Fir_reg_i61_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

L66_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L15(i54, 3, dx6)
  // L15(i54, 3, dx6)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 12);
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L15_;

D19_:;
  // deopt 78 [i58, r39, l13, 3, i61]
  SEXP Rsh_Fir_array_deopt_stack18[5];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i58_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack18[4] = Rsh_Fir_reg_i61_;
  Rsh_Fir_deopt(78, 5, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L67_:;
  // i62 = force? i61
  Rsh_Fir_reg_i62_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i61_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r42 = dyn ___3(l13, 3, i62, 2)
  SEXP Rsh_Fir_array_args62[4];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 4, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(i58, r39, r42)
  // L15(i58, r39, r42)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r42_;
  goto L15_;

L69_:;
  // telt12 = ld telt
  Rsh_Fir_reg_telt12_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

L70_:;
  // r43 = dyn base5(<sym telt>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(i25, r43)
  // L16(i25, r43)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L16_;

D20_:;
  // deopt 85 [i25, telt12]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_telt12_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L71_:;
  // telt13 = force? telt12
  Rsh_Fir_reg_telt13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt12_);
  // checkMissing(telt13)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_telt13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // is_vector1 = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r45 = dyn is_vector1(telt13, "any")
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_telt13_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector1_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

D21_:;
  // deopt 89 [i25, r45]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L16(i25, r45)
  // L16(i25, r45)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L16_;

L73_:;
  // l14 = ld ncols
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c10 = `is.object`(l14)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c10 then L74() else L75(i65, 1, l14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L74()
    goto L74_;
  } else {
  // L75(i65, 1, l14)
    Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i65_;
    Rsh_Fir_reg_r47_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l14_;
    goto L75_;
  }

L74_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l14, 1)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args67);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc4 then L76() else L75(i65, 1, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L76()
    goto L76_;
  } else {
  // L75(i65, 1, dr8)
    Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i65_;
    Rsh_Fir_reg_r47_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_dr8_;
    goto L75_;
  }

L75_:;
  // i72 = ld i
  Rsh_Fir_reg_i72_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L77() else D22()
  // L77()
  goto L77_;

L76_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L18(i65, dx8)
  // L18(i65, dx8)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i65_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L18_;

D22_:;
  // deopt 93 [i69, r47, l16, 1, i72]
  SEXP Rsh_Fir_array_deopt_stack21[5];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i69_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_deopt_stack21[4] = Rsh_Fir_reg_i72_;
  Rsh_Fir_deopt(93, 5, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L77_:;
  // i73 = force? i72
  Rsh_Fir_reg_i73_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i72_);
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r50 = dyn ___4(l16, 1, i73, 1)
  SEXP Rsh_Fir_array_args70[4];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_i73_;
  Rsh_Fir_array_args70[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 4, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(i69, r50)
  // L18(i69, r50)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i69_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r50_;
  goto L18_;

L78_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l17, 1)
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args71);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc5 then L80() else L79(i71, 1, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L80()
    goto L80_;
  } else {
  // L79(i71, 1, dr10)
    Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i71_;
    Rsh_Fir_reg_r52_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_dr10_;
    goto L79_;
  }

L79_:;
  // i78 = ld i
  Rsh_Fir_reg_i78_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L81() else D23()
  // L81()
  goto L81_;

L80_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L19(i71, 1, dx10)
  // L19(i71, 1, dx10)
  Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_r54_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L19_;

D23_:;
  // deopt 101 [i75, r52, l19, 1, i78]
  SEXP Rsh_Fir_array_deopt_stack22[5];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i75_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_deopt_stack22[4] = Rsh_Fir_reg_i78_;
  Rsh_Fir_deopt(101, 5, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // i79 = force? i78
  Rsh_Fir_reg_i79_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i78_);
  // ___5 = ldf `[<-` in base
  Rsh_Fir_reg____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r55 = dyn ___5(l19, 1, i79, 2)
  SEXP Rsh_Fir_array_args74[4];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_i79_;
  Rsh_Fir_array_args74[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____5_, 4, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(i75, r52, r55)
  // L19(i75, r52, r55)
  Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i75_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r55_;
  goto L19_;

D24_:;
  // deopt 107 [i65]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i65_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L83_:;
  // r56 = dyn stop1("wrong argument to 'dataentry'")
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L84() else D25()
  // L84()
  goto L84_;

D25_:;
  // deopt 109 [i65, r56]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i65_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L5(i65)
  // L5(i65)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i65_;
  goto L5_;

D26_:;
  // deopt 110 [i22, i80]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_i80_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L85_:;
  // i81 = force? i80
  Rsh_Fir_reg_i81_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i80_);
  // checkMissing(i81)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_i81_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r57 = `+`(i81, 1)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_i81_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // st i = r57
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // goto L0(i22)
  // L0(i22)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i22_;
  goto L0_;

D27_:;
  // deopt 118 [ncols]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_ncols;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L86_:;
  // ncols1 = force? ncols
  Rsh_Fir_reg_ncols1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols);
  // checkMissing(ncols1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ncols1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ncols1
  return Rsh_Fir_reg_ncols1_;
}
SEXP Rsh_Fir_user_promise_inner2317352355_(SEXP CCP, SEXP RHO) {
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
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
  // inlist1 = ld inlist
  Rsh_Fir_reg_inlist1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // inlist2 = force? inlist1
  Rsh_Fir_reg_inlist2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist1_);
  // checkMissing(inlist2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_inlist2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r2 = dyn length(inlist2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_inlist2_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym inlist>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2317352355_1(SEXP CCP, SEXP RHO) {
  // telt2 = ld telt
  Rsh_Fir_reg_telt2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // telt3 = force? telt2
  Rsh_Fir_reg_telt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt2_);
  // checkMissing(telt3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_telt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return telt3
  return Rsh_Fir_reg_telt3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
