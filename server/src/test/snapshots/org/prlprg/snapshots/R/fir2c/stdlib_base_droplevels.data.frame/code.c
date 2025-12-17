#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3682415443_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3682415443_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3682415443_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3682415443_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3682415443_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3682415443_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3682415443_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3682415443_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3682415443_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner3682415443
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3682415443_, RHO, CCP);
  // st `droplevels.data.frame` = r
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
SEXP Rsh_Fir_user_function_inner3682415443_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3682415443 dynamic dispatch ([x, except, exclude, `...`])

  return Rsh_Fir_user_version_inner3682415443_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3682415443_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3682415443 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3682415443/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_except;  // except
  SEXP Rsh_Fir_reg_exclude;  // exclude
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_except_isMissing;  // except_isMissing
  SEXP Rsh_Fir_reg_except_orDefault;  // except_orDefault
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_is_factor;  // is_factor
  SEXP Rsh_Fir_reg_is_factor1_;  // is_factor1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_except1_;  // except1
  SEXP Rsh_Fir_reg_except2_;  // except2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_except3_;  // except3
  SEXP Rsh_Fir_reg_except4_;  // except4
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_ix;  // ix
  SEXP Rsh_Fir_reg_ix1_;  // ix1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_droplevels;  // droplevels
  SEXP Rsh_Fir_reg_droplevels1_;  // droplevels1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_lapply1_;  // lapply1
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_ix2_;  // ix2
  SEXP Rsh_Fir_reg_ix3_;  // ix3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_droplevels2_;  // droplevels2
  SEXP Rsh_Fir_reg_droplevels3_;  // droplevels3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_exclude1_;  // exclude1
  SEXP Rsh_Fir_reg_exclude2_;  // exclude2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_ix4_;  // ix4
  SEXP Rsh_Fir_reg_ix5_;  // ix5
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_except = PARAMS[1];
  Rsh_Fir_reg_exclude = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // except_isMissing = missing.0(except)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_except;
  Rsh_Fir_reg_except_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if except_isMissing then L0(NULL) else L0(except)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_except_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_except_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(except)
    Rsh_Fir_reg_except_orDefault = Rsh_Fir_reg_except;
    goto L0_;
  }

L0_:;
  // st except = except_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_except_orDefault, RHO);
  (void)(Rsh_Fir_reg_except_orDefault);
  // st exclude = exclude
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_exclude, RHO);
  (void)(Rsh_Fir_reg_exclude);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L1_:;
  // r5 = `!`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L3_:;
  // st ix = dx1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L5_:;
  // c3 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L22() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L22()
    goto L22_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // lapply1 = ldf lapply
  Rsh_Fir_reg_lapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L7_:;
  // l3 = ld x
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c6 = `is.object`(l3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c6 then L28() else L29(r19, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L28()
    goto L28_;
  } else {
  // L29(r19, l3)
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L29_;
  }

L8_:;
  // st x = dx7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3682415443_, CCP, RHO);
  // p1 = prom<V +>{
  //   is_factor = ld `is.factor`;
  //   is_factor1 = force? is_factor;
  //   checkMissing(is_factor1);
  //   return is_factor1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3682415443_1, CCP, RHO);
  // r2 = dyn vapply(p, p1, NA_LGL)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st ix = r2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // except1 = ld except
  Rsh_Fir_reg_except1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base(<sym except>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 8 [except1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_except1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // except2 = force? except1
  Rsh_Fir_reg_except2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_except1_);
  // checkMissing(except2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_except2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c = `==`(except2, NULL)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_except2_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L1_;

L14_:;
  // l = ld ix
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c2 then L15() else L16(FALSE, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L16(FALSE, l)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L16_;
  }

L15_:;
  // dr = tryDispatchBuiltin.0("[<-", l, FALSE)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(FALSE, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L17()
    goto L17_;
  } else {
  // L16(FALSE, dr)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L16_;
  }

L16_:;
  // except3 = ld except
  Rsh_Fir_reg_except3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L3(FALSE, dx)
  // L3(FALSE, dx)
  Rsh_Fir_reg_r9_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D3_:;
  // deopt 15 [r7, l2, FALSE, except3]
  SEXP Rsh_Fir_array_deopt_stack2[4];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_except3_;
  Rsh_Fir_deopt(15, 4, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // except4 = force? except3
  Rsh_Fir_reg_except4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_except3_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r10 = dyn ___(l2, FALSE, except4)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_except4_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r7, r10)
  // L3(r7, r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L3_;

L20_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r14 = dyn missing(<sym exclude>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

L21_:;
  // r12 = dyn base1(<sym exclude>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

L22_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

D4_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   c4 = `is.object`(x4);
  //   if c4 then L1() else L2(x4);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", x4);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(x6):
  //   ix = ld ix;
  //   ix1 = force? ix;
  //   __ = ldf `[` in base;
  //   r15 = dyn __(x6, ix1);
  //   goto L0(r15);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3682415443_2, CCP, RHO);
  // p3 = prom<V +>{
  //   droplevels = ld droplevels;
  //   droplevels1 = force? droplevels;
  //   checkMissing(droplevels1);
  //   return droplevels1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3682415443_3, CCP, RHO);
  // r18 = dyn lapply(p2, p3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 28 [r18]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p4 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   c5 = `is.object`(x8);
  //   if c5 then L1() else L2(x8);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", x8);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(x10):
  //   ix2 = ld ix;
  //   ix3 = force? ix2;
  //   __1 = ldf `[` in base;
  //   r20 = dyn __1(x10, ix3);
  //   goto L0(r20);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3682415443_4, CCP, RHO);
  // p5 = prom<V +>{
  //   droplevels2 = ld droplevels;
  //   droplevels3 = force? droplevels2;
  //   checkMissing(droplevels3);
  //   return droplevels3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3682415443_5, CCP, RHO);
  // p6 = prom<V +>{
  //   exclude1 = ld exclude;
  //   exclude2 = force? exclude1;
  //   checkMissing(exclude2);
  //   return exclude2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3682415443_6, CCP, RHO);
  // r24 = dyn lapply1[, , exclude](p4, p5, p6)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

D7_:;
  // deopt 35 [r24]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L7(r24)
  // L7(r24)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r24_;
  goto L7_;

L28_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l3, r19)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args37);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc3 then L30() else L29(r19, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L30()
    goto L30_;
  } else {
  // L29(r19, dr6)
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L29_;
  }

L29_:;
  // ix4 = ld ix
  Rsh_Fir_reg_ix4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L30_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L8(dx6)
  // L8(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L8_;

D8_:;
  // deopt 37 [r26, l5, r19, ix4]
  SEXP Rsh_Fir_array_deopt_stack5[4];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_ix4_;
  Rsh_Fir_deopt(37, 4, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // ix5 = force? ix4
  Rsh_Fir_reg_ix5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix4_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r29 = dyn ___1(l5, r19, ix5)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_ix5_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r29_;
  goto L8_;

D9_:;
  // deopt 41 [x11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner3682415443_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3682415443_1(SEXP CCP, SEXP RHO) {
  // is_factor = ld `is.factor`
  Rsh_Fir_reg_is_factor = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // is_factor1 = force? is_factor
  Rsh_Fir_reg_is_factor1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_factor);
  // checkMissing(is_factor1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_is_factor1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return is_factor1
  return Rsh_Fir_reg_is_factor1_;
}
SEXP Rsh_Fir_user_promise_inner3682415443_2(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c4 then L1() else L2(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // ix = ld ix
  Rsh_Fir_reg_ix = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ix1 = force? ix
  Rsh_Fir_reg_ix1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r15 = dyn __(x6, ix1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_ix1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3682415443_3(SEXP CCP, SEXP RHO) {
  // droplevels = ld droplevels
  Rsh_Fir_reg_droplevels = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // droplevels1 = force? droplevels
  Rsh_Fir_reg_droplevels1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_droplevels);
  // checkMissing(droplevels1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_droplevels1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return droplevels1
  return Rsh_Fir_reg_droplevels1_;
}
SEXP Rsh_Fir_user_promise_inner3682415443_4(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x8)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(x8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x8)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", x8)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // ix2 = ld ix
  Rsh_Fir_reg_ix2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ix3 = force? ix2
  Rsh_Fir_reg_ix3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ix2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r20 = dyn __1(x10, ix3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_ix3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3682415443_5(SEXP CCP, SEXP RHO) {
  // droplevels2 = ld droplevels
  Rsh_Fir_reg_droplevels2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // droplevels3 = force? droplevels2
  Rsh_Fir_reg_droplevels3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_droplevels2_);
  // checkMissing(droplevels3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_droplevels3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return droplevels3
  return Rsh_Fir_reg_droplevels3_;
}
SEXP Rsh_Fir_user_promise_inner3682415443_6(SEXP CCP, SEXP RHO) {
  // exclude1 = ld exclude
  Rsh_Fir_reg_exclude1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // exclude2 = force? exclude1
  Rsh_Fir_reg_exclude2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exclude1_);
  // checkMissing(exclude2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_exclude2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return exclude2
  return Rsh_Fir_reg_exclude2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
