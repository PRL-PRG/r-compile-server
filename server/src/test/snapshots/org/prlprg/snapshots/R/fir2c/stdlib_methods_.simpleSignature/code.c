#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3014020399_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3014020399_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3014020399
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3014020399_, RHO, CCP);
  // st `.simpleSignature` = r
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
SEXP Rsh_Fir_user_function_inner3014020399_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3014020399 dynamic dispatch ([classes, names, packages])

  return Rsh_Fir_user_version_inner3014020399_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3014020399_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3014020399 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3014020399/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_classes;  // classes
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_packages;  // packages
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_classes1_;  // classes1
  SEXP Rsh_Fir_reg_classes2_;  // classes2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_packages1_;  // packages1
  SEXP Rsh_Fir_reg_packages2_;  // packages2
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_object1_;  // object1

  // Bind parameters
  Rsh_Fir_reg_classes = PARAMS[0];
  Rsh_Fir_reg_names = PARAMS[1];
  Rsh_Fir_reg_packages = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st classes = classes
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_classes, RHO);
  (void)(Rsh_Fir_reg_classes);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_names, RHO);
  (void)(Rsh_Fir_reg_names);
  // st packages = packages
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_packages, RHO);
  (void)(Rsh_Fir_reg_packages);
  // new = ldf new
  Rsh_Fir_reg_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn new("signature")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st object = r
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // classes1 = ld classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 5 [classes1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_classes1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // classes2 = force? classes1
  Rsh_Fir_reg_classes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes1_);
  // checkMissing(classes2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_classes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // l = ld object
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 8 [classes2, l, classes2]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_classes2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_classes2_;
  Rsh_Fir_deopt(8, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // r1 = dyn ___(l, NULL, ".Data", classes2)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[3] = Rsh_Fir_reg_classes2_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 11 [classes2, r1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_classes2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L4_:;
  // st object = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 13 [names1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_names1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L5_:;
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // l1 = ld object
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ___1 = ldf `@<-`
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 16 [names2, l1, names2]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_names2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_names2_;
  Rsh_Fir_deopt(16, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L6_:;
  // r2 = dyn ___1(l1, NULL, "names", names2)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[3] = Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 19 [names2, r2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_names2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L7_:;
  // st object = r2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // packages1 = ld packages
  Rsh_Fir_reg_packages1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 21 [packages1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_packages1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L8_:;
  // packages2 = force? packages1
  Rsh_Fir_reg_packages2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packages1_);
  // checkMissing(packages2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_packages2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // l2 = ld object
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ___2 = ldf `@<-`
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 24 [packages2, l2, packages2]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_packages2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_packages2_;
  Rsh_Fir_deopt(24, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L9_:;
  // r3 = dyn ___2(l2, NULL, "package", packages2)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args6[3] = Rsh_Fir_reg_packages2_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 27 [packages2, r3]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_packages2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L10_:;
  // st object = r3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // object = ld object
  Rsh_Fir_reg_object = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 29 [object]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_object;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L11_:;
  // object1 = force? object
  Rsh_Fir_reg_object1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object);
  // checkMissing(object1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_object1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object1
  return Rsh_Fir_reg_object1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
