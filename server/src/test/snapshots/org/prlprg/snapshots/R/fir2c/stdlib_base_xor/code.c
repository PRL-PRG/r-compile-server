#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner799576941
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // st xor = r
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
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner799576941 dynamic dispatch ([x, y])

  return Rsh_Fir_user_version_inner799576941_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner799576941 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner799576941/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 1 [x2, y1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `||`(x2, y2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 3 [r, x3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L2_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 4 [r, x4, y3]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(4, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r1 = `&&`(x4, y4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_y4_;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // r3 = `&&`(r, r2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
