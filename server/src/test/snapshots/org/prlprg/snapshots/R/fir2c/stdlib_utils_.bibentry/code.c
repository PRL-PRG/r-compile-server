#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner904552562_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner904552562_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner904552562_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner904552562_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner904552562_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner904552562_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner904552562_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner904552562
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner904552562_, RHO, CCP);
  // st `.bibentry` = r
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
SEXP Rsh_Fir_user_function_inner904552562_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner904552562 dynamic dispatch ([x, mheader, mfooter])

  return Rsh_Fir_user_version_inner904552562_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner904552562_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner904552562 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner904552562/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_mheader;  // mheader
  SEXP Rsh_Fir_reg_mfooter;  // mfooter
  SEXP Rsh_Fir_reg_x_isMissing;  // x_isMissing
  SEXP Rsh_Fir_reg_x_orDefault;  // x_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_mheader_isMissing;  // mheader_isMissing
  SEXP Rsh_Fir_reg_mheader_orDefault;  // mheader_orDefault
  SEXP Rsh_Fir_reg_mfooter_isMissing;  // mfooter_isMissing
  SEXP Rsh_Fir_reg_mfooter_orDefault;  // mfooter_orDefault
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg__is_not_nonempty_text;  // _is_not_nonempty_text
  SEXP Rsh_Fir_reg_mheader1_;  // mheader1
  SEXP Rsh_Fir_reg_mheader2_;  // mheader2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_mheader3_;  // mheader3
  SEXP Rsh_Fir_reg_mheader4_;  // mheader4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg__is_not_nonempty_text1_;  // _is_not_nonempty_text1
  SEXP Rsh_Fir_reg_mfooter1_;  // mfooter1
  SEXP Rsh_Fir_reg_mfooter2_;  // mfooter2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_mfooter3_;  // mfooter3
  SEXP Rsh_Fir_reg_mfooter4_;  // mfooter4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_mheader = PARAMS[1];
  Rsh_Fir_reg_mfooter = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if x_isMissing then L0() else L1(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   list = ldf list in base;
  //   r2 = dyn list();
  //   goto L0(r2);
  // L2():
  //   r = dyn base();
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner904552562_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // mheader_isMissing = missing.0(mheader)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_mheader;
  Rsh_Fir_reg_mheader_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if mheader_isMissing then L2(NULL) else L2(mheader)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mheader_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_mheader_orDefault = Rsh_const(CCP, 3);
    goto L2_;
  } else {
  // L2(mheader)
    Rsh_Fir_reg_mheader_orDefault = Rsh_Fir_reg_mheader;
    goto L2_;
  }

L2_:;
  // st mheader = mheader_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_mheader_orDefault, RHO);
  (void)(Rsh_Fir_reg_mheader_orDefault);
  // mfooter_isMissing = missing.0(mfooter)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_mfooter;
  Rsh_Fir_reg_mfooter_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if mfooter_isMissing then L3(NULL) else L3(mfooter)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mfooter_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_mfooter_orDefault = Rsh_const(CCP, 3);
    goto L3_;
  } else {
  // L3(mfooter)
    Rsh_Fir_reg_mfooter_orDefault = Rsh_Fir_reg_mfooter;
    goto L3_;
  }

L3_:;
  // st mfooter = mfooter_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_mfooter_orDefault, RHO);
  (void)(Rsh_Fir_reg_mfooter_orDefault);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // _is_not_nonempty_text1 = ldf `.is_not_nonempty_text`
  Rsh_Fir_reg__is_not_nonempty_text1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D0_:;
  // deopt 3 ["bibentry", l, "bibentry"]
  SEXP Rsh_Fir_array_deopt_stack[3];
  Rsh_Fir_array_deopt_stack[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack[2] = Rsh_const(CCP, 8);
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // r4 = dyn class__(l, NULL, "bibentry")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 5 ["bibentry", r4]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // st x = r4
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // _is_not_nonempty_text = ldf `.is_not_nonempty_text`
  Rsh_Fir_reg__is_not_nonempty_text = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   mheader1 = ld mheader;
  //   mheader2 = force? mheader1;
  //   checkMissing(mheader2);
  //   return mheader2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner904552562_1, CCP, RHO);
  // r6 = dyn _is_not_nonempty_text(p1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__is_not_nonempty_text, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 10 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // r7 = `!`(r6)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L12() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L4()
    goto L4_;
  }

L12_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p2 = prom<V +>{
  //   mheader3 = ld mheader;
  //   mheader4 = force? mheader3;
  //   checkMissing(mheader4);
  //   return mheader4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner904552562_2, CCP, RHO);
  // r9 = dyn paste[, collapse](p2, "\n")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 17 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 19 [r9, l1, r9]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // r10 = dyn attr__(l1, NULL, "mheader", r9)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[3] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

D7_:;
  // deopt 22 [r9, r10]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // st x = r10
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // goto L5()
  // L5()
  goto L5_;

D8_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p3 = prom<V +>{
  //   mfooter1 = ld mfooter;
  //   mfooter2 = force? mfooter1;
  //   checkMissing(mfooter2);
  //   return mfooter2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner904552562_3, CCP, RHO);
  // r13 = dyn _is_not_nonempty_text1(p3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__is_not_nonempty_text1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

D9_:;
  // deopt 29 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // r14 = `!`(r13)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L6()
    goto L6_;
  }

L20_:;
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p4 = prom<V +>{
  //   mfooter3 = ld mfooter;
  //   mfooter4 = force? mfooter3;
  //   checkMissing(mfooter4);
  //   return mfooter4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner904552562_4, CCP, RHO);
  // r16 = dyn paste1[, collapse](p4, "\n")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L23() else D12()
  // L23()
  goto L23_;

D12_:;
  // deopt 38 [r16, l2, r16]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(38, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // r17 = dyn attr__1(l2, NULL, "mfooter", r16)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D13()
  // L24()
  goto L24_;

D13_:;
  // deopt 41 [r16, r17]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // st x = r17
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L7()
  // L7()
  goto L7_;

D14_:;
  // deopt 45 [x1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L26_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner904552562_(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner904552562_1(SEXP CCP, SEXP RHO) {
  // mheader1 = ld mheader
  Rsh_Fir_reg_mheader1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // mheader2 = force? mheader1
  Rsh_Fir_reg_mheader2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mheader1_);
  // checkMissing(mheader2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_mheader2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return mheader2
  return Rsh_Fir_reg_mheader2_;
}
SEXP Rsh_Fir_user_promise_inner904552562_2(SEXP CCP, SEXP RHO) {
  // mheader3 = ld mheader
  Rsh_Fir_reg_mheader3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // mheader4 = force? mheader3
  Rsh_Fir_reg_mheader4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mheader3_);
  // checkMissing(mheader4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_mheader4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return mheader4
  return Rsh_Fir_reg_mheader4_;
}
SEXP Rsh_Fir_user_promise_inner904552562_3(SEXP CCP, SEXP RHO) {
  // mfooter1 = ld mfooter
  Rsh_Fir_reg_mfooter1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // mfooter2 = force? mfooter1
  Rsh_Fir_reg_mfooter2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mfooter1_);
  // checkMissing(mfooter2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_mfooter2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return mfooter2
  return Rsh_Fir_reg_mfooter2_;
}
SEXP Rsh_Fir_user_promise_inner904552562_4(SEXP CCP, SEXP RHO) {
  // mfooter3 = ld mfooter
  Rsh_Fir_reg_mfooter3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // mfooter4 = force? mfooter3
  Rsh_Fir_reg_mfooter4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mfooter3_);
  // checkMissing(mfooter4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_mfooter4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return mfooter4
  return Rsh_Fir_reg_mfooter4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
