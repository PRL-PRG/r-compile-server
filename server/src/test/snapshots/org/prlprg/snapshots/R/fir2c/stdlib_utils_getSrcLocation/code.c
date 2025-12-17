#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1630886398_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1630886398_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1630886398_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1630886398_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1630886398_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1630886398_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1630886398_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1630886398_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1630886398_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1630886398
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1630886398_, RHO, CCP);
  // st getSrcLocation = r
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
SEXP Rsh_Fir_user_function_inner1630886398_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1630886398 dynamic dispatch ([x, which, first])

  return Rsh_Fir_user_version_inner1630886398_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1630886398_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1630886398 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1630886398/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_first;  // first
  SEXP Rsh_Fir_reg_which_isMissing;  // which_isMissing
  SEXP Rsh_Fir_reg_which_orDefault;  // which_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_first_isMissing;  // first_isMissing
  SEXP Rsh_Fir_reg_first_orDefault;  // first_orDefault
  SEXP Rsh_Fir_reg_getSrcref;  // getSrcref
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_srcref;  // srcref
  SEXP Rsh_Fir_reg_srcref1_;  // srcref1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_srcref2_;  // srcref2
  SEXP Rsh_Fir_reg_srcref3_;  // srcref3
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_srcref4_;  // srcref4
  SEXP Rsh_Fir_reg_srcref5_;  // srcref5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_getSrcLocation;  // getSrcLocation
  SEXP Rsh_Fir_reg_getSrcLocation1_;  // getSrcLocation1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_which1_;  // which1
  SEXP Rsh_Fir_reg_which2_;  // which2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_first1_;  // first1
  SEXP Rsh_Fir_reg_first2_;  // first2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_srcref6_;  // srcref6
  SEXP Rsh_Fir_reg_srcref7_;  // srcref7
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_srcref8_;  // srcref8
  SEXP Rsh_Fir_reg_srcref9_;  // srcref9
  SEXP Rsh_Fir_reg_srcref10_;  // srcref10
  SEXP Rsh_Fir_reg_srcref11_;  // srcref11
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_srcref13_;  // srcref13
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_srcref16_;  // srcref16
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_which3_;  // which3
  SEXP Rsh_Fir_reg_which4_;  // which4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_first3_;  // first3
  SEXP Rsh_Fir_reg_first4_;  // first4
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_which5_;  // which5
  SEXP Rsh_Fir_reg_which6_;  // which6
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_which7_;  // which7
  SEXP Rsh_Fir_reg_which8_;  // which8
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_srcref17_;  // srcref17
  SEXP Rsh_Fir_reg_srcref18_;  // srcref18
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_srcref20_;  // srcref20
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_index;  // index
  SEXP Rsh_Fir_reg_index1_;  // index1
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r44_;  // r44

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_which = PARAMS[1];
  Rsh_Fir_reg_first = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // which_isMissing = missing.0(which)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_which;
  Rsh_Fir_reg_which_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if which_isMissing then L0() else L1(which)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_which_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(which)
    Rsh_Fir_reg_which_orDefault = Rsh_Fir_reg_which;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("line", "column", "byte", "parse");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("line", "column", "byte", "parse");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1630886398_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_which_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st which = which_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_which_orDefault, RHO);
  (void)(Rsh_Fir_reg_which_orDefault);
  // first_isMissing = missing.0(first)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_first;
  Rsh_Fir_reg_first_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if first_isMissing then L2(TRUE) else L2(first)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_first_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_first_orDefault = Rsh_const(CCP, 8);
    goto L2_;
  } else {
  // L2(first)
    Rsh_Fir_reg_first_orDefault = Rsh_Fir_reg_first;
    goto L2_;
  }

L2_:;
  // st first = first_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_first_orDefault, RHO);
  (void)(Rsh_Fir_reg_first_orDefault);
  // getSrcref = ldf getSrcref
  Rsh_Fir_reg_getSrcref = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

L3_:;
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L26() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L26()
    goto L26_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym2 = ldf `is.list`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf `is.list` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L6_:;
  // c3 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c3 then L33() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L8_:;
  // r21 = `==`(r19, 6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c4 then L41() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L41()
    goto L41_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L13()
  // L13()
  goto L13_;

L10_:;
  // st srcref = r23
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L13()
  // L13()
  goto L13_;

L11_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r28 = dyn c7(srcref9, dx1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_srcref9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

L12_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r27 = dyn __(srcref16, r25)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_srcref16_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r27_;
  goto L11_;

L13_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

L14_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard7 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L15_:;
  // c10 = `is.object`(r33)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c10 then L61() else L62(r33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L61()
    goto L61_;
  } else {
  // L62(r33)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r33_;
    goto L62_;
  }

L16_:;
  // st index = dx3
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // srcref17 = ld srcref
  Rsh_Fir_reg_srcref17_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L18_:;
  // c12 = `is.object`(r39)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c12 then L69() else L70(r39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L69()
    goto L69_;
  } else {
  // L70(r39)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r39_;
    goto L70_;
  }

L19_:;
  // st index = dx6
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L17()
  // L17()
  goto L17_;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx8
  return Rsh_Fir_reg_dx8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1630886398_1, CCP, RHO);
  // r5 = dyn getSrcref(p1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getSrcref, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // st srcref = r5
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // srcref = ld srcref
  Rsh_Fir_reg_srcref = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L24_:;
  // r6 = dyn base1(<sym srcref>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D2_:;
  // deopt 6 [srcref]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_srcref;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L25_:;
  // srcref1 = force? srcref
  Rsh_Fir_reg_srcref1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref);
  // checkMissing(srcref1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_srcref1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c1 = `==`(srcref1, NULL)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_srcref1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c1_;
  goto L3_;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 19);

L29_:;
  // srcref2 = ld srcref
  Rsh_Fir_reg_srcref2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

L30_:;
  // r10 = dyn base2(<sym srcref>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

D3_:;
  // deopt 16 [srcref2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_srcref2_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // srcref3 = force? srcref2
  Rsh_Fir_reg_srcref3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref2_);
  // checkMissing(srcref3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_srcref3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r12 = dyn is_list(srcref3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_srcref3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

D4_:;
  // deopt 19 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L6_;

L33_:;
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

D5_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p2 = prom<V +>{
  //   srcref4 = ld srcref;
  //   srcref5 = force? srcref4;
  //   checkMissing(srcref5);
  //   return srcref5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1630886398_2, CCP, RHO);
  // p3 = prom<V +>{
  //   getSrcLocation = ld getSrcLocation;
  //   getSrcLocation1 = force? getSrcLocation;
  //   checkMissing(getSrcLocation1);
  //   return getSrcLocation1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1630886398_3, CCP, RHO);
  // p4 = prom<V +>{
  //   which1 = ld which;
  //   which2 = force? which1;
  //   checkMissing(which2);
  //   return which2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1630886398_4, CCP, RHO);
  // p5 = prom<V +>{
  //   first1 = ld first;
  //   first2 = force? first1;
  //   checkMissing(first2);
  //   return first2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1630886398_5, CCP, RHO);
  // r17 = dyn sapply(p2, p3, p4, p5)
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args29[3] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 4, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

D6_:;
  // deopt 26 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;

L37_:;
  // srcref6 = ld srcref
  Rsh_Fir_reg_srcref6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L38_:;
  // r18 = dyn base3(<sym srcref>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L8_;

D7_:;
  // deopt 29 [srcref6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_srcref6_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L39_:;
  // srcref7 = force? srcref6
  Rsh_Fir_reg_srcref7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref6_);
  // checkMissing(srcref7)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_srcref7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r20 = dyn length(srcref7)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_srcref7_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 32 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L8(r20)
  // L8(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L8_;

L41_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard4 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // srcref8 = ld srcref
  Rsh_Fir_reg_srcref8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

L43_:;
  // r22 = dyn base4(<sym srcref>, <lang `[`(srcref, c(1, 3))>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L10_;

D9_:;
  // deopt 37 [srcref8]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_srcref8_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // srcref9 = force? srcref8
  Rsh_Fir_reg_srcref9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref8_);
  // checkMissing(srcref9)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_srcref9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // srcref10 = ld srcref
  Rsh_Fir_reg_srcref10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

D10_:;
  // deopt 39 [srcref10]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_srcref10_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L45_:;
  // srcref11 = force? srcref10
  Rsh_Fir_reg_srcref11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref10_);
  // checkMissing(srcref11)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_srcref11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(srcref11)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_srcref11_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c5 then L46() else L47(srcref11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L46()
    goto L46_;
  } else {
  // L47(srcref11)
    Rsh_Fir_reg_srcref13_ = Rsh_Fir_reg_srcref11_;
    goto L47_;
  }

L46_:;
  // dr = tryDispatchBuiltin.1("[", srcref11)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_srcref11_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L48() else L47(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr)
    Rsh_Fir_reg_srcref13_ = Rsh_Fir_reg_dr;
    goto L47_;
  }

L47_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard5 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L48_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

L49_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r26 = dyn c6(1, 3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

L50_:;
  // r24 = dyn base5(1, 3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L12(srcref13, r24)
  // L12(srcref13, r24)
  Rsh_Fir_reg_srcref16_ = Rsh_Fir_reg_srcref13_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L12_;

D11_:;
  // deopt 46 [srcref13, r26]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_srcref13_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L12(srcref13, r26)
  // L12(srcref13, r26)
  Rsh_Fir_reg_srcref16_ = Rsh_Fir_reg_srcref13_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L12_;

D12_:;
  // deopt 49 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L10(r28)
  // L10(r28)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r28_;
  goto L10_;

D13_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p6 = prom<V +>{
  //   which3 = ld which;
  //   which4 = force? which3;
  //   checkMissing(which4);
  //   return which4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1630886398_6, CCP, RHO);
  // r31 = dyn match_arg(p6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

D14_:;
  // deopt 56 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L55_:;
  // st which = r31
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // first3 = ld first
  Rsh_Fir_reg_first3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L56() else D15()
  // L56()
  goto L56_;

D15_:;
  // deopt 58 [first3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_first3_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L56_:;
  // first4 = force? first3
  Rsh_Fir_reg_first4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first3_);
  // checkMissing(first4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_first4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c8 = `as.logical`(first4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_first4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c8 then L57() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L57()
    goto L57_;
  } else {
  // L14()
    goto L14_;
  }

L57_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard6 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r34 = dyn c9(1, 5, 2, 7)
  SEXP Rsh_Fir_array_args49[4];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 4, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L60() else D16()
  // L60()
  goto L60_;

L59_:;
  // r32 = dyn base6[line, column, byte, parse](1, 5, 2, 7)
  SEXP Rsh_Fir_array_args50[4];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names16[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 4, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L15_;

D16_:;
  // deopt 71 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L15_;

L61_:;
  // dr2 = tryDispatchBuiltin.1("[", r33)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc1 then L63() else L62(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr2)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_dr2_;
    goto L62_;
  }

L62_:;
  // which5 = ld which
  Rsh_Fir_reg_which5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

L63_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L16(dx2)
  // L16(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L16_;

D17_:;
  // deopt 72 [r36, which5]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_which5_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // which6 = force? which5
  Rsh_Fir_reg_which6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which5_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r37 = dyn __1(r36, which6)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_which6_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r37)
  // L16(r37)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r37_;
  goto L16_;

L66_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r40 = dyn c11(3, 6, 4, 8)
  SEXP Rsh_Fir_array_args55[4];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args55[3] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 4, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

L67_:;
  // r38 = dyn base7[line, column, byte, parse](3, 6, 4, 8)
  SEXP Rsh_Fir_array_args56[4];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names19[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 4, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(r38)
  // L18(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L18_;

D18_:;
  // deopt 87 [r40]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L18(r40)
  // L18(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L18_;

L69_:;
  // dr4 = tryDispatchBuiltin.1("[", r39)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc2 then L71() else L70(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L71()
    goto L71_;
  } else {
  // L70(dr4)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_dr4_;
    goto L70_;
  }

L70_:;
  // which7 = ld which
  Rsh_Fir_reg_which7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L72() else D19()
  // L72()
  goto L72_;

L71_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L19(dx5)
  // L19(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L19_;

D19_:;
  // deopt 88 [r42, which7]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_which7_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L72_:;
  // which8 = force? which7
  Rsh_Fir_reg_which8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which7_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r43 = dyn __2(r42, which8)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_which8_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(r43)
  // L19(r43)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r43_;
  goto L19_;

D20_:;
  // deopt 92 [srcref17]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_srcref17_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L73_:;
  // srcref18 = force? srcref17
  Rsh_Fir_reg_srcref18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref17_);
  // checkMissing(srcref18)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_srcref18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(srcref18)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_srcref18_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c13 then L74() else L75(srcref18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L74()
    goto L74_;
  } else {
  // L75(srcref18)
    Rsh_Fir_reg_srcref20_ = Rsh_Fir_reg_srcref18_;
    goto L75_;
  }

L74_:;
  // dr6 = tryDispatchBuiltin.1("[", srcref18)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_srcref18_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc3 then L76() else L75(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L76()
    goto L76_;
  } else {
  // L75(dr6)
    Rsh_Fir_reg_srcref20_ = Rsh_Fir_reg_dr6_;
    goto L75_;
  }

L75_:;
  // index = ld index
  Rsh_Fir_reg_index = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L77() else D21()
  // L77()
  goto L77_;

L76_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L20(dx7)
  // L20(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L20_;

D21_:;
  // deopt 94 [srcref20, index]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_srcref20_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_index;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L77_:;
  // index1 = force? index
  Rsh_Fir_reg_index1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_index);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r44 = dyn __3(srcref20, index1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_srcref20_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_index1_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L20(r44)
  // L20(r44)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r44_;
  goto L20_;
}
SEXP Rsh_Fir_user_promise_inner1630886398_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn c("line", "column", "byte", "parse")
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("line", "column", "byte", "parse")
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1630886398_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1630886398_2(SEXP CCP, SEXP RHO) {
  // srcref4 = ld srcref
  Rsh_Fir_reg_srcref4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // srcref5 = force? srcref4
  Rsh_Fir_reg_srcref5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcref4_);
  // checkMissing(srcref5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_srcref5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return srcref5
  return Rsh_Fir_reg_srcref5_;
}
SEXP Rsh_Fir_user_promise_inner1630886398_3(SEXP CCP, SEXP RHO) {
  // getSrcLocation = ld getSrcLocation
  Rsh_Fir_reg_getSrcLocation = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // getSrcLocation1 = force? getSrcLocation
  Rsh_Fir_reg_getSrcLocation1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_getSrcLocation);
  // checkMissing(getSrcLocation1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_getSrcLocation1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return getSrcLocation1
  return Rsh_Fir_reg_getSrcLocation1_;
}
SEXP Rsh_Fir_user_promise_inner1630886398_4(SEXP CCP, SEXP RHO) {
  // which1 = ld which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // which2 = force? which1
  Rsh_Fir_reg_which2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which1_);
  // checkMissing(which2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_which2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return which2
  return Rsh_Fir_reg_which2_;
}
SEXP Rsh_Fir_user_promise_inner1630886398_5(SEXP CCP, SEXP RHO) {
  // first1 = ld first
  Rsh_Fir_reg_first1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // first2 = force? first1
  Rsh_Fir_reg_first2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first1_);
  // checkMissing(first2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_first2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return first2
  return Rsh_Fir_reg_first2_;
}
SEXP Rsh_Fir_user_promise_inner1630886398_6(SEXP CCP, SEXP RHO) {
  // which3 = ld which
  Rsh_Fir_reg_which3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // which4 = force? which3
  Rsh_Fir_reg_which4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which3_);
  // checkMissing(which4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_which4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return which4
  return Rsh_Fir_reg_which4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
