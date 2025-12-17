#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_r34_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c1 then L11() else L12(1.0, l, 1.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L12(1.0, l, 1.0, l)
    Rsh_Fir_reg_r8_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
    goto L12_;
  }

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r5 = dyn list(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L2_:;
  // c4 = `is.object`(l10)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args3);
  // if c4 then L21() else L22(r18, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L21()
    goto L21_;
  } else {
  // L22(r18, l10)
    Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r18_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l10_;
    goto L22_;
  }

L3_:;
  // r28 = `-`(<missing>, r26)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args4);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r29 = dyn ___(dx8, r25, r28)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args5[2] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r24, l13, r29)
  // L2(r24, l13, r29)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r29_;
  goto L2_;

L4_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // r = dyn base[y](<lang c(0.0, 0.0, 0.0, 0.0)>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r;
  goto L0_;

L6_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r4 = dyn c(0.0, 0.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r2 = dyn base1(0.0, 0.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

D1_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L10_:;
  // c2 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c2 then L14() else L15(r12, l6, dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L14()
    goto L14_;
  } else {
  // L15(r12, l6, dx1)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r12_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L15_;
  }

L11_:;
  // dr = tryDispatchBuiltin.1("$", l)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L13() else L12(1.0, l, 1.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L13()
    goto L13_;
  } else {
  // L12(1.0, l, 1.0, dr)
    Rsh_Fir_reg_r8_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr;
    goto L12_;
  }

L12_:;
  // r14 = `$`(l4, <sym y>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args13);
  // goto L10(r8, l3, r9, r14)
  // L10(r8, l3, r9, r14)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L10_;

L13_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L10(1.0, l, 1.0, dx)
  // L10(1.0, l, 1.0, dx)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 2);
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

L14_:;
  // dr2 = tryDispatchBuiltin.0("[<-", dx1, r13)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args15);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc1 then L16() else L15(r12, l6, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L16()
    goto L16_;
  } else {
  // L15(r12, l6, dr2)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r12_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L15_;
  }

L15_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L16_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L2(r12, l6, dx4)
  // L2(r12, l6, dx4)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L2_;

L17_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r27 = dyn c3(1.0, 2.0)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r23 = dyn base2(1.0, 2.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r16, l8, dx3, r13, r23)
  // L3(r16, l8, dx3, r13, r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r23_;
  goto L3_;

D2_:;
  // deopt 25 [r16, l8, dx3, r13, r27]
  SEXP Rsh_Fir_array_deopt_stack2[5];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack2[4] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(25, 5, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L3(r16, l8, dx3, r13, r27)
  // L3(r16, l8, dx3, r13, r27)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L3_;

L20_:;
  // st x = dx10
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;

L21_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l10, dx5)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args21);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc2 then L23() else L22(r18, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L23()
    goto L23_;
  } else {
  // L22(r18, dr4)
    Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r18_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr4_;
    goto L22_;
  }

L22_:;
  // r34 = `$<-`(l15, <sym y>, dx5)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args23);
  // goto L20(r31, r34)
  // L20(r31, r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r34_;
  goto L20_;

L23_:;
  // dx9 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L20(r18, dx9)
  // L20(r18, dx9)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L20_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
