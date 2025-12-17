#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1384373858_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1384373858_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1384373858_(SEXP CCP, SEXP RHO);
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
  // st argsAnywhere = r
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
  SEXP Rsh_Fir_reg_tryCatch;  // tryCatch
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_getAnywhere;  // getAnywhere
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_fs;  // fs
  SEXP Rsh_Fir_reg_fs1_;  // fs1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_fs3_;  // fs3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_fs4_;  // fs4
  SEXP Rsh_Fir_reg_fs5_;  // fs5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_fs7_;  // fs7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_fs8_;  // fs8
  SEXP Rsh_Fir_reg_fs9_;  // fs9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_fs11_;  // fs11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_fs12_;  // fs12
  SEXP Rsh_Fir_reg_fs13_;  // fs13
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_fs15_;  // fs15
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_fs16_;  // fs16
  SEXP Rsh_Fir_reg_fs17_;  // fs17
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_fs19_;  // fs19
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r41_;  // r41

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // tryCatch = ldf tryCatch
  Rsh_Fir_reg_tryCatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L0_:;
  // goto L3()
  // L3()
  goto L3_;

L1_:;
  // st x = r8
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L3()
  // L3()
  goto L3_;

L2_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r12 = dyn as_character(r10)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L3_:;
  // getAnywhere = ldf getAnywhere
  Rsh_Fir_reg_getAnywhere = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L4_:;
  // r21 = `==`(r17, 0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c3 then L28() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L28()
    goto L28_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // sym4 = ldf sum
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base4 = ldf sum in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard4 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L7_:;
  // r29 = `>`(r25, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c5 then L39() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L39()
    goto L39_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // args = ldf args
  Rsh_Fir_reg_args = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   sym = ldf `is.character`;
  //   base = ldf `is.character` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   r2 = `!`(r1);
  //   return r2;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.character`(x2);
  //   goto L0(c);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // p1 = prom<V +>{
  //   r4 = clos inner3708401697;
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r6 = dyn tryCatch[, error](p, p1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryCatch, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c1 then L11() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L0()
    goto L0_;
  }

L11_:;
  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // sym2 = ldf substitute
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf substitute in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L13_:;
  // r7 = dyn base1(<lang substitute(x)>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

L14_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L2_;

L15_:;
  // r9 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L2_;

D2_:;
  // deopt 12 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r12_;
  goto L1_;

D3_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r15 = dyn getAnywhere(p2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getAnywhere, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 19 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // st fs = r15
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // fs = ld fs
  Rsh_Fir_reg_fs = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L21_:;
  // r16 = dyn base3(<lang `!`(`$`(fs, dups))>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

D5_:;
  // deopt 23 [fs]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_fs;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // fs1 = force? fs
  Rsh_Fir_reg_fs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fs);
  // checkMissing(fs1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_fs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(fs1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_fs1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L24() else L25(fs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L25(fs1)
    Rsh_Fir_reg_fs3_ = Rsh_Fir_reg_fs1_;
    goto L25_;
  }

L23_:;
  // r19 = `!`(dx1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r20 = dyn sum(r19)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L24_:;
  // dr = tryDispatchBuiltin.1("$", fs1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_fs1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc then L26() else L25(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr)
    Rsh_Fir_reg_fs3_ = Rsh_Fir_reg_dr;
    goto L25_;
  }

L25_:;
  // r18 = `$`(fs3, <sym dups>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_fs3_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L23(r18)
  // L23(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L23_;

L26_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L23(dx)
  // L23(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L23_;

D6_:;
  // deopt 28 [r20]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L4(r20)
  // L4(r20)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r20_;
  goto L4_;

L28_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 17);

L31_:;
  // fs4 = ld fs
  Rsh_Fir_reg_fs4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L32_:;
  // r24 = dyn base4(<lang `!`(`$`(fs, dups))>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r24)
  // L7(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L7_;

D7_:;
  // deopt 38 [fs4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_fs4_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // fs5 = force? fs4
  Rsh_Fir_reg_fs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fs4_);
  // checkMissing(fs5)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_fs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(fs5)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_fs5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c4 then L35() else L36(fs5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L35()
    goto L35_;
  } else {
  // L36(fs5)
    Rsh_Fir_reg_fs7_ = Rsh_Fir_reg_fs5_;
    goto L36_;
  }

L34_:;
  // r27 = `!`(dx3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r28 = dyn sum1(r27)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

L35_:;
  // dr2 = tryDispatchBuiltin.1("$", fs5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_fs5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc1 then L37() else L36(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr2)
    Rsh_Fir_reg_fs7_ = Rsh_Fir_reg_dr2_;
    goto L36_;
  }

L36_:;
  // r26 = `$`(fs7, <sym dups>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_fs7_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L34(r26)
  // L34(r26)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r26_;
  goto L34_;

L37_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L34(dx2)
  // L34(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L34_;

D8_:;
  // deopt 43 [r28]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L7(r28)
  // L7(r28)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r28_;
  goto L7_;

L39_:;
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L40() else D9()
  // L40()
  goto L40_;

D9_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p3 = prom<V +>{
  //   fs8 = ld fs;
  //   fs9 = force? fs8;
  //   checkMissing(fs9);
  //   c6 = `is.object`(fs9);
  //   if c6 then L2() else L3(fs9);
  // L1(dx5):
  //   c7 = `is.object`(dx5);
  //   if c7 then L5() else L6(dx5);
  // L2():
  //   dr4 = tryDispatchBuiltin.1("$", fs9);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L4() else L3(dr4);
  // L3(fs11):
  //   r30 = `$`(fs11, <sym objs>);
  //   goto L1(r30);
  // L0(dx9):
  //   return dx9;
  // L4():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L1(dx4);
  // L5():
  //   dr6 = tryDispatchBuiltin.1("[", dx5);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L7() else L6(dr6);
  // L6(dx7):
  //   fs12 = ld fs;
  //   fs13 = force? fs12;
  //   checkMissing(fs13);
  //   c8 = `is.object`(fs13);
  //   if c8 then L9() else L10(dx7, fs13);
  // L7():
  //   dx8 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx8);
  // L8(dx14, dx15):
  //   r32 = `!`(dx15);
  //   __ = ldf `[` in base;
  //   r33 = dyn __(dx14, r32);
  //   goto L0(r33);
  // L9():
  //   dr8 = tryDispatchBuiltin.1("$", fs13);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L11() else L10(dx7, dr8);
  // L10(dx11, fs15):
  //   r31 = `$`(fs15, <sym dups>);
  //   goto L8(dx11, r31);
  // L11():
  //   dx13 = getTryDispatchBuiltinValue(dr8);
  //   goto L8(dx7, dx13);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_3, CCP, RHO);
  // p4 = prom<V +>{
  //   r35 = clos inner1384373858;
  //   return r35;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_4, CCP, RHO);
  // r37 = dyn sapply(p3, p4)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

D10_:;
  // deopt 50 [r37]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L41_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r37
  return Rsh_Fir_reg_r37_;

D11_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p5 = prom<V +>{
  //   fs16 = ld fs;
  //   fs17 = force? fs16;
  //   checkMissing(fs17);
  //   c9 = `is.object`(fs17);
  //   if c9 then L2() else L3(fs17);
  // L1(dx17):
  //   c10 = `is.object`(dx17);
  //   if c10 then L5() else L6(dx17);
  // L2():
  //   dr10 = tryDispatchBuiltin.1("$", fs17);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L4() else L3(dr10);
  // L3(fs19):
  //   r38 = `$`(fs19, <sym objs>);
  //   goto L1(r38);
  // L0(dx21):
  //   return dx21;
  // L4():
  //   dx16 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(dx16);
  // L5():
  //   dr12 = tryDispatchBuiltin.1("[[", dx17);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L7() else L6(dr12);
  // L6(dx19):
  //   __1 = ldf `[[` in base;
  //   r39 = dyn __1(dx19, 1);
  //   goto L0(r39);
  // L7():
  //   dx20 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_5, CCP, RHO);
  // r41 = dyn args(p5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_args, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

D12_:;
  // deopt 54 [r41]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.character`(x2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // r4 = clos inner3708401697
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO) {
  // fs8 = ld fs
  Rsh_Fir_reg_fs8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // fs9 = force? fs8
  Rsh_Fir_reg_fs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fs8_);
  // checkMissing(fs9)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_fs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(fs9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_fs9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c6 then L2() else L3(fs9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L2()
    goto L2_;
  } else {
  // L3(fs9)
    Rsh_Fir_reg_fs11_ = Rsh_Fir_reg_fs9_;
    goto L3_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // c7 = `is.object`(dx5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c7 then L5() else L6(dx5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx5)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    goto L6_;
  }

L2_:;
  // dr4 = tryDispatchBuiltin.1("$", fs9)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_fs9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc2 then L4() else L3(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr4)
    Rsh_Fir_reg_fs11_ = Rsh_Fir_reg_dr4_;
    goto L3_;
  }

L3_:;
  // r30 = `$`(fs11, <sym objs>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_fs11_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L1(r30)
  // L1(r30)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r30_;
  goto L1_;

L4_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;

L5_:;
  // dr6 = tryDispatchBuiltin.1("[", dx5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc3 then L7() else L6(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr6)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dr6_;
    goto L6_;
  }

L6_:;
  // fs12 = ld fs
  Rsh_Fir_reg_fs12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // fs13 = force? fs12
  Rsh_Fir_reg_fs13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fs12_);
  // checkMissing(fs13)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_fs13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(fs13)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_fs13_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c8 then L9() else L10(dx7, fs13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L9()
    goto L9_;
  } else {
  // L10(dx7, fs13)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_fs15_ = Rsh_Fir_reg_fs13_;
    goto L10_;
  }

L7_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;

L8_:;
  // r32 = `!`(dx15)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r33 = dyn __(dx14, r32)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r33_;
  goto L0_;

L9_:;
  // dr8 = tryDispatchBuiltin.1("$", fs13)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_fs13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc4 then L11() else L10(dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L11()
    goto L11_;
  } else {
  // L10(dx7, dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_fs15_ = Rsh_Fir_reg_dr8_;
    goto L10_;
  }

L10_:;
  // r31 = `$`(fs15, <sym dups>)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_fs15_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L8(dx11, r31)
  // L8(dx11, r31)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r31_;
  goto L8_;

L11_:;
  // dx13 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L8(dx7, dx13)
  // L8(dx7, dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO) {
  // r35 = clos inner1384373858
  Rsh_Fir_reg_r35_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1384373858_, RHO, CCP);
  // return r35
  return Rsh_Fir_reg_r35_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO) {
  // fs16 = ld fs
  Rsh_Fir_reg_fs16_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // fs17 = force? fs16
  Rsh_Fir_reg_fs17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fs16_);
  // checkMissing(fs17)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_fs17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(fs17)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_fs17_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c9 then L2() else L3(fs17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L2()
    goto L2_;
  } else {
  // L3(fs17)
    Rsh_Fir_reg_fs19_ = Rsh_Fir_reg_fs17_;
    goto L3_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // c10 = `is.object`(dx17)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c10 then L5() else L6(dx17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx17)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
    goto L6_;
  }

L2_:;
  // dr10 = tryDispatchBuiltin.1("$", fs17)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_fs17_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc5 then L4() else L3(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr10)
    Rsh_Fir_reg_fs19_ = Rsh_Fir_reg_dr10_;
    goto L3_;
  }

L3_:;
  // r38 = `$`(fs19, <sym objs>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_fs19_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L1(r38)
  // L1(r38)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r38_;
  goto L1_;

L4_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L1(dx16)
  // L1(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L1_;

L5_:;
  // dr12 = tryDispatchBuiltin.1("[[", dx17)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc6 then L7() else L6(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr12)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dr12_;
    goto L6_;
  }

L6_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r39 = dyn __1(dx19, 1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r39_;
  goto L0_;

L7_:;
  // dx20 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_e;  // e

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 25);
}
SEXP Rsh_Fir_user_function_inner1384373858_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1384373858 dynamic dispatch ([f])

  return Rsh_Fir_user_version_inner1384373858_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1384373858_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1384373858 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1384373858/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_is_function;  // is_function
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_args1;  // args
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_f4_;  // f4
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r4_1;  // r4

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // sym = ldf `is.function`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `is.function` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c then L6() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L6()
    goto L6_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 17);

L2_:;
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym f>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [f1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_f1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L4_:;
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r2 = dyn is_function(f2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L6_:;
  // args = ldf args
  Rsh_Fir_reg_args1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   f3 = ld f;
  //   f4 = force? f3;
  //   checkMissing(f4);
  //   return f4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384373858_, CCP, RHO);
  // r4 = dyn args(p)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_args1, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_1;
}
SEXP Rsh_Fir_user_promise_inner1384373858_(SEXP CCP, SEXP RHO) {
  // f3 = ld f
  Rsh_Fir_reg_f3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // f4 = force? f3
  Rsh_Fir_reg_f4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f3_);
  // checkMissing(f4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_f4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return f4
  return Rsh_Fir_reg_f4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
