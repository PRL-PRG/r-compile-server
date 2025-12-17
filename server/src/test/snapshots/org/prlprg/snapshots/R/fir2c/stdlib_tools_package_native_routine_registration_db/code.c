#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2475533896_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2475533896_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2475533896_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2475533896_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2475533896_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2475533896_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner2475533896
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2475533896_, RHO, CCP);
  // st package_native_routine_registration_db = r
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
SEXP Rsh_Fir_user_function_inner2475533896_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2475533896 dynamic dispatch ([dir, character_only])

  return Rsh_Fir_user_version_inner2475533896_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2475533896_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2475533896 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2475533896/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_character_only;  // character_only
  SEXP Rsh_Fir_reg_character_only_isMissing;  // character_only_isMissing
  SEXP Rsh_Fir_reg_character_only_orDefault;  // character_only_orDefault
  SEXP Rsh_Fir_reg_package_ff_call_db;  // package_ff_call_db
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_dir2_;  // dir2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_native_routine_registration_db_from_ff_call_db;  // native_routine_registration_db_from_ff_call_db
  SEXP Rsh_Fir_reg_calls;  // calls
  SEXP Rsh_Fir_reg_calls1_;  // calls1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_dir3_;  // dir3
  SEXP Rsh_Fir_reg_dir4_;  // dir4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_character_only1_;  // character_only1
  SEXP Rsh_Fir_reg_character_only2_;  // character_only2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r5_;  // r5

  // Bind parameters
  Rsh_Fir_reg_dir = PARAMS[0];
  Rsh_Fir_reg_character_only = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st dir = dir
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dir, RHO);
  (void)(Rsh_Fir_reg_dir);
  // character_only_isMissing = missing.0(character_only)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_character_only;
  Rsh_Fir_reg_character_only_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if character_only_isMissing then L0(TRUE) else L0(character_only)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_character_only_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_character_only_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(character_only)
    Rsh_Fir_reg_character_only_orDefault = Rsh_Fir_reg_character_only;
    goto L0_;
  }

L0_:;
  // st character_only = character_only_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_character_only_orDefault, RHO);
  (void)(Rsh_Fir_reg_character_only_orDefault);
  // package_ff_call_db = ldf package_ff_call_db
  Rsh_Fir_reg_package_ff_call_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   dir1 = ld dir;
  //   dir2 = force? dir1;
  //   checkMissing(dir2);
  //   return dir2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2475533896_, CCP, RHO);
  // r1 = dyn package_ff_call_db(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_package_ff_call_db, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st calls = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // native_routine_registration_db_from_ff_call_db = ldf native_routine_registration_db_from_ff_call_db
  Rsh_Fir_reg_native_routine_registration_db_from_ff_call_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   calls = ld calls;
  //   calls1 = force? calls;
  //   checkMissing(calls1);
  //   return calls1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2475533896_1, CCP, RHO);
  // p2 = prom<V +>{
  //   dir3 = ld dir;
  //   dir4 = force? dir3;
  //   checkMissing(dir4);
  //   return dir4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2475533896_2, CCP, RHO);
  // p3 = prom<V +>{
  //   character_only1 = ld character_only;
  //   character_only2 = force? character_only1;
  //   checkMissing(character_only2);
  //   return character_only2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2475533896_3, CCP, RHO);
  // r5 = dyn native_routine_registration_db_from_ff_call_db(p1, p2, p3)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_native_routine_registration_db_from_ff_call_db, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner2475533896_(SEXP CCP, SEXP RHO) {
  // dir1 = ld dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dir2 = force? dir1
  Rsh_Fir_reg_dir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir1_);
  // checkMissing(dir2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_dir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return dir2
  return Rsh_Fir_reg_dir2_;
}
SEXP Rsh_Fir_user_promise_inner2475533896_1(SEXP CCP, SEXP RHO) {
  // calls = ld calls
  Rsh_Fir_reg_calls = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // calls1 = force? calls
  Rsh_Fir_reg_calls1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_calls);
  // checkMissing(calls1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_calls1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return calls1
  return Rsh_Fir_reg_calls1_;
}
SEXP Rsh_Fir_user_promise_inner2475533896_2(SEXP CCP, SEXP RHO) {
  // dir3 = ld dir
  Rsh_Fir_reg_dir3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dir4 = force? dir3
  Rsh_Fir_reg_dir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir3_);
  // checkMissing(dir4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return dir4
  return Rsh_Fir_reg_dir4_;
}
SEXP Rsh_Fir_user_promise_inner2475533896_3(SEXP CCP, SEXP RHO) {
  // character_only1 = ld character_only
  Rsh_Fir_reg_character_only1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // character_only2 = force? character_only1
  Rsh_Fir_reg_character_only2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_character_only1_);
  // checkMissing(character_only2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_character_only2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return character_only2
  return Rsh_Fir_reg_character_only2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
