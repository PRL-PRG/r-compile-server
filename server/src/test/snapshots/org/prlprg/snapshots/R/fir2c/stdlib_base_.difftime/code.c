#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner723830835_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner723830835_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner723830835
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner723830835_, RHO, CCP);
  // st `.difftime` = r
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
SEXP Rsh_Fir_user_function_inner723830835_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner723830835 dynamic dispatch ([xx, units, cl])

  return Rsh_Fir_user_version_inner723830835_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner723830835_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner723830835 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner723830835/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_units;  // units
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl_isMissing;  // cl_isMissing
  SEXP Rsh_Fir_reg_cl_orDefault;  // cl_orDefault
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_cl2_;  // cl2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_units1_;  // units1
  SEXP Rsh_Fir_reg_units2_;  // units2
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_xx2_;  // xx2

  // Bind parameters
  Rsh_Fir_reg_xx = PARAMS[0];
  Rsh_Fir_reg_units = PARAMS[1];
  Rsh_Fir_reg_cl = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st xx = xx
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_xx, RHO);
  (void)(Rsh_Fir_reg_xx);
  // st units = units
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_units, RHO);
  (void)(Rsh_Fir_reg_units);
  // cl_isMissing = missing.0(cl)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_reg_cl_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if cl_isMissing then L0("difftime") else L0(cl)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cl_isMissing)) {
  // L0("difftime")
    Rsh_Fir_reg_cl_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(cl)
    Rsh_Fir_reg_cl_orDefault = Rsh_Fir_reg_cl;
    goto L0_;
  }

L0_:;
  // st cl = cl_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_cl_orDefault, RHO);
  (void)(Rsh_Fir_reg_cl_orDefault);
  // cl1 = ld cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 0 [cl1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // cl2 = force? cl1
  Rsh_Fir_reg_cl2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl1_);
  // checkMissing(cl2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_cl2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // l = ld xx
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 3 [cl2, l, cl2]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // r = dyn class__(l, NULL, cl2)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[2] = Rsh_Fir_reg_cl2_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 5 [cl2, r]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // st xx = r
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // units1 = ld units
  Rsh_Fir_reg_units1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 7 [units1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_units1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L4_:;
  // units2 = force? units1
  Rsh_Fir_reg_units2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_units1_);
  // checkMissing(units2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_units2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // l1 = ld xx
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 10 [units2, l1, units2]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_units2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_units2_;
  Rsh_Fir_deopt(10, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L5_:;
  // r1 = dyn attr__(l1, NULL, "units", units2)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[3] = Rsh_Fir_reg_units2_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 13 [units2, r1]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_units2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L6_:;
  // st xx = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // xx1 = ld xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 15 [xx1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_xx1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L7_:;
  // xx2 = force? xx1
  Rsh_Fir_reg_xx2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx1_);
  // checkMissing(xx2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_xx2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return xx2
  return Rsh_Fir_reg_xx2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
