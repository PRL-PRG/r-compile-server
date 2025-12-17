#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3333887956_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3333887956_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3333887956_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3333887956_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner3333887956
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3333887956_, RHO, CCP);
  // st `.uncacheGenericTable` = r
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
SEXP Rsh_Fir_user_function_inner3333887956_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3333887956 dynamic dispatch ([name, def, table])

  return Rsh_Fir_user_version_inner3333887956_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3333887956_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3333887956 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3333887956/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_exists;  // exists
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_table1_;  // table1
  SEXP Rsh_Fir_reg_table2_;  // table2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_table3_;  // table3
  SEXP Rsh_Fir_reg_table4_;  // table4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_prev;  // prev
  SEXP Rsh_Fir_reg_prev1_;  // prev1
  SEXP Rsh_Fir_reg_is_function;  // is_function
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_remove;  // remove
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_table5_;  // table5
  SEXP Rsh_Fir_reg_table6_;  // table6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_newpkg;  // newpkg
  SEXP Rsh_Fir_reg_newpkg1_;  // newpkg1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_prev2_;  // prev2
  SEXP Rsh_Fir_reg_prev3_;  // prev3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_prev4_;  // prev4
  SEXP Rsh_Fir_reg_prev5_;  // prev5
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_remove1_;  // remove1
  SEXP Rsh_Fir_reg_name7_;  // name7
  SEXP Rsh_Fir_reg_name8_;  // name8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_table7_;  // table7
  SEXP Rsh_Fir_reg_table8_;  // table8
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_prev6_;  // prev6
  SEXP Rsh_Fir_reg_prev7_;  // prev7
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_prev8_;  // prev8
  SEXP Rsh_Fir_reg_prev9_;  // prev9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_prev11_;  // prev11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_name9_;  // name9
  SEXP Rsh_Fir_reg_name10_;  // name10
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_prev12_;  // prev12
  SEXP Rsh_Fir_reg_prev13_;  // prev13
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_table9_;  // table9
  SEXP Rsh_Fir_reg_table10_;  // table10
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r48_;  // r48

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_def = PARAMS[1];
  Rsh_Fir_reg_table = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st def = def
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_def, RHO);
  (void)(Rsh_Fir_reg_def);
  // st table = table
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_table, RHO);
  (void)(Rsh_Fir_reg_table);
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L0_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

L1_:;
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym1 = ldf match
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf match in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L4_:;
  // st i = r16
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L5_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r20 = dyn match(newpkg1, r18, NA_INT, NULL)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_newpkg1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

L6_:;
  // r24 = `!`(r22)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L42() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L42()
    goto L42_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

L8_:;
  // st prev = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L10_:;
  // r34 = `==`(r32, 0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c4 then L53() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L53()
    goto L53_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L12_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L68() else D22()
  // L68()
  goto L68_;

L13_:;
  // r43 = `==`(r41, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c5 then L62() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L62()
    goto L62_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L12()
  // L12()
  goto L12_;

L15_:;
  // st prev = dx3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L12()
  // L12()
  goto L12_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_, CCP, RHO);
  // p1 = prom<V +>{
  //   table1 = ld table;
  //   table2 = force? table1;
  //   checkMissing(table2);
  //   return table2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_1, CCP, RHO);
  // r2 = dyn exists[, envir, inherits](p, p1, FALSE)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c then L18() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L0()
    goto L0_;
  }

L18_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r3 = dyn __(<sym def>, <sym package>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // st newpkg = r3
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p2 = prom<V +>{
  //   name3 = ld name;
  //   name4 = force? name3;
  //   checkMissing(name4);
  //   return name4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_2, CCP, RHO);
  // p3 = prom<V +>{
  //   table3 = ld table;
  //   table4 = force? table3;
  //   checkMissing(table4);
  //   return table4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_3, CCP, RHO);
  // r6 = dyn get[, envir](p2, p3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

D3_:;
  // deopt 16 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // st prev = r6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym = ldf `is.function`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base = ldf `is.function` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // prev = ld prev
  Rsh_Fir_reg_prev = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r7 = dyn base(<sym prev>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

D4_:;
  // deopt 20 [prev]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_prev;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // prev1 = force? prev
  Rsh_Fir_reg_prev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev);
  // checkMissing(prev1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_prev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r9 = dyn is_function(prev1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_prev1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 23 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L1_;

L25_:;
  // remove = ldf remove
  Rsh_Fir_reg_remove = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p4 = prom<V +>{
  //   name5 = ld name;
  //   name6 = force? name5;
  //   checkMissing(name6);
  //   return name6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_4, CCP, RHO);
  // p5 = prom<V +>{
  //   table5 = ld table;
  //   table6 = force? table5;
  //   checkMissing(table6);
  //   return table6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_5, CCP, RHO);
  // r12 = dyn remove[list, envir](p4, p5)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_remove, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

D7_:;
  // deopt 30 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;

L30_:;
  // newpkg = ld newpkg
  Rsh_Fir_reg_newpkg = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

L31_:;
  // r15 = dyn base1(<sym newpkg>, <lang names(prev)>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r15)
  // L4(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L4_;

D8_:;
  // deopt 36 [newpkg]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_newpkg;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // newpkg1 = force? newpkg
  Rsh_Fir_reg_newpkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg);
  // checkMissing(newpkg1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_newpkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard2 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // prev2 = ld prev
  Rsh_Fir_reg_prev2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

L34_:;
  // r17 = dyn base2(<sym prev>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L5_;

D9_:;
  // deopt 40 [prev2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_prev2_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // prev3 = force? prev2
  Rsh_Fir_reg_prev3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev2_);
  // checkMissing(prev3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_prev3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r19 = dyn names(prev3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_prev3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

D10_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L5_;

D11_:;
  // deopt 47 [r20]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L4(r20)
  // L4(r20)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r20_;
  goto L4_;

L38_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L40() else D12()
  // L40()
  goto L40_;

L39_:;
  // r21 = dyn base3(<sym i>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r21)
  // L6(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L6_;

D12_:;
  // deopt 51 [i]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r23 = dyn is_na(i1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

D13_:;
  // deopt 54 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L6(r23)
  // L6(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L6_;

L42_:;
  // l = ld prev
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c3 = `is.object`(l)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L44(NULL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L44(NULL, l)
    Rsh_Fir_reg_r26_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L44_;
  }

L43_:;
  // dr = tryDispatchBuiltin.0("[[<-", l, NULL)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args37);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc then L45() else L44(NULL, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L45()
    goto L45_;
  } else {
  // L44(NULL, dr)
    Rsh_Fir_reg_r26_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L44_;
  }

L44_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

L45_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

D14_:;
  // deopt 59 [r26, l2, NULL, i2]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(59, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L46_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r29 = dyn ____(l2, NULL, i3)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r29_;
  goto L8_;

L49_:;
  // prev4 = ld prev
  Rsh_Fir_reg_prev4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L51() else D15()
  // L51()
  goto L51_;

L50_:;
  // r31 = dyn base4(<sym prev>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L10_;

D15_:;
  // deopt 68 [prev4]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_prev4_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L51_:;
  // prev5 = force? prev4
  Rsh_Fir_reg_prev5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev4_);
  // checkMissing(prev5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_prev5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r33 = dyn length(prev5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_prev5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

D16_:;
  // deopt 71 [r33]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L10_;

L53_:;
  // remove1 = ldf remove
  Rsh_Fir_reg_remove1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L54() else D17()
  // L54()
  goto L54_;

D17_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p6 = prom<V +>{
  //   name7 = ld name;
  //   name8 = force? name7;
  //   checkMissing(name8);
  //   return name8;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_6, CCP, RHO);
  // p7 = prom<V +>{
  //   table7 = ld table;
  //   table8 = force? table7;
  //   checkMissing(table8);
  //   return table8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_7, CCP, RHO);
  // r37 = dyn remove1[list, envir](p6, p7)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_remove1_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

D18_:;
  // deopt 80 [r37]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r37
  return Rsh_Fir_reg_r37_;

L58_:;
  // prev6 = ld prev
  Rsh_Fir_reg_prev6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L60() else D19()
  // L60()
  goto L60_;

L59_:;
  // r40 = dyn base5(<sym prev>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r40)
  // L13(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L13_;

D19_:;
  // deopt 84 [prev6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_prev6_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // prev7 = force? prev6
  Rsh_Fir_reg_prev7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev6_);
  // checkMissing(prev7)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_prev7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r42 = dyn length1(prev7)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_prev7_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L61() else D20()
  // L61()
  goto L61_;

D20_:;
  // deopt 87 [r42]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L13(r42)
  // L13(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L13_;

L62_:;
  // prev8 = ld prev
  Rsh_Fir_reg_prev8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L63() else D21()
  // L63()
  goto L63_;

D21_:;
  // deopt 90 [prev8]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_prev8_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // prev9 = force? prev8
  Rsh_Fir_reg_prev9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev8_);
  // checkMissing(prev9)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_prev9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(prev9)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_prev9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c6 then L64() else L65(prev9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L64()
    goto L64_;
  } else {
  // L65(prev9)
    Rsh_Fir_reg_prev11_ = Rsh_Fir_reg_prev9_;
    goto L65_;
  }

L64_:;
  // dr2 = tryDispatchBuiltin.1("[[", prev9)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_prev9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc1 then L66() else L65(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr2)
    Rsh_Fir_reg_prev11_ = Rsh_Fir_reg_dr2_;
    goto L65_;
  }

L65_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r44 = dyn __1(prev11, 1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_prev11_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(r44)
  // L15(r44)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r44_;
  goto L15_;

L66_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L15(dx2)
  // L15(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

D22_:;
  // deopt 99 []
  Rsh_Fir_deopt(99, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // p8 = prom<V +>{
  //   name9 = ld name;
  //   name10 = force? name9;
  //   checkMissing(name10);
  //   return name10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_8, CCP, RHO);
  // p9 = prom<V +>{
  //   prev12 = ld prev;
  //   prev13 = force? prev12;
  //   checkMissing(prev13);
  //   return prev13;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_9, CCP, RHO);
  // p10 = prom<V +>{
  //   table9 = ld table;
  //   table10 = force? table9;
  //   checkMissing(table10);
  //   return table10;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_10, CCP, RHO);
  // r48 = dyn assign[, , envir](p8, p9, p10)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L69() else D23()
  // L69()
  goto L69_;

D23_:;
  // deopt 104 [r48]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L69_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_(SEXP CCP, SEXP RHO) {
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_1(SEXP CCP, SEXP RHO) {
  // table1 = ld table
  Rsh_Fir_reg_table1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // table2 = force? table1
  Rsh_Fir_reg_table2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table1_);
  // checkMissing(table2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_table2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return table2
  return Rsh_Fir_reg_table2_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_2(SEXP CCP, SEXP RHO) {
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return name4
  return Rsh_Fir_reg_name4_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_3(SEXP CCP, SEXP RHO) {
  // table3 = ld table
  Rsh_Fir_reg_table3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // table4 = force? table3
  Rsh_Fir_reg_table4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table3_);
  // checkMissing(table4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_table4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return table4
  return Rsh_Fir_reg_table4_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_4(SEXP CCP, SEXP RHO) {
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // checkMissing(name6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return name6
  return Rsh_Fir_reg_name6_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_5(SEXP CCP, SEXP RHO) {
  // table5 = ld table
  Rsh_Fir_reg_table5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // table6 = force? table5
  Rsh_Fir_reg_table6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table5_);
  // checkMissing(table6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_table6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return table6
  return Rsh_Fir_reg_table6_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_6(SEXP CCP, SEXP RHO) {
  // name7 = ld name
  Rsh_Fir_reg_name7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name8 = force? name7
  Rsh_Fir_reg_name8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name7_);
  // checkMissing(name8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_name8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return name8
  return Rsh_Fir_reg_name8_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_7(SEXP CCP, SEXP RHO) {
  // table7 = ld table
  Rsh_Fir_reg_table7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // table8 = force? table7
  Rsh_Fir_reg_table8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table7_);
  // checkMissing(table8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_table8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return table8
  return Rsh_Fir_reg_table8_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_8(SEXP CCP, SEXP RHO) {
  // name9 = ld name
  Rsh_Fir_reg_name9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name10 = force? name9
  Rsh_Fir_reg_name10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name9_);
  // checkMissing(name10)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_name10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return name10
  return Rsh_Fir_reg_name10_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_9(SEXP CCP, SEXP RHO) {
  // prev12 = ld prev
  Rsh_Fir_reg_prev12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // prev13 = force? prev12
  Rsh_Fir_reg_prev13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev12_);
  // checkMissing(prev13)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_prev13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return prev13
  return Rsh_Fir_reg_prev13_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_10(SEXP CCP, SEXP RHO) {
  // table9 = ld table
  Rsh_Fir_reg_table9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // table10 = force? table9
  Rsh_Fir_reg_table10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table9_);
  // checkMissing(table10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_table10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return table10
  return Rsh_Fir_reg_table10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
