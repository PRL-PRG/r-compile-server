#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1767467432_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1767467432_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1767467432_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1767467432_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1767467432
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1767467432_, RHO, CCP);
  // st `print.data.frame` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6, 7, 8>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   gl = ldf gl;
  //   r2 = dyn gl(2.0, 4.0);
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   letters = ld letters;
  //   letters1 = force? letters;
  //   checkMissing(letters1);
  //   c = `is.object`(letters1);
  //   if c then L1() else L2(letters1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", letters1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(letters3):
  //   __ = ldf `[` in base;
  //   r4 = dyn __(letters3, <int 1, 2, 3, 4, 5, 6, 7, 8>);
  //   goto L0(r4);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r6 = dyn data_frame[x, f, ch](p, p1, p2)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st dd = r6
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p3 = prom<V +>{
  //   dd = ld dd;
  //   dd1 = force? dd;
  //   checkMissing(dd1);
  //   return dd1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r8 = dyn print[, quote, `row.names`](p3, TRUE, FALSE)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3, 4, 5, 6, 7, 8>
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gl;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // gl = ldf gl
  Rsh_Fir_reg_gl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r2 = dyn gl(2.0, 4.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gl, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_letters3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.object`(letters1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_letters1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L1() else L2(letters1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(letters1)
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_letters1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", letters1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_letters1_;
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
    Rsh_Fir_reg_letters3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r4 = dyn __(letters3, <int 1, 2, 3, 4, 5, 6, 7, 8>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_letters3_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
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
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dd;
  SEXP Rsh_Fir_reg_dd1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // dd = ld dd
  Rsh_Fir_reg_dd = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // dd1 = force? dd
  Rsh_Fir_reg_dd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd);
  // checkMissing(dd1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return dd1
  return Rsh_Fir_reg_dd1_;
}
SEXP Rsh_Fir_user_function_inner1767467432_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1767467432 dynamic dispatch ([x, `...`, digits, quote, right, `row.names`, max])

  return Rsh_Fir_user_version_inner1767467432_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1767467432_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1767467432 version 0 (*, dots, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner1767467432/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_digits;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_right;
  SEXP Rsh_Fir_reg_row_names;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_digits_isMissing;
  SEXP Rsh_Fir_reg_digits_orDefault;
  SEXP Rsh_Fir_reg_quote_isMissing;
  SEXP Rsh_Fir_reg_quote_orDefault;
  SEXP Rsh_Fir_reg_right_isMissing;
  SEXP Rsh_Fir_reg_right_orDefault;
  SEXP Rsh_Fir_reg_row_names_isMissing;
  SEXP Rsh_Fir_reg_row_names_orDefault;
  SEXP Rsh_Fir_reg_max_isMissing;
  SEXP Rsh_Fir_reg_max_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_row_names1_;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_print_default;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_cat1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_max1_;
  SEXP Rsh_Fir_reg_max2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_max3_;
  SEXP Rsh_Fir_reg_max4_;
  SEXP Rsh_Fir_reg_is_finite;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_max7_;
  SEXP Rsh_Fir_reg_max8_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_isFALSE;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_omit2_;
  SEXP Rsh_Fir_reg_omit3_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_reg_n11_;
  SEXP Rsh_Fir_reg_n12_;
  SEXP Rsh_Fir_reg_n13_;
  SEXP Rsh_Fir_reg_n14_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_row_names6_;
  SEXP Rsh_Fir_reg_row_names7_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_print1;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_omit4_;
  SEXP Rsh_Fir_reg_omit5_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_cat2_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r80_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];
  Rsh_Fir_reg_digits = PARAMS[2];
  Rsh_Fir_reg_quote = PARAMS[3];
  Rsh_Fir_reg_right = PARAMS[4];
  Rsh_Fir_reg_row_names = PARAMS[5];
  Rsh_Fir_reg_max = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if digits_isMissing then L0(NULL) else L0(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_digits_orDefault = Rsh_const(CCP, 19);
    goto L0_;
  } else {
  // L0(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L0_;
  }

L0_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // quote_isMissing = missing.0(quote)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_quote;
  Rsh_Fir_reg_quote_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if quote_isMissing then L1(FALSE) else L1(quote)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quote_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_quote_orDefault = Rsh_const(CCP, 15);
    goto L1_;
  } else {
  // L1(quote)
    Rsh_Fir_reg_quote_orDefault = Rsh_Fir_reg_quote;
    goto L1_;
  }

L1_:;
  // st quote = quote_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_quote_orDefault, RHO);
  (void)(Rsh_Fir_reg_quote_orDefault);
  // right_isMissing = missing.0(right)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_right;
  Rsh_Fir_reg_right_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if right_isMissing then L2(TRUE) else L2(right)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_right_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_right_orDefault = Rsh_const(CCP, 14);
    goto L2_;
  } else {
  // L2(right)
    Rsh_Fir_reg_right_orDefault = Rsh_Fir_reg_right;
    goto L2_;
  }

L2_:;
  // st right = right_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_right_orDefault, RHO);
  (void)(Rsh_Fir_reg_right_orDefault);
  // row_names_isMissing = missing.0(row_names)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_row_names;
  Rsh_Fir_reg_row_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args13);
  // if row_names_isMissing then L3(TRUE) else L3(row_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_row_names_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_row_names_orDefault = Rsh_const(CCP, 14);
    goto L3_;
  } else {
  // L3(row_names)
    Rsh_Fir_reg_row_names_orDefault = Rsh_Fir_reg_row_names;
    goto L3_;
  }

L3_:;
  // st `row.names` = row_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_row_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_row_names_orDefault);
  // max_isMissing = missing.0(max)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_max;
  Rsh_Fir_reg_max_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if max_isMissing then L4(NULL) else L4(max)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_max_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_max_orDefault = Rsh_const(CCP, 19);
    goto L4_;
  } else {
  // L4(max)
    Rsh_Fir_reg_max_orDefault = Rsh_Fir_reg_max;
    goto L4_;
  }

L4_:;
  // st max = max_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_max_orDefault, RHO);
  (void)(Rsh_Fir_reg_max_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L5_:;
  // st n = r1
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L27_:;
  // row_names1 = ldf `row.names`
  Rsh_Fir_reg_row_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L28_:;
  // r = dyn base(<lang row.names(x)>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(r)
  // L5(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L5_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r8 = `==`(r6, 0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args18);
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c then L36() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L36()
    goto L36_;
  } else {
  // L7()
    goto L7_;
  }

L29_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_, 0, NULL, CCP, RHO);
  // r3 = dyn row_names1(p)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row_names1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D1()
  // L30()
  goto L30_;

L32_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

L33_:;
  // r5 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_;
  goto L6_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 11 [x3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L8_:;
  // sym8 = ldf invisible
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base8 = ldf invisible in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard8 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L30_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r4 = dyn length(r3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L34_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r7 = dyn length1(x4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L35() else D4()
  // L35()
  goto L35_;

L36_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

D2_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 24 [n4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r79
  return Rsh_Fir_reg_r79_;

L31_:;
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r4_1;
  goto L5_;

L35_:;
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_;
  goto L6_;

L37_:;
  // p4 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p2 = prom<V +>{
  //     ngettext = ldf ngettext;
  //     p1 = prom<V +>{
  //       n = ld n;
  //       n1 = force? n;
  //       checkMissing(n1);
  //       return n1;
  //     };
  //     r10 = dyn ngettext(p1, "data frame with 0 columns and %d row", "data frame with 0 columns and %d rows");
  //     return r10;
  //   };
  //   p3 = prom<V +>{
  //     n2 = ld n;
  //     n3 = force? n2;
  //     checkMissing(n3);
  //     return n3;
  //   };
  //   r13 = dyn sprintf(p2, p3);
  //   return r13;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_1, 0, NULL, CCP, RHO);
  // r15 = dyn cat[, , sep](p4, "\n", "")
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L40_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r17 = `==`(n5, 0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args33);
  // c1 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c1 then L41() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L41()
    goto L41_;
  } else {
  // L9()
    goto L9_;
  }

L102_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L104() else D44()
  // L104()
  goto L104_;

L103_:;
  // r78 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L26(r78)
  // L26(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L26_;

D6_:;
  // deopt 23 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 143 [x18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L9_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L38_:;
  // goto L8()
  // L8()
  goto L8_;

L41_:;
  // print_default = ldf `print.default`
  Rsh_Fir_reg_print_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L104_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r80 = dyn invisible(x19)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L105() else D45()
  // L105()
  goto L105_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 146 [r80]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L10_:;
  // c3 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c3 then L50() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L50()
    goto L50_;
  } else {
  // L11()
    goto L11_;
  }

L42_:;
  // p5 = prom<V +>{
  //   sym2 = ldf names;
  //   base2 = ldf names in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   names = ldf names in base;
  //   r20 = dyn names(x6);
  //   goto L0(r20);
  // L2():
  //   r18 = dyn base2(<sym x>);
  //   goto L0(r18);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_5, 0, NULL, CCP, RHO);
  // r22 = dyn print_default[, quote](p5, FALSE)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print_default, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L47_:;
  // max1 = ld max
  Rsh_Fir_reg_max1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

L48_:;
  // r26 = dyn base3(<sym max>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L10_;

L105_:;
  // goto L26(r80)
  // L26(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L26_;

D9_:;
  // deopt 33 [r22]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 39 [max1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_max1_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym4 = ldf `is.finite`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base4 = ldf `is.finite` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L43_:;
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

L49_:;
  // max2 = force? max1
  Rsh_Fir_reg_max2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max1_);
  // checkMissing(max2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_max2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c2 = `==`(max2, NULL)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_max2_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args48);
  // goto L10(c2)
  // L10(c2)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_c2_;
  goto L10_;

L50_:;
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

D10_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r33 = `!`(r31)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args49);
  // c4 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c4 then L58() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L58()
    goto L58_;
  } else {
  // L14()
    goto L14_;
  }

L44_:;
  // p6 = prom<V +>{
  //   gettext = ldf gettext;
  //   r23 = dyn gettext("<0 rows> (or 0-length row.names)\n");
  //   return r23;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_6, 0, NULL, CCP, RHO);
  // r25 = dyn cat1(p6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

L51_:;
  // r28 = dyn getOption("max.print", 99999)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

L54_:;
  // max3 = ld max
  Rsh_Fir_reg_max3_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L56() else D15()
  // L56()
  goto L56_;

L55_:;
  // r30 = dyn base4(<sym max>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L13(r30)
  // L13(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L13_;

D11_:;
  // deopt 37 [r25]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 46 [r28]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 52 [max3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_max3_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // max7 = ld max
  Rsh_Fir_reg_max7_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

L45_:;
  // goto L8()
  // L8()
  goto L8_;

L52_:;
  // st max = r28
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L12()
  // L12()
  goto L12_;

L56_:;
  // max4 = force? max3
  Rsh_Fir_reg_max4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max3_);
  // checkMissing(max4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_max4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r32 = dyn is_finite(max4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_max4_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L57() else D16()
  // L57()
  goto L57_;

L58_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L59() else D17()
  // L59()
  goto L59_;

D16_:;
  // deopt 55 [r32]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 65 [max7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_max7_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L13(r32)
  // L13(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L13_;

L59_:;
  // p7 = prom<V +>{
  //   max5 = ld max;
  //   max6 = force? max5;
  //   checkMissing(max6);
  //   return max6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_7, 0, NULL, CCP, RHO);
  // r35 = dyn stop("invalid 'max' / getOption(\"max.print\"): ", p7)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L60() else D18()
  // L60()
  goto L60_;

L62_:;
  // max8 = force? max7
  Rsh_Fir_reg_max8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max7_);
  // checkMissing(max8)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_max8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

D18_:;
  // deopt 61 [r35]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L16_:;
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r40 = dyn ___(max8, r38)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_max8_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L67() else D22()
  // L67()
  goto L67_;

L60_:;
  // goto L15()
  // L15()
  goto L15_;

L63_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L65() else D20()
  // L65()
  goto L65_;

L64_:;
  // r37 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(r37)
  // L16(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L16_;

D20_:;
  // deopt 69 [x7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 74 [r40]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L65_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r39 = dyn length2(x8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L66() else D21()
  // L66()
  goto L66_;

L67_:;
  // st n0 = r40
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L68() else D23()
  // L68()
  goto L68_;

D21_:;
  // deopt 72 [r39]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 75 [r40, n6]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L16(r39)
  // L16(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L16_;

L68_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r41 = `<`(r40, n7)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args66);
  // st omit = r41
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L69() else D24()
  // L69()
  goto L69_;

D24_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p10 = prom<V +>{
  //   format_data_frame = ldf `format.data.frame`;
  //   p8 = prom<V +>{
  //     omit = ld omit;
  //     omit1 = force? omit;
  //     checkMissing(omit1);
  //     c5 = `as.logical`(omit1);
  //     if c5 then L3() else L0();
  //   L0():
  //     x16 = ld x;
  //     x17 = force? x16;
  //     checkMissing(x17);
  //     return x17;
  //   L3():
  //     x9 = ld x;
  //     x10 = force? x9;
  //     checkMissing(x10);
  //     c6 = `is.object`(x10);
  //     if c6 then L4() else L5(x10);
  //   L1(dx1):
  //     return dx1;
  //   L4():
  //     dr = tryDispatchBuiltin.1("[", x10);
  //     dc = getTryDispatchBuiltinDispatched(dr);
  //     if dc then L6() else L5(dr);
  //   L5(x12):
  //     sym6 = ldf seq_len;
  //     base6 = ldf seq_len in base;
  //     guard6 = `==`.4(sym6, base6);
  //     if guard6 then L7() else L8();
  //   L2(r43):
  //     __ = ldf `[` in base;
  //     r45 = dyn __(x10, r43, <missing>, FALSE);
  //     goto L1(r45);
  //   L6():
  //     dx = getTryDispatchBuiltinValue(dr);
  //     goto L1(dx);
  //   L7():
  //     n8 = ld n0;
  //     n9 = force? n8;
  //     checkMissing(n9);
  //     r44 = seq_len(n9);
  //     goto L2(r44);
  //   L8():
  //     r42 = dyn base6(<sym n0>);
  //     goto L2(r42);
  //   };
  //   p9 = prom<V +>{
  //     digits1 = ld digits;
  //     digits2 = force? digits1;
  //     checkMissing(digits2);
  //     return digits2;
  //   };
  //   r48 = dyn format_data_frame[, digits, `na.encode`](p8, p9, FALSE);
  //   return r48;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_8, 0, NULL, CCP, RHO);
  // r50 = dyn as_matrix(p10)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L70() else D25()
  // L70()
  goto L70_;

D25_:;
  // deopt 82 [r50]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L70_:;
  // st m = r50
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

D26_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // p11 = prom<V +>{
  //   row_names2 = ld `row.names`;
  //   row_names3 = force? row_names2;
  //   checkMissing(row_names3);
  //   return row_names3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_11, 0, NULL, CCP, RHO);
  // r52 = dyn isTRUE(p11)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

D27_:;
  // deopt 87 [r52]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L72_:;
  // r53 = `!`(r52)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args85);
  // c7 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args86);
  // if c7 then L73() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L73()
    goto L73_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // print = ldf print
  Rsh_Fir_reg_print1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L95() else D39()
  // L95()
  goto L95_;

L73_:;
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // check L74() else D28()
  // L74()
  goto L74_;

D28_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p12 = prom<V +>{
  //   row_names4 = ld `row.names`;
  //   row_names5 = force? row_names4;
  //   checkMissing(row_names5);
  //   return row_names5;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_12, 0, NULL, CCP, RHO);
  // r55 = dyn isFALSE(p12)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L75() else D29()
  // L75()
  goto L75_;

L95_:;
  // p13 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_13, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // p14 = prom<V +>{
  //   quote1 = ld quote;
  //   quote2 = force? quote1;
  //   checkMissing(quote2);
  //   return quote2;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   right1 = ld right;
  //   right2 = force? right1;
  //   checkMissing(right2);
  //   return right2;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_15, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   max9 = ld max;
  //   max10 = force? max9;
  //   checkMissing(max10);
  //   return max10;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_16, 0, NULL, CCP, RHO);
  // r74 = dyn print[, `...`, quote, right, max](p13, ddd1, p14, p15, p16)
  SEXP Rsh_Fir_array_args93[5];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args93[3] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args93[4] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names33[5];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names33[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names33[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names33[4] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print1, 5, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L96() else D40()
  // L96()
  goto L96_;

D29_:;
  // deopt 92 [r55]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 130 [r74]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L75_:;
  // c8 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args94);
  // if c8 then L76() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L76()
    goto L76_;
  } else {
  // L18()
    goto L18_;
  }

L96_:;
  // omit4 = ld omit
  Rsh_Fir_reg_omit4_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L97() else D41()
  // L97()
  goto L97_;

D41_:;
  // deopt 131 [omit4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_omit4_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L18_:;
  // row_names6 = ld `row.names`
  Rsh_Fir_reg_row_names6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L86() else D34()
  // L86()
  goto L86_;

L22_:;
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // dimnames = ldf dimnames
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L87() else D35()
  // L87()
  goto L87_;

L76_:;
  // sym7 = ldf `rep.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base7 = ldf `rep.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args95);
  // if guard7 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L97_:;
  // omit5 = force? omit4
  Rsh_Fir_reg_omit5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit4_);
  // checkMissing(omit5)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_omit5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c11 = `as.logical`(omit5)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_omit5_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args97);
  // if c11 then L98() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L98()
    goto L98_;
  } else {
  // L25()
    goto L25_;
  }

D34_:;
  // deopt 104 [row_names6]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_row_names6_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 107 [r59, l, r59]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(107, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L22(r57)
  // L22(r57)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
  goto L22_;

L25_:;
  // goto L8()
  // L8()
  goto L8_;

L77_:;
  // omit2 = ld omit
  Rsh_Fir_reg_omit2_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L79() else D30()
  // L79()
  goto L79_;

L78_:;
  // r56 = dyn base7("", <lang if(omit, n0, n)>)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L19(r56)
  // L19(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L19_;

L86_:;
  // row_names7 = force? row_names6
  Rsh_Fir_reg_row_names7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names6_);
  // checkMissing(row_names7)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_row_names7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // goto L22(row_names7)
  // L22(row_names7)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_row_names7_;
  goto L22_;

L87_:;
  // r60 = dyn dimnames(r59, NULL)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L88() else D36()
  // L88()
  goto L88_;

L98_:;
  // cat2 = ldf cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L99() else D42()
  // L99()
  goto L99_;

D30_:;
  // deopt 96 [omit2]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_omit2_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 109 [r59, l, r59, r60]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(109, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // omit3 = force? omit2
  Rsh_Fir_reg_omit3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit2_);
  // checkMissing(omit3)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_omit3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(omit3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_omit3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args102);
  // if c9 then L80() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L80()
    goto L80_;
  } else {
  // L20()
    goto L20_;
  }

L88_:;
  // c10 = `is.object`(r60)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args103);
  // if c10 then L89() else L90(r59, l, r60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L89()
    goto L89_;
  } else {
  // L90(r59, l, r60)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r59_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r60_;
    goto L90_;
  }

L99_:;
  // p17 = prom<V +>{
  //   n15 = ld n;
  //   n16 = force? n15;
  //   checkMissing(n16);
  //   n17 = ld n0;
  //   n18 = force? n17;
  //   checkMissing(n18);
  //   r75 = `-`(n16, n18);
  //   return r75;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_17, 0, NULL, CCP, RHO);
  // r77 = dyn cat2(" [ reached 'max' / getOption(\"max.print\") -- omitted", p17, "rows ]\n")
  SEXP Rsh_Fir_array_args107[3];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args107[2] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat2_, 3, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L100() else D43()
  // L100()
  goto L100_;

D43_:;
  // deopt 138 [r77]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L20_:;
  // n13 = ld n
  Rsh_Fir_reg_n13_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L83() else D32()
  // L83()
  goto L83_;

L21_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r58 = dyn rep_int("", n12)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_n12_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L84() else D33()
  // L84()
  goto L84_;

L23_:;
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L92() else D37()
  // L92()
  goto L92_;

L80_:;
  // n10 = ld n0
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L81() else D31()
  // L81()
  goto L81_;

L89_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", r60, r59)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args109);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if dc1 then L91() else L90(r59, l, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L91()
    goto L91_;
  } else {
  // L90(r59, l, dr2)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r59_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_dr2_;
    goto L90_;
  }

L90_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // r67 = dyn ____(r64, r59, 1)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args111[2] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L23(r63, l2, r67)
  // L23(r63, l2, r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r67_;
  goto L23_;

L100_:;
  // goto L8()
  // L8()
  goto L8_;

D31_:;
  // deopt 98 [n10]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 100 [n13]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_n13_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 103 [r58]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 114 [r66, l4, dx3]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(114, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L81_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // goto L21(n11)
  // L21(n11)
  Rsh_Fir_reg_n12_ = Rsh_Fir_reg_n11_;
  goto L21_;

L83_:;
  // n14 = force? n13
  Rsh_Fir_reg_n14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n13_);
  // checkMissing(n14)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_n14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // goto L21(n14)
  // L21(n14)
  Rsh_Fir_reg_n12_ = Rsh_Fir_reg_n14_;
  goto L21_;

L84_:;
  // goto L19(r58)
  // L19(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L19_;

L91_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L23(r59, l, dx2)
  // L23(r59, l, dx2)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

L92_:;
  // r68 = dyn dimnames__(l4, NULL, dx3)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L93() else D38()
  // L93()
  goto L93_;

D38_:;
  // deopt 116 [r66, r68]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L93_:;
  // st m = r68
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // goto L24()
  // L24()
  goto L24_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // p2 = prom<V +>{
  //   ngettext = ldf ngettext;
  //   p1 = prom<V +>{
  //     n = ld n;
  //     n1 = force? n;
  //     checkMissing(n1);
  //     return n1;
  //   };
  //   r10 = dyn ngettext(p1, "data frame with 0 columns and %d row", "data frame with 0 columns and %d rows");
  //   return r10;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   return n3;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_4, 0, NULL, CCP, RHO);
  // r13 = dyn sprintf(p2, p3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p1 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   return n1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_3, 0, NULL, CCP, RHO);
  // r10 = dyn ngettext(p1, "data frame with 0 columns and %d row", "data frame with 0 columns and %d rows")
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return n1
  return Rsh_Fir_reg_n1_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return n3
  return Rsh_Fir_reg_n3_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r20 = dyn names(x6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L2_:;
  // r18 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettext;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // r23 = dyn gettext("<0 rows> (or 0-length row.names)\n")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_max5_;
  SEXP Rsh_Fir_reg_max6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // max5 = ld max
  Rsh_Fir_reg_max5_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // max6 = force? max5
  Rsh_Fir_reg_max6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max5_);
  // checkMissing(max6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_max6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return max6
  return Rsh_Fir_reg_max6_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_format_data_frame;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // format_data_frame = ldf `format.data.frame`
  Rsh_Fir_reg_format_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // p8 = prom<V +>{
  //   omit = ld omit;
  //   omit1 = force? omit;
  //   checkMissing(omit1);
  //   c5 = `as.logical`(omit1);
  //   if c5 then L3() else L0();
  // L0():
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   return x17;
  // L3():
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c6 = `is.object`(x10);
  //   if c6 then L4() else L5(x10);
  // L1(dx1):
  //   return dx1;
  // L4():
  //   dr = tryDispatchBuiltin.1("[", x10);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(x12):
  //   sym6 = ldf seq_len;
  //   base6 = ldf seq_len in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L7() else L8();
  // L2(r43):
  //   __ = ldf `[` in base;
  //   r45 = dyn __(x10, r43, <missing>, FALSE);
  //   goto L1(r45);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // L7():
  //   n8 = ld n0;
  //   n9 = force? n8;
  //   checkMissing(n9);
  //   r44 = seq_len(n9);
  //   goto L2(r44);
  // L8():
  //   r42 = dyn base6(<sym n0>);
  //   goto L2(r42);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_9, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   digits1 = ld digits;
  //   digits2 = force? digits1;
  //   checkMissing(digits2);
  //   return digits2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1767467432_10, 0, NULL, CCP, RHO);
  // r48 = dyn format_data_frame[, digits, `na.encode`](p8, p9, FALSE)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names29[2] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format_data_frame, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names29, CCP, RHO);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_omit;
  SEXP Rsh_Fir_reg_omit1_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // omit = ld omit
  Rsh_Fir_reg_omit = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // omit1 = force? omit
  Rsh_Fir_reg_omit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit);
  // checkMissing(omit1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_omit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(omit1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_omit1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c5 then L3() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L3()
    goto L3_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return x17
  return Rsh_Fir_reg_x17_;

L3_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args71);
  // if c6 then L4() else L5(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L5_;
  }

L1_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L4_:;
  // dr = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr1;
    goto L5_;
  }

L5_:;
  // sym6 = ldf seq_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base6 = ldf seq_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard6 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r45 = dyn __(x10, r43, <missing>, FALSE)
  SEXP Rsh_Fir_array_args75[4];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args75[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 4, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L1(r45)
  // L1(r45)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r45_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L1_;

L7_:;
  // n8 = ld n0
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r44 = seq_len(n9)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args78);
  // goto L2(r44)
  // L2(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L2_;

L8_:;
  // r42 = dyn base6(<sym n0>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L2(r42)
  // L2(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_digits1_;
  SEXP Rsh_Fir_reg_digits2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return digits2
  return Rsh_Fir_reg_digits2_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names2_;
  SEXP Rsh_Fir_reg_row_names3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // row_names2 = ld `row.names`
  Rsh_Fir_reg_row_names2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // row_names3 = force? row_names2
  Rsh_Fir_reg_row_names3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names2_);
  // checkMissing(row_names3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_row_names3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return row_names3
  return Rsh_Fir_reg_row_names3_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names4_;
  SEXP Rsh_Fir_reg_row_names5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // row_names4 = ld `row.names`
  Rsh_Fir_reg_row_names4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // row_names5 = force? row_names4
  Rsh_Fir_reg_row_names5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names4_);
  // checkMissing(row_names5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_row_names5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return row_names5
  return Rsh_Fir_reg_row_names5_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_quote1_;
  SEXP Rsh_Fir_reg_quote2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // quote1 = ld quote
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // quote2 = force? quote1
  Rsh_Fir_reg_quote2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quote1_);
  // checkMissing(quote2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_quote2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return quote2
  return Rsh_Fir_reg_quote2_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_right1_;
  SEXP Rsh_Fir_reg_right2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // right1 = ld right
  Rsh_Fir_reg_right1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // right2 = force? right1
  Rsh_Fir_reg_right2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right1_);
  // checkMissing(right2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_right2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return right2
  return Rsh_Fir_reg_right2_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_max9_;
  SEXP Rsh_Fir_reg_max10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // max9 = ld max
  Rsh_Fir_reg_max9_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // max10 = force? max9
  Rsh_Fir_reg_max10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max9_);
  // checkMissing(max10)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_max10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return max10
  return Rsh_Fir_reg_max10_;
}
SEXP Rsh_Fir_user_promise_inner1767467432_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n15_;
  SEXP Rsh_Fir_reg_n16_;
  SEXP Rsh_Fir_reg_n17_;
  SEXP Rsh_Fir_reg_n18_;
  SEXP Rsh_Fir_reg_r75_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1767467432/0: expected 0, got %d", NCAPTURES);

  // n15 = ld n
  Rsh_Fir_reg_n15_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // n16 = force? n15
  Rsh_Fir_reg_n16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n15_);
  // checkMissing(n16)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_n16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // n17 = ld n0
  Rsh_Fir_reg_n17_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // n18 = force? n17
  Rsh_Fir_reg_n18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n17_);
  // checkMissing(n18)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_n18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // r75 = `-`(n16, n18)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_n16_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_n18_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args106);
  // return r75
  return Rsh_Fir_reg_r75_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
