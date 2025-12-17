#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3253127715_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3253127715_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3253127715_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3253127715_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner3253127715
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3253127715_, RHO, CCP);
  // st `.NamespaceOrEnvironment` = r
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
SEXP Rsh_Fir_user_function_inner3253127715_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3253127715 dynamic dispatch ([where])

  return Rsh_Fir_user_version_inner3253127715_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3253127715_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3253127715 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3253127715/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_is_environment;  // is_environment
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_where7_;  // where7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_where8_;  // where8
  SEXP Rsh_Fir_reg_where9_;  // where9
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg__getNamespace;  // _getNamespace
  SEXP Rsh_Fir_reg_where10_;  // where10
  SEXP Rsh_Fir_reg_where11_;  // where11
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_isNamespace;  // isNamespace
  SEXP Rsh_Fir_reg_ns;  // ns
  SEXP Rsh_Fir_reg_ns1_;  // ns1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_ns2_;  // ns2
  SEXP Rsh_Fir_reg_ns3_;  // ns3
  SEXP Rsh_Fir_reg_ns4_;  // ns4
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_where12_;  // where12
  SEXP Rsh_Fir_reg_where13_;  // where13
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_search;  // search
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_where14_;  // where14
  SEXP Rsh_Fir_reg_where15_;  // where15
  SEXP Rsh_Fir_reg_as_environment;  // as_environment
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_where16_;  // where16
  SEXP Rsh_Fir_reg_where17_;  // where17
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_where18_;  // where18
  SEXP Rsh_Fir_reg_where19_;  // where19
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_search1_;  // search1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_where20_;  // where20
  SEXP Rsh_Fir_reg_where21_;  // where21
  SEXP Rsh_Fir_reg_as_environment1_;  // as_environment1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_where22_;  // where22
  SEXP Rsh_Fir_reg_where23_;  // where23
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg__in_2_;  // _in_2
  SEXP Rsh_Fir_reg_where24_;  // where24
  SEXP Rsh_Fir_reg_where25_;  // where25
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_search2_;  // search2
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_where26_;  // where26
  SEXP Rsh_Fir_reg_where27_;  // where27
  SEXP Rsh_Fir_reg_as_environment2_;  // as_environment2
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1

  // Bind parameters
  Rsh_Fir_reg_where = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // st value = NULL
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // sym = ldf `is.environment`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `is.environment` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L21() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L2_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L74() else D27()
  // L74()
  goto L74_;

L3_:;
  // c2 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c2 then L27() else L4(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L4(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L4_;
  }

L4_:;
  // c11 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c11 then L33() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L33()
    goto L33_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // c8 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c9 = `&&`(c7, c8)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L4(c9)
  // L4(c9)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c9_;
  goto L4_;

L6_:;
  // sym5 = ldf `is.numeric`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf `is.numeric` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard5 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L7_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

L8_:;
  // goto L2()
  // L2()
  goto L2_;

L9_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

L10_:;
  // st value = r17
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_ns4_ = Rsh_Fir_reg_r17_;
  goto L8_;

L11_:;
  // goto L8(NULL)
  // L8(NULL)
  Rsh_Fir_reg_ns4_ = Rsh_const(CCP, 2);
  goto L8_;

L12_:;
  // st value = r26
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // goto L8(r26)
  // L8(r26)
  Rsh_Fir_reg_ns4_ = Rsh_Fir_reg_r26_;
  goto L8_;

L13_:;
  // c15 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c15 then L64() else L14(c15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L64()
    goto L64_;
  } else {
  // L14(c15)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c15_;
    goto L14_;
  }

L14_:;
  // c21 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c21 then L68() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L68()
    goto L68_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L2()
  // L2()
  goto L2_;

L16_:;
  // st value = r39
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // goto L2()
  // L2()
  goto L2_;

L17_:;
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D0()
  // L19()
  goto L19_;

L18_:;
  // r = dyn base(<sym where>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 5 [where1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L19_:;
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // is_environment = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn is_environment(where2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L20() else D1()
  // L20()
  goto L20_;

D1_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L21_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

D2_:;
  // deopt 9 [where3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // st value = where4
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_where4_, RHO);
  (void)(Rsh_Fir_reg_where4_);
  // goto L2()
  // L2()
  goto L2_;

L24_:;
  // where6 = ld where
  Rsh_Fir_reg_where6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

L25_:;
  // r3 = dyn base1(<sym where>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D3_:;
  // deopt 13 [where6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_where6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L26_:;
  // where7 = force? where6
  Rsh_Fir_reg_where7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where6_);
  // checkMissing(where7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_where7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(where7)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_where7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c1_;
  goto L3_;

L27_:;
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // where8 = ld where
  Rsh_Fir_reg_where8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

L29_:;
  // r5 = dyn base2(<sym where>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(c2, r5)
  // L5(c2, r5)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L5_;

D4_:;
  // deopt 18 [c2, where8]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_where8_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // where9 = force? where8
  Rsh_Fir_reg_where9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where8_);
  // checkMissing(where9)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_where9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r7 = dyn nzchar(where9)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_where9_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D5_:;
  // deopt 21 [c2, r7]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L5(c2, r7)
  // L5(c2, r7)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L5_;

L33_:;
  // _getNamespace = ldf `.getNamespace`
  Rsh_Fir_reg__getNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p = prom<V +>{
  //   where10 = ld where;
  //   where11 = force? where10;
  //   checkMissing(where11);
  //   return where11;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_, CCP, RHO);
  // r9 = dyn _getNamespace(p)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getNamespace, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L35() else D7()
  // L35()
  goto L35_;

D7_:;
  // deopt 26 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // st ns = r9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // isNamespace = ldf isNamespace
  Rsh_Fir_reg_isNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L36() else D8()
  // L36()
  goto L36_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p1 = prom<V +>{
  //   ns = ld ns;
  //   ns1 = force? ns;
  //   checkMissing(ns1);
  //   return ns1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_1, CCP, RHO);
  // r11 = dyn isNamespace(p1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isNamespace, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

D9_:;
  // deopt 31 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // c12 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c12 then L38() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L38()
    goto L38_;
  } else {
  // L7()
    goto L7_;
  }

L38_:;
  // ns2 = ld ns
  Rsh_Fir_reg_ns2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 32 [ns2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ns2_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // ns3 = force? ns2
  Rsh_Fir_reg_ns3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns2_);
  // checkMissing(ns3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_ns3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // st value = ns3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ns3_, RHO);
  (void)(Rsh_Fir_reg_ns3_);
  // goto L8(ns3)
  // L8(ns3)
  Rsh_Fir_reg_ns4_ = Rsh_Fir_reg_ns3_;
  goto L8_;

D11_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p2 = prom<V +>{
  //   where12 = ld where;
  //   where13 = force? where12;
  //   checkMissing(where13);
  //   return where13;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_2, CCP, RHO);
  // p3 = prom<V +>{
  //   search = ldf search;
  //   r13 = dyn search();
  //   return r13;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_3, CCP, RHO);
  // r15 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 39 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // c13 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c13 then L43() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L43()
    goto L43_;
  } else {
  // L9()
    goto L9_;
  }

L43_:;
  // sym3 = ldf `as.environment`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf `as.environment` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // where14 = ld where
  Rsh_Fir_reg_where14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

L45_:;
  // r16 = dyn base3(<sym where>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(r16)
  // L10(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L10_;

D13_:;
  // deopt 42 [where14]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_where14_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // where15 = force? where14
  Rsh_Fir_reg_where15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where14_);
  // checkMissing(where15)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_where15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r18 = dyn as_environment(where15)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_where15_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L47() else D14()
  // L47()
  goto L47_;

D14_:;
  // deopt 45 [r18]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L10_;

D15_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p4 = prom<V +>{
  //   where16 = ld where;
  //   where17 = force? where16;
  //   checkMissing(where17);
  //   return where17;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_4, CCP, RHO);
  // r20 = dyn paste0("package:", p4)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L50() else D16()
  // L50()
  goto L50_;

D16_:;
  // deopt 51 [r20]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L50_:;
  // st where = r20
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L51() else D17()
  // L51()
  goto L51_;

D17_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p5 = prom<V +>{
  //   where18 = ld where;
  //   where19 = force? where18;
  //   checkMissing(where19);
  //   return where19;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_5, CCP, RHO);
  // p6 = prom<V +>{
  //   search1 = ldf search;
  //   r22 = dyn search1();
  //   return r22;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_6, CCP, RHO);
  // r24 = dyn _in_1(p5, p6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L52() else D18()
  // L52()
  goto L52_;

D18_:;
  // deopt 57 [r24]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // c14 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c14 then L53() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L53()
    goto L53_;
  } else {
  // L11()
    goto L11_;
  }

L53_:;
  // sym4 = ldf `as.environment`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf `as.environment` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // where20 = ld where
  Rsh_Fir_reg_where20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D19()
  // L56()
  goto L56_;

L55_:;
  // r25 = dyn base4(<sym where>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L12_;

D19_:;
  // deopt 60 [where20]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_where20_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L56_:;
  // where21 = force? where20
  Rsh_Fir_reg_where21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where20_);
  // checkMissing(where21)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_where21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // as_environment1 = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r27 = dyn as_environment1(where21)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_where21_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment1_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L57() else D20()
  // L57()
  goto L57_;

D20_:;
  // deopt 63 [r27]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L12_;

L60_:;
  // where22 = ld where
  Rsh_Fir_reg_where22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L62() else D21()
  // L62()
  goto L62_;

L61_:;
  // r28 = dyn base5(<sym where>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r28)
  // L13(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L13_;

D21_:;
  // deopt 69 [where22]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_where22_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L62_:;
  // where23 = force? where22
  Rsh_Fir_reg_where23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where22_);
  // checkMissing(where23)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_where23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r30 = dyn is_numeric(where23)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_where23_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L63() else D22()
  // L63()
  goto L63_;

D22_:;
  // deopt 72 [r30]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L13(r30)
  // L13(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L13_;

L64_:;
  // _in_2 = ldf `%in%`
  Rsh_Fir_reg__in_2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L65() else D23()
  // L65()
  goto L65_;

D23_:;
  // deopt 74 [c15]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L65_:;
  // p7 = prom<V +>{
  //   where24 = ld where;
  //   where25 = force? where24;
  //   checkMissing(where25);
  //   return where25;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym6 = ldf seq_along;
  //   base6 = ldf seq_along in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r33):
  //   return r33;
  // L1():
  //   search2 = ldf search;
  //   r34 = dyn search2();
  //   r35 = seq_along(r34);
  //   goto L0(r35);
  // L2():
  //   r32 = dyn base6(<lang search()>);
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3253127715_8, CCP, RHO);
  // r37 = dyn _in_2(p7, p8)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_2_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L66() else D24()
  // L66()
  goto L66_;

D24_:;
  // deopt 77 [c15, r37]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L66_:;
  // c18 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c15, c18)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L14(c19)
  // L14(c19)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c19_;
  goto L14_;

L68_:;
  // sym7 = ldf `as.environment`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf `as.environment` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard7 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L69_:;
  // where26 = ld where
  Rsh_Fir_reg_where26_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D25()
  // L71()
  goto L71_;

L70_:;
  // r38 = dyn base7(<sym where>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L16_;

D25_:;
  // deopt 81 [where26]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_where26_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L71_:;
  // where27 = force? where26
  Rsh_Fir_reg_where27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where26_);
  // checkMissing(where27)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_where27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // as_environment2 = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r40 = dyn as_environment2(where27)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_where27_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L72() else D26()
  // L72()
  goto L72_;

D26_:;
  // deopt 84 [r40]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L16_;

D27_:;
  // deopt 88 [value]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L74_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_(SEXP CCP, SEXP RHO) {
  // where10 = ld where
  Rsh_Fir_reg_where10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where11 = force? where10
  Rsh_Fir_reg_where11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where10_);
  // checkMissing(where11)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_where11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return where11
  return Rsh_Fir_reg_where11_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_1(SEXP CCP, SEXP RHO) {
  // ns = ld ns
  Rsh_Fir_reg_ns = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // ns1 = force? ns
  Rsh_Fir_reg_ns1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns);
  // checkMissing(ns1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_ns1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return ns1
  return Rsh_Fir_reg_ns1_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_2(SEXP CCP, SEXP RHO) {
  // where12 = ld where
  Rsh_Fir_reg_where12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where13 = force? where12
  Rsh_Fir_reg_where13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where12_);
  // checkMissing(where13)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_where13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return where13
  return Rsh_Fir_reg_where13_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_3(SEXP CCP, SEXP RHO) {
  // search = ldf search
  Rsh_Fir_reg_search = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r13 = dyn search()
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search, 0, NULL, NULL, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_4(SEXP CCP, SEXP RHO) {
  // where16 = ld where
  Rsh_Fir_reg_where16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where17 = force? where16
  Rsh_Fir_reg_where17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where16_);
  // checkMissing(where17)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_where17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return where17
  return Rsh_Fir_reg_where17_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_5(SEXP CCP, SEXP RHO) {
  // where18 = ld where
  Rsh_Fir_reg_where18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where19 = force? where18
  Rsh_Fir_reg_where19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where18_);
  // checkMissing(where19)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_where19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return where19
  return Rsh_Fir_reg_where19_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_6(SEXP CCP, SEXP RHO) {
  // search1 = ldf search
  Rsh_Fir_reg_search1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r22 = dyn search1()
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search1_, 0, NULL, NULL, CCP, RHO);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_7(SEXP CCP, SEXP RHO) {
  // where24 = ld where
  Rsh_Fir_reg_where24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // where25 = force? where24
  Rsh_Fir_reg_where25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where24_);
  // checkMissing(where25)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_where25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return where25
  return Rsh_Fir_reg_where25_;
}
SEXP Rsh_Fir_user_promise_inner3253127715_8(SEXP CCP, SEXP RHO) {
  // sym6 = ldf seq_along
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf seq_along in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // search2 = ldf search
  Rsh_Fir_reg_search2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // r34 = dyn search2()
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search2_, 0, NULL, NULL, CCP, RHO);
  // r35 = seq_along(r34)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r35_;
  goto L0_;

L2_:;
  // r32 = dyn base6(<lang search()>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
