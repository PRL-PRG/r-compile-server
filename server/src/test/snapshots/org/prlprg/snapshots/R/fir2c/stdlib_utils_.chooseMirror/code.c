#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner5504565_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner5504565_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner5504565_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner5504565_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner5504565
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner5504565_, RHO, CCP);
  // st `.chooseMirror` = r
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
SEXP Rsh_Fir_user_function_inner5504565_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner5504565 dynamic dispatch ([m, label, graphics, ind])

  return Rsh_Fir_user_version_inner5504565_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner5504565_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner5504565 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner5504565/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_label;  // label
  SEXP Rsh_Fir_reg_graphics;  // graphics
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_interactive;  // interactive
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_label1_;  // label1
  SEXP Rsh_Fir_reg_label2_;  // label2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg_ind6_;  // ind6
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_startsWith;  // startsWith
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_m6_;  // m6
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_m9_;  // m9
  SEXP Rsh_Fir_reg_m10_;  // m10
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_m12_;  // m12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_isHTTPS;  // isHTTPS
  SEXP Rsh_Fir_reg_isHTTPS1_;  // isHTTPS1
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_m13_;  // m13
  SEXP Rsh_Fir_reg_m14_;  // m14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_m16_;  // m16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_isHTTPS2_;  // isHTTPS2
  SEXP Rsh_Fir_reg_isHTTPS3_;  // isHTTPS3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_label3_;  // label3
  SEXP Rsh_Fir_reg_label4_;  // label4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_label5_;  // label5
  SEXP Rsh_Fir_reg_label6_;  // label6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_mHTTPS;  // mHTTPS
  SEXP Rsh_Fir_reg_mHTTPS1_;  // mHTTPS1
  SEXP Rsh_Fir_reg_menu;  // menu
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_m17_;  // m17
  SEXP Rsh_Fir_reg_m18_;  // m18
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_graphics1_;  // graphics1
  SEXP Rsh_Fir_reg_graphics2_;  // graphics2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_httpsLabel;  // httpsLabel
  SEXP Rsh_Fir_reg_httpsLabel1_;  // httpsLabel1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_m21_;  // m21
  SEXP Rsh_Fir_reg_m22_;  // m22
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_mHTTP;  // mHTTP
  SEXP Rsh_Fir_reg_mHTTP1_;  // mHTTP1
  SEXP Rsh_Fir_reg_menu1_;  // menu1
  SEXP Rsh_Fir_reg_m23_;  // m23
  SEXP Rsh_Fir_reg_m24_;  // m24
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_graphics3_;  // graphics3
  SEXP Rsh_Fir_reg_graphics4_;  // graphics4
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_httpLabel;  // httpLabel
  SEXP Rsh_Fir_reg_httpLabel1_;  // httpLabel1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_res2_;  // res2
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_m27_;  // m27
  SEXP Rsh_Fir_reg_m28_;  // m28
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_m30_;  // m30
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_res4_;  // res4
  SEXP Rsh_Fir_reg_res5_;  // res5
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_m31_;  // m31
  SEXP Rsh_Fir_reg_m32_;  // m32
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_m34_;  // m34
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_res6_;  // res6
  SEXP Rsh_Fir_reg_res7_;  // res7
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_URL;  // URL
  SEXP Rsh_Fir_reg_URL1_;  // URL1
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_URL3_;  // URL3
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r55_;  // r55

  // Bind parameters
  Rsh_Fir_reg_m = PARAMS[0];
  Rsh_Fir_reg_label = PARAMS[1];
  Rsh_Fir_reg_graphics = PARAMS[2];
  Rsh_Fir_reg_ind = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // st label = label
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_label, RHO);
  (void)(Rsh_Fir_reg_label);
  // st graphics = graphics
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_graphics, RHO);
  (void)(Rsh_Fir_reg_graphics);
  // st ind = ind
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ind, RHO);
  (void)(Rsh_Fir_reg_ind);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L1(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L1(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L1_;
  }

L1_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c10 then L24() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L24()
    goto L24_;
  } else {
  // L3()
    goto L3_;
  }

L2_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L1(c8)
  // L1(c8)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c8_;
  goto L1_;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L5_:;
  // c11 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c11 then L32() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L32()
    goto L32_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // startsWith = ldf startsWith
  Rsh_Fir_reg_startsWith = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L7_:;
  // c12 = `is.object`(r13)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c12 then L37() else L38(r13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L37()
    goto L37_;
  } else {
  // L38(r13)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r13_;
    goto L38_;
  }

L8_:;
  // st res = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L70() else D29()
  // L70()
  goto L70_;

L10_:;
  // st mHTTPS = dx8
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // m13 = ld m
  Rsh_Fir_reg_m13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

L11_:;
  // st mHTTP = dx10
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L55() else D16()
  // L55()
  goto L55_;

L12_:;
  // goto L9()
  // L9()
  goto L9_;

L13_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L87() else D38()
  // L87()
  goto L87_;

L14_:;
  // st URL = dx16
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // m31 = ld m
  Rsh_Fir_reg_m31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D32()
  // L77()
  goto L77_;

L15_:;
  // l = ld URL
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L82() else D34()
  // L82()
  goto L82_;

L16_:;
  // ind1 = ld ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L17_:;
  // r = dyn base(<sym ind>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [ind1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // ind2 = force? ind1
  Rsh_Fir_reg_ind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind1_);
  // checkMissing(ind2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ind2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c = `==`(ind2, NULL)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L19_:;
  // sym1 = ldf interactive
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf interactive in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // interactive = ldf interactive in base
  Rsh_Fir_reg_interactive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r4 = dyn interactive()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interactive, 0, NULL, NULL, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

L21_:;
  // r2 = dyn base1()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L2(c1, r2)
  // L2(c1, r2)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D1_:;
  // deopt 7 [c1, r4]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L2(c1, r4)
  // L2(c1, r4)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L2_;

L24_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p = prom<V +>{
  //   label1 = ld label;
  //   label2 = force? label1;
  //   checkMissing(label2);
  //   return label2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_, CCP, RHO);
  // r7 = dyn stop("cannot choose a ", p, " mirror non-interactively")
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

D3_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L4()
  // L4()
  goto L4_;

L28_:;
  // ind3 = ld ind
  Rsh_Fir_reg_ind3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

L29_:;
  // r9 = dyn base2(<sym ind>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

D4_:;
  // deopt 20 [ind3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // ind4 = force? ind3
  Rsh_Fir_reg_ind4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind3_);
  // checkMissing(ind4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ind4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r11 = dyn length(ind4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_ind4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D5_:;
  // deopt 23 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L5_;

L32_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // ind5 = ld ind
  Rsh_Fir_reg_ind5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L34_:;
  // r12 = dyn base3(<sym ind>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L7_;

D6_:;
  // deopt 26 [ind5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L35_:;
  // ind6 = force? ind5
  Rsh_Fir_reg_ind6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind5_);
  // checkMissing(ind6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ind6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r14 = dyn as_integer(ind6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ind6_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D7_:;
  // deopt 29 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L7_;

L37_:;
  // dr = tryDispatchBuiltin.1("[", r13)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc then L39() else L38(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L39()
    goto L39_;
  } else {
  // L38(dr)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_dr;
    goto L38_;
  }

L38_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r17 = dyn __(r16, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L8_;

L39_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

D8_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p1 = prom<V +>{
  //   m1 = ld m;
  //   m2 = force? m1;
  //   checkMissing(m2);
  //   c13 = `is.object`(m2);
  //   if c13 then L1() else L2();
  // L0(dx4):
  //   return dx4;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", m2);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2();
  // L2():
  //   __1 = ldf `[` in base;
  //   r18 = dyn __1(m2, <missing>, "URL");
  //   goto L0(r18);
  // L3():
  //   dx3 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx3);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_1, CCP, RHO);
  // r20 = dyn startsWith(p1, "https")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_startsWith, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 38 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L42_:;
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

D10_:;
  // deopt 39 [r20]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // p2 = prom<V +>{
  //   m5 = ld m;
  //   m6 = force? m5;
  //   checkMissing(m6);
  //   c14 = `is.object`(m6);
  //   if c14 then L1() else L2();
  // L0(dx6):
  //   return dx6;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", m6);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2();
  // L2():
  //   __2 = ldf `[` in base;
  //   r21 = dyn __2(m6, <missing>, "Comment");
  //   goto L0(r21);
  // L3():
  //   dx5 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx5);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_2, CCP, RHO);
  // r23 = dyn grepl[, , fixed]("secure_mirror_from_master", p2, TRUE)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

D11_:;
  // deopt 44 [r20, r23]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L44_:;
  // r24 = `&&`(r20, r23)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // st isHTTPS = r24
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // m9 = ld m
  Rsh_Fir_reg_m9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

D12_:;
  // deopt 47 [m9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_m9_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // m10 = force? m9
  Rsh_Fir_reg_m10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m9_);
  // checkMissing(m10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_m10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(m10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_m10_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c15 then L46() else L47(m10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L46()
    goto L46_;
  } else {
  // L47(m10)
    Rsh_Fir_reg_m12_ = Rsh_Fir_reg_m10_;
    goto L47_;
  }

L46_:;
  // dr6 = tryDispatchBuiltin.1("[", m10)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_m10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc3 then L48() else L47(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr6)
    Rsh_Fir_reg_m12_ = Rsh_Fir_reg_dr6_;
    goto L47_;
  }

L47_:;
  // isHTTPS = ld isHTTPS
  Rsh_Fir_reg_isHTTPS = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

L48_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L10(dx7)
  // L10(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L10_;

D13_:;
  // deopt 49 [m12, isHTTPS]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_m12_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_isHTTPS;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // isHTTPS1 = force? isHTTPS
  Rsh_Fir_reg_isHTTPS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isHTTPS);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r25 = dyn __3(m10, isHTTPS1, <missing>)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_m10_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_isHTTPS1_;
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r25_;
  goto L10_;

D14_:;
  // deopt 55 [m13]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_m13_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L50_:;
  // m14 = force? m13
  Rsh_Fir_reg_m14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m13_);
  // checkMissing(m14)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_m14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(m14)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_m14_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c16 then L51() else L52(m14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L51()
    goto L51_;
  } else {
  // L52(m14)
    Rsh_Fir_reg_m16_ = Rsh_Fir_reg_m14_;
    goto L52_;
  }

L51_:;
  // dr8 = tryDispatchBuiltin.1("[", m14)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_m14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc4 then L53() else L52(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr8)
    Rsh_Fir_reg_m16_ = Rsh_Fir_reg_dr8_;
    goto L52_;
  }

L52_:;
  // isHTTPS2 = ld isHTTPS
  Rsh_Fir_reg_isHTTPS2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

L53_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L11(dx9)
  // L11(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L11_;

D15_:;
  // deopt 57 [m16, isHTTPS2]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_m16_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_isHTTPS2_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // isHTTPS3 = force? isHTTPS2
  Rsh_Fir_reg_isHTTPS3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isHTTPS2_);
  // checkMissing(isHTTPS3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_isHTTPS3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r26 = `!`(isHTTPS3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_isHTTPS3_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r27 = dyn __4(m14, r26, <missing>)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_m14_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r27_;
  goto L11_;

D16_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p3 = prom<V +>{
  //   label3 = ld label;
  //   label4 = force? label3;
  //   checkMissing(label4);
  //   return label4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_3, CCP, RHO);
  // r29 = dyn paste("Secure", p3, "mirrors")
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L56() else D17()
  // L56()
  goto L56_;

D17_:;
  // deopt 69 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L56_:;
  // st httpsLabel = r29
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L57() else D18()
  // L57()
  goto L57_;

D18_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p4 = prom<V +>{
  //   label5 = ld label;
  //   label6 = force? label5;
  //   checkMissing(label6);
  //   return label6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_4, CCP, RHO);
  // r31 = dyn paste1("Other", p4, "mirrors")
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L58() else D19()
  // L58()
  goto L58_;

D19_:;
  // deopt 76 [r31]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L58_:;
  // st httpLabel = r31
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // mHTTPS = ld mHTTPS
  Rsh_Fir_reg_mHTTPS = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L59() else D20()
  // L59()
  goto L59_;

D20_:;
  // deopt 78 [mHTTPS]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_mHTTPS;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L59_:;
  // mHTTPS1 = force? mHTTPS
  Rsh_Fir_reg_mHTTPS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mHTTPS);
  // checkMissing(mHTTPS1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_mHTTPS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // st m = mHTTPS1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_mHTTPS1_, RHO);
  (void)(Rsh_Fir_reg_mHTTPS1_);
  // menu = ldf menu
  Rsh_Fir_reg_menu = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

D21_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p5 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L2() else L3();
  // L0(r33):
  //   return r33;
  // L2():
  //   m17 = ld m;
  //   m18 = force? m17;
  //   checkMissing(m18);
  //   c17 = `is.object`(m18);
  //   if c17 then L4() else L5();
  // L3():
  //   r32 = dyn base4(<lang `[`(m, , 1)>, "(other mirrors)");
  //   goto L0(r32);
  // L1(dx12):
  //   c18 = ldf c in base;
  //   r35 = dyn c18(dx12, "(other mirrors)");
  //   goto L0(r35);
  // L4():
  //   dr10 = tryDispatchBuiltin.1("[", m18);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L6() else L5();
  // L5():
  //   __5 = ldf `[` in base;
  //   r34 = dyn __5(m18, <missing>, 1);
  //   goto L1(r34);
  // L6():
  //   dx11 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(dx11);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_5, CCP, RHO);
  // p6 = prom<V +>{
  //   graphics1 = ld graphics;
  //   graphics2 = force? graphics1;
  //   checkMissing(graphics2);
  //   return graphics2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_6, CCP, RHO);
  // p7 = prom<V +>{
  //   httpsLabel = ld httpsLabel;
  //   httpsLabel1 = force? httpsLabel;
  //   checkMissing(httpsLabel1);
  //   return httpsLabel1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_7, CCP, RHO);
  // r39 = dyn menu(p5, p6, p7)
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args71[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_menu, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L61() else D22()
  // L61()
  goto L61_;

D22_:;
  // deopt 86 [r39]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L61_:;
  // st res = r39
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L62() else D23()
  // L62()
  goto L62_;

D23_:;
  // deopt 88 [res]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L62_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L63() else D24()
  // L63()
  goto L63_;

D24_:;
  // deopt 90 [res1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L63_:;
  // p8 = prom<V +>{
  //   m21 = ld m;
  //   m22 = force? m21;
  //   checkMissing(m22);
  //   return m22;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_8, CCP, RHO);
  // r41 = dyn nrow(p8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L64() else D25()
  // L64()
  goto L64_;

D25_:;
  // deopt 92 [res1, r41]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L64_:;
  // r42 = `>`(res1, r41)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c19 then L65() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L65()
    goto L65_;
  } else {
  // L12()
    goto L12_;
  }

L65_:;
  // mHTTP = ld mHTTP
  Rsh_Fir_reg_mHTTP = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L66() else D26()
  // L66()
  goto L66_;

D26_:;
  // deopt 94 [mHTTP]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_mHTTP;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L66_:;
  // mHTTP1 = force? mHTTP
  Rsh_Fir_reg_mHTTP1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mHTTP);
  // checkMissing(mHTTP1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_mHTTP1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // st m = mHTTP1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_mHTTP1_, RHO);
  (void)(Rsh_Fir_reg_mHTTP1_);
  // menu1 = ldf menu
  Rsh_Fir_reg_menu1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L67() else D27()
  // L67()
  goto L67_;

D27_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p9 = prom<V +>{
  //   m23 = ld m;
  //   m24 = force? m23;
  //   checkMissing(m24);
  //   c20 = `is.object`(m24);
  //   if c20 then L1() else L2();
  // L0(dx14):
  //   return dx14;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", m24);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2();
  // L2():
  //   __6 = ldf `[` in base;
  //   r43 = dyn __6(m24, <missing>, 1);
  //   goto L0(r43);
  // L3():
  //   dx13 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx13);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_9, CCP, RHO);
  // p10 = prom<V +>{
  //   graphics3 = ld graphics;
  //   graphics4 = force? graphics3;
  //   checkMissing(graphics4);
  //   return graphics4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_10, CCP, RHO);
  // p11 = prom<V +>{
  //   httpLabel = ld httpLabel;
  //   httpLabel1 = force? httpLabel;
  //   checkMissing(httpLabel1);
  //   return httpLabel1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_11, CCP, RHO);
  // r47 = dyn menu1(p9, p10, p11)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_menu1_, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L68() else D28()
  // L68()
  goto L68_;

D28_:;
  // deopt 102 [r47]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L68_:;
  // st res = r47
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L9()
  // L9()
  goto L9_;

D29_:;
  // deopt 106 [res2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_res2_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L70_:;
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // r48 = `>`(res3, 0)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c21 then L71() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L71()
    goto L71_;
  } else {
  // L13()
    goto L13_;
  }

L71_:;
  // m27 = ld m
  Rsh_Fir_reg_m27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L72() else D30()
  // L72()
  goto L72_;

D30_:;
  // deopt 110 [m27]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_m27_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L72_:;
  // m28 = force? m27
  Rsh_Fir_reg_m28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m27_);
  // checkMissing(m28)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_m28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(m28)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_m28_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c22 then L73() else L74(m28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L73()
    goto L73_;
  } else {
  // L74(m28)
    Rsh_Fir_reg_m30_ = Rsh_Fir_reg_m28_;
    goto L74_;
  }

L73_:;
  // dr14 = tryDispatchBuiltin.1("[", m28)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_m28_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc7 then L75() else L74(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L75()
    goto L75_;
  } else {
  // L74(dr14)
    Rsh_Fir_reg_m30_ = Rsh_Fir_reg_dr14_;
    goto L74_;
  }

L74_:;
  // res4 = ld res
  Rsh_Fir_reg_res4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L76() else D31()
  // L76()
  goto L76_;

L75_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L14(dx15)
  // L14(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L14_;

D31_:;
  // deopt 112 [m30, res4]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_m30_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_res4_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L76_:;
  // res5 = force? res4
  Rsh_Fir_reg_res5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res4_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r49 = dyn __7(m30, res5, "URL")
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_m30_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_res5_;
  Rsh_Fir_array_args95[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 3, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L14(r49)
  // L14(r49)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r49_;
  goto L14_;

D32_:;
  // deopt 117 [m31]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_m31_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L77_:;
  // m32 = force? m31
  Rsh_Fir_reg_m32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m31_);
  // checkMissing(m32)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_m32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(m32)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_m32_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c23 then L78() else L79(m32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L78()
    goto L78_;
  } else {
  // L79(m32)
    Rsh_Fir_reg_m34_ = Rsh_Fir_reg_m32_;
    goto L79_;
  }

L78_:;
  // dr16 = tryDispatchBuiltin.1("[", m32)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_m32_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc8 then L80() else L79(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L80()
    goto L80_;
  } else {
  // L79(dr16)
    Rsh_Fir_reg_m34_ = Rsh_Fir_reg_dr16_;
    goto L79_;
  }

L79_:;
  // res6 = ld res
  Rsh_Fir_reg_res6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L81() else D33()
  // L81()
  goto L81_;

L80_:;
  // dx17 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L15(dx17)
  // L15(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L15_;

D33_:;
  // deopt 119 [m34, res6]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_m34_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_res6_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L81_:;
  // res7 = force? res6
  Rsh_Fir_reg_res7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res6_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r50 = dyn __8(m34, res7, "Name")
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_m34_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_res7_;
  Rsh_Fir_array_args101[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L15(r50)
  // L15(r50)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r50_;
  goto L15_;

D34_:;
  // deopt 124 [dx18, l, dx18]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_deopt(124, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L82_:;
  // r51 = dyn names__(l, NULL, dx18)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L83() else D35()
  // L83()
  goto L83_;

D35_:;
  // deopt 126 [dx18, r51]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L83_:;
  // st URL = r51
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L84() else D36()
  // L84()
  goto L84_;

D36_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // p12 = prom<V +>{
  //   URL = ld URL;
  //   URL1 = force? URL;
  //   checkMissing(URL1);
  //   c24 = `is.object`(URL1);
  //   if c24 then L1() else L2(URL1);
  // L0(dx20):
  //   return dx20;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", URL1);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(URL3):
  //   __9 = ldf `[` in base;
  //   r52 = dyn __9(URL3, 1);
  //   goto L0(r52);
  // L3():
  //   dx19 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx19);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner5504565_12, CCP, RHO);
  // r54 = dyn sub("/$", "", p12)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L85() else D37()
  // L85()
  goto L85_;

D37_:;
  // deopt 133 [r54]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L85_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r54
  return Rsh_Fir_reg_r54_;

D38_:;
  // deopt 135 []
  Rsh_Fir_deopt(135, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // r55 = dyn character()
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L88() else D39()
  // L88()
  goto L88_;

D39_:;
  // deopt 136 [r55]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L88_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r55
  return Rsh_Fir_reg_r55_;
}
SEXP Rsh_Fir_user_promise_inner5504565_(SEXP CCP, SEXP RHO) {
  // label1 = ld label
  Rsh_Fir_reg_label1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // label2 = force? label1
  Rsh_Fir_reg_label2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_label1_);
  // checkMissing(label2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_label2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return label2
  return Rsh_Fir_reg_label2_;
}
SEXP Rsh_Fir_user_promise_inner5504565_1(SEXP CCP, SEXP RHO) {
  // m1 = ld m
  Rsh_Fir_reg_m1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m2 = force? m1
  Rsh_Fir_reg_m2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1_);
  // checkMissing(m2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_m2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(m2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_m2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx4
  return Rsh_Fir_reg_dx4_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", m2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_m2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r18 = dyn __1(m2, <missing>, "URL")
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r18_;
  goto L0_;

L3_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L0(dx3)
  // L0(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner5504565_2(SEXP CCP, SEXP RHO) {
  // m5 = ld m
  Rsh_Fir_reg_m5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m6 = force? m5
  Rsh_Fir_reg_m6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m5_);
  // checkMissing(m6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_m6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(m6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_m6_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c14 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx6
  return Rsh_Fir_reg_dx6_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", m6)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_m6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r21 = dyn __2(m6, <missing>, "Comment")
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_m6_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r21_;
  goto L0_;

L3_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(dx5)
  // L0(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner5504565_3(SEXP CCP, SEXP RHO) {
  // label3 = ld label
  Rsh_Fir_reg_label3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // label4 = force? label3
  Rsh_Fir_reg_label4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_label3_);
  // checkMissing(label4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_label4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return label4
  return Rsh_Fir_reg_label4_;
}
SEXP Rsh_Fir_user_promise_inner5504565_4(SEXP CCP, SEXP RHO) {
  // label5 = ld label
  Rsh_Fir_reg_label5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // label6 = force? label5
  Rsh_Fir_reg_label6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_label5_);
  // checkMissing(label6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_label6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return label6
  return Rsh_Fir_reg_label6_;
}
SEXP Rsh_Fir_user_promise_inner5504565_5(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard4 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r35 = dyn c18(dx12, "(other mirrors)")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r35_;
  goto L0_;

L2_:;
  // m17 = ld m
  Rsh_Fir_reg_m17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m18 = force? m17
  Rsh_Fir_reg_m18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m17_);
  // checkMissing(m18)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_m18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(m18)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_m18_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c17 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r32 = dyn base4(<lang `[`(m, , 1)>, "(other mirrors)")
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;

L4_:;
  // dr10 = tryDispatchBuiltin.1("[", m18)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_m18_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc5 then L6() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L6()
    goto L6_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r34 = dyn __5(m18, <missing>, 1)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_m18_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L1(r34)
  // L1(r34)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r34_;
  goto L1_;

L6_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L1(dx11)
  // L1(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner5504565_6(SEXP CCP, SEXP RHO) {
  // graphics1 = ld graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // graphics2 = force? graphics1
  Rsh_Fir_reg_graphics2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics1_);
  // checkMissing(graphics2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_graphics2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return graphics2
  return Rsh_Fir_reg_graphics2_;
}
SEXP Rsh_Fir_user_promise_inner5504565_7(SEXP CCP, SEXP RHO) {
  // httpsLabel = ld httpsLabel
  Rsh_Fir_reg_httpsLabel = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // httpsLabel1 = force? httpsLabel
  Rsh_Fir_reg_httpsLabel1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_httpsLabel);
  // checkMissing(httpsLabel1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_httpsLabel1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return httpsLabel1
  return Rsh_Fir_reg_httpsLabel1_;
}
SEXP Rsh_Fir_user_promise_inner5504565_8(SEXP CCP, SEXP RHO) {
  // m21 = ld m
  Rsh_Fir_reg_m21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m22 = force? m21
  Rsh_Fir_reg_m22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m21_);
  // checkMissing(m22)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_m22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return m22
  return Rsh_Fir_reg_m22_;
}
SEXP Rsh_Fir_user_promise_inner5504565_9(SEXP CCP, SEXP RHO) {
  // m23 = ld m
  Rsh_Fir_reg_m23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // m24 = force? m23
  Rsh_Fir_reg_m24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m23_);
  // checkMissing(m24)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_m24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(m24)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_m24_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c20 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx14
  return Rsh_Fir_reg_dx14_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", m24)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_m24_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r43 = dyn __6(m24, <missing>, 1)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_m24_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r43_;
  goto L0_;

L3_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L0(dx13)
  // L0(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner5504565_10(SEXP CCP, SEXP RHO) {
  // graphics3 = ld graphics
  Rsh_Fir_reg_graphics3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // graphics4 = force? graphics3
  Rsh_Fir_reg_graphics4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics3_);
  // checkMissing(graphics4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_graphics4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return graphics4
  return Rsh_Fir_reg_graphics4_;
}
SEXP Rsh_Fir_user_promise_inner5504565_11(SEXP CCP, SEXP RHO) {
  // httpLabel = ld httpLabel
  Rsh_Fir_reg_httpLabel = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // httpLabel1 = force? httpLabel
  Rsh_Fir_reg_httpLabel1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_httpLabel);
  // checkMissing(httpLabel1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_httpLabel1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return httpLabel1
  return Rsh_Fir_reg_httpLabel1_;
}
SEXP Rsh_Fir_user_promise_inner5504565_12(SEXP CCP, SEXP RHO) {
  // URL = ld URL
  Rsh_Fir_reg_URL = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // URL1 = force? URL
  Rsh_Fir_reg_URL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_URL);
  // checkMissing(URL1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_URL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(URL1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_URL1_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c24 then L1() else L2(URL1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L1()
    goto L1_;
  } else {
  // L2(URL1)
    Rsh_Fir_reg_URL3_ = Rsh_Fir_reg_URL1_;
    goto L2_;
  }

L0_:;
  // return dx20
  return Rsh_Fir_reg_dx20_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", URL1)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_URL1_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_URL3_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r52 = dyn __9(URL3, 1)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_URL3_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r52_;
  goto L0_;

L3_:;
  // dx19 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L0(dx19)
  // L0(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
