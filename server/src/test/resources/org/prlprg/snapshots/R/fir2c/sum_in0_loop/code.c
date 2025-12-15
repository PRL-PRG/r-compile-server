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
  // st n = 100.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // st s = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // st i = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // goto L1()
  // L1()
  goto L1;

L0:;
  // s2 = ld s
  SEXP Rsh_Fir_reg_s2 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D5()
  // L9()
  goto L9;

L1:;
  // i = ld i
  SEXP Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L2() else D0()
  // L2()
  goto L2;

D0:;
  // deopt 9 [i]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2:;
  // i1 = force? i
  SEXP Rsh_Fir_reg_i1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_i1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // n = ld n
  SEXP Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L3() else D1()
  // L3()
  goto L3;

D1:;
  // deopt 10 [i1, n]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i1;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3:;
  // n1 = force? n
  SEXP Rsh_Fir_reg_n1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_n1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `<`(i1, n1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_n1;
  SEXP Rsh_Fir_reg_r = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L4() else L0()
  if (Rsh_Fir_is_true(c)) {
  // L4()
    goto L4;
  } else {
  // L0()
    goto L0;
  }

L4:;
  // s = ld s
  SEXP Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L5() else D2()
  // L5()
  goto L5;

D2:;
  // deopt 13 [s]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5:;
  // s1 = force? s
  SEXP Rsh_Fir_reg_s1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // i2 = ld i
  SEXP Rsh_Fir_reg_i2 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L6() else D3()
  // L6()
  goto L6;

D3:;
  // deopt 14 [s1, i2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_s1;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_i2;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6:;
  // i3 = force? i2
  SEXP Rsh_Fir_reg_i3 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i3;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // r1 = `+`(s1, i3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s1;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i3;
  SEXP Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // st s = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // i4 = ld i
  SEXP Rsh_Fir_reg_i4 = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L7() else D4()
  // L7()
  goto L7;

D4:;
  // deopt 18 [i4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i4;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7:;
  // i5 = force? i4
  SEXP Rsh_Fir_reg_i5 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i4);
  // checkMissing(i5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i5;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r2 = `+`(i5, 1.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_i5;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st i = r2
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r2, RHO);
  (void)(Rsh_Fir_reg_r2);
  // goto L1()
  // L1()
  goto L1;

D5:;
  // deopt 26 [s2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_s2;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L9:;
  // s3 = force? s2
  SEXP Rsh_Fir_reg_s3 = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2);
  // checkMissing(s3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s3;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return s3
  return Rsh_Fir_reg_s3;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
