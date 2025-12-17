#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner22362285_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner22362285_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner22362285_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner22362285_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner22362285_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner22362285_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner22362285_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner22362285
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner22362285_, RHO, CCP);
  // st `.getGenericFromCacheTable` = r
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
SEXP Rsh_Fir_user_function_inner22362285_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner22362285 dynamic dispatch ([name, where, pkg, table])

  return Rsh_Fir_user_version_inner22362285_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner22362285_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner22362285 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner22362285/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_pkg_isMissing;  // pkg_isMissing
  SEXP Rsh_Fir_reg_pkg_orDefault;  // pkg_orDefault
  SEXP Rsh_Fir_reg_exists;  // exists
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_table1_;  // table1
  SEXP Rsh_Fir_reg_table2_;  // table2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_table3_;  // table3
  SEXP Rsh_Fir_reg_table4_;  // table4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg_pkg4_;  // pkg4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_getPackageName;  // getPackageName
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_where7_;  // where7
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_pkg5_;  // pkg5
  SEXP Rsh_Fir_reg_pkg6_;  // pkg6
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_pkg7_;  // pkg7
  SEXP Rsh_Fir_reg_pkg8_;  // pkg8
  SEXP Rsh_Fir_reg_pkgs;  // pkgs
  SEXP Rsh_Fir_reg_pkgs1_;  // pkgs1
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_pkgs2_;  // pkgs2
  SEXP Rsh_Fir_reg_pkgs3_;  // pkgs3
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_value11_;  // value11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_pkgs4_;  // pkgs4
  SEXP Rsh_Fir_reg_pkgs5_;  // pkgs5
  SEXP Rsh_Fir_reg_match2_;  // match2
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_value15_;  // value15
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_pkg9_;  // pkg9
  SEXP Rsh_Fir_reg_pkg10_;  // pkg10
  SEXP Rsh_Fir_reg_nzchar1_;  // nzchar1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_pkg11_;  // pkg11
  SEXP Rsh_Fir_reg_pkg12_;  // pkg12
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_value16_;  // value16
  SEXP Rsh_Fir_reg_value17_;  // value17

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_where = PARAMS[1];
  Rsh_Fir_reg_pkg = PARAMS[2];
  Rsh_Fir_reg_table = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // pkg_isMissing = missing.0(pkg)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_pkg;
  Rsh_Fir_reg_pkg_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if pkg_isMissing then L0("") else L0(pkg)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pkg_isMissing)) {
  // L0("")
    Rsh_Fir_reg_pkg_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(pkg)
    Rsh_Fir_reg_pkg_orDefault = Rsh_Fir_reg_pkg;
    goto L0_;
  }

L0_:;
  // st pkg = pkg_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_pkg_orDefault, RHO);
  (void)(Rsh_Fir_reg_pkg_orDefault);
  // st table = table
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_table, RHO);
  (void)(Rsh_Fir_reg_table);
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 7);

L2_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L41() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L41()
    goto L41_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym10 = ldf nzchar
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base10 = ldf nzchar in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard10 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L4_:;
  // r12 = `!`(r10)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L46() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L46()
    goto L46_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L15()
  // L15()
  goto L15_;

L6_:;
  // c4 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L50() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L50()
    goto L50_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L8_:;
  // goto L15()
  // L15()
  goto L15_;

L9_:;
  // st pkg = r16
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L10_:;
  // c6 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c6 then L60() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L60()
    goto L60_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym5 = ldf identical
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf identical in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L13_:;
  // c7 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c7 then L68() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L68()
    goto L68_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L8(NULL)
  // L8(NULL)
  Rsh_Fir_reg_where5_ = Rsh_const(CCP, 7);
  goto L8_;

L15_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard6 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L16_:;
  // st pkgs = r27
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym7 = ldf match
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf match in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L17_:;
  // st i = r30
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L80() else D22()
  // L80()
  goto L80_;

L18_:;
  // sym8 = ldf match
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf match in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard8 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L21_:;
  // st i = r37
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // i4 = ld i
  Rsh_Fir_reg_i4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L93() else D27()
  // L93()
  goto L93_;

L22_:;
  // sym9 = ldf match
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base9 = ldf match in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard9 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx3
  return Rsh_Fir_reg_dx3_;

L25_:;
  // st i = r44
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // i8 = ld i
  Rsh_Fir_reg_i8_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L106() else D32()
  // L106()
  goto L106_;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 7);

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx5
  return Rsh_Fir_reg_dx5_;

L28_:;
  // c14 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c14 then L119() else L29(c14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L119()
    goto L119_;
  } else {
  // L29(c14)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
    goto L29_;
  }

L29_:;
  // c23 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c23 then L125() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L125()
    goto L125_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // r55 = `!`(r52)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c21 = `&&`(c19, c20)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L29(c21)
  // L29(c21)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c21_;
  goto L29_;

L31_:;
  // value16 = ld value
  Rsh_Fir_reg_value16_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L127() else D39()
  // L127()
  goto L127_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner22362285_, CCP, RHO);
  // p1 = prom<V +>{
  //   table1 = ld table;
  //   table2 = force? table1;
  //   checkMissing(table2);
  //   return table2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner22362285_1, CCP, RHO);
  // r2 = dyn exists[, envir, inherits](p, p1, FALSE)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L33() else D1()
  // L33()
  goto L33_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L33_:;
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c then L34() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L34()
    goto L34_;
  } else {
  // L1()
    goto L1_;
  }

L34_:;
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p2 = prom<V +>{
  //   name3 = ld name;
  //   name4 = force? name3;
  //   checkMissing(name4);
  //   return name4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner22362285_2, CCP, RHO);
  // p3 = prom<V +>{
  //   table3 = ld table;
  //   table4 = force? table3;
  //   checkMissing(table4);
  //   return table4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner22362285_3, CCP, RHO);
  // r5 = dyn get[, envir](p2, p3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L36_:;
  // st value = r5
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L39() else D4()
  // L39()
  goto L39_;

L38_:;
  // r6 = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D4_:;
  // deopt 17 [value]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L39_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r8 = dyn is_list(value1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

D5_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L41_:;
  // sym1 = ldf nzchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf nzchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // pkg1 = ld pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L44() else D6()
  // L44()
  goto L44_;

L43_:;
  // r9 = dyn base1(<sym pkg>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D6_:;
  // deopt 23 [pkg1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // pkg2 = force? pkg1
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg1_);
  // checkMissing(pkg2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_pkg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r11 = dyn nzchar(pkg2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_pkg2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L45() else D7()
  // L45()
  goto L45_;

D7_:;
  // deopt 26 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L4_;

L46_:;
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L49() else D8()
  // L49()
  goto L49_;

L48_:;
  // r13 = dyn base2(<sym where>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L6_;

D8_:;
  // deopt 29 [where1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L49_:;
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c3 = `is.character`(where2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_where2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L6(c3)
  // L6(c3)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_c3_;
  goto L6_;

L50_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

D9_:;
  // deopt 32 [where3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L51_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // st pkg = where4
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_where4_, RHO);
  (void)(Rsh_Fir_reg_where4_);
  // goto L8(where4)
  // L8(where4)
  Rsh_Fir_reg_where5_ = Rsh_Fir_reg_where4_;
  goto L8_;

L53_:;
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L55() else D10()
  // L55()
  goto L55_;

L54_:;
  // r15 = dyn base3(<sym name>, "package")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L9_;

D10_:;
  // deopt 37 [name5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_name5_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L55_:;
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // checkMissing(name6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r17 = dyn attr(name6, "package")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_name6_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L56() else D11()
  // L56()
  goto L56_;

D11_:;
  // deopt 41 [r17]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L9_;

L57_:;
  // pkg3 = ld pkg
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L59() else D12()
  // L59()
  goto L59_;

L58_:;
  // r18 = dyn base4(<sym pkg>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L10_;

D12_:;
  // deopt 44 [pkg3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L59_:;
  // pkg4 = force? pkg3
  Rsh_Fir_reg_pkg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg3_);
  // checkMissing(pkg4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_pkg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c5 = `==`(pkg4, NULL)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_pkg4_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L10(c5)
  // L10(c5)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_c5_;
  goto L10_;

L60_:;
  // getPackageName = ldf getPackageName
  Rsh_Fir_reg_getPackageName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L61() else D13()
  // L61()
  goto L61_;

D13_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p4 = prom<V +>{
  //   where6 = ld where;
  //   where7 = force? where6;
  //   checkMissing(where7);
  //   return where7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner22362285_4, CCP, RHO);
  // r21 = dyn getPackageName(p4, FALSE)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getPackageName, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L62() else D14()
  // L62()
  goto L62_;

D14_:;
  // deopt 51 [r21]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L62_:;
  // st pkg = r21
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L12()
  // L12()
  goto L12_;

L64_:;
  // pkg5 = ld pkg
  Rsh_Fir_reg_pkg5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L66() else D15()
  // L66()
  goto L66_;

L65_:;
  // r23 = dyn base5(<sym pkg>, ".GlobalEnv")
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L13(r23)
  // L13(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L13_;

D15_:;
  // deopt 57 [pkg5]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_pkg5_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L66_:;
  // pkg6 = force? pkg5
  Rsh_Fir_reg_pkg6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg5_);
  // checkMissing(pkg6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_pkg6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r25 = dyn identical(pkg6, ".GlobalEnv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args50[9];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_pkg6_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args50[4] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args50[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args50[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args50[7] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args50[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[9];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_array_arg_names12[6] = R_MissingArg;
  Rsh_Fir_array_arg_names12[7] = R_MissingArg;
  Rsh_Fir_array_arg_names12[8] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L67() else D16()
  // L67()
  goto L67_;

D16_:;
  // deopt 68 [r25]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L13(r25)
  // L13(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L13_;

L68_:;
  // st pkg = ""
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // goto L8("")
  // L8("")
  Rsh_Fir_reg_where5_ = Rsh_const(CCP, 3);
  goto L8_;

L71_:;
  // value2 = ld value
  Rsh_Fir_reg_value2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L73() else D17()
  // L73()
  goto L73_;

L72_:;
  // r26 = dyn base6(<sym value>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L16(r26)
  // L16(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L16_;

D17_:;
  // deopt 78 [value2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L73_:;
  // value3 = force? value2
  Rsh_Fir_reg_value3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value2_);
  // checkMissing(value3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_value3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r28 = dyn names(value3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

D18_:;
  // deopt 81 [r28]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L16(r28)
  // L16(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L16_;

L75_:;
  // pkg7 = ld pkg
  Rsh_Fir_reg_pkg7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

L76_:;
  // r29 = dyn base7(<sym pkg>, <sym pkgs>, 0)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L17(r29)
  // L17(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L17_;

D19_:;
  // deopt 85 [pkg7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_pkg7_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L77_:;
  // pkg8 = force? pkg7
  Rsh_Fir_reg_pkg8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg7_);
  // checkMissing(pkg8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_pkg8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // pkgs = ld pkgs
  Rsh_Fir_reg_pkgs = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L78() else D20()
  // L78()
  goto L78_;

D20_:;
  // deopt 87 [pkgs]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_pkgs;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L78_:;
  // pkgs1 = force? pkgs
  Rsh_Fir_reg_pkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs);
  // checkMissing(pkgs1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_pkgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r31 = dyn match(pkg8, pkgs1, 0, NULL)
  SEXP Rsh_Fir_array_args57[4];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_pkg8_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_pkgs1_;
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args57[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L79() else D21()
  // L79()
  goto L79_;

D21_:;
  // deopt 92 [r31]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L17(r31)
  // L17(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L17_;

D22_:;
  // deopt 94 [i]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L80_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r32 = `>`(i1, 0)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c8 then L81() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L81()
    goto L81_;
  } else {
  // L18()
    goto L18_;
  }

L81_:;
  // value4 = ld value
  Rsh_Fir_reg_value4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L82() else D23()
  // L82()
  goto L82_;

D23_:;
  // deopt 98 [value4]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L82_:;
  // value5 = force? value4
  Rsh_Fir_reg_value5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value4_);
  // checkMissing(value5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_value5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(value5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c9 then L83() else L84(value5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L83()
    goto L83_;
  } else {
  // L84(value5)
    Rsh_Fir_reg_value7_ = Rsh_Fir_reg_value5_;
    goto L84_;
  }

L83_:;
  // dr = tryDispatchBuiltin.1("[[", value5)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_value5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc then L85() else L84(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L85()
    goto L85_;
  } else {
  // L84(dr)
    Rsh_Fir_reg_value7_ = Rsh_Fir_reg_dr;
    goto L84_;
  }

L84_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L86() else D24()
  // L86()
  goto L86_;

L85_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L19(dx)
  // L19(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L19_;

D24_:;
  // deopt 100 [value7, i2]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L86_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r33 = dyn __(value7, i3)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L19(r33)
  // L19(r33)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r33_;
  goto L19_;

L89_:;
  // pkgs2 = ld pkgs
  Rsh_Fir_reg_pkgs2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L91() else D25()
  // L91()
  goto L91_;

L90_:;
  // r36 = dyn base8("methods", <sym pkgs>, 0)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L21(r36)
  // L21(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L21_;

D25_:;
  // deopt 109 [pkgs2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_pkgs2_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L91_:;
  // pkgs3 = force? pkgs2
  Rsh_Fir_reg_pkgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs2_);
  // checkMissing(pkgs3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_pkgs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r38 = dyn match1("methods", pkgs3, 0, NULL)
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args69[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L92() else D26()
  // L92()
  goto L92_;

D26_:;
  // deopt 114 [r38]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L21(r38)
  // L21(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L21_;

D27_:;
  // deopt 116 [i4]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L93_:;
  // i5 = force? i4
  Rsh_Fir_reg_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i4_);
  // checkMissing(i5)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_i5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r39 = `>`(i5, 0)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_i5_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c10 then L94() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L94()
    goto L94_;
  } else {
  // L22()
    goto L22_;
  }

L94_:;
  // value8 = ld value
  Rsh_Fir_reg_value8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L95() else D28()
  // L95()
  goto L95_;

D28_:;
  // deopt 120 [value8]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L95_:;
  // value9 = force? value8
  Rsh_Fir_reg_value9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value8_);
  // checkMissing(value9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_value9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(value9)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_value9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c11 then L96() else L97(value9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L96()
    goto L96_;
  } else {
  // L97(value9)
    Rsh_Fir_reg_value11_ = Rsh_Fir_reg_value9_;
    goto L97_;
  }

L96_:;
  // dr2 = tryDispatchBuiltin.1("[[", value9)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_value9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc1 then L98() else L97(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L98()
    goto L98_;
  } else {
  // L97(dr2)
    Rsh_Fir_reg_value11_ = Rsh_Fir_reg_dr2_;
    goto L97_;
  }

L97_:;
  // i6 = ld i
  Rsh_Fir_reg_i6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

L98_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L23(dx2)
  // L23(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

D29_:;
  // deopt 122 [value11, i6]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_value11_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_i6_;
  Rsh_Fir_deopt(122, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L99_:;
  // i7 = force? i6
  Rsh_Fir_reg_i7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i6_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r40 = dyn __1(value11, i7)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_value11_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L23(r40)
  // L23(r40)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r40_;
  goto L23_;

L102_:;
  // pkgs4 = ld pkgs
  Rsh_Fir_reg_pkgs4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L104() else D30()
  // L104()
  goto L104_;

L103_:;
  // r43 = dyn base9("base", <sym pkgs>, 0)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args79[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L25(r43)
  // L25(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L25_;

D30_:;
  // deopt 131 [pkgs4]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_pkgs4_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L104_:;
  // pkgs5 = force? pkgs4
  Rsh_Fir_reg_pkgs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs4_);
  // checkMissing(pkgs5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_pkgs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // match2 = ldf match in base
  Rsh_Fir_reg_match2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r45 = dyn match2("base", pkgs5, 0, NULL)
  SEXP Rsh_Fir_array_args81[4];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_pkgs5_;
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args81[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match2_, 4, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L105() else D31()
  // L105()
  goto L105_;

D31_:;
  // deopt 136 [r45]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L25(r45)
  // L25(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L25_;

D32_:;
  // deopt 138 [i8]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L106_:;
  // i9 = force? i8
  Rsh_Fir_reg_i9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i8_);
  // checkMissing(i9)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_i9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r46 = `>`(i9, 0)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c12 then L107() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L107()
    goto L107_;
  } else {
  // L26()
    goto L26_;
  }

L107_:;
  // value12 = ld value
  Rsh_Fir_reg_value12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L108() else D33()
  // L108()
  goto L108_;

D33_:;
  // deopt 142 [value12]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_value12_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L108_:;
  // value13 = force? value12
  Rsh_Fir_reg_value13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value12_);
  // checkMissing(value13)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_value13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(value13)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_value13_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c13 then L109() else L110(value13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L109()
    goto L109_;
  } else {
  // L110(value13)
    Rsh_Fir_reg_value15_ = Rsh_Fir_reg_value13_;
    goto L110_;
  }

L109_:;
  // dr4 = tryDispatchBuiltin.1("[[", value13)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_value13_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc2 then L111() else L110(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L111()
    goto L111_;
  } else {
  // L110(dr4)
    Rsh_Fir_reg_value15_ = Rsh_Fir_reg_dr4_;
    goto L110_;
  }

L110_:;
  // i10 = ld i
  Rsh_Fir_reg_i10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L112() else D34()
  // L112()
  goto L112_;

L111_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L27(dx4)
  // L27(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L27_;

D34_:;
  // deopt 144 [value15, i10]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_value15_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(144, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L112_:;
  // i11 = force? i10
  Rsh_Fir_reg_i11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i10_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r47 = dyn __2(value15, i11)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_value15_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L27(r47)
  // L27(r47)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r47_;
  goto L27_;

L115_:;
  // pkg9 = ld pkg
  Rsh_Fir_reg_pkg9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L117() else D35()
  // L117()
  goto L117_;

L116_:;
  // r48 = dyn base10(<sym pkg>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L28(r48)
  // L28(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L28_;

D35_:;
  // deopt 151 [pkg9]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_pkg9_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L117_:;
  // pkg10 = force? pkg9
  Rsh_Fir_reg_pkg10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg9_);
  // checkMissing(pkg10)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_pkg10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // nzchar1 = ldf nzchar in base
  Rsh_Fir_reg_nzchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r50 = dyn nzchar1(pkg10)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_pkg10_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar1_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L118() else D36()
  // L118()
  goto L118_;

D36_:;
  // deopt 154 [r50]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L118_:;
  // goto L28(r50)
  // L28(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L28_;

L119_:;
  // sym11 = ldf identical
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base11 = ldf identical in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard11 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L120_:;
  // pkg11 = ld pkg
  Rsh_Fir_reg_pkg11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L122() else D37()
  // L122()
  goto L122_;

L121_:;
  // r51 = dyn base11(<sym pkg>, <lang `@`(value, package)>)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L30(c14, r51)
  // L30(c14, r51)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L30_;

D37_:;
  // deopt 157 [c14, pkg11]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_pkg11_;
  Rsh_Fir_deopt(157, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L122_:;
  // pkg12 = force? pkg11
  Rsh_Fir_reg_pkg12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg11_);
  // checkMissing(pkg12)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_pkg12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // __3 = ldf `@` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r53 = dyn __3(<sym value>, <sym package>)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names27, CCP, RHO);
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r54 = dyn identical1(pkg12, r53, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args98[9];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_pkg12_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args98[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args98[4] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args98[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args98[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args98[7] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args98[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names28[9];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_array_arg_names28[5] = R_MissingArg;
  Rsh_Fir_array_arg_names28[6] = R_MissingArg;
  Rsh_Fir_array_arg_names28[7] = R_MissingArg;
  Rsh_Fir_array_arg_names28[8] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L123() else D38()
  // L123()
  goto L123_;

D38_:;
  // deopt 169 [c14, r54]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L30(c14, r54)
  // L30(c14, r54)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r54_;
  goto L30_;

L125_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 7);

D39_:;
  // deopt 174 [value16]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_value16_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L127_:;
  // value17 = force? value16
  Rsh_Fir_reg_value17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value16_);
  // checkMissing(value17)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_value17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value17
  return Rsh_Fir_reg_value17_;
}
SEXP Rsh_Fir_user_promise_inner22362285_(SEXP CCP, SEXP RHO) {
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner22362285_1(SEXP CCP, SEXP RHO) {
  // table1 = ld table
  Rsh_Fir_reg_table1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // table2 = force? table1
  Rsh_Fir_reg_table2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table1_);
  // checkMissing(table2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_table2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return table2
  return Rsh_Fir_reg_table2_;
}
SEXP Rsh_Fir_user_promise_inner22362285_2(SEXP CCP, SEXP RHO) {
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return name4
  return Rsh_Fir_reg_name4_;
}
SEXP Rsh_Fir_user_promise_inner22362285_3(SEXP CCP, SEXP RHO) {
  // table3 = ld table
  Rsh_Fir_reg_table3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // table4 = force? table3
  Rsh_Fir_reg_table4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table3_);
  // checkMissing(table4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_table4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return table4
  return Rsh_Fir_reg_table4_;
}
SEXP Rsh_Fir_user_promise_inner22362285_4(SEXP CCP, SEXP RHO) {
  // where6 = ld where
  Rsh_Fir_reg_where6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // where7 = force? where6
  Rsh_Fir_reg_where7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where6_);
  // checkMissing(where7)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_where7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return where7
  return Rsh_Fir_reg_where7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
