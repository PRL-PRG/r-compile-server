#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1649981529_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1649981529_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4259292012_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4259292012_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4259292012_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_raw;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_as_raw;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_charToRaw;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_xx;
  SEXP Rsh_Fir_reg_xx1_;
  SEXP Rsh_Fir_reg_dput;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_xx4_;
  SEXP Rsh_Fir_reg_xx5_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_charToRaw1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_is_vector;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_rawToChar;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_is_raw;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_is_raw1_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_isASCII;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_isASCII1_;
  SEXP Rsh_Fir_reg_r47_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1649981529
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1649981529_, RHO, CCP);
  // st raw = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // raw = ldf raw
  Rsh_Fir_reg_raw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r1 = dyn raw(2.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_raw, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st xx = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `as.raw`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `as.raw` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // l = ld xx
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L12() else L13(r3, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L13(r3, l)
    Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L13_;
  }

L9_:;
  // as_raw = ldf `as.raw` in base
  Rsh_Fir_reg_as_raw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r4 = dyn as_raw(40.0)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raw, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r2 = dyn base(40.0)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 12 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // st xx = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // charToRaw = ldf charToRaw
  Rsh_Fir_reg_charToRaw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L11_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L12_:;
  // dr = tryDispatchBuiltin.0("[<-", l, r3)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args5);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13(r3, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13(r3, dr)
    Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r9 = dyn ___(l2, r3, 1.0)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L1_;

D3_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L15_:;
  // r10 = dyn charToRaw("A")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charToRaw, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 21 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // l3 = ld xx
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c1 = `is.object`(l3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c1 then L17() else L18(r10, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L18(r10, l3)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L18_;
  }

L2_:;
  // st xx = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L17_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l3, r10)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L19() else L18(r10, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L19()
    goto L19_;
  } else {
  // L18(r10, dr2)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L18_;
  }

L18_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r15 = dyn ___1(l5, r10, 2.0)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r15)
  // L2(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L2_;

D5_:;
  // deopt 27 [xx]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

L20_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // dput = ldf dput
  Rsh_Fir_reg_dput = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p = prom<V +>{
  //   xx2 = ld xx;
  //   xx3 = force? xx2;
  //   checkMissing(xx3);
  //   return xx3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r17 = dyn dput(p)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dput, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L3_:;
  // st x = "A test string"
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 12), RHO);
  (void)(Rsh_const(CCP, 12));
  // charToRaw1 = ldf charToRaw
  Rsh_Fir_reg_charToRaw1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L27() else D10()
  // L27()
  goto L27_;

L23_:;
  // xx4 = ld xx
  Rsh_Fir_reg_xx4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L24_:;
  // r18 = dyn base1(<sym xx>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D8_:;
  // deopt 35 [xx4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_xx4_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // xx5 = force? xx4
  Rsh_Fir_reg_xx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx4_);
  // checkMissing(xx5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_xx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r20 = dyn as_integer(xx5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_xx5_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

L27_:;
  // p1 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r22 = dyn charToRaw1(p1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charToRaw1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L28() else D11()
  // L28()
  goto L28_;

D9_:;
  // deopt 38 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 45 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L3()
  // L3()
  goto L3_;

L28_:;
  // st y = r22
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym2 = ldf `is.vector`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf `is.vector` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L4_:;
  // rawToChar = ldf rawToChar
  Rsh_Fir_reg_rawToChar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L33() else D14()
  // L33()
  goto L33_;

L29_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

L30_:;
  // r23 = dyn base2(<sym y>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4()
  // L4()
  goto L4_;

D12_:;
  // deopt 49 [y]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r25 = dyn is_vector(y1, "any")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

L33_:;
  // p2 = prom<V +>{
  //   y2 = ld y;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   return y3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r27 = dyn rawToChar(p2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rawToChar, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L34() else D15()
  // L34()
  goto L34_;

D13_:;
  // deopt 53 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 57 [r27]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L4()
  // L4()
  goto L4_;

L34_:;
  // sym3 = ldf `is.raw`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf `is.raw` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L5_:;
  // sym4 = ldf `is.raw`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf `is.raw` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L35_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L37() else D16()
  // L37()
  goto L37_;

L36_:;
  // r28 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

D16_:;
  // deopt 60 [x2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L6_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L43() else D20()
  // L43()
  goto L43_;

L37_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // is_raw = ldf `is.raw` in base
  Rsh_Fir_reg_is_raw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r30 = dyn is_raw(x3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_raw, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L38() else D17()
  // L38()
  goto L38_;

L39_:;
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L41() else D18()
  // L41()
  goto L41_;

L40_:;
  // r31 = dyn base4(<sym y>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

D17_:;
  // deopt 63 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 66 [y4]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5()
  // L5()
  goto L5_;

L41_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // is_raw1 = ldf `is.raw` in base
  Rsh_Fir_reg_is_raw1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r33 = dyn is_raw1(y5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_raw1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L42() else D19()
  // L42()
  goto L42_;

L43_:;
  // p3 = prom<V +>{
  //   charToRaw2 = ldf charToRaw;
  //   r34 = dyn charToRaw2("\ufffd");
  //   sym5 = ldf `as.raw`;
  //   base5 = ldf `as.raw` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r38, r39):
  //   r41 = `==`(r38, r39);
  //   return r41;
  // L1():
  //   as_raw1 = ldf `as.raw` in base;
  //   r40 = dyn as_raw1(163.0);
  //   goto L0(r34, r40);
  // L2():
  //   r37 = dyn base5(163.0);
  //   goto L0(r34, r37);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r43 = dyn stopifnot(p3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L44() else D21()
  // L44()
  goto L44_;

D19_:;
  // deopt 69 [r33]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 73 [r43]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L6()
  // L6()
  goto L6_;

L44_:;
  // r44 = clos inner4259292012
  Rsh_Fir_reg_r44_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4259292012_, RHO, CCP);
  // st isASCII = r44
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // isASCII = ldf isASCII
  Rsh_Fir_reg_isASCII = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L45() else D22()
  // L45()
  goto L45_;

D22_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p4 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r46 = dyn isASCII(p4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isASCII, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L46() else D23()
  // L46()
  goto L46_;

D23_:;
  // deopt 80 [r46]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L46_:;
  // isASCII1 = ldf isASCII
  Rsh_Fir_reg_isASCII1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L47() else D24()
  // L47()
  goto L47_;

D24_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // r47 = dyn isASCII1("\ufffd25.63")
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isASCII1_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L48() else D25()
  // L48()
  goto L48_;

D25_:;
  // deopt 84 [r47]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L48_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx2_;
  SEXP Rsh_Fir_reg_xx3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return xx3
  return Rsh_Fir_reg_xx3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return y3
  return Rsh_Fir_reg_y3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_charToRaw2_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_as_raw1_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // charToRaw2 = ldf charToRaw
  Rsh_Fir_reg_charToRaw2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // r34 = dyn charToRaw2("\ufffd")
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charToRaw2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names17, CCP, RHO);
  // sym5 = ldf `as.raw`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base5 = ldf `as.raw` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r41 = `==`(r38, r39)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args40);
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // as_raw1 = ldf `as.raw` in base
  Rsh_Fir_reg_as_raw1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r40 = dyn as_raw1(163.0)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raw1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r34, r40)
  // L0(r34, r40)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // r37 = dyn base5(163.0)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r34, r37)
  // L0(r34, r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_function_inner1649981529_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1649981529 dynamic dispatch ([length])

  return Rsh_Fir_user_version_inner1649981529_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1649981529_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1649981529 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1649981529/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_length_isMissing;
  SEXP Rsh_Fir_reg_length_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_length = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // length_isMissing = missing.0(length)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_length;
  Rsh_Fir_reg_length_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args47);
  // if length_isMissing then L0(0) else L0(length)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_length_isMissing)) {
  // L0(0)
    Rsh_Fir_reg_length_orDefault = Rsh_const(CCP, 24);
    goto L0_;
  } else {
  // L0(length)
    Rsh_Fir_reg_length_orDefault = Rsh_Fir_reg_length;
    goto L0_;
  }

L0_:;
  // st length = length_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_length_orDefault, RHO);
  (void)(Rsh_Fir_reg_length_orDefault);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L2_:;
  // length1 = ld length
  Rsh_Fir_reg_length1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<lang vector("raw", length)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 [length1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_length1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L4_:;
  // length2 = force? length1
  Rsh_Fir_reg_length2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length1_);
  // checkMissing(length2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_length2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r2 = dyn vector("raw", length2)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L1_;
}
SEXP Rsh_Fir_user_function_inner4259292012_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4259292012 dynamic dispatch ([txt])

  return Rsh_Fir_user_version_inner4259292012_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4259292012_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4259292012 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4259292012/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_txt;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_charToRaw1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_as_raw1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r11_;

  // Bind parameters
  Rsh_Fir_reg_txt = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st txt = txt
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_txt, RHO);
  (void)(Rsh_Fir_reg_txt);
  // sym = ldf all
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base = ldf all in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_2;

L2_:;
  // charToRaw = ldf charToRaw
  Rsh_Fir_reg_charToRaw1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<lang `<=`(charToRaw(txt), as.raw(127.0))>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   txt1 = ld txt;
  //   txt2 = force? txt1;
  //   checkMissing(txt2);
  //   return txt2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4259292012_, 0, NULL, CCP, RHO);
  // r3 = dyn charToRaw(p)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charToRaw1, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L5_:;
  // sym1 = ldf `as.raw`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf `as.raw` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L1_:;
  // r10 = `<=`(r7, r8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args57);
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r11 = dyn all(r10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

L6_:;
  // as_raw = ldf `as.raw` in base
  Rsh_Fir_reg_as_raw1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r9 = dyn as_raw(127.0)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raw1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L7_:;
  // r6 = dyn base1(127.0)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L1(r3, r6)
  // L1(r3, r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_1;
  goto L1_;

D2_:;
  // deopt 9 [r3, r9]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 12 [r11]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L1(r3, r9)
  // L1(r3, r9)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_1;
  goto L1_;

L9_:;
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4259292012_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_txt1_;
  SEXP Rsh_Fir_reg_txt2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4259292012/0: expected 0, got %d", NCAPTURES);

  // txt1 = ld txt
  Rsh_Fir_reg_txt1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // txt2 = force? txt1
  Rsh_Fir_reg_txt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt1_);
  // checkMissing(txt2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_txt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return txt2
  return Rsh_Fir_reg_txt2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
