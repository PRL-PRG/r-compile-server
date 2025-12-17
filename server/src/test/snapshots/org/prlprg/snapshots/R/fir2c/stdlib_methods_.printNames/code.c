#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2239533017_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2239533017_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2239533017_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2239533017_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2239533017_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2239533017_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2239533017_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2239533017
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2239533017_, RHO, CCP);
  // st `.printNames` = r
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
SEXP Rsh_Fir_user_function_inner2239533017_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2239533017 dynamic dispatch ([header, names, separateLine])

  return Rsh_Fir_user_version_inner2239533017_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2239533017_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2239533017 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2239533017/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_header;  // header
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_separateLine;  // separateLine
  SEXP Rsh_Fir_reg_separateLine_isMissing;  // separateLine_isMissing
  SEXP Rsh_Fir_reg_separateLine_orDefault;  // separateLine_orDefault
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_separateLine1_;  // separateLine1
  SEXP Rsh_Fir_reg_separateLine2_;  // separateLine2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_header1_;  // header1
  SEXP Rsh_Fir_reg_header2_;  // header2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_cat1_;  // cat1
  SEXP Rsh_Fir_reg_names3_;  // names3
  SEXP Rsh_Fir_reg_names4_;  // names4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_cat2_;  // cat2
  SEXP Rsh_Fir_reg_header3_;  // header3
  SEXP Rsh_Fir_reg_header4_;  // header4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_cat3_;  // cat3
  SEXP Rsh_Fir_reg_names5_;  // names5
  SEXP Rsh_Fir_reg_names6_;  // names6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_cat4_;  // cat4
  SEXP Rsh_Fir_reg_r11_;  // r11

  // Bind parameters
  Rsh_Fir_reg_header = PARAMS[0];
  Rsh_Fir_reg_names = PARAMS[1];
  Rsh_Fir_reg_separateLine = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st header = header
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_header, RHO);
  (void)(Rsh_Fir_reg_header);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_names, RHO);
  (void)(Rsh_Fir_reg_names);
  // separateLine_isMissing = missing.0(separateLine)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_separateLine;
  Rsh_Fir_reg_separateLine_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if separateLine_isMissing then L0(TRUE) else L0(separateLine)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_separateLine_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_separateLine_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(separateLine)
    Rsh_Fir_reg_separateLine_orDefault = Rsh_Fir_reg_separateLine;
    goto L0_;
  }

L0_:;
  // st separateLine = separateLine_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_separateLine_orDefault, RHO);
  (void)(Rsh_Fir_reg_separateLine_orDefault);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // cat2 = ldf cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L12() else D7()
  // L12()
  goto L12_;

L2_:;
  // cat4 = ldf cat
  Rsh_Fir_reg_cat4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L16() else D11()
  // L16()
  goto L16_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   names1 = ld names;
  //   names2 = force? names1;
  //   checkMissing(names2);
  //   return names2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2239533017_, CCP, RHO);
  // r1 = dyn paste0("\"", p, "\"")
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st names = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // separateLine1 = ld separateLine
  Rsh_Fir_reg_separateLine1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 7 [separateLine1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_separateLine1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // separateLine2 = force? separateLine1
  Rsh_Fir_reg_separateLine2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_separateLine1_);
  // checkMissing(separateLine2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_separateLine2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(separateLine2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_separateLine2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L6() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L1()
    goto L1_;
  }

L6_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p1 = prom<V +>{
  //   header1 = ld header;
  //   header2 = force? header1;
  //   checkMissing(header2);
  //   return header2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2239533017_1, CCP, RHO);
  // r3 = dyn cat[, , sep](p1, "\n", "")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 15 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p2 = prom<V +>{
  //   names3 = ld names;
  //   names4 = force? names3;
  //   checkMissing(names4);
  //   return names4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2239533017_2, CCP, RHO);
  // r5 = dyn cat1[, sep, fill, labels](p2, ", ", TRUE, "    ")
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names2[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 4, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 25 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L2()
  // L2()
  goto L2_;

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p3 = prom<V +>{
  //   header3 = ld header;
  //   header4 = force? header3;
  //   checkMissing(header4);
  //   return header4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2239533017_3, CCP, RHO);
  // r8 = dyn cat2[, , sep](p3, ": ", "")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat2_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D8()
  // L13()
  goto L13_;

D8_:;
  // deopt 32 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // cat3 = ldf cat
  Rsh_Fir_reg_cat3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L14() else D9()
  // L14()
  goto L14_;

D9_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   names5 = ld names;
  //   names6 = force? names5;
  //   checkMissing(names6);
  //   return names6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2239533017_4, CCP, RHO);
  // r10 = dyn cat3[, sep, fill](p4, ", ", TRUE)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat3_, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D10()
  // L15()
  goto L15_;

D10_:;
  // deopt 40 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2()
  // L2()
  goto L2_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r11 = dyn cat4("\n")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat4_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L17() else D12()
  // L17()
  goto L17_;

D12_:;
  // deopt 44 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner2239533017_(SEXP CCP, SEXP RHO) {
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return names2
  return Rsh_Fir_reg_names2_;
}
SEXP Rsh_Fir_user_promise_inner2239533017_1(SEXP CCP, SEXP RHO) {
  // header1 = ld header
  Rsh_Fir_reg_header1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // header2 = force? header1
  Rsh_Fir_reg_header2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_header1_);
  // checkMissing(header2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_header2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return header2
  return Rsh_Fir_reg_header2_;
}
SEXP Rsh_Fir_user_promise_inner2239533017_2(SEXP CCP, SEXP RHO) {
  // names3 = ld names
  Rsh_Fir_reg_names3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names4 = force? names3
  Rsh_Fir_reg_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names3_);
  // checkMissing(names4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return names4
  return Rsh_Fir_reg_names4_;
}
SEXP Rsh_Fir_user_promise_inner2239533017_3(SEXP CCP, SEXP RHO) {
  // header3 = ld header
  Rsh_Fir_reg_header3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // header4 = force? header3
  Rsh_Fir_reg_header4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_header3_);
  // checkMissing(header4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_header4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return header4
  return Rsh_Fir_reg_header4_;
}
SEXP Rsh_Fir_user_promise_inner2239533017_4(SEXP CCP, SEXP RHO) {
  // names5 = ld names
  Rsh_Fir_reg_names5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names6 = force? names5
  Rsh_Fir_reg_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names5_);
  // checkMissing(names6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return names6
  return Rsh_Fir_reg_names6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
