#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2847264104_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2847264104_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2847264104_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2847264104_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2847264104_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2847264104_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2847264104_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2847264104_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2847264104_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2847264104_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner2847264104
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2847264104_, RHO, CCP);
  // st `.cacheClass` = r
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
SEXP Rsh_Fir_user_function_inner2847264104_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2847264104 dynamic dispatch ([name, def, doSubclasses, env])

  return Rsh_Fir_user_version_inner2847264104_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2847264104_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2847264104 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2847264104/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_doSubclasses;  // doSubclasses
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_doSubclasses_isMissing;  // doSubclasses_isMissing
  SEXP Rsh_Fir_reg_doSubclasses_orDefault;  // doSubclasses_orDefault
  SEXP Rsh_Fir_reg_isFALSE;  // isFALSE
  SEXP Rsh_Fir_reg_doSubclasses1_;  // doSubclasses1
  SEXP Rsh_Fir_reg_doSubclasses2_;  // doSubclasses2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__recacheSubclasses;  // _recacheSubclasses
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_def2_;  // def2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg__classTable;  // _classTable
  SEXP Rsh_Fir_reg__classTable1_;  // _classTable1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__classTable3_;  // _classTable3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_prev;  // prev
  SEXP Rsh_Fir_reg_prev1_;  // prev1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_prev2_;  // prev2
  SEXP Rsh_Fir_reg_prev3_;  // prev3
  SEXP Rsh_Fir_reg_def3_;  // def3
  SEXP Rsh_Fir_reg_def4_;  // def4
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_newpkg;  // newpkg
  SEXP Rsh_Fir_reg_newpkg1_;  // newpkg1
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg__extendsForS3_;  // _extendsForS3
  SEXP Rsh_Fir_reg_def5_;  // def5
  SEXP Rsh_Fir_reg_def6_;  // def6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg__cache_class;  // _cache_class
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_def7_;  // def7
  SEXP Rsh_Fir_reg_def8_;  // def8
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_def10_;  // def10
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_def12_;  // def12
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg__simpleDuplicateClass;  // _simpleDuplicateClass
  SEXP Rsh_Fir_reg_def13_;  // def13
  SEXP Rsh_Fir_reg_def14_;  // def14
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_prev4_;  // prev4
  SEXP Rsh_Fir_reg_prev5_;  // prev5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_prev6_;  // prev6
  SEXP Rsh_Fir_reg_prev7_;  // prev7
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_def15_;  // def15
  SEXP Rsh_Fir_reg_def16_;  // def16
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_def18_;  // def18
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_newpkg2_;  // newpkg2
  SEXP Rsh_Fir_reg_newpkg3_;  // newpkg3
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_prev8_;  // prev8
  SEXP Rsh_Fir_reg_prev9_;  // prev9
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_def21_;  // def21
  SEXP Rsh_Fir_reg_def22_;  // def22
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg__duplicateClassesExist;  // _duplicateClassesExist
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_def23_;  // def23
  SEXP Rsh_Fir_reg_def24_;  // def24
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_def26_;  // def26
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_def28_;  // def28
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_name7_;  // name7
  SEXP Rsh_Fir_reg_name8_;  // name8
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r49_;  // r49

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_def = PARAMS[1];
  Rsh_Fir_reg_doSubclasses = PARAMS[2];
  Rsh_Fir_reg_env = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st def = def
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_def, RHO);
  (void)(Rsh_Fir_reg_def);
  // doSubclasses_isMissing = missing.0(doSubclasses)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_doSubclasses;
  Rsh_Fir_reg_doSubclasses_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if doSubclasses_isMissing then L0(FALSE) else L0(doSubclasses)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_doSubclasses_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_doSubclasses_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(doSubclasses)
    Rsh_Fir_reg_doSubclasses_orDefault = Rsh_Fir_reg_doSubclasses;
    goto L0_;
  }

L0_:;
  // st doSubclasses = doSubclasses_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_doSubclasses_orDefault, RHO);
  (void)(Rsh_Fir_reg_doSubclasses_orDefault);
  // st env = env
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_env, RHO);
  (void)(Rsh_Fir_reg_env);
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L3_:;
  // r12 = `!`(r10)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L37() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // st prev = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c2 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L3(c2)
  // L3(c2)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c2_;
  goto L3_;

L5_:;
  // goto L22()
  // L22()
  goto L22_;

L6_:;
  // goto L17()
  // L17()
  goto L17_;

L7_:;
  // c5 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c5 then L46() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L46()
    goto L46_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // __3 = ldf `@` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r21 = dyn __3(<sym prev>, <sym package>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // st pkg = r21
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L10_:;
  // c6 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c6 then L54() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L54()
    goto L54_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // _simpleDuplicateClass = ldf `.simpleDuplicateClass`
  Rsh_Fir_reg__simpleDuplicateClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L68() else D20()
  // L68()
  goto L68_;

L12_:;
  // def7 = ld def
  Rsh_Fir_reg_def7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

L13_:;
  // st `.classTable` = dx3
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return def12
  return Rsh_Fir_reg_def12_;

L15_:;
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard4 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L16_:;
  // st prev = r38
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // pkg2 = ld pkg
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L77() else D24()
  // L77()
  goto L77_;

L17_:;
  // def15 = ld def
  Rsh_Fir_reg_def15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D27()
  // L81()
  goto L81_;

L18_:;
  // st prev = dx5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // prev8 = ld prev
  Rsh_Fir_reg_prev8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L86() else D29()
  // L86()
  goto L86_;

L19_:;
  // r45 = `>`(r43, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c10 then L91() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L91()
    goto L91_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L21(NULL)
  // L21(NULL)
  Rsh_Fir_reg_r47_ = Rsh_const(CCP, 9);
  goto L21_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // def23 = ld def
  Rsh_Fir_reg_def23_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L96() else D34()
  // L96()
  goto L96_;

L23_:;
  // st `.classTable` = dx7
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return def28
  return Rsh_Fir_reg_def28_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p = prom<V +>{
  //   doSubclasses1 = ld doSubclasses;
  //   doSubclasses2 = force? doSubclasses1;
  //   checkMissing(doSubclasses2);
  //   return doSubclasses2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_, CCP, RHO);
  // r1 = dyn isFALSE(p)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L25_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c then L26() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L26()
    goto L26_;
  } else {
  // L1()
    goto L1_;
  }

L26_:;
  // _recacheSubclasses = ldf `.recacheSubclasses`
  Rsh_Fir_reg__recacheSubclasses = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p1 = prom<V +>{
  //   __ = ldf `@` in base;
  //   r3 = dyn __(<sym def>, <sym className>);
  //   return r3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_1, CCP, RHO);
  // p2 = prom<V +>{
  //   def1 = ld def;
  //   def2 = force? def1;
  //   checkMissing(def2);
  //   return def2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_2, CCP, RHO);
  // p3 = prom<V +>{
  //   env1 = ld env;
  //   env2 = force? env1;
  //   checkMissing(env2);
  //   return env2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_3, CCP, RHO);
  // r7 = dyn _recacheSubclasses(p1, p2, p3)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__recacheSubclasses, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 10 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L2()
  // L2()
  goto L2_;

L30_:;
  // _classTable = ld `.classTable`
  Rsh_Fir_reg__classTable = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L31_:;
  // r9 = dyn base(<lang `<-`(prev, `[[`(.classTable, name))>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L3_;

D4_:;
  // deopt 14 [_classTable]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg__classTable;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // _classTable1 = force? _classTable
  Rsh_Fir_reg__classTable1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__classTable);
  // checkMissing(_classTable1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg__classTable1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(_classTable1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg__classTable1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c1 then L33() else L34(_classTable1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L34(_classTable1)
    Rsh_Fir_reg__classTable3_ = Rsh_Fir_reg__classTable1_;
    goto L34_;
  }

L33_:;
  // dr = tryDispatchBuiltin.1("[[", _classTable1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg__classTable1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L35() else L34(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr)
    Rsh_Fir_reg__classTable3_ = Rsh_Fir_reg_dr;
    goto L34_;
  }

L34_:;
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

L35_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D5_:;
  // deopt 16 [_classTable3, name1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg__classTable3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L36_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r11 = dyn __1(_classTable3, name2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg__classTable3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_name2_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L4_;

L37_:;
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r13 = dyn __2(<sym def>, <sym package>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // st newpkg = r13
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p4 = prom<V +>{
  //   prev = ld prev;
  //   prev1 = force? prev;
  //   checkMissing(prev1);
  //   return prev1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_4, CCP, RHO);
  // r15 = dyn is(p4, "classRepresentation")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

D7_:;
  // deopt 29 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L39_:;
  // c4 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c4 then L40() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L40()
    goto L40_;
  } else {
  // L6()
    goto L6_;
  }

L40_:;
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // prev2 = ld prev
  Rsh_Fir_reg_prev2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

L42_:;
  // r16 = dyn base1(<sym prev>, <sym def>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L7_;

D8_:;
  // deopt 32 [prev2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_prev2_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L43_:;
  // prev3 = force? prev2
  Rsh_Fir_reg_prev3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev2_);
  // checkMissing(prev3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_prev3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // def3 = ld def
  Rsh_Fir_reg_def3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

D9_:;
  // deopt 34 [def3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_def3_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L44_:;
  // def4 = force? def3
  Rsh_Fir_reg_def4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def3_);
  // checkMissing(def4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_def4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r18 = dyn identical(prev3, def4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args35[9];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_prev3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_def4_;
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[4] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args35[7] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[8] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[9];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

D10_:;
  // deopt 44 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L7_;

L46_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 9);

L49_:;
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

L50_:;
  // r22 = dyn base2(<sym pkg>, <sym newpkg>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L10_;

D11_:;
  // deopt 55 [pkg]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_pkg;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // newpkg = ld newpkg
  Rsh_Fir_reg_newpkg = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

D12_:;
  // deopt 57 [newpkg]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_newpkg;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L52_:;
  // newpkg1 = force? newpkg
  Rsh_Fir_reg_newpkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg);
  // checkMissing(newpkg1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_newpkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r24 = dyn identical1(pkg1, newpkg1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args39[9];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_newpkg1_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args39[7] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args39[8] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[9];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

D13_:;
  // deopt 67 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L10_;

L54_:;
  // sym3 = ldf `.cache_class`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf `.cache_class` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard3 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

L56_:;
  // r25 = dyn base3(<sym name>, <lang .extendsForS3(def)>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12()
  // L12()
  goto L12_;

D14_:;
  // deopt 70 [name3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_name3_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L57_:;
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // _extendsForS3 = ldf `.extendsForS3`
  Rsh_Fir_reg__extendsForS3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

D15_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p5 = prom<V +>{
  //   def5 = ld def;
  //   def6 = force? def5;
  //   checkMissing(def6);
  //   return def6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_5, CCP, RHO);
  // r28 = dyn _extendsForS3(p5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__extendsForS3_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

D16_:;
  // deopt 75 [r28]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // _cache_class = ldf `.cache_class` in base
  Rsh_Fir_reg__cache_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r29 = dyn _cache_class(name4, r28)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_name4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cache_class, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 77 [r29]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L12()
  // L12()
  goto L12_;

D18_:;
  // deopt 78 [def7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_def7_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L61_:;
  // def8 = force? def7
  Rsh_Fir_reg_def8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def7_);
  // checkMissing(def8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_def8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // l = ld `.classTable`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c7 = `is.object`(l)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c7 then L62() else L63(def8, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L62()
    goto L62_;
  } else {
  // L63(def8, l)
    Rsh_Fir_reg_def10_ = Rsh_Fir_reg_def8_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L63_;
  }

L62_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l, def8)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_def8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L64() else L63(def8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L64()
    goto L64_;
  } else {
  // L63(def8, dr2)
    Rsh_Fir_reg_def10_ = Rsh_Fir_reg_def8_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L63_;
  }

L63_:;
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L64_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L13(def8, dx2)
  // L13(def8, dx2)
  Rsh_Fir_reg_def12_ = Rsh_Fir_reg_def8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L13_;

D19_:;
  // deopt 81 [def10, l2, def8, name5]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_def10_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_def8_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_name5_;
  Rsh_Fir_deopt(81, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r30 = dyn ____(l2, def8, name6)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_def8_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_name6_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(def10, r30)
  // L13(def10, r30)
  Rsh_Fir_reg_def12_ = Rsh_Fir_reg_def10_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r30_;
  goto L13_;

D20_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // p6 = prom<V +>{
  //   def13 = ld def;
  //   def14 = force? def13;
  //   checkMissing(def14);
  //   return def14;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_6, CCP, RHO);
  // p7 = prom<V +>{
  //   prev4 = ld prev;
  //   prev5 = force? prev4;
  //   checkMissing(prev5);
  //   return prev5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2847264104_7, CCP, RHO);
  // r35 = dyn _simpleDuplicateClass(p6, p7)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__simpleDuplicateClass, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

D21_:;
  // deopt 90 [r35]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L69_:;
  // c8 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c8 then L70() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L70()
    goto L70_;
  } else {
  // L15()
    goto L15_;
  }

L70_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 9);

L73_:;
  // prev6 = ld prev
  Rsh_Fir_reg_prev6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L75() else D22()
  // L75()
  goto L75_;

L74_:;
  // r37 = dyn base4(<sym prev>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r37)
  // L16(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L16_;

D22_:;
  // deopt 98 [prev6]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_prev6_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L75_:;
  // prev7 = force? prev6
  Rsh_Fir_reg_prev7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev6_);
  // checkMissing(prev7)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_prev7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r39 = dyn list(prev7)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_prev7_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L76() else D23()
  // L76()
  goto L76_;

D23_:;
  // deopt 101 [r39]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L16(r39)
  // L16(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L16_;

D24_:;
  // deopt 103 [pkg2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_pkg2_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L77_:;
  // pkg3 = force? pkg2
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg2_);
  // checkMissing(pkg3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_pkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // l3 = ld prev
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L78() else D25()
  // L78()
  goto L78_;

D25_:;
  // deopt 106 [pkg3, l3, pkg3]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_deopt(106, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L78_:;
  // r40 = dyn names__(l3, NULL, pkg3)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_pkg3_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L79() else D26()
  // L79()
  goto L79_;

D26_:;
  // deopt 108 [pkg3, r40]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L79_:;
  // st prev = r40
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L17()
  // L17()
  goto L17_;

D27_:;
  // deopt 112 [def15]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_def15_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // def16 = force? def15
  Rsh_Fir_reg_def16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def15_);
  // checkMissing(def16)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_def16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // l4 = ld prev
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c9 = `is.object`(l4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c9 then L82() else L83(def16, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L82()
    goto L82_;
  } else {
  // L83(def16, l4)
    Rsh_Fir_reg_def18_ = Rsh_Fir_reg_def16_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L83_;
  }

L82_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l4, def16)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_def16_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args63);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc2 then L84() else L83(def16, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L84()
    goto L84_;
  } else {
  // L83(def16, dr4)
    Rsh_Fir_reg_def18_ = Rsh_Fir_reg_def16_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L83_;
  }

L83_:;
  // newpkg2 = ld newpkg
  Rsh_Fir_reg_newpkg2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L85() else D28()
  // L85()
  goto L85_;

L84_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L18(dx4)
  // L18(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L18_;

D28_:;
  // deopt 115 [def18, l6, def16, newpkg2]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_def18_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_def16_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_newpkg2_;
  Rsh_Fir_deopt(115, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L85_:;
  // newpkg3 = force? newpkg2
  Rsh_Fir_reg_newpkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg2_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r41 = dyn ____1(l6, def16, newpkg3)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_def16_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_newpkg3_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L18(r41)
  // L18(r41)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r41_;
  goto L18_;

D29_:;
  // deopt 119 [prev8]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_prev8_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L86_:;
  // prev9 = force? prev8
  Rsh_Fir_reg_prev9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev8_);
  // checkMissing(prev9)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_prev9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // st def = prev9
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_prev9_, RHO);
  (void)(Rsh_Fir_reg_prev9_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard5 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L87_:;
  // def21 = ld def
  Rsh_Fir_reg_def21_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L89() else D30()
  // L89()
  goto L89_;

L88_:;
  // r42 = dyn base5(<sym def>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L19(r42)
  // L19(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L19_;

D30_:;
  // deopt 124 [def21]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_def21_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L89_:;
  // def22 = force? def21
  Rsh_Fir_reg_def22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def21_);
  // checkMissing(def22)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_def22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r44 = dyn length(def22)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_def22_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L90() else D31()
  // L90()
  goto L90_;

D31_:;
  // deopt 127 [r44]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L19(r44)
  // L19(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L19_;

L91_:;
  // _duplicateClassesExist = ldf `.duplicateClassesExist`
  Rsh_Fir_reg__duplicateClassesExist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L92() else D32()
  // L92()
  goto L92_;

D32_:;
  // deopt 131 []
  Rsh_Fir_deopt(131, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // r46 = dyn _duplicateClassesExist(TRUE)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__duplicateClassesExist, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L93() else D33()
  // L93()
  goto L93_;

D33_:;
  // deopt 133 [r46]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L21(r46)
  // L21(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L21_;

D34_:;
  // deopt 138 [def23]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_def23_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L96_:;
  // def24 = force? def23
  Rsh_Fir_reg_def24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def23_);
  // checkMissing(def24)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_def24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // l7 = ld `.classTable`
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c11 = `is.object`(l7)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c11 then L97() else L98(def24, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L97()
    goto L97_;
  } else {
  // L98(def24, l7)
    Rsh_Fir_reg_def26_ = Rsh_Fir_reg_def24_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L98_;
  }

L97_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l7, def24)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_def24_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args75);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc3 then L99() else L98(def24, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L99()
    goto L99_;
  } else {
  // L98(def24, dr6)
    Rsh_Fir_reg_def26_ = Rsh_Fir_reg_def24_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr6_;
    goto L98_;
  }

L98_:;
  // name7 = ld name
  Rsh_Fir_reg_name7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L100() else D35()
  // L100()
  goto L100_;

L99_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L23(def24, dx6)
  // L23(def24, dx6)
  Rsh_Fir_reg_def28_ = Rsh_Fir_reg_def24_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L23_;

D35_:;
  // deopt 141 [def26, l9, def24, name7]
  SEXP Rsh_Fir_array_deopt_stack29[4];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_def26_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_def24_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_name7_;
  Rsh_Fir_deopt(141, 4, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L100_:;
  // name8 = force? name7
  Rsh_Fir_reg_name8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name7_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r49 = dyn ____2(l9, def24, name8)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_def24_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_name8_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L23(def26, r49)
  // L23(def26, r49)
  Rsh_Fir_reg_def28_ = Rsh_Fir_reg_def26_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r49_;
  goto L23_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_(SEXP CCP, SEXP RHO) {
  // doSubclasses1 = ld doSubclasses
  Rsh_Fir_reg_doSubclasses1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // doSubclasses2 = force? doSubclasses1
  Rsh_Fir_reg_doSubclasses2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_doSubclasses1_);
  // checkMissing(doSubclasses2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_doSubclasses2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return doSubclasses2
  return Rsh_Fir_reg_doSubclasses2_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_1(SEXP CCP, SEXP RHO) {
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r3 = dyn __(<sym def>, <sym className>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_2(SEXP CCP, SEXP RHO) {
  // def1 = ld def
  Rsh_Fir_reg_def1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // def2 = force? def1
  Rsh_Fir_reg_def2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def1_);
  // checkMissing(def2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_def2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return def2
  return Rsh_Fir_reg_def2_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_3(SEXP CCP, SEXP RHO) {
  // env1 = ld env
  Rsh_Fir_reg_env1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // env2 = force? env1
  Rsh_Fir_reg_env2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env1_);
  // checkMissing(env2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_env2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return env2
  return Rsh_Fir_reg_env2_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_4(SEXP CCP, SEXP RHO) {
  // prev = ld prev
  Rsh_Fir_reg_prev = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // prev1 = force? prev
  Rsh_Fir_reg_prev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev);
  // checkMissing(prev1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_prev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return prev1
  return Rsh_Fir_reg_prev1_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_5(SEXP CCP, SEXP RHO) {
  // def5 = ld def
  Rsh_Fir_reg_def5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // def6 = force? def5
  Rsh_Fir_reg_def6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def5_);
  // checkMissing(def6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_def6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return def6
  return Rsh_Fir_reg_def6_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_6(SEXP CCP, SEXP RHO) {
  // def13 = ld def
  Rsh_Fir_reg_def13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // def14 = force? def13
  Rsh_Fir_reg_def14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def13_);
  // checkMissing(def14)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_def14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return def14
  return Rsh_Fir_reg_def14_;
}
SEXP Rsh_Fir_user_promise_inner2847264104_7(SEXP CCP, SEXP RHO) {
  // prev4 = ld prev
  Rsh_Fir_reg_prev4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // prev5 = force? prev4
  Rsh_Fir_reg_prev5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev4_);
  // checkMissing(prev5)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_prev5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return prev5
  return Rsh_Fir_reg_prev5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
