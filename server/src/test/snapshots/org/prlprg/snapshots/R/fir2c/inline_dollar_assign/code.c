#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_b;  // b
  SEXP Rsh_Fir_reg_b1_;  // b1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_b2_;  // b2
  SEXP Rsh_Fir_reg_b3_;  // b3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r20_;  // r20

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(1.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(1.0, l)
    Rsh_Fir_reg_r1_ = Rsh_const(CCP, 1);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L2_;
  }

L0_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // l3 = ld x
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // c1 = `is.object`(l3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L5() else L6(2.0, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L5()
    goto L5_;
  } else {
  // L6(2.0, l3)
    Rsh_Fir_reg_r6_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L6_;
  }

L1_:;
  // dr = tryDispatchBuiltin.0("$<-", l, 1.0)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(1.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(1.0, dr)
    Rsh_Fir_reg_r1_ = Rsh_const(CCP, 1);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r4 = `$<-`(l2, <sym y>, 1.0)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L4_:;
  // st x = dx3
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l6 = ld a
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L5_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l3, 2.0)
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args6);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if dc1 then L7() else L6(2.0, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L7()
    goto L7_;
  } else {
  // L6(2.0, dr2)
    Rsh_Fir_reg_r6_ = Rsh_const(CCP, 2);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L6_;
  }

L6_:;
  // r9 = `$<-`(l5, <sym z>, 2.0)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L4_;

L7_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D0_:;
  // deopt 13 [3.0, l6, 3.0]
  SEXP Rsh_Fir_array_deopt_stack[3];
  Rsh_Fir_array_deopt_stack[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack[2] = Rsh_const(CCP, 8);
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   b = ld b;
  //   b1 = force? b;
  //   checkMissing(b1);
  //   return b1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, CCP, RHO);
  // r11 = dyn __(3.0, NULL, p)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 16 [3.0, l6, 3.0, r11]
  SEXP Rsh_Fir_array_deopt_stack1[4];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack1[3] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(16, 4, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // c2 = `is.object`(r11)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c2 then L11() else L12(3.0, l6, r11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L11()
    goto L11_;
  } else {
  // L12(3.0, l6, r11)
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 8);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r11_;
    goto L12_;
  }

L10_:;
  // ____ = ldf `::<-`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L11_:;
  // dr4 = tryDispatchBuiltin.0("$<-", r11, 3.0)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args13);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc2 then L13() else L12(3.0, l6, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L13()
    goto L13_;
  } else {
  // L12(3.0, l6, dr4)
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 8);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_dr4_;
    goto L12_;
  }

L12_:;
  // r18 = `$<-`(r15, <sym c>, 3.0)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L10(r14, l8, r18)
  // L10(r14, l8, r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r18_;
  goto L10_;

L13_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L10(3.0, l6, dx4)
  // L10(3.0, l6, dx4)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 8);
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

D2_:;
  // deopt 19 [r17, l10, dx5]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // p1 = prom<V +>{
  //   b2 = ld b;
  //   b3 = force? b2;
  //   checkMissing(b3);
  //   return b3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, CCP, RHO);
  // r20 = dyn ____(l10, NULL, p1, dx5)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args18[3] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 22 [r17, r20]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // st a = r20
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO) {
  // b = ld b
  Rsh_Fir_reg_b = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // b1 = force? b
  Rsh_Fir_reg_b1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b);
  // checkMissing(b1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_b1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return b1
  return Rsh_Fir_reg_b1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO) {
  // b2 = ld b
  Rsh_Fir_reg_b2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // b3 = force? b2
  Rsh_Fir_reg_b3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b2_);
  // checkMissing(b3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_b3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return b3
  return Rsh_Fir_reg_b3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
