#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4231209718_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4231209718_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4231209718
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4231209718_, RHO, CCP);
  // st `aperm.default` = r
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
SEXP Rsh_Fir_user_function_inner4231209718_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4231209718 dynamic dispatch ([a, perm, resize, `...`])

  return Rsh_Fir_user_version_inner4231209718_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4231209718_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4231209718 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner4231209718/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_perm;  // perm
  SEXP Rsh_Fir_reg_resize;  // resize
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_perm_isMissing;  // perm_isMissing
  SEXP Rsh_Fir_reg_perm_orDefault;  // perm_orDefault
  SEXP Rsh_Fir_reg_resize_isMissing;  // resize_isMissing
  SEXP Rsh_Fir_reg_resize_orDefault;  // resize_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_a2_;  // a2
  SEXP Rsh_Fir_reg_perm1_;  // perm1
  SEXP Rsh_Fir_reg_perm2_;  // perm2
  SEXP Rsh_Fir_reg_resize1_;  // resize1
  SEXP Rsh_Fir_reg_resize2_;  // resize2
  SEXP Rsh_Fir_reg_aperm;  // aperm
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_a = PARAMS[0];
  Rsh_Fir_reg_perm = PARAMS[1];
  Rsh_Fir_reg_resize = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

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
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L3_:;
  // a1 = ld a
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r = dyn base(<lang aperm(a, perm, resize)>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [a1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // perm1 = ld perm
  Rsh_Fir_reg_perm1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 4 [perm1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_perm1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // perm2 = force? perm1
  Rsh_Fir_reg_perm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_perm1_);
  // checkMissing(perm2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_perm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // resize1 = ld resize
  Rsh_Fir_reg_resize1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 6 [resize1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_resize1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // resize2 = force? resize1
  Rsh_Fir_reg_resize2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_resize1_);
  // checkMissing(resize2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_resize2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // aperm = ldf aperm in base
  Rsh_Fir_reg_aperm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn aperm(a2, perm2, resize2)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_a2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_perm2_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_resize2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aperm, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
