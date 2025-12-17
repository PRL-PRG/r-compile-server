#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1284573590_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1284573590_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1284573590_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1284573590_13(SEXP CCP, SEXP RHO);
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
  // r = clos inner1284573590
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1284573590_, RHO, CCP);
  // st `.mergeMethodsTable2` = r
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
SEXP Rsh_Fir_user_function_inner1284573590_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1284573590 dynamic dispatch ([table, newtable, envir, metaname])

  return Rsh_Fir_user_version_inner1284573590_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1284573590_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1284573590 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1284573590/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_newtable;  // newtable
  SEXP Rsh_Fir_reg_envir;  // envir
  SEXP Rsh_Fir_reg_metaname;  // metaname
  SEXP Rsh_Fir_reg_as_list;  // as_list
  SEXP Rsh_Fir_reg_table1_;  // table1
  SEXP Rsh_Fir_reg_table2_;  // table2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_old;  // old
  SEXP Rsh_Fir_reg_old1_;  // old1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_as_list1_;  // as_list1
  SEXP Rsh_Fir_reg_newtable1_;  // newtable1
  SEXP Rsh_Fir_reg_newtable2_;  // newtable2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_is1_;  // is1
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_mm;  // mm
  SEXP Rsh_Fir_reg_mm1_;  // mm1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_canStore;  // canStore
  SEXP Rsh_Fir_reg_canStore1_;  // canStore1
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_list2env;  // list2env
  SEXP Rsh_Fir_reg_new2_;  // new2
  SEXP Rsh_Fir_reg_new3_;  // new3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_table3_;  // table3
  SEXP Rsh_Fir_reg_table4_;  // table4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_metaname1_;  // metaname1
  SEXP Rsh_Fir_reg_metaname2_;  // metaname2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_gsub1_;  // gsub1
  SEXP Rsh_Fir_reg_metaname3_;  // metaname3
  SEXP Rsh_Fir_reg_metaname4_;  // metaname4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_getGeneric;  // getGeneric
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_envir1_;  // envir1
  SEXP Rsh_Fir_reg_envir2_;  // envir2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg__mergeMethodsTable;  // _mergeMethodsTable
  SEXP Rsh_Fir_reg_generic;  // generic
  SEXP Rsh_Fir_reg_generic1_;  // generic1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_table5_;  // table5
  SEXP Rsh_Fir_reg_table6_;  // table6
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_newtable3_;  // newtable3
  SEXP Rsh_Fir_reg_newtable4_;  // newtable4
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_table7_;  // table7
  SEXP Rsh_Fir_reg_table8_;  // table8

  // Bind parameters
  Rsh_Fir_reg_table = PARAMS[0];
  Rsh_Fir_reg_newtable = PARAMS[1];
  Rsh_Fir_reg_envir = PARAMS[2];
  Rsh_Fir_reg_metaname = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st table = table
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_table, RHO);
  (void)(Rsh_Fir_reg_table);
  // st newtable = newtable
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_newtable, RHO);
  (void)(Rsh_Fir_reg_newtable);
  // st envir = envir
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_envir, RHO);
  (void)(Rsh_Fir_reg_envir);
  // st metaname = metaname
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_metaname, RHO);
  (void)(Rsh_Fir_reg_metaname);
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if c then L18() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // goto L0(i2)
  // L0(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L0_;

L2_:;
  // st mm = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // as_list1 = ldf `as.list`
  Rsh_Fir_reg_as_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L5_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // st what = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L6_:;
  // i15 = `+`.1(i14, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i15_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c2 = `<`.1(l1, i15)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c2 then L30() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L12()
    goto L12_;
  }

L7_:;
  // c12 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c12 then L39() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L39()
    goto L39_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // mm = ld mm
  Rsh_Fir_reg_mm = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

L9_:;
  // goto L6(i19)
  // L6(i19)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i19_;
  goto L6_;

L10_:;
  // canStore = ld canStore
  Rsh_Fir_reg_canStore = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

L12_:;
  // x1 = `[[`(s1, i15, NULL, TRUE)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // st what = x1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // is1 = ldf is
  Rsh_Fir_reg_is1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L31() else D9()
  // L31()
  goto L31_;

L13_:;
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L47() else D16()
  // L47()
  goto L47_;

L14_:;
  // table7 = ld table
  Rsh_Fir_reg_table7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L55() else D24()
  // L55()
  goto L55_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   table1 = ld table;
  //   table2 = force? table1;
  //   checkMissing(table2);
  //   return table2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_, CCP, RHO);
  // r1 = dyn as_list[, `all.names`](p, TRUE)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // st old = r1
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // st mm = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 16), RHO);
  (void)(Rsh_const(CCP, 16));
  // old = ld old
  Rsh_Fir_reg_old = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 10 [old]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_old;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // old1 = force? old
  Rsh_Fir_reg_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old);
  // checkMissing(old1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // s = toForSeq(old1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_old1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 17);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L18_:;
  // goto L3()
  // L3()
  goto L3_;

D3_:;
  // deopt 13 [i2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // p1 = prom<V +>{
  //   what = ld what;
  //   what1 = force? what;
  //   checkMissing(what1);
  //   return what1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_1, CCP, RHO);
  // r3 = dyn is(p1, "MethodDefinition")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 16 [i2, r3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L1()
    goto L1_;
  }

L21_:;
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r6 = dyn __(<sym what>, <sym defined>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r7 = dyn length(r6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L23_:;
  // r4 = dyn base(<lang `@`(what, defined)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(i2, r4)
  // L2(i2, r4)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D5_:;
  // deopt 22 [i2, r7]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(i2, r7)
  // L2(i2, r7)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r7_;
  goto L2_;

D6_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p2 = prom<V +>{
  //   newtable1 = ld newtable;
  //   newtable2 = force? newtable1;
  //   checkMissing(newtable2);
  //   return newtable2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_2, CCP, RHO);
  // r10 = dyn as_list1[, `all.names`](p2, TRUE)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 36 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L28_:;
  // st new = r10
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // st canStore = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 9), RHO);
  (void)(Rsh_const(CCP, 9));
  // new = ld new
  Rsh_Fir_reg_new = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

D8_:;
  // deopt 41 [new]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_new;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // new1 = force? new
  Rsh_Fir_reg_new1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new);
  // checkMissing(new1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_new1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(new1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_new1_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // i13 = 0
  Rsh_Fir_reg_i13_ = Rsh_const(CCP, 17);
  // goto L6(i13)
  // L6(i13)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i13_;
  goto L6_;

L30_:;
  // goto L10()
  // L10()
  goto L10_;

D9_:;
  // deopt 44 [i15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // p3 = prom<V +>{
  //   what2 = ld what;
  //   what3 = force? what2;
  //   checkMissing(what3);
  //   return what3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_3, CCP, RHO);
  // r12 = dyn is1(p3, "MethodDefinition")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L32() else D10()
  // L32()
  goto L32_;

D10_:;
  // deopt 47 [i15, r12]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // c3 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L33() else L7(i15, c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L7(i15, c3)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i15_;
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L7_;
  }

L33_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r15 = dyn __1(<sym what>, <sym defined>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r16 = dyn length1(r15)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

L35_:;
  // r13 = dyn base1(<lang `@`(what, defined)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(i15, c3, r13)
  // L8(i15, c3, r13)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D11_:;
  // deopt 53 [i15, c3, r16]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L8(i15, c3, r16)
  // L8(i15, c3, r16)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r16_;
  goto L8_;

D12_:;
  // deopt 53 [i22, c8, r14, mm]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_mm;
  Rsh_Fir_deopt(53, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // mm1 = force? mm
  Rsh_Fir_reg_mm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mm);
  // checkMissing(mm1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_mm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r17 = `!=`(r14, mm1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_mm1_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c10 = `&&`(c8, c9)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L7(i22, c10)
  // L7(i22, c10)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c10_;
  goto L7_;

L39_:;
  // st canStore = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 24), RHO);
  (void)(Rsh_const(CCP, 24));
  // goto L10()
  // L10()
  goto L10_;

D13_:;
  // deopt 67 [canStore]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_canStore;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // canStore1 = force? canStore
  Rsh_Fir_reg_canStore1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_canStore);
  // checkMissing(canStore1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_canStore1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c13 = `as.logical`(canStore1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_canStore1_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c13 then L43() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L43()
    goto L43_;
  } else {
  // L13()
    goto L13_;
  }

L43_:;
  // list2env = ldf list2env
  Rsh_Fir_reg_list2env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

D14_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p4 = prom<V +>{
  //   new2 = ld new;
  //   new3 = force? new2;
  //   checkMissing(new3);
  //   return new3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_4, CCP, RHO);
  // p5 = prom<V +>{
  //   table3 = ld table;
  //   table4 = force? table3;
  //   checkMissing(table4);
  //   return table4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_5, CCP, RHO);
  // r21 = dyn list2env(p4, p5)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2env, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L45() else D15()
  // L45()
  goto L45_;

D15_:;
  // deopt 73 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L14()
  // L14()
  goto L14_;

D16_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p6 = prom<V +>{
  //   metaname1 = ld metaname;
  //   metaname2 = force? metaname1;
  //   checkMissing(metaname2);
  //   return metaname2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_6, CCP, RHO);
  // r24 = dyn gsub("^\\.__T__(.*):([^:]+)", "\\1", p6)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L48() else D17()
  // L48()
  goto L48_;

D17_:;
  // deopt 79 [r24]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L48_:;
  // st f = r24
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // gsub1 = ldf gsub
  Rsh_Fir_reg_gsub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L49() else D18()
  // L49()
  goto L49_;

D18_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p7 = prom<V +>{
  //   metaname3 = ld metaname;
  //   metaname4 = force? metaname3;
  //   checkMissing(metaname4);
  //   return metaname4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_7, CCP, RHO);
  // r26 = dyn gsub1("^\\.__T__(.*):([^:]+(.*))", "\\2", p7)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub1_, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L50() else D19()
  // L50()
  goto L50_;

D19_:;
  // deopt 86 [r26]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L50_:;
  // st package = r26
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // getGeneric = ldf getGeneric
  Rsh_Fir_reg_getGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L51() else D20()
  // L51()
  goto L51_;

D20_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p8 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_8, CCP, RHO);
  // p9 = prom<V +>{
  //   envir1 = ld envir;
  //   envir2 = force? envir1;
  //   checkMissing(envir2);
  //   return envir2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_9, CCP, RHO);
  // p10 = prom<V +>{
  //   package = ld package;
  //   package1 = force? package;
  //   checkMissing(package1);
  //   return package1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_10, CCP, RHO);
  // r30 = dyn getGeneric(p8, TRUE, p9, p10)
  SEXP Rsh_Fir_array_args47[4];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args47[3] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGeneric, 4, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L52() else D21()
  // L52()
  goto L52_;

D21_:;
  // deopt 94 [r30]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L52_:;
  // st generic = r30
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // _mergeMethodsTable = ldf `.mergeMethodsTable`
  Rsh_Fir_reg__mergeMethodsTable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L53() else D22()
  // L53()
  goto L53_;

D22_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p11 = prom<V +>{
  //   generic = ld generic;
  //   generic1 = force? generic;
  //   checkMissing(generic1);
  //   return generic1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_11, CCP, RHO);
  // p12 = prom<V +>{
  //   table5 = ld table;
  //   table6 = force? table5;
  //   checkMissing(table6);
  //   return table6;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_12, CCP, RHO);
  // p13 = prom<V +>{
  //   newtable3 = ld newtable;
  //   newtable4 = force? newtable3;
  //   checkMissing(newtable4);
  //   return newtable4;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1284573590_13, CCP, RHO);
  // r34 = dyn _mergeMethodsTable(p11, p12, p13, TRUE)
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__mergeMethodsTable, 4, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L54() else D23()
  // L54()
  goto L54_;

D23_:;
  // deopt 102 [r34]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L14()
  // L14()
  goto L14_;

D24_:;
  // deopt 103 [table7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_table7_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L55_:;
  // table8 = force? table7
  Rsh_Fir_reg_table8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table7_);
  // checkMissing(table8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_table8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return table8
  return Rsh_Fir_reg_table8_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_(SEXP CCP, SEXP RHO) {
  // table1 = ld table
  Rsh_Fir_reg_table1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // table2 = force? table1
  Rsh_Fir_reg_table2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table1_);
  // checkMissing(table2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_table2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return table2
  return Rsh_Fir_reg_table2_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_1(SEXP CCP, SEXP RHO) {
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return what1
  return Rsh_Fir_reg_what1_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_2(SEXP CCP, SEXP RHO) {
  // newtable1 = ld newtable
  Rsh_Fir_reg_newtable1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // newtable2 = force? newtable1
  Rsh_Fir_reg_newtable2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newtable1_);
  // checkMissing(newtable2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_newtable2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return newtable2
  return Rsh_Fir_reg_newtable2_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_3(SEXP CCP, SEXP RHO) {
  // what2 = ld what
  Rsh_Fir_reg_what2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // what3 = force? what2
  Rsh_Fir_reg_what3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what2_);
  // checkMissing(what3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_what3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return what3
  return Rsh_Fir_reg_what3_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_4(SEXP CCP, SEXP RHO) {
  // new2 = ld new
  Rsh_Fir_reg_new2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // new3 = force? new2
  Rsh_Fir_reg_new3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new2_);
  // checkMissing(new3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_new3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return new3
  return Rsh_Fir_reg_new3_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_5(SEXP CCP, SEXP RHO) {
  // table3 = ld table
  Rsh_Fir_reg_table3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // table4 = force? table3
  Rsh_Fir_reg_table4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table3_);
  // checkMissing(table4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_table4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return table4
  return Rsh_Fir_reg_table4_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_6(SEXP CCP, SEXP RHO) {
  // metaname1 = ld metaname
  Rsh_Fir_reg_metaname1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // metaname2 = force? metaname1
  Rsh_Fir_reg_metaname2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_metaname1_);
  // checkMissing(metaname2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_metaname2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return metaname2
  return Rsh_Fir_reg_metaname2_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_7(SEXP CCP, SEXP RHO) {
  // metaname3 = ld metaname
  Rsh_Fir_reg_metaname3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // metaname4 = force? metaname3
  Rsh_Fir_reg_metaname4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_metaname3_);
  // checkMissing(metaname4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_metaname4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return metaname4
  return Rsh_Fir_reg_metaname4_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_8(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_9(SEXP CCP, SEXP RHO) {
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return envir2
  return Rsh_Fir_reg_envir2_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_10(SEXP CCP, SEXP RHO) {
  // package = ld package
  Rsh_Fir_reg_package = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // package1 = force? package
  Rsh_Fir_reg_package1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package);
  // checkMissing(package1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_package1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return package1
  return Rsh_Fir_reg_package1_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_11(SEXP CCP, SEXP RHO) {
  // generic = ld generic
  Rsh_Fir_reg_generic = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // generic1 = force? generic
  Rsh_Fir_reg_generic1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generic);
  // checkMissing(generic1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_generic1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return generic1
  return Rsh_Fir_reg_generic1_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_12(SEXP CCP, SEXP RHO) {
  // table5 = ld table
  Rsh_Fir_reg_table5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // table6 = force? table5
  Rsh_Fir_reg_table6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table5_);
  // checkMissing(table6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_table6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return table6
  return Rsh_Fir_reg_table6_;
}
SEXP Rsh_Fir_user_promise_inner1284573590_13(SEXP CCP, SEXP RHO) {
  // newtable3 = ld newtable
  Rsh_Fir_reg_newtable3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // newtable4 = force? newtable3
  Rsh_Fir_reg_newtable4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newtable3_);
  // checkMissing(newtable4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_newtable4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return newtable4
  return Rsh_Fir_reg_newtable4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
