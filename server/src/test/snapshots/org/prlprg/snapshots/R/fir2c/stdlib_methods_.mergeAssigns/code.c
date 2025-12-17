#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2997913041_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2997913041_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2997913041_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2997913041_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2997913041
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2997913041_, RHO, CCP);
  // st `.mergeAssigns` = r
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
SEXP Rsh_Fir_user_function_inner2997913041_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2997913041 dynamic dispatch ([previous, new])

  return Rsh_Fir_user_version_inner2997913041_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2997913041_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2997913041 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2997913041/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_previous;  // previous
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_new2_;  // new2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_previous1_;  // previous1
  SEXP Rsh_Fir_reg_previous2_;  // previous2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_previous4_;  // previous4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_new3_;  // new3
  SEXP Rsh_Fir_reg_new4_;  // new4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_new6_;  // new6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_previous5_;  // previous5
  SEXP Rsh_Fir_reg_previous6_;  // previous6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_previous8_;  // previous8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_what4_;  // what4
  SEXP Rsh_Fir_reg_what5_;  // what5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_new7_;  // new7
  SEXP Rsh_Fir_reg_new8_;  // new8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_new10_;  // new10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_what6_;  // what6
  SEXP Rsh_Fir_reg_what7_;  // what7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_what8_;  // what8
  SEXP Rsh_Fir_reg_what9_;  // what9
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_previous9_;  // previous9
  SEXP Rsh_Fir_reg_previous10_;  // previous10

  // Bind parameters
  Rsh_Fir_reg_previous = PARAMS[0];
  Rsh_Fir_reg_new = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st previous = previous
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_previous, RHO);
  (void)(Rsh_Fir_reg_previous);
  // st new = new
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_new, RHO);
  (void)(Rsh_Fir_reg_new);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // s = toForSeq(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 4);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c then L13() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // c3 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L21() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L21()
    goto L21_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // c2 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L2(i11, c2)
  // L2(i11, c2)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c2_;
  goto L2_;

L4_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L5_:;
  // goto L6(i17, dx3)
  // L6(i17, dx3)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L6_;

L6_:;
  // l1 = ld previous
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c7 = `is.object`(l1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c7 then L30() else L31(i18, dx4, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L30()
    goto L30_;
  } else {
  // L31(i18, dx4, l1)
    Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx4_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L31_;
  }

L7_:;
  // st previous = dx14
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx14_, RHO);
  (void)(Rsh_Fir_reg_dx14_);
  // goto L1(i22)
  // L1(i22)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i22_;
  goto L1_;

L8_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st what = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L9_:;
  // new1 = ld new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym new>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [new1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_new1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // new2 = force? new1
  Rsh_Fir_reg_new2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new1_);
  // checkMissing(new2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_new2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn names(new2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_new2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L13_:;
  // previous9 = ld previous
  Rsh_Fir_reg_previous9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

L14_:;
  // previous1 = ld previous
  Rsh_Fir_reg_previous1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L15_:;
  // r3 = dyn base1(<lang `[[`(previous, what)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(i2, r3)
  // L2(i2, r3)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 7 [i2, previous1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_previous1_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // previous2 = force? previous1
  Rsh_Fir_reg_previous2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_previous1_);
  // checkMissing(previous2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_previous2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(previous2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_previous2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L17() else L18(i2, previous2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L18(i2, previous2)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_previous4_ = Rsh_Fir_reg_previous2_;
    goto L18_;
  }

L17_:;
  // dr = tryDispatchBuiltin.1("[[", previous2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_previous2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L19() else L18(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L19()
    goto L19_;
  } else {
  // L18(i2, dr)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_previous4_ = Rsh_Fir_reg_dr;
    goto L18_;
  }

L18_:;
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L19_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L3(i2, dx)
  // L3(i2, dx)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D3_:;
  // deopt 9 [i9, previous4, what]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_previous4_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_what;
  Rsh_Fir_deopt(9, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r5 = dyn __(previous4, what1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_previous4_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_what1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(i9, r5)
  // L3(i9, r5)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L3_;

L21_:;
  // new3 = ld new
  Rsh_Fir_reg_new3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 13 [i7, new3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_new3_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // new4 = force? new3
  Rsh_Fir_reg_new4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new3_);
  // checkMissing(new4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_new4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(new4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_new4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c4 then L23() else L24(i7, new4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L23()
    goto L23_;
  } else {
  // L24(i7, new4)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_new6_ = Rsh_Fir_reg_new4_;
    goto L24_;
  }

L23_:;
  // dr2 = tryDispatchBuiltin.1("[[", new4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_new4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(i7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(i7, dr2)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_new6_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // what2 = ld what
  Rsh_Fir_reg_what2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L25_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L5(i7, dx2)
  // L5(i7, dx2)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

D5_:;
  // deopt 15 [i15, new6, what2]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_new6_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_what2_;
  Rsh_Fir_deopt(15, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // what3 = force? what2
  Rsh_Fir_reg_what3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what2_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r6 = dyn __1(new6, what3)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_new6_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_what3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(i15, r6)
  // L5(i15, r6)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_;
  goto L5_;

D6_:;
  // deopt 19 [i7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // p = prom<V +>{
  //   previous5 = ld previous;
  //   previous6 = force? previous5;
  //   checkMissing(previous6);
  //   c5 = `is.object`(previous6);
  //   if c5 then L1() else L2(previous6);
  // L0(dx6):
  //   return dx6;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", previous6);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(previous8):
  //   what4 = ld what;
  //   what5 = force? what4;
  //   __2 = ldf `[[` in base;
  //   r7 = dyn __2(previous8, what5);
  //   goto L0(r7);
  // L3():
  //   dx5 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx5);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2997913041_, CCP, RHO);
  // p1 = prom<V +>{
  //   new7 = ld new;
  //   new8 = force? new7;
  //   checkMissing(new8);
  //   c6 = `is.object`(new8);
  //   if c6 then L1() else L2(new8);
  // L0(dx8):
  //   return dx8;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", new8);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(new10):
  //   what6 = ld what;
  //   what7 = force? what6;
  //   __3 = ldf `[[` in base;
  //   r9 = dyn __3(new10, what7);
  //   goto L0(r9);
  // L3():
  //   dx7 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx7);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2997913041_1, CCP, RHO);
  // r11 = dyn paste[, , sep](p, p1, "; ")
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

D7_:;
  // deopt 24 [i7, r11]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L6(i7, r11)
  // L6(i7, r11)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r11_;
  goto L6_;

L30_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l1, dx4)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args39);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc4 then L32() else L31(i18, dx4, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L32()
    goto L32_;
  } else {
  // L31(i18, dx4, dr8)
    Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx4_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr8_;
    goto L31_;
  }

L31_:;
  // what8 = ld what
  Rsh_Fir_reg_what8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

L32_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L7(i18, dx12)
  // L7(i18, dx12)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx12_;
  goto L7_;

D8_:;
  // deopt 26 [i20, dx10, l3, dx4, what8]
  SEXP Rsh_Fir_array_deopt_stack8[5];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_deopt_stack8[4] = Rsh_Fir_reg_what8_;
  Rsh_Fir_deopt(26, 5, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // what9 = force? what8
  Rsh_Fir_reg_what9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what8_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r12 = dyn ____(l3, dx4, what9)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_what9_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(i20, r12)
  // L7(i20, r12)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r12_;
  goto L7_;

D9_:;
  // deopt 33 [previous9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_previous9_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // previous10 = force? previous9
  Rsh_Fir_reg_previous10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_previous9_);
  // checkMissing(previous10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_previous10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return previous10
  return Rsh_Fir_reg_previous10_;
}
SEXP Rsh_Fir_user_promise_inner2997913041_(SEXP CCP, SEXP RHO) {
  // previous5 = ld previous
  Rsh_Fir_reg_previous5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // previous6 = force? previous5
  Rsh_Fir_reg_previous6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_previous5_);
  // checkMissing(previous6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_previous6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(previous6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_previous6_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(previous6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(previous6)
    Rsh_Fir_reg_previous8_ = Rsh_Fir_reg_previous6_;
    goto L2_;
  }

L0_:;
  // return dx6
  return Rsh_Fir_reg_dx6_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", previous6)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_previous6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_previous8_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // what4 = ld what
  Rsh_Fir_reg_what4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // what5 = force? what4
  Rsh_Fir_reg_what5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what4_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r7 = dyn __2(previous8, what5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_previous8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_what5_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L3_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L0(dx5)
  // L0(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2997913041_1(SEXP CCP, SEXP RHO) {
  // new7 = ld new
  Rsh_Fir_reg_new7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // new8 = force? new7
  Rsh_Fir_reg_new8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new7_);
  // checkMissing(new8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_new8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(new8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_new8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(new8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(new8)
    Rsh_Fir_reg_new10_ = Rsh_Fir_reg_new8_;
    goto L2_;
  }

L0_:;
  // return dx8
  return Rsh_Fir_reg_dx8_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", new8)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_new8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_new10_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // what6 = ld what
  Rsh_Fir_reg_what6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // what7 = force? what6
  Rsh_Fir_reg_what7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what6_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r9 = dyn __3(new10, what7)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_new10_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_what7_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L0(dx7)
  // L0(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
