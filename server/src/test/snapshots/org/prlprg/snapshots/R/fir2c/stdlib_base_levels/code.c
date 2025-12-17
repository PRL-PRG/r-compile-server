#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_gl;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_levels;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_levels__;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_levels1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_levels__1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_gl1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_levels__2_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_gl2_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_levels__3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_gl3_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_levels__4_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_z6_;
  SEXP Rsh_Fir_reg_z7_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_levels__5_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_factor1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_l14_;
  SEXP Rsh_Fir_reg_levels__6_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2501545716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st levels = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // gl = ldf gl
  Rsh_Fir_reg_gl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r1 = dyn gl(2.0, 4.0, 8.0)
  SEXP Rsh_Fir_array_args[3];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gl, 3, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 8 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // levels = ldf levels
  Rsh_Fir_reg_levels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D2_:;
  // deopt 13 ["low", l, "low"]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_const(CCP, 6);
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // r2 = dyn levels("low", NULL)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 15 ["low", l, "low", r2]
  SEXP Rsh_Fir_array_deopt_stack2[4];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(15, 4, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // c = `is.object`(r2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L12() else L13("low", l, r2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L13("low", l, r2)
    Rsh_Fir_reg_r5_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r2_;
    goto L13_;
  }

L0_:;
  // levels__ = ldf `levels<-`
  Rsh_Fir_reg_levels__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L12_:;
  // dr = tryDispatchBuiltin.0("[<-", r2, "low")
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args3);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13("low", l, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13("low", l, dr)
    Rsh_Fir_reg_r5_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r6_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r9 = dyn ___(r6, "low", 1.0)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5, l2, r9)
  // L0(r5, l2, r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L0_;

D4_:;
  // deopt 20 [r8, l4, dx1]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0("low", l, dx)
  // L0("low", l, dx)
  Rsh_Fir_reg_r8_ = Rsh_const(CCP, 6);
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L15_:;
  // r10 = dyn levels__(l4, NULL, dx1)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels__, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 22 [r8, r10]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // st x = r10
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // l5 = ld x
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // levels1 = ldf levels
  Rsh_Fir_reg_levels1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 27 ["high", l5, "high"]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_const(CCP, 12);
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // r11 = dyn levels1("high", NULL)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 29 ["high", l5, "high", r11]
  SEXP Rsh_Fir_array_deopt_stack6[4];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(29, 4, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // c1 = `is.object`(r11)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args9);
  // if c1 then L19() else L20("high", l5, r11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20("high", l5, r11)
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r11_;
    goto L20_;
  }

L1_:;
  // levels__1 = ldf `levels<-`
  Rsh_Fir_reg_levels__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L19_:;
  // dr2 = tryDispatchBuiltin.0("[<-", r11, "high")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args10);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc1 then L21() else L20("high", l5, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L21()
    goto L21_;
  } else {
  // L20("high", l5, dr2)
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_dr2_;
    goto L20_;
  }

L20_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r18 = dyn ___1(r15, "high", 2.0)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r14, l7, r18)
  // L1(r14, l7, r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L1_;

D8_:;
  // deopt 34 [r17, l9, dx3]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L1("high", l5, dx2)
  // L1("high", l5, dx2)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 12);
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;

L22_:;
  // r19 = dyn levels__1(l9, NULL, dx3)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels__1_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L23() else D9()
  // L23()
  goto L23_;

D9_:;
  // deopt 36 [r17, r19]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L23_:;
  // st x = r19
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L24() else D10()
  // L24()
  goto L24_;

D10_:;
  // deopt 38 [x]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // gl1 = ldf gl
  Rsh_Fir_reg_gl1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L25() else D11()
  // L25()
  goto L25_;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r20 = dyn gl1(2.0, 4.0, 8.0)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gl1_, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

D12_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L26_:;
  // st y = r20
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L2_:;
  // l10 = ld y
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // levels__2 = ldf `levels<-`
  Rsh_Fir_reg_levels__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L30() else D14()
  // L30()
  goto L30_;

L27_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r23 = dyn c2("low", "high")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L29() else D13()
  // L29()
  goto L29_;

L28_:;
  // r21 = dyn base("low", "high")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L2(r21)
  // L2(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L2_;

D13_:;
  // deopt 52 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 54 [r22, l10, r22]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(54, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L2(r23)
  // L2(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L2_;

L30_:;
  // r24 = dyn levels__2(l10, NULL, r22)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels__2_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L31() else D15()
  // L31()
  goto L31_;

D15_:;
  // deopt 56 [r22, r24]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L31_:;
  // st y = r24
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L32() else D16()
  // L32()
  goto L32_;

D16_:;
  // deopt 58 [y]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L32_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // gl2 = ldf gl
  Rsh_Fir_reg_gl2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L33() else D17()
  // L33()
  goto L33_;

D17_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r26):
  //   return r26;
  // L1():
  //   c3 = ldf c in base;
  //   r27 = dyn c3("apple", "salad", "orange");
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base1("apple", "salad", "orange");
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r29 = dyn gl2[, , , labels](3.0, 2.0, 12.0, p)
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args25[3] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gl2_, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L34() else D18()
  // L34()
  goto L34_;

D18_:;
  // deopt 67 [r29]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L34_:;
  // st z = r29
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L35() else D19()
  // L35()
  goto L35_;

D19_:;
  // deopt 69 [z]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L35_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L3_:;
  // l11 = ld z
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // levels__3 = ldf `levels<-`
  Rsh_Fir_reg_levels__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L39() else D21()
  // L39()
  goto L39_;

L36_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r32 = dyn c4("fruit", "veg", "fruit")
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L38() else D20()
  // L38()
  goto L38_;

L37_:;
  // r30 = dyn base2("fruit", "veg", "fruit")
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L3(r30)
  // L3(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L3_;

D20_:;
  // deopt 77 [r32]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 79 [r31, l11, r31]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(79, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L3(r32)
  // L3(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L3_;

L39_:;
  // r33 = dyn levels__3(l11, NULL, r31)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels__3_, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L40() else D22()
  // L40()
  goto L40_;

D22_:;
  // deopt 81 [r31, r33]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L40_:;
  // st z = r33
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L41() else D23()
  // L41()
  goto L41_;

D23_:;
  // deopt 83 [z2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L41_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // gl3 = ldf gl
  Rsh_Fir_reg_gl3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L42() else D24()
  // L42()
  goto L42_;

D24_:;
  // deopt 86 []
  Rsh_Fir_deopt(86, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p1 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   c5 = ldf c in base;
  //   r36 = dyn c5("apple", "salad", "orange");
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base3("apple", "salad", "orange");
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r38 = dyn gl3[, , , labels](3.0, 2.0, 12.0, p1)
  SEXP Rsh_Fir_array_args35[4];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args35[3] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gl3_, 4, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L43() else D25()
  // L43()
  goto L43_;

D25_:;
  // deopt 92 [r38]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L43_:;
  // st z = r38
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L44() else D26()
  // L44()
  goto L44_;

D26_:;
  // deopt 94 [z4]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L44_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard4 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L4_:;
  // l12 = ld z
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // levels__4 = ldf `levels<-`
  Rsh_Fir_reg_levels__4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L51() else D29()
  // L51()
  goto L51_;

L45_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard5 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L46_:;
  // r39 = dyn base4[fruit, veg](<lang c("apple", "orange")>, "salad")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L4(r39)
  // L4(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L4_;

D29_:;
  // deopt 110 [r40, l12, r40]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(110, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L5_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r44 = dyn list(r42, "salad")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L50() else D28()
  // L50()
  goto L50_;

L47_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r43 = dyn c6("apple", "orange")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L49() else D27()
  // L49()
  goto L49_;

L48_:;
  // r41 = dyn base5("apple", "orange")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L5(r41)
  // L5(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L5_;

L51_:;
  // r45 = dyn levels__4(l12, NULL, r40)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels__4_, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L52() else D30()
  // L52()
  goto L52_;

D27_:;
  // deopt 103 [r43]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 108 [r44]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 112 [r40, r45]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L5(r43)
  // L5(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L5_;

L50_:;
  // goto L4(r44)
  // L4(r44)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r44_;
  goto L4_;

L52_:;
  // st z = r45
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // z6 = ld z
  Rsh_Fir_reg_z6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L53() else D31()
  // L53()
  goto L53_;

D31_:;
  // deopt 114 [z6]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_z6_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L53_:;
  // z7 = force? z6
  Rsh_Fir_reg_z7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z6_);
  // checkMissing(z7)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_z7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L54() else D32()
  // L54()
  goto L54_;

D32_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p2 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r47):
  //   return r47;
  // L1():
  //   c7 = ldf c in base;
  //   r48 = dyn c7("a", "b");
  //   goto L0(r48);
  // L2():
  //   r46 = dyn base6("a", "b");
  //   goto L0(r46);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r50 = dyn factor(p2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L55() else D33()
  // L55()
  goto L55_;

D33_:;
  // deopt 119 [r50]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L55_:;
  // st f = r50
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard7 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L6_:;
  // l13 = ld f
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // levels__5 = ldf `levels<-`
  Rsh_Fir_reg_levels__5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L59() else D35()
  // L59()
  goto L59_;

L56_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r53 = dyn c8("c", "a", "b")
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 3, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L58() else D34()
  // L58()
  goto L58_;

L57_:;
  // r51 = dyn base7("c", "a", "b")
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L6(r51)
  // L6(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L6_;

D34_:;
  // deopt 127 [r53]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 129 [r52, l13, r52]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(129, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L6(r53)
  // L6(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L6_;

L59_:;
  // r54 = dyn levels__5(l13, NULL, r52)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels__5_, 3, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L60() else D36()
  // L60()
  goto L60_;

D36_:;
  // deopt 131 [r52, r54]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(131, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L60_:;
  // st f = r54
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L61() else D37()
  // L61()
  goto L61_;

D37_:;
  // deopt 133 [f]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_f;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L61_:;
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // factor1 = ldf factor
  Rsh_Fir_reg_factor1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L62() else D38()
  // L62()
  goto L62_;

D38_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // p3 = prom<V +>{
  //   sym8 = ldf c;
  //   base8 = ldf c in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r56):
  //   return r56;
  // L1():
  //   c9 = ldf c in base;
  //   r57 = dyn c9("a", "b");
  //   goto L0(r57);
  // L2():
  //   r55 = dyn base8("a", "b");
  //   goto L0(r55);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r59 = dyn factor1(p3)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L63() else D39()
  // L63()
  goto L63_;

D39_:;
  // deopt 138 [r59]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L63_:;
  // st f = r59
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // sym9 = ldf list
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base9 = ldf list in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard9 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L7_:;
  // l14 = ld f
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // levels__6 = ldf `levels<-`
  Rsh_Fir_reg_levels__6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L67() else D41()
  // L67()
  goto L67_;

L64_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r62 = dyn list1("C", "a", "b")
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L66() else D40()
  // L66()
  goto L66_;

L65_:;
  // r60 = dyn base9[C, A, B]("C", "a", "b")
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L7(r60)
  // L7(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L7_;

D40_:;
  // deopt 149 [r62]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 151 [r61, l14, r61]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(151, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L7(r62)
  // L7(r62)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L7_;

L67_:;
  // r63 = dyn levels__6(l14, NULL, r61)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels__6_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L68() else D42()
  // L68()
  goto L68_;

D42_:;
  // deopt 153 [r61, r63]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L68_:;
  // st f = r63
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L69() else D43()
  // L69()
  goto L69_;

D43_:;
  // deopt 155 [f2]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L69_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r26
  return Rsh_Fir_reg_r26_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r27 = dyn c3("apple", "salad", "orange")
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // r25 = dyn base1("apple", "salad", "orange")
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r36 = dyn c5("apple", "salad", "orange")
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base3("apple", "salad", "orange")
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r48 = dyn c7("a", "b")
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // r46 = dyn base6("a", "b")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r57_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r56
  return Rsh_Fir_reg_r56_;

L1_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r57 = dyn c9("a", "b")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L0_;

L2_:;
  // r55 = dyn base8("a", "b")
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r2 = dyn UseMethod("levels")
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("levels")
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
