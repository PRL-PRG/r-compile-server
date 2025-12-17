#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3810887275_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3810887275_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3810887275_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3810887275_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3810887275_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3810887275
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3810887275_, RHO, CCP);
  // st warnRd = r
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
SEXP Rsh_Fir_user_function_inner3810887275_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3810887275 dynamic dispatch ([block, Rdfile, `...`])

  return Rsh_Fir_user_version_inner3810887275_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3810887275_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3810887275 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3810887275/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_block;  // block
  SEXP Rsh_Fir_reg_Rdfile;  // Rdfile
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg__makeMessageRd;  // _makeMessageRd
  SEXP Rsh_Fir_reg_block1_;  // block1
  SEXP Rsh_Fir_reg_block2_;  // block2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_Rdfile1_;  // Rdfile1
  SEXP Rsh_Fir_reg_Rdfile2_;  // Rdfile2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_msg;  // msg
  SEXP Rsh_Fir_reg_msg1_;  // msg1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_block = PARAMS[0];
  Rsh_Fir_reg_Rdfile = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st block = block
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_block, RHO);
  (void)(Rsh_Fir_reg_block);
  // st Rdfile = Rdfile
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_Rdfile, RHO);
  (void)(Rsh_Fir_reg_Rdfile);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // _makeMessageRd = ldf `.makeMessageRd`
  Rsh_Fir_reg__makeMessageRd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   block1 = ld block;
  //   block2 = force? block1;
  //   checkMissing(block2);
  //   return block2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3810887275_, CCP, RHO);
  // p1 = prom<V +>{
  //   Rdfile1 = ld Rdfile;
  //   Rdfile2 = force? Rdfile1;
  //   checkMissing(Rdfile2);
  //   return Rdfile2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3810887275_1, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r2 = dyn _makeMessageRd[, , `...`](p, p1, ddd1)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args2[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__makeMessageRd, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st msg = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   msg = ld msg;
  //   msg1 = force? msg;
  //   checkMissing(msg1);
  //   return msg1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3810887275_2, CCP, RHO);
  // r4 = dyn warning[, `call.`, domain, `immediate.`](p2, FALSE, NA_LGL, TRUE)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 4, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner3810887275_(SEXP CCP, SEXP RHO) {
  // block1 = ld block
  Rsh_Fir_reg_block1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // block2 = force? block1
  Rsh_Fir_reg_block2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_block1_);
  // checkMissing(block2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_block2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return block2
  return Rsh_Fir_reg_block2_;
}
SEXP Rsh_Fir_user_promise_inner3810887275_1(SEXP CCP, SEXP RHO) {
  // Rdfile1 = ld Rdfile
  Rsh_Fir_reg_Rdfile1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Rdfile2 = force? Rdfile1
  Rsh_Fir_reg_Rdfile2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Rdfile1_);
  // checkMissing(Rdfile2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_Rdfile2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return Rdfile2
  return Rsh_Fir_reg_Rdfile2_;
}
SEXP Rsh_Fir_user_promise_inner3810887275_2(SEXP CCP, SEXP RHO) {
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return msg1
  return Rsh_Fir_reg_msg1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
