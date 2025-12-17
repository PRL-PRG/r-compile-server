#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2148457334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2148457334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2148457334_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2501545716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st `.numeric2roman` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg__romans;  // _romans
  SEXP Rsh_Fir_reg__romans1_;  // _romans1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_n2r;  // n2r
  SEXP Rsh_Fir_reg_n2r1_;  // n2r1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf names in base
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
  // st romaNs = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // r3 = clos inner2148457334
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2148457334_, RHO, CCP);
  // st n2r = r3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L1_:;
  // st x = r5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L2_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

L3_:;
  // st out = dx1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L25() else D11()
  // L25()
  goto L25_;

L4_:;
  // st out = dx5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L31() else D14()
  // L31()
  goto L31_;

L5_:;
  // _romans = ld `.romans`
  Rsh_Fir_reg__romans = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym .romans>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [_romans]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg__romans;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // _romans1 = force? _romans
  Rsh_Fir_reg__romans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__romans);
  // checkMissing(_romans1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg__romans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn names(_romans1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg__romans1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L9_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D2_:;
  // deopt 12 [x1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r6 = dyn as_integer(x2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L13_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L14_:;
  // r7 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D4_:;
  // deopt 19 [x3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r9 = dyn is_na(x4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

D6_:;
  // deopt 22 [r8, x5]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r10 = `<=`(x6, 0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // r11 = `||`(r8, r10)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 26 [r11, x7]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r12 = `>=`(x8, 4000)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // r13 = `||`(r11, r12)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // st ind = r13
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p = prom<V +>{
  //   sym3 = ldf length;
  //   base3 = ldf length in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   length = ldf length in base;
  //   r16 = dyn length(x10);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base3(<sym x>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r18 = dyn character(p)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // st out = r18
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // l = ld out
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c then L21() else L22(NA_LGL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L22(NA_LGL, l)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.0("[<-", l, NA_LGL)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(NA_LGL, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(NA_LGL, dr)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L24() else D10()
  // L24()
  goto L24_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D10_:;
  // deopt 40 [r20, l2, NA_LGL, ind]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(40, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r23 = dyn ___(l2, NA_LGL, ind1)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r23)
  // L3(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L3_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p1 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   c1 = `is.object`(x12);
  //   if c1 then L1() else L2(x12);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", x12);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(x14):
  //   ind2 = ld ind;
  //   ind3 = force? ind2;
  //   checkMissing(ind3);
  //   r24 = `!`(ind3);
  //   __ = ldf `[` in base;
  //   r25 = dyn __(x14, r24);
  //   goto L0(r25);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // p2 = prom<V +>{
  //   n2r = ld n2r;
  //   n2r1 = force? n2r;
  //   checkMissing(n2r1);
  //   return n2r1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r28 = dyn vapply(p1, p2, "")
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

D12_:;
  // deopt 49 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L26_:;
  // l3 = ld out
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c2 = `is.object`(l3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c2 then L27() else L28(r28, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L28(r28, l3)
    Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L28_;
  }

L27_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l3, r28)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args39);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc2 then L29() else L28(r28, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L29()
    goto L29_;
  } else {
  // L28(r28, dr4)
    Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr4_;
    goto L28_;
  }

L28_:;
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L30() else D13()
  // L30()
  goto L30_;

L29_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L4(dx4)
  // L4(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L4_;

D13_:;
  // deopt 51 [r30, l5, r28, ind4]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(51, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L30_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // checkMissing(ind5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ind5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r33 = `!`(ind5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r34 = dyn ___1(l5, r28, r33)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args44[2] = Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L4(r34)
  // L4(r34)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r34_;
  goto L4_;

D14_:;
  // deopt 56 [out]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L31_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out1
  return Rsh_Fir_reg_out1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r16 = dyn length(x10)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x12)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(x12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x12)
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_x12_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", x12)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // checkMissing(ind3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ind3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r24 = `!`(ind3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r25 = dyn __(x14, r24)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r25_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // n2r = ld n2r
  Rsh_Fir_reg_n2r = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // n2r1 = force? n2r
  Rsh_Fir_reg_n2r1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2r);
  // checkMissing(n2r1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_n2r1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return n2r1
  return Rsh_Fir_reg_n2r1_;
}
SEXP Rsh_Fir_user_function_inner2148457334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2148457334 dynamic dispatch ([z])

  return Rsh_Fir_user_version_inner2148457334_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2148457334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2148457334 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2148457334/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_character1;  // character
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg__romans1;  // _romans
  SEXP Rsh_Fir_reg__romans1_1;  // _romans1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg__romans2_;  // _romans2
  SEXP Rsh_Fir_reg__romans3_;  // _romans3
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg__romans5_;  // _romans5
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_romaNs;  // romaNs
  SEXP Rsh_Fir_reg_romaNs1_;  // romaNs1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_romaNs3_;  // romaNs3
  SEXP Rsh_Fir_reg_dr2_1;  // dr2
  SEXP Rsh_Fir_reg_dc1_1;  // dc1
  SEXP Rsh_Fir_reg_dx2_1;  // dx2
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx3_1;  // dx3
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r12_1;  // r12

  // Bind parameters
  Rsh_Fir_reg_z = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st z = z
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_z, RHO);
  (void)(Rsh_Fir_reg_z);
  // character = ldf character
  Rsh_Fir_reg_character1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L0_:;
  // s = toForSeq(r2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1 = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 10);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if c then L13() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L13()
    goto L13_;
  } else {
  // L7()
    goto L7_;
  }

L2_:;
  // st d = dx1
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx1_1, RHO);
  (void)(Rsh_Fir_reg_dx1_1);
  // goto L6(i8)
  // L6(i8)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  goto L6_;

L3_:;
  // goto L1(i11)
  // L1(i11)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i11_;
  goto L1_;

L4_:;
  // st y = r8
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // goto L6(i16)
  // L6(i16)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i16_;
  goto L6_;

L5_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r10 = dyn c4(y1, dx3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

L6_:;
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L19() else D5()
  // L19()
  goto L19_;

L7_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_x1 = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // _romans2 = ld `.romans`
  Rsh_Fir_reg__romans2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r = dyn character()
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1, 0, NULL, NULL, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L9_:;
  // st y = r
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r2, RHO);
  (void)(Rsh_Fir_reg_r2);
  // sym = ldf seq_along
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // _romans = ld `.romans`
  Rsh_Fir_reg__romans1 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r1 = dyn base(<sym .romans>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_1;
  goto L0_;

D2_:;
  // deopt 5 [_romans]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg__romans1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L12_:;
  // _romans1 = force? _romans
  Rsh_Fir_reg__romans1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg__romans1);
  // checkMissing(_romans1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg__romans1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r3 = seq_along(_romans1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg__romans1_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r3_1;
  goto L0_;

L13_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L34() else D13()
  // L34()
  goto L34_;

D3_:;
  // deopt 8 [i2, _romans2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg__romans2_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L14_:;
  // _romans3 = force? _romans2
  Rsh_Fir_reg__romans3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__romans2_);
  // checkMissing(_romans3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg__romans3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(_romans3)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg__romans3_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L16(i2, _romans3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L15()
    goto L15_;
  } else {
  // L16(i2, _romans3)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg__romans5_ = Rsh_Fir_reg__romans3_;
    goto L16_;
  }

L15_:;
  // dr = tryDispatchBuiltin.1("[[", _romans3)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg__romans3_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L17()
    goto L17_;
  } else {
  // L16(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg__romans5_ = Rsh_Fir_reg_dr1;
    goto L16_;
  }

L16_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L2(i2, dx)
  // L2(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L2_;

D4_:;
  // deopt 10 [i6, _romans5, i9]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg__romans5_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(10, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L18_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r4 = dyn __(_romans5, i10)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg__romans5_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L2(i6, r4)
  // L2(i6, r4)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r4_1;
  goto L2_;

D5_:;
  // deopt 14 [i11, z1]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L19_:;
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

D6_:;
  // deopt 15 [i11, z2, d]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_z2_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L20_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r5 = `>=`(z2, d1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c2 then L21() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L21()
    goto L21_;
  } else {
  // L3()
    goto L3_;
  }

L21_:;
  // z3 = ld z
  Rsh_Fir_reg_z3_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 18 [i11, z3]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_z3_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L22_:;
  // z4 = force? z3
  Rsh_Fir_reg_z4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z3_);
  // checkMissing(z4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_z4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 19 [i11, z4, d2]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_z4_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L23_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r6 = `-`(z4, d3)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_d3_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // st z = r6
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r6_1, RHO);
  (void)(Rsh_Fir_reg_r6_1);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

L25_:;
  // r7 = dyn base1(<sym y>, <lang `[`(romaNs, i)>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L4(i11, r7)
  // L4(i11, r7)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_1;
  goto L4_;

D9_:;
  // deopt 25 [i11, y]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L26_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // romaNs = ld romaNs
  Rsh_Fir_reg_romaNs = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L27() else D10()
  // L27()
  goto L27_;

D10_:;
  // deopt 27 [i11, romaNs]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_romaNs;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L27_:;
  // romaNs1 = force? romaNs
  Rsh_Fir_reg_romaNs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_romaNs);
  // checkMissing(romaNs1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_romaNs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(romaNs1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_romaNs1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c3 then L28() else L29(i11, romaNs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L28()
    goto L28_;
  } else {
  // L29(i11, romaNs1)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_romaNs3_ = Rsh_Fir_reg_romaNs1_;
    goto L29_;
  }

L28_:;
  // dr2 = tryDispatchBuiltin.1("[", romaNs1)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_romaNs1_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc1 then L30() else L29(i11, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L30()
    goto L30_;
  } else {
  // L29(i11, dr2)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_romaNs3_ = Rsh_Fir_reg_dr2_1;
    goto L29_;
  }

L29_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

L30_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L5(i11, dx2)
  // L5(i11, dx2)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L5_;

D11_:;
  // deopt 29 [i18, romaNs3, i21]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_romaNs3_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L31_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r9 = dyn __1(romaNs3, i22)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_romaNs3_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L5(i18, r9)
  // L5(i18, r9)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r9_1;
  goto L5_;

D12_:;
  // deopt 33 [i20, r10]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L4(i20, r10)
  // L4(i20, r10)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r10_1;
  goto L4_;

D13_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p = prom<V +>{
  //   y2 = ld y;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   return y3;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2148457334_, CCP, RHO);
  // r12 = dyn paste[, collapse](p, "")
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L35() else D14()
  // L35()
  goto L35_;

D14_:;
  // deopt 46 [r12]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_1;
}
SEXP Rsh_Fir_user_promise_inner2148457334_(SEXP CCP, SEXP RHO) {
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return y3
  return Rsh_Fir_reg_y3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
