#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner259452048_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner259452048_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner259452048
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner259452048_, RHO, CCP);
  // st `.predicate_for_calls_with_names` = r
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
SEXP Rsh_Fir_user_function_inner259452048_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner259452048 dynamic dispatch ([nms])

  return Rsh_Fir_user_version_inner259452048_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner259452048_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner259452048 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner259452048/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_nms;  // nms
  SEXP Rsh_Fir_reg_r1;  // r

  // Bind parameters
  Rsh_Fir_reg_nms = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st nms = nms
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_nms, RHO);
  (void)(Rsh_Fir_reg_nms);
  // r = clos inner3708401697
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r1;
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
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_is_call;  // is_call
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_e4_;  // e4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_nms1;  // nms
  SEXP Rsh_Fir_reg_nms1_;  // nms1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_e7_;  // e7
  SEXP Rsh_Fir_reg_e8_;  // e8
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_e10_;  // e10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_is_call1_;  // is_call1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_c71_;  // c71
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_c75_;  // c75
  SEXP Rsh_Fir_reg__in_2_;  // _in_2
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_c76_;  // c76
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_as_character2_;  // as_character2
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_nms2_;  // nms2
  SEXP Rsh_Fir_reg_nms3_;  // nms3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c77_;  // c77
  SEXP Rsh_Fir_reg_c78_;  // c78
  SEXP Rsh_Fir_reg_c81_;  // c81
  SEXP Rsh_Fir_reg_c82_;  // c82

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // sym = ldf `is.call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L17() else L1(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L1(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L1_;
  }

L1_:;
  // c24 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c24 then L5(c24) else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L5(c24)
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c24_;
    goto L5_;
  } else {
  // L29()
    goto L29_;
  }

L2_:;
  // c12 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c12 then L24() else L4(c5, c12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L24()
    goto L24_;
  } else {
  // L4(c5, c12)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c5_;
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c12_;
    goto L4_;
  }

L3_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c11 = `is.symbol`(dx1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(390, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L2(c10, c11)
  // L2(c10, c11)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c11_;
  goto L2_;

L4_:;
  // c21 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c22 = `&&`(c15, c21)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L1(c22)
  // L1(c22)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c22_;
  goto L1_;

L5_:;
  // visible.0()
  (void)(Rsh_Fir_intrinsic_visible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c25
  return Rsh_Fir_reg_c25_;

L6_:;
  // c35 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c35 then L37() else L8(c29, c35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L37()
    goto L37_;
  } else {
  // L8(c29, c35)
    Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c29_;
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c35_;
    goto L8_;
  }

L7_:;
  // st x = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // is_call1 = ldf `is.call` in base
  Rsh_Fir_reg_is_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r15 = dyn is_call1(dx3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_call1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

L8_:;
  // c60 = `as.logical`(c39)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c60 then L45() else L11(c38, c60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L45()
    goto L45_;
  } else {
  // L11(c38, c60)
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c38_;
    Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c60_;
    goto L11_;
  }

L9_:;
  // c56 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c57 = `&&`(c45, c56)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L8(c44, c57)
  // L8(c44, c57)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c57_;
  goto L8_;

L10_:;
  // c55 = `is.symbol`(dx5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(390, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L9(c53, c54, c55)
  // L9(c53, c54, c55)
  Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c55_;
  goto L9_;

L11_:;
  // c71 = `as.logical`(c64)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c71 then L49() else L12(c63, c71)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c71_)) {
  // L49()
    goto L49_;
  } else {
  // L12(c63, c71)
    Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c63_;
    Rsh_Fir_reg_c75_ = Rsh_Fir_reg_c71_;
    goto L12_;
  }

L12_:;
  // c81 = `as.logical`(c75)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c75_;
  Rsh_Fir_reg_c81_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c82 = `||`(c74, c81)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c74_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c81_;
  Rsh_Fir_reg_c82_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L5(c82)
  // L5(c82)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c82_;
  goto L5_;

L13_:;
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<sym e>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [e1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_e1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // is_call = ldf `is.call` in base
  Rsh_Fir_reg_is_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn is_call(e2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_call, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L17_:;
  // sym1 = ldf `is.name`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.name` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // e3 = ld e
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r3 = dyn base1(<lang `<-`(x, `[[`(e, 1))>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(c, r3)
  // L2(c, r3)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 7 [c, e3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_e3_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(e4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_e4_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c6 then L21() else L22(c, e4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L21()
    goto L21_;
  } else {
  // L22(c, e4)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c;
    Rsh_Fir_reg_e6_ = Rsh_Fir_reg_e4_;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.1("[[", e4)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_e4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(c, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(c, dr)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c;
    Rsh_Fir_reg_e6_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r5 = dyn __(e6, 1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_e6_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(c8, r5)
  // L3(c8, r5)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L3_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L3(c, dx)
  // L3(c, dx)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

L24_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

D3_:;
  // deopt 15 [c5, c12]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // p = prom<V +>{
  //   sym2 = ldf `as.character`;
  //   base2 = ldf `as.character` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   as_character = ldf `as.character` in base;
  //   r8 = dyn as_character(x1);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base2(<sym x>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, CCP, RHO);
  // p1 = prom<V +>{
  //   nms = ld nms;
  //   nms1 = force? nms;
  //   checkMissing(nms1);
  //   return nms1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_1, CCP, RHO);
  // r11 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 18 [c5, c12, r11]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // c17 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c18 = `&&`(c12, c17)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L4(c5, c18)
  // L4(c5, c18)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c18_;
  goto L4_;

L29_:;
  // sym3 = ldf `is.call`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf `is.call` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // e7 = ld e
  Rsh_Fir_reg_e7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

L31_:;
  // r12 = dyn base3(<lang `<-`(x, `[[`(e, 1))>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(c24, r12)
  // L6(c24, r12)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

D5_:;
  // deopt 23 [c24, e7]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_e7_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // e8 = force? e7
  Rsh_Fir_reg_e8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e7_);
  // checkMissing(e8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_e8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(e8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_e8_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c30 then L33() else L34(c24, e8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L33()
    goto L33_;
  } else {
  // L34(c24, e8)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c24_;
    Rsh_Fir_reg_e10_ = Rsh_Fir_reg_e8_;
    goto L34_;
  }

L33_:;
  // dr2 = tryDispatchBuiltin.1("[[", e8)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_e8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc1 then L35() else L34(c24, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L35()
    goto L35_;
  } else {
  // L34(c24, dr2)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c24_;
    Rsh_Fir_reg_e10_ = Rsh_Fir_reg_dr2_;
    goto L34_;
  }

L34_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r14 = dyn __1(e10, 1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_e10_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(c32, r14)
  // L7(c32, r14)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L7_;

L35_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L7(c24, dx2)
  // L7(c24, dx2)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D6_:;
  // deopt 30 [c34, r15]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L6(c34, r15)
  // L6(c34, r15)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L6_;

L37_:;
  // sym4 = ldf `is.name`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf `is.name` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard4 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L39_:;
  // r16 = dyn base4(<lang `[[`(x, 1)>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(c29, c35, r16)
  // L9(c29, c35, r16)
  Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L9_;

D7_:;
  // deopt 32 [c29, c35, x2]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c29_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(x3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c46 then L41() else L42(c29, c35, x3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L41()
    goto L41_;
  } else {
  // L42(c29, c35, x3)
    Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c29_;
    Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c35_;
    Rsh_Fir_reg_x5_ = Rsh_Fir_reg_x3_;
    goto L42_;
  }

L41_:;
  // dr4 = tryDispatchBuiltin.1("[[", x3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc2 then L43() else L42(c29, c35, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L43()
    goto L43_;
  } else {
  // L42(c29, c35, dr4)
    Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c29_;
    Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c35_;
    Rsh_Fir_reg_x5_ = Rsh_Fir_reg_dr4_;
    goto L42_;
  }

L42_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r18 = dyn __2(x5, 1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(c49, c50, r18)
  // L10(c49, c50, r18)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r18_;
  goto L10_;

L43_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L10(c29, c35, dx4)
  // L10(c29, c35, dx4)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

L45_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L46() else D8()
  // L46()
  goto L46_;

D8_:;
  // deopt 40 [c38, c60]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_c60_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // p2 = prom<V +>{
  //   sym5 = ldf `as.character`;
  //   base5 = ldf `as.character` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L2() else L3();
  // L0(r20):
  //   return r20;
  // L2():
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   c65 = `is.object`(x7);
  //   if c65 then L4() else L5(x7);
  // L3():
  //   r19 = dyn base5(<lang `[[`(x, 1)>);
  //   goto L0(r19);
  // L1(dx7):
  //   as_character1 = ldf `as.character` in base;
  //   r22 = dyn as_character1(dx7);
  //   goto L0(r22);
  // L4():
  //   dr6 = tryDispatchBuiltin.1("[[", x7);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L6() else L5(dr6);
  // L5(x9):
  //   __3 = ldf `[[` in base;
  //   r21 = dyn __3(x9, 1);
  //   goto L1(r21);
  // L6():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L1(dx6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r25):
  //   return r25;
  // L1():
  //   c66 = ldf c in base;
  //   r26 = dyn c66("::", ":::");
  //   goto L0(r26);
  // L2():
  //   r24 = dyn base6("::", ":::");
  //   goto L0(r24);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_3, CCP, RHO);
  // r28 = dyn _in_1(p2, p3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

D9_:;
  // deopt 43 [c38, c60, r28]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_c60_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(43, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L47_:;
  // c67 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // c68 = `&&`(c60, c67)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_c60_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_c67_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L11(c38, c68)
  // L11(c38, c68)
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c68_;
  goto L11_;

L49_:;
  // _in_2 = ldf `%in%`
  Rsh_Fir_reg__in_2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

D10_:;
  // deopt 46 [c63, c71]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c63_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_c71_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L50_:;
  // p4 = prom<V +>{
  //   sym7 = ldf `as.character`;
  //   base7 = ldf `as.character` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L2() else L3();
  // L0(r30):
  //   return r30;
  // L2():
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   c76 = `is.object`(x11);
  //   if c76 then L4() else L5(x11);
  // L3():
  //   r29 = dyn base7(<lang `[[`(x, 3)>);
  //   goto L0(r29);
  // L1(dx9):
  //   as_character2 = ldf `as.character` in base;
  //   r32 = dyn as_character2(dx9);
  //   goto L0(r32);
  // L4():
  //   dr8 = tryDispatchBuiltin.1("[[", x11);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L6() else L5(dr8);
  // L5(x13):
  //   __4 = ldf `[[` in base;
  //   r31 = dyn __4(x13, 3);
  //   goto L1(r31);
  // L6():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L1(dx8);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_4, CCP, RHO);
  // p5 = prom<V +>{
  //   nms2 = ld nms;
  //   nms3 = force? nms2;
  //   checkMissing(nms3);
  //   return nms3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_5, CCP, RHO);
  // r35 = dyn _in_2(p4, p5)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_2_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

D11_:;
  // deopt 49 [c63, c71, r35]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c63_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_c71_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L51_:;
  // c77 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c77_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // c78 = `&&`(c71, c77)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_c71_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_c77_;
  Rsh_Fir_reg_c78_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L12(c63, c78)
  // L12(c63, c78)
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_reg_c78_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO) {
  // sym2 = ldf `as.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf `as.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r8 = dyn as_character(x1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO) {
  // nms = ld nms
  Rsh_Fir_reg_nms1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // nms1 = force? nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms1);
  // checkMissing(nms1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_nms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return nms1
  return Rsh_Fir_reg_nms1_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO) {
  // sym5 = ldf `as.character`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf `as.character` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard5 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r20
  return Rsh_Fir_reg_r20_;

L1_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r22 = dyn as_character1(dx7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c65 = `is.object`(x7)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c65 then L4() else L5(x7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x7)
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_x7_;
    goto L5_;
  }

L3_:;
  // r19 = dyn base5(<lang `[[`(x, 1)>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;

L4_:;
  // dr6 = tryDispatchBuiltin.1("[[", x7)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc3 then L6() else L5(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr6)
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_dr6_;
    goto L5_;
  }

L5_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r21 = dyn __3(x9, 1)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(r21)
  // L1(r21)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r21_;
  goto L1_;

L6_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L1(dx6)
  // L1(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // c66 = ldf c in base
  Rsh_Fir_reg_c66_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r26 = dyn c66("::", ":::")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c66_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L0_;

L2_:;
  // r24 = dyn base6("::", ":::")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO) {
  // sym7 = ldf `as.character`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf `as.character` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard7 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_;

L1_:;
  // as_character2 = ldf `as.character` in base
  Rsh_Fir_reg_as_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r32 = dyn as_character2(dx9)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character2_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r32_;
  goto L0_;

L2_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c76 = `is.object`(x11)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c76 then L4() else L5(x11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c76_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x11)
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x11_;
    goto L5_;
  }

L3_:;
  // r29 = dyn base7(<lang `[[`(x, 3)>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L0_;

L4_:;
  // dr8 = tryDispatchBuiltin.1("[[", x11)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc4 then L6() else L5(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr8)
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_dr8_;
    goto L5_;
  }

L5_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r31 = dyn __4(x13, 3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L1(r31)
  // L1(r31)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r31_;
  goto L1_;

L6_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L1(dx8)
  // L1(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO) {
  // nms2 = ld nms
  Rsh_Fir_reg_nms2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // nms3 = force? nms2
  Rsh_Fir_reg_nms3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms2_);
  // checkMissing(nms3)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_nms3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return nms3
  return Rsh_Fir_reg_nms3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
