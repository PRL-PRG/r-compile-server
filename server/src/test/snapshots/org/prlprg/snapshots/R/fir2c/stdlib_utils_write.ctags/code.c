#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1449774989_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1449774989_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1449774989_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1449774989_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1449774989_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1449774989_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner1449774989
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1449774989_, RHO, CCP);
  // st `write.ctags` = r
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
SEXP Rsh_Fir_user_function_inner1449774989_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1449774989 dynamic dispatch ([src, tokens, startlines, lines, nchars, `...`, `shorten.lines`])

  return Rsh_Fir_user_version_inner1449774989_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1449774989_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1449774989 version 0 (*, *, *, *, *, dots, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner1449774989/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_src;  // src
  SEXP Rsh_Fir_reg_tokens;  // tokens
  SEXP Rsh_Fir_reg_startlines;  // startlines
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_nchars;  // nchars
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_shorten_lines;  // shorten_lines
  SEXP Rsh_Fir_reg_shorten_lines_isMissing;  // shorten_lines_isMissing
  SEXP Rsh_Fir_reg_shorten_lines_orDefault;  // shorten_lines_orDefault
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_tokens1_;  // tokens1
  SEXP Rsh_Fir_reg_tokens2_;  // tokens2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_src1_;  // src1
  SEXP Rsh_Fir_reg_src2_;  // src2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_startlines1_;  // startlines1
  SEXP Rsh_Fir_reg_startlines2_;  // startlines2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_tag_lines;  // tag_lines
  SEXP Rsh_Fir_reg_tag_lines1_;  // tag_lines1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r5_;  // r5

  // Bind parameters
  Rsh_Fir_reg_src = PARAMS[0];
  Rsh_Fir_reg_tokens = PARAMS[1];
  Rsh_Fir_reg_startlines = PARAMS[2];
  Rsh_Fir_reg_lines = PARAMS[3];
  Rsh_Fir_reg_nchars = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];
  Rsh_Fir_reg_shorten_lines = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st src = src
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_src, RHO);
  (void)(Rsh_Fir_reg_src);
  // st tokens = tokens
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_tokens, RHO);
  (void)(Rsh_Fir_reg_tokens);
  // st startlines = startlines
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_startlines, RHO);
  (void)(Rsh_Fir_reg_startlines);
  // st lines = lines
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_lines, RHO);
  (void)(Rsh_Fir_reg_lines);
  // st nchars = nchars
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_nchars, RHO);
  (void)(Rsh_Fir_reg_nchars);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // shorten_lines_isMissing = missing.0(shorten_lines)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_shorten_lines;
  Rsh_Fir_reg_shorten_lines_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if shorten_lines_isMissing then L0(NULL) else L0(shorten_lines)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_shorten_lines_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_shorten_lines_orDefault = Rsh_const(CCP, 7);
    goto L0_;
  } else {
  // L0(shorten_lines)
    Rsh_Fir_reg_shorten_lines_orDefault = Rsh_Fir_reg_shorten_lines;
    goto L0_;
  }

L0_:;
  // st `shorten.lines` = shorten_lines_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_shorten_lines_orDefault, RHO);
  (void)(Rsh_Fir_reg_shorten_lines_orDefault);
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   tokens1 = ld tokens;
  //   tokens2 = force? tokens1;
  //   checkMissing(tokens2);
  //   return tokens2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1449774989_, CCP, RHO);
  // p1 = prom<V +>{
  //   src1 = ld src;
  //   src2 = force? src1;
  //   checkMissing(src2);
  //   return src2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1449774989_1, CCP, RHO);
  // p2 = prom<V +>{
  //   startlines1 = ld startlines;
  //   startlines2 = force? startlines1;
  //   checkMissing(startlines2);
  //   return startlines2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1449774989_2, CCP, RHO);
  // r3 = dyn sprintf("%s\t%s\t%d\n", p, p1, p2)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[3] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 4, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st `tag.lines` = r3
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p3 = prom<V +>{
  //   tag_lines = ld `tag.lines`;
  //   tag_lines1 = force? tag_lines;
  //   checkMissing(tag_lines1);
  //   return tag_lines1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1449774989_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r5 = dyn cat[, sep, `...`](p3, "", ddd1)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner1449774989_(SEXP CCP, SEXP RHO) {
  // tokens1 = ld tokens
  Rsh_Fir_reg_tokens1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tokens2 = force? tokens1
  Rsh_Fir_reg_tokens2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tokens1_);
  // checkMissing(tokens2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_tokens2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return tokens2
  return Rsh_Fir_reg_tokens2_;
}
SEXP Rsh_Fir_user_promise_inner1449774989_1(SEXP CCP, SEXP RHO) {
  // src1 = ld src
  Rsh_Fir_reg_src1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // src2 = force? src1
  Rsh_Fir_reg_src2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_src1_);
  // checkMissing(src2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_src2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return src2
  return Rsh_Fir_reg_src2_;
}
SEXP Rsh_Fir_user_promise_inner1449774989_2(SEXP CCP, SEXP RHO) {
  // startlines1 = ld startlines
  Rsh_Fir_reg_startlines1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // startlines2 = force? startlines1
  Rsh_Fir_reg_startlines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_startlines1_);
  // checkMissing(startlines2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_startlines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return startlines2
  return Rsh_Fir_reg_startlines2_;
}
SEXP Rsh_Fir_user_promise_inner1449774989_3(SEXP CCP, SEXP RHO) {
  // tag_lines = ld `tag.lines`
  Rsh_Fir_reg_tag_lines = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // tag_lines1 = force? tag_lines
  Rsh_Fir_reg_tag_lines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag_lines);
  // checkMissing(tag_lines1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_tag_lines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return tag_lines1
  return Rsh_Fir_reg_tag_lines1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
