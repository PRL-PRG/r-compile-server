#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_inner4266987626_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (!TYPEOF(PARAMS_LIST) == VECSXP) Rsh_error("FIŘ expected a list for params");
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
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_r1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4266987626
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4266987626_, RHO, CCP);
  // st f = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // f = ldf f
  Rsh_Fir_reg_f = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn f(1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_function_from_R_inner4266987626_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner4266987626 dynamic dispatch from R ([n])
  if (!TYPEOF(PARAMS_LIST) == VECSXP) Rsh_error("FIŘ expected a list for params");
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner4266987626_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner4266987626_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4266987626 dynamic dispatch ([n])

  return Rsh_Fir_user_version_inner4266987626_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4266987626_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4266987626 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4266987626/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_limit;
  SEXP Rsh_Fir_reg_limit1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_limit2_;
  SEXP Rsh_Fir_reg_limit3_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_last;
  SEXP Rsh_Fir_reg_last1_;
  SEXP Rsh_Fir_reg_current;
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_current2_;
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_last2_;
  SEXP Rsh_Fir_reg_last3_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_last5_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_values;
  SEXP Rsh_Fir_reg_values1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_values3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_limit4_;
  SEXP Rsh_Fir_reg_limit5_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_limit6_;
  SEXP Rsh_Fir_reg_limit7_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_values4_;
  SEXP Rsh_Fir_reg_values5_;

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

D0_:;
  // deopt 0 [n1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 1 [n2, n3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // r = `+`(n2, n4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args3);
  // st m = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // st limit = 4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // sym = ldf rep
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L0_:;
  // st values = r2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // st last = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_const(CCP, 8), RHO);
  (void)(Rsh_const(CCP, 8));
  // limit = ld limit
  Rsh_Fir_reg_limit = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L12_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r3 = dyn rep(0.0, <sym limit>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L13_:;
  // r1 = dyn base(0.0, <sym limit>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_1;
  goto L0_;

D2_:;
  // deopt 16 [1, limit]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_limit;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // limit1 = force? limit
  Rsh_Fir_reg_limit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_limit);
  // checkMissing(limit1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_limit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r4 = `:`(1, limit1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_limit1_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args8);
  // s = toForSeq(r4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args10);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 10);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if c then L15() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args13);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L15_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L31() else D13()
  // L31()
  goto L31_;

D3_:;
  // deopt 19 [i2, m]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 52 [m2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L31_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r13 = `>=`(m3, 2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args16);
  // c3 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c3 then L32() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L32()
    goto L32_;
  } else {
  // L6()
    goto L6_;
  }

D4_:;
  // deopt 20 [i2, m1, i5]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // values4 = ld values
  Rsh_Fir_reg_values4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L43() else D17()
  // L43()
  goto L43_;

L17_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r5 = `+`(m1, i6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args19);
  // limit2 = ld limit
  Rsh_Fir_reg_limit2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L32_:;
  // values = ld values
  Rsh_Fir_reg_values = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L33() else D14()
  // L33()
  goto L33_;

D5_:;
  // deopt 22 [i2, r5, limit2]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_limit2_;
  Rsh_Fir_deopt(22, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 56 [values]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_values;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 70 [values4]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_values4_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L18_:;
  // limit3 = force? limit2
  Rsh_Fir_reg_limit3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_limit2_);
  // checkMissing(limit3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_limit3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L33_:;
  // values1 = force? values
  Rsh_Fir_reg_values1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values);
  // checkMissing(values1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_values1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(values1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_values1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c4 then L34() else L35(values1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L34()
    goto L34_;
  } else {
  // L35(values1)
    Rsh_Fir_reg_values3_ = Rsh_Fir_reg_values1_;
    goto L35_;
  }

L43_:;
  // values5 = force? values4
  Rsh_Fir_reg_values5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values4_);
  // checkMissing(values5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_values5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return values5
  return Rsh_Fir_reg_values5_;

D6_:;
  // deopt 23 [i2, r5, limit3, i7]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_limit3_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(23, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L7_:;
  // r15 = `+`(dx3, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args24);
  // l4 = ld values
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c5 = `is.object`(l4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args25);
  // if c5 then L38() else L39(r15, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L38()
    goto L38_;
  } else {
  // L39(r15, l4)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L39_;
  }

L19_:;
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r6 = `-`(limit3, i8)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_limit3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args27);
  // r7 = `+`(r6, 1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args28);
  // r8 = `*`(r5, r7)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args29);
  // st current = r8
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

L34_:;
  // dr2 = tryDispatchBuiltin.1("[[", values1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_values1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L36() else L35(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr2)
    Rsh_Fir_reg_values3_ = Rsh_Fir_reg_dr2_;
    goto L35_;
  }

L35_:;
  // limit4 = ld limit
  Rsh_Fir_reg_limit4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

D7_:;
  // deopt 30 [i2, i9]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 58 [values3, limit4]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_values3_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_limit4_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L8_:;
  // st values = dx5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L9()
  // L9()
  goto L9_;

L20_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // checkMissing(i10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_i10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r9 = `>=`(i10, 2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args33);
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c1 then L21() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L2()
    goto L2_;
  }

L36_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L7(dx2)
  // L7(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

L37_:;
  // limit5 = force? limit4
  Rsh_Fir_reg_limit5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_limit4_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r14 = dyn __(values3, limit5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_values3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_limit5_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names3, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L7_;

L38_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l4, r15)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args37);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc2 then L40() else L39(r15, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L40()
    goto L40_;
  } else {
  // L39(r15, dr4)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L39_;
  }

L39_:;
  // limit6 = ld limit
  Rsh_Fir_reg_limit6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L41() else D16()
  // L41()
  goto L41_;

D16_:;
  // deopt 64 [r17, l6, r15, limit6]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_limit6_;
  Rsh_Fir_deopt(64, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L2_:;
  // current2 = ld current
  Rsh_Fir_reg_current2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

L3_:;
  // last2 = ld last
  Rsh_Fir_reg_last2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

L21_:;
  // last = ld last
  Rsh_Fir_reg_last = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L40_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L8(r15, dx4)
  // L8(r15, dx4)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L8_;

L41_:;
  // limit7 = force? limit6
  Rsh_Fir_reg_limit7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_limit6_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r20 = dyn ____(l6, r15, limit7)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_limit7_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names4, RHO);
  // goto L8(r17, r20)
  // L8(r17, r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r20_;
  goto L8_;

D8_:;
  // deopt 34 [i2, last]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_last;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 39 [i2, current2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_current2_;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 42 [i13, last2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_last2_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L22_:;
  // last1 = force? last
  Rsh_Fir_reg_last1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_last);
  // checkMissing(last1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_last1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // current = ld current
  Rsh_Fir_reg_current = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

L25_:;
  // current3 = force? current2
  Rsh_Fir_reg_current3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current2_);
  // checkMissing(current3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_current3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // st last = current3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_current3_, RHO);
  (void)(Rsh_Fir_reg_current3_);
  // goto L3(i2)
  // L3(i2)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i2_;
  goto L3_;

L26_:;
  // last3 = force? last2
  Rsh_Fir_reg_last3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_last2_);
  // checkMissing(last3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_last3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // l1 = ld values
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c2 = `is.object`(l1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args44);
  // if c2 then L27() else L28(i13, last3, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L28(i13, last3, l1)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_last5_ = Rsh_Fir_reg_last3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L28_;
  }

D9_:;
  // deopt 35 [i2, last1, current]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_last1_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_current;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L4_:;
  // st values = dx1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L1(i17)
  // L1(i17)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i17_;
  goto L1_;

L23_:;
  // current1 = force? current
  Rsh_Fir_reg_current1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current);
  // checkMissing(current1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_current1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r10 = `+`(last1, current1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_last1_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_current1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args46);
  // st last = r10
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // goto L3(i2)
  // L3(i2)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i2_;
  goto L3_;

L27_:;
  // dr = tryDispatchBuiltin.0("[<-", l1, last3)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_last3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L29() else L28(i13, last3, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L29()
    goto L29_;
  } else {
  // L28(i13, last3, dr)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_last5_ = Rsh_Fir_reg_last3_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L28_;
  }

L28_:;
  // i18 = ld i
  Rsh_Fir_reg_i18_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

D12_:;
  // deopt 45 [i15, last5, l3, last3, i18]
  SEXP Rsh_Fir_array_deopt_stack18[5];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_last5_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_last3_;
  Rsh_Fir_array_deopt_stack18[4] = Rsh_Fir_reg_i18_;
  Rsh_Fir_deopt(45, 5, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L29_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L4(i13, dx)
  // L4(i13, dx)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L30_:;
  // i19 = force? i18
  Rsh_Fir_reg_i19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i18_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r12 = dyn ___(l3, last3, i19)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_last3_;
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names5, RHO);
  // goto L4(i15, r12)
  // L4(i15, r12)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L4_;
}
