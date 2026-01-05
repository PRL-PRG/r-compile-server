#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_inner247789382_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner247789382_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner247789382_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner247789382_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner247789382_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
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

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner247789382
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner247789382_, RHO, CCP);
  // st `$<-.data.frame` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_from_R_inner247789382_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner247789382 dynamic dispatch from R ([x, name, value])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner247789382_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner247789382_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner247789382 dynamic dispatch ([x, name, value])

  return Rsh_Fir_user_version_inner247789382_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner247789382_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner247789382 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner247789382/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_name;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_oldClass;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg__row_names_info;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_NROW;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_N;
  SEXP Rsh_Fir_reg_N1_;
  SEXP Rsh_Fir_reg_nrows;
  SEXP Rsh_Fir_reg_nrows1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_N6_;
  SEXP Rsh_Fir_reg_N7_;
  SEXP Rsh_Fir_reg_nrows4_;
  SEXP Rsh_Fir_reg_nrows5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_N8_;
  SEXP Rsh_Fir_reg_N9_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_nrows6_;
  SEXP Rsh_Fir_reg_nrows7_;
  SEXP Rsh_Fir_reg_N10_;
  SEXP Rsh_Fir_reg_N11_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_value5_;
  SEXP Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_value7_;
  SEXP Rsh_Fir_reg_value8_;
  SEXP Rsh_Fir_reg_is_atomic;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_value9_;
  SEXP Rsh_Fir_reg_value10_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_value11_;
  SEXP Rsh_Fir_reg_value12_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_value14_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_name1_;
  SEXP Rsh_Fir_reg_name2_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_cl;
  SEXP Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_class__1_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_name = PARAMS[1];
  Rsh_Fir_reg_value = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf oldClass
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf oldClass in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L0_:;
  // st cl = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L22_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L23_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_const(CCP, 7);
  Rsh_Fir_deopt(10, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L24_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn oldClass(x2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

L26_:;
  // r3 = dyn class__(l, NULL, NULL)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 12 [NULL, r3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L27_:;
  // st x = r3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // _row_names_info = ldf `.row_names_info`
  Rsh_Fir_reg__row_names_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_, 0, NULL, CCP, RHO);
  // r5 = dyn _row_names_info(p, 2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__row_names_info, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

D5_:;
  // deopt 18 [r5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // st nrows = r5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L1_:;
  // r8 = `!`(r7)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args8);
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c1 then L33() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L33()
    goto L33_;
  } else {
  // L2()
    goto L2_;
  }

L30_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L31_:;
  // r6 = dyn base1(<sym value>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, RHO);
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L1_;

D6_:;
  // deopt 21 [value1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // value11 = ld value
  Rsh_Fir_reg_value11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L84() else D30()
  // L84()
  goto L84_;

L32_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c = `==`(value2, NULL)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args12);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c;
  goto L1_;

L33_:;
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 112 [value11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_value11_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // p1 = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_1, 0, NULL, CCP, RHO);
  // r10 = dyn NROW(p1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

L84_:;
  // value12 = force? value11
  Rsh_Fir_reg_value12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value11_);
  // checkMissing(value12)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_value12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c37 = `is.object`(l2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args16);
  // if c37 then L85() else L86(value12, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L85()
    goto L85_;
  } else {
  // L86(value12, l2)
    Rsh_Fir_reg_value14_ = Rsh_Fir_reg_value12_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L86_;
  }

D8_:;
  // deopt 28 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L89() else D32()
  // L89()
  goto L89_;

L35_:;
  // st N = r10
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L85_:;
  // dr = tryDispatchBuiltin.0("[[<-", l2, value12)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_value12_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args17);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc then L87() else L86(value12, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L87()
    goto L87_;
  } else {
  // L86(value12, dr)
    Rsh_Fir_reg_value14_ = Rsh_Fir_reg_value12_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr;
    goto L86_;
  }

L86_:;
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L88() else D31()
  // L88()
  goto L88_;

D9_:;
  // deopt 30 [N]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_N;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 115 [value14, l4, value12, name1]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_value14_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_value12_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(115, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 119 [cl]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L36_:;
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // nrows = ld nrows
  Rsh_Fir_reg_nrows = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L87_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L21(dx)
  // L21(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L21_;

L88_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r57 = dyn ____(l4, value12, name2)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_value12_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_name2_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, RHO);
  // goto L21(r57)
  // L21(r57)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r57_;
  goto L21_;

L89_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // l5 = ld x
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L90() else D33()
  // L90()
  goto L90_;

D10_:;
  // deopt 31 [N1, nrows]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_N1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_nrows;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 122 [cl1, l5, cl1]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L37_:;
  // nrows1 = force? nrows
  Rsh_Fir_reg_nrows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows);
  // checkMissing(nrows1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_nrows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r11 = `>`(N1, nrows1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_N1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_nrows1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args24);
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c2 then L38() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L3()
    goto L3_;
  }

L90_:;
  // r58 = dyn class__1(l5, NULL, cl1)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args26[2] = Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, RHO);
  // check L91() else D34()
  // L91()
  goto L91_;

D34_:;
  // deopt 124 [cl1, r58]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(124, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // N6 = ld N
  Rsh_Fir_reg_N6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

L38_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L39() else D11()
  // L39()
  goto L39_;

L91_:;
  // st x = r58
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L92() else D35()
  // L92()
  goto L92_;

D11_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 42 [N6]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_N6_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 126 [x5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L39_:;
  // p6 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p3 = prom<V +>{
  //     ngettext = ldf ngettext;
  //     p2 = prom<V +>{
  //       N2 = ld N;
  //       N3 = force? N2;
  //       checkMissing(N3);
  //       return N3;
  //     };
  //     r13 = dyn ngettext(p2, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //     return r13;
  //   };
  //   p4 = prom<V +>{
  //     N4 = ld N;
  //     N5 = force? N4;
  //     checkMissing(N5);
  //     return N5;
  //   };
  //   p5 = prom<V +>{
  //     nrows2 = ld nrows;
  //     nrows3 = force? nrows2;
  //     checkMissing(nrows3);
  //     return nrows3;
  //   };
  //   r17 = dyn sprintf(p3, p4, p5);
  //   return r17;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_2, 0, NULL, CCP, RHO);
  // r19 = dyn stop[, domain](p6, NA_LGL)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, RHO);
  // check L40() else D12()
  // L40()
  goto L40_;

L42_:;
  // N7 = force? N6
  Rsh_Fir_reg_N7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N6_);
  // checkMissing(N7)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_N7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // nrows4 = ld nrows
  Rsh_Fir_reg_nrows4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L43() else D14()
  // L43()
  goto L43_;

L92_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x6
  return Rsh_Fir_reg_x6_;

D12_:;
  // deopt 39 [r19]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 43 [N7, nrows4]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_N7_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_nrows4_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L4()
  // L4()
  goto L4_;

L43_:;
  // nrows5 = force? nrows4
  Rsh_Fir_reg_nrows5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows4_);
  // checkMissing(nrows5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_nrows5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r21 = `<`(N7, nrows5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_N7_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_nrows5_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args36);
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args37);
  // if c3 then L44() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L44()
    goto L44_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym5 = ldf `is.atomic`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base5 = ldf `is.atomic` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard5 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L44_:;
  // N8 = ld N
  Rsh_Fir_reg_N8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L45() else D15()
  // L45()
  goto L45_;

D15_:;
  // deopt 46 [N8]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_N8_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L14_:;
  // c23 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c23 then L71() else L15(c23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L71()
    goto L71_;
  } else {
  // L15(c23)
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c23_;
    goto L15_;
  }

L45_:;
  // N9 = force? N8
  Rsh_Fir_reg_N9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N8_);
  // checkMissing(N9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_N9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r22 = `>`(N9, 0)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_N9_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args41);
  // c4 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c4 then L46() else L6(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L46()
    goto L46_;
  } else {
  // L6(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L6_;
  }

L67_:;
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L69() else D24()
  // L69()
  goto L69_;

L68_:;
  // r45 = dyn base5(<sym value>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, RHO);
  // goto L14(r45)
  // L14(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L14_;

D24_:;
  // deopt 87 [value7]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L6_:;
  // c10 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c10 then L51() else L7(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L51()
    goto L51_;
  } else {
  // L7(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L7_;
  }

L15_:;
  // c36 = `as.logical`(c25)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c36 then L79() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L79()
    goto L79_;
  } else {
  // L18()
    goto L18_;
  }

L46_:;
  // nrows6 = ld nrows
  Rsh_Fir_reg_nrows6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L47() else D16()
  // L47()
  goto L47_;

L69_:;
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // is_atomic = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r47 = dyn is_atomic(value8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_value8_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names12, RHO);
  // check L70() else D25()
  // L70()
  goto L70_;

L71_:;
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard6 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

D16_:;
  // deopt 51 [c4, nrows6]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_nrows6_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 90 [r47]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L7_:;
  // c22 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // if c22 then L60() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L60()
    goto L60_;
  } else {
  // L10()
    goto L10_;
  }

L16_:;
  // r53 = `!`(r49)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args50);
  // c33 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // c34 = `&&`(c28, c33)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args52);
  // goto L15(c34)
  // L15(c34)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c34_;
  goto L15_;

L18_:;
  // goto L19(NULL)
  // L19(NULL)
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 7);
  goto L19_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L47_:;
  // nrows7 = force? nrows6
  Rsh_Fir_reg_nrows7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows6_);
  // checkMissing(nrows7)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_nrows7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // N10 = ld N
  Rsh_Fir_reg_N10_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L48() else D17()
  // L48()
  goto L48_;

L51_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard2 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L70_:;
  // goto L14(r47)
  // L14(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L14_;

L72_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard7 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L73_:;
  // r48 = dyn base6(<lang names(value)>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, RHO);
  // goto L16(c23, r48)
  // L16(c23, r48)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L16_;

L79_:;
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L80() else D28()
  // L80()
  goto L80_;

D17_:;
  // deopt 53 [c4, N10]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_N10_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 104 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_const(CCP, 7);
  Rsh_Fir_deopt(104, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L8_:;
  // r31 = `<=`(r26, 1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args57);
  // c19 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // c20 = `&&`(c15, c19)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args59);
  // goto L7(c20)
  // L7(c20)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c20_;
  goto L7_;

L10_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L64() else D22()
  // L64()
  goto L64_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L17_:;
  // c32 = `==`(r51, NULL)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args60);
  // goto L16(c31, c32)
  // L16(c31, c32)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_c32_;
  goto L16_;

L48_:;
  // N11 = force? N10
  Rsh_Fir_reg_N11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N10_);
  // checkMissing(N11)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_N11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // __ = ldf `%%` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r23 = dyn __(nrows7, N11)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_nrows7_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_N11_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names14, RHO);
  // check L49() else D18()
  // L49()
  goto L49_;

L52_:;
  // sym3 = ldf dim
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base3 = ldf dim in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard3 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L53_:;
  // r25 = dyn base2(<lang dim(value)>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, RHO);
  // goto L8(c10, r25)
  // L8(c10, r25)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L8_;

L60_:;
  // sym4 = ldf rep
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf rep in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard4 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L74_:;
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L76() else D26()
  // L76()
  goto L76_;

L75_:;
  // r50 = dyn base7(<sym value>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names16, RHO);
  // goto L17(c23, r50)
  // L17(c23, r50)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L17_;

L80_:;
  // r54 = dyn names__(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, RHO);
  // check L81() else D29()
  // L81()
  goto L81_;

D18_:;
  // deopt 56 [c4, r23]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 94 [c23, value9]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_value9_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 106 [NULL, r54]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L9_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r30 = dyn length(r28)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names18, RHO);
  // check L58() else D21()
  // L58()
  goto L58_;

L11_:;
  // st value = r33
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
  goto L12_;

L49_:;
  // r24 = `==`(r23, 0)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args69);
  // c7 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // c8 = `&&`(c4, c7)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args71);
  // goto L6(c8)
  // L6(c8)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c8_;
  goto L6_;

L54_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L56() else D19()
  // L56()
  goto L56_;

L55_:;
  // r27 = dyn base3(<sym value>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names19, RHO);
  // goto L9(c10, r27)
  // L9(c10, r27)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L9_;

L61_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r34 = dyn rep(<sym value>, <sym nrows>)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, RHO);
  // goto L11(r34)
  // L11(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L11_;

L62_:;
  // r32 = dyn base4[, `length.out`](<sym value>, <sym nrows>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names21, RHO);
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L11_;

L64_:;
  // p11 = prom<V +>{
  //   sprintf1 = ldf sprintf;
  //   p8 = prom<V +>{
  //     ngettext1 = ldf ngettext;
  //     p7 = prom<V +>{
  //       N12 = ld N;
  //       N13 = force? N12;
  //       checkMissing(N13);
  //       return N13;
  //     };
  //     r37 = dyn ngettext1(p7, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //     return r37;
  //   };
  //   p9 = prom<V +>{
  //     N14 = ld N;
  //     N15 = force? N14;
  //     checkMissing(N15);
  //     return N15;
  //   };
  //   p10 = prom<V +>{
  //     nrows8 = ld nrows;
  //     nrows9 = force? nrows8;
  //     checkMissing(nrows9);
  //     return nrows9;
  //   };
  //   r41 = dyn sprintf1(p8, p9, p10);
  //   return r41;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_7, 0, NULL, CCP, RHO);
  // r43 = dyn stop1[, domain](p11, NA_LGL)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names24, RHO);
  // check L65() else D23()
  // L65()
  goto L65_;

L76_:;
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r52 = dyn names(value10)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_value10_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names25, RHO);
  // check L77() else D27()
  // L77()
  goto L77_;

L81_:;
  // st value = r54
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // goto L19(NULL)
  // L19(NULL)
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 7);
  goto L19_;

D19_:;
  // deopt 64 [c10, value5]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 69 [c18, r30]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 82 [r43]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 97 [c23, r52]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L56_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r29 = dyn dim(value6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names26, RHO);
  // check L57() else D20()
  // L57()
  goto L57_;

L58_:;
  // goto L8(c18, r30)
  // L8(c18, r30)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r30_;
  goto L8_;

L65_:;
  // goto L12(r43)
  // L12(r43)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r43_;
  goto L12_;

L77_:;
  // goto L17(c23, r52)
  // L17(c23, r52)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L17_;

D20_:;
  // deopt 67 [c10, r29]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L9(c10, r29)
  // L9(c10, r29)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner247789382_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner247789382_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_reg_value4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner247789382_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p3 = prom<V +>{
  //   ngettext = ldf ngettext;
  //   p2 = prom<V +>{
  //     N2 = ld N;
  //     N3 = force? N2;
  //     checkMissing(N3);
  //     return N3;
  //   };
  //   r13 = dyn ngettext(p2, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //   return r13;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   N4 = ld N;
  //   N5 = force? N4;
  //   checkMissing(N5);
  //   return N5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_5, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   nrows2 = ld nrows;
  //   nrows3 = force? nrows2;
  //   checkMissing(nrows3);
  //   return nrows3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_6, 0, NULL, CCP, RHO);
  // r17 = dyn sprintf(p3, p4, p5)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_inner247789382_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p2 = prom<V +>{
  //   N2 = ld N;
  //   N3 = force? N2;
  //   checkMissing(N3);
  //   return N3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_4, 0, NULL, CCP, RHO);
  // r13 = dyn ngettext(p2, "replacement has %d row, data has %d", "replacement has %d rows, data has %d")
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_inner247789382_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N2_;
  SEXP Rsh_Fir_reg_N3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // N2 = ld N
  Rsh_Fir_reg_N2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // N3 = force? N2
  Rsh_Fir_reg_N3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N2_);
  // checkMissing(N3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_N3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return N3
  return Rsh_Fir_reg_N3_;
}
SEXP Rsh_Fir_user_promise_inner247789382_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N4_;
  SEXP Rsh_Fir_reg_N5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // N4 = ld N
  Rsh_Fir_reg_N4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // N5 = force? N4
  Rsh_Fir_reg_N5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N4_);
  // checkMissing(N5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_N5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return N5
  return Rsh_Fir_reg_N5_;
}
SEXP Rsh_Fir_user_promise_inner247789382_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrows2_;
  SEXP Rsh_Fir_reg_nrows3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // nrows2 = ld nrows
  Rsh_Fir_reg_nrows2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // nrows3 = force? nrows2
  Rsh_Fir_reg_nrows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows2_);
  // checkMissing(nrows3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_nrows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return nrows3
  return Rsh_Fir_reg_nrows3_;
}
SEXP Rsh_Fir_user_promise_inner247789382_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // sprintf1 = ldf sprintf
  Rsh_Fir_reg_sprintf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p8 = prom<V +>{
  //   ngettext1 = ldf ngettext;
  //   p7 = prom<V +>{
  //     N12 = ld N;
  //     N13 = force? N12;
  //     checkMissing(N13);
  //     return N13;
  //   };
  //   r37 = dyn ngettext1(p7, "replacement has %d row, data has %d", "replacement has %d rows, data has %d");
  //   return r37;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   N14 = ld N;
  //   N15 = force? N14;
  //   checkMissing(N15);
  //   return N15;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_10, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   nrows8 = ld nrows;
  //   nrows9 = force? nrows8;
  //   checkMissing(nrows9);
  //   return nrows9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_11, 0, NULL, CCP, RHO);
  // r41 = dyn sprintf1(p8, p9, p10)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf1_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names23, RHO);
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_promise_inner247789382_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ngettext1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // ngettext1 = ldf ngettext
  Rsh_Fir_reg_ngettext1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p7 = prom<V +>{
  //   N12 = ld N;
  //   N13 = force? N12;
  //   checkMissing(N13);
  //   return N13;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner247789382_9, 0, NULL, CCP, RHO);
  // r37 = dyn ngettext1(p7, "replacement has %d row, data has %d", "replacement has %d rows, data has %d")
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args76[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext1_, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names22, RHO);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_inner247789382_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N12_;
  SEXP Rsh_Fir_reg_N13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // N12 = ld N
  Rsh_Fir_reg_N12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // N13 = force? N12
  Rsh_Fir_reg_N13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N12_);
  // checkMissing(N13)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_N13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return N13
  return Rsh_Fir_reg_N13_;
}
SEXP Rsh_Fir_user_promise_inner247789382_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N14_;
  SEXP Rsh_Fir_reg_N15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // N14 = ld N
  Rsh_Fir_reg_N14_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // N15 = force? N14
  Rsh_Fir_reg_N15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N14_);
  // checkMissing(N15)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_N15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return N15
  return Rsh_Fir_reg_N15_;
}
SEXP Rsh_Fir_user_promise_inner247789382_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrows8_;
  SEXP Rsh_Fir_reg_nrows9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner247789382/0: expected 0, got %d", NCAPTURES);

  // nrows8 = ld nrows
  Rsh_Fir_reg_nrows8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // nrows9 = force? nrows8
  Rsh_Fir_reg_nrows9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows8_);
  // checkMissing(nrows9)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_nrows9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return nrows9
  return Rsh_Fir_reg_nrows9_;
}
