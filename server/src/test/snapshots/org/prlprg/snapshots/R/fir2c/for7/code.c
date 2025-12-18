#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (!TYPEOF(PARAMS_LIST) == VECSXP) Rsh_error("FIŘ expected a list for params");
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
  SEXP Rsh_Fir_reg_as_raw;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_s2_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_s5_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_s6_;
  SEXP Rsh_Fir_reg_s7_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // sym = ldf `as.raw`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `as.raw` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // s = toForSeq(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args2);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 3);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L5_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r = dyn base(<lang c(1.0, 2.0, 3.0)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r;
  goto L0_;

L1_:;
  // as_raw = ldf `as.raw` in base
  Rsh_Fir_reg_as_raw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r5 = dyn as_raw(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_raw, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if c1 then L11() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L4()
    goto L4_;
  }

L7_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn c(1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r2 = dyn base1(1.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args10);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L9_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L10_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L11_:;
  // s6 = ld s
  Rsh_Fir_reg_s6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D2_:;
  // deopt 14 [i2, s1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 26 [s6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_s6_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // sym2 = ldf `as.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `as.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L17_:;
  // s7 = force? s6
  Rsh_Fir_reg_s7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s6_);
  // checkMissing(s7)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_s7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return s7
  return Rsh_Fir_reg_s7_;

L3_:;
  // r9 = `+`(s5, r7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args14);
  // st s = r9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // goto L2(i7)
  // L2(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L2_;

L13_:;
  // i8 = ld i
  Rsh_Fir_reg_i8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L14_:;
  // r6 = dyn base2(<sym i>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, RHO);
  // goto L3(i2, s2, r6)
  // L3(i2, s2, r6)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_s5_ = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D3_:;
  // deopt 17 [i2, s2, i8]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(17, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // i9 = force? i8
  Rsh_Fir_reg_i9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i8_);
  // checkMissing(i9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r8 = dyn as_integer(i9)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 20 [i2, s2, r8]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L3(i2, s2, r8)
  // L3(i2, s2, r8)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_s5_ = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;
}
