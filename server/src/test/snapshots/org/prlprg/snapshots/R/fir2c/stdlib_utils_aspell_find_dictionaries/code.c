#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2630871216_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2630871216_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2630871216_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2630871216_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner2630871216
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2630871216_, RHO, CCP);
  // st aspell_find_dictionaries = r
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
SEXP Rsh_Fir_user_function_inner2630871216_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2630871216 dynamic dispatch ([dictionaries, dirnames])

  return Rsh_Fir_user_version_inner2630871216_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2630871216_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2630871216 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2630871216/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_dictionaries;  // dictionaries
  SEXP Rsh_Fir_reg_dirnames;  // dirnames
  SEXP Rsh_Fir_reg_dirnames_isMissing;  // dirnames_isMissing
  SEXP Rsh_Fir_reg_dirnames_orDefault;  // dirnames_orDefault
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dictionaries1_;  // dictionaries1
  SEXP Rsh_Fir_reg_dictionaries2_;  // dictionaries2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_dictionaries3_;  // dictionaries3
  SEXP Rsh_Fir_reg_dictionaries4_;  // dictionaries4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_file_path;  // file_path
  SEXP Rsh_Fir_reg_R_home;  // R_home
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_dirnames1_;  // dirnames1
  SEXP Rsh_Fir_reg_dirnames2_;  // dirnames2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_endsWith;  // endsWith
  SEXP Rsh_Fir_reg_dictionaries5_;  // dictionaries5
  SEXP Rsh_Fir_reg_dictionaries6_;  // dictionaries6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_dictionaries7_;  // dictionaries7
  SEXP Rsh_Fir_reg_dictionaries8_;  // dictionaries8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dictionaries10_;  // dictionaries10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_character2_;  // character2
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_dictionaries11_;  // dictionaries11
  SEXP Rsh_Fir_reg_dictionaries12_;  // dictionaries12
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_pos3_;  // pos3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_file_test;  // file_test
  SEXP Rsh_Fir_reg_dictionaries13_;  // dictionaries13
  SEXP Rsh_Fir_reg_dictionaries14_;  // dictionaries14
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dictionaries16_;  // dictionaries16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_pos4_;  // pos4
  SEXP Rsh_Fir_reg_pos5_;  // pos5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_normalizePath;  // normalizePath
  SEXP Rsh_Fir_reg_dictionaries17_;  // dictionaries17
  SEXP Rsh_Fir_reg_dictionaries18_;  // dictionaries18
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dictionaries20_;  // dictionaries20
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_pos6_;  // pos6
  SEXP Rsh_Fir_reg_pos7_;  // pos7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_pos8_;  // pos8
  SEXP Rsh_Fir_reg_pos9_;  // pos9
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_which1_;  // which1
  SEXP Rsh_Fir_reg_ind6_;  // ind6
  SEXP Rsh_Fir_reg_ind7_;  // ind7
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_find_files_in_directories;  // find_files_in_directories
  SEXP Rsh_Fir_reg_dictionaries21_;  // dictionaries21
  SEXP Rsh_Fir_reg_dictionaries22_;  // dictionaries22
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dictionaries24_;  // dictionaries24
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_pos10_;  // pos10
  SEXP Rsh_Fir_reg_pos11_;  // pos11
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_dirnames3_;  // dirnames3
  SEXP Rsh_Fir_reg_dirnames4_;  // dirnames4
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_pos12_;  // pos12
  SEXP Rsh_Fir_reg_pos13_;  // pos13
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1

  // Bind parameters
  Rsh_Fir_reg_dictionaries = PARAMS[0];
  Rsh_Fir_reg_dirnames = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st dictionaries = dictionaries
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dictionaries, RHO);
  (void)(Rsh_Fir_reg_dictionaries);
  // dirnames_isMissing = missing.0(dirnames)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dirnames;
  Rsh_Fir_reg_dirnames_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if dirnames_isMissing then L0() else L1(dirnames)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dirnames_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(dirnames)
    Rsh_Fir_reg_dirnames_orDefault = Rsh_Fir_reg_dirnames;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   character = ldf character;
  //   r = dyn character();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_dirnames_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st dirnames = dirnames_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dirnames_orDefault, RHO);
  (void)(Rsh_Fir_reg_dirnames_orDefault);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L2_:;
  // st dictionaries = r3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L3_:;
  // st n = r6
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L28() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L28()
    goto L28_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L6_:;
  // st dirnames = r13
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L7_:;
  // c2 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c2 then L44() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L44()
    goto L44_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L10()
  // L10()
  goto L10_;

L9_:;
  // st dictionaries = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // character2 = ldf character
  Rsh_Fir_reg_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

L11_:;
  // c6 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c6 then L61() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L61()
    goto L61_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L15()
  // L15()
  goto L15_;

L13_:;
  // st pos = dx7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // normalizePath = ldf normalizePath
  Rsh_Fir_reg_normalizePath = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L68() else D26()
  // L68()
  goto L68_;

L14_:;
  // st out = dx13
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L16_:;
  // c11 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c11 then L80() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L80()
    goto L80_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L19()
  // L19()
  goto L19_;

L18_:;
  // st out = dx17
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L88() else D35()
  // L88()
  goto L88_;

L20_:;
  // dictionaries1 = ld dictionaries
  Rsh_Fir_reg_dictionaries1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L21_:;
  // r2 = dyn base(<sym dictionaries>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D0_:;
  // deopt 2 [dictionaries1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_dictionaries1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // dictionaries2 = force? dictionaries1
  Rsh_Fir_reg_dictionaries2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries1_);
  // checkMissing(dictionaries2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dictionaries2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn as_character(dictionaries2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dictionaries2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L23() else D1()
  // L23()
  goto L23_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L2_;

L24_:;
  // dictionaries3 = ld dictionaries
  Rsh_Fir_reg_dictionaries3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L25_:;
  // r5 = dyn base1(<sym dictionaries>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D2_:;
  // deopt 9 [dictionaries3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_dictionaries3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // dictionaries4 = force? dictionaries3
  Rsh_Fir_reg_dictionaries4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries3_);
  // checkMissing(dictionaries4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dictionaries4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn length(dictionaries4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dictionaries4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 12 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

L28_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // r9 = dyn character1()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 17 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L33_:;
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L34_:;
  // r12 = dyn base2(<lang file.path(R.home("share"), "dictionaries")>, <sym dirnames>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p1 = prom<V +>{
  //   R_home = ldf `R.home`;
  //   r14 = dyn R_home("share");
  //   return r14;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_1, CCP, RHO);
  // r16 = dyn file_path(p1, "dictionaries")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D7_:;
  // deopt 27 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // dirnames1 = ld dirnames
  Rsh_Fir_reg_dirnames1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

D8_:;
  // deopt 28 [dirnames1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_dirnames1_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L37_:;
  // dirnames2 = force? dirnames1
  Rsh_Fir_reg_dirnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirnames1_);
  // checkMissing(dirnames2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dirnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r17 = dyn c1(r16, dirnames2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_dirnames2_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

D9_:;
  // deopt 31 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r17_;
  goto L6_;

L39_:;
  // endsWith = ldf endsWith
  Rsh_Fir_reg_endsWith = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

L40_:;
  // r18 = dyn base3(<lang `<-`(ind, `!`(endsWith(dictionaries, ".rds")))>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p2 = prom<V +>{
  //   dictionaries5 = ld dictionaries;
  //   dictionaries6 = force? dictionaries5;
  //   checkMissing(dictionaries6);
  //   return dictionaries6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_2, CCP, RHO);
  // r21 = dyn endsWith(p2, ".rds")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_endsWith, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

D11_:;
  // deopt 39 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // r22 = `!`(r21)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // st ind = r22
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r23 = dyn any(r22)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L43() else D12()
  // L43()
  goto L43_;

D12_:;
  // deopt 43 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L7(r23)
  // L7(r23)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r23_;
  goto L7_;

L44_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

D13_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p3 = prom<V +>{
  //   dictionaries7 = ld dictionaries;
  //   dictionaries8 = force? dictionaries7;
  //   checkMissing(dictionaries8);
  //   c3 = `is.object`(dictionaries8);
  //   if c3 then L1() else L2(dictionaries8);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", dictionaries8);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(dictionaries10):
  //   ind = ld ind;
  //   ind1 = force? ind;
  //   __ = ldf `[` in base;
  //   r24 = dyn __(dictionaries10, ind1);
  //   goto L0(r24);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_3, CCP, RHO);
  // r26 = dyn sprintf("%s.rds", p3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

D14_:;
  // deopt 48 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // l = ld dictionaries
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c4 then L47() else L48(r26, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L47()
    goto L47_;
  } else {
  // L48(r26, l)
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L48_;
  }

L47_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r26)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args35);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc1 then L49() else L48(r26, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L49()
    goto L49_;
  } else {
  // L48(r26, dr2)
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L48_;
  }

L48_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

L49_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L9(r26, dx2)
  // L9(r26, dx2)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D15_:;
  // deopt 50 [r28, l2, r26, ind2]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(50, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r31 = dyn ___(l2, r26, ind3)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args38[2] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r28, r31)
  // L9(r28, r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r31_;
  goto L9_;

D16_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p4 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   return n1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_4, CCP, RHO);
  // r34 = dyn character2(p4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character2_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L53() else D17()
  // L53()
  goto L53_;

D17_:;
  // deopt 59 [r34]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // st out = r34
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L54() else D18()
  // L54()
  goto L54_;

D18_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p5 = prom<V +>{
  //   _Platform = ld `.Platform`;
  //   _Platform1 = force? _Platform;
  //   checkMissing(_Platform1);
  //   c5 = `is.object`(_Platform1);
  //   if c5 then L1() else L2(_Platform1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", _Platform1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(_Platform3):
  //   r35 = `$`(_Platform3, <sym file.sep>);
  //   goto L0(r35);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_5, CCP, RHO);
  // p6 = prom<V +>{
  //   dictionaries11 = ld dictionaries;
  //   dictionaries12 = force? dictionaries11;
  //   checkMissing(dictionaries12);
  //   return dictionaries12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_6, CCP, RHO);
  // r38 = dyn grepl[, , fixed](p5, p6, TRUE)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L55() else D19()
  // L55()
  goto L55_;

D19_:;
  // deopt 67 [r38]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L55_:;
  // st ind = r38
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L58() else D20()
  // L58()
  goto L58_;

L57_:;
  // r39 = dyn base4(<lang `<-`(pos, which(ind))>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r39)
  // L11(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L11_;

D20_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p7 = prom<V +>{
  //   ind4 = ld ind;
  //   ind5 = force? ind4;
  //   checkMissing(ind5);
  //   return ind5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_7, CCP, RHO);
  // r42 = dyn which(p7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L59() else D21()
  // L59()
  goto L59_;

D21_:;
  // deopt 74 [r42]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L59_:;
  // st pos = r42
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r43 = dyn length1(r42)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L60() else D22()
  // L60()
  goto L60_;

D22_:;
  // deopt 77 [r43]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L11(r43)
  // L11(r43)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r43_;
  goto L11_;

L61_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L62() else D23()
  // L62()
  goto L62_;

D23_:;
  // deopt 78 [pos]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L62_:;
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // checkMissing(pos1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_pos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(pos1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_pos1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c7 then L63() else L64(pos1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L63()
    goto L63_;
  } else {
  // L64(pos1)
    Rsh_Fir_reg_pos3_ = Rsh_Fir_reg_pos1_;
    goto L64_;
  }

L63_:;
  // dr6 = tryDispatchBuiltin.1("[", pos1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_pos1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc3 then L65() else L64(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L65()
    goto L65_;
  } else {
  // L64(dr6)
    Rsh_Fir_reg_pos3_ = Rsh_Fir_reg_dr6_;
    goto L64_;
  }

L64_:;
  // file_test = ldf file_test
  Rsh_Fir_reg_file_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L66() else D24()
  // L66()
  goto L66_;

L65_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L13(dx6)
  // L13(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L13_;

D24_:;
  // deopt 81 [pos3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L66_:;
  // p8 = prom<V +>{
  //   dictionaries13 = ld dictionaries;
  //   dictionaries14 = force? dictionaries13;
  //   checkMissing(dictionaries14);
  //   c8 = `is.object`(dictionaries14);
  //   if c8 then L1() else L2(dictionaries14);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", dictionaries14);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(dictionaries16):
  //   pos4 = ld pos;
  //   pos5 = force? pos4;
  //   __1 = ldf `[` in base;
  //   r44 = dyn __1(dictionaries16, pos5);
  //   goto L0(r44);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_8, CCP, RHO);
  // r46 = dyn file_test("-f", p8)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_test, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L67() else D25()
  // L67()
  goto L67_;

D25_:;
  // deopt 84 [pos3, r46]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L67_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r47 = dyn __2(pos3, r46)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L13(r47)
  // L13(r47)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r47_;
  goto L13_;

D26_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // p9 = prom<V +>{
  //   dictionaries17 = ld dictionaries;
  //   dictionaries18 = force? dictionaries17;
  //   checkMissing(dictionaries18);
  //   c9 = `is.object`(dictionaries18);
  //   if c9 then L1() else L2(dictionaries18);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", dictionaries18);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(dictionaries20):
  //   pos6 = ld pos;
  //   pos7 = force? pos6;
  //   __3 = ldf `[` in base;
  //   r48 = dyn __3(dictionaries20, pos7);
  //   goto L0(r48);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_9, CCP, RHO);
  // r50 = dyn normalizePath(p9, "/")
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_normalizePath, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L69() else D27()
  // L69()
  goto L69_;

D27_:;
  // deopt 91 [r50]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L69_:;
  // l3 = ld out
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c10 = `is.object`(l3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c10 then L70() else L71(r50, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L70()
    goto L70_;
  } else {
  // L71(r50, l3)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L71_;
  }

L70_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l3, r50)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args75);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc6 then L72() else L71(r50, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L72()
    goto L72_;
  } else {
  // L71(r50, dr12)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr12_;
    goto L71_;
  }

L71_:;
  // pos8 = ld pos
  Rsh_Fir_reg_pos8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L73() else D28()
  // L73()
  goto L73_;

L72_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L14(r50, dx12)
  // L14(r50, dx12)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L14_;

D28_:;
  // deopt 93 [r52, l5, r50, pos8]
  SEXP Rsh_Fir_array_deopt_stack20[4];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_pos8_;
  Rsh_Fir_deopt(93, 4, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // pos9 = force? pos8
  Rsh_Fir_reg_pos9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos8_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r55 = dyn ___1(l5, r50, pos9)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_pos9_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L14(r52, r55)
  // L14(r52, r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r55_;
  goto L14_;

L75_:;
  // which1 = ldf which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L77() else D29()
  // L77()
  goto L77_;

L76_:;
  // r57 = dyn base5(<lang `<-`(pos, which(`!`(ind)))>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(r57)
  // L16(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L16_;

D29_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p10 = prom<V +>{
  //   ind6 = ld ind;
  //   ind7 = force? ind6;
  //   checkMissing(ind7);
  //   r59 = `!`(ind7);
  //   return r59;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_10, CCP, RHO);
  // r61 = dyn which1(p10)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which1_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L78() else D30()
  // L78()
  goto L78_;

D30_:;
  // deopt 104 [r61]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L78_:;
  // st pos = r61
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r62 = dyn length2(r61)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L79() else D31()
  // L79()
  goto L79_;

D31_:;
  // deopt 107 [r62]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L16(r62)
  // L16(r62)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r62_;
  goto L16_;

L80_:;
  // find_files_in_directories = ldf find_files_in_directories
  Rsh_Fir_reg_find_files_in_directories = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L81() else D32()
  // L81()
  goto L81_;

D32_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p11 = prom<V +>{
  //   dictionaries21 = ld dictionaries;
  //   dictionaries22 = force? dictionaries21;
  //   checkMissing(dictionaries22);
  //   c12 = `is.object`(dictionaries22);
  //   if c12 then L1() else L2(dictionaries22);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", dictionaries22);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(dictionaries24):
  //   pos10 = ld pos;
  //   pos11 = force? pos10;
  //   __4 = ldf `[` in base;
  //   r63 = dyn __4(dictionaries24, pos11);
  //   goto L0(r63);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_11, CCP, RHO);
  // p12 = prom<V +>{
  //   dirnames3 = ld dirnames;
  //   dirnames4 = force? dirnames3;
  //   checkMissing(dirnames4);
  //   return dirnames4;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2630871216_12, CCP, RHO);
  // r66 = dyn find_files_in_directories(p11, p12)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_find_files_in_directories, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L82() else D33()
  // L82()
  goto L82_;

D33_:;
  // deopt 112 [r66]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L82_:;
  // l6 = ld out
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c13 = `is.object`(l6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c13 then L83() else L84(r66, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L83()
    goto L83_;
  } else {
  // L84(r66, l6)
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L84_;
  }

L83_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l6, r66)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args93);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc8 then L85() else L84(r66, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L85()
    goto L85_;
  } else {
  // L84(r66, dr16)
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr16_;
    goto L84_;
  }

L84_:;
  // pos12 = ld pos
  Rsh_Fir_reg_pos12_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L86() else D34()
  // L86()
  goto L86_;

L85_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L18(r66, dx16)
  // L18(r66, dx16)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L18_;

D34_:;
  // deopt 114 [r68, l8, r66, pos12]
  SEXP Rsh_Fir_array_deopt_stack24[4];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_pos12_;
  Rsh_Fir_deopt(114, 4, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L86_:;
  // pos13 = force? pos12
  Rsh_Fir_reg_pos13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos12_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r71 = dyn ___2(l8, r66, pos13)
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args96[2] = Rsh_Fir_reg_pos13_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L18(r68, r71)
  // L18(r68, r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r71_;
  goto L18_;

D35_:;
  // deopt 120 [out]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L88_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out1
  return Rsh_Fir_reg_out1_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2630871216_1(SEXP CCP, SEXP RHO) {
  // R_home = ldf `R.home`
  Rsh_Fir_reg_R_home = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // r14 = dyn R_home("share")
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_2(SEXP CCP, SEXP RHO) {
  // dictionaries5 = ld dictionaries
  Rsh_Fir_reg_dictionaries5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dictionaries6 = force? dictionaries5
  Rsh_Fir_reg_dictionaries6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries5_);
  // checkMissing(dictionaries6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dictionaries6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return dictionaries6
  return Rsh_Fir_reg_dictionaries6_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_3(SEXP CCP, SEXP RHO) {
  // dictionaries7 = ld dictionaries
  Rsh_Fir_reg_dictionaries7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dictionaries8 = force? dictionaries7
  Rsh_Fir_reg_dictionaries8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries7_);
  // checkMissing(dictionaries8)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dictionaries8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(dictionaries8)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dictionaries8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(dictionaries8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dictionaries8)
    Rsh_Fir_reg_dictionaries10_ = Rsh_Fir_reg_dictionaries8_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", dictionaries8)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_dictionaries8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_dictionaries10_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r24 = dyn __(dictionaries10, ind1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dictionaries10_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r24_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_4(SEXP CCP, SEXP RHO) {
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return n1
  return Rsh_Fir_reg_n1_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_5(SEXP CCP, SEXP RHO) {
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r35 = `$`(_Platform3, <sym file.sep>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r35_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_6(SEXP CCP, SEXP RHO) {
  // dictionaries11 = ld dictionaries
  Rsh_Fir_reg_dictionaries11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dictionaries12 = force? dictionaries11
  Rsh_Fir_reg_dictionaries12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries11_);
  // checkMissing(dictionaries12)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dictionaries12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return dictionaries12
  return Rsh_Fir_reg_dictionaries12_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_7(SEXP CCP, SEXP RHO) {
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // checkMissing(ind5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_ind5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return ind5
  return Rsh_Fir_reg_ind5_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_8(SEXP CCP, SEXP RHO) {
  // dictionaries13 = ld dictionaries
  Rsh_Fir_reg_dictionaries13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dictionaries14 = force? dictionaries13
  Rsh_Fir_reg_dictionaries14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries13_);
  // checkMissing(dictionaries14)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dictionaries14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(dictionaries14)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dictionaries14_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(dictionaries14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dictionaries14)
    Rsh_Fir_reg_dictionaries16_ = Rsh_Fir_reg_dictionaries14_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", dictionaries14)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_dictionaries14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_dictionaries16_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // pos4 = ld pos
  Rsh_Fir_reg_pos4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pos5 = force? pos4
  Rsh_Fir_reg_pos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos4_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r44 = dyn __1(dictionaries16, pos5)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dictionaries16_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_pos5_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r44_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_9(SEXP CCP, SEXP RHO) {
  // dictionaries17 = ld dictionaries
  Rsh_Fir_reg_dictionaries17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dictionaries18 = force? dictionaries17
  Rsh_Fir_reg_dictionaries18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries17_);
  // checkMissing(dictionaries18)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dictionaries18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(dictionaries18)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dictionaries18_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c9 then L1() else L2(dictionaries18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dictionaries18)
    Rsh_Fir_reg_dictionaries20_ = Rsh_Fir_reg_dictionaries18_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", dictionaries18)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_dictionaries18_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_dictionaries20_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // pos6 = ld pos
  Rsh_Fir_reg_pos6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pos7 = force? pos6
  Rsh_Fir_reg_pos7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos6_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r48 = dyn __3(dictionaries20, pos7)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dictionaries20_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_pos7_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r48_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_10(SEXP CCP, SEXP RHO) {
  // ind6 = ld ind
  Rsh_Fir_reg_ind6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // ind7 = force? ind6
  Rsh_Fir_reg_ind7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind6_);
  // checkMissing(ind7)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_ind7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r59 = `!`(ind7)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_ind7_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // return r59
  return Rsh_Fir_reg_r59_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_11(SEXP CCP, SEXP RHO) {
  // dictionaries21 = ld dictionaries
  Rsh_Fir_reg_dictionaries21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dictionaries22 = force? dictionaries21
  Rsh_Fir_reg_dictionaries22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dictionaries21_);
  // checkMissing(dictionaries22)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dictionaries22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(dictionaries22)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dictionaries22_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(dictionaries22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dictionaries22)
    Rsh_Fir_reg_dictionaries24_ = Rsh_Fir_reg_dictionaries22_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", dictionaries22)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_dictionaries22_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_dictionaries24_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // pos10 = ld pos
  Rsh_Fir_reg_pos10_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pos11 = force? pos10
  Rsh_Fir_reg_pos11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos10_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r63 = dyn __4(dictionaries24, pos11)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dictionaries24_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_pos11_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r63)
  // L0(r63)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r63_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2630871216_12(SEXP CCP, SEXP RHO) {
  // dirnames3 = ld dirnames
  Rsh_Fir_reg_dirnames3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // dirnames4 = force? dirnames3
  Rsh_Fir_reg_dirnames4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirnames3_);
  // checkMissing(dirnames4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dirnames4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return dirnames4
  return Rsh_Fir_reg_dirnames4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
