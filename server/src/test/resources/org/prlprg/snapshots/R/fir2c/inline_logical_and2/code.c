#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);


  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // st y = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // st z = NA_LGL
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // x = ld x
  SEXP Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // c6 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c6 then L6() else L1(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L6()
    goto L6_;
  } else {
  // L1(c6)
    SEXP Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L1_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c8
  return Rsh_Fir_reg_c8_;

D0_:;
  // deopt 9 [x]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // x1 = force? x
  SEXP Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(x1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L3() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L0(c)
    SEXP Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L0_;
  }

L3_:;
  // y = ld y
  SEXP Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 11 [c, y]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // y1 = force? y
  SEXP Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(y1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L0(c4)
  // L0(c4)
  SEXP Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c4_;
  goto L0_;

L6_:;
  // z = ld z
  SEXP Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 14 [c6, z]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // z1 = force? z
  SEXP Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(z1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c10 = `&&`(c6, c9)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L1(c10)
  // L1(c10)
  SEXP Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c10_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
