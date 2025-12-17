#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2656251490_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2656251490_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2656251490_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2656251490_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner2656251490
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2656251490_, RHO, CCP);
  // st `.uncacheClass` = r
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
SEXP Rsh_Fir_user_function_inner2656251490_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2656251490 dynamic dispatch ([name, def])

  return Rsh_Fir_user_version_inner2656251490_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2656251490_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2656251490 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2656251490/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg__classTable;  // _classTable
  SEXP Rsh_Fir_reg__classTable1_;  // _classTable1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__classTable3_;  // _classTable3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_def2_;  // def2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg__cache_class;  // _cache_class
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_is1_;  // is1
  SEXP Rsh_Fir_reg_prev;  // prev
  SEXP Rsh_Fir_reg_prev1_;  // prev1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_newpkg;  // newpkg
  SEXP Rsh_Fir_reg_newpkg1_;  // newpkg1
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_remove;  // remove
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg__classTable4_;  // _classTable4
  SEXP Rsh_Fir_reg__classTable5_;  // _classTable5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_newpkg2_;  // newpkg2
  SEXP Rsh_Fir_reg_newpkg3_;  // newpkg3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_prev2_;  // prev2
  SEXP Rsh_Fir_reg_prev3_;  // prev3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_prev4_;  // prev4
  SEXP Rsh_Fir_reg_prev5_;  // prev5
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_remove1_;  // remove1
  SEXP Rsh_Fir_reg_name7_;  // name7
  SEXP Rsh_Fir_reg_name8_;  // name8
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg__classTable6_;  // _classTable6
  SEXP Rsh_Fir_reg__classTable7_;  // _classTable7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_prev6_;  // prev6
  SEXP Rsh_Fir_reg_prev7_;  // prev7
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_prev8_;  // prev8
  SEXP Rsh_Fir_reg_prev9_;  // prev9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_prev11_;  // prev11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_name9_;  // name9
  SEXP Rsh_Fir_reg_name10_;  // name10
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_prev12_;  // prev12
  SEXP Rsh_Fir_reg_prev13_;  // prev13
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg__classTable8_;  // _classTable8
  SEXP Rsh_Fir_reg__classTable9_;  // _classTable9
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r55_;  // r55

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_def = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st def = def
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_def, RHO);
  (void)(Rsh_Fir_reg_def);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L0_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c2 then L29() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L29()
    goto L29_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // st prev = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c1 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c1_;
  goto L0_;

L2_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

L3_:;
  // st newpkg = ""
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym1 = ldf `.cache_class`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `.cache_class` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L5_:;
  // is1 = ldf is
  Rsh_Fir_reg_is1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L6_:;
  // c13 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c13 then L46() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L46()
    goto L46_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // c10 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c11 = `&&`(c9, c10)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L6(c11)
  // L6(c11)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c11_;
  goto L6_;

L8_:;
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L10_:;
  // st i = r23
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L11_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r27 = dyn match(newpkg3, r25, NA_INT, NULL)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_newpkg3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

L12_:;
  // r31 = `!`(r29)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c14 then L63() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L63()
    goto L63_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

L14_:;
  // st prev = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L16_:;
  // r41 = `==`(r39, 0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c16 then L74() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L74()
    goto L74_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard7 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L18_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L89() else D26()
  // L89()
  goto L89_;

L19_:;
  // r50 = `==`(r48, 1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c17 then L83() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L83()
    goto L83_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L18()
  // L18()
  goto L18_;

L21_:;
  // st prev = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L18()
  // L18()
  goto L18_;

L22_:;
  // _classTable = ld `.classTable`
  Rsh_Fir_reg__classTable = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L23_:;
  // r = dyn base(<lang `<-`(prev, `[[`(.classTable, name))>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [_classTable]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg__classTable;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // _classTable1 = force? _classTable
  Rsh_Fir_reg__classTable1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__classTable);
  // checkMissing(_classTable1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg__classTable1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_classTable1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg__classTable1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c then L25() else L26(_classTable1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L26(_classTable1)
    Rsh_Fir_reg__classTable3_ = Rsh_Fir_reg__classTable1_;
    goto L26_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("[[", _classTable1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg__classTable1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr)
    Rsh_Fir_reg__classTable3_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D1_:;
  // deopt 3 [_classTable3, name1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg__classTable3_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r2 = dyn __(_classTable3, name2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__classTable3_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_name2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L29_:;
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L30() else D2()
  // L30()
  goto L30_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p = prom<V +>{
  //   def1 = ld def;
  //   def2 = force? def1;
  //   checkMissing(def2);
  //   return def2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_, CCP, RHO);
  // r5 = dyn is(p, "classRepresentation")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // c3 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c3 then L32() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L32()
    goto L32_;
  } else {
  // L3()
    goto L3_;
  }

L32_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r6 = dyn __1(<sym def>, <sym package>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // st newpkg = r6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // goto L4()
  // L4()
  goto L4_;

L34_:;
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D4()
  // L36()
  goto L36_;

L35_:;
  // r8 = dyn base1(<sym name>, NULL)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

D4_:;
  // deopt 22 [name3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_name3_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L36_:;
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // _cache_class = ldf `.cache_class` in base
  Rsh_Fir_reg__cache_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r10 = dyn _cache_class(name4, NULL)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_name4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cache_class, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

D5_:;
  // deopt 26 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L5()
  // L5()
  goto L5_;

D6_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p1 = prom<V +>{
  //   prev = ld prev;
  //   prev1 = force? prev;
  //   checkMissing(prev1);
  //   return prev1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_1, CCP, RHO);
  // r12 = dyn is1(p1, "classRepresentation")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is1_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

D7_:;
  // deopt 31 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L39_:;
  // c4 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L40() else L6(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L40()
    goto L40_;
  } else {
  // L6(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L6_;
  }

L40_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r15 = dyn __2(<sym prev>, <sym package>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names8, CCP, RHO);
  // newpkg = ld newpkg
  Rsh_Fir_reg_newpkg = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

L42_:;
  // r13 = dyn base2(<lang `@`(prev, package)>, <sym newpkg>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(c4, r13)
  // L7(c4, r13)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D8_:;
  // deopt 36 [c4, newpkg]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_newpkg;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L43_:;
  // newpkg1 = force? newpkg
  Rsh_Fir_reg_newpkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg);
  // checkMissing(newpkg1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_newpkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r16 = dyn identical(r15, newpkg1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args40[9];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_newpkg1_;
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args40[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args40[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args40[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args40[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args40[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[9];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_array_arg_names10[7] = R_MissingArg;
  Rsh_Fir_array_arg_names10[8] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

D9_:;
  // deopt 46 [c4, r16]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L7(c4, r16)
  // L7(c4, r16)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r16_;
  goto L7_;

L46_:;
  // remove = ldf remove
  Rsh_Fir_reg_remove = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

D10_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p2 = prom<V +>{
  //   name5 = ld name;
  //   name6 = force? name5;
  //   checkMissing(name6);
  //   return name6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_2, CCP, RHO);
  // p3 = prom<V +>{
  //   _classTable4 = ld `.classTable`;
  //   _classTable5 = force? _classTable4;
  //   checkMissing(_classTable5);
  //   return _classTable5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_3, CCP, RHO);
  // r19 = dyn remove[list, envir](p2, p3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_remove, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

D11_:;
  // deopt 54 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r19
  return Rsh_Fir_reg_r19_;

L51_:;
  // newpkg2 = ld newpkg
  Rsh_Fir_reg_newpkg2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

L52_:;
  // r22 = dyn base3(<sym newpkg>, <lang names(prev)>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L10_;

D12_:;
  // deopt 60 [newpkg2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_newpkg2_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L53_:;
  // newpkg3 = force? newpkg2
  Rsh_Fir_reg_newpkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg2_);
  // checkMissing(newpkg3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_newpkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // prev2 = ld prev
  Rsh_Fir_reg_prev2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L56() else D13()
  // L56()
  goto L56_;

L55_:;
  // r24 = dyn base4(<sym prev>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L11_;

D13_:;
  // deopt 64 [prev2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_prev2_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L56_:;
  // prev3 = force? prev2
  Rsh_Fir_reg_prev3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev2_);
  // checkMissing(prev3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_prev3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r26 = dyn names(prev3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_prev3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

D14_:;
  // deopt 67 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L11_;

D15_:;
  // deopt 71 [r27]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L10(r27)
  // L10(r27)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r27_;
  goto L10_;

L59_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

L60_:;
  // r28 = dyn base5(<sym i>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L12_;

D16_:;
  // deopt 75 [i]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L61_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r30 = dyn is_na(i1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L62() else D17()
  // L62()
  goto L62_;

D17_:;
  // deopt 78 [r30]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L12_;

L63_:;
  // l = ld prev
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c15 = `is.object`(l)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c15 then L64() else L65(NULL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L64()
    goto L64_;
  } else {
  // L65(NULL, l)
    Rsh_Fir_reg_r33_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L65_;
  }

L64_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l, NULL)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args54);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc1 then L66() else L65(NULL, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L66()
    goto L66_;
  } else {
  // L65(NULL, dr2)
    Rsh_Fir_reg_r33_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L65_;
  }

L65_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

L66_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L14(dx2)
  // L14(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L14_;

D18_:;
  // deopt 83 [r33, l2, NULL, i2]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(83, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L67_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r36 = dyn ____(l2, NULL, i3)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r36)
  // L14(r36)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r36_;
  goto L14_;

L70_:;
  // prev4 = ld prev
  Rsh_Fir_reg_prev4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L72() else D19()
  // L72()
  goto L72_;

L71_:;
  // r38 = dyn base6(<sym prev>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L16_;

D19_:;
  // deopt 92 [prev4]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_prev4_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L72_:;
  // prev5 = force? prev4
  Rsh_Fir_reg_prev5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev4_);
  // checkMissing(prev5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_prev5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r40 = dyn length(prev5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_prev5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

D20_:;
  // deopt 95 [r40]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L16_;

L74_:;
  // remove1 = ldf remove
  Rsh_Fir_reg_remove1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L75() else D21()
  // L75()
  goto L75_;

D21_:;
  // deopt 99 []
  Rsh_Fir_deopt(99, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p4 = prom<V +>{
  //   name7 = ld name;
  //   name8 = force? name7;
  //   checkMissing(name8);
  //   return name8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_4, CCP, RHO);
  // p5 = prom<V +>{
  //   _classTable6 = ld `.classTable`;
  //   _classTable7 = force? _classTable6;
  //   checkMissing(_classTable7);
  //   return _classTable7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_5, CCP, RHO);
  // r44 = dyn remove1[list, envir](p4, p5)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_remove1_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L76() else D22()
  // L76()
  goto L76_;

D22_:;
  // deopt 104 [r44]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L76_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r44
  return Rsh_Fir_reg_r44_;

L79_:;
  // prev6 = ld prev
  Rsh_Fir_reg_prev6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L81() else D23()
  // L81()
  goto L81_;

L80_:;
  // r47 = dyn base7(<sym prev>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L19(r47)
  // L19(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L19_;

D23_:;
  // deopt 108 [prev6]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_prev6_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L81_:;
  // prev7 = force? prev6
  Rsh_Fir_reg_prev7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev6_);
  // checkMissing(prev7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_prev7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r49 = dyn length1(prev7)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_prev7_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L82() else D24()
  // L82()
  goto L82_;

D24_:;
  // deopt 111 [r49]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L19(r49)
  // L19(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L19_;

L83_:;
  // prev8 = ld prev
  Rsh_Fir_reg_prev8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L84() else D25()
  // L84()
  goto L84_;

D25_:;
  // deopt 114 [prev8]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_prev8_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L84_:;
  // prev9 = force? prev8
  Rsh_Fir_reg_prev9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev8_);
  // checkMissing(prev9)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_prev9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(prev9)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_prev9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c18 then L85() else L86(prev9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L85()
    goto L85_;
  } else {
  // L86(prev9)
    Rsh_Fir_reg_prev11_ = Rsh_Fir_reg_prev9_;
    goto L86_;
  }

L85_:;
  // dr4 = tryDispatchBuiltin.1("[[", prev9)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_prev9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc2 then L87() else L86(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L87()
    goto L87_;
  } else {
  // L86(dr4)
    Rsh_Fir_reg_prev11_ = Rsh_Fir_reg_dr4_;
    goto L86_;
  }

L86_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r51 = dyn __3(prev11, 1)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_prev11_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(r51)
  // L21(r51)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r51_;
  goto L21_;

L87_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L21(dx4)
  // L21(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L21_;

D26_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L89_:;
  // p6 = prom<V +>{
  //   name9 = ld name;
  //   name10 = force? name9;
  //   checkMissing(name10);
  //   return name10;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_6, CCP, RHO);
  // p7 = prom<V +>{
  //   prev12 = ld prev;
  //   prev13 = force? prev12;
  //   checkMissing(prev13);
  //   return prev13;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_7, CCP, RHO);
  // p8 = prom<V +>{
  //   _classTable8 = ld `.classTable`;
  //   _classTable9 = force? _classTable8;
  //   checkMissing(_classTable9);
  //   return _classTable9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2656251490_8, CCP, RHO);
  // r55 = dyn assign[, , envir](p6, p7, p8)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L90() else D27()
  // L90()
  goto L90_;

D27_:;
  // deopt 128 [r55]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L90_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r55
  return Rsh_Fir_reg_r55_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_(SEXP CCP, SEXP RHO) {
  // def1 = ld def
  Rsh_Fir_reg_def1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // def2 = force? def1
  Rsh_Fir_reg_def2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def1_);
  // checkMissing(def2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_def2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return def2
  return Rsh_Fir_reg_def2_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_1(SEXP CCP, SEXP RHO) {
  // prev = ld prev
  Rsh_Fir_reg_prev = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // prev1 = force? prev
  Rsh_Fir_reg_prev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev);
  // checkMissing(prev1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_prev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return prev1
  return Rsh_Fir_reg_prev1_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_2(SEXP CCP, SEXP RHO) {
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // checkMissing(name6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return name6
  return Rsh_Fir_reg_name6_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_3(SEXP CCP, SEXP RHO) {
  // _classTable4 = ld `.classTable`
  Rsh_Fir_reg__classTable4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _classTable5 = force? _classTable4
  Rsh_Fir_reg__classTable5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__classTable4_);
  // checkMissing(_classTable5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg__classTable5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return _classTable5
  return Rsh_Fir_reg__classTable5_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_4(SEXP CCP, SEXP RHO) {
  // name7 = ld name
  Rsh_Fir_reg_name7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name8 = force? name7
  Rsh_Fir_reg_name8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name7_);
  // checkMissing(name8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_name8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return name8
  return Rsh_Fir_reg_name8_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_5(SEXP CCP, SEXP RHO) {
  // _classTable6 = ld `.classTable`
  Rsh_Fir_reg__classTable6_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _classTable7 = force? _classTable6
  Rsh_Fir_reg__classTable7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__classTable6_);
  // checkMissing(_classTable7)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg__classTable7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return _classTable7
  return Rsh_Fir_reg__classTable7_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_6(SEXP CCP, SEXP RHO) {
  // name9 = ld name
  Rsh_Fir_reg_name9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name10 = force? name9
  Rsh_Fir_reg_name10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name9_);
  // checkMissing(name10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_name10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return name10
  return Rsh_Fir_reg_name10_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_7(SEXP CCP, SEXP RHO) {
  // prev12 = ld prev
  Rsh_Fir_reg_prev12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // prev13 = force? prev12
  Rsh_Fir_reg_prev13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev12_);
  // checkMissing(prev13)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_prev13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return prev13
  return Rsh_Fir_reg_prev13_;
}
SEXP Rsh_Fir_user_promise_inner2656251490_8(SEXP CCP, SEXP RHO) {
  // _classTable8 = ld `.classTable`
  Rsh_Fir_reg__classTable8_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _classTable9 = force? _classTable8
  Rsh_Fir_reg__classTable9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__classTable8_);
  // checkMissing(_classTable9)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg__classTable9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return _classTable9
  return Rsh_Fir_reg__classTable9_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
