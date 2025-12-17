#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3697006208_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3697006208_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3697006208_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3697006208_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3697006208_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3697006208_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3697006208_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3697006208_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3697006208_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3697006208_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_ARMAacf;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_acf2AR;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3697006208
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3697006208_, RHO, CCP);
  // st acf2AR = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // ARMAacf = ldf ARMAacf
  Rsh_Fir_reg_ARMAacf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c(0.6, 0.3, -0.2);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(0.6, 0.3, <lang `-`(0.2)>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn ARMAacf(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ARMAacf, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st Acf = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // acf2AR = ldf acf2AR
  Rsh_Fir_reg_acf2AR = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   Acf = ld Acf;
  //   Acf1 = force? Acf;
  //   checkMissing(Acf1);
  //   return Acf1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn acf2AR(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_acf2AR, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn c(0.6, 0.3, -0.2)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(0.6, 0.3, <lang `-`(0.2)>)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Acf;
  SEXP Rsh_Fir_reg_Acf1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Acf = ld Acf
  Rsh_Fir_reg_Acf = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // Acf1 = force? Acf
  Rsh_Fir_reg_Acf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Acf);
  // checkMissing(Acf1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_Acf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return Acf1
  return Rsh_Fir_reg_Acf1_;
}
SEXP Rsh_Fir_user_function_inner3697006208_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3697006208 dynamic dispatch ([acf])

  return Rsh_Fir_user_version_inner3697006208_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3697006208_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3697006208 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3697006208/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_acf;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_acf1_;
  SEXP Rsh_Fir_reg_acf2_;
  SEXP Rsh_Fir_reg_drop;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_order_max;
  SEXP Rsh_Fir_reg_order_max1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_C_eureka;
  SEXP Rsh_Fir_reg_C_eureka1_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_order_max2_;
  SEXP Rsh_Fir_reg_order_max3_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_double;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_double1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_double2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg__Fortran;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r44_;

  // Bind parameters
  Rsh_Fir_reg_acf = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st acf = acf
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_acf, RHO);
  (void)(Rsh_Fir_reg_acf);
  // sym = ldf `as.double`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `as.double` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // st r = r1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L7_:;
  // sym1 = ldf drop
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf drop in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // r = dyn base(<lang drop(acf)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

L1_:;
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r5 = dyn as_double(r3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L2_:;
  // r11 = `-`(r7, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args11);
  // st `order.max` = r11
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // order_max = ld `order.max`
  Rsh_Fir_reg_order_max = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L9_:;
  // acf1 = ld acf
  Rsh_Fir_reg_acf1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r2 = dyn base1(<sym acf>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

L14_:;
  // r8 = ld r
  Rsh_Fir_reg_r8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L15_:;
  // r6 = dyn base2(<sym r>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_;
  goto L2_;

D0_:;
  // deopt 4 [acf1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_acf1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 20 [order_max]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_order_max;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // acf2 = force? acf1
  Rsh_Fir_reg_acf2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_acf1_);
  // checkMissing(acf2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_acf2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // drop = ldf drop in base
  Rsh_Fir_reg_drop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r4 = dyn drop(acf2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_acf2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L13_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L16_:;
  // r9 = force? r8
  Rsh_Fir_reg_r9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r8_);
  // checkMissing(r9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r10 = dyn length(r9)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L18_:;
  // order_max1 = force? order_max
  Rsh_Fir_reg_order_max1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max);
  // checkMissing(order_max1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_order_max1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r12 = `<=`(order_max1, 0.0)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_order_max1_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args19);
  // c = `as.logical`(r12)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c then L19() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L19()
    goto L19_;
  } else {
  // L3()
    goto L3_;
  }

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym3 = ldf `.Fortran`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf `.Fortran` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard3 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L12_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_;
  goto L1_;

L17_:;
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r10_;
  goto L2_;

L19_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // st z = r16
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L39() else D20()
  // L39()
  goto L39_;

L20_:;
  // r13 = dyn stop("'acf' must be of length two or more")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

L23_:;
  // C_eureka = ld C_eureka
  Rsh_Fir_reg_C_eureka = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L24_:;
  // r15 = dyn base3[, , , , coefs, vars, ](<sym C_eureka>, <lang as.integer(order.max)>, <sym r>, <sym r>, <lang double(`^`(order.max, 2.0))>, <lang double(order.max)>, <lang double(order.max)>)
  SEXP Rsh_Fir_array_args23[7];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args23[5] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args23[6] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names11[7];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names11[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 7, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(r15)
  // L5(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L5_;

D7_:;
  // deopt 27 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 32 [C_eureka]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_eureka;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L4()
  // L4()
  goto L4_;

L25_:;
  // C_eureka1 = force? C_eureka
  Rsh_Fir_reg_C_eureka1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_eureka);
  // checkMissing(C_eureka1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_C_eureka1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // sym4 = ldf `as.integer`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf `as.integer` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard4 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L39_:;
  // p3 = prom<V +>{
  //   order_max10 = ld `order.max`;
  //   order_max11 = force? order_max10;
  //   checkMissing(order_max11);
  //   r32 = `:`(1, order_max11);
  //   return r32;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_, 0, NULL, CCP, RHO);
  // r34 = dyn paste0("ar(", p3, ")")
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L40() else D21()
  // L40()
  goto L40_;

D21_:;
  // deopt 66 [r34]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L6_:;
  // r20 = ld r
  Rsh_Fir_reg_r20_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

L26_:;
  // order_max2 = ld `order.max`
  Rsh_Fir_reg_order_max2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

L27_:;
  // r17 = dyn base4(<sym order.max>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

L40_:;
  // st nm = r34
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L41() else D22()
  // L41()
  goto L41_;

D9_:;
  // deopt 36 [order_max2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_order_max2_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 40 [r20]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // order_max3 = force? order_max2
  Rsh_Fir_reg_order_max3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max2_);
  // checkMissing(order_max3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_order_max3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r19 = dyn as_integer(order_max3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_order_max3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L30_:;
  // r21 = force? r20
  Rsh_Fir_reg_r21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r20_);
  // checkMissing(r21)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r22 = ld r
  Rsh_Fir_reg_r22_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

L41_:;
  // p4 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   c1 = `is.object`(z1);
  //   if c1 then L1() else L2(z1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", z1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(z3):
  //   r35 = `$`(z3, <sym coefs>);
  //   goto L0(r35);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_1, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   order_max12 = ld `order.max`;
  //   order_max13 = force? order_max12;
  //   checkMissing(order_max13);
  //   return order_max13;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_2, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   order_max14 = ld `order.max`;
  //   order_max15 = force? order_max14;
  //   checkMissing(order_max15);
  //   return order_max15;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_3, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   sym5 = ldf list;
  //   base5 = ldf list in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r40):
  //   return r40;
  // L1():
  //   nm = ld nm;
  //   nm1 = force? nm;
  //   checkMissing(nm1);
  //   order_max16 = ld `order.max`;
  //   order_max17 = force? order_max16;
  //   checkMissing(order_max17);
  //   r41 = `:`(1, order_max17);
  //   list = ldf list in base;
  //   r42 = dyn list(nm1, r41);
  //   goto L0(r42);
  // L2():
  //   r39 = dyn base5(<sym nm>, <lang `:`(1, order.max)>);
  //   goto L0(r39);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_4, 0, NULL, CCP, RHO);
  // r44 = dyn matrix[, , , dimnames](p4, p5, p6, p7)
  SEXP Rsh_Fir_array_args47[4];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args47[3] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L42() else D23()
  // L42()
  goto L42_;

D10_:;
  // deopt 39 [r19]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 42 [r22]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 75 [r44]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L6_;

L31_:;
  // r23 = force? r22
  Rsh_Fir_reg_r23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r22_);
  // checkMissing(r23)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

L42_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r44
  return Rsh_Fir_reg_r44_;

D13_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p = prom<V +>{
  //   order_max4 = ld `order.max`;
  //   order_max5 = force? order_max4;
  //   checkMissing(order_max5);
  //   r24 = `^`(order_max5, 2.0);
  //   return r24;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_5, 0, NULL, CCP, RHO);
  // r26 = dyn double(p)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L33() else D14()
  // L33()
  goto L33_;

D14_:;
  // deopt 47 [r26]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L33_:;
  // double1 = ldf double
  Rsh_Fir_reg_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L34() else D15()
  // L34()
  goto L34_;

D15_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p1 = prom<V +>{
  //   order_max6 = ld `order.max`;
  //   order_max7 = force? order_max6;
  //   checkMissing(order_max7);
  //   return order_max7;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_6, 0, NULL, CCP, RHO);
  // r28 = dyn double1(p1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L35() else D16()
  // L35()
  goto L35_;

D16_:;
  // deopt 52 [r28]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L35_:;
  // double2 = ldf double
  Rsh_Fir_reg_double2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L36() else D17()
  // L36()
  goto L36_;

D17_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p2 = prom<V +>{
  //   order_max8 = ld `order.max`;
  //   order_max9 = force? order_max8;
  //   checkMissing(order_max9);
  //   return order_max9;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3697006208_7, 0, NULL, CCP, RHO);
  // r30 = dyn double2(p2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double2_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L37() else D18()
  // L37()
  goto L37_;

D18_:;
  // deopt 57 [r30]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L37_:;
  // _Fortran = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r31 = dyn _Fortran(C_eureka1, r18, r21, r23, r26, r28, r30)
  SEXP Rsh_Fir_array_args56[7];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_C_eureka1_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args56[3] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args56[4] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args56[5] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args56[6] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names21[7];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran, 7, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L38() else D19()
  // L38()
  goto L38_;

D19_:;
  // deopt 59 [r31]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5(r31)
  // L5(r31)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r31_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order_max10_;
  SEXP Rsh_Fir_reg_order_max11_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // order_max10 = ld `order.max`
  Rsh_Fir_reg_order_max10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // order_max11 = force? order_max10
  Rsh_Fir_reg_order_max11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max10_);
  // checkMissing(order_max11)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_order_max11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r32 = `:`(1, order_max11)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_order_max11_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args27);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(z1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c1 then L1() else L2(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", z1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r35 = `$`(z3, <sym coefs>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args37);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r35_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order_max12_;
  SEXP Rsh_Fir_reg_order_max13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // order_max12 = ld `order.max`
  Rsh_Fir_reg_order_max12_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // order_max13 = force? order_max12
  Rsh_Fir_reg_order_max13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max12_);
  // checkMissing(order_max13)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_order_max13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return order_max13
  return Rsh_Fir_reg_order_max13_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order_max14_;
  SEXP Rsh_Fir_reg_order_max15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // order_max14 = ld `order.max`
  Rsh_Fir_reg_order_max14_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // order_max15 = force? order_max14
  Rsh_Fir_reg_order_max15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max14_);
  // checkMissing(order_max15)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_order_max15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return order_max15
  return Rsh_Fir_reg_order_max15_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_nm;
  SEXP Rsh_Fir_reg_nm1_;
  SEXP Rsh_Fir_reg_order_max16_;
  SEXP Rsh_Fir_reg_order_max17_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
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
  // nm = ld nm
  Rsh_Fir_reg_nm = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // nm1 = force? nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm);
  // checkMissing(nm1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_nm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // order_max16 = ld `order.max`
  Rsh_Fir_reg_order_max16_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // order_max17 = force? order_max16
  Rsh_Fir_reg_order_max17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max16_);
  // checkMissing(order_max17)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_order_max17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r41 = `:`(1, order_max17)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_order_max17_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args44);
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r42 = dyn list(nm1, r41)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_nm1_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r39 = dyn base5(<sym nm>, <lang `:`(1, order.max)>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order_max4_;
  SEXP Rsh_Fir_reg_order_max5_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // order_max4 = ld `order.max`
  Rsh_Fir_reg_order_max4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // order_max5 = force? order_max4
  Rsh_Fir_reg_order_max5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max4_);
  // checkMissing(order_max5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_order_max5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r24 = `^`(order_max5, 2.0)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_order_max5_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args50);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order_max6_;
  SEXP Rsh_Fir_reg_order_max7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // order_max6 = ld `order.max`
  Rsh_Fir_reg_order_max6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // order_max7 = force? order_max6
  Rsh_Fir_reg_order_max7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max6_);
  // checkMissing(order_max7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_order_max7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return order_max7
  return Rsh_Fir_reg_order_max7_;
}
SEXP Rsh_Fir_user_promise_inner3697006208_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_order_max8_;
  SEXP Rsh_Fir_reg_order_max9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3697006208/0: expected 0, got %d", NCAPTURES);

  // order_max8 = ld `order.max`
  Rsh_Fir_reg_order_max8_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // order_max9 = force? order_max8
  Rsh_Fir_reg_order_max9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order_max8_);
  // checkMissing(order_max9)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_order_max9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return order_max9
  return Rsh_Fir_reg_order_max9_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
