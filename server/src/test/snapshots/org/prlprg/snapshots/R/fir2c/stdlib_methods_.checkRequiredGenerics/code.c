#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2300815290_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2300815290_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2300815290_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2300815290_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3355313315_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3355313315_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3355313315_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3355313315_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3355313315_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3355313315_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3355313315_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2300815290
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2300815290_, RHO, CCP);
  // st `.checkRequiredGenerics` = r
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
SEXP Rsh_Fir_user_function_inner2300815290_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2300815290 dynamic dispatch ([Class, classDef, where])

  return Rsh_Fir_user_version_inner2300815290_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2300815290_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2300815290 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2300815290/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_Class;  // Class
  SEXP Rsh_Fir_reg_classDef;  // classDef
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg__methodsNamespace;  // _methodsNamespace
  SEXP Rsh_Fir_reg__methodsNamespace1_;  // _methodsNamespace1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_allNeeded;  // allNeeded
  SEXP Rsh_Fir_reg_allNeeded1_;  // allNeeded1
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_specials;  // specials
  SEXP Rsh_Fir_reg_specials1_;  // specials1
  SEXP Rsh_Fir_reg_supers;  // supers
  SEXP Rsh_Fir_reg_supers1_;  // supers1
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_needed;  // needed
  SEXP Rsh_Fir_reg_needed1_;  // needed1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_allNeeded2_;  // allNeeded2
  SEXP Rsh_Fir_reg_allNeeded3_;  // allNeeded3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_allNeeded5_;  // allNeeded5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_needed2_;  // needed2
  SEXP Rsh_Fir_reg_needed3_;  // needed3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_generics;  // generics
  SEXP Rsh_Fir_reg_generics1_;  // generics1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_exists;  // exists
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_get1_;  // get1
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_previous;  // previous
  SEXP Rsh_Fir_reg_previous1_;  // previous1
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_packages;  // packages
  SEXP Rsh_Fir_reg_packages1_;  // packages1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_previous2_;  // previous2
  SEXP Rsh_Fir_reg_previous3_;  // previous3
  SEXP Rsh_Fir_reg_generics2_;  // generics2
  SEXP Rsh_Fir_reg_generics3_;  // generics3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_packages2_;  // packages2
  SEXP Rsh_Fir_reg_packages3_;  // packages3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_gg;  // gg
  SEXP Rsh_Fir_reg_gg1_;  // gg1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r43_;  // r43

  // Bind parameters
  Rsh_Fir_reg_Class = PARAMS[0];
  Rsh_Fir_reg_classDef = PARAMS[1];
  Rsh_Fir_reg_where = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st Class = Class
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_Class, RHO);
  (void)(Rsh_Fir_reg_Class);
  // st classDef = classDef
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_classDef, RHO);
  (void)(Rsh_Fir_reg_classDef);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L0_:;
  // st supers = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L1_:;
  // st specials = r7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym2 = ldf match
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf match in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L2_:;
  // r12 = `>`(r10, 0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // st needed = r12
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L3_:;
  // c = `as.logical`(r14)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r14_;
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
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 12);

L5_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L39() else D18()
  // L39()
  goto L39_;

L6_:;
  // st previous = r29
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L7_:;
  // st packages = r32
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard6 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L8_:;
  // packages = ld packages
  Rsh_Fir_reg_packages = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L47() else D22()
  // L47()
  goto L47_;

L9_:;
  // st gg = r38
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // packages2 = ld packages
  Rsh_Fir_reg_packages2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L54() else D27()
  // L54()
  goto L54_;

L10_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r2 = dyn __(<sym classDef>, <sym contains>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r3 = dyn names(r2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r = dyn base(<lang `@`(classDef, contains)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

D1_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   _methodsNamespace = ld `.methodsNamespace`;
  //   _methodsNamespace1 = force? _methodsNamespace;
  //   checkMissing(_methodsNamespace1);
  //   return _methodsNamespace1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_, CCP, RHO);
  // r5 = dyn get[, envir](".NeedPrimitiveMethods", p)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // st allNeeded = r5
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // allNeeded = ld allNeeded
  Rsh_Fir_reg_allNeeded = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L16_:;
  // r6 = dyn base1(<sym allNeeded>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L1_;

D3_:;
  // deopt 16 [allNeeded]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_allNeeded;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // allNeeded1 = force? allNeeded
  Rsh_Fir_reg_allNeeded1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allNeeded);
  // checkMissing(allNeeded1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_allNeeded1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r8 = dyn names1(allNeeded1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_allNeeded1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

D4_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L1_;

L19_:;
  // specials = ld specials
  Rsh_Fir_reg_specials = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

L20_:;
  // r9 = dyn base2(<sym specials>, <sym supers>, 0)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L2_;

D5_:;
  // deopt 23 [specials]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_specials;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // specials1 = force? specials
  Rsh_Fir_reg_specials1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_specials);
  // checkMissing(specials1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_specials1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // supers = ld supers
  Rsh_Fir_reg_supers = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D6_:;
  // deopt 25 [supers]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_supers;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // supers1 = force? supers
  Rsh_Fir_reg_supers1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_supers);
  // checkMissing(supers1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_supers1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r11 = dyn match(specials1, supers1, 0, NULL)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_specials1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_supers1_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D7_:;
  // deopt 30 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L2_;

L24_:;
  // needed = ld needed
  Rsh_Fir_reg_needed = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

L25_:;
  // r13 = dyn base3(<sym needed>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L3_;

D8_:;
  // deopt 36 [needed]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_needed;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // needed1 = force? needed
  Rsh_Fir_reg_needed1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_needed);
  // checkMissing(needed1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_needed1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r15 = dyn any(needed1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_needed1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 39 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L3_;

L28_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p1 = prom<V +>{
  //   allNeeded2 = ld allNeeded;
  //   allNeeded3 = force? allNeeded2;
  //   checkMissing(allNeeded3);
  //   c1 = `is.object`(allNeeded3);
  //   if c1 then L1() else L2(allNeeded3);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", allNeeded3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(allNeeded5):
  //   needed2 = ld needed;
  //   needed3 = force? needed2;
  //   __1 = ldf `[` in base;
  //   r16 = dyn __1(allNeeded5, needed3);
  //   goto L0(r16);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_1, CCP, RHO);
  // r18 = dyn unique(p1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 43 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // st generics = r18
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p2 = prom<V +>{
  //   generics = ld generics;
  //   generics1 = force? generics;
  //   checkMissing(generics1);
  //   return generics1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_2, CCP, RHO);
  // p3 = prom<V +>{
  //   r20 = clos inner3355313315;
  //   return r20;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_3, CCP, RHO);
  // p4 = prom<V +>{
  //   character = ldf character;
  //   r22 = dyn character(1.0);
  //   return r22;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_4, CCP, RHO);
  // r24 = dyn vapply(p2, p3, p4)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

D13_:;
  // deopt 50 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // st packages = r24
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L33() else D14()
  // L33()
  goto L33_;

D14_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p5 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_5, CCP, RHO);
  // r26 = dyn exists[, , inherits](".requireCachedGenerics", p5, FALSE)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L34() else D15()
  // L34()
  goto L34_;

D15_:;
  // deopt 58 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L34_:;
  // c2 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c2 then L35() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L35()
    goto L35_;
  } else {
  // L5()
    goto L5_;
  }

L35_:;
  // get1 = ldf get
  Rsh_Fir_reg_get1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L36() else D16()
  // L36()
  goto L36_;

D16_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p6 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_6, CCP, RHO);
  // r28 = dyn get1(".requireCachedGenerics", p6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get1_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L37() else D17()
  // L37()
  goto L37_;

D17_:;
  // deopt 63 [r28]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L6(r28)
  // L6(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L6_;

D18_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // r30 = dyn character1()
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // check L40() else D19()
  // L40()
  goto L40_;

D19_:;
  // deopt 66 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6(r30)
  // L6(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L6_;

L41_:;
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard5 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L42_:;
  // r31 = dyn base4(<lang attr(previous, "package")>, <sym packages>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L7(r31)
  // L7(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L7_;

L43_:;
  // previous = ld previous
  Rsh_Fir_reg_previous = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L45() else D20()
  // L45()
  goto L45_;

L44_:;
  // r33 = dyn base5(<sym previous>, "package")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r33)
  // L8(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L8_;

D20_:;
  // deopt 72 [previous]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_previous;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L45_:;
  // previous1 = force? previous
  Rsh_Fir_reg_previous1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_previous);
  // checkMissing(previous1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_previous1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r35 = dyn attr(previous1, "package")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_previous1_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L46() else D21()
  // L46()
  goto L46_;

D21_:;
  // deopt 76 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L8(r35)
  // L8(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L8_;

D22_:;
  // deopt 77 [packages]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_packages;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L47_:;
  // packages1 = force? packages
  Rsh_Fir_reg_packages1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packages);
  // checkMissing(packages1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_packages1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r36 = dyn c3(r34, packages1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_packages1_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L48() else D23()
  // L48()
  goto L48_;

D23_:;
  // deopt 80 [r36]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L7(r36)
  // L7(r36)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r36_;
  goto L7_;

L49_:;
  // previous2 = ld previous
  Rsh_Fir_reg_previous2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L51() else D24()
  // L51()
  goto L51_;

L50_:;
  // r37 = dyn base6(<sym previous>, <sym generics>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L9(r37)
  // L9(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L9_;

D24_:;
  // deopt 84 [previous2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_previous2_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L51_:;
  // previous3 = force? previous2
  Rsh_Fir_reg_previous3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_previous2_);
  // checkMissing(previous3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_previous3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // generics2 = ld generics
  Rsh_Fir_reg_generics2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L52() else D25()
  // L52()
  goto L52_;

D25_:;
  // deopt 86 [generics2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_generics2_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L52_:;
  // generics3 = force? generics2
  Rsh_Fir_reg_generics3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generics2_);
  // checkMissing(generics3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_generics3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r39 = dyn c4(previous3, generics3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_previous3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_generics3_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L53() else D26()
  // L53()
  goto L53_;

D26_:;
  // deopt 89 [r39]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L9(r39)
  // L9(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L9_;

D27_:;
  // deopt 91 [packages2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_packages2_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L54_:;
  // packages3 = force? packages2
  Rsh_Fir_reg_packages3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packages2_);
  // checkMissing(packages3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_packages3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // l = ld gg
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L55() else D28()
  // L55()
  goto L55_;

D28_:;
  // deopt 94 [packages3, l, packages3]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_packages3_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_packages3_;
  Rsh_Fir_deopt(94, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L55_:;
  // r40 = dyn attr__(l, NULL, "package", packages3)
  SEXP Rsh_Fir_array_args50[4];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args50[3] = Rsh_Fir_reg_packages3_;
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L56() else D29()
  // L56()
  goto L56_;

D29_:;
  // deopt 97 [packages3, r40]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_packages3_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L56_:;
  // st gg = r40
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L57() else D30()
  // L57()
  goto L57_;

D30_:;
  // deopt 100 []
  Rsh_Fir_deopt(100, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p7 = prom<V +>{
  //   gg = ld gg;
  //   gg1 = force? gg;
  //   checkMissing(gg1);
  //   return gg1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_7, CCP, RHO);
  // p8 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2300815290_8, CCP, RHO);
  // r43 = dyn assign(".requireCachedGenerics", p7, p8)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L58() else D31()
  // L58()
  goto L58_;

D31_:;
  // deopt 104 [r43]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L58_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r43
  return Rsh_Fir_reg_r43_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_(SEXP CCP, SEXP RHO) {
  // _methodsNamespace = ld `.methodsNamespace`
  Rsh_Fir_reg__methodsNamespace = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // _methodsNamespace1 = force? _methodsNamespace
  Rsh_Fir_reg__methodsNamespace1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__methodsNamespace);
  // checkMissing(_methodsNamespace1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg__methodsNamespace1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return _methodsNamespace1
  return Rsh_Fir_reg__methodsNamespace1_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_1(SEXP CCP, SEXP RHO) {
  // allNeeded2 = ld allNeeded
  Rsh_Fir_reg_allNeeded2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // allNeeded3 = force? allNeeded2
  Rsh_Fir_reg_allNeeded3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allNeeded2_);
  // checkMissing(allNeeded3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_allNeeded3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(allNeeded3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_allNeeded3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(allNeeded3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(allNeeded3)
    Rsh_Fir_reg_allNeeded5_ = Rsh_Fir_reg_allNeeded3_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", allNeeded3)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_allNeeded3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_allNeeded5_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // needed2 = ld needed
  Rsh_Fir_reg_needed2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // needed3 = force? needed2
  Rsh_Fir_reg_needed3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_needed2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r16 = dyn __1(allNeeded5, needed3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_allNeeded5_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_needed3_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_2(SEXP CCP, SEXP RHO) {
  // generics = ld generics
  Rsh_Fir_reg_generics = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // generics1 = force? generics
  Rsh_Fir_reg_generics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generics);
  // checkMissing(generics1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_generics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return generics1
  return Rsh_Fir_reg_generics1_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_3(SEXP CCP, SEXP RHO) {
  // r20 = clos inner3355313315
  Rsh_Fir_reg_r20_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3355313315_, RHO, CCP);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_4(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r22 = dyn character(1.0)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_5(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_6(SEXP CCP, SEXP RHO) {
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_7(SEXP CCP, SEXP RHO) {
  // gg = ld gg
  Rsh_Fir_reg_gg = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // gg1 = force? gg
  Rsh_Fir_reg_gg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gg);
  // checkMissing(gg1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_gg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return gg1
  return Rsh_Fir_reg_gg1_;
}
SEXP Rsh_Fir_user_promise_inner2300815290_8(SEXP CCP, SEXP RHO) {
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_user_function_inner3355313315_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3355313315 dynamic dispatch ([g])

  return Rsh_Fir_user_version_inner3355313315_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3355313315_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3355313315 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3355313315/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_g;  // g
  SEXP Rsh_Fir_reg_getGeneric;  // getGeneric
  SEXP Rsh_Fir_reg_g1_;  // g1
  SEXP Rsh_Fir_reg_g2_;  // g2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_cacheGenericsMetaData;  // cacheGenericsMetaData
  SEXP Rsh_Fir_reg_g3_;  // g3
  SEXP Rsh_Fir_reg_g4_;  // g4
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_where1;  // where
  SEXP Rsh_Fir_reg_where1_1;  // where1
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_p4_1;  // p4
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3

  // Bind parameters
  Rsh_Fir_reg_g = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st g = g
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_g, RHO);
  (void)(Rsh_Fir_reg_g);
  // getGeneric = ldf getGeneric
  Rsh_Fir_reg_getGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   g1 = ld g;
  //   g2 = force? g1;
  //   checkMissing(g2);
  //   return g2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3355313315_, CCP, RHO);
  // r1 = dyn getGeneric(p)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGeneric, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L1_:;
  // st def = r1
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // __ = ldf `@` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r2 = dyn __(<sym def>, <sym package>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names25, CCP, RHO);
  // st pkg = r2
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r2_1, RHO);
  (void)(Rsh_Fir_reg_r2_1);
  // cacheGenericsMetaData = ldf cacheGenericsMetaData
  Rsh_Fir_reg_cacheGenericsMetaData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   g3 = ld g;
  //   g4 = force? g3;
  //   checkMissing(g4);
  //   return g4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3355313315_1, CCP, RHO);
  // p2 = prom<V +>{
  //   def = ld def;
  //   def1 = force? def;
  //   checkMissing(def1);
  //   return def1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3355313315_2, CCP, RHO);
  // p3 = prom<V +>{
  //   where = ld where;
  //   where1 = force? where;
  //   checkMissing(where1);
  //   return where1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3355313315_3, CCP, RHO);
  // p4 = prom<V +>{
  //   pkg = ld pkg;
  //   pkg1 = force? pkg;
  //   checkMissing(pkg1);
  //   return pkg1;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3355313315_4, CCP, RHO);
  // r7 = dyn cacheGenericsMetaData(p1, p2, TRUE, p3, p4)
  SEXP Rsh_Fir_array_args61[5];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args61[3] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args61[4] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cacheGenericsMetaData, 5, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L3_:;
  // pkg2 = ld pkg
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 [pkg2]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_pkg2_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L4_:;
  // pkg3 = force? pkg2
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg2_);
  // checkMissing(pkg3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_pkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return pkg3
  return Rsh_Fir_reg_pkg3_;
}
SEXP Rsh_Fir_user_promise_inner3355313315_(SEXP CCP, SEXP RHO) {
  // g1 = ld g
  Rsh_Fir_reg_g1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // g2 = force? g1
  Rsh_Fir_reg_g2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_g1_);
  // checkMissing(g2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_g2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return g2
  return Rsh_Fir_reg_g2_;
}
SEXP Rsh_Fir_user_promise_inner3355313315_1(SEXP CCP, SEXP RHO) {
  // g3 = ld g
  Rsh_Fir_reg_g3_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // g4 = force? g3
  Rsh_Fir_reg_g4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_g3_);
  // checkMissing(g4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_g4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return g4
  return Rsh_Fir_reg_g4_;
}
SEXP Rsh_Fir_user_promise_inner3355313315_2(SEXP CCP, SEXP RHO) {
  // def = ld def
  Rsh_Fir_reg_def = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // def1 = force? def
  Rsh_Fir_reg_def1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def);
  // checkMissing(def1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_def1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return def1
  return Rsh_Fir_reg_def1_;
}
SEXP Rsh_Fir_user_promise_inner3355313315_3(SEXP CCP, SEXP RHO) {
  // where = ld where
  Rsh_Fir_reg_where1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // where1 = force? where
  Rsh_Fir_reg_where1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1);
  // checkMissing(where1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_where1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return where1
  return Rsh_Fir_reg_where1_1;
}
SEXP Rsh_Fir_user_promise_inner3355313315_4(SEXP CCP, SEXP RHO) {
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return pkg1
  return Rsh_Fir_reg_pkg1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
