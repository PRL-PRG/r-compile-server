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

  // Declare locals
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_s2_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_s3_;
  SEXP Rsh_Fir_reg_s4_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args1);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 3);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c then L2() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2()
    goto L2_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args4);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // s3 = ld s
  Rsh_Fir_reg_s3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D0_:;
  // deopt 5 [i2, s1]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 13 [s3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // s4 = force? s3
  Rsh_Fir_reg_s4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s3_);
  // checkMissing(s4)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return s4
  return Rsh_Fir_reg_s4_;

D1_:;
  // deopt 6 [i2, s2, i5]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L4_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r = `+`(s2, i6)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_r = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args8);
  // st s = r
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // goto L0(i2)
  // L0(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
