#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3147354972_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3147354972_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3147354972
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3147354972_, RHO, CCP);
  // st methodsPackageMetaName = r
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
SEXP Rsh_Fir_user_function_inner3147354972_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3147354972 dynamic dispatch ([prefix, name, package])

  return Rsh_Fir_user_version_inner3147354972_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3147354972_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3147354972 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3147354972/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_prefix;  // prefix
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_package_isMissing;  // package_isMissing
  SEXP Rsh_Fir_reg_package_orDefault;  // package_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_R_methodsPackageMetaName;  // C_R_methodsPackageMetaName
  SEXP Rsh_Fir_reg_C_R_methodsPackageMetaName1_;  // C_R_methodsPackageMetaName1
  SEXP Rsh_Fir_reg_prefix1_;  // prefix1
  SEXP Rsh_Fir_reg_prefix2_;  // prefix2
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_prefix = PARAMS[0];
  Rsh_Fir_reg_name = PARAMS[1];
  Rsh_Fir_reg_package = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st prefix = prefix
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_prefix, RHO);
  (void)(Rsh_Fir_reg_prefix);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // package_isMissing = missing.0(package)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_package;
  Rsh_Fir_reg_package_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if package_isMissing then L0("") else L0(package)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_package_isMissing)) {
  // L0("")
    Rsh_Fir_reg_package_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(package)
    Rsh_Fir_reg_package_orDefault = Rsh_Fir_reg_package;
    goto L0_;
  }

L0_:;
  // st package = package_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_package_orDefault, RHO);
  (void)(Rsh_Fir_reg_package_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L2_:;
  // C_R_methodsPackageMetaName = ld C_R_methodsPackageMetaName
  Rsh_Fir_reg_C_R_methodsPackageMetaName = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym C_R_methodsPackageMetaName>, <sym prefix>, <sym name>, <sym package>)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [C_R_methodsPackageMetaName]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_R_methodsPackageMetaName;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // C_R_methodsPackageMetaName1 = force? C_R_methodsPackageMetaName
  Rsh_Fir_reg_C_R_methodsPackageMetaName1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_R_methodsPackageMetaName);
  // checkMissing(C_R_methodsPackageMetaName1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_C_R_methodsPackageMetaName1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // prefix1 = ld prefix
  Rsh_Fir_reg_prefix1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 2 [C_R_methodsPackageMetaName1, prefix1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_R_methodsPackageMetaName1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_prefix1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // prefix2 = force? prefix1
  Rsh_Fir_reg_prefix2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prefix1_);
  // checkMissing(prefix2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_prefix2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 3 [C_R_methodsPackageMetaName1, prefix2, name1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_R_methodsPackageMetaName1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_prefix2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 4 [C_R_methodsPackageMetaName1, prefix2, name2, package1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_R_methodsPackageMetaName1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_prefix2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_name2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // vargs = dots[prefix2, name2, package2]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_prefix2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_name2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_package2_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_R_methodsPackageMetaName1, vargs, <missing>)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_C_R_methodsPackageMetaName1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
