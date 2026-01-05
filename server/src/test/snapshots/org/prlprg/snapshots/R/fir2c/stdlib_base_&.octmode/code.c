#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_inner3950065357_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner3950065357_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3950065357_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3950065357_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3950065357_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3950065357_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3950065357_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3950065357_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3950065357
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3950065357_, RHO, CCP);
  // st `&.octmode` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_from_R_inner3950065357_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner3950065357 dynamic dispatch from R ([a, b])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner3950065357_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner3950065357_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3950065357 dynamic dispatch ([a, b])

  return Rsh_Fir_user_version_inner3950065357_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3950065357_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3950065357 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3950065357/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_a;
  SEXP Rsh_Fir_reg_b;
  SEXP Rsh_Fir_reg_as_octmode;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r8_;

  // Bind parameters
  Rsh_Fir_reg_a = PARAMS[0];
  Rsh_Fir_reg_b = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st a = a
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_a, RHO);
  (void)(Rsh_Fir_reg_a);
  // st b = b
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_b, RHO);
  (void)(Rsh_Fir_reg_b);
  // as_octmode = ldf `as.octmode`
  Rsh_Fir_reg_as_octmode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p4 = prom<V +>{
  //   bitwAnd = ldf bitwAnd;
  //   p1 = prom<V +>{
  //     as_octmode1 = ldf `as.octmode`;
  //     p = prom<V +>{
  //       a1 = ld a;
  //       a2 = force? a1;
  //       checkMissing(a2);
  //       return a2;
  //     };
  //     r1 = dyn as_octmode1(p);
  //     return r1;
  //   };
  //   p3 = prom<V +>{
  //     as_octmode2 = ldf `as.octmode`;
  //     p2 = prom<V +>{
  //       b1 = ld b;
  //       b2 = force? b1;
  //       checkMissing(b2);
  //       return b2;
  //     };
  //     r4 = dyn as_octmode2(p2);
  //     return r4;
  //   };
  //   r6 = dyn bitwAnd(p1, p3);
  //   return r6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3950065357_, 0, NULL, CCP, RHO);
  // r8 = dyn as_octmode(p4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_octmode, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner3950065357_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bitwAnd;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3950065357/0: expected 0, got %d", NCAPTURES);

  // bitwAnd = ldf bitwAnd
  Rsh_Fir_reg_bitwAnd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // p1 = prom<V +>{
  //   as_octmode1 = ldf `as.octmode`;
  //   p = prom<V +>{
  //     a1 = ld a;
  //     a2 = force? a1;
  //     checkMissing(a2);
  //     return a2;
  //   };
  //   r1 = dyn as_octmode1(p);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3950065357_1, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   as_octmode2 = ldf `as.octmode`;
  //   p2 = prom<V +>{
  //     b1 = ld b;
  //     b2 = force? b1;
  //     checkMissing(b2);
  //     return b2;
  //   };
  //   r4 = dyn as_octmode2(p2);
  //   return r4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3950065357_3, 0, NULL, CCP, RHO);
  // r6 = dyn bitwAnd(p1, p3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bitwAnd, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner3950065357_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_octmode1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3950065357/0: expected 0, got %d", NCAPTURES);

  // as_octmode1 = ldf `as.octmode`
  Rsh_Fir_reg_as_octmode1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p = prom<V +>{
  //   a1 = ld a;
  //   a2 = force? a1;
  //   checkMissing(a2);
  //   return a2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3950065357_2, 0, NULL, CCP, RHO);
  // r1 = dyn as_octmode1(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_octmode1_, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner3950065357_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_a2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3950065357/0: expected 0, got %d", NCAPTURES);

  // a1 = ld a
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return a2
  return Rsh_Fir_reg_a2_;
}
SEXP Rsh_Fir_user_promise_inner3950065357_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_octmode2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3950065357/0: expected 0, got %d", NCAPTURES);

  // as_octmode2 = ldf `as.octmode`
  Rsh_Fir_reg_as_octmode2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p2 = prom<V +>{
  //   b1 = ld b;
  //   b2 = force? b1;
  //   checkMissing(b2);
  //   return b2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3950065357_4, 0, NULL, CCP, RHO);
  // r4 = dyn as_octmode2(p2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_octmode2_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3950065357_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_b1_;
  SEXP Rsh_Fir_reg_b2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3950065357/0: expected 0, got %d", NCAPTURES);

  // b1 = ld b
  Rsh_Fir_reg_b1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // b2 = force? b1
  Rsh_Fir_reg_b2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b1_);
  // checkMissing(b2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_b2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return b2
  return Rsh_Fir_reg_b2_;
}
