#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1418141903_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1418141903_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1418141903
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1418141903_, RHO, CCP);
  // st tagged = r
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
SEXP Rsh_Fir_user_function_inner1418141903_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1418141903 dynamic dispatch ([x, tag, srcref])

  return Rsh_Fir_user_version_inner1418141903_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1418141903_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1418141903 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1418141903/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_tag;  // tag
  SEXP Rsh_Fir_reg_srcref;  // srcref
  SEXP Rsh_Fir_reg_srcref_isMissing;  // srcref_isMissing
  SEXP Rsh_Fir_reg_srcref_orDefault;  // srcref_orDefault
  SEXP Rsh_Fir_reg_tag1_;  // tag1
  SEXP Rsh_Fir_reg_tag2_;  // tag2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_srcref1_;  // srcref1
  SEXP Rsh_Fir_reg_srcref2_;  // srcref2
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_tag = PARAMS[1];
  Rsh_Fir_reg_srcref = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st tag = tag
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_tag, RHO);
  (void)(Rsh_Fir_reg_tag);
  // srcref_isMissing = missing.0(srcref)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_srcref;
  Rsh_Fir_reg_srcref_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if srcref_isMissing then L0(NULL) else L0(srcref)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_srcref_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_srcref_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(srcref)
    Rsh_Fir_reg_srcref_orDefault = Rsh_Fir_reg_srcref;
    goto L0_;
  }

L0_:;
  // st srcref = srcref_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_srcref_orDefault, RHO);
  (void)(Rsh_Fir_reg_srcref_orDefault);
  // tag1 = ld tag
  Rsh_Fir_reg_tag1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 0 [tag1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_tag1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // tag2 = force? tag1
  Rsh_Fir_reg_tag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag1_);
  // checkMissing(tag2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_tag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 3 [tag2, l, tag2]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_tag2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_tag2_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // r = dyn attr__(l, NULL, "Rd_tag", tag2)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[3] = Rsh_Fir_reg_tag2_;
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 6 [tag2, r]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_tag2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // st x = r
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // srcref1 = ld srcref
  Rsh_Fir_reg_srcref1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 8 [srcref1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_srcref1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L4_:;
  // srcref2 = force? srcref1
  Rsh_Fir_reg_srcref2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref1_);
  // checkMissing(srcref2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_srcref2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 11 [srcref2, l1, srcref2]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_srcref2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_srcref2_;
  Rsh_Fir_deopt(11, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L5_:;
  // r1 = dyn attr__1(l1, NULL, "srcref", srcref2)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[3] = Rsh_Fir_reg_srcref2_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 14 [srcref2, r1]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_srcref2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L6_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 16 [x1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L7_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
