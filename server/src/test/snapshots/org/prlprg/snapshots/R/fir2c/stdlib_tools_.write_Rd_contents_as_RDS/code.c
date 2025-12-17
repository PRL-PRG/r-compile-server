#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2215012248_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2215012248_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2215012248_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2215012248_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2215012248
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2215012248_, RHO, CCP);
  // st `.write_Rd_contents_as_RDS` = r
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
SEXP Rsh_Fir_user_function_inner2215012248_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2215012248 dynamic dispatch ([contents, outFile])

  return Rsh_Fir_user_version_inner2215012248_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2215012248_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2215012248 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2215012248/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_contents;  // contents
  SEXP Rsh_Fir_reg_outFile;  // outFile
  SEXP Rsh_Fir_reg_saveRDS;  // saveRDS
  SEXP Rsh_Fir_reg_contents1_;  // contents1
  SEXP Rsh_Fir_reg_contents2_;  // contents2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_outFile1_;  // outFile1
  SEXP Rsh_Fir_reg_outFile2_;  // outFile2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_contents = PARAMS[0];
  Rsh_Fir_reg_outFile = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st contents = contents
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_contents, RHO);
  (void)(Rsh_Fir_reg_contents);
  // st outFile = outFile
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_outFile, RHO);
  (void)(Rsh_Fir_reg_outFile);
  // saveRDS = ldf saveRDS
  Rsh_Fir_reg_saveRDS = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   contents1 = ld contents;
  //   contents2 = force? contents1;
  //   checkMissing(contents2);
  //   return contents2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2215012248_, CCP, RHO);
  // p1 = prom<V +>{
  //   outFile1 = ld outFile;
  //   outFile2 = force? outFile1;
  //   checkMissing(outFile2);
  //   return outFile2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2215012248_1, CCP, RHO);
  // r2 = dyn saveRDS[, file, compress](p, p1, TRUE)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_saveRDS, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner2215012248_(SEXP CCP, SEXP RHO) {
  // contents1 = ld contents
  Rsh_Fir_reg_contents1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // contents2 = force? contents1
  Rsh_Fir_reg_contents2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contents1_);
  // checkMissing(contents2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_contents2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return contents2
  return Rsh_Fir_reg_contents2_;
}
SEXP Rsh_Fir_user_promise_inner2215012248_1(SEXP CCP, SEXP RHO) {
  // outFile1 = ld outFile
  Rsh_Fir_reg_outFile1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // outFile2 = force? outFile1
  Rsh_Fir_reg_outFile2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outFile1_);
  // checkMissing(outFile2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_outFile2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return outFile2
  return Rsh_Fir_reg_outFile2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
