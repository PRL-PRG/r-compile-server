#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner430904460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner430904460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner430904460
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner430904460_, RHO, CCP);
  // st `.allowPrimitiveMethods` = r
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
SEXP Rsh_Fir_user_function_inner430904460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner430904460 dynamic dispatch ([onOff])

  return Rsh_Fir_user_version_inner430904460_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner430904460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner430904460 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner430904460/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_onOff;  // onOff
  SEXP Rsh_Fir_reg_onOff1_;  // onOff1
  SEXP Rsh_Fir_reg_onOff2_;  // onOff2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_C_R_M_setPrimitiveMethods;  // C_R_M_setPrimitiveMethods
  SEXP Rsh_Fir_reg_C_R_M_setPrimitiveMethods1_;  // C_R_M_setPrimitiveMethods1
  SEXP Rsh_Fir_reg_code;  // code
  SEXP Rsh_Fir_reg_code1_;  // code1
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r3_;  // r3

  // Bind parameters
  Rsh_Fir_reg_onOff = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st onOff = onOff
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_onOff, RHO);
  (void)(Rsh_Fir_reg_onOff);
  // onOff1 = ld onOff
  Rsh_Fir_reg_onOff1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // goto L1("CLEAR")
  // L1("CLEAR")
  Rsh_Fir_reg_r1 = Rsh_const(CCP, 2);
  goto L1_;

L1_:;
  // st code = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;

D0_:;
  // deopt 0 [onOff1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_onOff1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // onOff2 = force? onOff1
  Rsh_Fir_reg_onOff2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_onOff1_);
  // checkMissing(onOff2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_onOff2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(onOff2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_onOff2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L4() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L0()
    goto L0_;
  }

L4_:;
  // goto L1("SET")
  // L1("SET")
  Rsh_Fir_reg_r1 = Rsh_const(CCP, 5);
  goto L1_;

L6_:;
  // C_R_M_setPrimitiveMethods = ld C_R_M_setPrimitiveMethods
  Rsh_Fir_reg_C_R_M_setPrimitiveMethods = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L7_:;
  // r1 = dyn base(<sym C_R_M_setPrimitiveMethods>, "", NULL, <sym code>, NULL, NULL)
  SEXP Rsh_Fir_array_args3[6];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[4] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[5] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[6];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 6, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r1)
  // L2(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L2_;

D1_:;
  // deopt 8 [C_R_M_setPrimitiveMethods]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_R_M_setPrimitiveMethods;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // C_R_M_setPrimitiveMethods1 = force? C_R_M_setPrimitiveMethods
  Rsh_Fir_reg_C_R_M_setPrimitiveMethods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_R_M_setPrimitiveMethods);
  // checkMissing(C_R_M_setPrimitiveMethods1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_C_R_M_setPrimitiveMethods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // code = ld code
  Rsh_Fir_reg_code = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 11 [C_R_M_setPrimitiveMethods1, "", NULL, code]
  SEXP Rsh_Fir_array_deopt_stack2[4];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_R_M_setPrimitiveMethods1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_code;
  Rsh_Fir_deopt(11, 4, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // code1 = force? code
  Rsh_Fir_reg_code1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_code);
  // checkMissing(code1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_code1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // vargs = dots["", NULL, code1, NULL, NULL]
  SEXP Rsh_Fir_array_vector_values[5];
  Rsh_Fir_array_vector_values[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_vector_values[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_code1_;
  Rsh_Fir_array_vector_values[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_vector_values[4] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_vector_names[5];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 5, Rsh_Fir_array_vector_values, NULL);
  // r3 = `.Call`(C_R_M_setPrimitiveMethods1, vargs, <missing>)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_C_R_M_setPrimitiveMethods1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
