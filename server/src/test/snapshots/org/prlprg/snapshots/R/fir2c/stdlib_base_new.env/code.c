#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2373280127_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2373280127_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2373280127_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2373280127
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2373280127_, RHO, CCP);
  // st `new.env` = r
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
SEXP Rsh_Fir_user_function_inner2373280127_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2373280127 dynamic dispatch ([hash, parent, size])

  return Rsh_Fir_user_version_inner2373280127_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2373280127_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2373280127 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2373280127/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_hash;  // hash
  SEXP Rsh_Fir_reg_parent;  // parent
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_hash_isMissing;  // hash_isMissing
  SEXP Rsh_Fir_reg_hash_orDefault;  // hash_orDefault
  SEXP Rsh_Fir_reg_parent_isMissing;  // parent_isMissing
  SEXP Rsh_Fir_reg_parent_orDefault;  // parent_orDefault
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_size_isMissing;  // size_isMissing
  SEXP Rsh_Fir_reg_size_orDefault;  // size_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_hash1_;  // hash1
  SEXP Rsh_Fir_reg_hash2_;  // hash2
  SEXP Rsh_Fir_reg_parent1_;  // parent1
  SEXP Rsh_Fir_reg_parent2_;  // parent2
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_new_env;  // new_env
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_hash = PARAMS[0];
  Rsh_Fir_reg_parent = PARAMS[1];
  Rsh_Fir_reg_size = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // hash_isMissing = missing.0(hash)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_hash;
  Rsh_Fir_reg_hash_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if hash_isMissing then L0(TRUE) else L0(hash)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hash_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_hash_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(hash)
    Rsh_Fir_reg_hash_orDefault = Rsh_Fir_reg_hash;
    goto L0_;
  }

L0_:;
  // st hash = hash_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_hash_orDefault, RHO);
  (void)(Rsh_Fir_reg_hash_orDefault);
  // parent_isMissing = missing.0(parent)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_parent;
  Rsh_Fir_reg_parent_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if parent_isMissing then L1() else L2(parent)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_parent_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(parent)
    Rsh_Fir_reg_parent_orDefault = Rsh_Fir_reg_parent;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2373280127_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_parent_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st parent = parent_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_parent_orDefault, RHO);
  (void)(Rsh_Fir_reg_parent_orDefault);
  // size_isMissing = missing.0(size)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_size;
  Rsh_Fir_reg_size_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if size_isMissing then L3(29) else L3(size)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_size_isMissing)) {
  // L3(29)
    Rsh_Fir_reg_size_orDefault = Rsh_const(CCP, 5);
    goto L3_;
  } else {
  // L3(size)
    Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_size;
    goto L3_;
  }

L3_:;
  // st size = size_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_size_orDefault, RHO);
  (void)(Rsh_Fir_reg_size_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

L5_:;
  // hash1 = ld hash
  Rsh_Fir_reg_hash1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base(<lang new.env(hash, parent, size)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L4_;

D0_:;
  // deopt 2 [hash1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_hash1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // hash2 = force? hash1
  Rsh_Fir_reg_hash2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hash1_);
  // checkMissing(hash2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_hash2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // parent1 = ld parent
  Rsh_Fir_reg_parent1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 4 [parent1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_parent1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // parent2 = force? parent1
  Rsh_Fir_reg_parent2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parent1_);
  // checkMissing(parent2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_parent2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 6 [size1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_size1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // new_env = ldf `new.env` in base
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r4 = dyn new_env(hash2, parent2, size2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_hash2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_parent2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_size2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner2373280127_(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
