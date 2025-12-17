#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1871978492_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1871978492_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1871978492_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1871978492_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1871978492_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1871978492_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1871978492_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4173232735_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4173232735_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_permute;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1871978492
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1871978492_, RHO, CCP);
  // st permute = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = clos inner4173232735
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4173232735_, RHO, CCP);
  // st swap = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // permute = ldf permute
  Rsh_Fir_reg_permute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn permute(4.0, p)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_permute, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 10 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_function_inner1871978492_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1871978492 dynamic dispatch ([n, list])

  return Rsh_Fir_user_version_inner1871978492_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1871978492_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1871978492 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1871978492/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_count;
  SEXP Rsh_Fir_reg_count1_;
  SEXP Rsh_Fir_reg_permute1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_count2_;
  SEXP Rsh_Fir_reg_count3_;

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_list = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st list = list
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_list, RHO);
  (void)(Rsh_Fir_reg_list);
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // st count = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if c1 then L9() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L9()
    goto L9_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args3);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // count = ld count
  Rsh_Fir_reg_count = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D0_:;
  // deopt 0 [n1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r = `==`(n2, 1.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args5);
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // if c then L5() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L0()
    goto L0_;
  }

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 12);

D1_:;
  // deopt 13 [1.0, n3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r3 = `:`(1.0, n4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args8);
  // s = toForSeq(r3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args10);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 13);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L9_:;
  // count2 = ld count
  Rsh_Fir_reg_count2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D2_:;
  // deopt 16 [i2, count]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_count;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // count1 = force? count
  Rsh_Fir_reg_count1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count);
  // checkMissing(count1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_count1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // permute = ldf permute
  Rsh_Fir_reg_permute1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 18 [i2, count1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_count1_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // p = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   r4 = `-`(n6, 1.0);
  //   return r4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1871978492_, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   swap = ldf swap;
  //   p1 = prom<V +>{
  //     list1 = ld list;
  //     list2 = force? list1;
  //     checkMissing(list2);
  //     return list2;
  //   };
  //   p2 = prom<V +>{
  //     i5 = ld i;
  //     i6 = force? i5;
  //     checkMissing(i6);
  //     return i6;
  //   };
  //   p3 = prom<V +>{
  //     n7 = ld n;
  //     n8 = force? n7;
  //     checkMissing(n8);
  //     return n8;
  //   };
  //   r9 = dyn swap(p1, p2, p3);
  //   return r9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1871978492_1, 0, NULL, CCP, RHO);
  // r11 = dyn permute(p, p4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_permute1, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 21 [i2, count1, r11]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_count1_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(21, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L12_:;
  // r12 = `+`(count1, r11)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_count1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args19);
  // st count = r12
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L2(i2)
  // L2(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L2_;

D5_:;
  // deopt 27 [count2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_count2_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // count3 = force? count2
  Rsh_Fir_reg_count3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_count2_);
  // checkMissing(count3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_count3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return count3
  return Rsh_Fir_reg_count3_;
}
SEXP Rsh_Fir_user_promise_inner1871978492_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1871978492/0: expected 0, got %d", NCAPTURES);

  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r4 = `-`(n6, 1.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args13);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner1871978492_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_swap;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1871978492/0: expected 0, got %d", NCAPTURES);

  // swap = ldf swap
  Rsh_Fir_reg_swap = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // p1 = prom<V +>{
  //   list1 = ld list;
  //   list2 = force? list1;
  //   checkMissing(list2);
  //   return list2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1871978492_2, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   i5 = ld i;
  //   i6 = force? i5;
  //   checkMissing(i6);
  //   return i6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1871978492_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   n7 = ld n;
  //   n8 = force? n7;
  //   checkMissing(n8);
  //   return n8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1871978492_4, 0, NULL, CCP, RHO);
  // r9 = dyn swap(p1, p2, p3)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_swap, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_inner1871978492_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_list2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1871978492/0: expected 0, got %d", NCAPTURES);

  // list1 = ld list
  Rsh_Fir_reg_list1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // list2 = force? list1
  Rsh_Fir_reg_list2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list1_);
  // checkMissing(list2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_list2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return list2
  return Rsh_Fir_reg_list2_;
}
SEXP Rsh_Fir_user_promise_inner1871978492_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1871978492/0: expected 0, got %d", NCAPTURES);

  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return i6
  return Rsh_Fir_reg_i6_;
}
SEXP Rsh_Fir_user_promise_inner1871978492_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_n8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1871978492/0: expected 0, got %d", NCAPTURES);

  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return n8
  return Rsh_Fir_reg_n8_;
}
SEXP Rsh_Fir_user_function_inner4173232735_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4173232735 dynamic dispatch ([list, i, j])

  return Rsh_Fir_user_version_inner4173232735_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4173232735_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4173232735 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner4173232735/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_list1;
  SEXP Rsh_Fir_reg_i1;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_list1_1;
  SEXP Rsh_Fir_reg_list2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_list4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i1_1;
  SEXP Rsh_Fir_reg_i2_1;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_list5_;
  SEXP Rsh_Fir_reg_list6_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_list8_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_temp;
  SEXP Rsh_Fir_reg_temp1_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_temp3_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r3_2;
  SEXP Rsh_Fir_reg_list9_;
  SEXP Rsh_Fir_reg_list10_;

  // Bind parameters
  Rsh_Fir_reg_list1 = PARAMS[0];
  Rsh_Fir_reg_i1 = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st list = list
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_list1, RHO);
  (void)(Rsh_Fir_reg_list1);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_i1, RHO);
  (void)(Rsh_Fir_reg_i1);
  // st j = j
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_j, RHO);
  (void)(Rsh_Fir_reg_j);
  // list1 = ld list
  Rsh_Fir_reg_list1_1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // st temp = dx1
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // list5 = ld list
  Rsh_Fir_reg_list5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

L1_:;
  // l = ld list
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args21);
  // if c2 then L14() else L15(dx3, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L14()
    goto L14_;
  } else {
  // L15(dx3, l)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l1;
    goto L15_;
  }

L2_:;
  // st list = dx9
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // temp = ld temp
  Rsh_Fir_reg_temp = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L3_:;
  // st list = dx11
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // list9 = ld list
  Rsh_Fir_reg_list9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D0_:;
  // deopt 0 [list1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_list1_1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L4_:;
  // list2 = force? list1
  Rsh_Fir_reg_list2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_list1_1);
  // checkMissing(list2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_list2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c = `is.object`(list2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_list2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args23);
  // if c then L5() else L6(list2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L5()
    goto L5_;
  } else {
  // L6(list2)
    Rsh_Fir_reg_list4_ = Rsh_Fir_reg_list2_1;
    goto L6_;
  }

L5_:;
  // dr = tryDispatchBuiltin.1("[", list2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_list2_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_list4_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_1 = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D1_:;
  // deopt 2 [list4, i1]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_list4_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_i1_1;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L8_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_1);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r = dyn __(list4, i2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_list4_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_i2_1;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2;
  goto L0_;

D2_:;
  // deopt 6 [list5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_list5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L9_:;
  // list6 = force? list5
  Rsh_Fir_reg_list6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list5_);
  // checkMissing(list6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_list6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(list6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_list6_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args29);
  // if c1 then L10() else L11(list6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L10()
    goto L10_;
  } else {
  // L11(list6)
    Rsh_Fir_reg_list8_ = Rsh_Fir_reg_list6_;
    goto L11_;
  }

L10_:;
  // dr2 = tryDispatchBuiltin.1("[", list6)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_list6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L12() else L11(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr2)
    Rsh_Fir_reg_list8_ = Rsh_Fir_reg_dr2_;
    goto L11_;
  }

L11_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

L12_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;

D3_:;
  // deopt 8 [list8, j1]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_list8_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_j1_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L13_:;
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r1 = dyn __1(list8, j2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_list8_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r1_1;
  goto L1_;

L14_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, dx3)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args34);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc2 then L16() else L15(dx3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L16()
    goto L16_;
  } else {
  // L15(dx3, dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L15_;
  }

L15_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L16_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L2(dx7)
  // L2(dx7)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
  goto L2_;

D4_:;
  // deopt 12 [dx5, l2, dx3, i3]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_i3_;
  Rsh_Fir_deopt(12, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L17_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r2 = dyn ___(l2, dx3, i4)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r2_;
  goto L2_;

D5_:;
  // deopt 16 [temp]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_temp;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L18_:;
  // temp1 = force? temp
  Rsh_Fir_reg_temp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp);
  // checkMissing(temp1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_temp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // l3 = ld list
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c3 = `is.object`(l3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args39);
  // if c3 then L19() else L20(temp1, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L19()
    goto L19_;
  } else {
  // L20(temp1, l3)
    Rsh_Fir_reg_temp3_ = Rsh_Fir_reg_temp1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L20_;
  }

L19_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l3, temp1)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_temp1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args40);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc3 then L21() else L20(temp1, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L21()
    goto L21_;
  } else {
  // L20(temp1, dr6)
    Rsh_Fir_reg_temp3_ = Rsh_Fir_reg_temp1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L20_;
  }

L20_:;
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L21_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L3(dx10)
  // L3(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L3_;

D6_:;
  // deopt 19 [temp3, l5, temp1, j3]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_temp3_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_temp1_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_j3_;
  Rsh_Fir_deopt(19, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L22_:;
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r3 = dyn ___1(l5, temp1, j4)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_temp1_;
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r3_2;
  goto L3_;

D7_:;
  // deopt 23 [list9]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_list9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L23_:;
  // list10 = force? list9
  Rsh_Fir_reg_list10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list9_);
  // checkMissing(list10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_list10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return list10
  return Rsh_Fir_reg_list10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
