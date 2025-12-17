#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1187992269_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1187992269_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1187992269_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1187992269_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1187992269_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_mat_or_vec;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_mat_or_vec1_;
  SEXP Rsh_Fir_reg_r2_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1187992269
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1187992269_, RHO, CCP);
  // st `mat.or.vec` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // mat_or_vec = ldf `mat.or.vec`
  Rsh_Fir_reg_mat_or_vec = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn mat_or_vec(3.0, 1.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mat_or_vec, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // mat_or_vec1 = ldf `mat.or.vec`
  Rsh_Fir_reg_mat_or_vec1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn mat_or_vec1(3.0, 2.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mat_or_vec1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_function_inner1187992269_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1187992269 dynamic dispatch ([nr, nc])

  return Rsh_Fir_user_version_inner1187992269_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1187992269_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1187992269 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1187992269/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_nr;
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;
  SEXP Rsh_Fir_reg_nc2_;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r5_;

  // Bind parameters
  Rsh_Fir_reg_nr = PARAMS[0];
  Rsh_Fir_reg_nc = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st nr = nr
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_nr, RHO);
  (void)(Rsh_Fir_reg_nr);
  // st nc = nc
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_nc, RHO);
  (void)(Rsh_Fir_reg_nc);
  // nc1 = ld nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 0 [nc1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L1_:;
  // nc2 = force? nc1
  Rsh_Fir_reg_nc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc1_);
  // checkMissing(nc2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_nc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // r = `==`(nc2, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_nc2_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args3);
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c then L2() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2()
    goto L2_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

L2_:;
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   nr1 = ld nr;
  //   nr2 = force? nr1;
  //   checkMissing(nr2);
  //   return nr2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1187992269_, 0, NULL, CCP, RHO);
  // r2 = dyn numeric(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

L6_:;
  // p1 = prom<V +>{
  //   nr3 = ld nr;
  //   nr4 = force? nr3;
  //   checkMissing(nr4);
  //   return nr4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1187992269_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   nc3 = ld nc;
  //   nc4 = force? nc3;
  //   checkMissing(nc4);
  //   return nc4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1187992269_2, 0, NULL, CCP, RHO);
  // r5 = dyn matrix(0.0, p1, p2)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D2_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_1;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner1187992269_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nr1_;
  SEXP Rsh_Fir_reg_nr2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1187992269/0: expected 0, got %d", NCAPTURES);

  // nr1 = ld nr
  Rsh_Fir_reg_nr1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // nr2 = force? nr1
  Rsh_Fir_reg_nr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr1_);
  // checkMissing(nr2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_nr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return nr2
  return Rsh_Fir_reg_nr2_;
}
SEXP Rsh_Fir_user_promise_inner1187992269_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nr3_;
  SEXP Rsh_Fir_reg_nr4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1187992269/0: expected 0, got %d", NCAPTURES);

  // nr3 = ld nr
  Rsh_Fir_reg_nr3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // nr4 = force? nr3
  Rsh_Fir_reg_nr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr3_);
  // checkMissing(nr4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_nr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return nr4
  return Rsh_Fir_reg_nr4_;
}
SEXP Rsh_Fir_user_promise_inner1187992269_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc3_;
  SEXP Rsh_Fir_reg_nc4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1187992269/0: expected 0, got %d", NCAPTURES);

  // nc3 = ld nc
  Rsh_Fir_reg_nc3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // nc4 = force? nc3
  Rsh_Fir_reg_nc4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc3_);
  // checkMissing(nc4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_nc4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return nc4
  return Rsh_Fir_reg_nc4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
