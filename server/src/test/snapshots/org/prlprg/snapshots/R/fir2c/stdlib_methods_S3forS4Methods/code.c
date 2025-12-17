#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner910318498_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner910318498_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner910318498_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner910318498_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner910318498
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner910318498_, RHO, CCP);
  // st S3forS4Methods = r
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
SEXP Rsh_Fir_user_function_inner910318498_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner910318498 dynamic dispatch ([where, checkClasses])

  return Rsh_Fir_user_version_inner910318498_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner910318498_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner910318498 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner910318498/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_checkClasses;  // checkClasses
  SEXP Rsh_Fir_reg_checkClasses_isMissing;  // checkClasses_isMissing
  SEXP Rsh_Fir_reg_checkClasses_orDefault;  // checkClasses_orDefault
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_getClasses;  // getClasses
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_checkClasses1_;  // checkClasses1
  SEXP Rsh_Fir_reg_checkClasses2_;  // checkClasses2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_allClasses;  // allClasses
  SEXP Rsh_Fir_reg_allClasses1_;  // allClasses1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_allClasses3_;  // allClasses3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_allClasses6_;  // allClasses6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_allClasses7_;  // allClasses7
  SEXP Rsh_Fir_reg_allClasses8_;  // allClasses8
  SEXP Rsh_Fir_reg_checkClasses3_;  // checkClasses3
  SEXP Rsh_Fir_reg_checkClasses4_;  // checkClasses4
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_allClasses9_;  // allClasses9
  SEXP Rsh_Fir_reg_allClasses10_;  // allClasses10
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_allClasses11_;  // allClasses11
  SEXP Rsh_Fir_reg_allClasses12_;  // allClasses12
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_allClasses13_;  // allClasses13
  SEXP Rsh_Fir_reg_allClasses14_;  // allClasses14
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_allObjects;  // allObjects
  SEXP Rsh_Fir_reg_allObjects1_;  // allObjects1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_allObjects3_;  // allObjects3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_allObjects4_;  // allObjects4
  SEXP Rsh_Fir_reg_allObjects5_;  // allObjects5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_grep1_;  // grep1
  SEXP Rsh_Fir_reg_pattern;  // pattern
  SEXP Rsh_Fir_reg_pattern1_;  // pattern1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_allObjects6_;  // allObjects6
  SEXP Rsh_Fir_reg_allObjects7_;  // allObjects7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_allObjects8_;  // allObjects8
  SEXP Rsh_Fir_reg_allObjects9_;  // allObjects9
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_allObjects10_;  // allObjects10
  SEXP Rsh_Fir_reg_allObjects11_;  // allObjects11
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_pattern2_;  // pattern2
  SEXP Rsh_Fir_reg_pattern3_;  // pattern3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_badMethods;  // badMethods
  SEXP Rsh_Fir_reg_badMethods1_;  // badMethods1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_funs;  // funs
  SEXP Rsh_Fir_reg_funs1_;  // funs1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_uniqueFuns;  // uniqueFuns
  SEXP Rsh_Fir_reg_uniqueFuns1_;  // uniqueFuns1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_uniqueFuns3_;  // uniqueFuns3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_uniqueFuns6_;  // uniqueFuns6
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_uniqueFuns7_;  // uniqueFuns7
  SEXP Rsh_Fir_reg_uniqueFuns8_;  // uniqueFuns8
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg__checkGeneric;  // _checkGeneric
  SEXP Rsh_Fir_reg_uniqueFuns9_;  // uniqueFuns9
  SEXP Rsh_Fir_reg_uniqueFuns10_;  // uniqueFuns10
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_possible;  // possible
  SEXP Rsh_Fir_reg_possible1_;  // possible1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_uniqueFuns11_;  // uniqueFuns11
  SEXP Rsh_Fir_reg_uniqueFuns12_;  // uniqueFuns12
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_uniqueFuns14_;  // uniqueFuns14
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_possible2_;  // possible2
  SEXP Rsh_Fir_reg_possible3_;  // possible3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_badMethods2_;  // badMethods2
  SEXP Rsh_Fir_reg_badMethods3_;  // badMethods3
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_badMethods5_;  // badMethods5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_badMethods8_;  // badMethods8
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_funs2_;  // funs2
  SEXP Rsh_Fir_reg_funs3_;  // funs3
  SEXP Rsh_Fir_reg_uniqueFuns15_;  // uniqueFuns15
  SEXP Rsh_Fir_reg_uniqueFuns16_;  // uniqueFuns16
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_badMethods9_;  // badMethods9
  SEXP Rsh_Fir_reg_badMethods10_;  // badMethods10
  SEXP Rsh_Fir_reg_uniqueFuns17_;  // uniqueFuns17
  SEXP Rsh_Fir_reg_uniqueFuns18_;  // uniqueFuns18
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_allObjects12_;  // allObjects12
  SEXP Rsh_Fir_reg_allObjects13_;  // allObjects13

  // Bind parameters
  Rsh_Fir_reg_where = PARAMS[0];
  Rsh_Fir_reg_checkClasses = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // checkClasses_isMissing = missing.0(checkClasses)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_checkClasses;
  Rsh_Fir_reg_checkClasses_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if checkClasses_isMissing then L0() else L1(checkClasses)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_checkClasses_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(checkClasses)
    Rsh_Fir_reg_checkClasses_orDefault = Rsh_Fir_reg_checkClasses;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   character = ldf character;
  //   r = dyn character();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_checkClasses_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st checkClasses = checkClasses_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_checkClasses_orDefault, RHO);
  (void)(Rsh_Fir_reg_checkClasses_orDefault);
  // getClasses = ldf getClasses
  Rsh_Fir_reg_getClasses = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L2_:;
  // r7 = `>`(r5, 0.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L29() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L29()
    goto L29_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L6()
  // L6()
  goto L6_;

L4_:;
  // st allClasses = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L6()
  // L6()
  goto L6_;

L5_:;
  // r11 = `>`(r9, 0.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn __(allClasses6, r11)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_allClasses6_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L4_;

L6_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L7_:;
  // r16 = `==`(r14, 0.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r16_;
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
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L10_:;
  // st allObjects = r22
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // allObjects = ld allObjects
  Rsh_Fir_reg_allObjects = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

L11_:;
  // st allObjects = dx4
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // grep1 = ldf grep
  Rsh_Fir_reg_grep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L60() else D18()
  // L60()
  goto L60_;

L12_:;
  // r34 = `>`(r32, 0.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c4 then L66() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L66()
    goto L66_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L22()
  // L22()
  goto L22_;

L14_:;
  // st uniqueFuns = dx6
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // _checkGeneric = ldf `.checkGeneric`
  Rsh_Fir_reg__checkGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L80() else D30()
  // L80()
  goto L80_;

L15_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r43 = dyn __2(uniqueFuns6, r41)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_uniqueFuns6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L14(r43)
  // L14(r43)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r43_;
  goto L14_;

L16_:;
  // r50 = `!`(r48)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c6 then L86() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L86()
    goto L86_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // uniqueFuns11 = ld uniqueFuns
  Rsh_Fir_reg_uniqueFuns11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L91() else D36()
  // L91()
  goto L91_;

L19_:;
  // st uniqueFuns = dx8
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // badMethods2 = ld badMethods
  Rsh_Fir_reg_badMethods2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L96() else D38()
  // L96()
  goto L96_;

L20_:;
  // st badMethods = dx10
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // badMethods9 = ld badMethods
  Rsh_Fir_reg_badMethods9_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L105() else D42()
  // L105()
  goto L105_;

L21_:;
  // r58 = `>`(r56, 0.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r59 = dyn __4(badMethods8, r58)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_badMethods8_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L20(r59)
  // L20(r59)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r59_;
  goto L20_;

L22_:;
  // allObjects12 = ld allObjects
  Rsh_Fir_reg_allObjects12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L110() else D46()
  // L110()
  goto L110_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p1 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_1, CCP, RHO);
  // r3 = dyn getClasses(p1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClasses, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 3 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // st allClasses = r3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // checkClasses1 = ld checkClasses
  Rsh_Fir_reg_checkClasses1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r4 = dyn base(<sym checkClasses>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D2_:;
  // deopt 7 [checkClasses1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_checkClasses1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // checkClasses2 = force? checkClasses1
  Rsh_Fir_reg_checkClasses2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_checkClasses1_);
  // checkMissing(checkClasses2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_checkClasses2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn length(checkClasses2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_checkClasses2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L29_:;
  // allClasses = ld allClasses
  Rsh_Fir_reg_allClasses = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 13 [allClasses]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_allClasses;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // allClasses1 = force? allClasses
  Rsh_Fir_reg_allClasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allClasses);
  // checkMissing(allClasses1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_allClasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(allClasses1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_allClasses1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c1 then L31() else L32(allClasses1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L32(allClasses1)
    Rsh_Fir_reg_allClasses3_ = Rsh_Fir_reg_allClasses1_;
    goto L32_;
  }

L31_:;
  // dr = tryDispatchBuiltin.1("[", allClasses1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_allClasses1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L33() else L32(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L33()
    goto L33_;
  } else {
  // L32(dr)
    Rsh_Fir_reg_allClasses3_ = Rsh_Fir_reg_dr;
    goto L32_;
  }

L32_:;
  // sym1 = ldf match
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf match in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L33_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L34_:;
  // allClasses7 = ld allClasses
  Rsh_Fir_reg_allClasses7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

L35_:;
  // r8 = dyn base1(<sym allClasses>, <sym checkClasses>, 0.0)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(allClasses3, r8)
  // L5(allClasses3, r8)
  Rsh_Fir_reg_allClasses6_ = Rsh_Fir_reg_allClasses3_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

D5_:;
  // deopt 17 [allClasses3, allClasses7]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_allClasses3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_allClasses7_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L36_:;
  // allClasses8 = force? allClasses7
  Rsh_Fir_reg_allClasses8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allClasses7_);
  // checkMissing(allClasses8)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_allClasses8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // checkClasses3 = ld checkClasses
  Rsh_Fir_reg_checkClasses3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D6()
  // L37()
  goto L37_;

D6_:;
  // deopt 19 [allClasses3, checkClasses3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_allClasses3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_checkClasses3_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // checkClasses4 = force? checkClasses3
  Rsh_Fir_reg_checkClasses4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_checkClasses3_);
  // checkMissing(checkClasses4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_checkClasses4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r10 = dyn match(allClasses8, checkClasses4, 0.0, NULL)
  SEXP Rsh_Fir_array_args30[4];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_allClasses8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_checkClasses4_;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

D7_:;
  // deopt 24 [allClasses3, r10]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_allClasses3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5(allClasses3, r10)
  // L5(allClasses3, r10)
  Rsh_Fir_reg_allClasses6_ = Rsh_Fir_reg_allClasses3_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L5_;

L40_:;
  // allClasses9 = ld allClasses
  Rsh_Fir_reg_allClasses9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L41_:;
  // r13 = dyn base2(<sym allClasses>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D8_:;
  // deopt 33 [allClasses9]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_allClasses9_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L42_:;
  // allClasses10 = force? allClasses9
  Rsh_Fir_reg_allClasses10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allClasses9_);
  // checkMissing(allClasses10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_allClasses10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r15 = dyn length1(allClasses10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_allClasses10_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

D9_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L44_:;
  // allClasses11 = ld allClasses
  Rsh_Fir_reg_allClasses11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

D10_:;
  // deopt 39 [allClasses11]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_allClasses11_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // allClasses12 = force? allClasses11
  Rsh_Fir_reg_allClasses12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allClasses11_);
  // checkMissing(allClasses12)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_allClasses12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return allClasses12
  return Rsh_Fir_reg_allClasses12_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p2 = prom<V +>{
  //   allClasses13 = ld allClasses;
  //   allClasses14 = force? allClasses13;
  //   checkMissing(allClasses14);
  //   return allClasses14;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_2, CCP, RHO);
  // r20 = dyn paste0[, , , collapse]("([.]", p2, "$)", "|")
  SEXP Rsh_Fir_array_args36[4];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 4, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

D12_:;
  // deopt 51 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // st pattern = r20
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L50_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D13()
  // L52()
  goto L52_;

L51_:;
  // r21 = dyn base3(<sym where>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L10_;

D13_:;
  // deopt 55 [where3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r23 = dyn names(where4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_where4_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

D14_:;
  // deopt 58 [r23]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L10_;

D15_:;
  // deopt 60 [allObjects]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_allObjects;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // allObjects1 = force? allObjects
  Rsh_Fir_reg_allObjects1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allObjects);
  // checkMissing(allObjects1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_allObjects1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(allObjects1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_allObjects1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c3 then L55() else L56(allObjects1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L55()
    goto L55_;
  } else {
  // L56(allObjects1)
    Rsh_Fir_reg_allObjects3_ = Rsh_Fir_reg_allObjects1_;
    goto L56_;
  }

L55_:;
  // dr2 = tryDispatchBuiltin.1("[", allObjects1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_allObjects1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc1 then L57() else L56(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L57()
    goto L57_;
  } else {
  // L56(dr2)
    Rsh_Fir_reg_allObjects3_ = Rsh_Fir_reg_dr2_;
    goto L56_;
  }

L56_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

L57_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L11(dx3)
  // L11(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L11_;

D16_:;
  // deopt 63 [allObjects3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_allObjects3_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L58_:;
  // p3 = prom<V +>{
  //   allObjects4 = ld allObjects;
  //   allObjects5 = force? allObjects4;
  //   checkMissing(allObjects5);
  //   return allObjects5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_3, CCP, RHO);
  // r25 = dyn grep("^[.][_][_]", p3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L59() else D17()
  // L59()
  goto L59_;

D17_:;
  // deopt 66 [allObjects3, r25]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_allObjects3_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L59_:;
  // r26 = `-`(<missing>, r25)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r27 = dyn __1(allObjects3, r26)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_allObjects3_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r27_;
  goto L11_;

D18_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p4 = prom<V +>{
  //   pattern = ld pattern;
  //   pattern1 = force? pattern;
  //   checkMissing(pattern1);
  //   return pattern1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_4, CCP, RHO);
  // p5 = prom<V +>{
  //   allObjects6 = ld allObjects;
  //   allObjects7 = force? allObjects6;
  //   checkMissing(allObjects7);
  //   return allObjects7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_5, CCP, RHO);
  // r30 = dyn grep1[, , value](p4, p5, TRUE)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep1_, 3, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L61() else D19()
  // L61()
  goto L61_;

D19_:;
  // deopt 76 [r30]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L61_:;
  // st allObjects = r30
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard4 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L62_:;
  // allObjects8 = ld allObjects
  Rsh_Fir_reg_allObjects8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

L63_:;
  // r31 = dyn base4(<sym allObjects>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L12_;

D20_:;
  // deopt 80 [allObjects8]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_allObjects8_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L64_:;
  // allObjects9 = force? allObjects8
  Rsh_Fir_reg_allObjects9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allObjects8_);
  // checkMissing(allObjects9)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_allObjects9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r33 = dyn length2(allObjects9)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_allObjects9_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

D21_:;
  // deopt 83 [r33]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L12_;

L66_:;
  // allObjects10 = ld allObjects
  Rsh_Fir_reg_allObjects10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L67() else D22()
  // L67()
  goto L67_;

D22_:;
  // deopt 86 [allObjects10]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_allObjects10_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L67_:;
  // allObjects11 = force? allObjects10
  Rsh_Fir_reg_allObjects11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allObjects10_);
  // checkMissing(allObjects11)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_allObjects11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // st badMethods = allObjects11
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_allObjects11_, RHO);
  (void)(Rsh_Fir_reg_allObjects11_);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L68() else D23()
  // L68()
  goto L68_;

D23_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // p6 = prom<V +>{
  //   pattern2 = ld pattern;
  //   pattern3 = force? pattern2;
  //   checkMissing(pattern3);
  //   return pattern3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_6, CCP, RHO);
  // p7 = prom<V +>{
  //   badMethods = ld badMethods;
  //   badMethods1 = force? badMethods;
  //   checkMissing(badMethods1);
  //   return badMethods1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_7, CCP, RHO);
  // r37 = dyn sub(p6, "", p7)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L69() else D24()
  // L69()
  goto L69_;

D24_:;
  // deopt 94 [r37]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L69_:;
  // st funs = r37
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L70() else D25()
  // L70()
  goto L70_;

D25_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p8 = prom<V +>{
  //   funs = ld funs;
  //   funs1 = force? funs;
  //   checkMissing(funs1);
  //   return funs1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_8, CCP, RHO);
  // r39 = dyn unique(p8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

D26_:;
  // deopt 99 [r39]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // st uniqueFuns = r39
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // uniqueFuns = ld uniqueFuns
  Rsh_Fir_reg_uniqueFuns = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

D27_:;
  // deopt 101 [uniqueFuns]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_uniqueFuns;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // uniqueFuns1 = force? uniqueFuns
  Rsh_Fir_reg_uniqueFuns1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uniqueFuns);
  // checkMissing(uniqueFuns1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_uniqueFuns1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(uniqueFuns1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_uniqueFuns1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c5 then L73() else L74(uniqueFuns1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L73()
    goto L73_;
  } else {
  // L74(uniqueFuns1)
    Rsh_Fir_reg_uniqueFuns3_ = Rsh_Fir_reg_uniqueFuns1_;
    goto L74_;
  }

L73_:;
  // dr4 = tryDispatchBuiltin.1("[", uniqueFuns1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_uniqueFuns1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc2 then L75() else L74(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L75()
    goto L75_;
  } else {
  // L74(dr4)
    Rsh_Fir_reg_uniqueFuns3_ = Rsh_Fir_reg_dr4_;
    goto L74_;
  }

L74_:;
  // sym5 = ldf nzchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base5 = ldf nzchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard5 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L75_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L14(dx5)
  // L14(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L14_;

L76_:;
  // uniqueFuns7 = ld uniqueFuns
  Rsh_Fir_reg_uniqueFuns7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L78() else D28()
  // L78()
  goto L78_;

L77_:;
  // r40 = dyn base5(<sym uniqueFuns>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L15(uniqueFuns3, r40)
  // L15(uniqueFuns3, r40)
  Rsh_Fir_reg_uniqueFuns6_ = Rsh_Fir_reg_uniqueFuns3_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L15_;

D28_:;
  // deopt 105 [uniqueFuns3, uniqueFuns7]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_uniqueFuns3_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_uniqueFuns7_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L78_:;
  // uniqueFuns8 = force? uniqueFuns7
  Rsh_Fir_reg_uniqueFuns8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uniqueFuns7_);
  // checkMissing(uniqueFuns8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_uniqueFuns8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r42 = dyn nzchar(uniqueFuns8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_uniqueFuns8_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L79() else D29()
  // L79()
  goto L79_;

D29_:;
  // deopt 108 [uniqueFuns3, r42]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_uniqueFuns3_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L15(uniqueFuns3, r42)
  // L15(uniqueFuns3, r42)
  Rsh_Fir_reg_uniqueFuns6_ = Rsh_Fir_reg_uniqueFuns3_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L15_;

D30_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p9 = prom<V +>{
  //   uniqueFuns9 = ld uniqueFuns;
  //   uniqueFuns10 = force? uniqueFuns9;
  //   checkMissing(uniqueFuns10);
  //   return uniqueFuns10;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_9, CCP, RHO);
  // p10 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner910318498_10, CCP, RHO);
  // r46 = dyn _checkGeneric(p9, p10)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__checkGeneric, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L81() else D31()
  // L81()
  goto L81_;

D31_:;
  // deopt 115 [r46]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L81_:;
  // st possible = r46
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // sym6 = ldf any
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base6 = ldf any in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard6 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L82_:;
  // possible = ld possible
  Rsh_Fir_reg_possible = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L84() else D32()
  // L84()
  goto L84_;

L83_:;
  // r47 = dyn base6(<sym possible>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L16(r47)
  // L16(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L16_;

D32_:;
  // deopt 119 [possible]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_possible;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L84_:;
  // possible1 = force? possible
  Rsh_Fir_reg_possible1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_possible);
  // checkMissing(possible1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_possible1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r49 = dyn any(possible1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_possible1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L85() else D33()
  // L85()
  goto L85_;

D33_:;
  // deopt 122 [r49]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L16(r49)
  // L16(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L16_;

L86_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L87() else D34()
  // L87()
  goto L87_;

D34_:;
  // deopt 125 []
  Rsh_Fir_deopt(125, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // r51 = dyn character1()
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // check L88() else D35()
  // L88()
  goto L88_;

D35_:;
  // deopt 126 [r51]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L88_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r51
  return Rsh_Fir_reg_r51_;

D36_:;
  // deopt 130 [uniqueFuns11]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_uniqueFuns11_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L91_:;
  // uniqueFuns12 = force? uniqueFuns11
  Rsh_Fir_reg_uniqueFuns12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uniqueFuns11_);
  // checkMissing(uniqueFuns12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_uniqueFuns12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(uniqueFuns12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_uniqueFuns12_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c7 then L92() else L93(uniqueFuns12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L92()
    goto L92_;
  } else {
  // L93(uniqueFuns12)
    Rsh_Fir_reg_uniqueFuns14_ = Rsh_Fir_reg_uniqueFuns12_;
    goto L93_;
  }

L92_:;
  // dr6 = tryDispatchBuiltin.1("[", uniqueFuns12)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_uniqueFuns12_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc3 then L94() else L93(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L94()
    goto L94_;
  } else {
  // L93(dr6)
    Rsh_Fir_reg_uniqueFuns14_ = Rsh_Fir_reg_dr6_;
    goto L93_;
  }

L93_:;
  // possible2 = ld possible
  Rsh_Fir_reg_possible2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L95() else D37()
  // L95()
  goto L95_;

L94_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L19(dx7)
  // L19(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L19_;

D37_:;
  // deopt 132 [uniqueFuns14, possible2]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_uniqueFuns14_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_possible2_;
  Rsh_Fir_deopt(132, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L95_:;
  // possible3 = force? possible2
  Rsh_Fir_reg_possible3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_possible2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r54 = dyn __3(uniqueFuns14, possible3)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_uniqueFuns14_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_possible3_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L19(r54)
  // L19(r54)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r54_;
  goto L19_;

D38_:;
  // deopt 136 [badMethods2]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_badMethods2_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L96_:;
  // badMethods3 = force? badMethods2
  Rsh_Fir_reg_badMethods3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_badMethods2_);
  // checkMissing(badMethods3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_badMethods3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(badMethods3)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_badMethods3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c8 then L97() else L98(badMethods3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L97()
    goto L97_;
  } else {
  // L98(badMethods3)
    Rsh_Fir_reg_badMethods5_ = Rsh_Fir_reg_badMethods3_;
    goto L98_;
  }

L97_:;
  // dr8 = tryDispatchBuiltin.1("[", badMethods3)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_badMethods3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc4 then L99() else L98(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L99()
    goto L99_;
  } else {
  // L98(dr8)
    Rsh_Fir_reg_badMethods5_ = Rsh_Fir_reg_dr8_;
    goto L98_;
  }

L98_:;
  // sym7 = ldf match
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base7 = ldf match in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard7 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L99_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L20(dx9)
  // L20(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L20_;

L100_:;
  // funs2 = ld funs
  Rsh_Fir_reg_funs2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L102() else D39()
  // L102()
  goto L102_;

L101_:;
  // r55 = dyn base7(<sym funs>, <sym uniqueFuns>, 0.0)
  SEXP Rsh_Fir_array_args91[3];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args91[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L21(badMethods5, r55)
  // L21(badMethods5, r55)
  Rsh_Fir_reg_badMethods8_ = Rsh_Fir_reg_badMethods5_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L21_;

D39_:;
  // deopt 140 [badMethods5, funs2]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_badMethods5_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_funs2_;
  Rsh_Fir_deopt(140, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L102_:;
  // funs3 = force? funs2
  Rsh_Fir_reg_funs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs2_);
  // checkMissing(funs3)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_funs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // uniqueFuns15 = ld uniqueFuns
  Rsh_Fir_reg_uniqueFuns15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L103() else D40()
  // L103()
  goto L103_;

D40_:;
  // deopt 142 [badMethods5, uniqueFuns15]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_badMethods5_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_uniqueFuns15_;
  Rsh_Fir_deopt(142, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L103_:;
  // uniqueFuns16 = force? uniqueFuns15
  Rsh_Fir_reg_uniqueFuns16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uniqueFuns15_);
  // checkMissing(uniqueFuns16)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_uniqueFuns16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r57 = dyn match1(funs3, uniqueFuns16, 0.0, NULL)
  SEXP Rsh_Fir_array_args94[4];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_funs3_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_uniqueFuns16_;
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args94[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L104() else D41()
  // L104()
  goto L104_;

D41_:;
  // deopt 147 [badMethods5, r57]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_badMethods5_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L21(badMethods5, r57)
  // L21(badMethods5, r57)
  Rsh_Fir_reg_badMethods8_ = Rsh_Fir_reg_badMethods5_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L21_;

D42_:;
  // deopt 152 [badMethods9]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_badMethods9_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L105_:;
  // badMethods10 = force? badMethods9
  Rsh_Fir_reg_badMethods10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_badMethods9_);
  // checkMissing(badMethods10)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_badMethods10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // st allObjects = badMethods10
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_badMethods10_, RHO);
  (void)(Rsh_Fir_reg_badMethods10_);
  // uniqueFuns17 = ld uniqueFuns
  Rsh_Fir_reg_uniqueFuns17_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L106() else D43()
  // L106()
  goto L106_;

D43_:;
  // deopt 155 [uniqueFuns17]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_uniqueFuns17_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L106_:;
  // uniqueFuns18 = force? uniqueFuns17
  Rsh_Fir_reg_uniqueFuns18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uniqueFuns17_);
  // checkMissing(uniqueFuns18)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_uniqueFuns18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // l = ld allObjects
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L107() else D44()
  // L107()
  goto L107_;

D44_:;
  // deopt 158 [uniqueFuns18, l, uniqueFuns18]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_uniqueFuns18_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_uniqueFuns18_;
  Rsh_Fir_deopt(158, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L107_:;
  // r60 = dyn attr__(l, NULL, "functions", uniqueFuns18)
  SEXP Rsh_Fir_array_args97[4];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args97[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args97[3] = Rsh_Fir_reg_uniqueFuns18_;
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L108() else D45()
  // L108()
  goto L108_;

D45_:;
  // deopt 161 [uniqueFuns18, r60]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_uniqueFuns18_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(161, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L108_:;
  // st allObjects = r60
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // goto L22()
  // L22()
  goto L22_;

D46_:;
  // deopt 165 [allObjects12]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_allObjects12_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L110_:;
  // allObjects13 = force? allObjects12
  Rsh_Fir_reg_allObjects13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allObjects12_);
  // checkMissing(allObjects13)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_allObjects13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return allObjects13
  return Rsh_Fir_reg_allObjects13_;
}
SEXP Rsh_Fir_user_promise_inner910318498_(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner910318498_1(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner910318498_2(SEXP CCP, SEXP RHO) {
  // allClasses13 = ld allClasses
  Rsh_Fir_reg_allClasses13_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // allClasses14 = force? allClasses13
  Rsh_Fir_reg_allClasses14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allClasses13_);
  // checkMissing(allClasses14)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_allClasses14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return allClasses14
  return Rsh_Fir_reg_allClasses14_;
}
SEXP Rsh_Fir_user_promise_inner910318498_3(SEXP CCP, SEXP RHO) {
  // allObjects4 = ld allObjects
  Rsh_Fir_reg_allObjects4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // allObjects5 = force? allObjects4
  Rsh_Fir_reg_allObjects5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allObjects4_);
  // checkMissing(allObjects5)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_allObjects5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return allObjects5
  return Rsh_Fir_reg_allObjects5_;
}
SEXP Rsh_Fir_user_promise_inner910318498_4(SEXP CCP, SEXP RHO) {
  // pattern = ld pattern
  Rsh_Fir_reg_pattern = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // pattern1 = force? pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern);
  // checkMissing(pattern1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_pattern1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return pattern1
  return Rsh_Fir_reg_pattern1_;
}
SEXP Rsh_Fir_user_promise_inner910318498_5(SEXP CCP, SEXP RHO) {
  // allObjects6 = ld allObjects
  Rsh_Fir_reg_allObjects6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // allObjects7 = force? allObjects6
  Rsh_Fir_reg_allObjects7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allObjects6_);
  // checkMissing(allObjects7)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_allObjects7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return allObjects7
  return Rsh_Fir_reg_allObjects7_;
}
SEXP Rsh_Fir_user_promise_inner910318498_6(SEXP CCP, SEXP RHO) {
  // pattern2 = ld pattern
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // pattern3 = force? pattern2
  Rsh_Fir_reg_pattern3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern2_);
  // checkMissing(pattern3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_pattern3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return pattern3
  return Rsh_Fir_reg_pattern3_;
}
SEXP Rsh_Fir_user_promise_inner910318498_7(SEXP CCP, SEXP RHO) {
  // badMethods = ld badMethods
  Rsh_Fir_reg_badMethods = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // badMethods1 = force? badMethods
  Rsh_Fir_reg_badMethods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_badMethods);
  // checkMissing(badMethods1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_badMethods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return badMethods1
  return Rsh_Fir_reg_badMethods1_;
}
SEXP Rsh_Fir_user_promise_inner910318498_8(SEXP CCP, SEXP RHO) {
  // funs = ld funs
  Rsh_Fir_reg_funs = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // funs1 = force? funs
  Rsh_Fir_reg_funs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs);
  // checkMissing(funs1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_funs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return funs1
  return Rsh_Fir_reg_funs1_;
}
SEXP Rsh_Fir_user_promise_inner910318498_9(SEXP CCP, SEXP RHO) {
  // uniqueFuns9 = ld uniqueFuns
  Rsh_Fir_reg_uniqueFuns9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // uniqueFuns10 = force? uniqueFuns9
  Rsh_Fir_reg_uniqueFuns10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uniqueFuns9_);
  // checkMissing(uniqueFuns10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_uniqueFuns10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return uniqueFuns10
  return Rsh_Fir_reg_uniqueFuns10_;
}
SEXP Rsh_Fir_user_promise_inner910318498_10(SEXP CCP, SEXP RHO) {
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
