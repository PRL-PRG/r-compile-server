#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `format.check_package_description_encoding` = r
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
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_gettextf;  // gettextf
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_gettext;  // gettext
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_gettext1_;  // gettext1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg__pretty_format;  // _pretty_format
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_gettext2_;  // gettext2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_gettext3_;  // gettext3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg__pretty_format1_;  // _pretty_format1
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_lengths;  // lengths
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_strwrap;  // strwrap
  SEXP Rsh_Fir_reg_gettextf1_;  // gettextf1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r61_;  // r61

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L33() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L4(NULL)
  // L4(NULL)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 4);
  goto L4_;

L3_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r8_;
  goto L4_;

L4_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L5_:;
  // c5 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c5 then L48() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L48()
    goto L48_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7(NULL)
  // L7(NULL)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 4);
  goto L7_;

L7_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L8_:;
  // c7 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c7 then L60() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L60()
    goto L60_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L11(NULL)
  // L11(NULL)
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 4);
  goto L11_;

L10_:;
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r25_;
  goto L11_;

L11_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard6 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L12_:;
  // c11 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c11 then L79() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L79()
    goto L79_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L15(NULL)
  // L15(NULL)
  Rsh_Fir_reg_r44_ = Rsh_const(CCP, 4);
  goto L15_;

L14_:;
  // goto L15(r38)
  // L15(r38)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r38_;
  goto L15_;

L15_:;
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard8 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L16_:;
  // c14 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c14 then L96() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L96()
    goto L96_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // r52 = `>`(r48, 0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r53 = dyn any(r52)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L95() else D30()
  // L95()
  goto L95_;

L18_:;
  // goto L20(NULL)
  // L20(NULL)
  Rsh_Fir_reg_r60_ = Rsh_const(CCP, 4);
  goto L20_;

L19_:;
  // goto L20(r55)
  // L20(r55)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r55_;
  goto L20_;

L20_:;
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r61 = dyn c16(r2, r13, r19, r32, r44, r60)
  SEXP Rsh_Fir_array_args12[6];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args12[4] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args12[5] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names1[6];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 6, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L103() else D34()
  // L103()
  goto L103_;

L21_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r = dyn base(<lang character()>, <lang if(length(`$`(x, non_portable_encoding)), {
  //     c(gettextf("Encoding '%s' is not portable", `$`(x, non_portable_encoding)), "")
  //   })>, <lang if(length(`$`(x, missing_encoding)), {
  //     gettext("Unknown encoding with non-ASCII data")
  //   })>, <lang if(length(`$`(x, fields_with_non_ASCII_tags)), {
  //     c(gettext("Fields with non-ASCII tags:"), .pretty_format(`$`(x, fields_with_non_ASCII_tags)), gettext("All field tags must be ASCII."), "")
  //   })>, <lang if(length(`$`(x, fields_with_non_ASCII_values)), {
  //     c(gettext("Fields with non-ASCII values:"), .pretty_format(`$`(x, fields_with_non_ASCII_values)))
  //   })>, <lang if(any(`>`(as.integer(lengths(x)), 0)), {
  //     c(strwrap(gettextf("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual.")), "")
  //   })>)
  SEXP Rsh_Fir_array_args13[6];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args13[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args13[5] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[6];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 6, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // r2 = dyn character()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r3 = dyn base1(<lang `$`(x, non_portable_encoding)>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 7 [x1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L29() else L30(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L29()
    goto L29_;
  } else {
  // L30(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L30_;
  }

L28_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r6 = dyn length(dx1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L32() else D3()
  // L32()
  goto L32_;

L29_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L31() else L30(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L30_;
  }

L30_:;
  // r5 = `$`(x4, <sym non_portable_encoding>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L28(r5)
  // L28(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L28_;

L31_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L28(dx)
  // L28(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L28_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r6_;
  goto L1_;

L33_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

L35_:;
  // r7 = dyn base2(<lang gettextf("Encoding '%s' is not portable", `$`(x, non_portable_encoding))>, "")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c2 = `is.object`(x6);
  //   if c2 then L1() else L2(x6);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", x6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(x8):
  //   r9 = `$`(x8, <sym non_portable_encoding>);
  //   goto L0(r9);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_, CCP, RHO);
  // r11 = dyn gettextf("Encoding '%s' is not portable", p)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

D5_:;
  // deopt 18 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L37_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r12 = dyn c3(r11, "")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

D6_:;
  // deopt 21 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r12_;
  goto L3_;

L40_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

L41_:;
  // r14 = dyn base3(<lang `$`(x, missing_encoding)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

D7_:;
  // deopt 26 [x9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L42_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L44() else L45(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L44()
    goto L44_;
  } else {
  // L45(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L45_;
  }

L43_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r17 = dyn length1(dx5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L44_:;
  // dr4 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc2 then L46() else L45(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr4)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr4_;
    goto L45_;
  }

L45_:;
  // r16 = `$`(x12, <sym missing_encoding>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L43(r16)
  // L43(r16)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r16_;
  goto L43_;

L46_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L43(dx4)
  // L43(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L43_;

D8_:;
  // deopt 30 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r17_;
  goto L5_;

L48_:;
  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // r18 = dyn gettext("Unknown encoding with non-ASCII data")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

D10_:;
  // deopt 34 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

L52_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D11()
  // L54()
  goto L54_;

L53_:;
  // r20 = dyn base4(<lang `$`(x, fields_with_non_ASCII_tags)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r20)
  // L8(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L8_;

D11_:;
  // deopt 39 [x13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L54_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x14)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c6 then L56() else L57(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L56()
    goto L56_;
  } else {
  // L57(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L57_;
  }

L55_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r23 = dyn length2(dx7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L59() else D12()
  // L59()
  goto L59_;

L56_:;
  // dr6 = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc3 then L58() else L57(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr6)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr6_;
    goto L57_;
  }

L57_:;
  // r22 = `$`(x16, <sym fields_with_non_ASCII_tags>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L55(r22)
  // L55(r22)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r22_;
  goto L55_;

L58_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L55(dx6)
  // L55(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L55_;

D12_:;
  // deopt 43 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r23_;
  goto L8_;

L60_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard5 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L61_:;
  // gettext1 = ldf gettext
  Rsh_Fir_reg_gettext1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L63() else D13()
  // L63()
  goto L63_;

L62_:;
  // r24 = dyn base5(<lang gettext("Fields with non-ASCII tags:")>, <lang .pretty_format(`$`(x, fields_with_non_ASCII_tags))>, <lang gettext("All field tags must be ASCII.")>, "")
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 4, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L10_;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // r26 = dyn gettext1("Fields with non-ASCII tags:")
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L64() else D14()
  // L64()
  goto L64_;

D14_:;
  // deopt 49 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L64_:;
  // _pretty_format = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

D15_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p1 = prom<V +>{
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   c8 = `is.object`(x18);
  //   if c8 then L1() else L2(x18);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", x18);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(x20):
  //   r27 = `$`(x20, <sym fields_with_non_ASCII_tags>);
  //   goto L0(r27);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_1, CCP, RHO);
  // r29 = dyn _pretty_format(p1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

D16_:;
  // deopt 53 [r29]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L66_:;
  // gettext2 = ldf gettext
  Rsh_Fir_reg_gettext2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

D17_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r30 = dyn gettext2("All field tags must be ASCII.")
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext2_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

D18_:;
  // deopt 57 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L68_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r31 = dyn c9(r26, r29, r30, "")
  SEXP Rsh_Fir_array_args61[4];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args61[3] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 4, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

D19_:;
  // deopt 60 [r31]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r31_;
  goto L10_;

L71_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L72_:;
  // r33 = dyn base6(<lang `$`(x, fields_with_non_ASCII_values)>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L12_;

D20_:;
  // deopt 65 [x21]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L73_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(x22)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c10 then L75() else L76(x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L75()
    goto L75_;
  } else {
  // L76(x22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L76_;
  }

L74_:;
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r36 = dyn length3(dx11)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L78() else D21()
  // L78()
  goto L78_;

L75_:;
  // dr10 = tryDispatchBuiltin.1("$", x22)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc5 then L77() else L76(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L77()
    goto L77_;
  } else {
  // L76(dr10)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr10_;
    goto L76_;
  }

L76_:;
  // r35 = `$`(x24, <sym fields_with_non_ASCII_values>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L74(r35)
  // L74(r35)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r35_;
  goto L74_;

L77_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L74(dx10)
  // L74(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L74_;

D21_:;
  // deopt 69 [r36]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L12(r36)
  // L12(r36)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r36_;
  goto L12_;

L79_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard7 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L80_:;
  // gettext3 = ldf gettext
  Rsh_Fir_reg_gettext3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L82() else D22()
  // L82()
  goto L82_;

L81_:;
  // r37 = dyn base7(<lang gettext("Fields with non-ASCII values:")>, <lang .pretty_format(`$`(x, fields_with_non_ASCII_values))>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L14(r37)
  // L14(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L14_;

D22_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L82_:;
  // r39 = dyn gettext3("Fields with non-ASCII values:")
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext3_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L83() else D23()
  // L83()
  goto L83_;

D23_:;
  // deopt 75 [r39]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L83_:;
  // _pretty_format1 = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L84() else D24()
  // L84()
  goto L84_;

D24_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // p2 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   c12 = `is.object`(x26);
  //   if c12 then L1() else L2(x26);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", x26);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(x28):
  //   r40 = `$`(x28, <sym fields_with_non_ASCII_values>);
  //   goto L0(r40);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_2, CCP, RHO);
  // r42 = dyn _pretty_format1(p2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format1_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L85() else D25()
  // L85()
  goto L85_;

D25_:;
  // deopt 79 [r42]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r43 = dyn c13(r39, r42)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L86() else D26()
  // L86()
  goto L86_;

D26_:;
  // deopt 81 [r43]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L14(r43)
  // L14(r43)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r43_;
  goto L14_;

L88_:;
  // sym9 = ldf `as.integer`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base9 = ldf `as.integer` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard9 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L89_:;
  // r45 = dyn base8(<lang `>`(as.integer(lengths(x)), 0)>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L16(r45)
  // L16(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L16_;

L90_:;
  // lengths = ldf lengths
  Rsh_Fir_reg_lengths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L92() else D27()
  // L92()
  goto L92_;

L91_:;
  // r47 = dyn base9(<lang lengths(x)>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L17(r47)
  // L17(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L17_;

D27_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // p3 = prom<V +>{
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   return x30;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_3, CCP, RHO);
  // r50 = dyn lengths(p3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L93() else D28()
  // L93()
  goto L93_;

D28_:;
  // deopt 91 [r50]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L93_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r51 = dyn as_integer(r50)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L94() else D29()
  // L94()
  goto L94_;

D29_:;
  // deopt 93 [r51]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L17(r51)
  // L17(r51)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r51_;
  goto L17_;

D30_:;
  // deopt 97 [r53]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L16(r53)
  // L16(r53)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r53_;
  goto L16_;

L96_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard10 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L97_:;
  // strwrap = ldf strwrap
  Rsh_Fir_reg_strwrap = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L99() else D31()
  // L99()
  goto L99_;

L98_:;
  // r54 = dyn base10(<lang strwrap(gettextf("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual."))>, "")
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L19(r54)
  // L19(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L19_;

D31_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // p4 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   r56 = dyn gettextf1("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual.");
  //   return r56;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_4, CCP, RHO);
  // r58 = dyn strwrap(p4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L100() else D32()
  // L100()
  goto L100_;

D32_:;
  // deopt 103 [r58]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L100_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r59 = dyn c15(r58, "")
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L101() else D33()
  // L101()
  goto L101_;

D33_:;
  // deopt 106 [r59]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L19(r59)
  // L19(r59)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r59_;
  goto L19_;

D34_:;
  // deopt 110 [r61]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L0(r61)
  // L0(r61)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r61_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r9 = `$`(x8, <sym non_portable_encoding>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO) {
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x18)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", x18)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r27 = `$`(x20, <sym fields_with_non_ASCII_tags>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r27_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO) {
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(x26)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", x26)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r40 = `$`(x28, <sym fields_with_non_ASCII_values>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r40_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO) {
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return x30
  return Rsh_Fir_reg_x30_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO) {
  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // r56 = dyn gettextf1("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual.")
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names29, CCP, RHO);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
