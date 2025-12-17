#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner440454000_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner440454000_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner440454000_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner440454000_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner440454000_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner440454000_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner440454000
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner440454000_, RHO, CCP);
  // st `Thin.col` = r
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
SEXP Rsh_Fir_user_function_inner440454000_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner440454000 dynamic dispatch ([X, tol])

  return Rsh_Fir_user_version_inner440454000_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner440454000_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner440454000 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner440454000/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_tol;  // tol
  SEXP Rsh_Fir_reg_tol_isMissing;  // tol_isMissing
  SEXP Rsh_Fir_reg_tol_orDefault;  // tol_orDefault
  SEXP Rsh_Fir_reg_zapsmall;  // zapsmall
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_X2_;  // X2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_tol1_;  // tol1
  SEXP Rsh_Fir_reg_tol2_;  // tol2
  SEXP Rsh_Fir_reg_log10_;  // log10
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_qr;  // qr
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_X4_;  // X4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_tol3_;  // tol3
  SEXP Rsh_Fir_reg_tol4_;  // tol4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_X5_;  // X5
  SEXP Rsh_Fir_reg_X6_;  // X6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_X8_;  // X8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_QR;  // QR
  SEXP Rsh_Fir_reg_QR1_;  // QR1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_X10_;  // X10
  SEXP Rsh_Fir_reg_QR3_;  // QR3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_X12_;  // X12
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_X14_;  // X14
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_X19_;  // X19
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_QR4_;  // QR4
  SEXP Rsh_Fir_reg_QR5_;  // QR5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_X21_;  // X21
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_QR7_;  // QR7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_X23_;  // X23
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r17_;  // r17

  // Bind parameters
  Rsh_Fir_reg_X = PARAMS[0];
  Rsh_Fir_reg_tol = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st X = X
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_X, RHO);
  (void)(Rsh_Fir_reg_X);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tol_isMissing then L0(1.0E-7) else L0(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L0(1.0E-7)
    Rsh_Fir_reg_tol_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L0_;
  }

L0_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // zapsmall = ldf zapsmall
  Rsh_Fir_reg_zapsmall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r17 = dyn __1(X6, <missing>, dx7, FALSE)
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_X6_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L1_;

L3_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r16 = dyn __(dx10, r13)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r16)
  // L2(r16)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r16_;
  goto L2_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   X1 = ld X;
  //   X2 = force? X1;
  //   checkMissing(X2);
  //   return X2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner440454000_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf log10;
  //   base = ldf log10 in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   r4 = `-`(<missing>, r2);
  //   r5 = `+`(r4, 5.0);
  //   return r5;
  // L1():
  //   tol1 = ld tol;
  //   tol2 = force? tol1;
  //   checkMissing(tol2);
  //   log10 = ldf log10 in base;
  //   r3 = dyn log10(tol2);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym tol>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner440454000_1, CCP, RHO);
  // r7 = dyn zapsmall[, digits](p, p1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_zapsmall, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // st X = r7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // qr = ldf qr
  Rsh_Fir_reg_qr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   X3 = ld X;
  //   X4 = force? X3;
  //   checkMissing(X4);
  //   return X4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner440454000_2, CCP, RHO);
  // p3 = prom<V +>{
  //   tol3 = ld tol;
  //   tol4 = force? tol3;
  //   checkMissing(tol4);
  //   return tol4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner440454000_3, CCP, RHO);
  // r10 = dyn qr[, tol, LAPACK](p2, p3, FALSE)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // st QR = r10
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // X5 = ld X
  Rsh_Fir_reg_X5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 16 [X5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_X5_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // X6 = force? X5
  Rsh_Fir_reg_X6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X5_);
  // checkMissing(X6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_X6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c = `is.object`(X6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_X6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c then L9() else L10(X6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L10(X6)
    Rsh_Fir_reg_X8_ = Rsh_Fir_reg_X6_;
    goto L10_;
  }

L9_:;
  // dr = tryDispatchBuiltin.1("[", X6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_X6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L11() else L10(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr)
    Rsh_Fir_reg_X8_ = Rsh_Fir_reg_dr;
    goto L10_;
  }

L10_:;
  // QR = ld QR
  Rsh_Fir_reg_QR = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

L11_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D5_:;
  // deopt 19 [X8, QR]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_X8_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_QR;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // QR1 = force? QR
  Rsh_Fir_reg_QR1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_QR);
  // checkMissing(QR1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_QR1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(QR1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_QR1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L15(X8, QR1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L15(X8, QR1)
    Rsh_Fir_reg_X10_ = Rsh_Fir_reg_X8_;
    Rsh_Fir_reg_QR3_ = Rsh_Fir_reg_QR1_;
    goto L15_;
  }

L13_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c2 then L17() else L18(X12, dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L17()
    goto L17_;
  } else {
  // L18(X12, dx3)
    Rsh_Fir_reg_X14_ = Rsh_Fir_reg_X12_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L18_;
  }

L14_:;
  // dr2 = tryDispatchBuiltin.1("$", QR1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_QR1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc1 then L16() else L15(X8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L16()
    goto L16_;
  } else {
  // L15(X8, dr2)
    Rsh_Fir_reg_X10_ = Rsh_Fir_reg_X8_;
    Rsh_Fir_reg_QR3_ = Rsh_Fir_reg_dr2_;
    goto L15_;
  }

L15_:;
  // r11 = `$`(QR3, <sym pivot>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_QR3_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L13(X10, r11)
  // L13(X10, r11)
  Rsh_Fir_reg_X12_ = Rsh_Fir_reg_X10_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L13_;

L16_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L13(X8, dx2)
  // L13(X8, dx2)
  Rsh_Fir_reg_X12_ = Rsh_Fir_reg_X8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L13_;

L17_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc2 then L19() else L18(X12, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L19()
    goto L19_;
  } else {
  // L18(X12, dr4)
    Rsh_Fir_reg_X14_ = Rsh_Fir_reg_X12_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L18_;
  }

L18_:;
  // sym1 = ldf seq_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf seq_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L2(dx6)
  // L2(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L2_;

L20_:;
  // QR4 = ld QR
  Rsh_Fir_reg_QR4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L21_:;
  // r12 = dyn base1(<lang `$`(QR, rank)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(X14, dx5, r12)
  // L3(X14, dx5, r12)
  Rsh_Fir_reg_X19_ = Rsh_Fir_reg_X14_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L3_;

D6_:;
  // deopt 23 [X14, dx5, QR4]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_X14_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_QR4_;
  Rsh_Fir_deopt(23, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // QR5 = force? QR4
  Rsh_Fir_reg_QR5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_QR4_);
  // checkMissing(QR5)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_QR5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(QR5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_QR5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c3 then L24() else L25(X14, dx5, QR5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L24()
    goto L24_;
  } else {
  // L25(X14, dx5, QR5)
    Rsh_Fir_reg_X21_ = Rsh_Fir_reg_X14_;
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_QR7_ = Rsh_Fir_reg_QR5_;
    goto L25_;
  }

L23_:;
  // r15 = seq_len(dx16)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L3(X23, dx15, r15)
  // L3(X23, dx15, r15)
  Rsh_Fir_reg_X19_ = Rsh_Fir_reg_X23_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L3_;

L24_:;
  // dr6 = tryDispatchBuiltin.1("$", QR5)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_QR5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc3 then L26() else L25(X14, dx5, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L26()
    goto L26_;
  } else {
  // L25(X14, dx5, dr6)
    Rsh_Fir_reg_X21_ = Rsh_Fir_reg_X14_;
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_QR7_ = Rsh_Fir_reg_dr6_;
    goto L25_;
  }

L25_:;
  // r14 = `$`(QR7, <sym rank>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_QR7_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L23(X21, dx12, r14)
  // L23(X21, dx12, r14)
  Rsh_Fir_reg_X23_ = Rsh_Fir_reg_X21_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r14_;
  goto L23_;

L26_:;
  // dx14 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L23(X14, dx5, dx14)
  // L23(X14, dx5, dx14)
  Rsh_Fir_reg_X23_ = Rsh_Fir_reg_X14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx14_;
  goto L23_;
}
SEXP Rsh_Fir_user_promise_inner440454000_(SEXP CCP, SEXP RHO) {
  // X1 = ld X
  Rsh_Fir_reg_X1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // X2 = force? X1
  Rsh_Fir_reg_X2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X1_);
  // checkMissing(X2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_X2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return X2
  return Rsh_Fir_reg_X2_;
}
SEXP Rsh_Fir_user_promise_inner440454000_1(SEXP CCP, SEXP RHO) {
  // sym = ldf log10
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf log10 in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r4 = `-`(<missing>, r2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // r5 = `+`(r4, 5.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // log10 = ldf log10 in base
  Rsh_Fir_reg_log10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r3 = dyn log10(tol2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_log10_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym tol>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner440454000_2(SEXP CCP, SEXP RHO) {
  // X3 = ld X
  Rsh_Fir_reg_X3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // X4 = force? X3
  Rsh_Fir_reg_X4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X3_);
  // checkMissing(X4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_X4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return X4
  return Rsh_Fir_reg_X4_;
}
SEXP Rsh_Fir_user_promise_inner440454000_3(SEXP CCP, SEXP RHO) {
  // tol3 = ld tol
  Rsh_Fir_reg_tol3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // tol4 = force? tol3
  Rsh_Fir_reg_tol4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol3_);
  // checkMissing(tol4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_tol4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return tol4
  return Rsh_Fir_reg_tol4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
