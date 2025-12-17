#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner836568721_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner836568721_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner836568721_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner836568721_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner836568721_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner836568721_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner836568721
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner836568721_, RHO, CCP);
  // st `.validity.hclust` = r
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
SEXP Rsh_Fir_user_function_inner836568721_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner836568721 dynamic dispatch ([x, merge, order])

  return Rsh_Fir_user_version_inner836568721_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner836568721_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner836568721 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner836568721/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_merge;  // merge
  SEXP Rsh_Fir_reg_order;  // order
  SEXP Rsh_Fir_reg_merge_isMissing;  // merge_isMissing
  SEXP Rsh_Fir_reg_merge_orDefault;  // merge_orDefault
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_order_isMissing;  // order_isMissing
  SEXP Rsh_Fir_reg_order_orDefault;  // order_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_merge1_;  // merge1
  SEXP Rsh_Fir_reg_merge2_;  // merge2
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_merge3_;  // merge3
  SEXP Rsh_Fir_reg_merge4_;  // merge4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_merge5_;  // merge5
  SEXP Rsh_Fir_reg_merge6_;  // merge6
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_merge7_;  // merge7
  SEXP Rsh_Fir_reg_merge8_;  // merge8
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_merge9_;  // merge9
  SEXP Rsh_Fir_reg_merge10_;  // merge10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_order1_;  // order1
  SEXP Rsh_Fir_reg_order2_;  // order2
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_merge11_;  // merge11
  SEXP Rsh_Fir_reg_merge12_;  // merge12
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c27_;  // c27

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_merge = PARAMS[1];
  Rsh_Fir_reg_order = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // merge_isMissing = missing.0(merge)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_merge;
  Rsh_Fir_reg_merge_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if merge_isMissing then L0() else L1(merge)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_merge_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(merge)
    Rsh_Fir_reg_merge_orDefault = Rsh_Fir_reg_merge;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L1() else L2(x2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x4):
  //   r = `$`(x4, <sym merge>);
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner836568721_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_merge_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st merge = merge_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_merge_orDefault, RHO);
  (void)(Rsh_Fir_reg_merge_orDefault);
  // order_isMissing = missing.0(order)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_order;
  Rsh_Fir_reg_order_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if order_isMissing then L2(TRUE) else L2(order)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_order_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_order_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(order)
    Rsh_Fir_reg_order_orDefault = Rsh_Fir_reg_order;
    goto L2_;
  }

L2_:;
  // st order = order_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_order_orDefault, RHO);
  (void)(Rsh_Fir_reg_order_orDefault);
  // sym = ldf `is.matrix`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.matrix` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L3_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L4(c1) else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L4_;
  } else {
  // L26()
    goto L26_;
  }

L4_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c7 then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L7_:;
  // c8 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c8 then L41() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L41()
    goto L41_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // merge7 = ld merge
  Rsh_Fir_reg_merge7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L9_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

L11_:;
  // n3 = ld n1
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

L12_:;
  // order1 = ld order
  Rsh_Fir_reg_order1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L59() else D14()
  // L59()
  goto L59_;

L14_:;
  // c25 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c25 then L71() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L71()
    goto L71_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L69() else D17()
  // L69()
  goto L69_;

L16_:;
  // sym5 = ldf identical
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf identical in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard5 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L18_:;
  // c27 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c27 then L86() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L86()
    goto L86_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r54 = dyn identical(r43, r45, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args17[9];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args17[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args17[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args17[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args17[8] = Rsh_const(CCP, 12);
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
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L85() else D23()
  // L85()
  goto L85_;

L20_:;
  // r52 = `+`(<missing>, r49)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c26 = ldf c in base
  Rsh_Fir_reg_c26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r53 = dyn c26(r47, r52)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c26_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L84() else D22()
  // L84()
  goto L84_;

L21_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'merge' matrix has invalid contents"
  return Rsh_const(CCP, 15);

L22_:;
  // merge1 = ld merge
  Rsh_Fir_reg_merge1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L23_:;
  // r2 = dyn base(<sym merge>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D0_:;
  // deopt 2 [merge1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_merge1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // merge2 = force? merge1
  Rsh_Fir_reg_merge2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge1_);
  // checkMissing(merge2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_merge2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r4 = dyn is_matrix(merge2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_merge2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L3_;

L26_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

D2_:;
  // deopt 8 [c1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L27_:;
  // p1 = prom<V +>{
  //   merge3 = ld merge;
  //   merge4 = force? merge3;
  //   checkMissing(merge4);
  //   return merge4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner836568721_1, CCP, RHO);
  // r7 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 10 [c1, r7]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // r8 = `!=`(r7, 2.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L4(c5)
  // L4(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L4_;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "invalid dendrogram"
  return Rsh_const(CCP, 18);

L33_:;
  // sym2 = ldf `as.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf `as.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L34_:;
  // r11 = dyn base1(<lang `!=`(as.integer(merge), merge)>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

L35_:;
  // merge5 = ld merge
  Rsh_Fir_reg_merge5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L36_:;
  // r13 = dyn base2(<sym merge>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D4_:;
  // deopt 23 [merge5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_merge5_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L37_:;
  // merge6 = force? merge5
  Rsh_Fir_reg_merge6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge5_);
  // checkMissing(merge6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_merge6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r15 = dyn as_integer(merge6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_merge6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

D5_:;
  // deopt 26 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;

D6_:;
  // deopt 26 [r14, merge7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_merge7_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // merge8 = force? merge7
  Rsh_Fir_reg_merge8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge7_);
  // checkMissing(merge8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_merge8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r16 = `!=`(r14, merge8)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_merge8_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r17 = dyn any(r16)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

D7_:;
  // deopt 30 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r17_;
  goto L7_;

L41_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'merge' component in dendrogram must be integer"
  return Rsh_const(CCP, 21);

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p2 = prom<V +>{
  //   merge9 = ld merge;
  //   merge10 = force? merge9;
  //   checkMissing(merge10);
  //   return merge10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner836568721_2, CCP, RHO);
  // r21 = dyn nrow(p2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

D9_:;
  // deopt 39 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L45_:;
  // st n1 = r21
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // n1 = ld n1
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D10_:;
  // deopt 41 [n1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L46_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r22 = `+`(n2, 1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // st n = r22
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

L48_:;
  // r23 = dyn base3(<lang `$`(x, height)>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L11_;

D11_:;
  // deopt 48 [x5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(x6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c9 then L51() else L52(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L51()
    goto L51_;
  } else {
  // L52(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L52_;
  }

L50_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r26 = dyn length(dx3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

L51_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc1 then L53() else L52(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L52_;
  }

L52_:;
  // r25 = `$`(x8, <sym height>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L50(r25)
  // L50(r25)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r25_;
  goto L50_;

L53_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L50(dx2)
  // L50(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L50_;

D12_:;
  // deopt 52 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r26_;
  goto L11_;

D13_:;
  // deopt 52 [r24, n3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L55_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r27 = `!=`(r24, n4)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c10 then L56() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L56()
    goto L56_;
  } else {
  // L12()
    goto L12_;
  }

L56_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'height' is of wrong length"
  return Rsh_const(CCP, 26);

D14_:;
  // deopt 60 [order1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_order1_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L59_:;
  // order2 = force? order1
  Rsh_Fir_reg_order2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order1_);
  // checkMissing(order2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_order2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c11 = `as.logical`(order2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_order2_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c11 then L60() else L14(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L60()
    goto L60_;
  } else {
  // L14(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L14_;
  }

L60_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard4 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L61_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D15()
  // L63()
  goto L63_;

L62_:;
  // r30 = dyn base4(<lang `$`(x, order)>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L15(c11, r30)
  // L15(c11, r30)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L15_;

D15_:;
  // deopt 64 [c11, x9]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L63_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(x10)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c17 then L65() else L66(c11, x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L65()
    goto L65_;
  } else {
  // L66(c11, x10)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L66_;
  }

L64_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r33 = dyn length1(dx5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L68() else D16()
  // L68()
  goto L68_;

L65_:;
  // dr4 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc2 then L67() else L66(c11, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L67()
    goto L67_;
  } else {
  // L66(c11, dr4)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr4_;
    goto L66_;
  }

L66_:;
  // r32 = `$`(x12, <sym order>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L64(c19, r32)
  // L64(c19, r32)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r32_;
  goto L64_;

L67_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L64(c11, dx4)
  // L64(c11, dx4)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L64_;

D16_:;
  // deopt 68 [c21, r33]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L15(c21, r33)
  // L15(c21, r33)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L15_;

D17_:;
  // deopt 68 [c16, r31, n5]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(68, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L69_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r34 = `!=`(r31, n6)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // c22 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // c23 = `&&`(c16, c22)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L14(c23)
  // L14(c23)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c23_;
  goto L14_;

L71_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'order' is of wrong length"
  return Rsh_const(CCP, 28);

L74_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L76() else D18()
  // L76()
  goto L76_;

L75_:;
  // r37 = dyn base5(<lang sort(as.integer(merge))>, <lang c(`-`(`(`(`:`(n, 1))), `+`(seq_len(`-`(n, 2))))>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L18(r37)
  // L18(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L18_;

D18_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // p3 = prom<V +>{
  //   sym6 = ldf `as.integer`;
  //   base6 = ldf `as.integer` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r40):
  //   return r40;
  // L1():
  //   merge11 = ld merge;
  //   merge12 = force? merge11;
  //   checkMissing(merge12);
  //   as_integer1 = ldf `as.integer` in base;
  //   r41 = dyn as_integer1(merge12);
  //   goto L0(r41);
  // L2():
  //   r39 = dyn base6(<sym merge>);
  //   goto L0(r39);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner836568721_3, CCP, RHO);
  // r43 = dyn sort(p3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

D19_:;
  // deopt 82 [r43]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard7 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L78_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L80() else D20()
  // L80()
  goto L80_;

L79_:;
  // r44 = dyn base7(<lang `-`(`(`(`:`(n, 1)))>, <lang `+`(seq_len(`-`(n, 2)))>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(r44)
  // L19(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L19_;

D20_:;
  // deopt 85 [n7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L80_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r46 = `:`(n8, 1)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // r47 = `-`(<missing>, r46)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // sym8 = ldf seq_len
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base8 = ldf seq_len in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard8 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L81_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L83() else D21()
  // L83()
  goto L83_;

L82_:;
  // r48 = dyn base8(<lang `-`(n, 2)>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L20(r48)
  // L20(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L20_;

D21_:;
  // deopt 91 [n9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L83_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r50 = `-`(n10, 2)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // r51 = seq_len(r50)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L20(r51)
  // L20(r51)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r51_;
  goto L20_;

D22_:;
  // deopt 98 [r53]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L19(r53)
  // L19(r53)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r53_;
  goto L19_;

D23_:;
  // deopt 107 [r54]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L18(r54)
  // L18(r54)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r54_;
  goto L18_;

L86_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 4);
}
SEXP Rsh_Fir_user_promise_inner836568721_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r = `$`(x4, <sym merge>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner836568721_1(SEXP CCP, SEXP RHO) {
  // merge3 = ld merge
  Rsh_Fir_reg_merge3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // merge4 = force? merge3
  Rsh_Fir_reg_merge4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge3_);
  // checkMissing(merge4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_merge4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return merge4
  return Rsh_Fir_reg_merge4_;
}
SEXP Rsh_Fir_user_promise_inner836568721_2(SEXP CCP, SEXP RHO) {
  // merge9 = ld merge
  Rsh_Fir_reg_merge9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // merge10 = force? merge9
  Rsh_Fir_reg_merge10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge9_);
  // checkMissing(merge10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_merge10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return merge10
  return Rsh_Fir_reg_merge10_;
}
SEXP Rsh_Fir_user_promise_inner836568721_3(SEXP CCP, SEXP RHO) {
  // sym6 = ldf `as.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf `as.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r40
  return Rsh_Fir_reg_r40_;

L1_:;
  // merge11 = ld merge
  Rsh_Fir_reg_merge11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // merge12 = force? merge11
  Rsh_Fir_reg_merge12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_merge11_);
  // checkMissing(merge12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_merge12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r41 = dyn as_integer1(merge12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_merge12_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L0_;

L2_:;
  // r39 = dyn base6(<sym merge>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
