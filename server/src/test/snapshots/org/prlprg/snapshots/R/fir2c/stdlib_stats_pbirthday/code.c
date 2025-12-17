#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3768568516_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3768568516_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3768568516
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3768568516_, RHO, CCP);
  // st pbirthday = r
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
SEXP Rsh_Fir_user_function_inner3768568516_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3768568516 dynamic dispatch ([n, classes, coincident])

  return Rsh_Fir_user_version_inner3768568516_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3768568516_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3768568516 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3768568516/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_classes;  // classes
  SEXP Rsh_Fir_reg_coincident;  // coincident
  SEXP Rsh_Fir_reg_classes_isMissing;  // classes_isMissing
  SEXP Rsh_Fir_reg_classes_orDefault;  // classes_orDefault
  SEXP Rsh_Fir_reg_coincident_isMissing;  // coincident_isMissing
  SEXP Rsh_Fir_reg_coincident_orDefault;  // coincident_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_coincident1_;  // coincident1
  SEXP Rsh_Fir_reg_coincident2_;  // coincident2
  SEXP Rsh_Fir_reg_classes1_;  // classes1
  SEXP Rsh_Fir_reg_classes2_;  // classes2
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_prod;  // prod
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_k7_;  // k7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_n15_;  // n15
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_n16_;  // n16
  SEXP Rsh_Fir_reg_n17_;  // n17
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_n18_;  // n18
  SEXP Rsh_Fir_reg_n19_;  // n19
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg_k11_;  // k11
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_k12_;  // k12
  SEXP Rsh_Fir_reg_k13_;  // k13
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_k14_;  // k14
  SEXP Rsh_Fir_reg_k15_;  // k15
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_k18_;  // k18
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_LHS;  // LHS
  SEXP Rsh_Fir_reg_LHS1_;  // LHS1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_k19_;  // k19
  SEXP Rsh_Fir_reg_k20_;  // k20
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_k21_;  // k21
  SEXP Rsh_Fir_reg_k22_;  // k22
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_lxx;  // lxx
  SEXP Rsh_Fir_reg_lxx1_;  // lxx1
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_classes = PARAMS[1];
  Rsh_Fir_reg_coincident = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // classes_isMissing = missing.0(classes)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_classes;
  Rsh_Fir_reg_classes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if classes_isMissing then L0(365.0) else L0(classes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_classes_isMissing)) {
  // L0(365.0)
    Rsh_Fir_reg_classes_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(classes)
    Rsh_Fir_reg_classes_orDefault = Rsh_Fir_reg_classes;
    goto L0_;
  }

L0_:;
  // st classes = classes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_classes_orDefault, RHO);
  (void)(Rsh_Fir_reg_classes_orDefault);
  // coincident_isMissing = missing.0(coincident)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_coincident;
  Rsh_Fir_reg_coincident_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if coincident_isMissing then L1(2.0) else L1(coincident)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_coincident_isMissing)) {
  // L1(2.0)
    Rsh_Fir_reg_coincident_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(coincident)
    Rsh_Fir_reg_coincident_orDefault = Rsh_Fir_reg_coincident;
    goto L1_;
  }

L1_:;
  // st coincident = coincident_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_coincident_orDefault, RHO);
  (void)(Rsh_Fir_reg_coincident_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L2_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L25() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // coincident1 = ld coincident
  Rsh_Fir_reg_coincident1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L5_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L7_:;
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L8_:;
  // r29 = `-`(r13, r14)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;

L9_:;
  // r27 = `/`(r24, r25)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r28 = dyn prod(r27)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

L11_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D13()
  // L52()
  goto L52_;

L13_:;
  // n11 = ld n
  Rsh_Fir_reg_n11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

L15_:;
  // r46 = `*`(n15, r41)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n15_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // n18 = ld n
  Rsh_Fir_reg_n18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

L16_:;
  // r57 = `*`(k18, r55)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_k18_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // k19 = ld k
  Rsh_Fir_reg_k19_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L72() else D26()
  // L72()
  goto L72_;

L17_:;
  // r68 = `*`(r65, r66)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // r69 = `-`(r64, r68)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // sym6 = ldf lgamma
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf lgamma in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard6 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L18_:;
  // r77 = `-`(r73, r74)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // st lxx = r77
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // sym7 = ldf expm1
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf expm1 in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard7 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L19_:;
  // r85 = `-`(<missing>, r79)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r85
  return Rsh_Fir_reg_r85_;

L20_:;
  // r83 = `-`(<missing>, r81)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // r84 = expm1(r83)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(173, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L19(r84)
  // L19(r84)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r84_;
  goto L19_;

L21_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r = dyn base(<sym n>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [n1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L23_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn length(n2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L25_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

D2_:;
  // deopt 7 [n3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return n4
  return Rsh_Fir_reg_n4_;

D3_:;
  // deopt 12 [coincident1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_coincident1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // coincident2 = force? coincident1
  Rsh_Fir_reg_coincident2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coincident1_);
  // checkMissing(coincident2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_coincident2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // st k = coincident2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_coincident2_, RHO);
  (void)(Rsh_Fir_reg_coincident2_);
  // classes1 = ld classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 15 [classes1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_classes1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // classes2 = force? classes1
  Rsh_Fir_reg_classes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes1_);
  // checkMissing(classes2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_classes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // st c = classes2
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_classes2_, RHO);
  (void)(Rsh_Fir_reg_classes2_);
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D5_:;
  // deopt 18 [k]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r6 = `<`(k1, 2.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c1 then L32() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L32()
    goto L32_;
  } else {
  // L5()
    goto L5_;
  }

L32_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 14);

D6_:;
  // deopt 27 [k2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // checkMissing(k3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_k3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r9 = `==`(k3, 2.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_k3_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c2 then L36() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L36()
    goto L36_;
  } else {
  // L7()
    goto L7_;
  }

L36_:;
  // sym1 = ldf prod
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf prod in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // c3 = ld c
  Rsh_Fir_reg_c3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L38_:;
  // r12 = dyn base1(<lang `/`(`(`(`:`(c, `(`(`+`(`-`(c, n), 1.0)))), rep(c, n))>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L8(1.0, r12)
  // L8(1.0, r12)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  goto L8_;

D7_:;
  // deopt 34 [1.0, c3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L39_:;
  // c4 = force? c3
  Rsh_Fir_reg_c4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c3_);
  // checkMissing(c4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c5 = ld c
  Rsh_Fir_reg_c5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 35 [1.0, c4, c5]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_c5_;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L40_:;
  // c6 = force? c5
  Rsh_Fir_reg_c6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c5_);
  // checkMissing(c6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D9()
  // L41()
  goto L41_;

D9_:;
  // deopt 36 [1.0, c4, c6, n5]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(36, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r15 = `-`(c6, n6)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // r16 = `+`(r15, 1.0)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // r17 = `:`(c4, r16)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // sym2 = ldf rep
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf rep in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard2 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r26 = dyn rep(<sym c>, <sym n>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L9(1.0, r17, r26)
  // L9(1.0, r17, r26)
  Rsh_Fir_reg_r23_ = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L9_;

L43_:;
  // r22 = dyn base2(<sym c>, <sym n>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L9(1.0, r17, r22)
  // L9(1.0, r17, r22)
  Rsh_Fir_reg_r23_ = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r22_;
  goto L9_;

D10_:;
  // deopt 46 [r23, r28]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L8(r23, r28)
  // L8(r23, r28)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r28_;
  goto L8_;

D11_:;
  // deopt 51 [k4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_k4_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L47_:;
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // checkMissing(k5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_k5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

D12_:;
  // deopt 52 [k5, n7]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_k5_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r32 = `>`(k5, n8)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_k5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_n8_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c7 then L49() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L49()
    goto L49_;
  } else {
  // L11()
    goto L11_;
  }

L49_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 0.0
  return Rsh_const(CCP, 17);

D13_:;
  // deopt 60 [n9]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c8 = ld c
  Rsh_Fir_reg_c8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

D14_:;
  // deopt 61 [n10, c8]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // c9 = force? c8
  Rsh_Fir_reg_c9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c8_);
  // checkMissing(c9)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_c9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // k6 = ld k
  Rsh_Fir_reg_k6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

D15_:;
  // deopt 62 [n10, c9, k6]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_k6_;
  Rsh_Fir_deopt(62, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // k7 = force? k6
  Rsh_Fir_reg_k7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k6_);
  // checkMissing(k7)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_k7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r35 = `-`(k7, 1.0)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_k7_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // r36 = `*`(c9, r35)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // r37 = `>`(n10, r36)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c10 then L55() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L55()
    goto L55_;
  } else {
  // L13()
    goto L13_;
  }

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 14);

D16_:;
  // deopt 73 [n11]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_n11_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L58_:;
  // n12 = force? n11
  Rsh_Fir_reg_n12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n11_);
  // checkMissing(n12)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_n12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // sym3 = ldf exp
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf exp in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L59_:;
  // n16 = ld n
  Rsh_Fir_reg_n16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

L60_:;
  // r40 = dyn base3(<lang `/`(`-`(n), `(`(`*`(c, k)))>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L15(n12, r40)
  // L15(n12, r40)
  Rsh_Fir_reg_n15_ = Rsh_Fir_reg_n12_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L15_;

D17_:;
  // deopt 75 [n12, n16]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_n16_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L61_:;
  // n17 = force? n16
  Rsh_Fir_reg_n17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n16_);
  // checkMissing(n17)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_n17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r42 = `-`(<missing>, n17)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_n17_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // c11 = ld c
  Rsh_Fir_reg_c11_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

D18_:;
  // deopt 77 [n12, r42, c11]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_c11_;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L62_:;
  // c12 = force? c11
  Rsh_Fir_reg_c12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c11_);
  // checkMissing(c12)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // k8 = ld k
  Rsh_Fir_reg_k8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L63() else D19()
  // L63()
  goto L63_;

D19_:;
  // deopt 78 [n12, r42, c12, k8]
  SEXP Rsh_Fir_array_deopt_stack19[4];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_k8_;
  Rsh_Fir_deopt(78, 4, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L63_:;
  // k9 = force? k8
  Rsh_Fir_reg_k9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k8_);
  // checkMissing(k9)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_k9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r43 = `*`(c12, k9)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_k9_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // r44 = `/`(r42, r43)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // r45 = exp(r44)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(172, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L15(n12, r45)
  // L15(n12, r45)
  Rsh_Fir_reg_n15_ = Rsh_Fir_reg_n12_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r45_;
  goto L15_;

D20_:;
  // deopt 84 [r46, 1.0, n18]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_n18_;
  Rsh_Fir_deopt(84, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L64_:;
  // n19 = force? n18
  Rsh_Fir_reg_n19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n18_);
  // checkMissing(n19)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_n19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c13 = ld c
  Rsh_Fir_reg_c13_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

D21_:;
  // deopt 85 [r46, 1.0, n19, c13]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_n19_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_c13_;
  Rsh_Fir_deopt(85, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L65_:;
  // c14 = force? c13
  Rsh_Fir_reg_c14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c13_);
  // checkMissing(c14)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_c14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // k10 = ld k
  Rsh_Fir_reg_k10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L66() else D22()
  // L66()
  goto L66_;

D22_:;
  // deopt 86 [r46, 1.0, n19, c14, k10]
  SEXP Rsh_Fir_array_deopt_stack22[5];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_n19_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack22[4] = Rsh_Fir_reg_k10_;
  Rsh_Fir_deopt(86, 5, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L66_:;
  // k11 = force? k10
  Rsh_Fir_reg_k11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k10_);
  // checkMissing(k11)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_k11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r47 = `+`(k11, 1.0)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_k11_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // r48 = `*`(c14, r47)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // r49 = `/`(n19, r48)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_n19_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // r50 = `-`(1.0, r49)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // k12 = ld k
  Rsh_Fir_reg_k12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

D23_:;
  // deopt 93 [r46, r50, 1.0, k12]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_k12_;
  Rsh_Fir_deopt(93, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L67_:;
  // k13 = force? k12
  Rsh_Fir_reg_k13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k12_);
  // checkMissing(k13)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_k13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r51 = `/`(1.0, k13)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_k13_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // r52 = `^`(r50, r51)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // r53 = `/`(r46, r52)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // st LHS = r53
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // k14 = ld k
  Rsh_Fir_reg_k14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L68() else D24()
  // L68()
  goto L68_;

D24_:;
  // deopt 99 [k14]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_k14_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L68_:;
  // k15 = force? k14
  Rsh_Fir_reg_k15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k14_);
  // checkMissing(k15)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_k15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // sym4 = ldf log
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base4 = ldf log in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard4 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L69_:;
  // LHS = ld LHS
  Rsh_Fir_reg_LHS = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L71() else D25()
  // L71()
  goto L71_;

L70_:;
  // r54 = dyn base4(<sym LHS>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L16(k15, r54)
  // L16(k15, r54)
  Rsh_Fir_reg_k18_ = Rsh_Fir_reg_k15_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L16_;

D25_:;
  // deopt 101 [k15, LHS]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_k15_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_LHS;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L71_:;
  // LHS1 = force? LHS
  Rsh_Fir_reg_LHS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LHS);
  // checkMissing(LHS1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_LHS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r56 = log(LHS1, 2.718281828459045)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_LHS1_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L16(k15, r56)
  // L16(k15, r56)
  Rsh_Fir_reg_k18_ = Rsh_Fir_reg_k15_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L16_;

D26_:;
  // deopt 104 [r57, k19]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_k19_;
  Rsh_Fir_deopt(104, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L72_:;
  // k20 = force? k19
  Rsh_Fir_reg_k20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k19_);
  // checkMissing(k20)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_k20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r58 = `-`(k20, 1.0)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_k20_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // sym5 = ldf log
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf log in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard5 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // c15 = ld c
  Rsh_Fir_reg_c15_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L75() else D27()
  // L75()
  goto L75_;

L74_:;
  // r63 = dyn base5(<sym c>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L17(r57, r58, r63)
  // L17(r57, r58, r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r63_;
  goto L17_;

D27_:;
  // deopt 108 [r57, r58, c15]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_c15_;
  Rsh_Fir_deopt(108, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L75_:;
  // c16 = force? c15
  Rsh_Fir_reg_c16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c15_);
  // checkMissing(c16)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_c16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r67 = log(c16, 2.718281828459045)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L17(r57, r58, r67)
  // L17(r57, r58, r67)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L17_;

L76_:;
  // k21 = ld k
  Rsh_Fir_reg_k21_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L78() else D28()
  // L78()
  goto L78_;

L77_:;
  // r72 = dyn base6(<lang `+`(k, 1.0)>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L18(r69, r72)
  // L18(r69, r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
  goto L18_;

D28_:;
  // deopt 113 [r69, k21]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_k21_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L78_:;
  // k22 = force? k21
  Rsh_Fir_reg_k22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k21_);
  // checkMissing(k22)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_k22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // r75 = `+`(k22, 1.0)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_k22_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // r76 = lgamma(r75)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(187, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L18(r69, r76)
  // L18(r69, r76)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r76_;
  goto L18_;

L79_:;
  // sym8 = ldf exp
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base8 = ldf exp in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard8 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L80_:;
  // r78 = dyn base7(<lang `-`(exp(lxx))>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L19(r78)
  // L19(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L19_;

L81_:;
  // lxx = ld lxx
  Rsh_Fir_reg_lxx = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L83() else D29()
  // L83()
  goto L83_;

L82_:;
  // r80 = dyn base8(<sym lxx>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L20(r80)
  // L20(r80)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L20_;

D29_:;
  // deopt 122 [lxx]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_lxx;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L83_:;
  // lxx1 = force? lxx
  Rsh_Fir_reg_lxx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lxx);
  // checkMissing(lxx1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_lxx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r82 = exp(lxx1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_lxx1_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(172, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L20(r82)
  // L20(r82)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r82_;
  goto L20_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
