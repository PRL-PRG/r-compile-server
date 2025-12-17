#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4106666089_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4106666089_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4106666089_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106666089_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106666089_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106666089_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106666089_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4106666089_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner4106666089
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4106666089_, RHO, CCP);
  // st `.makeAsMethod` = r
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
SEXP Rsh_Fir_user_function_inner4106666089_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4106666089 dynamic dispatch ([expr, simple, Class, ClassDef, where])

  return Rsh_Fir_user_version_inner4106666089_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4106666089_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4106666089 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4106666089/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_expr;  // expr
  SEXP Rsh_Fir_reg_simple;  // simple
  SEXP Rsh_Fir_reg_Class;  // Class
  SEXP Rsh_Fir_reg_ClassDef;  // ClassDef
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_expr1_;  // expr1
  SEXP Rsh_Fir_reg_expr2_;  // expr2
  SEXP Rsh_Fir_reg_is_function;  // is_function
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_expr3_;  // expr3
  SEXP Rsh_Fir_reg_expr4_;  // expr4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_formalArgs;  // formalArgs
  SEXP Rsh_Fir_reg_expr5_;  // expr5
  SEXP Rsh_Fir_reg_expr6_;  // expr6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__ChangeFormals;  // _ChangeFormals
  SEXP Rsh_Fir_reg_expr7_;  // expr7
  SEXP Rsh_Fir_reg_expr8_;  // expr8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_args3_;  // args3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg__simpleExtCoerce;  // _simpleExtCoerce
  SEXP Rsh_Fir_reg__simpleExtCoerce1_;  // _simpleExtCoerce1
  SEXP Rsh_Fir_reg__simpleIsCoerce;  // _simpleIsCoerce
  SEXP Rsh_Fir_reg__simpleIsCoerce1_;  // _simpleIsCoerce1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_body;  // body
  SEXP Rsh_Fir_reg_expr9_;  // expr9
  SEXP Rsh_Fir_reg_expr10_;  // expr10
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_expr11_;  // expr11
  SEXP Rsh_Fir_reg_expr12_;  // expr12
  SEXP Rsh_Fir_reg_simple1_;  // simple1
  SEXP Rsh_Fir_reg_simple2_;  // simple2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_expr13_;  // expr13
  SEXP Rsh_Fir_reg_expr14_;  // expr14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg__simpleExtCoerce2_;  // _simpleExtCoerce2
  SEXP Rsh_Fir_reg__simpleExtCoerce3_;  // _simpleExtCoerce3
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_body__;  // body__
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1

  // Bind parameters
  Rsh_Fir_reg_expr = PARAMS[0];
  Rsh_Fir_reg_simple = PARAMS[1];
  Rsh_Fir_reg_Class = PARAMS[2];
  Rsh_Fir_reg_ClassDef = PARAMS[3];
  Rsh_Fir_reg_where = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st expr = expr
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_expr, RHO);
  (void)(Rsh_Fir_reg_expr);
  // st simple = simple
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_simple, RHO);
  (void)(Rsh_Fir_reg_simple);
  // st Class = Class
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_Class, RHO);
  (void)(Rsh_Fir_reg_Class);
  // st ClassDef = ClassDef
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ClassDef, RHO);
  (void)(Rsh_Fir_reg_ClassDef);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // sym = ldf `is.function`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.function` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L16() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L5()
  // L5()
  goto L5_;

L2_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // body = ldf body
  Rsh_Fir_reg_body = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L5_:;
  // expr11 = ld expr
  Rsh_Fir_reg_expr11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

L6_:;
  // c15 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c15 then L42() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L42()
    goto L42_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r28 = `!`(r23)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c8, c12)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L6(c13)
  // L6(c13)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c13_;
  goto L6_;

L8_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r27 = dyn identical1(expr14, r25, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args8[9];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_expr14_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[9];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L40() else D15()
  // L40()
  goto L40_;

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // st value = r30
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // _simpleExtCoerce2 = ld `.simpleExtCoerce`
  Rsh_Fir_reg__simpleExtCoerce2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L46() else D16()
  // L46()
  goto L46_;

L12_:;
  // expr1 = ld expr
  Rsh_Fir_reg_expr1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L13_:;
  // r = dyn base(<sym expr>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [expr1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_expr1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // expr2 = force? expr1
  Rsh_Fir_reg_expr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr1_);
  // checkMissing(expr2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_expr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn is_function(expr2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_expr2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L16_:;
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p = prom<V +>{
  //   expr3 = ld expr;
  //   expr4 = force? expr3;
  //   checkMissing(expr4);
  //   return expr4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106666089_, CCP, RHO);
  // r4 = dyn environment(p)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // st where = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // formalArgs = ldf formalArgs
  Rsh_Fir_reg_formalArgs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p1 = prom<V +>{
  //   expr5 = ld expr;
  //   expr6 = force? expr5;
  //   checkMissing(expr6);
  //   return expr6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106666089_1, CCP, RHO);
  // r6 = dyn formalArgs(p1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formalArgs, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

D5_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // st args = r6
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L22_:;
  // r7 = dyn base1(<sym args>, "from")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D6_:;
  // deopt 18 [args]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_args;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r9 = dyn identical(args1, "from", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args19[9];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_args1_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[5] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args19[7] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args19[8] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[9];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D7_:;
  // deopt 29 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

L25_:;
  // _ChangeFormals = ldf `.ChangeFormals`
  Rsh_Fir_reg__ChangeFormals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p2 = prom<V +>{
  //   expr7 = ld expr;
  //   expr8 = force? expr7;
  //   checkMissing(expr8);
  //   return expr8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106666089_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym2 = ldf length;
  //   base2 = ldf length in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r13):
  //   r15 = `>`(r13, 1.0);
  //   c2 = `as.logical`(r15);
  //   if c2 then L4() else L1();
  // L2():
  //   args2 = ld args;
  //   args3 = force? args2;
  //   checkMissing(args3);
  //   length = ldf length in base;
  //   r14 = dyn length(args3);
  //   goto L0(r14);
  // L3():
  //   r12 = dyn base2(<sym args>);
  //   goto L0(r12);
  // L1():
  //   _simpleIsCoerce = ld `.simpleIsCoerce`;
  //   _simpleIsCoerce1 = force? _simpleIsCoerce;
  //   checkMissing(_simpleIsCoerce1);
  //   return _simpleIsCoerce1;
  // L4():
  //   _simpleExtCoerce = ld `.simpleExtCoerce`;
  //   _simpleExtCoerce1 = force? _simpleExtCoerce;
  //   checkMissing(_simpleExtCoerce1);
  //   return _simpleExtCoerce1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106666089_3, CCP, RHO);
  // r17 = dyn _ChangeFormals(p2, p3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__ChangeFormals, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 35 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // st expr = r17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L4()
  // L4()
  goto L4_;

D10_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p4 = prom<V +>{
  //   expr9 = ld expr;
  //   expr10 = force? expr9;
  //   checkMissing(expr10);
  //   return expr10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106666089_4, CCP, RHO);
  // r20 = dyn body(p4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_body, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 42 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // st expr = r20
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // goto L5()
  // L5()
  goto L5_;

D12_:;
  // deopt 46 [expr11]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_expr11_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // expr12 = force? expr11
  Rsh_Fir_reg_expr12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr11_);
  // checkMissing(expr12)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_expr12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // st value = expr12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_expr12_, RHO);
  (void)(Rsh_Fir_reg_expr12_);
  // simple1 = ld simple
  Rsh_Fir_reg_simple1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

D13_:;
  // deopt 49 [simple1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_simple1_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // simple2 = force? simple1
  Rsh_Fir_reg_simple2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simple1_);
  // checkMissing(simple2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_simple2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(simple2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_simple2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c3 then L34() else L6(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L34()
    goto L34_;
  } else {
  // L6(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L6_;
  }

L34_:;
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // expr13 = ld expr
  Rsh_Fir_reg_expr13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

L36_:;
  // r22 = dyn base3(<sym expr>, <lang quote(from)>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(c3, r22)
  // L7(c3, r22)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L7_;

D14_:;
  // deopt 53 [c3, expr13]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_expr13_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // expr14 = force? expr13
  Rsh_Fir_reg_expr14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr13_);
  // checkMissing(expr14)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_expr14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // sym4 = ldf quote
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base4 = ldf quote in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard4 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r26 = dyn quote(<sym from>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(c3, r26)
  // L8(c3, r26)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L8_;

L39_:;
  // r24 = dyn base4(<sym from>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(c3, r24)
  // L8(c3, r24)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L8_;

D15_:;
  // deopt 66 [c11, r27]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L7(c11, r27)
  // L7(c11, r27)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r27_;
  goto L7_;

L42_:;
  // sym5 = ldf substitute
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base5 = ldf substitute in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard5 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L43_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r31 = dyn substitute(<lang if(strict, EXPR, from)>, <lang list(EXPR=expr)>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L10_;

L44_:;
  // r29 = dyn base5(<lang if(strict, EXPR, from)>, <lang list(EXPR=expr)>)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L10_;

D16_:;
  // deopt 75 [_simpleExtCoerce2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg__simpleExtCoerce2_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // _simpleExtCoerce3 = force? _simpleExtCoerce2
  Rsh_Fir_reg__simpleExtCoerce3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__simpleExtCoerce2_);
  // checkMissing(_simpleExtCoerce3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg__simpleExtCoerce3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // st f = _simpleExtCoerce3
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg__simpleExtCoerce3_, RHO);
  (void)(Rsh_Fir_reg__simpleExtCoerce3_);
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L47() else D17()
  // L47()
  goto L47_;

D17_:;
  // deopt 78 [value]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L47_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // l = ld f
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // body__ = ldf `body<-`
  Rsh_Fir_reg_body__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

D18_:;
  // deopt 81 [value1, l, value1]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(81, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L48_:;
  // p5 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4106666089_5, CCP, RHO);
  // r34 = dyn body__[, , envir, ](l, NULL, p5, value1)
  SEXP Rsh_Fir_array_args47[4];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args47[3] = Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_body__, 4, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 85 [value1, r34]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L49_:;
  // st f = r34
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

D20_:;
  // deopt 87 [f]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_f;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L50_:;
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner4106666089_(SEXP CCP, SEXP RHO) {
  // expr3 = ld expr
  Rsh_Fir_reg_expr3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // expr4 = force? expr3
  Rsh_Fir_reg_expr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr3_);
  // checkMissing(expr4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_expr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return expr4
  return Rsh_Fir_reg_expr4_;
}
SEXP Rsh_Fir_user_promise_inner4106666089_1(SEXP CCP, SEXP RHO) {
  // expr5 = ld expr
  Rsh_Fir_reg_expr5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // expr6 = force? expr5
  Rsh_Fir_reg_expr6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr5_);
  // checkMissing(expr6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_expr6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return expr6
  return Rsh_Fir_reg_expr6_;
}
SEXP Rsh_Fir_user_promise_inner4106666089_2(SEXP CCP, SEXP RHO) {
  // expr7 = ld expr
  Rsh_Fir_reg_expr7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // expr8 = force? expr7
  Rsh_Fir_reg_expr8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr7_);
  // checkMissing(expr8)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_expr8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return expr8
  return Rsh_Fir_reg_expr8_;
}
SEXP Rsh_Fir_user_promise_inner4106666089_3(SEXP CCP, SEXP RHO) {
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // r15 = `>`(r13, 1.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // _simpleIsCoerce = ld `.simpleIsCoerce`
  Rsh_Fir_reg__simpleIsCoerce = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // _simpleIsCoerce1 = force? _simpleIsCoerce
  Rsh_Fir_reg__simpleIsCoerce1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__simpleIsCoerce);
  // checkMissing(_simpleIsCoerce1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg__simpleIsCoerce1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return _simpleIsCoerce1
  return Rsh_Fir_reg__simpleIsCoerce1_;

L2_:;
  // args2 = ld args
  Rsh_Fir_reg_args2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // args3 = force? args2
  Rsh_Fir_reg_args3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args2_);
  // checkMissing(args3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_args3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r14 = dyn length(args3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_args3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // r12 = dyn base2(<sym args>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;

L4_:;
  // _simpleExtCoerce = ld `.simpleExtCoerce`
  Rsh_Fir_reg__simpleExtCoerce = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // _simpleExtCoerce1 = force? _simpleExtCoerce
  Rsh_Fir_reg__simpleExtCoerce1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__simpleExtCoerce);
  // checkMissing(_simpleExtCoerce1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg__simpleExtCoerce1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return _simpleExtCoerce1
  return Rsh_Fir_reg__simpleExtCoerce1_;
}
SEXP Rsh_Fir_user_promise_inner4106666089_4(SEXP CCP, SEXP RHO) {
  // expr9 = ld expr
  Rsh_Fir_reg_expr9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // expr10 = force? expr9
  Rsh_Fir_reg_expr10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expr9_);
  // checkMissing(expr10)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_expr10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return expr10
  return Rsh_Fir_reg_expr10_;
}
SEXP Rsh_Fir_user_promise_inner4106666089_5(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
