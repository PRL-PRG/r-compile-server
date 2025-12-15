#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);


  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st a = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // st b = 2.0
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // st c = 3.0
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // a = ld a
  SEXP Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0;

D0:;
  // deopt 9 [a]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0:;
  // a1 = force? a
  SEXP Rsh_Fir_reg_a1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_a1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // b = ld b
  SEXP Rsh_Fir_reg_b = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L1() else D1()
  // L1()
  goto L1;

D1:;
  // deopt 10 [a1, b]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_a1;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_b;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1:;
  // b1 = force? b
  SEXP Rsh_Fir_reg_b1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_b);
  // checkMissing(b1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_b1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `+`(a1, b1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_a1;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_b1;
  SEXP Rsh_Fir_reg_r = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // a2 = ld a
  SEXP Rsh_Fir_reg_a2 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2;

D2:;
  // deopt 12 [r, a2]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_a2;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L2:;
  // a3 = force? a2
  SEXP Rsh_Fir_reg_a3 = Rsh_Fir_maybe_force(Rsh_Fir_reg_a2);
  // checkMissing(a3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_a3;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = ld c
  SEXP Rsh_Fir_reg_c = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L3() else D3()
  // L3()
  goto L3;

D3:;
  // deopt 13 [r, a3, c]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_a3;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3:;
  // c1 = force? c
  SEXP Rsh_Fir_reg_c1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_c);
  // checkMissing(c1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r1 = `+`(a3, c1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_a3;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // r2 = `*`(r, r1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
