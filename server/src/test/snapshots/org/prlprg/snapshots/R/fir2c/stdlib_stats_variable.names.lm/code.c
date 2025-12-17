#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner421220494_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner421220494_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner421220494_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner421220494_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner421220494
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner421220494_, RHO, CCP);
  // st `variable.names.lm` = r
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
SEXP Rsh_Fir_user_function_inner421220494_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner421220494 dynamic dispatch ([object, full, `...`])

  return Rsh_Fir_user_version_inner421220494_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner421220494_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner421220494 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner421220494/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_full;  // full
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_full_isMissing;  // full_isMissing
  SEXP Rsh_Fir_reg_full_orDefault;  // full_orDefault
  SEXP Rsh_Fir_reg_full1_;  // full1
  SEXP Rsh_Fir_reg_full2_;  // full2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_qr_lm;  // qr_lm
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_qr_lm1_;  // qr_lm1
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dimnames1_;  // dimnames1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r28_;  // r28

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_full = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // full_isMissing = missing.0(full)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_full;
  Rsh_Fir_reg_full_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if full_isMissing then L0(FALSE) else L0(full)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_full_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_full_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(full)
    Rsh_Fir_reg_full_orDefault = Rsh_Fir_reg_full;
    goto L0_;
  }

L0_:;
  // st full = full_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_full_orDefault, RHO);
  (void)(Rsh_Fir_reg_full_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // full1 = ld full
  Rsh_Fir_reg_full1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L1_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L2_:;
  // c2 = `is.object`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L21(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L21(r1)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r1_;
    goto L21_;
  }

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx3
  return Rsh_Fir_reg_dx3_;

L4_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L53() else D9()
  // L53()
  goto L53_;

L5_:;
  // c6 = `is.object`(r13)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c6 then L39() else L40(r13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L39()
    goto L39_;
  } else {
  // L40(r13)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r13_;
    goto L40_;
  }

L6_:;
  // c7 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c7 then L42() else L43(dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L42()
    goto L42_;
  } else {
  // L43(dx9)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L43_;
  }

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx13
  return Rsh_Fir_reg_dx13_;

L8_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r27 = dyn __2(dx16, r24)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L7(r27)
  // L7(r27)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r27_;
  goto L7_;

D0_:;
  // deopt 0 [full1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_full1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // full2 = force? full1
  Rsh_Fir_reg_full2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_full1_);
  // checkMissing(full2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_full2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(full2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_full2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L10() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L1()
    goto L1_;
  }

L10_:;
  // sym = ldf dimnames
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf dimnames in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // qr_lm = ldf `qr.lm`
  Rsh_Fir_reg_qr_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base(<lang `$`(qr.lm(object), qr)>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   return object2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner421220494_, CCP, RHO);
  // r3 = dyn qr_lm(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_lm, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // c1 = `is.object`(r3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c1 then L16() else L17(r3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L17(r3)
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r3_;
    goto L17_;
  }

L15_:;
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn dimnames(dx1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L16_:;
  // dr = tryDispatchBuiltin.1("$", r3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr)
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // r6 = `$`(r5, <sym qr>)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L15(r6)
  // L15(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L15_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

D3_:;
  // deopt 10 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r7_;
  goto L2_;

L20_:;
  // dr2 = tryDispatchBuiltin.1("[[", r1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L22() else L21(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr2)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr2_;
    goto L21_;
  }

L21_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r10 = dyn __(r9, 2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L3_;

L22_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

D4_:;
  // deopt 14 [object3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c3 then L26() else L27(object4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L26()
    goto L26_;
  } else {
  // L27(object4)
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_object4_;
    goto L27_;
  }

L25_:;
  // c4 = `as.logical`(dx5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c4 then L29() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L29()
    goto L29_;
  } else {
  // L4()
    goto L4_;
  }

L26_:;
  // dr4 = tryDispatchBuiltin.1("$", object4)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc2 then L28() else L27(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L28()
    goto L28_;
  } else {
  // L27(dr4)
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_dr4_;
    goto L27_;
  }

L27_:;
  // r11 = `$`(object6, <sym rank>)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L25(r11)
  // L25(r11)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L25_;

L28_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L25(dx4)
  // L25(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L25_;

L29_:;
  // sym1 = ldf dimnames
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf dimnames in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // qr_lm1 = ldf `qr.lm`
  Rsh_Fir_reg_qr_lm1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

L31_:;
  // r12 = dyn base1(<lang `$`(qr.lm(object), qr)>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p1 = prom<V +>{
  //   object7 = ld object;
  //   object8 = force? object7;
  //   checkMissing(object8);
  //   return object8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner421220494_1, CCP, RHO);
  // r15 = dyn qr_lm1(p1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_lm1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

D6_:;
  // deopt 22 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L33_:;
  // c5 = `is.object`(r15)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c5 then L35() else L36(r15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L35()
    goto L35_;
  } else {
  // L36(r15)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
    goto L36_;
  }

L34_:;
  // dimnames1 = ldf dimnames in base
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r19 = dyn dimnames1(dx7)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

L35_:;
  // dr6 = tryDispatchBuiltin.1("$", r15)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc3 then L37() else L36(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr6)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_dr6_;
    goto L36_;
  }

L36_:;
  // r18 = `$`(r17, <sym qr>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L34(r18)
  // L34(r18)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r18_;
  goto L34_;

L37_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L34(dx6)
  // L34(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L34_;

D7_:;
  // deopt 25 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r19_;
  goto L5_;

L39_:;
  // dr8 = tryDispatchBuiltin.1("[[", r13)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc4 then L41() else L40(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L41()
    goto L41_;
  } else {
  // L40(dr8)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_dr8_;
    goto L40_;
  }

L40_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r22 = dyn __1(r21, 2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r22_;
  goto L6_;

L41_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L6(dx8)
  // L6(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L6_;

L42_:;
  // dr10 = tryDispatchBuiltin.1("[", dx9)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc5 then L44() else L43(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L44()
    goto L44_;
  } else {
  // L43(dr10)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr10_;
    goto L43_;
  }

L43_:;
  // sym2 = ldf seq_len
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf seq_len in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L44_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L7(dx12)
  // L7(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L7_;

L45_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L46_:;
  // r23 = dyn base2(<lang `$`(object, rank)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(dx11, r23)
  // L8(dx11, r23)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D8_:;
  // deopt 30 [dx11, object9]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(object10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c8 then L49() else L50(dx11, object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L49()
    goto L49_;
  } else {
  // L50(dx11, object10)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L50_;
  }

L48_:;
  // r26 = seq_len(dx22)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L8(dx21, r26)
  // L8(dx21, r26)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r26_;
  goto L8_;

L49_:;
  // dr12 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc6 then L51() else L50(dx11, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L51()
    goto L51_;
  } else {
  // L50(dx11, dr12)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr12_;
    goto L50_;
  }

L50_:;
  // r25 = `$`(object12, <sym rank>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L48(dx18, r25)
  // L48(dx18, r25)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r25_;
  goto L48_;

L51_:;
  // dx20 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L48(dx11, dx20)
  // L48(dx11, dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx20_;
  goto L48_;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // r28 = dyn character()
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

D10_:;
  // deopt 37 [r28]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L54_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_inner421220494_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return object2
  return Rsh_Fir_reg_object2_;
}
SEXP Rsh_Fir_user_promise_inner421220494_1(SEXP CCP, SEXP RHO) {
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return object8
  return Rsh_Fir_reg_object8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
