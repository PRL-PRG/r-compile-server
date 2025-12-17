#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2108579725_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2108579725_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2108579725_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2108579725_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner2108579725
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2108579725_, RHO, CCP);
  // st `.xpdSignature` = r
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
SEXP Rsh_Fir_user_function_inner2108579725_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2108579725 dynamic dispatch ([obj, sig, nadd])

  return Rsh_Fir_user_version_inner2108579725_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2108579725_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2108579725 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2108579725/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_obj;  // obj
  SEXP Rsh_Fir_reg_sig;  // sig
  SEXP Rsh_Fir_reg_nadd;  // nadd
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_obj1_;  // obj1
  SEXP Rsh_Fir_reg_obj2_;  // obj2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sig1_;  // sig1
  SEXP Rsh_Fir_reg_sig2_;  // sig2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sig3_;  // sig3
  SEXP Rsh_Fir_reg_sig4_;  // sig4
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_obj3_;  // obj3
  SEXP Rsh_Fir_reg_obj4_;  // obj4
  SEXP Rsh_Fir_reg_is_environment;  // is_environment
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_obj5_;  // obj5
  SEXP Rsh_Fir_reg_obj6_;  // obj6
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_obj7_;  // obj7
  SEXP Rsh_Fir_reg_obj8_;  // obj8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_is1_;  // is1
  SEXP Rsh_Fir_reg_objw;  // objw
  SEXP Rsh_Fir_reg_objw1_;  // objw1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_packageSlot;  // packageSlot
  SEXP Rsh_Fir_reg_sigw;  // sigw
  SEXP Rsh_Fir_reg_sigw1_;  // sigw1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_pkgw;  // pkgw
  SEXP Rsh_Fir_reg_pkgw1_;  // pkgw1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sigw2_;  // sigw2
  SEXP Rsh_Fir_reg_sigw3_;  // sigw3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_pkgw2_;  // pkgw2
  SEXP Rsh_Fir_reg_pkgw3_;  // pkgw3
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg__simpleSignature;  // _simpleSignature
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sigw4_;  // sigw4
  SEXP Rsh_Fir_reg_sigw5_;  // sigw5
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_rep1_;  // rep1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sig6_;  // sig6
  SEXP Rsh_Fir_reg_sig7_;  // sig7
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_pkgw4_;  // pkgw4
  SEXP Rsh_Fir_reg_pkgw5_;  // pkgw5
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_rep2_;  // rep2
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sigw6_;  // sigw6
  SEXP Rsh_Fir_reg_sigw7_;  // sigw7
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_remove;  // remove
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_obj9_;  // obj9
  SEXP Rsh_Fir_reg_obj10_;  // obj10
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg__pkgMethodLabel;  // _pkgMethodLabel
  SEXP Rsh_Fir_reg_objw2_;  // objw2
  SEXP Rsh_Fir_reg_objw3_;  // objw3
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_var;  // var
  SEXP Rsh_Fir_reg_var1_;  // var1
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_objw4_;  // objw4
  SEXP Rsh_Fir_reg_objw5_;  // objw5
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_objw7_;  // objw7
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_objw9_;  // objw9
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_var2_;  // var2
  SEXP Rsh_Fir_reg_var3_;  // var3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_objw10_;  // objw10
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_obj11_;  // obj11
  SEXP Rsh_Fir_reg_obj12_;  // obj12

  // Bind parameters
  Rsh_Fir_reg_obj = PARAMS[0];
  Rsh_Fir_reg_sig = PARAMS[1];
  Rsh_Fir_reg_nadd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st obj = obj
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_obj, RHO);
  (void)(Rsh_Fir_reg_obj);
  // st sig = sig
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_sig, RHO);
  (void)(Rsh_Fir_reg_sig);
  // st nadd = nadd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_nadd, RHO);
  (void)(Rsh_Fir_reg_nadd);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L19() else D0()
  // L19()
  goto L19_;

L0_:;
  // sym = ldf `is.environment`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `is.environment` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L1_:;
  // obj11 = ld obj
  Rsh_Fir_reg_obj11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L86() else D39()
  // L86()
  goto L86_;

L2_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L33() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L1()
  // L1()
  goto L1_;

L4_:;
  // s = toForSeq(r8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // l2 = length(s)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l2_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 6);
  // goto L5(i)
  // L5(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L5_;

L5_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // c2 = `<`.1(l2, i2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if c2 then L38() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L18()
    goto L18_;
  }

L6_:;
  // goto L17(i2)
  // L17(i2)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i2_;
  goto L17_;

L7_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L8_:;
  // r27 = `<`(r24, r25)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c4 then L54() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L54()
    goto L54_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L12(i12)
  // L12(i12)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i12_;
  goto L12_;

L10_:;
  // st pkgw = r29
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L12(i17)
  // L12(i17)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i17_;
  goto L12_;

L11_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r33 = dyn c5(pkgw3, r31)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_pkgw3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L60() else D23()
  // L60()
  goto L60_;

L12_:;
  // _simpleSignature = ldf `.simpleSignature`
  Rsh_Fir_reg__simpleSignature = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L62() else D24()
  // L62()
  goto L62_;

L13_:;
  // c8 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c8 then L77() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L77()
    goto L77_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L16(i24, NULL)
  // L16(i24, NULL)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_objw10_ = Rsh_const(CCP, 12);
  goto L16_;

L15_:;
  // st obj = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L16(i30, objw9)
  // L16(i30, objw9)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_objw10_ = Rsh_Fir_reg_objw9_;
  goto L16_;

L16_:;
  // goto L17(i31)
  // L17(i31)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i31_;
  goto L17_;

L17_:;
  // goto L5(i32)
  // L5(i32)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i32_;
  goto L5_;

L18_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // st what = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p = prom<V +>{
  //   obj1 = ld obj;
  //   obj2 = force? obj1;
  //   checkMissing(obj2);
  //   return obj2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_, CCP, RHO);
  // r1 = dyn is(p, "MethodDefinition")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L20() else D1()
  // L20()
  goto L20_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L21() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L0()
    goto L0_;
  }

L21_:;
  // sig1 = ld sig
  Rsh_Fir_reg_sig1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

D2_:;
  // deopt 5 [sig1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_sig1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // sig2 = force? sig1
  Rsh_Fir_reg_sig2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig1_);
  // checkMissing(sig2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sig2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // l = ld obj
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D3_:;
  // deopt 8 [sig2, l, sig2]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_sig2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_sig2_;
  Rsh_Fir_deopt(8, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // r2 = dyn ___(l, NULL, "defined", sig2)
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args16[3] = Rsh_Fir_reg_sig2_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

D4_:;
  // deopt 11 [sig2, r2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_sig2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // st obj = r2
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sig3 = ld sig
  Rsh_Fir_reg_sig3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

D5_:;
  // deopt 13 [sig3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_sig3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // sig4 = force? sig3
  Rsh_Fir_reg_sig4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig3_);
  // checkMissing(sig4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sig4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // l1 = ld obj
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___1 = ldf `@<-`
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

D6_:;
  // deopt 16 [sig4, l1, sig4]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_sig4_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_sig4_;
  Rsh_Fir_deopt(16, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // r3 = dyn ___1(l1, NULL, "target", sig4)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_sig4_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

D7_:;
  // deopt 19 [sig4, r3]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_sig4_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // st obj = r3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // goto L1()
  // L1()
  goto L1_;

L29_:;
  // obj3 = ld obj
  Rsh_Fir_reg_obj3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L30_:;
  // r4 = dyn base(<sym obj>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D8_:;
  // deopt 23 [obj3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_obj3_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // obj4 = force? obj3
  Rsh_Fir_reg_obj4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj3_);
  // checkMissing(obj4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_obj4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // is_environment = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r6 = dyn is_environment(obj4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_obj4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 26 [r6]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L33_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // obj5 = ld obj
  Rsh_Fir_reg_obj5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L35_:;
  // r7 = dyn base1(<sym obj>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D10_:;
  // deopt 29 [obj5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_obj5_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // obj6 = force? obj5
  Rsh_Fir_reg_obj6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj5_);
  // checkMissing(obj6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_obj6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r9 = dyn names(obj6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_obj6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 32 [r9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L38_:;
  // goto L1()
  // L1()
  goto L1_;

D12_:;
  // deopt 34 [i2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // p1 = prom<V +>{
  //   what = ld what;
  //   what1 = force? what;
  //   checkMissing(what1);
  //   return what1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_1, CCP, RHO);
  // p2 = prom<V +>{
  //   obj7 = ld obj;
  //   obj8 = force? obj7;
  //   checkMissing(obj8);
  //   return obj8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_2, CCP, RHO);
  // r12 = dyn get[, envir](p1, p2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D13_:;
  // deopt 38 [i2, r12]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L40_:;
  // st objw = r12
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // is1 = ldf is
  Rsh_Fir_reg_is1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

D14_:;
  // deopt 41 [i2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   objw = ld objw;
  //   objw1 = force? objw;
  //   checkMissing(objw1);
  //   return objw1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_3, CCP, RHO);
  // r14 = dyn is1(p3, "MethodDefinition")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L42() else D15()
  // L42()
  goto L42_;

D15_:;
  // deopt 44 [i2, r14]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L42_:;
  // c3 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L6()
    goto L6_;
  }

L43_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r15 = dyn __(<sym objw>, <sym defined>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // st sigw = r15
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // packageSlot = ldf packageSlot
  Rsh_Fir_reg_packageSlot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L44() else D16()
  // L44()
  goto L44_;

D16_:;
  // deopt 49 [i2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L44_:;
  // p4 = prom<V +>{
  //   sigw = ld sigw;
  //   sigw1 = force? sigw;
  //   checkMissing(sigw1);
  //   return sigw1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_4, CCP, RHO);
  // r17 = dyn packageSlot(p4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_packageSlot, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L45() else D17()
  // L45()
  goto L45_;

D17_:;
  // deopt 51 [i2, r17]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L45_:;
  // st pkgw = r17
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // pkgw = ld pkgw
  Rsh_Fir_reg_pkgw = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

L47_:;
  // r18 = dyn base2(<sym pkgw>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(i2, r18)
  // L7(i2, r18)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D18_:;
  // deopt 55 [i2, pkgw]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_pkgw;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L48_:;
  // pkgw1 = force? pkgw
  Rsh_Fir_reg_pkgw1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgw);
  // checkMissing(pkgw1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_pkgw1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r20 = dyn length(pkgw1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_pkgw1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 58 [i2, r20]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L7(i2, r20)
  // L7(i2, r20)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L7_;

L50_:;
  // sigw2 = ld sigw
  Rsh_Fir_reg_sigw2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L52() else D20()
  // L52()
  goto L52_;

L51_:;
  // r23 = dyn base3(<sym sigw>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(i9, r19, r23)
  // L8(i9, r19, r23)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
  goto L8_;

D20_:;
  // deopt 60 [i9, r19, sigw2]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_sigw2_;
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L52_:;
  // sigw3 = force? sigw2
  Rsh_Fir_reg_sigw3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sigw2_);
  // checkMissing(sigw3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sigw3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r26 = dyn length1(sigw3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sigw3_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L53() else D21()
  // L53()
  goto L53_;

D21_:;
  // deopt 63 [i9, r19, r26]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(63, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L8(i9, r19, r26)
  // L8(i9, r19, r26)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L8_;

L54_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard4 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // pkgw2 = ld pkgw
  Rsh_Fir_reg_pkgw2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L57() else D22()
  // L57()
  goto L57_;

L56_:;
  // r28 = dyn base4(<sym pkgw>, <lang rep("", `-`(length(sigw), length(pkgw)))>)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(i12, r28)
  // L10(i12, r28)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L10_;

D22_:;
  // deopt 67 [i12, pkgw2]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_pkgw2_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L57_:;
  // pkgw3 = force? pkgw2
  Rsh_Fir_reg_pkgw3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgw2_);
  // checkMissing(pkgw3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_pkgw3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // sym5 = ldf rep
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf rep in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard5 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r32 = dyn rep("", <lang `-`(length(sigw), length(pkgw))>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L11(i12, r32)
  // L11(i12, r32)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L11_;

L59_:;
  // r30 = dyn base5("", <lang `-`(length(sigw), length(pkgw))>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L11(i12, r30)
  // L11(i12, r30)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L11_;

D23_:;
  // deopt 73 [i20, r33]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L10(i20, r33)
  // L10(i20, r33)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r33_;
  goto L10_;

D24_:;
  // deopt 78 [i21]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L62_:;
  // p5 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L2() else L3();
  // L0(r36):
  //   return r36;
  // L2():
  //   sigw4 = ld sigw;
  //   sigw5 = force? sigw4;
  //   checkMissing(sigw5);
  //   sym7 = ldf rep;
  //   base7 = ldf rep in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L4() else L5();
  // L3():
  //   r35 = dyn base6(<sym sigw>, <lang rep("ANY", nadd)>);
  //   goto L0(r35);
  // L1(r38):
  //   c6 = ldf c in base;
  //   r40 = dyn c6(sigw5, r38);
  //   goto L0(r40);
  // L4():
  //   rep1 = ldf rep in base;
  //   r39 = dyn rep1("ANY", <sym nadd>);
  //   goto L1(r39);
  // L5():
  //   r37 = dyn base7("ANY", <sym nadd>);
  //   goto L1(r37);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym8 = ldf names;
  //   base8 = ldf names in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r43):
  //   return r43;
  // L1():
  //   sig6 = ld sig;
  //   sig7 = force? sig6;
  //   checkMissing(sig7);
  //   names1 = ldf names in base;
  //   r44 = dyn names1(sig7);
  //   goto L0(r44);
  // L2():
  //   r42 = dyn base8(<sym sig>);
  //   goto L0(r42);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_6, CCP, RHO);
  // p7 = prom<V +>{
  //   sym9 = ldf c;
  //   base9 = ldf c in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L2() else L3();
  // L0(r47):
  //   return r47;
  // L2():
  //   pkgw4 = ld pkgw;
  //   pkgw5 = force? pkgw4;
  //   checkMissing(pkgw5);
  //   sym10 = ldf rep;
  //   base10 = ldf rep in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L4() else L5();
  // L3():
  //   r46 = dyn base9(<sym pkgw>, <lang rep("methods", nadd)>);
  //   goto L0(r46);
  // L1(r49):
  //   c7 = ldf c in base;
  //   r51 = dyn c7(pkgw5, r49);
  //   goto L0(r51);
  // L4():
  //   rep2 = ldf rep in base;
  //   r50 = dyn rep2("methods", <sym nadd>);
  //   goto L1(r50);
  // L5():
  //   r48 = dyn base10("methods", <sym nadd>);
  //   goto L1(r48);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_7, CCP, RHO);
  // r53 = dyn _simpleSignature[, names, packages](p5, p6, p7)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names29[2] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__simpleSignature, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L63() else D25()
  // L63()
  goto L63_;

D25_:;
  // deopt 84 [i21, r53]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L63_:;
  // st sigw = r53
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // sigw6 = ld sigw
  Rsh_Fir_reg_sigw6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L64() else D26()
  // L64()
  goto L64_;

D26_:;
  // deopt 86 [i21, sigw6]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_sigw6_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L64_:;
  // sigw7 = force? sigw6
  Rsh_Fir_reg_sigw7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sigw6_);
  // checkMissing(sigw7)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sigw7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // l3 = ld objw
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ___2 = ldf `@<-`
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L65() else D27()
  // L65()
  goto L65_;

D27_:;
  // deopt 89 [i21, sigw7, l3, sigw7]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_sigw7_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_sigw7_;
  Rsh_Fir_deopt(89, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L65_:;
  // r54 = dyn ___2(l3, NULL, "target", sigw7)
  SEXP Rsh_Fir_array_args68[4];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args68[3] = Rsh_Fir_reg_sigw7_;
  SEXP Rsh_Fir_array_arg_names30[4];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L66() else D28()
  // L66()
  goto L66_;

D28_:;
  // deopt 92 [i21, sigw7, r54]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_sigw7_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(92, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L66_:;
  // st objw = r54
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // l4 = ld objw
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ___3 = ldf `@<-`
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L67() else D29()
  // L67()
  goto L67_;

D29_:;
  // deopt 95 [i21, sigw7, l4, sigw7]
  SEXP Rsh_Fir_array_deopt_stack28[4];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_sigw7_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_sigw7_;
  Rsh_Fir_deopt(95, 4, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L67_:;
  // r55 = dyn ___3(l4, NULL, "defined", sigw7)
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args69[3] = Rsh_Fir_reg_sigw7_;
  SEXP Rsh_Fir_array_arg_names31[4];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L68() else D30()
  // L68()
  goto L68_;

D30_:;
  // deopt 98 [i21, sigw7, r55]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_sigw7_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L68_:;
  // st objw = r55
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // remove = ldf remove
  Rsh_Fir_reg_remove = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L69() else D31()
  // L69()
  goto L69_;

D31_:;
  // deopt 101 [i21]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L69_:;
  // p8 = prom<V +>{
  //   what2 = ld what;
  //   what3 = force? what2;
  //   checkMissing(what3);
  //   return what3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_8, CCP, RHO);
  // p9 = prom<V +>{
  //   obj9 = ld obj;
  //   obj10 = force? obj9;
  //   checkMissing(obj10);
  //   return obj10;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_9, CCP, RHO);
  // r58 = dyn remove[list, envir](p8, p9)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_arg_names32[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_remove, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L70() else D32()
  // L70()
  goto L70_;

D32_:;
  // deopt 106 [i21, r58]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L70_:;
  // _pkgMethodLabel = ldf `.pkgMethodLabel`
  Rsh_Fir_reg__pkgMethodLabel = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L71() else D33()
  // L71()
  goto L71_;

D33_:;
  // deopt 108 [i21]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L71_:;
  // p10 = prom<V +>{
  //   objw2 = ld objw;
  //   objw3 = force? objw2;
  //   checkMissing(objw3);
  //   return objw3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2108579725_10, CCP, RHO);
  // r60 = dyn _pkgMethodLabel(p10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pkgMethodLabel, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L72() else D34()
  // L72()
  goto L72_;

D34_:;
  // deopt 110 [i21, r60]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L72_:;
  // st var = r60
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // sym11 = ldf nzchar
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base11 = ldf nzchar in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard11 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // var = ld var
  Rsh_Fir_reg_var = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L75() else D35()
  // L75()
  goto L75_;

L74_:;
  // r61 = dyn base11(<sym var>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L13(i21, r61)
  // L13(i21, r61)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L13_;

D35_:;
  // deopt 114 [i21, var]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_var;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L75_:;
  // var1 = force? var
  Rsh_Fir_reg_var1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var);
  // checkMissing(var1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_var1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r63 = dyn nzchar(var1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_var1_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L76() else D36()
  // L76()
  goto L76_;

D36_:;
  // deopt 117 [i21, r63]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L13(i21, r63)
  // L13(i21, r63)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L13_;

L77_:;
  // objw4 = ld objw
  Rsh_Fir_reg_objw4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L78() else D37()
  // L78()
  goto L78_;

D37_:;
  // deopt 118 [i24, objw4]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_objw4_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L78_:;
  // objw5 = force? objw4
  Rsh_Fir_reg_objw5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objw4_);
  // checkMissing(objw5)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_objw5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // l5 = ld obj
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c9 = `is.object`(l5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c9 then L79() else L80(i24, objw5, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L79()
    goto L79_;
  } else {
  // L80(i24, objw5, l5)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_objw7_ = Rsh_Fir_reg_objw5_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L80_;
  }

L79_:;
  // dr = tryDispatchBuiltin.0("[[<-", l5, objw5)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_objw5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args81);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc then L81() else L80(i24, objw5, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L81()
    goto L81_;
  } else {
  // L80(i24, objw5, dr)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_objw7_ = Rsh_Fir_reg_objw5_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr;
    goto L80_;
  }

L80_:;
  // var2 = ld var
  Rsh_Fir_reg_var2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L82() else D38()
  // L82()
  goto L82_;

L81_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L15(i24, objw5, dx)
  // L15(i24, objw5, dx)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_objw9_ = Rsh_Fir_reg_objw5_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

D38_:;
  // deopt 121 [i28, objw7, l7, objw5, var2]
  SEXP Rsh_Fir_array_deopt_stack37[5];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_objw7_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_objw5_;
  Rsh_Fir_array_deopt_stack37[4] = Rsh_Fir_reg_var2_;
  Rsh_Fir_deopt(121, 5, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L82_:;
  // var3 = force? var2
  Rsh_Fir_reg_var3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var2_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r64 = dyn ____(l7, objw5, var3)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_objw5_;
  Rsh_Fir_array_args84[2] = Rsh_Fir_reg_var3_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L15(i28, objw7, r64)
  // L15(i28, objw7, r64)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_objw9_ = Rsh_Fir_reg_objw7_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r64_;
  goto L15_;

D39_:;
  // deopt 134 [obj11]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_obj11_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L86_:;
  // obj12 = force? obj11
  Rsh_Fir_reg_obj12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj11_);
  // checkMissing(obj12)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_obj12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return obj12
  return Rsh_Fir_reg_obj12_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_(SEXP CCP, SEXP RHO) {
  // obj1 = ld obj
  Rsh_Fir_reg_obj1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // obj2 = force? obj1
  Rsh_Fir_reg_obj2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj1_);
  // checkMissing(obj2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_obj2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return obj2
  return Rsh_Fir_reg_obj2_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_1(SEXP CCP, SEXP RHO) {
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return what1
  return Rsh_Fir_reg_what1_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_2(SEXP CCP, SEXP RHO) {
  // obj7 = ld obj
  Rsh_Fir_reg_obj7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // obj8 = force? obj7
  Rsh_Fir_reg_obj8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj7_);
  // checkMissing(obj8)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_obj8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return obj8
  return Rsh_Fir_reg_obj8_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_3(SEXP CCP, SEXP RHO) {
  // objw = ld objw
  Rsh_Fir_reg_objw = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // objw1 = force? objw
  Rsh_Fir_reg_objw1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objw);
  // checkMissing(objw1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_objw1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return objw1
  return Rsh_Fir_reg_objw1_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_4(SEXP CCP, SEXP RHO) {
  // sigw = ld sigw
  Rsh_Fir_reg_sigw = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // sigw1 = force? sigw
  Rsh_Fir_reg_sigw1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sigw);
  // checkMissing(sigw1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sigw1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return sigw1
  return Rsh_Fir_reg_sigw1_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_5(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard6 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r36
  return Rsh_Fir_reg_r36_;

L1_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r40 = dyn c6(sigw5, r38)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sigw5_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // sigw4 = ld sigw
  Rsh_Fir_reg_sigw4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // sigw5 = force? sigw4
  Rsh_Fir_reg_sigw5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sigw4_);
  // checkMissing(sigw5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sigw5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // sym7 = ldf rep
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base7 = ldf rep in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard7 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r35 = dyn base6(<sym sigw>, <lang rep("ANY", nadd)>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L0_;

L4_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r39 = dyn rep1("ANY", <sym nadd>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L1(r39)
  // L1(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L1_;

L5_:;
  // r37 = dyn base7("ANY", <sym nadd>)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L1(r37)
  // L1(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_6(SEXP CCP, SEXP RHO) {
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r43
  return Rsh_Fir_reg_r43_;

L1_:;
  // sig6 = ld sig
  Rsh_Fir_reg_sig6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // sig7 = force? sig6
  Rsh_Fir_reg_sig7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig6_);
  // checkMissing(sig7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sig7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r44 = dyn names1(sig7)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sig7_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L0_;

L2_:;
  // r42 = dyn base8(<sym sig>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_7(SEXP CCP, SEXP RHO) {
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard9 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r51 = dyn c7(pkgw5, r49)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_pkgw5_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r51_;
  goto L0_;

L2_:;
  // pkgw4 = ld pkgw
  Rsh_Fir_reg_pkgw4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pkgw5 = force? pkgw4
  Rsh_Fir_reg_pkgw5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgw4_);
  // checkMissing(pkgw5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_pkgw5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // sym10 = ldf rep
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base10 = ldf rep in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard10 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r46 = dyn base9(<sym pkgw>, <lang rep("methods", nadd)>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;

L4_:;
  // rep2 = ldf rep in base
  Rsh_Fir_reg_rep2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r50 = dyn rep2("methods", <sym nadd>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep2_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L1(r50)
  // L1(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L1_;

L5_:;
  // r48 = dyn base10("methods", <sym nadd>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L1(r48)
  // L1(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_8(SEXP CCP, SEXP RHO) {
  // what2 = ld what
  Rsh_Fir_reg_what2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // what3 = force? what2
  Rsh_Fir_reg_what3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what2_);
  // checkMissing(what3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_what3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return what3
  return Rsh_Fir_reg_what3_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_9(SEXP CCP, SEXP RHO) {
  // obj9 = ld obj
  Rsh_Fir_reg_obj9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // obj10 = force? obj9
  Rsh_Fir_reg_obj10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj9_);
  // checkMissing(obj10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_obj10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return obj10
  return Rsh_Fir_reg_obj10_;
}
SEXP Rsh_Fir_user_promise_inner2108579725_10(SEXP CCP, SEXP RHO) {
  // objw2 = ld objw
  Rsh_Fir_reg_objw2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // objw3 = force? objw2
  Rsh_Fir_reg_objw3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_objw2_);
  // checkMissing(objw3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_objw3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return objw3
  return Rsh_Fir_reg_objw3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
