#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner648887954_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner648887954_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner648887954_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner648887954_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_as_array;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_array;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r11_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner648887954
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner648887954_, RHO, CCP);
  // st array = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

L1_:;
  // as_array = ldf `as.array`
  Rsh_Fir_reg_as_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base(<lang as.array(letters)>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   letters = ld letters;
  //   letters1 = force? letters;
  //   checkMissing(letters1);
  //   return letters1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn as_array(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_array, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L6_:;
  // p1 = prom<V +>{
  //   return <int 1, 2, 3>;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   c = ldf c in base;
  //   r9 = dyn c(2.0, 4.0);
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1(2.0, 4.0);
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r11 = dyn array(p1, p2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D1_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 15 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r5 = dyn dim(r4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0()
  // L0()
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return letters1
  return Rsh_Fir_reg_letters1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 1, 2, 3>
  return Rsh_const(CCP, 5);
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r9 = dyn c(2.0, 4.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1(2.0, 4.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner648887954_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner648887954 dynamic dispatch ([data, dim, dimnames])

  return Rsh_Fir_user_version_inner648887954_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner648887954_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner648887954 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner648887954/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_data;
  SEXP Rsh_Fir_reg_dim1;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_data_isMissing;
  SEXP Rsh_Fir_reg_data_orDefault;
  SEXP Rsh_Fir_reg_dim_isMissing;
  SEXP Rsh_Fir_reg_dim_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_dimnames_isMissing;
  SEXP Rsh_Fir_reg_dimnames_orDefault;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_data3_;
  SEXP Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_reg_is_atomic;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_data5_;
  SEXP Rsh_Fir_reg_data6_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_data7_;
  SEXP Rsh_Fir_reg_data8_;
  SEXP Rsh_Fir_reg_dim1_;
  SEXP Rsh_Fir_reg_dim2_;
  SEXP Rsh_Fir_reg_dimnames1_;
  SEXP Rsh_Fir_reg_dimnames2_;
  SEXP Rsh_Fir_reg_array1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_data11_;
  SEXP Rsh_Fir_reg_data12_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_dim3_;
  SEXP Rsh_Fir_reg_dim4_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_dim5_;
  SEXP Rsh_Fir_reg_dim6_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_dim7_;
  SEXP Rsh_Fir_reg_dim8_;
  SEXP Rsh_Fir_reg_prod;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_data13_;
  SEXP Rsh_Fir_reg_data14_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_vl;
  SEXP Rsh_Fir_reg_vl1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_vl2_;
  SEXP Rsh_Fir_reg_vl3_;
  SEXP Rsh_Fir_reg__Machine;
  SEXP Rsh_Fir_reg__Machine1_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_vl5_;
  SEXP Rsh_Fir_reg__Machine3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_vl7_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_data15_;
  SEXP Rsh_Fir_reg_data16_;
  SEXP Rsh_Fir_reg_vl8_;
  SEXP Rsh_Fir_reg_vl9_;
  SEXP Rsh_Fir_reg_rep_len;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_dim9_;
  SEXP Rsh_Fir_reg_dim10_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_dim11_;
  SEXP Rsh_Fir_reg_dim12_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_dimnames3_;
  SEXP Rsh_Fir_reg_dimnames4_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_dimnames5_;
  SEXP Rsh_Fir_reg_dimnames6_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_dimnames7_;
  SEXP Rsh_Fir_reg_dimnames8_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_data17_;
  SEXP Rsh_Fir_reg_data18_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_data19_;
  SEXP Rsh_Fir_reg_data20_;
  SEXP Rsh_Fir_reg_dim14_;
  SEXP Rsh_Fir_reg_dim15_;
  SEXP Rsh_Fir_reg_dimnames10_;
  SEXP Rsh_Fir_reg_dimnames11_;
  SEXP Rsh_Fir_reg_array1_;
  SEXP Rsh_Fir_reg_r56_;

  // Bind parameters
  Rsh_Fir_reg_data = PARAMS[0];
  Rsh_Fir_reg_dim1 = PARAMS[1];
  Rsh_Fir_reg_dimnames = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // data_isMissing = missing.0(data)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_data;
  Rsh_Fir_reg_data_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if data_isMissing then L0(NA_LGL) else L0(data)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_data_isMissing)) {
  // L0(NA_LGL)
    Rsh_Fir_reg_data_orDefault = Rsh_const(CCP, 9);
    goto L0_;
  } else {
  // L0(data)
    Rsh_Fir_reg_data_orDefault = Rsh_Fir_reg_data;
    goto L0_;
  }

L0_:;
  // st data = data_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_data_orDefault, RHO);
  (void)(Rsh_Fir_reg_data_orDefault);
  // dim_isMissing = missing.0(dim)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dim1;
  Rsh_Fir_reg_dim_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if dim_isMissing then L1() else L2(dim)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dim_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(dim)
    Rsh_Fir_reg_dim_orDefault = Rsh_Fir_reg_dim1;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   length = ldf length in base;
  //   r2 = dyn length(data2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym data>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner648887954_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_dim_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st dim = dim_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dim_orDefault, RHO);
  (void)(Rsh_Fir_reg_dim_orDefault);
  // dimnames_isMissing = missing.0(dimnames)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dimnames;
  Rsh_Fir_reg_dimnames_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if dimnames_isMissing then L3(NULL) else L3(dimnames)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dimnames_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_dimnames_orDefault = Rsh_const(CCP, 12);
    goto L3_;
  } else {
  // L3(dimnames)
    Rsh_Fir_reg_dimnames_orDefault = Rsh_Fir_reg_dimnames;
    goto L3_;
  }

L3_:;
  // st dimnames = dimnames_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dimnames_orDefault, RHO);
  (void)(Rsh_Fir_reg_dimnames_orDefault);
  // sym1 = ldf `is.atomic`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf `is.atomic` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L4_:;
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c then L36() else L5(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L36()
    goto L36_;
  } else {
  // L5(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1;
    goto L5_;
  }

L32_:;
  // data3 = ld data
  Rsh_Fir_reg_data3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L34() else D0()
  // L34()
  goto L34_;

L33_:;
  // r4 = dyn base1(<sym data>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L4_;

D0_:;
  // deopt 2 [data3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_data3_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L5_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c10 then L41() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L41()
    goto L41_;
  } else {
  // L7()
    goto L7_;
  }

L34_:;
  // data4 = force? data3
  Rsh_Fir_reg_data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data3_);
  // checkMissing(data4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // is_atomic = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r6 = dyn is_atomic(data4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L35() else D1()
  // L35()
  goto L35_;

L36_:;
  // sym2 = ldf `is.object`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf `is.object` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L6_:;
  // r9 = `!`(r8)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args23);
  // c7 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // c8 = `&&`(c5, c7)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args25);
  // goto L5(c8)
  // L5(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L5_;

L7_:;
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

L35_:;
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_;
  goto L4_;

L37_:;
  // data5 = ld data
  Rsh_Fir_reg_data5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L39() else D2()
  // L39()
  goto L39_;

L38_:;
  // r7 = dyn base2(<sym data>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(c, r7)
  // L6(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L6_;

L41_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

D2_:;
  // deopt 7 [c, data5]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_data5_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_1;

L39_:;
  // data6 = force? data5
  Rsh_Fir_reg_data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data5_);
  // checkMissing(data6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(data6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_data6_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args29);
  // goto L6(c, c6)
  // L6(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_c6_;
  goto L6_;

L42_:;
  // data7 = ld data
  Rsh_Fir_reg_data7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L44() else D3()
  // L44()
  goto L44_;

L43_:;
  // r10 = dyn base3(<lang array(data, dim, dimnames)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r10)
  // L8(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_;
  goto L8_;

L50_:;
  // p1 = prom<V +>{
  //   data9 = ld data;
  //   data10 = force? data9;
  //   checkMissing(data10);
  //   return data10;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner648887954_1, 0, NULL, CCP, RHO);
  // r16 = dyn as_vector(p1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L51() else D8()
  // L51()
  goto L51_;

D3_:;
  // deopt 14 [data7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_data7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 28 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // data8 = force? data7
  Rsh_Fir_reg_data8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data7_);
  // checkMissing(data8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_data8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // dim1 = ld dim
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D4()
  // L45()
  goto L45_;

L51_:;
  // st data = r16
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym4 = ldf `is.object`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf `is.object` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard4 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

D4_:;
  // deopt 16 [dim1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dim1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L10_:;
  // c12 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c12 then L55() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L55()
    goto L55_;
  } else {
  // L11()
    goto L11_;
  }

L45_:;
  // dim2 = force? dim1
  Rsh_Fir_reg_dim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dim1_);
  // checkMissing(dim2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // dimnames1 = ld dimnames
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L46() else D5()
  // L46()
  goto L46_;

L52_:;
  // data11 = ld data
  Rsh_Fir_reg_data11_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L54() else D9()
  // L54()
  goto L54_;

L53_:;
  // r17 = dyn base4(<sym data>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r17)
  // L10(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L10_;

D5_:;
  // deopt 18 [dimnames1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dimnames1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 31 [data11]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_data11_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L11_:;
  // sym13 = ldf `.Internal`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base13 = ldf `.Internal` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard13 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L46_:;
  // dimnames2 = force? dimnames1
  Rsh_Fir_reg_dimnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimnames1_);
  // checkMissing(dimnames2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dimnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // array = ldf array in base
  Rsh_Fir_reg_array1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r12 = dyn array(data8, dim2, dimnames2)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_data8_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_dim2_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_dimnames2_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array1, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L47() else D6()
  // L47()
  goto L47_;

L54_:;
  // data12 = force? data11
  Rsh_Fir_reg_data12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data11_);
  // checkMissing(data12)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_data12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(data12)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_data12_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args42);
  // goto L10(c11)
  // L10(c11)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_c11_;
  goto L10_;

L55_:;
  // sym5 = ldf `as.integer`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf `as.integer` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

D6_:;
  // deopt 21 [r12]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L12_:;
  // st dim = r20
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard6 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L31_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r55
  return Rsh_Fir_reg_r55_;

L47_:;
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_;
  goto L8_;

L56_:;
  // dim3 = ld dim
  Rsh_Fir_reg_dim3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

L57_:;
  // r19 = dyn base5(<sym dim>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r19)
  // L12(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L12_;

L120_:;
  // data19 = ld data
  Rsh_Fir_reg_data19_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L122() else D41()
  // L122()
  goto L122_;

L121_:;
  // r54 = dyn base13(<lang array(data, dim, dimnames)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L31(r54)
  // L31(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L31_;

D10_:;
  // deopt 36 [dim3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_dim3_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 132 [data19]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_data19_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L13_:;
  // r25 = `!`(r23)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args47);
  // c13 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // if c13 then L64() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L64()
    goto L64_;
  } else {
  // L14()
    goto L14_;
  }

L58_:;
  // dim4 = force? dim3
  Rsh_Fir_reg_dim4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dim3_);
  // checkMissing(dim4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dim4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r21 = dyn as_integer(dim4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dim4_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

L60_:;
  // dim5 = ld dim
  Rsh_Fir_reg_dim5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L62() else D12()
  // L62()
  goto L62_;

L61_:;
  // r22 = dyn base6(<sym dim>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L13(r22)
  // L13(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L13_;

L122_:;
  // data20 = force? data19
  Rsh_Fir_reg_data20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data19_);
  // checkMissing(data20)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_data20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // dim14 = ld dim
  Rsh_Fir_reg_dim14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L123() else D42()
  // L123()
  goto L123_;

D11_:;
  // deopt 39 [r21]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 43 [dim5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_dim5_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 134 [dim14]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_dim14_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym7 = ldf prod
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base7 = ldf prod in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard7 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L59_:;
  // goto L12(r21)
  // L12(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L12_;

L62_:;
  // dim6 = force? dim5
  Rsh_Fir_reg_dim6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dim5_);
  // checkMissing(dim6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dim6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r24 = dyn length1(dim6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dim6_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L63() else D13()
  // L63()
  goto L63_;

L64_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

L123_:;
  // dim15 = force? dim14
  Rsh_Fir_reg_dim15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dim14_);
  // checkMissing(dim15)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dim15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // dimnames10 = ld dimnames
  Rsh_Fir_reg_dimnames10_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L124() else D43()
  // L124()
  goto L124_;

D13_:;
  // deopt 46 [r24]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 136 [dimnames10]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_dimnames10_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L16_:;
  // st vl = r29
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard8 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L63_:;
  // goto L13(r24)
  // L13(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L13_;

L65_:;
  // r26 = dyn stop("'dim' cannot be of length 0")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L66() else D15()
  // L66()
  goto L66_;

L68_:;
  // dim7 = ld dim
  Rsh_Fir_reg_dim7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L70() else D16()
  // L70()
  goto L70_;

L69_:;
  // r28 = dyn base7(<sym dim>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L16(r28)
  // L16(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L16_;

L124_:;
  // dimnames11 = force? dimnames10
  Rsh_Fir_reg_dimnames11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimnames10_);
  // checkMissing(dimnames11)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dimnames11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // array1 = ldf array in base
  Rsh_Fir_reg_array1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r56 = dyn array1(data20, dim15, dimnames11)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_data20_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_dim15_;
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_dimnames11_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array1_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L125() else D44()
  // L125()
  goto L125_;

D15_:;
  // deopt 51 [r26]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 56 [dim7]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_dim7_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 139 [r56]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L17_:;
  // vl = ld vl
  Rsh_Fir_reg_vl = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L76() else D20()
  // L76()
  goto L76_;

L66_:;
  // goto L15()
  // L15()
  goto L15_;

L70_:;
  // dim8 = force? dim7
  Rsh_Fir_reg_dim8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dim7_);
  // checkMissing(dim8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dim8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r30 = dyn prod(dim8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dim8_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L71() else D17()
  // L71()
  goto L71_;

L72_:;
  // data13 = ld data
  Rsh_Fir_reg_data13_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

L73_:;
  // r31 = dyn base8(<sym data>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L17(r31)
  // L17(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L17_;

L125_:;
  // goto L31(r56)
  // L31(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L31_;

D17_:;
  // deopt 59 [r30]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 63 [data13]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_data13_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 66 [r32, vl]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_vl;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L16(r30)
  // L16(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L16_;

L74_:;
  // data14 = force? data13
  Rsh_Fir_reg_data14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data13_);
  // checkMissing(data14)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_data14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r33 = dyn length2(data14)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_data14_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L75() else D19()
  // L75()
  goto L75_;

L76_:;
  // vl1 = force? vl
  Rsh_Fir_reg_vl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vl);
  // checkMissing(vl1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_vl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r34 = `!=`(r32, vl1)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_vl1_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args68);
  // c14 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c14 then L77() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L77()
    goto L77_;
  } else {
  // L18()
    goto L18_;
  }

D19_:;
  // deopt 66 [r33]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard10 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L75_:;
  // goto L17(r33)
  // L17(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L17_;

L77_:;
  // vl2 = ld vl
  Rsh_Fir_reg_vl2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L78() else D21()
  // L78()
  goto L78_;

D21_:;
  // deopt 69 [vl2]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_vl2_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L23_:;
  // c17 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args71);
  // if c17 then L98() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L98()
    goto L98_;
  } else {
  // L24()
    goto L24_;
  }

L78_:;
  // vl3 = force? vl2
  Rsh_Fir_reg_vl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vl2_);
  // checkMissing(vl3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_vl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L79() else D22()
  // L79()
  goto L79_;

L94_:;
  // dim9 = ld dim
  Rsh_Fir_reg_dim9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L96() else D28()
  // L96()
  goto L96_;

L95_:;
  // r43 = dyn base10(<sym dim>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L23(r43)
  // L23(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L23_;

D22_:;
  // deopt 70 [vl3, _Machine]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_vl3_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg__Machine;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 93 [dim9]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_dim9_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // sym11 = ldf `is.list`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base11 = ldf `is.list` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard11 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L79_:;
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args76);
  // if c15 then L81() else L82(vl3, _Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L81()
    goto L81_;
  } else {
  // L82(vl3, _Machine1)
    Rsh_Fir_reg_vl5_ = Rsh_Fir_reg_vl3_;
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L82_;
  }

L96_:;
  // dim10 = force? dim9
  Rsh_Fir_reg_dim10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dim9_);
  // checkMissing(dim10)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dim10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r45 = dyn length3(dim10)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dim10_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L97() else D29()
  // L97()
  goto L97_;

L98_:;
  // dim11 = ld dim
  Rsh_Fir_reg_dim11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L99() else D30()
  // L99()
  goto L99_;

D29_:;
  // deopt 96 [r45]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 97 [dim11]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_dim11_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L26_:;
  // c18 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c18 then L107() else L27(c18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L107()
    goto L107_;
  } else {
  // L27(c18)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c18_;
    goto L27_;
  }

L80_:;
  // r36 = `>`(vl7, dx1)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_vl7_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args80);
  // c16 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // if c16 then L84() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L84()
    goto L84_;
  } else {
  // L19()
    goto L19_;
  }

L81_:;
  // dr = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args82);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc then L83() else L82(vl3, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L83()
    goto L83_;
  } else {
  // L82(vl3, dr)
    Rsh_Fir_reg_vl5_ = Rsh_Fir_reg_vl3_;
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr;
    goto L82_;
  }

L82_:;
  // r35 = `$`(_Machine3, <sym integer.max>)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args84);
  // goto L80(vl5, r35)
  // L80(vl5, r35)
  Rsh_Fir_reg_vl7_ = Rsh_Fir_reg_vl5_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r35_;
  goto L80_;

L97_:;
  // goto L23(r45)
  // L23(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L23_;

L99_:;
  // dim12 = force? dim11
  Rsh_Fir_reg_dim12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dim11_);
  // checkMissing(dim12)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dim12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // l = ld data
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L100() else D31()
  // L100()
  goto L100_;

L103_:;
  // dimnames3 = ld dimnames
  Rsh_Fir_reg_dimnames3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L105() else D33()
  // L105()
  goto L105_;

L104_:;
  // r47 = dyn base11(<sym dimnames>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L26(r47)
  // L26(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L26_;

D31_:;
  // deopt 100 [dim12, l, dim12]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_dim12_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_dim12_;
  Rsh_Fir_deopt(100, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 108 [dimnames3]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_dimnames3_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym9 = ldf rep_len
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base9 = ldf rep_len in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard9 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L27_:;
  // c27 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args88);
  // if c27 then L113() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L113()
    goto L113_;
  } else {
  // L29()
    goto L29_;
  }

L83_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L80(vl3, dx)
  // L80(vl3, dx)
  Rsh_Fir_reg_vl7_ = Rsh_Fir_reg_vl3_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L80_;

L84_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L85() else D23()
  // L85()
  goto L85_;

L100_:;
  // r46 = dyn dim__(l, NULL, dim12)
  SEXP Rsh_Fir_array_args90[3];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args90[2] = Rsh_Fir_reg_dim12_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L101() else D32()
  // L101()
  goto L101_;

L105_:;
  // dimnames4 = force? dimnames3
  Rsh_Fir_reg_dimnames4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimnames3_);
  // checkMissing(dimnames4)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dimnames4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r49 = dyn is_list(dimnames4)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dimnames4_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L106() else D34()
  // L106()
  goto L106_;

L107_:;
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard12 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

D23_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 102 [dim12, r46]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_dim12_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 111 [r49]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L21_:;
  // st data = r40
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L22()
  // L22()
  goto L22_;

L28_:;
  // c24 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args94);
  // c25 = `&&`(c23, c24)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args95);
  // goto L27(c25)
  // L27(c25)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c25_;
  goto L27_;

L29_:;
  // goto L30()
  // L30()
  goto L30_;

L30_:;
  // data17 = ld data
  Rsh_Fir_reg_data17_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L118() else D40()
  // L118()
  goto L118_;

L85_:;
  // r37 = dyn stop1("'dim' specifies too large an array")
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L86() else D24()
  // L86()
  goto L86_;

L88_:;
  // data15 = ld data
  Rsh_Fir_reg_data15_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L90() else D25()
  // L90()
  goto L90_;

L89_:;
  // r39 = dyn base9(<sym data>, <sym vl>)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L21(r39)
  // L21(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L21_;

L101_:;
  // st data = r46
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // goto L25()
  // L25()
  goto L25_;

L106_:;
  // goto L26(r49)
  // L26(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L26_;

L108_:;
  // dimnames5 = ld dimnames
  Rsh_Fir_reg_dimnames5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L110() else D35()
  // L110()
  goto L110_;

L109_:;
  // r50 = dyn base12(<sym dimnames>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L28(c18, r50)
  // L28(c18, r50)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L28_;

L113_:;
  // dimnames7 = ld dimnames
  Rsh_Fir_reg_dimnames7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L114() else D37()
  // L114()
  goto L114_;

D24_:;
  // deopt 77 [r37]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 82 [data15]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_data15_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 114 [c18, dimnames5]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_dimnames5_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 119 [dimnames7]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_dimnames7_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 128 [data17]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_data17_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L20()
  // L20()
  goto L20_;

L90_:;
  // data16 = force? data15
  Rsh_Fir_reg_data16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data15_);
  // checkMissing(data16)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_data16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // vl8 = ld vl
  Rsh_Fir_reg_vl8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L91() else D26()
  // L91()
  goto L91_;

L110_:;
  // dimnames6 = force? dimnames5
  Rsh_Fir_reg_dimnames6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimnames5_);
  // checkMissing(dimnames6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dimnames6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r52 = dyn length4(dimnames6)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dimnames6_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L111() else D36()
  // L111()
  goto L111_;

L114_:;
  // dimnames8 = force? dimnames7
  Rsh_Fir_reg_dimnames8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimnames7_);
  // checkMissing(dimnames8)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dimnames8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // l1 = ld data
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L115() else D38()
  // L115()
  goto L115_;

L118_:;
  // data18 = force? data17
  Rsh_Fir_reg_data18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data17_);
  // checkMissing(data18)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_data18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return data18
  return Rsh_Fir_reg_data18_;

D26_:;
  // deopt 84 [vl8]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_vl8_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 117 [c18, r52]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 122 [dimnames8, l1, dimnames8]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_dimnames8_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_dimnames8_;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L91_:;
  // vl9 = force? vl8
  Rsh_Fir_reg_vl9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vl8_);
  // checkMissing(vl9)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_vl9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r41 = dyn rep_len(data16, vl9)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_data16_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_vl9_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L92() else D27()
  // L92()
  goto L92_;

L111_:;
  // goto L28(c18, r52)
  // L28(c18, r52)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L28_;

L115_:;
  // r53 = dyn dimnames__(l1, NULL, dimnames8)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_dimnames8_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L116() else D39()
  // L116()
  goto L116_;

D27_:;
  // deopt 87 [r41]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 124 [dimnames8, r53]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_dimnames8_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(124, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L21_;

L116_:;
  // st data = r53
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // goto L30()
  // L30()
  goto L30_;
}
SEXP Rsh_Fir_user_promise_inner648887954_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_reg_data2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner648887954/0: expected 0, got %d", NCAPTURES);

  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r2 = dyn length(data2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_data2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym data>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner648887954_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data9_;
  SEXP Rsh_Fir_reg_data10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner648887954/0: expected 0, got %d", NCAPTURES);

  // data9 = ld data
  Rsh_Fir_reg_data9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // data10 = force? data9
  Rsh_Fir_reg_data10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data9_);
  // checkMissing(data10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_data10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return data10
  return Rsh_Fir_reg_data10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
