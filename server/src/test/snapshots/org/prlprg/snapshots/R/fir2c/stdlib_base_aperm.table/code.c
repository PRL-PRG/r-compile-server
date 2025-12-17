#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3347573810_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3347573810_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3347573810_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3347573810_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3347573810_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3347573810
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3347573810_, RHO, CCP);
  // st `aperm.table` = r
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
SEXP Rsh_Fir_user_function_inner3347573810_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3347573810 dynamic dispatch ([a, perm, resize, `keep.class`, `...`])

  return Rsh_Fir_user_version_inner3347573810_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3347573810_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3347573810 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3347573810/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_perm;  // perm
  SEXP Rsh_Fir_reg_resize;  // resize
  SEXP Rsh_Fir_reg_keep_class;  // keep_class
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_perm_isMissing;  // perm_isMissing
  SEXP Rsh_Fir_reg_perm_orDefault;  // perm_orDefault
  SEXP Rsh_Fir_reg_resize_isMissing;  // resize_isMissing
  SEXP Rsh_Fir_reg_resize_orDefault;  // resize_orDefault
  SEXP Rsh_Fir_reg_keep_class_isMissing;  // keep_class_isMissing
  SEXP Rsh_Fir_reg_keep_class_orDefault;  // keep_class_orDefault
  SEXP Rsh_Fir_reg_aperm_default;  // aperm_default
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_a2_;  // a2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_perm1_;  // perm1
  SEXP Rsh_Fir_reg_perm2_;  // perm2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_resize1_;  // resize1
  SEXP Rsh_Fir_reg_resize2_;  // resize2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_keep_class1_;  // keep_class1
  SEXP Rsh_Fir_reg_keep_class2_;  // keep_class2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_a3_;  // a3
  SEXP Rsh_Fir_reg_a4_;  // a4
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10

  // Bind parameters
  Rsh_Fir_reg_a = PARAMS[0];
  Rsh_Fir_reg_perm = PARAMS[1];
  Rsh_Fir_reg_resize = PARAMS[2];
  Rsh_Fir_reg_keep_class = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st a = a
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_a, RHO);
  (void)(Rsh_Fir_reg_a);
  // perm_isMissing = missing.0(perm)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_perm;
  Rsh_Fir_reg_perm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if perm_isMissing then L0(NULL) else L0(perm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_perm_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_perm_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(perm)
    Rsh_Fir_reg_perm_orDefault = Rsh_Fir_reg_perm;
    goto L0_;
  }

L0_:;
  // st perm = perm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_perm_orDefault, RHO);
  (void)(Rsh_Fir_reg_perm_orDefault);
  // resize_isMissing = missing.0(resize)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_resize;
  Rsh_Fir_reg_resize_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if resize_isMissing then L1(TRUE) else L1(resize)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_resize_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_resize_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(resize)
    Rsh_Fir_reg_resize_orDefault = Rsh_Fir_reg_resize;
    goto L1_;
  }

L1_:;
  // st resize = resize_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_resize_orDefault, RHO);
  (void)(Rsh_Fir_reg_resize_orDefault);
  // keep_class_isMissing = missing.0(keep_class)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_keep_class;
  Rsh_Fir_reg_keep_class_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if keep_class_isMissing then L2(TRUE) else L2(keep_class)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_keep_class_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_keep_class_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(keep_class)
    Rsh_Fir_reg_keep_class_orDefault = Rsh_Fir_reg_keep_class;
    goto L2_;
  }

L2_:;
  // st `keep.class` = keep_class_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_keep_class_orDefault, RHO);
  (void)(Rsh_Fir_reg_keep_class_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // aperm_default = ldf `aperm.default`
  Rsh_Fir_reg_aperm_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L3_:;
  // goto L5()
  // L5()
  goto L5_;

L4_:;
  // l = ld r
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

L5_:;
  // r9 = ld r
  Rsh_Fir_reg_r9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   a1 = ld a;
  //   a2 = force? a1;
  //   checkMissing(a2);
  //   return a2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3347573810_, CCP, RHO);
  // p1 = prom<V +>{
  //   perm1 = ld perm;
  //   perm2 = force? perm1;
  //   checkMissing(perm2);
  //   return perm2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3347573810_1, CCP, RHO);
  // p2 = prom<V +>{
  //   resize1 = ld resize;
  //   resize2 = force? resize1;
  //   checkMissing(resize2);
  //   return resize2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3347573810_2, CCP, RHO);
  // r3 = dyn aperm_default[, , resize](p, p1, p2)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aperm_default, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // st r = r3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // keep_class1 = ld `keep.class`
  Rsh_Fir_reg_keep_class1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 8 [keep_class1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_keep_class1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // keep_class2 = force? keep_class1
  Rsh_Fir_reg_keep_class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep_class1_);
  // checkMissing(keep_class2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_keep_class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(keep_class2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_keep_class2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c then L9() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L3()
    goto L3_;
  }

L9_:;
  // sym = ldf class
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf class in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // a3 = ld a
  Rsh_Fir_reg_a3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L11_:;
  // r4 = dyn base(<sym a>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

D3_:;
  // deopt 12 [a3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_a3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // a4 = force? a3
  Rsh_Fir_reg_a4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a3_);
  // checkMissing(a4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_a4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r6 = dyn class(a4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_a4_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;

D5_:;
  // deopt 17 [r5, l, r5]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(17, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // r7 = dyn class__(l, NULL, r5)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 19 [r5, r7]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // st r = r7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // goto L5()
  // L5()
  goto L5_;

D7_:;
  // deopt 23 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // r10 = force? r9
  Rsh_Fir_reg_r10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r9_);
  // checkMissing(r10)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3347573810_(SEXP CCP, SEXP RHO) {
  // a1 = ld a
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return a2
  return Rsh_Fir_reg_a2_;
}
SEXP Rsh_Fir_user_promise_inner3347573810_1(SEXP CCP, SEXP RHO) {
  // perm1 = ld perm
  Rsh_Fir_reg_perm1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // perm2 = force? perm1
  Rsh_Fir_reg_perm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_perm1_);
  // checkMissing(perm2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_perm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return perm2
  return Rsh_Fir_reg_perm2_;
}
SEXP Rsh_Fir_user_promise_inner3347573810_2(SEXP CCP, SEXP RHO) {
  // resize1 = ld resize
  Rsh_Fir_reg_resize1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // resize2 = force? resize1
  Rsh_Fir_reg_resize2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_resize1_);
  // checkMissing(resize2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_resize2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return resize2
  return Rsh_Fir_reg_resize2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
