#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner740144710_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner740144710_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner740144710_(SEXP CCP, SEXP RHO);
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
  // r = clos inner740144710
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner740144710_, RHO, CCP);
  // st `qr.influence` = r
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
SEXP Rsh_Fir_user_function_inner740144710_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner740144710 dynamic dispatch ([qr, res, tol])

  return Rsh_Fir_user_version_inner740144710_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner740144710_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner740144710 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner740144710/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_qr;  // qr
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_tol;  // tol
  SEXP Rsh_Fir_reg_tol_isMissing;  // tol_isMissing
  SEXP Rsh_Fir_reg_tol_orDefault;  // tol_orDefault
  SEXP Rsh_Fir_reg__Machine;  // _Machine
  SEXP Rsh_Fir_reg__Machine1_;  // _Machine1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg__Machine3_;  // _Machine3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_C_influence;  // C_influence
  SEXP Rsh_Fir_reg_C_influence1_;  // C_influence1
  SEXP Rsh_Fir_reg_qr1_;  // qr1
  SEXP Rsh_Fir_reg_qr2_;  // qr2
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_res2_;  // res2
  SEXP Rsh_Fir_reg_tol1_;  // tol1
  SEXP Rsh_Fir_reg_tol2_;  // tol2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r9_;  // r9

  // Bind parameters
  Rsh_Fir_reg_qr = PARAMS[0];
  Rsh_Fir_reg_res = PARAMS[1];
  Rsh_Fir_reg_tol = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st qr = qr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_qr, RHO);
  (void)(Rsh_Fir_reg_qr);
  // st res = res
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_res, RHO);
  (void)(Rsh_Fir_reg_res);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tol_isMissing then L0() else L1(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   _Machine = ld `.Machine`;
  //   _Machine1 = force? _Machine;
  //   checkMissing(_Machine1);
  //   c = `is.object`(_Machine1);
  //   if c then L1() else L2(10.0, _Machine1);
  // L0(r3, dx1):
  //   r5 = `*`(r3, dx1);
  //   return r5;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", _Machine1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(10.0, dr);
  // L2(r1, _Machine3):
  //   r4 = `$`(_Machine3, <sym double.eps>);
  //   goto L0(r1, r4);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(10.0, dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner740144710_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;

L3_:;
  // C_influence = ld C_influence
  Rsh_Fir_reg_C_influence = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r7 = dyn base(<sym C_influence>, <sym qr>, <sym res>, <sym tol>)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D0_:;
  // deopt 1 [C_influence]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_influence;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // C_influence1 = force? C_influence
  Rsh_Fir_reg_C_influence1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_influence);
  // checkMissing(C_influence1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_C_influence1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // qr1 = ld qr
  Rsh_Fir_reg_qr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 2 [C_influence1, qr1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_influence1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_qr1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // qr2 = force? qr1
  Rsh_Fir_reg_qr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qr1_);
  // checkMissing(qr2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_qr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // res1 = ld res
  Rsh_Fir_reg_res1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 3 [C_influence1, qr2, res1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_influence1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_qr2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_res1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // res2 = force? res1
  Rsh_Fir_reg_res2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res1_);
  // checkMissing(res2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_res2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 4 [C_influence1, qr2, res2, tol1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_influence1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_qr2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_res2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_tol1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // vargs = dots[qr2, res2, tol2]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_qr2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_res2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r9 = `.Call`(C_influence1, vargs, <missing>)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_C_influence1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner740144710_(SEXP CCP, SEXP RHO) {
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(10.0, _Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(10.0, _Machine1)
    Rsh_Fir_reg_r1_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L2_;
  }

L0_:;
  // r5 = `*`(r3, dx1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(10.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(10.0, dr)
    Rsh_Fir_reg_r1_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r4 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(r1, r4)
  // L0(r1, r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(10.0, dx)
  // L0(10.0, dx)
  Rsh_Fir_reg_r3_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
