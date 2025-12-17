#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3461445199_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3461445199_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3461445199_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3461445199_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3461445199
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3461445199_, RHO, CCP);
  // st `chol.default` = r
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
SEXP Rsh_Fir_user_function_inner3461445199_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3461445199 dynamic dispatch ([x, pivot, LINPACK, tol, `...`])

  return Rsh_Fir_user_version_inner3461445199_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3461445199_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3461445199 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3461445199/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_pivot;  // pivot
  SEXP Rsh_Fir_reg_LINPACK;  // LINPACK
  SEXP Rsh_Fir_reg_tol;  // tol
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_pivot_isMissing;  // pivot_isMissing
  SEXP Rsh_Fir_reg_pivot_orDefault;  // pivot_orDefault
  SEXP Rsh_Fir_reg_LINPACK_isMissing;  // LINPACK_isMissing
  SEXP Rsh_Fir_reg_LINPACK_orDefault;  // LINPACK_orDefault
  SEXP Rsh_Fir_reg_tol_isMissing;  // tol_isMissing
  SEXP Rsh_Fir_reg_tol_orDefault;  // tol_orDefault
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_pivot1_;  // pivot1
  SEXP Rsh_Fir_reg_pivot2_;  // pivot2
  SEXP Rsh_Fir_reg_tol1_;  // tol1
  SEXP Rsh_Fir_reg_tol2_;  // tol2
  SEXP Rsh_Fir_reg_La_chol;  // La_chol
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_pivot = PARAMS[1];
  Rsh_Fir_reg_LINPACK = PARAMS[2];
  Rsh_Fir_reg_tol = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // pivot_isMissing = missing.0(pivot)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_pivot;
  Rsh_Fir_reg_pivot_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if pivot_isMissing then L0(FALSE) else L0(pivot)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pivot_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_pivot_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(pivot)
    Rsh_Fir_reg_pivot_orDefault = Rsh_Fir_reg_pivot;
    goto L0_;
  }

L0_:;
  // st pivot = pivot_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_pivot_orDefault, RHO);
  (void)(Rsh_Fir_reg_pivot_orDefault);
  // LINPACK_isMissing = missing.0(LINPACK)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_LINPACK;
  Rsh_Fir_reg_LINPACK_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if LINPACK_isMissing then L1(FALSE) else L1(LINPACK)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_LINPACK_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_LINPACK_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(LINPACK)
    Rsh_Fir_reg_LINPACK_orDefault = Rsh_Fir_reg_LINPACK;
    goto L1_;
  }

L1_:;
  // st LINPACK = LINPACK_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_LINPACK_orDefault, RHO);
  (void)(Rsh_Fir_reg_LINPACK_orDefault);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if tol_isMissing then L2() else L3(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3461445199_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L4_:;
  // r4 = `!`(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L13() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf `is.complex`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `is.complex` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L7_:;
  // c2 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;

L11_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r3 = dyn missing(<sym LINPACK>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L4_;

L12_:;
  // r1 = dyn base(<sym LINPACK>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r1)
  // L4(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L4_;

L13_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r5 = dyn stop("the LINPACK argument has been defunct since R 3.1.0")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L6()
  // L6()
  goto L6_;

L17_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r7 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L7_;

D2_:;
  // deopt 11 [x1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c1 = `is.complex`(x2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L7(c1)
  // L7(c1)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_c1_;
  goto L7_;

L20_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r9 = dyn stop1("complex matrices not permitted at present")
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 17 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L9()
  // L9()
  goto L9_;

L24_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L25_:;
  // r11 = dyn base2(<lang La_chol(as.matrix(x), pivot, tol)>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L10(r11)
  // L10(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L10_;

D5_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3461445199_1, CCP, RHO);
  // r14 = dyn as_matrix(p1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

D6_:;
  // deopt 25 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // pivot1 = ld pivot
  Rsh_Fir_reg_pivot1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 26 [pivot1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_pivot1_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // pivot2 = force? pivot1
  Rsh_Fir_reg_pivot2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pivot1_);
  // checkMissing(pivot2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_pivot2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

D8_:;
  // deopt 28 [tol1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_tol1_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // La_chol = ldf La_chol in base
  Rsh_Fir_reg_La_chol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r15 = dyn La_chol(r14, pivot2, tol2)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_pivot2_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_chol, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

D9_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L10(r15)
  // L10(r15)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r15_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner3461445199_(SEXP CCP, SEXP RHO) {
  // return -1.0
  return Rsh_const(CCP, 5);
}
SEXP Rsh_Fir_user_promise_inner3461445199_1(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
