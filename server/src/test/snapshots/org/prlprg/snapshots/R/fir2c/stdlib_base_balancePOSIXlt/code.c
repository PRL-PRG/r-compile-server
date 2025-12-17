#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3130797593_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3130797593_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_Sys_getenv;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_Sys_setenv;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_as_POSIXlt;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_str;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_balancePOSIXlt;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_str1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_balancePOSIXlt1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_str2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_stopifnot1_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_oldTZ;
  SEXP Rsh_Fir_reg_oldTZ1_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_Sys_unsetenv;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_Sys_setenv1_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r76_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3130797593
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3130797593_, RHO, CCP);
  // st balancePOSIXlt = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st TZ = "UTC"
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // r1 = dyn Sys_getenv[, unset]("TZ", "unset")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 11 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st oldTZ = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // Sys_setenv = ldf `Sys.setenv`
  Rsh_Fir_reg_Sys_setenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // r2 = dyn Sys_setenv[TZ]("UTC")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_setenv, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 17 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // as_POSIXlt = ldf `as.POSIXlt`
  Rsh_Fir_reg_as_POSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r3 = dyn as_POSIXlt("2000-01-02 3:45")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 21 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // st d1 = r3
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // d1 = ld d1
  Rsh_Fir_reg_d1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 23 [d1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // d2 = force? d1
  Rsh_Fir_reg_d2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d1_);
  // checkMissing(d2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_d2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `is.object`(d2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_d2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args4);
  // if c then L9() else L10(d2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L10(d2)
    Rsh_Fir_reg_d4_ = Rsh_Fir_reg_d2_;
    goto L10_;
  }

L8_:;
  // r5 = `:`(0.0, 16.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args5);
  // r6 = `*`(r5, 20)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args6);
  // r7 = `+`(dx1, r6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args7);
  // l = ld d1
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args8);
  // if c1 then L13() else L14(r7, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L13()
    goto L13_;
  } else {
  // L14(r7, l)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L14_;
  }

L9_:;
  // dr = tryDispatchBuiltin.1("$", d2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_d2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L11() else L10(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr)
    Rsh_Fir_reg_d4_ = Rsh_Fir_reg_dr;
    goto L10_;
  }

L10_:;
  // r4 = `$`(d4, <sym min>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args11);
  // goto L8(r4)
  // L8(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L8_;

L11_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L12_:;
  // st d1 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

L13_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l, r7)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args13);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc1 then L15() else L14(r7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L15()
    goto L15_;
  } else {
  // L14(r7, dr2)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L14_;
  }

L14_:;
  // r12 = `$<-`(l2, <sym min>, r7)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args15);
  // goto L12(r12)
  // L12(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L12_;

D7_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L12(dx2)
  // L12(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

L16_:;
  // p = prom<V +>{
  //   d5 = ld d1;
  //   d6 = force? d5;
  //   checkMissing(d6);
  //   return d6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r14 = dyn format(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L17() else D8()
  // L17()
  goto L17_;

D8_:;
  // deopt 38 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // st f1 = r14
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // str = ldf str
  Rsh_Fir_reg_str = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

D9_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   sym = ldf unclass;
  //   base = ldf unclass in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   d7 = ld d1;
  //   d8 = force? d7;
  //   checkMissing(d8);
  //   unclass = ldf unclass in base;
  //   r17 = dyn unclass(d8);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base(<sym d1>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r19 = dyn str(p1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

D10_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // balancePOSIXlt = ldf balancePOSIXlt
  Rsh_Fir_reg_balancePOSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p2 = prom<V +>{
  //   d9 = ld d1;
  //   d10 = force? d9;
  //   checkMissing(d10);
  //   return d10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r21 = dyn balancePOSIXlt[, `fill.only`](p2, TRUE)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_balancePOSIXlt, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L21() else D12()
  // L21()
  goto L21_;

D12_:;
  // deopt 49 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // st df = r21
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // str1 = ldf str
  Rsh_Fir_reg_str1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L22() else D13()
  // L22()
  goto L22_;

D13_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p3 = prom<V +>{
  //   sym1 = ldf unclass;
  //   base1 = ldf unclass in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   df = ld df;
  //   df1 = force? df;
  //   checkMissing(df1);
  //   unclass1 = ldf unclass in base;
  //   r24 = dyn unclass1(df1);
  //   goto L0(r24);
  // L2():
  //   r22 = dyn base1(<sym df>);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r26 = dyn str1(p3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L23() else D14()
  // L23()
  goto L23_;

D14_:;
  // deopt 54 [r26]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // balancePOSIXlt1 = ldf balancePOSIXlt
  Rsh_Fir_reg_balancePOSIXlt1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L24() else D15()
  // L24()
  goto L24_;

D15_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p4 = prom<V +>{
  //   d11 = ld d1;
  //   d12 = force? d11;
  //   checkMissing(d12);
  //   return d12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r28 = dyn balancePOSIXlt1[, classed](p4, FALSE)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_balancePOSIXlt1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L25() else D16()
  // L25()
  goto L25_;

D16_:;
  // deopt 60 [r28]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // st db = r28
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L26() else D17()
  // L26()
  goto L26_;

D17_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p6 = prom<V +>{
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r30):
  //   return r30;
  // L2():
  //   sym3 = ldf unCfillPOSIXlt;
  //   base3 = ldf unCfillPOSIXlt in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L4() else L5();
  // L3():
  //   r29 = dyn base2(<lang unCfillPOSIXlt(d1)>, <lang balancePOSIXlt(d1, fill.only=TRUE, classed=FALSE)>);
  //   goto L0(r29);
  // L1(r32):
  //   balancePOSIXlt2 = ldf balancePOSIXlt;
  //   p5 = prom<V +>{
  //     d15 = ld d1;
  //     d16 = force? d15;
  //     checkMissing(d16);
  //     return d16;
  //   };
  //   r35 = dyn balancePOSIXlt2[, `fill.only`, classed](p5, TRUE, FALSE);
  //   identical = ldf identical in base;
  //   r36 = dyn identical(r32, r35, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r36);
  // L4():
  //   d13 = ld d1;
  //   d14 = force? d13;
  //   checkMissing(d14);
  //   unCfillPOSIXlt = ldf unCfillPOSIXlt in base;
  //   r33 = dyn unCfillPOSIXlt(d14);
  //   goto L1(r33);
  // L5():
  //   r31 = dyn base3(<sym d1>);
  //   goto L1(r31);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r38 = dyn stopifnot(p6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L27() else D18()
  // L27()
  goto L27_;

D18_:;
  // deopt 65 [r38]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // str2 = ldf str
  Rsh_Fir_reg_str2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L28() else D19()
  // L28()
  goto L28_;

D19_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p7 = prom<V +>{
  //   db = ld db;
  //   db1 = force? db;
  //   checkMissing(db1);
  //   return db1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r40 = dyn str2(p7)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L29() else D20()
  // L29()
  goto L29_;

D20_:;
  // deopt 69 [r40]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L30() else D21()
  // L30()
  goto L30_;

D21_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p20 = prom<V +>{
  //   sym4 = ldf identical;
  //   base4 = ldf identical in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L3() else L4();
  // L0():
  //   all_equal = ldf `all.equal`;
  //   p10 = prom<V +>{
  //     as_POSIXct = ldf `as.POSIXct`;
  //     p9 = prom<V +>{
  //       d17 = ld d1;
  //       d18 = force? d17;
  //       checkMissing(d18);
  //       return d18;
  //     };
  //     r47 = dyn as_POSIXct(p9);
  //     return r47;
  //   };
  //   p12 = prom<V +>{
  //     as_POSIXct1 = ldf `as.POSIXct`;
  //     p11 = prom<V +>{
  //       df4 = ld df;
  //       df5 = force? df4;
  //       checkMissing(df5);
  //       return df5;
  //     };
  //     r50 = dyn as_POSIXct1(p11);
  //     return r50;
  //   };
  //   dyn all_equal(p10, p12);
  //   sym5 = ldf identical;
  //   base5 = ldf identical in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L5() else L6();
  // L3():
  //   f1 = ld f1;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   format1 = ldf format;
  //   p8 = prom<V +>{
  //     df2 = ld df;
  //     df3 = force? df2;
  //     checkMissing(df3);
  //     return df3;
  //   };
  //   r44 = dyn format1(p8);
  //   identical1 = ldf identical in base;
  //   r45 = dyn identical1(f2, r44, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0();
  // L4():
  //   r41 = dyn base4(<sym f1>, <lang format(df)>);
  //   goto L0();
  // L1():
  //   sym6 = ldf identical;
  //   base6 = ldf identical in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L7() else L8();
  // L5():
  //   f3 = ld f1;
  //   f4 = force? f3;
  //   checkMissing(f4);
  //   format2 = ldf format;
  //   p14 = prom<V +>{
  //     _POSIXlt = ldf `.POSIXlt`;
  //     p13 = prom<V +>{
  //       db2 = ld db;
  //       db3 = force? db2;
  //       checkMissing(db3);
  //       return db3;
  //     };
  //     r56 = dyn _POSIXlt(p13);
  //     return r56;
  //   };
  //   r58 = dyn format2(p14);
  //   identical2 = ldf identical in base;
  //   r59 = dyn identical2(f4, r58, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L1();
  // L6():
  //   r53 = dyn base5(<sym f1>, <lang format(.POSIXlt(db))>);
  //   goto L1();
  // L2(r61):
  //   return r61;
  // L7():
  //   as_POSIXct2 = ldf `as.POSIXct`;
  //   p15 = prom<V +>{
  //     d19 = ld d1;
  //     d20 = force? d19;
  //     checkMissing(d20);
  //     return d20;
  //   };
  //   p16 = prom<V +>{
  //     TZ = ld TZ;
  //     TZ1 = force? TZ;
  //     checkMissing(TZ1);
  //     return TZ1;
  //   };
  //   r64 = dyn as_POSIXct2(p15, p16);
  //   as_POSIXct3 = ldf `as.POSIXct`;
  //   p19 = prom<V +>{
  //     _POSIXlt1 = ldf `.POSIXlt`;
  //     p17 = prom<V +>{
  //       db4 = ld db;
  //       db5 = force? db4;
  //       checkMissing(db5);
  //       return db5;
  //     };
  //     p18 = prom<V +>{
  //       TZ2 = ld TZ;
  //       TZ3 = force? TZ2;
  //       checkMissing(TZ3);
  //       return TZ3;
  //     };
  //     r67 = dyn _POSIXlt1(p17, p18);
  //     return r67;
  //   };
  //   r69 = dyn as_POSIXct3(p19);
  //   identical3 = ldf identical in base;
  //   r70 = dyn identical3(r64, r69, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L2(r70);
  // L8():
  //   r60 = dyn base6(<lang as.POSIXct(d1, TZ)>, <lang as.POSIXct(.POSIXlt(db, TZ))>);
  //   goto L2(r60);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r72 = dyn stopifnot1[exprs](p20)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L31() else D22()
  // L31()
  goto L31_;

D22_:;
  // deopt 74 [r72]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L31_:;
  // oldTZ = ld oldTZ
  Rsh_Fir_reg_oldTZ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L32() else D23()
  // L32()
  goto L32_;

D23_:;
  // deopt 75 [oldTZ]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_oldTZ;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L32_:;
  // oldTZ1 = force? oldTZ
  Rsh_Fir_reg_oldTZ1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldTZ);
  // checkMissing(oldTZ1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_oldTZ1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r73 = `==`(oldTZ1, "unset")
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_oldTZ1_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args75);
  // c2 = `as.logical`(r73)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c2 then L33() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L33()
    goto L33_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // Sys_setenv1 = ldf `Sys.setenv`
  Rsh_Fir_reg_Sys_setenv1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L37() else D26()
  // L37()
  goto L37_;

L33_:;
  // Sys_unsetenv = ldf `Sys.unsetenv`
  Rsh_Fir_reg_Sys_unsetenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L34() else D24()
  // L34()
  goto L34_;

D24_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // r74 = dyn Sys_unsetenv("TZ")
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_unsetenv, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L35() else D25()
  // L35()
  goto L35_;

L37_:;
  // p21 = prom<V +>{
  //   oldTZ2 = ld oldTZ;
  //   oldTZ3 = force? oldTZ2;
  //   checkMissing(oldTZ3);
  //   return oldTZ3;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // r76 = dyn Sys_setenv1[TZ](p21)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_setenv1_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L38() else D27()
  // L38()
  goto L38_;

D25_:;
  // deopt 82 [r74]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 87 [r76]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r74
  return Rsh_Fir_reg_r74_;

L38_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r76
  return Rsh_Fir_reg_r76_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_d6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d5 = ld d1
  Rsh_Fir_reg_d5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d6 = force? d5
  Rsh_Fir_reg_d6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d5_);
  // checkMissing(d6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_d6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return d6
  return Rsh_Fir_reg_d6_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_d7_;
  SEXP Rsh_Fir_reg_d8_;
  SEXP Rsh_Fir_reg_unclass;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf unclass
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf unclass in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // d7 = ld d1
  Rsh_Fir_reg_d7_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d8 = force? d7
  Rsh_Fir_reg_d8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d7_);
  // checkMissing(d8)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_d8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r17 = dyn unclass(d8)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_d8_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base(<sym d1>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d9_;
  SEXP Rsh_Fir_reg_d10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d9 = ld d1
  Rsh_Fir_reg_d9_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d10 = force? d9
  Rsh_Fir_reg_d10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d9_);
  // checkMissing(d10)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_d10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return d10
  return Rsh_Fir_reg_d10_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_df;
  SEXP Rsh_Fir_reg_df1_;
  SEXP Rsh_Fir_reg_unclass1_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf unclass
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf unclass in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // df = ld df
  Rsh_Fir_reg_df = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // df1 = force? df
  Rsh_Fir_reg_df1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df);
  // checkMissing(df1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_df1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // unclass1 = ldf unclass in base
  Rsh_Fir_reg_unclass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r24 = dyn unclass1(df1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_df1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r22 = dyn base1(<sym df>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d11_;
  SEXP Rsh_Fir_reg_d12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d11 = ld d1
  Rsh_Fir_reg_d11_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d12 = force? d11
  Rsh_Fir_reg_d12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d11_);
  // checkMissing(d12)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_d12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return d12
  return Rsh_Fir_reg_d12_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_d13_;
  SEXP Rsh_Fir_reg_d14_;
  SEXP Rsh_Fir_reg_unCfillPOSIXlt;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_balancePOSIXlt2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_;

L2_:;
  // sym3 = ldf unCfillPOSIXlt
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base3 = ldf unCfillPOSIXlt in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard3 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r29 = dyn base2(<lang unCfillPOSIXlt(d1)>, <lang balancePOSIXlt(d1, fill.only=TRUE, classed=FALSE)>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L0_;

L1_:;
  // balancePOSIXlt2 = ldf balancePOSIXlt
  Rsh_Fir_reg_balancePOSIXlt2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p5 = prom<V +>{
  //   d15 = ld d1;
  //   d16 = force? d15;
  //   checkMissing(d16);
  //   return d16;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r35 = dyn balancePOSIXlt2[, `fill.only`, classed](p5, TRUE, FALSE)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_balancePOSIXlt2_, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r36 = dyn identical(r32, r35, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args38[9];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[6] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args38[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[8] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[9];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_array_arg_names14[6] = R_MissingArg;
  Rsh_Fir_array_arg_names14[7] = R_MissingArg;
  Rsh_Fir_array_arg_names14[8] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r36_;
  goto L0_;

L4_:;
  // d13 = ld d1
  Rsh_Fir_reg_d13_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d14 = force? d13
  Rsh_Fir_reg_d14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d13_);
  // checkMissing(d14)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_d14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // unCfillPOSIXlt = ldf unCfillPOSIXlt in base
  Rsh_Fir_reg_unCfillPOSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r33 = dyn unCfillPOSIXlt(d14)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_d14_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unCfillPOSIXlt, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r33)
  // L1(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L1_;

L5_:;
  // r31 = dyn base3(<sym d1>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(r31)
  // L1(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d15_;
  SEXP Rsh_Fir_reg_d16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d15 = ld d1
  Rsh_Fir_reg_d15_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d16 = force? d15
  Rsh_Fir_reg_d16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d15_);
  // checkMissing(d16)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_d16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return d16
  return Rsh_Fir_reg_d16_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_db;
  SEXP Rsh_Fir_reg_db1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return db1
  return Rsh_Fir_reg_db1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_format1_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_reg_f4_;
  SEXP Rsh_Fir_reg_format2_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_as_POSIXct2_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_as_POSIXct3_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_identical3_;
  SEXP Rsh_Fir_reg_r70_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard4 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p10 = prom<V +>{
  //   as_POSIXct = ldf `as.POSIXct`;
  //   p9 = prom<V +>{
  //     d17 = ld d1;
  //     d18 = force? d17;
  //     checkMissing(d18);
  //     return d18;
  //   };
  //   r47 = dyn as_POSIXct(p9);
  //   return r47;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   as_POSIXct1 = ldf `as.POSIXct`;
  //   p11 = prom<V +>{
  //     df4 = ld df;
  //     df5 = force? df4;
  //     checkMissing(df5);
  //     return df5;
  //   };
  //   r50 = dyn as_POSIXct1(p11);
  //   return r50;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // dyn all_equal(p10, p12)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  (void)(Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names21, CCP, RHO));
  // sym5 = ldf identical
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf identical in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard5 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L3_:;
  // f1 = ld f1
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // format1 = ldf format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p8 = prom<V +>{
  //   df2 = ld df;
  //   df3 = force? df2;
  //   checkMissing(df3);
  //   return df3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r44 = dyn format1(p8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names22, CCP, RHO);
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r45 = dyn identical1(f2, r44, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args55[9];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args55[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args55[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args55[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args55[6] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args55[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args55[8] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[9];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_array_arg_names23[4] = R_MissingArg;
  Rsh_Fir_array_arg_names23[5] = R_MissingArg;
  Rsh_Fir_array_arg_names23[6] = R_MissingArg;
  Rsh_Fir_array_arg_names23[7] = R_MissingArg;
  Rsh_Fir_array_arg_names23[8] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L4_:;
  // r41 = dyn base4(<sym f1>, <lang format(df)>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L1_:;
  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard6 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L5_:;
  // f3 = ld f1
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // format2 = ldf format
  Rsh_Fir_reg_format2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p14 = prom<V +>{
  //   _POSIXlt = ldf `.POSIXlt`;
  //   p13 = prom<V +>{
  //     db2 = ld db;
  //     db3 = force? db2;
  //     checkMissing(db3);
  //     return db3;
  //   };
  //   r56 = dyn _POSIXlt(p13);
  //   return r56;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r58 = dyn format2(p14)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format2_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names26, CCP, RHO);
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r59 = dyn identical2(f4, r58, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args62[9];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_f4_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args62[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args62[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args62[6] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args62[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args62[8] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names27[9];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_array_arg_names27[4] = R_MissingArg;
  Rsh_Fir_array_arg_names27[5] = R_MissingArg;
  Rsh_Fir_array_arg_names27[6] = R_MissingArg;
  Rsh_Fir_array_arg_names27[7] = R_MissingArg;
  Rsh_Fir_array_arg_names27[8] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L6_:;
  // r53 = dyn base5(<sym f1>, <lang format(.POSIXlt(db))>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

L2_:;
  // return r61
  return Rsh_Fir_reg_r61_;

L7_:;
  // as_POSIXct2 = ldf `as.POSIXct`
  Rsh_Fir_reg_as_POSIXct2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // p15 = prom<V +>{
  //   d19 = ld d1;
  //   d20 = force? d19;
  //   checkMissing(d20);
  //   return d20;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   TZ = ld TZ;
  //   TZ1 = force? TZ;
  //   checkMissing(TZ1);
  //   return TZ1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r64 = dyn as_POSIXct2(p15, p16)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXct2_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names29, CCP, RHO);
  // as_POSIXct3 = ldf `as.POSIXct`
  Rsh_Fir_reg_as_POSIXct3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // p19 = prom<V +>{
  //   _POSIXlt1 = ldf `.POSIXlt`;
  //   p17 = prom<V +>{
  //     db4 = ld db;
  //     db5 = force? db4;
  //     checkMissing(db5);
  //     return db5;
  //   };
  //   p18 = prom<V +>{
  //     TZ2 = ld TZ;
  //     TZ3 = force? TZ2;
  //     checkMissing(TZ3);
  //     return TZ3;
  //   };
  //   r67 = dyn _POSIXlt1(p17, p18);
  //   return r67;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r69 = dyn as_POSIXct3(p19)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXct3_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names31, CCP, RHO);
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r70 = dyn identical3(r64, r69, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args71[9];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args71[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args71[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args71[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args71[6] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args71[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args71[8] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names32[9];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_array_arg_names32[5] = R_MissingArg;
  Rsh_Fir_array_arg_names32[6] = R_MissingArg;
  Rsh_Fir_array_arg_names32[7] = R_MissingArg;
  Rsh_Fir_array_arg_names32[8] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L2(r70)
  // L2(r70)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r70_;
  goto L2_;

L8_:;
  // r60 = dyn base6(<lang as.POSIXct(d1, TZ)>, <lang as.POSIXct(.POSIXlt(db, TZ))>)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L2(r60)
  // L2(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_POSIXct;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_POSIXct = ldf `as.POSIXct`
  Rsh_Fir_reg_as_POSIXct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // p9 = prom<V +>{
  //   d17 = ld d1;
  //   d18 = force? d17;
  //   checkMissing(d18);
  //   return d18;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r47 = dyn as_POSIXct(p9)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXct, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d17_;
  SEXP Rsh_Fir_reg_d18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d17 = ld d1
  Rsh_Fir_reg_d17_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d18 = force? d17
  Rsh_Fir_reg_d18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d17_);
  // checkMissing(d18)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_d18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return d18
  return Rsh_Fir_reg_d18_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_POSIXct1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_POSIXct1 = ldf `as.POSIXct`
  Rsh_Fir_reg_as_POSIXct1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // p11 = prom<V +>{
  //   df4 = ld df;
  //   df5 = force? df4;
  //   checkMissing(df5);
  //   return df5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r50 = dyn as_POSIXct1(p11)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXct1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names20, CCP, RHO);
  // return r50
  return Rsh_Fir_reg_r50_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_df4_;
  SEXP Rsh_Fir_reg_df5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // df4 = ld df
  Rsh_Fir_reg_df4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // df5 = force? df4
  Rsh_Fir_reg_df5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df4_);
  // checkMissing(df5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_df5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return df5
  return Rsh_Fir_reg_df5_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_df2_;
  SEXP Rsh_Fir_reg_df3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // df2 = ld df
  Rsh_Fir_reg_df2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // df3 = force? df2
  Rsh_Fir_reg_df3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df2_);
  // checkMissing(df3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_df3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return df3
  return Rsh_Fir_reg_df3_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__POSIXlt;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r56_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _POSIXlt = ldf `.POSIXlt`
  Rsh_Fir_reg__POSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p13 = prom<V +>{
  //   db2 = ld db;
  //   db3 = force? db2;
  //   checkMissing(db3);
  //   return db3;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r56 = dyn _POSIXlt(p13)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__POSIXlt, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_db2_;
  SEXP Rsh_Fir_reg_db3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // db2 = ld db
  Rsh_Fir_reg_db2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // db3 = force? db2
  Rsh_Fir_reg_db3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db2_);
  // checkMissing(db3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_db3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return db3
  return Rsh_Fir_reg_db3_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d19_;
  SEXP Rsh_Fir_reg_d20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // d19 = ld d1
  Rsh_Fir_reg_d19_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // d20 = force? d19
  Rsh_Fir_reg_d20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d19_);
  // checkMissing(d20)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_d20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return d20
  return Rsh_Fir_reg_d20_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_TZ;
  SEXP Rsh_Fir_reg_TZ1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // TZ = ld TZ
  Rsh_Fir_reg_TZ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // TZ1 = force? TZ
  Rsh_Fir_reg_TZ1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TZ);
  // checkMissing(TZ1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_TZ1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return TZ1
  return Rsh_Fir_reg_TZ1_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__POSIXlt1_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r67_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _POSIXlt1 = ldf `.POSIXlt`
  Rsh_Fir_reg__POSIXlt1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p17 = prom<V +>{
  //   db4 = ld db;
  //   db5 = force? db4;
  //   checkMissing(db5);
  //   return db5;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   TZ2 = ld TZ;
  //   TZ3 = force? TZ2;
  //   checkMissing(TZ3);
  //   return TZ3;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r67 = dyn _POSIXlt1(p17, p18)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__POSIXlt1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names30, CCP, RHO);
  // return r67
  return Rsh_Fir_reg_r67_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_db4_;
  SEXP Rsh_Fir_reg_db5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // db4 = ld db
  Rsh_Fir_reg_db4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // db5 = force? db4
  Rsh_Fir_reg_db5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db4_);
  // checkMissing(db5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_db5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return db5
  return Rsh_Fir_reg_db5_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_TZ2_;
  SEXP Rsh_Fir_reg_TZ3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // TZ2 = ld TZ
  Rsh_Fir_reg_TZ2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // TZ3 = force? TZ2
  Rsh_Fir_reg_TZ3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TZ2_);
  // checkMissing(TZ3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_TZ3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return TZ3
  return Rsh_Fir_reg_TZ3_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_oldTZ2_;
  SEXP Rsh_Fir_reg_oldTZ3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // oldTZ2 = ld oldTZ
  Rsh_Fir_reg_oldTZ2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // oldTZ3 = force? oldTZ2
  Rsh_Fir_reg_oldTZ3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldTZ2_);
  // checkMissing(oldTZ3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_oldTZ3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return oldTZ3
  return Rsh_Fir_reg_oldTZ3_;
}
SEXP Rsh_Fir_user_function_inner3130797593_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3130797593 dynamic dispatch ([x, `fill.only`, classed])

  return Rsh_Fir_user_version_inner3130797593_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3130797593_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3130797593 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3130797593/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_fill_only;
  SEXP Rsh_Fir_reg_classed;
  SEXP Rsh_Fir_reg_fill_only_isMissing;
  SEXP Rsh_Fir_reg_fill_only_orDefault;
  SEXP Rsh_Fir_reg_classed_isMissing;
  SEXP Rsh_Fir_reg_classed_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_fill_only1_;
  SEXP Rsh_Fir_reg_fill_only2_;
  SEXP Rsh_Fir_reg_classed1_;
  SEXP Rsh_Fir_reg_classed2_;
  SEXP Rsh_Fir_reg_balancePOSIXlt1;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_fill_only = PARAMS[1];
  Rsh_Fir_reg_classed = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // fill_only_isMissing = missing.0(fill_only)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_fill_only;
  Rsh_Fir_reg_fill_only_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args80);
  // if fill_only_isMissing then L0(FALSE) else L0(fill_only)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fill_only_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_fill_only_orDefault = Rsh_const(CCP, 25);
    goto L0_;
  } else {
  // L0(fill_only)
    Rsh_Fir_reg_fill_only_orDefault = Rsh_Fir_reg_fill_only;
    goto L0_;
  }

L0_:;
  // st `fill.only` = fill_only_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_fill_only_orDefault, RHO);
  (void)(Rsh_Fir_reg_fill_only_orDefault);
  // classed_isMissing = missing.0(classed)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_classed;
  Rsh_Fir_reg_classed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args81);
  // if classed_isMissing then L1(TRUE) else L1(classed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_classed_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_classed_orDefault = Rsh_const(CCP, 22);
    goto L1_;
  } else {
  // L1(classed)
    Rsh_Fir_reg_classed_orDefault = Rsh_Fir_reg_classed;
    goto L1_;
  }

L1_:;
  // st classed = classed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_classed_orDefault, RHO);
  (void)(Rsh_Fir_reg_classed_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L3_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r = dyn base(<lang balancePOSIXlt(x, fill.only, classed)>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L5_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // fill_only1 = ld `fill.only`
  Rsh_Fir_reg_fill_only1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 4 [fill_only1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_fill_only1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L6_:;
  // fill_only2 = force? fill_only1
  Rsh_Fir_reg_fill_only2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fill_only1_);
  // checkMissing(fill_only2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_fill_only2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // classed1 = ld classed
  Rsh_Fir_reg_classed1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 6 [classed1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_classed1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L7_:;
  // classed2 = force? classed1
  Rsh_Fir_reg_classed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classed1_);
  // checkMissing(classed2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_classed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // balancePOSIXlt = ldf balancePOSIXlt in base
  Rsh_Fir_reg_balancePOSIXlt1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn balancePOSIXlt(x2, fill_only2, classed2)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_fill_only2_;
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_classed2_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_balancePOSIXlt1, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
