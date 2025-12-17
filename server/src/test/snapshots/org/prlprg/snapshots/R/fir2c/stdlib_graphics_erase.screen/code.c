#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1250467081_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1250467081_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1250467081_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1250467081_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1250467081_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1250467081_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1250467081_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1250467081_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1250467081_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1250467081_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner1250467081
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1250467081_, RHO, CCP);
  // st `erase.screen` = r
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
SEXP Rsh_Fir_user_function_inner1250467081_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1250467081 dynamic dispatch ([n])

  return Rsh_Fir_user_version_inner1250467081_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1250467081_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1250467081 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1250467081/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n_isMissing;  // n_isMissing
  SEXP Rsh_Fir_reg_n_orDefault;  // n_orDefault
  SEXP Rsh_Fir_reg_cur_screen;  // cur_screen
  SEXP Rsh_Fir_reg_cur_screen1_;  // cur_screen1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__SSexists;  // _SSexists
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__SSget;  // _SSget
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg__SSget1_;  // _SSget1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg__SSget2_;  // _SSget2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_plot_new;  // plot_new
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_polygon;  // polygon
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_par2_;  // par2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r50_;  // r50

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if n_isMissing then L0() else L1(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   cur_screen = ld `cur.screen`;
  //   cur_screen1 = force? cur_screen;
  //   checkMissing(cur_screen1);
  //   return cur_screen1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // _SSexists = ldf `.SSexists`
  Rsh_Fir_reg__SSexists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L2_:;
  // _SSget = ldf `.SSget`
  Rsh_Fir_reg__SSget = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L4_:;
  // c7 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c7 then L21() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L21()
    goto L21_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

L7_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r49
  return Rsh_Fir_reg_r49_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r1 = dyn _SSexists("sp.screens")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSexists, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L11() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L2()
    goto L2_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 7);

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r5 = dyn _SSget("sp.cur.screen")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // st `cur.screen` = r5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = prom<V +>{
  //   n1 = ld n;
  //   n2 = force? n1;
  //   checkMissing(n2);
  //   return n2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_1, CCP, RHO);
  // p2 = prom<V +>{
  //   _SSget1 = ldf `.SSget`;
  //   r7 = dyn _SSget1("sp.valid.screens");
  //   return r7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_2, CCP, RHO);
  // r9 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 19 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // r10 = `!`(r9)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c1 then L18() else L4(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L4(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L4_;
  }

L18_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 21 [c1, n3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r11 = `!=`(n4, 0.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c5 = `&&`(c1, c4)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L4(c5)
  // L4(c5)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c5_;
  goto L4_;

L21_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // r12 = dyn stop("invalid screen number")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 29 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L6()
  // L6()
  goto L6_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p3 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   c8 = ldf c in base;
  //   r16 = dyn c8(0.0, 1.0, 0.0, 1.0);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base(0.0, 1.0, 0.0, 1.0);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r19):
  //   return r19;
  // L1():
  //   c9 = ldf c in base;
  //   r20 = dyn c9(0.0, 0.0, 0.0, 0.0);
  //   goto L0(r20);
  // L2():
  //   r18 = dyn base1(0.0, 0.0, 0.0, 0.0);
  //   goto L0(r18);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_4, CCP, RHO);
  // p5 = prom<V +>{
  //   n5 = ld n;
  //   n6 = force? n5;
  //   checkMissing(n6);
  //   r22 = `>`(n6, 0.0);
  //   c10 = `as.logical`(r22);
  //   if c10 then L3() else L0();
  // L0():
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L12() else L13();
  // L3():
  //   _SSget2 = ldf `.SSget`;
  //   r23 = dyn _SSget2("sp.screens");
  //   c11 = `is.object`(r23);
  //   if c11 then L4() else L5(r23);
  // L1(dx1):
  //   c12 = `is.object`(dx1);
  //   if c12 then L8() else L9(dx1);
  // L2(r29):
  //   return r29;
  // L4():
  //   dr = tryDispatchBuiltin.1("[[", r23);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(r25):
  //   n7 = ld n;
  //   n8 = force? n7;
  //   __ = ldf `[[` in base;
  //   r26 = dyn __(r25, n8);
  //   goto L1(r26);
  // L12():
  //   c13 = ldf c in base;
  //   r30 = dyn c13(0.0, 1.0, 0.0, 1.0);
  //   goto L2(r30);
  // L13():
  //   r28 = dyn base2(0.0, 1.0, 0.0, 1.0);
  //   goto L2(r28);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // L7(dx5):
  //   return dx5;
  // L8():
  //   dr2 = tryDispatchBuiltin.1("$", dx1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L10() else L9(dr2);
  // L9(dx3):
  //   r27 = `$`(dx3, <sym fig>);
  //   goto L7(r27);
  // L10():
  //   dx4 = getTryDispatchBuiltinValue(dr2);
  //   goto L7(dx4);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_5, CCP, RHO);
  // r32 = dyn par[usr, mar, fig, xaxs, yaxs](p3, p4, p5, "i", "i")
  SEXP Rsh_Fir_array_args40[5];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args40[4] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[5];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names13[4] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 5, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

D10_:;
  // deopt 44 [r32]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // st old = r32
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym3 = ldf `on.exit`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf `on.exit` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard3 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r35 = dyn on_exit(<lang par(old)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7()
  // L7()
  goto L7_;

L28_:;
  // r33 = dyn base3(<lang par(old)>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7()
  // L7()
  goto L7_;

D11_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // r36 = dyn par1[new](TRUE)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

D12_:;
  // deopt 53 [r36]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L30_:;
  // plot_new = ldf `plot.new`
  Rsh_Fir_reg_plot_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L31() else D13()
  // L31()
  goto L31_;

D13_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r37 = dyn plot_new()
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot_new, 0, NULL, NULL, CCP, RHO);
  // check L32() else D14()
  // L32()
  goto L32_;

D14_:;
  // deopt 56 [r37]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // polygon = ldf polygon
  Rsh_Fir_reg_polygon = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L33() else D15()
  // L33()
  goto L33_;

D15_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p6 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r39):
  //   return r39;
  // L1():
  //   c14 = ldf c in base;
  //   r40 = dyn c14(0.0, 1.0, 1.0, 0.0);
  //   goto L0(r40);
  // L2():
  //   r38 = dyn base4(0.0, 1.0, 1.0, 0.0);
  //   goto L0(r38);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_6, CCP, RHO);
  // p7 = prom<V +>{
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r43):
  //   return r43;
  // L1():
  //   c15 = ldf c in base;
  //   r44 = dyn c15(0.0, 0.0, 1.0, 1.0);
  //   goto L0(r44);
  // L2():
  //   r42 = dyn base5(0.0, 0.0, 1.0, 1.0);
  //   goto L0(r42);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1250467081_7, CCP, RHO);
  // r46 = dyn polygon[, , border, col](p6, p7, NA_LGL, 0.0)
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_polygon, 4, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L34() else D16()
  // L34()
  goto L34_;

D16_:;
  // deopt 65 [r46]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // par2 = ldf par
  Rsh_Fir_reg_par2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L35() else D17()
  // L35()
  goto L35_;

D17_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // r47 = dyn par2[new](TRUE)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par2_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L36() else D18()
  // L36()
  goto L36_;

D18_:;
  // deopt 70 [r47]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // sym6 = ldf invisible
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base6 = ldf invisible in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard6 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r50 = dyn invisible()
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L39() else D19()
  // L39()
  goto L39_;

L38_:;
  // r48 = dyn base6()
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 0, NULL, NULL, CCP, RHO);
  // goto L8(r48)
  // L8(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L8_;

D19_:;
  // deopt 74 [r50]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L8(r50)
  // L8(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_(SEXP CCP, SEXP RHO) {
  // cur_screen = ld `cur.screen`
  Rsh_Fir_reg_cur_screen = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // cur_screen1 = force? cur_screen
  Rsh_Fir_reg_cur_screen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cur_screen);
  // checkMissing(cur_screen1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_cur_screen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return cur_screen1
  return Rsh_Fir_reg_cur_screen1_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_1(SEXP CCP, SEXP RHO) {
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return n2
  return Rsh_Fir_reg_n2_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_2(SEXP CCP, SEXP RHO) {
  // _SSget1 = ldf `.SSget`
  Rsh_Fir_reg__SSget1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r7 = dyn _SSget1("sp.valid.screens")
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_3(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
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
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r16 = dyn c8(0.0, 1.0, 0.0, 1.0)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base(0.0, 1.0, 0.0, 1.0)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_4(SEXP CCP, SEXP RHO) {
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r19
  return Rsh_Fir_reg_r19_;

L1_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r20 = dyn c9(0.0, 0.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 4, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L0_;

L2_:;
  // r18 = dyn base1(0.0, 0.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_5(SEXP CCP, SEXP RHO) {
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r22 = `>`(n6, 0.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c10 then L3() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L3()
    goto L3_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L1_:;
  // c12 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c12 then L8() else L9(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L8()
    goto L8_;
  } else {
  // L9(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L9_;
  }

L2_:;
  // return r29
  return Rsh_Fir_reg_r29_;

L3_:;
  // _SSget2 = ldf `.SSget`
  Rsh_Fir_reg__SSget2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r23 = dyn _SSget2("sp.screens")
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // c11 = `is.object`(r23)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c11 then L4() else L5(r23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L4()
    goto L4_;
  } else {
  // L5(r23)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    goto L5_;
  }

L4_:;
  // dr = tryDispatchBuiltin.1("[[", r23)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r26 = dyn __(r25, n8)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(r26)
  // L1(r26)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r26_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L7_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L8_:;
  // dr2 = tryDispatchBuiltin.1("$", dx1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L10() else L9(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L9_;
  }

L9_:;
  // r27 = `$`(dx3, <sym fig>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L7(r27)
  // L7(r27)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r27_;
  goto L7_;

L10_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L7(dx4)
  // L7(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;

L12_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r30 = dyn c13(0.0, 1.0, 0.0, 1.0)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2(r30)
  // L2(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L2_;

L13_:;
  // r28 = dyn base2(0.0, 1.0, 0.0, 1.0)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 4, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r28)
  // L2(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_6(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r39
  return Rsh_Fir_reg_r39_;

L1_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r40 = dyn c14(0.0, 1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args46[4];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 4, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // r38 = dyn base4(0.0, 1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args47[4];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args47[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 4, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1250467081_7(SEXP CCP, SEXP RHO) {
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r43
  return Rsh_Fir_reg_r43_;

L1_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r44 = dyn c15(0.0, 0.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args49[4];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 4, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L0_;

L2_:;
  // r42 = dyn base5(0.0, 0.0, 1.0, 1.0)
  SEXP Rsh_Fir_array_args50[4];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 4, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
