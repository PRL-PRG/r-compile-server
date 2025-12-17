#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3735441797_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3735441797_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3735441797_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3735441797_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3735441797_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3735441797_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3735441797_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner3735441797
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3735441797_, RHO, CCP);
  // st rbeta = r
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
SEXP Rsh_Fir_user_function_inner3735441797_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3735441797 dynamic dispatch ([n, shape1, shape2, ncp])

  return Rsh_Fir_user_version_inner3735441797_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3735441797_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3735441797 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3735441797/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_shape1_;  // shape1
  SEXP Rsh_Fir_reg_shape2_;  // shape2
  SEXP Rsh_Fir_reg_ncp;  // ncp
  SEXP Rsh_Fir_reg_ncp_isMissing;  // ncp_isMissing
  SEXP Rsh_Fir_reg_ncp_orDefault;  // ncp_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_C_rbeta;  // C_rbeta
  SEXP Rsh_Fir_reg_C_rbeta1_;  // C_rbeta1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_shape3_;  // shape3
  SEXP Rsh_Fir_reg_shape4_;  // shape4
  SEXP Rsh_Fir_reg_shape5_;  // shape5
  SEXP Rsh_Fir_reg_shape6_;  // shape6
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_rchisq;  // rchisq
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_shape7_;  // shape7
  SEXP Rsh_Fir_reg_shape8_;  // shape8
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_ncp1_;  // ncp1
  SEXP Rsh_Fir_reg_ncp2_;  // ncp2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_X2_;  // X2
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_rchisq1_;  // rchisq1
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_shape9_;  // shape9
  SEXP Rsh_Fir_reg_shape10_;  // shape10
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_shape1_ = PARAMS[1];
  Rsh_Fir_reg_shape2_ = PARAMS[2];
  Rsh_Fir_reg_ncp = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st shape1 = shape1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_shape1_, RHO);
  (void)(Rsh_Fir_reg_shape1_);
  // st shape2 = shape2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_shape2_, RHO);
  (void)(Rsh_Fir_reg_shape2_);
  // ncp_isMissing = missing.0(ncp)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_ncp;
  Rsh_Fir_reg_ncp_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if ncp_isMissing then L0(0.0) else L0(ncp)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ncp_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_ncp_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(ncp)
    Rsh_Fir_reg_ncp_orDefault = Rsh_Fir_reg_ncp;
    goto L0_;
  }

L0_:;
  // st ncp = ncp_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ncp_orDefault, RHO);
  (void)(Rsh_Fir_reg_ncp_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L6() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // rchisq = ldf rchisq
  Rsh_Fir_reg_rchisq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L4_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn missing(<sym ncp>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L5_:;
  // r = dyn base(<sym ncp>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L6_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // C_rbeta = ld C_rbeta
  Rsh_Fir_reg_C_rbeta = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r3 = dyn base1(<sym C_rbeta>, <sym n>, <sym shape1>, <sym shape2>)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D0_:;
  // deopt 4 [C_rbeta]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_rbeta;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // C_rbeta1 = force? C_rbeta
  Rsh_Fir_reg_C_rbeta1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_rbeta);
  // checkMissing(C_rbeta1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_C_rbeta1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [C_rbeta1, n1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_rbeta1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // shape3 = ld shape1
  Rsh_Fir_reg_shape3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 6 [C_rbeta1, n2, shape3]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_rbeta1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_shape3_;
  Rsh_Fir_deopt(6, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // shape4 = force? shape3
  Rsh_Fir_reg_shape4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape3_);
  // checkMissing(shape4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_shape4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // shape5 = ld shape2
  Rsh_Fir_reg_shape5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 7 [C_rbeta1, n2, shape4, shape5]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_rbeta1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_shape4_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_shape5_;
  Rsh_Fir_deopt(7, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // shape6 = force? shape5
  Rsh_Fir_reg_shape6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape5_);
  // checkMissing(shape6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_shape6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // vargs = dots[n2, shape4, shape6]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_shape4_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_shape6_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r5 = `.Call`(C_rbeta1, vargs, <missing>)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_rbeta1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;

D4_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   n3 = ld n;
  //   n4 = force? n3;
  //   checkMissing(n4);
  //   return n4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3735441797_, CCP, RHO);
  // p1 = prom<V +>{
  //   shape7 = ld shape1;
  //   shape8 = force? shape7;
  //   checkMissing(shape8);
  //   r7 = `*`(2.0, shape8);
  //   return r7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3735441797_1, CCP, RHO);
  // p2 = prom<V +>{
  //   ncp1 = ld ncp;
  //   ncp2 = force? ncp1;
  //   checkMissing(ncp2);
  //   return ncp2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3735441797_2, CCP, RHO);
  // r10 = dyn rchisq[, , ncp](p, p1, p2)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rchisq, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 16 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // st X = r10
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L16() else D6()
  // L16()
  goto L16_;

D6_:;
  // deopt 18 [X]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_X;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // X2 = ld X
  Rsh_Fir_reg_X2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L17() else D7()
  // L17()
  goto L17_;

D7_:;
  // deopt 19 [X1, X2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_X2_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // X3 = force? X2
  Rsh_Fir_reg_X3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X2_);
  // checkMissing(X3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_X3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // rchisq1 = ldf rchisq
  Rsh_Fir_reg_rchisq1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L18() else D8()
  // L18()
  goto L18_;

D8_:;
  // deopt 21 [X1, X3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_X3_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // p3 = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   return n6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3735441797_3, CCP, RHO);
  // p4 = prom<V +>{
  //   shape9 = ld shape2;
  //   shape10 = force? shape9;
  //   checkMissing(shape10);
  //   r12 = `*`(2.0, shape10);
  //   return r12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3735441797_4, CCP, RHO);
  // r14 = dyn rchisq1(p3, p4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rchisq1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L19() else D9()
  // L19()
  goto L19_;

D9_:;
  // deopt 24 [X1, X3, r14]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_X3_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(24, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // r15 = `+`(X3, r14)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_X3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // r16 = `/`(X1, r15)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner3735441797_(SEXP CCP, SEXP RHO) {
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return n4
  return Rsh_Fir_reg_n4_;
}
SEXP Rsh_Fir_user_promise_inner3735441797_1(SEXP CCP, SEXP RHO) {
  // shape7 = ld shape1
  Rsh_Fir_reg_shape7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // shape8 = force? shape7
  Rsh_Fir_reg_shape8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape7_);
  // checkMissing(shape8)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_shape8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r7 = `*`(2.0, shape8)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_shape8_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner3735441797_2(SEXP CCP, SEXP RHO) {
  // ncp1 = ld ncp
  Rsh_Fir_reg_ncp1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ncp2 = force? ncp1
  Rsh_Fir_reg_ncp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncp1_);
  // checkMissing(ncp2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ncp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return ncp2
  return Rsh_Fir_reg_ncp2_;
}
SEXP Rsh_Fir_user_promise_inner3735441797_3(SEXP CCP, SEXP RHO) {
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return n6
  return Rsh_Fir_reg_n6_;
}
SEXP Rsh_Fir_user_promise_inner3735441797_4(SEXP CCP, SEXP RHO) {
  // shape9 = ld shape2
  Rsh_Fir_reg_shape9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // shape10 = force? shape9
  Rsh_Fir_reg_shape10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_shape9_);
  // checkMissing(shape10)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_shape10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r12 = `*`(2.0, shape10)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_shape10_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
