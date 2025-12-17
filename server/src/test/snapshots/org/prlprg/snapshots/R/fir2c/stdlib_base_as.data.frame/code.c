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
SEXP Rsh_Fir_user_function_inner3069603236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3069603236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3069603236_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_LETTERS;
  SEXP Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_LETTERS3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_L0_;
  SEXP Rsh_Fir_reg_L1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_as_data_frame;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_as_data_frame1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_as_data_frame2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_as_data_frame3_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_as_data_frame4_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_as_data_frame5_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_names5_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_as_data_frame6_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_names6_;
  SEXP Rsh_Fir_reg_r58_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3069603236
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3069603236_, RHO, CCP);
  // st `as.data.frame` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L0_:;
  // st L0 = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // L0 = ld L0
  Rsh_Fir_reg_L0_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L10_:;
  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r1 = dyn base(<lang `[`(LETTERS, `:`(1.0, 7.0))>, <lang c(4, `:`(2.0, 3.0), `:`(5.0, 7.0), 1)>)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 5 [LETTERS]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_LETTERS;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 23 [L0]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_L0_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c = `is.object`(LETTERS1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args3);
  // if c then L13() else L14(LETTERS1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L14(LETTERS1)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_LETTERS1_;
    goto L14_;
  }

L20_:;
  // L1 = force? L0
  Rsh_Fir_reg_L1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L0_);
  // checkMissing(L1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_L1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // st L = L1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_L1_, RHO);
  (void)(Rsh_Fir_reg_L1_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L1_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L3_:;
  // st nms = r9
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // l = ld L
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L13_:;
  // dr = tryDispatchBuiltin.1("[", LETTERS1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L15() else L14(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_dr;
    goto L14_;
  }

L14_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r3 = dyn __(LETTERS3, <int 1, 2, 3, 4, 5, 6, 7>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_LETTERS3_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L1_;

L21_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r10 = dyn c2("nam", "age")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r8 = dyn base2("nam", "age")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D4_:;
  // deopt 31 [r10]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 34 [r9, l, r9]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r7 = dyn list(dx1, r5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L15_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L16_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn c1(4, <int 2, 3>, <int 5, 6, 7>, 1)
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 4, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L17_:;
  // r4 = dyn base1(4, <lang `:`(2.0, 3.0)>, <lang `:`(5.0, 7.0)>, 1)
  SEXP Rsh_Fir_array_args15[4];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

L23_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L3_;

L24_:;
  // r11 = dyn names__(l, NULL, r9)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

D1_:;
  // deopt 19 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 21 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 36 [r9, r11]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L19_:;
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r7_;
  goto L0_;

L25_:;
  // st L = r11
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

D7_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p = prom<V +>{
  //   L2 = ld L0;
  //   L3 = force? L2;
  //   checkMissing(L3);
  //   return L3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   nms = ld nms;
  //   nms1 = force? nms;
  //   checkMissing(nms1);
  //   return nms1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r14 = dyn as_data_frame[, `col.names`](p, p1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 43 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // st d0 = r14
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // as_data_frame1 = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

D9_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p2 = prom<V +>{
  //   L4 = ld L;
  //   L5 = force? L4;
  //   checkMissing(L5);
  //   return L5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r16 = dyn as_data_frame1(p2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 48 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // st d1 = r16
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p3 = prom<V +>{
  //   sym3 = ldf identical;
  //   base3 = ldf identical in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   d0 = ld d0;
  //   d1 = force? d0;
  //   checkMissing(d1);
  //   d2 = ld d1;
  //   d3 = force? d2;
  //   checkMissing(d3);
  //   identical = ldf identical in base;
  //   r19 = dyn identical(d1, d3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base3(<sym d0>, <sym d1>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r21 = dyn stopifnot(p3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 53 [r21]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard4 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L4_:;
  // st L = r23
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // l1 = ld L
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L35() else D14()
  // L35()
  goto L35_;

L32_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r24 = dyn list1(<int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L34() else D13()
  // L34()
  goto L34_;

L33_:;
  // r22 = dyn base4[A](<lang `:`(1.0, 4.0)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L4(r22)
  // L4(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L4_;

D13_:;
  // deopt 60 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 65 [NA_LGL, l1, NA_LGL]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 32);
  Rsh_Fir_deopt(65, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L4(r24)
  // L4(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L4_;

L35_:;
  // r25 = dyn names__1(l1, NULL, NA_LGL)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L36() else D15()
  // L36()
  goto L36_;

D15_:;
  // deopt 67 [NA_LGL, r25]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L36_:;
  // st L = r25
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard5 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L5_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard6 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L37_:;
  // as_data_frame2 = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

L38_:;
  // r26 = dyn base5(<lang `<-`(dL, as.data.frame(L))>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

D16_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard8 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L39_:;
  // p4 = prom<V +>{
  //   L6 = ld L;
  //   L7 = force? L6;
  //   checkMissing(L7);
  //   return L7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r29 = dyn as_data_frame2(p4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L40() else D17()
  // L40()
  goto L40_;

L42_:;
  // as_data_frame3 = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L44() else D19()
  // L44()
  goto L44_;

L43_:;
  // r31 = dyn base6(<lang `<-`(dL1, as.data.frame(L, col.names=names(L)))>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

D17_:;
  // deopt 74 [r29]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // sym9 = ldf names
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base9 = ldf names in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard9 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L40_:;
  // st dL = r29
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r30 = dyn names(r29)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L41() else D18()
  // L41()
  goto L41_;

L44_:;
  // p5 = prom<V +>{
  //   L8 = ld L;
  //   L9 = force? L8;
  //   checkMissing(L9);
  //   return L9;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sym7 = ldf names;
  //   base7 = ldf names in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   L10 = ld L;
  //   L11 = force? L10;
  //   checkMissing(L11);
  //   names1 = ldf names in base;
  //   r36 = dyn names1(L11);
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base7(<sym L>);
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r38 = dyn as_data_frame3[, `col.names`](p5, p6)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame3_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L45() else D20()
  // L45()
  goto L45_;

L47_:;
  // as_data_frame4 = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L49() else D22()
  // L49()
  goto L49_;

L48_:;
  // r40 = dyn base8(<lang `<-`(dL1., as.data.frame(L, check.names=FALSE))>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L7()
  // L7()
  goto L7_;

D18_:;
  // deopt 77 [r30]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 85 [r38]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // sym11 = ldf names
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base11 = ldf names in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard11 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L41_:;
  // goto L5()
  // L5()
  goto L5_;

L45_:;
  // st dL1 = r38
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r39 = dyn names2(r38)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L46() else D21()
  // L46()
  goto L46_;

L49_:;
  // p7 = prom<V +>{
  //   L12 = ld L;
  //   L13 = force? L12;
  //   checkMissing(L13);
  //   return L13;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r43 = dyn as_data_frame4[, `check.names`](p7, FALSE)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame4_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L50() else D23()
  // L50()
  goto L50_;

L52_:;
  // as_data_frame5 = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L54() else D25()
  // L54()
  goto L54_;

L53_:;
  // r45 = dyn base9(<lang `<-`(dL2, as.data.frame(L, col.names=names(L), check.names=FALSE))>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L8()
  // L8()
  goto L8_;

D21_:;
  // deopt 88 [r39]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 96 [r43]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r55
  return Rsh_Fir_reg_r55_;

L46_:;
  // goto L6()
  // L6()
  goto L6_;

L50_:;
  // st `dL1.` = r43
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // names3 = ldf names in base
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r44 = dyn names3(r43)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L51() else D24()
  // L51()
  goto L51_;

L54_:;
  // p8 = prom<V +>{
  //   L14 = ld L;
  //   L15 = force? L14;
  //   checkMissing(L15);
  //   return L15;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym10 = ldf names;
  //   base10 = ldf names in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r49):
  //   return r49;
  // L1():
  //   L16 = ld L;
  //   L17 = force? L16;
  //   checkMissing(L17);
  //   names4 = ldf names in base;
  //   r50 = dyn names4(L17);
  //   goto L0(r50);
  // L2():
  //   r48 = dyn base10(<sym L>);
  //   goto L0(r48);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r52 = dyn as_data_frame5[, `col.names`, `check.names`](p8, p9, FALSE)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names30[2] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame5_, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L55() else D26()
  // L55()
  goto L55_;

L57_:;
  // as_data_frame6 = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L59() else D28()
  // L59()
  goto L59_;

L58_:;
  // r54 = dyn base11(<lang `<-`(dLn, as.data.frame(L, new.names=TRUE, check.names=FALSE))>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L9(r54)
  // L9(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L9_;

D24_:;
  // deopt 99 [r44]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 109 [r52]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L7()
  // L7()
  goto L7_;

L55_:;
  // st dL2 = r52
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // names5 = ldf names in base
  Rsh_Fir_reg_names5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r53 = dyn names5(r52)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names5_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L56() else D27()
  // L56()
  goto L56_;

L59_:;
  // p10 = prom<V +>{
  //   L18 = ld L;
  //   L19 = force? L18;
  //   checkMissing(L19);
  //   return L19;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r57 = dyn as_data_frame6[, `new.names`, `check.names`](p10, TRUE, FALSE)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_arg_names33[2] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame6_, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L60() else D29()
  // L60()
  goto L60_;

D27_:;
  // deopt 112 [r53]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 122 [r57]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L8()
  // L8()
  goto L8_;

L60_:;
  // st dLn = r57
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // names6 = ldf names in base
  Rsh_Fir_reg_names6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r58 = dyn names6(r57)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names6_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L61() else D30()
  // L61()
  goto L61_;

D30_:;
  // deopt 125 [r58]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L9(r58)
  // L9(r58)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r58_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L2_;
  SEXP Rsh_Fir_reg_L3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L2 = ld L0
  Rsh_Fir_reg_L2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // L3 = force? L2
  Rsh_Fir_reg_L3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L2_);
  // checkMissing(L3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_L3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return L3
  return Rsh_Fir_reg_L3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nms;
  SEXP Rsh_Fir_reg_nms1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nms = ld nms
  Rsh_Fir_reg_nms = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // nms1 = force? nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms);
  // checkMissing(nms1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_nms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return nms1
  return Rsh_Fir_reg_nms1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L4_;
  SEXP Rsh_Fir_reg_L5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L4 = ld L
  Rsh_Fir_reg_L4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L5 = force? L4
  Rsh_Fir_reg_L5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L4_);
  // checkMissing(L5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_L5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return L5
  return Rsh_Fir_reg_L5_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_d0_;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // d0 = ld d0
  Rsh_Fir_reg_d0_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // d1 = force? d0
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d0_);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // d2 = ld d1
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r19 = dyn identical(d1, d3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args25[9];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args25[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[9];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_array_arg_names10[7] = R_MissingArg;
  Rsh_Fir_array_arg_names10[8] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base3(<sym d0>, <sym d1>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L6_;
  SEXP Rsh_Fir_reg_L7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L6 = ld L
  Rsh_Fir_reg_L6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L7 = force? L6
  Rsh_Fir_reg_L7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L6_);
  // checkMissing(L7)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_L7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return L7
  return Rsh_Fir_reg_L7_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L8_;
  SEXP Rsh_Fir_reg_L9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L8 = ld L
  Rsh_Fir_reg_L8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L9 = force? L8
  Rsh_Fir_reg_L9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L8_);
  // checkMissing(L9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_L9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return L9
  return Rsh_Fir_reg_L9_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_L10_;
  SEXP Rsh_Fir_reg_L11_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
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
  // L10 = ld L
  Rsh_Fir_reg_L10_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L11 = force? L10
  Rsh_Fir_reg_L11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L10_);
  // checkMissing(L11)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_L11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r36 = dyn names1(L11)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_L11_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base7(<sym L>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L12_;
  SEXP Rsh_Fir_reg_L13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L12 = ld L
  Rsh_Fir_reg_L12_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L13 = force? L12
  Rsh_Fir_reg_L13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L12_);
  // checkMissing(L13)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_L13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return L13
  return Rsh_Fir_reg_L13_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L14_;
  SEXP Rsh_Fir_reg_L15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L14 = ld L
  Rsh_Fir_reg_L14_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L15 = force? L14
  Rsh_Fir_reg_L15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L14_);
  // checkMissing(L15)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_L15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return L15
  return Rsh_Fir_reg_L15_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_L16_;
  SEXP Rsh_Fir_reg_L17_;
  SEXP Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf names
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base10 = ldf names in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r49
  return Rsh_Fir_reg_r49_;

L1_:;
  // L16 = ld L
  Rsh_Fir_reg_L16_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L17 = force? L16
  Rsh_Fir_reg_L17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L16_);
  // checkMissing(L17)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_L17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // names4 = ldf names in base
  Rsh_Fir_reg_names4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r50 = dyn names4(L17)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_L17_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names4_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L0_;

L2_:;
  // r48 = dyn base10(<sym L>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_L18_;
  SEXP Rsh_Fir_reg_L19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // L18 = ld L
  Rsh_Fir_reg_L18_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // L19 = force? L18
  Rsh_Fir_reg_L19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L18_);
  // checkMissing(L19)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_L19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return L19
  return Rsh_Fir_reg_L19_;
}
SEXP Rsh_Fir_user_function_inner3069603236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3069603236 dynamic dispatch ([x, `row.names`, optional, `...`])

  return Rsh_Fir_user_version_inner3069603236_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3069603236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3069603236 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3069603236/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_row_names;
  SEXP Rsh_Fir_reg_optional;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_row_names_isMissing;
  SEXP Rsh_Fir_reg_row_names_orDefault;
  SEXP Rsh_Fir_reg_optional_isMissing;
  SEXP Rsh_Fir_reg_optional_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_as_data_frame1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r11_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_row_names = PARAMS[1];
  Rsh_Fir_reg_optional = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // row_names_isMissing = missing.0(row_names)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_row_names;
  Rsh_Fir_reg_row_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args65);
  // if row_names_isMissing then L0(NULL) else L0(row_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_row_names_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_row_names_orDefault = Rsh_const(CCP, 21);
    goto L0_;
  } else {
  // L0(row_names)
    Rsh_Fir_reg_row_names_orDefault = Rsh_Fir_reg_row_names;
    goto L0_;
  }

L0_:;
  // st `row.names` = row_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_row_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_row_names_orDefault);
  // optional_isMissing = missing.0(optional)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_optional;
  Rsh_Fir_reg_optional_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args66);
  // if optional_isMissing then L1(FALSE) else L1(optional)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_optional_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_optional_orDefault = Rsh_const(CCP, 28);
    goto L1_;
  } else {
  // L1(optional)
    Rsh_Fir_reg_optional_orDefault = Rsh_Fir_reg_optional;
    goto L1_;
  }

L1_:;
  // st optional = optional_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_optional_orDefault, RHO);
  (void)(Rsh_Fir_reg_optional_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L2_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c1 then L9() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L9()
    goto L9_;
  } else {
  // L3()
    goto L3_;
  }

L6_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 1 [x1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L3_:;
  // sym2 = ldf UseMethod
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base2 = ldf UseMethod in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L8_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c = `==`(x2, NULL)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args72);
  // goto L2(c)
  // L2(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L2_;

L9_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_1;

L10_:;
  // p = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   list = ldf list in base;
  //   r4 = dyn list();
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base1();
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_, 0, NULL, CCP, RHO);
  // r6 = dyn as_data_frame(p)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame1, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L14_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r11 = dyn UseMethod("as.data.frame")
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_1;
  goto L5_;

L15_:;
  // r9 = dyn base2("as.data.frame")
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L5_;

D2_:;
  // deopt 7 [r6]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_1;
}
SEXP Rsh_Fir_user_promise_inner3069603236_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_list1;
  SEXP Rsh_Fir_reg_r4_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_1;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r4 = dyn list()
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_1;
  goto L0_;

L2_:;
  // r2 = dyn base1()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
