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
  SEXP Rsh_Fir_reg_sieve;
  SEXP Rsh_Fir_reg_r1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4266987626
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4266987626_, RHO, CCP);
  // st sieve = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sieve = ldf sieve
  Rsh_Fir_reg_sieve = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn sieve(100.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sieve, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, RHO);
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
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_primes;
  SEXP Rsh_Fir_reg_primes1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_primes3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_reg_i24_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_primes4_;
  SEXP Rsh_Fir_reg_primes5_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r33_;

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // sym = ldf rep
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf rep in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L0_:;
  // st primes = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // l = ld primes
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L15() else L16(FALSE, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L15()
    goto L15_;
  } else {
  // L16(FALSE, l)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L16_;
  }

L13_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn rep(TRUE, <sym n>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L14_:;
  // r = dyn base(TRUE, <sym n>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

L1_:;
  // st primes = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf floor
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf floor in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L15_:;
  // dr = tryDispatchBuiltin.0("[<-", l, FALSE)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args6);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(FALSE, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L17()
    goto L17_;
  } else {
  // L16(FALSE, dr)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L16_;
  }

L16_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r7 = dyn ___(l2, FALSE, 1.0)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L1_;

L2_:;
  // r20 = `:`(r11, r12)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args9);
  // s = toForSeq(r20)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // l3 = length(s)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args11);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 11);
  // goto L4(i)
  // L4(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L4_;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L18_:;
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // r10 = dyn base1(<lang sqrt(n)>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, RHO);
  // goto L2(2.0, r10)
  // L2(2.0, r10)
  Rsh_Fir_reg_r11_ = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
  goto L2_;

L3_:;
  // r19 = floor(r17)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(167, RHO, 1, Rsh_Fir_array_args15);
  // goto L2(r16, r19)
  // L2(r16, r19)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r19_;
  goto L2_;

L4_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // c1 = `<`.1(l3, i2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if c1 then L23() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L11()
    goto L11_;
  }

L20_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L21_:;
  // r15 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, RHO);
  // goto L3(2.0, r15)
  // L3(2.0, r15)
  Rsh_Fir_reg_r16_ = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
  goto L3_;

D0_:;
  // deopt 14 [2.0, n1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args19);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // primes = ld primes
  Rsh_Fir_reg_primes = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

L22_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r18 = sqrt(n2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args21);
  // goto L3(2.0, r18)
  // L3(2.0, r18)
  Rsh_Fir_reg_r16_ = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L3_;

L23_:;
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

D1_:;
  // deopt 19 [i2, primes]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_primes;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;

L24_:;
  // primes1 = force? primes
  Rsh_Fir_reg_primes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_primes);
  // checkMissing(primes1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_primes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(primes1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_primes1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c2 then L25() else L26(i2, primes1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L25()
    goto L25_;
  } else {
  // L26(i2, primes1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_primes3_ = Rsh_Fir_reg_primes1_;
    goto L26_;
  }

L43_:;
  // primes4 = ld primes
  Rsh_Fir_reg_primes4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

L44_:;
  // r31 = dyn base3(<sym primes>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, RHO);
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L12_;

D10_:;
  // deopt 55 [primes4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_primes4_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L5_:;
  // c3 = `as.logical`(dx3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c3 then L29() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L6()
    goto L6_;
  }

L25_:;
  // dr2 = tryDispatchBuiltin.1("[", primes1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_primes1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L27() else L26(i2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L27()
    goto L27_;
  } else {
  // L26(i2, dr2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_primes3_ = Rsh_Fir_reg_dr2_;
    goto L26_;
  }

L26_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

L45_:;
  // primes5 = force? primes4
  Rsh_Fir_reg_primes5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_primes4_);
  // checkMissing(primes5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_primes5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r33 = dyn sum(primes5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_primes5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D2_:;
  // deopt 21 [i6, primes3, i9]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_primes3_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(21, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 58 [r33]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L10(i8)
  // L10(i8)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i8_;
  goto L10_;

L10_:;
  // goto L4(i26)
  // L4(i26)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i26_;
  goto L4_;

L27_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L5(i2, dx2)
  // L5(i2, dx2)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

L28_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r21 = dyn __(primes3, i10)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_primes3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, RHO);
  // goto L5(i6, r21)
  // L5(i6, r21)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r21_;
  goto L5_;

L29_:;
  // i13 = ld i
  Rsh_Fir_reg_i13_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

L46_:;
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L12_;

D3_:;
  // deopt 24 [i8, i13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L30_:;
  // i14 = force? i13
  Rsh_Fir_reg_i14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i13_);
  // checkMissing(i14)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_i14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

D4_:;
  // deopt 25 [i8, i14, i15]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(25, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // checkMissing(i16)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_i16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r22 = `*`(i14, i16)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args35);
  // st j = r22
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L9(i8)
  // L9(i8)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i8_;
  goto L9_;

L9_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

D5_:;
  // deopt 29 [i17, j]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // checkMissing(j1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_j1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

D6_:;
  // deopt 30 [i17, j1, n3]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(30, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r23 = `<=`(j1, n4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args38);
  // c4 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c4 then L34() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L34()
    goto L34_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L10(i17)
  // L10(i17)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i17_;
  goto L10_;

L34_:;
  // l4 = ld primes
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c5 = `is.object`(l4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args40);
  // if c5 then L35() else L36(i17, FALSE, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L35()
    goto L35_;
  } else {
  // L36(i17, FALSE, l4)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_r25_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L36_;
  }

L8_:;
  // st primes = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

L35_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l4, FALSE)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args41);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc2 then L37() else L36(i17, FALSE, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L37()
    goto L37_;
  } else {
  // L36(i17, FALSE, dr4)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_r25_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L36_;
  }

L36_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

D7_:;
  // deopt 36 [i21, r25, l6, FALSE, j2]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(36, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 40 [i23, j4]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L37_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L8(i17, dx4)
  // L8(i17, dx4)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L8_;

L38_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r28 = dyn ___1(l6, FALSE, j3)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args44[2] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names9, RHO);
  // goto L8(i21, r28)
  // L8(i21, r28)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r28_;
  goto L8_;

L39_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // checkMissing(j5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_j5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // i24 = ld i
  Rsh_Fir_reg_i24_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

D9_:;
  // deopt 41 [i23, j5, i24]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_i24_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L40_:;
  // i25 = force? i24
  Rsh_Fir_reg_i25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i24_);
  // checkMissing(i25)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_i25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r29 = `+`(j5, i25)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args47);
  // st j = r29
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L9(i23)
  // L9(i23)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i23_;
  goto L9_;
}
