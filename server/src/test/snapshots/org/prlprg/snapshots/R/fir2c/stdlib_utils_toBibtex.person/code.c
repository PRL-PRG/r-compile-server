#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3197553692_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3197553692_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3197553692_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3197553692_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3197553692_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3913899244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3913899244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3913899244_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3913899244_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner3197553692
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3197553692_, RHO, CCP);
  // st `toBibtex.person` = r
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
SEXP Rsh_Fir_user_function_inner3197553692_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3197553692 dynamic dispatch ([object, escape, `...`])

  return Rsh_Fir_user_version_inner3197553692_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3197553692_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3197553692 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3197553692/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_escape;  // escape
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_escape_isMissing;  // escape_isMissing
  SEXP Rsh_Fir_reg_escape_orDefault;  // escape_orDefault
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_y8_;  // y8
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_y11_;  // y11
  SEXP Rsh_Fir_reg_y12_;  // y12
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_y13_;  // y13
  SEXP Rsh_Fir_reg_y14_;  // y14

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_escape = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // escape_isMissing = missing.0(escape)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_escape;
  Rsh_Fir_reg_escape_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if escape_isMissing then L0(FALSE) else L0(escape)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_escape_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_escape_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(escape)
    Rsh_Fir_reg_escape_orDefault = Rsh_Fir_reg_escape;
    goto L0_;
  }

L0_:;
  // st escape = escape_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_escape_orDefault, RHO);
  (void)(Rsh_Fir_reg_escape_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L1_:;
  // st y = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r7 = dyn __(y6, r5)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_y6_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L1_;

L3_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   return object2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3197553692_, CCP, RHO);
  // p1 = prom<V +>{
  //   r1 = clos inner3913899244;
  //   return r1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3197553692_1, CCP, RHO);
  // r3 = dyn vapply(p, p1, "")
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // st y = r3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 7 [y]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(y1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L9() else L10(y1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L10(y1)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_y1_;
    goto L10_;
  }

L9_:;
  // dr = tryDispatchBuiltin.1("[", y1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L11() else L10(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_dr;
    goto L10_;
  }

L10_:;
  // sym = ldf nzchar
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf nzchar in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L11_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L12_:;
  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L13_:;
  // r4 = dyn base(<sym y>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(y3, r4)
  // L2(y3, r4)
  Rsh_Fir_reg_y6_ = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D3_:;
  // deopt 11 [y3, y7]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r6 = dyn nzchar(y8)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 14 [y3, r6]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2(y3, r6)
  // L2(y3, r6)
  Rsh_Fir_reg_y6_ = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L16_:;
  // y9 = ld y
  Rsh_Fir_reg_y9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L17_:;
  // r8 = dyn base1(<sym y>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D5_:;
  // deopt 19 [y9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // y10 = force? y9
  Rsh_Fir_reg_y10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y9_);
  // checkMissing(y10)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_y10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r10 = dyn length(y10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 22 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L3_;

L20_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p2 = prom<V +>{
  //   y11 = ld y;
  //   y12 = force? y11;
  //   checkMissing(y12);
  //   return y12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3197553692_2, CCP, RHO);
  // r12 = dyn paste[, collapse](p2, " and ")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

D8_:;
  // deopt 28 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // st y = r12
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L5()
  // L5()
  goto L5_;

D9_:;
  // deopt 35 ["Bibtex", l, "Bibtex"]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_const(CCP, 16);
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // r14 = dyn class__(l, NULL, "Bibtex")
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 37 ["Bibtex", r14]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // st y = r14
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // y13 = ld y
  Rsh_Fir_reg_y13_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 39 [y13]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_y13_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L26_:;
  // y14 = force? y13
  Rsh_Fir_reg_y14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y13_);
  // checkMissing(y14)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_y14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y14
  return Rsh_Fir_reg_y14_;
}
SEXP Rsh_Fir_user_promise_inner3197553692_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return object2
  return Rsh_Fir_reg_object2_;
}
SEXP Rsh_Fir_user_promise_inner3197553692_1(SEXP CCP, SEXP RHO) {
  // r1 = clos inner3913899244
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3913899244_, RHO, CCP);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner3197553692_2(SEXP CCP, SEXP RHO) {
  // y11 = ld y
  Rsh_Fir_reg_y11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // y12 = force? y11
  Rsh_Fir_reg_y12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y11_);
  // checkMissing(y12)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_y12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return y12
  return Rsh_Fir_reg_y12_;
}
SEXP Rsh_Fir_user_function_inner3913899244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3913899244 dynamic dispatch ([p])

  return Rsh_Fir_user_version_inner3913899244_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3913899244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3913899244 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3913899244/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r14_1;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_br;  // br
  SEXP Rsh_Fir_reg_br1_;  // br1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_isTRUE;  // isTRUE
  SEXP Rsh_Fir_reg_escape1;  // escape
  SEXP Rsh_Fir_reg_escape1_;  // escape1
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_Encoding;  // Encoding
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_enc2utf8_;  // enc2utf8
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_s5_;  // s5

  // Bind parameters
  Rsh_Fir_reg_p1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st p = p
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_p1, RHO);
  (void)(Rsh_Fir_reg_p1);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // c2 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L13() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L13()
    goto L13_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L2_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r4_1;
  goto L3_;

L3_:;
  // st br = r6
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r6_1, RHO);
  (void)(Rsh_Fir_reg_r6_1);
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

L4_:;
  // c13 = `as.logical`(c9)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c13 then L29() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L29()
    goto L29_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // s4 = ld s
  Rsh_Fir_reg_s4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L34() else D12()
  // L34()
  goto L34_;

L6_:;
  // p1 = ld p
  Rsh_Fir_reg_p1_1 = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<lang `$`(p, family)>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [p1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L8_:;
  // p2 = force? p1
  Rsh_Fir_reg_p2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_1);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c = `is.object`(p2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c then L10() else L11(p2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L10()
    goto L10_;
  } else {
  // L11(p2)
    Rsh_Fir_reg_p4_ = Rsh_Fir_reg_p2_1;
    goto L11_;
  }

L9_:;
  // c1 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1_1;
  goto L0_;

L10_:;
  // dr = tryDispatchBuiltin.1("$", p2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_p4_ = Rsh_Fir_reg_dr1;
    goto L11_;
  }

L11_:;
  // r2 = `$`(p4, <sym family>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L9(r2)
  // L9(r2)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2_;
  goto L9_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L9_;

L13_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r5 = dyn c3("{", "}")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L15_:;
  // r3 = dyn base1("{", "}")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L2_;

D1_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L2_;

L18_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r8 = dyn c4("", "")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r7 = dyn base2("", "")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_1;
  goto L3_;

D2_:;
  // deopt 16 [r8]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r8_1;
  goto L3_;

D3_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p7 = prom<V +>{
  //   p5 = ld p;
  //   p6 = force? p5;
  //   checkMissing(p6);
  //   return p6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_, CCP, RHO);
  // p8 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   c5 = ldf c in base;
  //   r12 = dyn c5("family", "given");
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base3("family", "given");
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_1, CCP, RHO);
  // p9 = prom<V +>{
  //   sym4 = ldf list;
  //   base4 = ldf list in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L2() else L3();
  // L0(r15):
  //   return r15;
  // L2():
  //   br = ld br;
  //   br1 = force? br;
  //   checkMissing(br1);
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L4() else L5();
  // L3():
  //   r14 = dyn base4[given, family](<sym br>, <lang c("", ",")>);
  //   goto L0(r14);
  // L1(r17):
  //   list = ldf list in base;
  //   r19 = dyn list(br1, r17);
  //   goto L0(r19);
  // L4():
  //   c6 = ldf c in base;
  //   r18 = dyn c6("", ",");
  //   goto L1(r18);
  // L5():
  //   r16 = dyn base5("", ",");
  //   goto L1(r16);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_2, CCP, RHO);
  // r21 = dyn format[, include, braces](p7, p8, p9)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 3, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 25 [r21]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L22_:;
  // st s = r21
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p10 = prom<V +>{
  //   escape = ld escape;
  //   escape1 = force? escape;
  //   checkMissing(escape1);
  //   return escape1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_3, CCP, RHO);
  // r23 = dyn isTRUE(p10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 30 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L24_:;
  // c7 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c7 then L25() else L4(c7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L25()
    goto L25_;
  } else {
  // L4(c7)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c7_;
    goto L4_;
  }

L25_:;
  // Encoding = ldf Encoding
  Rsh_Fir_reg_Encoding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

D7_:;
  // deopt 32 [c7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L26_:;
  // p11 = prom<V +>{
  //   sym6 = ldf enc2utf8;
  //   base6 = ldf enc2utf8 in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r25):
  //   st s = r25;
  //   invisible.0();
  //   return r25;
  // L1():
  //   s = ld s;
  //   s1 = force? s;
  //   checkMissing(s1);
  //   enc2utf8 = ldf enc2utf8 in base;
  //   r26 = dyn enc2utf8(s1);
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base6(<sym s>);
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_4, CCP, RHO);
  // r28 = dyn Encoding(p11)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 34 [c7, r28]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L27_:;
  // r29 = `==`(r28, "UTF-8")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // c11 = `&&`(c7, c10)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L4(c11)
  // L4(c11)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c11_;
  goto L4_;

L29_:;
  // __ = ldf `::`
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

D9_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // r30 = dyn __("tools", "encoded_text_to_latex")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L31() else D10()
  // L31()
  goto L31_;

D10_:;
  // deopt 42 [r30]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L31_:;
  // checkFun.0(r30)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r30_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args63));
  // r31 = r30 as cls
  Rsh_Fir_reg_r31_ = Rsh_Fir_cast(Rsh_Fir_reg_r30_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p12 = prom<V +>{
  //   s2 = ld s;
  //   s3 = force? s2;
  //   checkMissing(s3);
  //   return s3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3913899244_5, CCP, RHO);
  // r33 = dyn r31(p12, "UTF-8")
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r31_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

D11_:;
  // deopt 46 [r33]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L32_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;

D12_:;
  // deopt 47 [s4]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L34_:;
  // s5 = force? s4
  Rsh_Fir_reg_s5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s4_);
  // checkMissing(s5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_s5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return s5
  return Rsh_Fir_reg_s5_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_(SEXP CCP, SEXP RHO) {
  // p5 = ld p
  Rsh_Fir_reg_p5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // p6 = force? p5
  Rsh_Fir_reg_p6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p5_);
  // checkMissing(p6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return p6
  return Rsh_Fir_reg_p6_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_1(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r12 = dyn c5("family", "given")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_1;
  goto L0_;

L2_:;
  // r10 = dyn base3("family", "given")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_2(SEXP CCP, SEXP RHO) {
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard4 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r19 = dyn list(br1, r17)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_br1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // br = ld br
  Rsh_Fir_reg_br = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // br1 = force? br
  Rsh_Fir_reg_br1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_br);
  // checkMissing(br1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_br1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard5 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r14 = dyn base4[given, family](<sym br>, <lang c("", ",")>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_1;
  goto L0_;

L4_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r18 = dyn c6("", ",")
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L1(r18)
  // L1(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L1_;

L5_:;
  // r16 = dyn base5("", ",")
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L1(r16)
  // L1(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_3(SEXP CCP, SEXP RHO) {
  // escape = ld escape
  Rsh_Fir_reg_escape1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // escape1 = force? escape
  Rsh_Fir_reg_escape1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_escape1);
  // checkMissing(escape1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_escape1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return escape1
  return Rsh_Fir_reg_escape1_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_4(SEXP CCP, SEXP RHO) {
  // sym6 = ldf enc2utf8
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base6 = ldf enc2utf8 in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st s = r25
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // enc2utf8 = ldf enc2utf8 in base
  Rsh_Fir_reg_enc2utf8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r26 = dyn enc2utf8(s1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_enc2utf8_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L0_;

L2_:;
  // r24 = dyn base6(<sym s>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3913899244_5(SEXP CCP, SEXP RHO) {
  // s2 = ld s
  Rsh_Fir_reg_s2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // s3 = force? s2
  Rsh_Fir_reg_s3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2_);
  // checkMissing(s3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_s3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return s3
  return Rsh_Fir_reg_s3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
