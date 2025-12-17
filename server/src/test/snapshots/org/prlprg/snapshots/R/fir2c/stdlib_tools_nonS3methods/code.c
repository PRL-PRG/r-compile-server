#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner799799234_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner799799234_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner799799234_(SEXP CCP, SEXP RHO);
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
  // r = clos inner799799234
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799799234_, RHO, CCP);
  // st nonS3methods = r
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
SEXP Rsh_Fir_user_function_inner799799234_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner799799234 dynamic dispatch ([package])

  return Rsh_Fir_user_version_inner799799234_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner799799234_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner799799234 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner799799234/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg_stopList;  // stopList
  SEXP Rsh_Fir_reg_stopList1_;  // stopList1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_stopList2_;  // stopList2
  SEXP Rsh_Fir_reg_stopList3_;  // stopList3
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stopList5_;  // stopList5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_package3_;  // package3
  SEXP Rsh_Fir_reg_package4_;  // package4
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_thisPkg;  // thisPkg
  SEXP Rsh_Fir_reg_thisPkg1_;  // thisPkg1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_thisPkg2_;  // thisPkg2
  SEXP Rsh_Fir_reg_thisPkg3_;  // thisPkg3

  // Bind parameters
  Rsh_Fir_reg_package = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st package = package
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_package, RHO);
  (void)(Rsh_Fir_reg_package);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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

L0_:;
  // st stopList = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym22 = ldf `is.null`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base22 = ldf `is.null` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard22 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L1_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L2_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L3_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L4_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard5 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L5_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard6 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L6_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard7 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L7_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard8 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L8_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard9 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L9_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard10 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L10_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard11 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L11_:;
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard12 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L12_:;
  // sym13 = ldf c
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base13 = ldf c in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard13 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L13_:;
  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard14 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L14_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard15 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L15_:;
  // sym16 = ldf c
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base16 = ldf c in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard16 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L16_:;
  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard17 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L17_:;
  // sym18 = ldf c
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base18 = ldf c in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard18 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L18_:;
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard19 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L19_:;
  // sym20 = ldf c
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base20 = ldf c in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard20 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L20_:;
  // sym21 = ldf c
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base21 = ldf c in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard21 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L21_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r65 = dyn list(r3, "sim.MLPnet", "sign.test", "rep.int", "lda.loofun", "plot.wedding.cake", "all.2fis.clear.catlg", r6, r9, "log.hist", r12, "sigma.est", r15, r18, "merge.list", r21, r24, "exp.gibbs", r27, "sigma.hat", "sigma.test", "text.SAX", "sort.index", "sigma.hat", "chol.new", "exp.tilt", "scatterplot.matrix", "t.fun", "ggobi.som", "as.mcmc.list", "all.combn", "update.views", "plot.1D", "all.effects", "sigma.laurent", "sign.boot", r30, r33, "diseq.ci", "scale.poly", "boxplot.stats", r36, "all.R2", "all.regs", "qr.rtr.inv", "xyplot.list", r39, r42, "t.test", r45, r48, r51, r54, "update.packages2", "all.vars.character", "scale.poly", "cbind.fill", "cumsum.test", "cumsum.test", "print.graph", "lengths.psp", "sort.list", "sort.list", r57, "sigma.hat", r60, "chol.tensor", r63, "plot.dwt.multiple")
  SEXP Rsh_Fir_array_args22[69];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args22[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args22[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args22[6] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args22[7] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args22[8] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args22[9] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args22[10] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args22[11] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args22[12] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args22[13] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args22[14] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args22[15] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args22[16] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args22[17] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args22[18] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args22[19] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args22[20] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args22[21] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args22[22] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args22[23] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args22[24] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args22[25] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args22[26] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args22[27] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args22[28] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args22[29] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args22[30] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args22[31] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args22[32] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args22[33] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args22[34] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args22[35] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args22[36] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args22[37] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args22[38] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args22[39] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args22[40] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args22[41] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args22[42] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args22[43] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args22[44] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args22[45] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args22[46] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args22[47] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args22[48] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args22[49] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args22[50] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args22[51] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args22[52] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args22[53] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args22[54] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args22[55] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args22[56] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args22[57] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args22[58] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args22[59] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args22[60] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args22[61] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args22[62] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args22[63] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args22[64] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args22[65] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args22[66] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args22[67] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args22[68] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names[69];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_array_arg_names[9] = R_MissingArg;
  Rsh_Fir_array_arg_names[10] = R_MissingArg;
  Rsh_Fir_array_arg_names[11] = R_MissingArg;
  Rsh_Fir_array_arg_names[12] = R_MissingArg;
  Rsh_Fir_array_arg_names[13] = R_MissingArg;
  Rsh_Fir_array_arg_names[14] = R_MissingArg;
  Rsh_Fir_array_arg_names[15] = R_MissingArg;
  Rsh_Fir_array_arg_names[16] = R_MissingArg;
  Rsh_Fir_array_arg_names[17] = R_MissingArg;
  Rsh_Fir_array_arg_names[18] = R_MissingArg;
  Rsh_Fir_array_arg_names[19] = R_MissingArg;
  Rsh_Fir_array_arg_names[20] = R_MissingArg;
  Rsh_Fir_array_arg_names[21] = R_MissingArg;
  Rsh_Fir_array_arg_names[22] = R_MissingArg;
  Rsh_Fir_array_arg_names[23] = R_MissingArg;
  Rsh_Fir_array_arg_names[24] = R_MissingArg;
  Rsh_Fir_array_arg_names[25] = R_MissingArg;
  Rsh_Fir_array_arg_names[26] = R_MissingArg;
  Rsh_Fir_array_arg_names[27] = R_MissingArg;
  Rsh_Fir_array_arg_names[28] = R_MissingArg;
  Rsh_Fir_array_arg_names[29] = R_MissingArg;
  Rsh_Fir_array_arg_names[30] = R_MissingArg;
  Rsh_Fir_array_arg_names[31] = R_MissingArg;
  Rsh_Fir_array_arg_names[32] = R_MissingArg;
  Rsh_Fir_array_arg_names[33] = R_MissingArg;
  Rsh_Fir_array_arg_names[34] = R_MissingArg;
  Rsh_Fir_array_arg_names[35] = R_MissingArg;
  Rsh_Fir_array_arg_names[36] = R_MissingArg;
  Rsh_Fir_array_arg_names[37] = R_MissingArg;
  Rsh_Fir_array_arg_names[38] = R_MissingArg;
  Rsh_Fir_array_arg_names[39] = R_MissingArg;
  Rsh_Fir_array_arg_names[40] = R_MissingArg;
  Rsh_Fir_array_arg_names[41] = R_MissingArg;
  Rsh_Fir_array_arg_names[42] = R_MissingArg;
  Rsh_Fir_array_arg_names[43] = R_MissingArg;
  Rsh_Fir_array_arg_names[44] = R_MissingArg;
  Rsh_Fir_array_arg_names[45] = R_MissingArg;
  Rsh_Fir_array_arg_names[46] = R_MissingArg;
  Rsh_Fir_array_arg_names[47] = R_MissingArg;
  Rsh_Fir_array_arg_names[48] = R_MissingArg;
  Rsh_Fir_array_arg_names[49] = R_MissingArg;
  Rsh_Fir_array_arg_names[50] = R_MissingArg;
  Rsh_Fir_array_arg_names[51] = R_MissingArg;
  Rsh_Fir_array_arg_names[52] = R_MissingArg;
  Rsh_Fir_array_arg_names[53] = R_MissingArg;
  Rsh_Fir_array_arg_names[54] = R_MissingArg;
  Rsh_Fir_array_arg_names[55] = R_MissingArg;
  Rsh_Fir_array_arg_names[56] = R_MissingArg;
  Rsh_Fir_array_arg_names[57] = R_MissingArg;
  Rsh_Fir_array_arg_names[58] = R_MissingArg;
  Rsh_Fir_array_arg_names[59] = R_MissingArg;
  Rsh_Fir_array_arg_names[60] = R_MissingArg;
  Rsh_Fir_array_arg_names[61] = R_MissingArg;
  Rsh_Fir_array_arg_names[62] = R_MissingArg;
  Rsh_Fir_array_arg_names[63] = R_MissingArg;
  Rsh_Fir_array_arg_names[64] = R_MissingArg;
  Rsh_Fir_array_arg_names[65] = R_MissingArg;
  Rsh_Fir_array_arg_names[66] = R_MissingArg;
  Rsh_Fir_array_arg_names[67] = R_MissingArg;
  Rsh_Fir_array_arg_names[68] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 69, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L93() else D21()
  // L93()
  goto L93_;

L22_:;
  // c22 = `as.logical`(r67)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c22 then L97() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L97()
    goto L97_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // stopList2 = ld stopList
  Rsh_Fir_reg_stopList2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L102() else D25()
  // L102()
  goto L102_;

L25_:;
  // st thisPkg = dx1
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym23 = ldf length
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base23 = ldf length in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard23 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L26_:;
  // r76 = `!`(r74)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c24 then L111() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L111()
    goto L111_;
  } else {
  // L27()
    goto L27_;
  }

L27_:;
  // thisPkg2 = ld thisPkg
  Rsh_Fir_reg_thisPkg2_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L115() else D31()
  // L115()
  goto L115_;

L28_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L29_:;
  // r = dyn base[base, AMORE, BSDA, BiocGenerics, ChemometricsWithR, ElectoGraph, FrF2, GLDEX, Hmisc, HyperbolicDist, MASS, LinearizedSVR, Matrix, PerformanceAnalytics, RCurl, RNetCDF, Rmpfr, SMPracticals, SparseM, TANOVA, TeachingDemos, XML, ape, arm, assist, boot, car, calibrator, clusterfly, coda, crossdes, ctv, deSolve, effects, elliptic, equivalence, fields, gbm, genetics, gpclib, grDevices, graphics, `ic.infer`, `hier.part`, lasso2, latticeExtra, locfit, moments, mosaic, mratios, ncdf, plyr, quadprog, reposTools, reshape, rgeos, rowr, sac, sfsmisc, sm, spatstat, splusTimeDate, splusTimeSeries, stats, stremo, supclust, tensorA, utils, wavelets](<lang c("all.equal", "all.names", "all.vars", "as.data.frame.vector", "format.info", "format.pval", "max.col", "qr.Q", "qr.R", "qr.X", "qr.coef", "qr.fitted", "qr.qty", "qr.qy", "qr.resid", "qr.solve", "rep.int", "seq.int", "sort.int", "sort.list")>, "sim.MLPnet", "sign.test", "rep.int", "lda.loofun", "plot.wedding.cake", "all.2fis.clear.catlg", <lang c("hist.su", "pretty.su")>, <lang c("abs.error.pred", "all.digits", "all.is.numeric", "format.df", "format.pval", "t.test.cluster")>, "log.hist", <lang c("frequency.polygon", "gamma.dispersion", "gamma.shape", "hist.FD", "hist.scott")>, "sigma.est", <lang c("qr.Q", "qr.R", "qr.coef", "qr.fitted", "qr.qty", "qr.qy", "qr.resid")>, <lang c("mean.LCL", "mean.UCL", "mean.geometric", "mean.stderr")>, "merge.list", <lang c("close.nc", "dim.def.nc", "dim.inq.nc", "dim.rename.nc", "open.nc", "print.nc")>, <lang c("mpfr.is.0", "mpfr.is.integer")>, "exp.gibbs", <lang c("as.matrix.csc", "as.matrix.csr", "as.matrix.ssc", "as.matrix.ssr", "as.matrix.coo", "is.matrix.csc", "is.matrix.csr", "is.matrix.ssc", "is.matrix.ssr", "is.matrix.coo")>, "sigma.hat", "sigma.test", "text.SAX", "sort.index", "sigma.hat", "chol.new", "exp.tilt", "scatterplot.matrix", "t.fun", "ggobi.som", "as.mcmc.list", "all.combn", "update.views", "plot.1D", "all.effects", "sigma.laurent", "sign.boot", <lang c("qr.q2ty", "qr.yq2")>, <lang c("pretty.gbm.tree", "quantile.rug")>, "diseq.ci", "scale.poly", "boxplot.stats", <lang c("close.screen", "plot.design", "plot.new", "plot.window", "plot.xy", "split.screen")>, "all.R2", "all.regs", "qr.rtr.inv", "xyplot.list", <lang c("density.lf", "plot.eval")>, <lang c("all.cumulants", "all.moments")>, "t.test", <lang c("t.test.ration", "t.test.ratio.default", "t.test.ratio.formula")>, <lang c("open.ncdf", "close.ncdf", "dim.create.ncdf", "dim.def.ncdf", "dim.inq.ncdf", "dim.same.ncdf")>, <lang c("rbind.fill", "rbind.fill.matrix")>, <lang c("solve.QP", "solve.QP.compact")>, "update.packages2", "all.vars.character", "scale.poly", "cbind.fill", "cumsum.test", "cumsum.test", "print.graph", "lengths.psp", "sort.list", "sort.list", <lang c("anova.lmlist", "expand.model.frame", "fitted.values", "influence.measures", "lag.plot", "qr.influence", "t.test", "plot.spec.phase", "plot.spec.coherency")>, "sigma.hat", <lang c("sign.change", "sign.flip")>, "chol.tensor", <lang c("close.socket", "flush.console", "update.packages")>, "plot.dwt.multiple")
  SEXP Rsh_Fir_array_args28[69];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args28[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args28[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args28[6] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args28[7] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args28[8] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args28[9] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args28[10] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args28[11] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args28[12] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args28[13] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args28[14] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args28[15] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args28[16] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args28[17] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args28[18] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args28[19] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args28[20] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args28[21] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args28[22] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args28[23] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args28[24] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args28[25] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args28[26] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args28[27] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[28] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args28[29] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args28[30] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args28[31] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args28[32] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args28[33] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args28[34] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[35] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args28[36] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args28[37] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args28[38] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args28[39] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args28[40] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args28[41] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args28[42] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args28[43] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args28[44] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args28[45] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args28[46] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args28[47] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args28[48] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args28[49] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args28[50] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args28[51] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args28[52] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args28[53] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args28[54] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args28[55] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args28[56] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args28[57] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args28[58] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args28[59] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args28[60] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args28[61] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args28[62] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args28[63] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args28[64] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args28[65] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args28[66] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args28[67] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args28[68] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names1[69];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 72);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 73);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 74);
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 75);
  Rsh_Fir_array_arg_names1[4] = Rsh_const(CCP, 76);
  Rsh_Fir_array_arg_names1[5] = Rsh_const(CCP, 77);
  Rsh_Fir_array_arg_names1[6] = Rsh_const(CCP, 78);
  Rsh_Fir_array_arg_names1[7] = Rsh_const(CCP, 79);
  Rsh_Fir_array_arg_names1[8] = Rsh_const(CCP, 80);
  Rsh_Fir_array_arg_names1[9] = Rsh_const(CCP, 81);
  Rsh_Fir_array_arg_names1[10] = Rsh_const(CCP, 82);
  Rsh_Fir_array_arg_names1[11] = Rsh_const(CCP, 83);
  Rsh_Fir_array_arg_names1[12] = Rsh_const(CCP, 84);
  Rsh_Fir_array_arg_names1[13] = Rsh_const(CCP, 85);
  Rsh_Fir_array_arg_names1[14] = Rsh_const(CCP, 86);
  Rsh_Fir_array_arg_names1[15] = Rsh_const(CCP, 87);
  Rsh_Fir_array_arg_names1[16] = Rsh_const(CCP, 88);
  Rsh_Fir_array_arg_names1[17] = Rsh_const(CCP, 89);
  Rsh_Fir_array_arg_names1[18] = Rsh_const(CCP, 90);
  Rsh_Fir_array_arg_names1[19] = Rsh_const(CCP, 91);
  Rsh_Fir_array_arg_names1[20] = Rsh_const(CCP, 92);
  Rsh_Fir_array_arg_names1[21] = Rsh_const(CCP, 93);
  Rsh_Fir_array_arg_names1[22] = Rsh_const(CCP, 94);
  Rsh_Fir_array_arg_names1[23] = Rsh_const(CCP, 95);
  Rsh_Fir_array_arg_names1[24] = Rsh_const(CCP, 96);
  Rsh_Fir_array_arg_names1[25] = Rsh_const(CCP, 97);
  Rsh_Fir_array_arg_names1[26] = Rsh_const(CCP, 98);
  Rsh_Fir_array_arg_names1[27] = Rsh_const(CCP, 99);
  Rsh_Fir_array_arg_names1[28] = Rsh_const(CCP, 100);
  Rsh_Fir_array_arg_names1[29] = Rsh_const(CCP, 101);
  Rsh_Fir_array_arg_names1[30] = Rsh_const(CCP, 102);
  Rsh_Fir_array_arg_names1[31] = Rsh_const(CCP, 103);
  Rsh_Fir_array_arg_names1[32] = Rsh_const(CCP, 104);
  Rsh_Fir_array_arg_names1[33] = Rsh_const(CCP, 105);
  Rsh_Fir_array_arg_names1[34] = Rsh_const(CCP, 106);
  Rsh_Fir_array_arg_names1[35] = Rsh_const(CCP, 107);
  Rsh_Fir_array_arg_names1[36] = Rsh_const(CCP, 108);
  Rsh_Fir_array_arg_names1[37] = Rsh_const(CCP, 109);
  Rsh_Fir_array_arg_names1[38] = Rsh_const(CCP, 110);
  Rsh_Fir_array_arg_names1[39] = Rsh_const(CCP, 111);
  Rsh_Fir_array_arg_names1[40] = Rsh_const(CCP, 112);
  Rsh_Fir_array_arg_names1[41] = Rsh_const(CCP, 113);
  Rsh_Fir_array_arg_names1[42] = Rsh_const(CCP, 114);
  Rsh_Fir_array_arg_names1[43] = Rsh_const(CCP, 115);
  Rsh_Fir_array_arg_names1[44] = Rsh_const(CCP, 116);
  Rsh_Fir_array_arg_names1[45] = Rsh_const(CCP, 117);
  Rsh_Fir_array_arg_names1[46] = Rsh_const(CCP, 118);
  Rsh_Fir_array_arg_names1[47] = Rsh_const(CCP, 119);
  Rsh_Fir_array_arg_names1[48] = Rsh_const(CCP, 120);
  Rsh_Fir_array_arg_names1[49] = Rsh_const(CCP, 121);
  Rsh_Fir_array_arg_names1[50] = Rsh_const(CCP, 122);
  Rsh_Fir_array_arg_names1[51] = Rsh_const(CCP, 123);
  Rsh_Fir_array_arg_names1[52] = Rsh_const(CCP, 124);
  Rsh_Fir_array_arg_names1[53] = Rsh_const(CCP, 125);
  Rsh_Fir_array_arg_names1[54] = Rsh_const(CCP, 126);
  Rsh_Fir_array_arg_names1[55] = Rsh_const(CCP, 127);
  Rsh_Fir_array_arg_names1[56] = Rsh_const(CCP, 128);
  Rsh_Fir_array_arg_names1[57] = Rsh_const(CCP, 129);
  Rsh_Fir_array_arg_names1[58] = Rsh_const(CCP, 130);
  Rsh_Fir_array_arg_names1[59] = Rsh_const(CCP, 131);
  Rsh_Fir_array_arg_names1[60] = Rsh_const(CCP, 132);
  Rsh_Fir_array_arg_names1[61] = Rsh_const(CCP, 133);
  Rsh_Fir_array_arg_names1[62] = Rsh_const(CCP, 134);
  Rsh_Fir_array_arg_names1[63] = Rsh_const(CCP, 135);
  Rsh_Fir_array_arg_names1[64] = Rsh_const(CCP, 136);
  Rsh_Fir_array_arg_names1[65] = Rsh_const(CCP, 137);
  Rsh_Fir_array_arg_names1[66] = Rsh_const(CCP, 138);
  Rsh_Fir_array_arg_names1[67] = Rsh_const(CCP, 139);
  Rsh_Fir_array_arg_names1[68] = Rsh_const(CCP, 140);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 69, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L30_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r4 = dyn c("all.equal", "all.names", "all.vars", "as.data.frame.vector", "format.info", "format.pval", "max.col", "qr.Q", "qr.R", "qr.X", "qr.coef", "qr.fitted", "qr.qty", "qr.qy", "qr.resid", "qr.solve", "rep.int", "seq.int", "sort.int", "sort.list")
  SEXP Rsh_Fir_array_args29[20];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 141);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 142);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 143);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 144);
  Rsh_Fir_array_args29[4] = Rsh_const(CCP, 145);
  Rsh_Fir_array_args29[5] = Rsh_const(CCP, 146);
  Rsh_Fir_array_args29[6] = Rsh_const(CCP, 147);
  Rsh_Fir_array_args29[7] = Rsh_const(CCP, 148);
  Rsh_Fir_array_args29[8] = Rsh_const(CCP, 149);
  Rsh_Fir_array_args29[9] = Rsh_const(CCP, 150);
  Rsh_Fir_array_args29[10] = Rsh_const(CCP, 151);
  Rsh_Fir_array_args29[11] = Rsh_const(CCP, 152);
  Rsh_Fir_array_args29[12] = Rsh_const(CCP, 153);
  Rsh_Fir_array_args29[13] = Rsh_const(CCP, 154);
  Rsh_Fir_array_args29[14] = Rsh_const(CCP, 155);
  Rsh_Fir_array_args29[15] = Rsh_const(CCP, 156);
  Rsh_Fir_array_args29[16] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args29[17] = Rsh_const(CCP, 157);
  Rsh_Fir_array_args29[18] = Rsh_const(CCP, 158);
  Rsh_Fir_array_args29[19] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names2[20];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_array_arg_names2[9] = R_MissingArg;
  Rsh_Fir_array_arg_names2[10] = R_MissingArg;
  Rsh_Fir_array_arg_names2[11] = R_MissingArg;
  Rsh_Fir_array_arg_names2[12] = R_MissingArg;
  Rsh_Fir_array_arg_names2[13] = R_MissingArg;
  Rsh_Fir_array_arg_names2[14] = R_MissingArg;
  Rsh_Fir_array_arg_names2[15] = R_MissingArg;
  Rsh_Fir_array_arg_names2[16] = R_MissingArg;
  Rsh_Fir_array_arg_names2[17] = R_MissingArg;
  Rsh_Fir_array_arg_names2[18] = R_MissingArg;
  Rsh_Fir_array_arg_names2[19] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 20, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

L31_:;
  // r2 = dyn base1("all.equal", "all.names", "all.vars", "as.data.frame.vector", "format.info", "format.pval", "max.col", "qr.Q", "qr.R", "qr.X", "qr.coef", "qr.fitted", "qr.qty", "qr.qy", "qr.resid", "qr.solve", "rep.int", "seq.int", "sort.int", "sort.list")
  SEXP Rsh_Fir_array_args30[20];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 141);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 142);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 143);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 144);
  Rsh_Fir_array_args30[4] = Rsh_const(CCP, 145);
  Rsh_Fir_array_args30[5] = Rsh_const(CCP, 146);
  Rsh_Fir_array_args30[6] = Rsh_const(CCP, 147);
  Rsh_Fir_array_args30[7] = Rsh_const(CCP, 148);
  Rsh_Fir_array_args30[8] = Rsh_const(CCP, 149);
  Rsh_Fir_array_args30[9] = Rsh_const(CCP, 150);
  Rsh_Fir_array_args30[10] = Rsh_const(CCP, 151);
  Rsh_Fir_array_args30[11] = Rsh_const(CCP, 152);
  Rsh_Fir_array_args30[12] = Rsh_const(CCP, 153);
  Rsh_Fir_array_args30[13] = Rsh_const(CCP, 154);
  Rsh_Fir_array_args30[14] = Rsh_const(CCP, 155);
  Rsh_Fir_array_args30[15] = Rsh_const(CCP, 156);
  Rsh_Fir_array_args30[16] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args30[17] = Rsh_const(CCP, 157);
  Rsh_Fir_array_args30[18] = Rsh_const(CCP, 158);
  Rsh_Fir_array_args30[19] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names3[20];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = R_MissingArg;
  Rsh_Fir_array_arg_names3[8] = R_MissingArg;
  Rsh_Fir_array_arg_names3[9] = R_MissingArg;
  Rsh_Fir_array_arg_names3[10] = R_MissingArg;
  Rsh_Fir_array_arg_names3[11] = R_MissingArg;
  Rsh_Fir_array_arg_names3[12] = R_MissingArg;
  Rsh_Fir_array_arg_names3[13] = R_MissingArg;
  Rsh_Fir_array_arg_names3[14] = R_MissingArg;
  Rsh_Fir_array_arg_names3[15] = R_MissingArg;
  Rsh_Fir_array_arg_names3[16] = R_MissingArg;
  Rsh_Fir_array_arg_names3[17] = R_MissingArg;
  Rsh_Fir_array_arg_names3[18] = R_MissingArg;
  Rsh_Fir_array_arg_names3[19] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 20, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 25 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L33_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn c1("hist.su", "pretty.su")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 159);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 160);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L35() else D1()
  // L35()
  goto L35_;

L34_:;
  // r5 = dyn base2("hist.su", "pretty.su")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 159);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 160);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D1_:;
  // deopt 44 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

L36_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r10 = dyn c2("abs.error.pred", "all.digits", "all.is.numeric", "format.df", "format.pval", "t.test.cluster")
  SEXP Rsh_Fir_array_args33[6];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 161);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 162);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 163);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 164);
  Rsh_Fir_array_args33[4] = Rsh_const(CCP, 146);
  Rsh_Fir_array_args33[5] = Rsh_const(CCP, 165);
  SEXP Rsh_Fir_array_arg_names6[6];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 6, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L38() else D2()
  // L38()
  goto L38_;

L37_:;
  // r8 = dyn base3("abs.error.pred", "all.digits", "all.is.numeric", "format.df", "format.pval", "t.test.cluster")
  SEXP Rsh_Fir_array_args34[6];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 161);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 162);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 163);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 164);
  Rsh_Fir_array_args34[4] = Rsh_const(CCP, 146);
  Rsh_Fir_array_args34[5] = Rsh_const(CCP, 165);
  SEXP Rsh_Fir_array_arg_names7[6];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_array_arg_names7[5] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 6, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D2_:;
  // deopt 55 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L3_;

L39_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r13 = dyn c3("frequency.polygon", "gamma.dispersion", "gamma.shape", "hist.FD", "hist.scott")
  SEXP Rsh_Fir_array_args35[5];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 166);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 167);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 168);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 169);
  Rsh_Fir_array_args35[4] = Rsh_const(CCP, 170);
  SEXP Rsh_Fir_array_arg_names8[5];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_array_arg_names8[4] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 5, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L41() else D3()
  // L41()
  goto L41_;

L40_:;
  // r11 = dyn base4("frequency.polygon", "gamma.dispersion", "gamma.shape", "hist.FD", "hist.scott")
  SEXP Rsh_Fir_array_args36[5];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 166);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 167);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 168);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 169);
  Rsh_Fir_array_args36[4] = Rsh_const(CCP, 170);
  SEXP Rsh_Fir_array_arg_names9[5];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 5, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L4_;

D3_:;
  // deopt 67 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L4_;

L42_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r16 = dyn c4("qr.Q", "qr.R", "qr.coef", "qr.fitted", "qr.qty", "qr.qy", "qr.resid")
  SEXP Rsh_Fir_array_args37[7];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 148);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 149);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 151);
  Rsh_Fir_array_args37[3] = Rsh_const(CCP, 152);
  Rsh_Fir_array_args37[4] = Rsh_const(CCP, 153);
  Rsh_Fir_array_args37[5] = Rsh_const(CCP, 154);
  Rsh_Fir_array_args37[6] = Rsh_const(CCP, 155);
  SEXP Rsh_Fir_array_arg_names10[7];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 7, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D4()
  // L44()
  goto L44_;

L43_:;
  // r14 = dyn base5("qr.Q", "qr.R", "qr.coef", "qr.fitted", "qr.qty", "qr.qy", "qr.resid")
  SEXP Rsh_Fir_array_args38[7];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 148);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 149);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 151);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 152);
  Rsh_Fir_array_args38[4] = Rsh_const(CCP, 153);
  Rsh_Fir_array_args38[5] = Rsh_const(CCP, 154);
  Rsh_Fir_array_args38[6] = Rsh_const(CCP, 155);
  SEXP Rsh_Fir_array_arg_names11[7];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 7, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

D4_:;
  // deopt 81 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L5_;

L45_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r19 = dyn c5("mean.LCL", "mean.UCL", "mean.geometric", "mean.stderr")
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 171);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 172);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 173);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 174);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 4, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L47() else D5()
  // L47()
  goto L47_;

L46_:;
  // r17 = dyn base6("mean.LCL", "mean.UCL", "mean.geometric", "mean.stderr")
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 171);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 172);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 173);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 174);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 4, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

D5_:;
  // deopt 90 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L6_;

L48_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r22 = dyn c6("close.nc", "dim.def.nc", "dim.inq.nc", "dim.rename.nc", "open.nc", "print.nc")
  SEXP Rsh_Fir_array_args41[6];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 175);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 176);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 177);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 178);
  Rsh_Fir_array_args41[4] = Rsh_const(CCP, 179);
  Rsh_Fir_array_args41[5] = Rsh_const(CCP, 180);
  SEXP Rsh_Fir_array_arg_names14[6];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 6, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L50() else D6()
  // L50()
  goto L50_;

L49_:;
  // r20 = dyn base7("close.nc", "dim.def.nc", "dim.inq.nc", "dim.rename.nc", "open.nc", "print.nc")
  SEXP Rsh_Fir_array_args42[6];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 175);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 176);
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 177);
  Rsh_Fir_array_args42[3] = Rsh_const(CCP, 178);
  Rsh_Fir_array_args42[4] = Rsh_const(CCP, 179);
  Rsh_Fir_array_args42[5] = Rsh_const(CCP, 180);
  SEXP Rsh_Fir_array_arg_names15[6];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 6, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L7_;

D6_:;
  // deopt 103 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L7_;

L51_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r25 = dyn c7("mpfr.is.0", "mpfr.is.integer")
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 181);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 182);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L53() else D7()
  // L53()
  goto L53_;

L52_:;
  // r23 = dyn base8("mpfr.is.0", "mpfr.is.integer")
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 181);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 182);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D7_:;
  // deopt 110 [r25]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L8_;

L54_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r28 = dyn c8("as.matrix.csc", "as.matrix.csr", "as.matrix.ssc", "as.matrix.ssr", "as.matrix.coo", "is.matrix.csc", "is.matrix.csr", "is.matrix.ssc", "is.matrix.ssr", "is.matrix.coo")
  SEXP Rsh_Fir_array_args45[10];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 183);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 184);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 185);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 186);
  Rsh_Fir_array_args45[4] = Rsh_const(CCP, 187);
  Rsh_Fir_array_args45[5] = Rsh_const(CCP, 188);
  Rsh_Fir_array_args45[6] = Rsh_const(CCP, 189);
  Rsh_Fir_array_args45[7] = Rsh_const(CCP, 190);
  Rsh_Fir_array_args45[8] = Rsh_const(CCP, 191);
  Rsh_Fir_array_args45[9] = Rsh_const(CCP, 192);
  SEXP Rsh_Fir_array_arg_names18[10];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_array_arg_names18[6] = R_MissingArg;
  Rsh_Fir_array_arg_names18[7] = R_MissingArg;
  Rsh_Fir_array_arg_names18[8] = R_MissingArg;
  Rsh_Fir_array_arg_names18[9] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 10, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L56() else D8()
  // L56()
  goto L56_;

L55_:;
  // r26 = dyn base9("as.matrix.csc", "as.matrix.csr", "as.matrix.ssc", "as.matrix.ssr", "as.matrix.coo", "is.matrix.csc", "is.matrix.csr", "is.matrix.ssc", "is.matrix.ssr", "is.matrix.coo")
  SEXP Rsh_Fir_array_args46[10];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 183);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 184);
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 185);
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 186);
  Rsh_Fir_array_args46[4] = Rsh_const(CCP, 187);
  Rsh_Fir_array_args46[5] = Rsh_const(CCP, 188);
  Rsh_Fir_array_args46[6] = Rsh_const(CCP, 189);
  Rsh_Fir_array_args46[7] = Rsh_const(CCP, 190);
  Rsh_Fir_array_args46[8] = Rsh_const(CCP, 191);
  Rsh_Fir_array_args46[9] = Rsh_const(CCP, 192);
  SEXP Rsh_Fir_array_arg_names19[10];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_array_arg_names19[4] = R_MissingArg;
  Rsh_Fir_array_arg_names19[5] = R_MissingArg;
  Rsh_Fir_array_arg_names19[6] = R_MissingArg;
  Rsh_Fir_array_arg_names19[7] = R_MissingArg;
  Rsh_Fir_array_arg_names19[8] = R_MissingArg;
  Rsh_Fir_array_arg_names19[9] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 10, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L9_;

D8_:;
  // deopt 127 [r28]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L9(r28)
  // L9(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L9_;

L57_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r31 = dyn c9("qr.q2ty", "qr.yq2")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 193);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 194);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L59() else D9()
  // L59()
  goto L59_;

L58_:;
  // r29 = dyn base10("qr.q2ty", "qr.yq2")
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 193);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 194);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L10_;

D9_:;
  // deopt 168 [r31]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(168, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L10_;

L60_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r34 = dyn c10("pretty.gbm.tree", "quantile.rug")
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 195);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 196);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L62() else D10()
  // L62()
  goto L62_;

L61_:;
  // r32 = dyn base11("pretty.gbm.tree", "quantile.rug")
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 195);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 196);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L11_;

D10_:;
  // deopt 175 [r34]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L11(r34)
  // L11(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L11_;

L63_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r37 = dyn c11("close.screen", "plot.design", "plot.new", "plot.window", "plot.xy", "split.screen")
  SEXP Rsh_Fir_array_args51[6];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 197);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 198);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 199);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 200);
  Rsh_Fir_array_args51[4] = Rsh_const(CCP, 201);
  Rsh_Fir_array_args51[5] = Rsh_const(CCP, 202);
  SEXP Rsh_Fir_array_arg_names24[6];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 6, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L65() else D11()
  // L65()
  goto L65_;

L64_:;
  // r35 = dyn base12("close.screen", "plot.design", "plot.new", "plot.window", "plot.xy", "split.screen")
  SEXP Rsh_Fir_array_args52[6];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 197);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 198);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 199);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 200);
  Rsh_Fir_array_args52[4] = Rsh_const(CCP, 201);
  Rsh_Fir_array_args52[5] = Rsh_const(CCP, 202);
  SEXP Rsh_Fir_array_arg_names25[6];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 6, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L12_;

D11_:;
  // deopt 192 [r37]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L12_;

L66_:;
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r40 = dyn c12("density.lf", "plot.eval")
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 203);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 204);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L68() else D12()
  // L68()
  goto L68_;

L67_:;
  // r38 = dyn base13("density.lf", "plot.eval")
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 203);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 204);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L13_;

D12_:;
  // deopt 207 [r40]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L13(r40)
  // L13(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L13_;

L69_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r43 = dyn c13("all.cumulants", "all.moments")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 205);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 206);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L71() else D13()
  // L71()
  goto L71_;

L70_:;
  // r41 = dyn base14("all.cumulants", "all.moments")
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 205);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 206);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L14(r41)
  // L14(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L14_;

D13_:;
  // deopt 214 [r43]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L14(r43)
  // L14(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L14_;

L72_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r46 = dyn c14("t.test.ration", "t.test.ratio.default", "t.test.ratio.formula")
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 207);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 208);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 209);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L74() else D14()
  // L74()
  goto L74_;

L73_:;
  // r44 = dyn base15("t.test.ration", "t.test.ratio.default", "t.test.ratio.formula")
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 207);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 208);
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 209);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L15(r44)
  // L15(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L15_;

D14_:;
  // deopt 224 [r46]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L15(r46)
  // L15(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L15_;

L75_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r49 = dyn c15("open.ncdf", "close.ncdf", "dim.create.ncdf", "dim.def.ncdf", "dim.inq.ncdf", "dim.same.ncdf")
  SEXP Rsh_Fir_array_args59[6];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 210);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 211);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 212);
  Rsh_Fir_array_args59[3] = Rsh_const(CCP, 213);
  Rsh_Fir_array_args59[4] = Rsh_const(CCP, 214);
  Rsh_Fir_array_args59[5] = Rsh_const(CCP, 215);
  SEXP Rsh_Fir_array_arg_names32[6];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_array_arg_names32[5] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 6, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L77() else D15()
  // L77()
  goto L77_;

L76_:;
  // r47 = dyn base16("open.ncdf", "close.ncdf", "dim.create.ncdf", "dim.def.ncdf", "dim.inq.ncdf", "dim.same.ncdf")
  SEXP Rsh_Fir_array_args60[6];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 210);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 211);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 212);
  Rsh_Fir_array_args60[3] = Rsh_const(CCP, 213);
  Rsh_Fir_array_args60[4] = Rsh_const(CCP, 214);
  Rsh_Fir_array_args60[5] = Rsh_const(CCP, 215);
  SEXP Rsh_Fir_array_arg_names33[6];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_array_arg_names33[4] = R_MissingArg;
  Rsh_Fir_array_arg_names33[5] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 6, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L16(r47)
  // L16(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L16_;

D15_:;
  // deopt 235 [r49]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L16(r49)
  // L16(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L16_;

L78_:;
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r52 = dyn c16("rbind.fill", "rbind.fill.matrix")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 216);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 217);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L80() else D16()
  // L80()
  goto L80_;

L79_:;
  // r50 = dyn base17("rbind.fill", "rbind.fill.matrix")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 216);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 217);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L17(r50)
  // L17(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L17_;

D16_:;
  // deopt 242 [r52]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L17_;

L81_:;
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r55 = dyn c17("solve.QP", "solve.QP.compact")
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 218);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 219);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L83() else D17()
  // L83()
  goto L83_;

L82_:;
  // r53 = dyn base18("solve.QP", "solve.QP.compact")
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 218);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 219);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L18(r53)
  // L18(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L18_;

D17_:;
  // deopt 249 [r55]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L18(r55)
  // L18(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L18_;

L84_:;
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r58 = dyn c18("anova.lmlist", "expand.model.frame", "fitted.values", "influence.measures", "lag.plot", "qr.influence", "t.test", "plot.spec.phase", "plot.spec.coherency")
  SEXP Rsh_Fir_array_args65[9];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 220);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 221);
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 222);
  Rsh_Fir_array_args65[3] = Rsh_const(CCP, 223);
  Rsh_Fir_array_args65[4] = Rsh_const(CCP, 224);
  Rsh_Fir_array_args65[5] = Rsh_const(CCP, 225);
  Rsh_Fir_array_args65[6] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args65[7] = Rsh_const(CCP, 226);
  Rsh_Fir_array_args65[8] = Rsh_const(CCP, 227);
  SEXP Rsh_Fir_array_arg_names38[9];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_array_arg_names38[3] = R_MissingArg;
  Rsh_Fir_array_arg_names38[4] = R_MissingArg;
  Rsh_Fir_array_arg_names38[5] = R_MissingArg;
  Rsh_Fir_array_arg_names38[6] = R_MissingArg;
  Rsh_Fir_array_arg_names38[7] = R_MissingArg;
  Rsh_Fir_array_arg_names38[8] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 9, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L86() else D18()
  // L86()
  goto L86_;

L85_:;
  // r56 = dyn base19("anova.lmlist", "expand.model.frame", "fitted.values", "influence.measures", "lag.plot", "qr.influence", "t.test", "plot.spec.phase", "plot.spec.coherency")
  SEXP Rsh_Fir_array_args66[9];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 220);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 221);
  Rsh_Fir_array_args66[2] = Rsh_const(CCP, 222);
  Rsh_Fir_array_args66[3] = Rsh_const(CCP, 223);
  Rsh_Fir_array_args66[4] = Rsh_const(CCP, 224);
  Rsh_Fir_array_args66[5] = Rsh_const(CCP, 225);
  Rsh_Fir_array_args66[6] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args66[7] = Rsh_const(CCP, 226);
  Rsh_Fir_array_args66[8] = Rsh_const(CCP, 227);
  SEXP Rsh_Fir_array_arg_names39[9];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_array_arg_names39[4] = R_MissingArg;
  Rsh_Fir_array_arg_names39[5] = R_MissingArg;
  Rsh_Fir_array_arg_names39[6] = R_MissingArg;
  Rsh_Fir_array_arg_names39[7] = R_MissingArg;
  Rsh_Fir_array_arg_names39[8] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 9, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L19(r56)
  // L19(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L19_;

D18_:;
  // deopt 283 [r58]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(283, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L19(r58)
  // L19(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L19_;

L87_:;
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r61 = dyn c19("sign.change", "sign.flip")
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 228);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 229);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L89() else D19()
  // L89()
  goto L89_;

L88_:;
  // r59 = dyn base20("sign.change", "sign.flip")
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 228);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 229);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L20(r59)
  // L20(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L20_;

D19_:;
  // deopt 292 [r61]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(292, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L20(r61)
  // L20(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L20_;

L90_:;
  // c20 = ldf c in base
  Rsh_Fir_reg_c20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r64 = dyn c20("close.socket", "flush.console", "update.packages")
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 230);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 231);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 232);
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c20_, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L92() else D20()
  // L92()
  goto L92_;

L91_:;
  // r62 = dyn base21("close.socket", "flush.console", "update.packages")
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 230);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 231);
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 232);
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L21(r62)
  // L21(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L21_;

D20_:;
  // deopt 302 [r64]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(302, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L21(r64)
  // L21(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L21_;

D21_:;
  // deopt 307 [r65]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(307, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r65_;
  goto L0_;

L94_:;
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L96() else D22()
  // L96()
  goto L96_;

L95_:;
  // r66 = dyn base22(<sym package>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L22(r66)
  // L22(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L22_;

D22_:;
  // deopt 310 [package1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(310, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L96_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c21 = `==`(package2, NULL)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_package2_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 233);
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L22(c21)
  // L22(c21)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_c21_;
  goto L22_;

L97_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 234), RHO);
  // check L98() else D23()
  // L98()
  goto L98_;

D23_:;
  // deopt 314 []
  Rsh_Fir_deopt(314, 0, NULL, CCP, RHO);
  return R_NilValue;

L98_:;
  // p = prom<V +>{
  //   stopList = ld stopList;
  //   stopList1 = force? stopList;
  //   checkMissing(stopList1);
  //   return stopList1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner799799234_, CCP, RHO);
  // r69 = dyn unlist(p)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L99() else D24()
  // L99()
  goto L99_;

D24_:;
  // deopt 316 [r69]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(316, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L99_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r69
  return Rsh_Fir_reg_r69_;

D25_:;
  // deopt 320 [stopList2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_stopList2_;
  Rsh_Fir_deopt(320, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L102_:;
  // stopList3 = force? stopList2
  Rsh_Fir_reg_stopList3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stopList2_);
  // checkMissing(stopList3)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_stopList3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(stopList3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_stopList3_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c23 then L103() else L104(stopList3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L103()
    goto L103_;
  } else {
  // L104(stopList3)
    Rsh_Fir_reg_stopList5_ = Rsh_Fir_reg_stopList3_;
    goto L104_;
  }

L103_:;
  // dr = tryDispatchBuiltin.1("[[", stopList3)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 235);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_stopList3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc then L105() else L104(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L105()
    goto L105_;
  } else {
  // L104(dr)
    Rsh_Fir_reg_stopList5_ = Rsh_Fir_reg_dr;
    goto L104_;
  }

L104_:;
  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L106() else D26()
  // L106()
  goto L106_;

L105_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L25(dx)
  // L25(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L25_;

D26_:;
  // deopt 322 [stopList5, package3]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_stopList5_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_package3_;
  Rsh_Fir_deopt(322, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L106_:;
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 236), RHO);
  // r72 = dyn __(stopList5, package4)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_stopList5_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_package4_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L25(r72)
  // L25(r72)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r72_;
  goto L25_;

L107_:;
  // thisPkg = ld thisPkg
  Rsh_Fir_reg_thisPkg = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L109() else D27()
  // L109()
  goto L109_;

L108_:;
  // r73 = dyn base23(<sym thisPkg>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L26(r73)
  // L26(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L26_;

D27_:;
  // deopt 328 [thisPkg]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_thisPkg;
  Rsh_Fir_deopt(328, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L109_:;
  // thisPkg1 = force? thisPkg
  Rsh_Fir_reg_thisPkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_thisPkg);
  // checkMissing(thisPkg1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_thisPkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r75 = dyn length(thisPkg1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_thisPkg1_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L110() else D28()
  // L110()
  goto L110_;

D28_:;
  // deopt 331 [r75]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(331, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L110_:;
  // goto L26(r75)
  // L26(r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L26_;

L111_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 237), RHO);
  // check L112() else D29()
  // L112()
  goto L112_;

D29_:;
  // deopt 334 []
  Rsh_Fir_deopt(334, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // r77 = dyn character()
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L113() else D30()
  // L113()
  goto L113_;

D30_:;
  // deopt 335 [r77]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(335, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L113_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r77
  return Rsh_Fir_reg_r77_;

D31_:;
  // deopt 336 [thisPkg2]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_thisPkg2_;
  Rsh_Fir_deopt(336, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L115_:;
  // thisPkg3 = force? thisPkg2
  Rsh_Fir_reg_thisPkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_thisPkg2_);
  // checkMissing(thisPkg3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_thisPkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return thisPkg3
  return Rsh_Fir_reg_thisPkg3_;
}
SEXP Rsh_Fir_user_promise_inner799799234_(SEXP CCP, SEXP RHO) {
  // stopList = ld stopList
  Rsh_Fir_reg_stopList = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // stopList1 = force? stopList
  Rsh_Fir_reg_stopList1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stopList);
  // checkMissing(stopList1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_stopList1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return stopList1
  return Rsh_Fir_reg_stopList1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
