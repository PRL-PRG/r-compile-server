#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3460579492_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3460579492_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3460579492_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3460579492_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner3460579492
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3460579492_, RHO, CCP);
  // st withAutoprint = r
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
SEXP Rsh_Fir_user_function_inner3460579492_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3460579492 dynamic dispatch ([exprs, evaluated, local, `print.`, echo, `max.deparse.length`, `width.cutoff`, deparseCtrl, `skip.echo`, `...`])

  return Rsh_Fir_user_version_inner3460579492_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3460579492_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3460579492 version 0 (*, *, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 10) Rsh_error("FIŘ arity mismatch for inner3460579492/0: expected 10, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_exprs;  // exprs
  SEXP Rsh_Fir_reg_evaluated;  // evaluated
  SEXP Rsh_Fir_reg_local;  // local
  SEXP Rsh_Fir_reg_print_;  // print_
  SEXP Rsh_Fir_reg_echo;  // echo
  SEXP Rsh_Fir_reg_max_deparse_length;  // max_deparse_length
  SEXP Rsh_Fir_reg_width_cutoff;  // width_cutoff
  SEXP Rsh_Fir_reg_deparseCtrl;  // deparseCtrl
  SEXP Rsh_Fir_reg_skip_echo;  // skip_echo
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_evaluated_isMissing;  // evaluated_isMissing
  SEXP Rsh_Fir_reg_evaluated_orDefault;  // evaluated_orDefault
  SEXP Rsh_Fir_reg_local_isMissing;  // local_isMissing
  SEXP Rsh_Fir_reg_local_orDefault;  // local_orDefault
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_print__isMissing;  // print__isMissing
  SEXP Rsh_Fir_reg_print__orDefault;  // print__orDefault
  SEXP Rsh_Fir_reg_echo_isMissing;  // echo_isMissing
  SEXP Rsh_Fir_reg_echo_orDefault;  // echo_orDefault
  SEXP Rsh_Fir_reg_max_deparse_length_isMissing;  // max_deparse_length_isMissing
  SEXP Rsh_Fir_reg_max_deparse_length_orDefault;  // max_deparse_length_orDefault
  SEXP Rsh_Fir_reg_width_cutoff_isMissing;  // width_cutoff_isMissing
  SEXP Rsh_Fir_reg_width_cutoff_orDefault;  // width_cutoff_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_deparseCtrl_isMissing;  // deparseCtrl_isMissing
  SEXP Rsh_Fir_reg_deparseCtrl_orDefault;  // deparseCtrl_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_skip_echo_isMissing;  // skip_echo_isMissing
  SEXP Rsh_Fir_reg_skip_echo_orDefault;  // skip_echo_orDefault
  SEXP Rsh_Fir_reg_evaluated1_;  // evaluated1
  SEXP Rsh_Fir_reg_evaluated2_;  // evaluated2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_exprs1_;  // exprs1
  SEXP Rsh_Fir_reg_exprs2_;  // exprs2
  SEXP Rsh_Fir_reg_is_call;  // is_call
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_exprs3_;  // exprs3
  SEXP Rsh_Fir_reg_exprs4_;  // exprs4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_exprs6_;  // exprs6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_as_list;  // as_list
  SEXP Rsh_Fir_reg_exprs7_;  // exprs7
  SEXP Rsh_Fir_reg_exprs8_;  // exprs8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_exprs9_;  // exprs9
  SEXP Rsh_Fir_reg_exprs10_;  // exprs10
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_srcrefs;  // srcrefs
  SEXP Rsh_Fir_reg_srcrefs1_;  // srcrefs1
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_srcrefs3_;  // srcrefs3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_source;  // source
  SEXP Rsh_Fir_reg_exprs11_;  // exprs11
  SEXP Rsh_Fir_reg_exprs12_;  // exprs12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_local1_;  // local1
  SEXP Rsh_Fir_reg_local2_;  // local2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_print_1_;  // print_1
  SEXP Rsh_Fir_reg_print_2_;  // print_2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_echo1_;  // echo1
  SEXP Rsh_Fir_reg_echo2_;  // echo2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_max_deparse_length1_;  // max_deparse_length1
  SEXP Rsh_Fir_reg_max_deparse_length2_;  // max_deparse_length2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_width_cutoff1_;  // width_cutoff1
  SEXP Rsh_Fir_reg_width_cutoff2_;  // width_cutoff2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_deparseCtrl1_;  // deparseCtrl1
  SEXP Rsh_Fir_reg_deparseCtrl2_;  // deparseCtrl2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_skip_echo1_;  // skip_echo1
  SEXP Rsh_Fir_reg_skip_echo2_;  // skip_echo2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r52_;  // r52

  // Bind parameters
  Rsh_Fir_reg_exprs = PARAMS[0];
  Rsh_Fir_reg_evaluated = PARAMS[1];
  Rsh_Fir_reg_local = PARAMS[2];
  Rsh_Fir_reg_print_ = PARAMS[3];
  Rsh_Fir_reg_echo = PARAMS[4];
  Rsh_Fir_reg_max_deparse_length = PARAMS[5];
  Rsh_Fir_reg_width_cutoff = PARAMS[6];
  Rsh_Fir_reg_deparseCtrl = PARAMS[7];
  Rsh_Fir_reg_skip_echo = PARAMS[8];
  Rsh_Fir_reg_ddd = PARAMS[9];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st exprs = exprs
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_exprs, RHO);
  (void)(Rsh_Fir_reg_exprs);
  // evaluated_isMissing = missing.0(evaluated)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_evaluated;
  Rsh_Fir_reg_evaluated_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if evaluated_isMissing then L0(FALSE) else L0(evaluated)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_evaluated_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_evaluated_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(evaluated)
    Rsh_Fir_reg_evaluated_orDefault = Rsh_Fir_reg_evaluated;
    goto L0_;
  }

L0_:;
  // st evaluated = evaluated_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_evaluated_orDefault, RHO);
  (void)(Rsh_Fir_reg_evaluated_orDefault);
  // local_isMissing = missing.0(local)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_local;
  Rsh_Fir_reg_local_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if local_isMissing then L1() else L2(local)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_local_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(local)
    Rsh_Fir_reg_local_orDefault = Rsh_Fir_reg_local;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_local_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st local = local_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_local_orDefault, RHO);
  (void)(Rsh_Fir_reg_local_orDefault);
  // print__isMissing = missing.0(print_)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_print_;
  Rsh_Fir_reg_print__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if print__isMissing then L3(TRUE) else L3(print_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_print__isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_print__orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(print_)
    Rsh_Fir_reg_print__orDefault = Rsh_Fir_reg_print_;
    goto L3_;
  }

L3_:;
  // st `print.` = print__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_print__orDefault, RHO);
  (void)(Rsh_Fir_reg_print__orDefault);
  // echo_isMissing = missing.0(echo)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_echo;
  Rsh_Fir_reg_echo_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if echo_isMissing then L4(TRUE) else L4(echo)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_echo_isMissing)) {
  // L4(TRUE)
    Rsh_Fir_reg_echo_orDefault = Rsh_const(CCP, 6);
    goto L4_;
  } else {
  // L4(echo)
    Rsh_Fir_reg_echo_orDefault = Rsh_Fir_reg_echo;
    goto L4_;
  }

L4_:;
  // st echo = echo_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_echo_orDefault, RHO);
  (void)(Rsh_Fir_reg_echo_orDefault);
  // max_deparse_length_isMissing = missing.0(max_deparse_length)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_max_deparse_length;
  Rsh_Fir_reg_max_deparse_length_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if max_deparse_length_isMissing then L5(+Infinity) else L5(max_deparse_length)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_max_deparse_length_isMissing)) {
  // L5(+Infinity)
    Rsh_Fir_reg_max_deparse_length_orDefault = Rsh_const(CCP, 9);
    goto L5_;
  } else {
  // L5(max_deparse_length)
    Rsh_Fir_reg_max_deparse_length_orDefault = Rsh_Fir_reg_max_deparse_length;
    goto L5_;
  }

L5_:;
  // st `max.deparse.length` = max_deparse_length_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_max_deparse_length_orDefault, RHO);
  (void)(Rsh_Fir_reg_max_deparse_length_orDefault);
  // width_cutoff_isMissing = missing.0(width_cutoff)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_width_cutoff;
  Rsh_Fir_reg_width_cutoff_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if width_cutoff_isMissing then L6() else L7(width_cutoff)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_width_cutoff_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(width_cutoff)
    Rsh_Fir_reg_width_cutoff_orDefault = Rsh_Fir_reg_width_cutoff;
    goto L7_;
  }

L6_:;
  // p1 = prom<V +>{
  //   sym = ldf max;
  //   base = ldf max in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   getOption = ldf getOption;
  //   r4 = dyn getOption("width");
  //   max = ldf max in base;
  //   r5 = dyn max(20.0, r4);
  //   goto L0(r5);
  // L2():
  //   r2 = dyn base(20.0, <lang getOption("width")>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_1, CCP, RHO);
  // goto L7(p1)
  // L7(p1)
  Rsh_Fir_reg_width_cutoff_orDefault = Rsh_Fir_reg_p1_;
  goto L7_;

L7_:;
  // st `width.cutoff` = width_cutoff_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_width_cutoff_orDefault, RHO);
  (void)(Rsh_Fir_reg_width_cutoff_orDefault);
  // deparseCtrl_isMissing = missing.0(deparseCtrl)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_deparseCtrl;
  Rsh_Fir_reg_deparseCtrl_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if deparseCtrl_isMissing then L8() else L9(deparseCtrl)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_deparseCtrl_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(deparseCtrl)
    Rsh_Fir_reg_deparseCtrl_orDefault = Rsh_Fir_reg_deparseCtrl;
    goto L9_;
  }

L8_:;
  // p2 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   c = ldf c in base;
  //   r9 = dyn c("keepInteger", "showAttributes", "keepNA");
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1("keepInteger", "showAttributes", "keepNA");
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_2, CCP, RHO);
  // goto L9(p2)
  // L9(p2)
  Rsh_Fir_reg_deparseCtrl_orDefault = Rsh_Fir_reg_p2_;
  goto L9_;

L9_:;
  // st deparseCtrl = deparseCtrl_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_deparseCtrl_orDefault, RHO);
  (void)(Rsh_Fir_reg_deparseCtrl_orDefault);
  // skip_echo_isMissing = missing.0(skip_echo)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_skip_echo;
  Rsh_Fir_reg_skip_echo_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if skip_echo_isMissing then L10(0.0) else L10(skip_echo)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_skip_echo_isMissing)) {
  // L10(0.0)
    Rsh_Fir_reg_skip_echo_orDefault = Rsh_const(CCP, 22);
    goto L10_;
  } else {
  // L10(skip_echo)
    Rsh_Fir_reg_skip_echo_orDefault = Rsh_Fir_reg_skip_echo;
    goto L10_;
  }

L10_:;
  // st `skip.echo` = skip_echo_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_skip_echo_orDefault, RHO);
  (void)(Rsh_Fir_reg_skip_echo_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // evaluated1 = ld evaluated
  Rsh_Fir_reg_evaluated1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L11_:;
  // goto L29()
  // L29()
  goto L29_;

L12_:;
  // st exprs = r13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym3 = ldf `is.call`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf `is.call` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard3 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L13_:;
  // c2 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c2 then L38() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L28(NULL)
  // L28(NULL)
  Rsh_Fir_reg_r42_ = Rsh_const(CCP, 26);
  goto L28_;

L15_:;
  // sym4 = ldf quote
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base4 = ldf quote in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L16_:;
  // r22 = `==`(dx4, r20)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c4 then L45() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L45()
    goto L45_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L27(NULL)
  // L27(NULL)
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 26);
  goto L27_;

L18_:;
  // st exprs = dx6
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L19_:;
  // c6 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c6 then L53() else L20(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L53()
    goto L53_;
  } else {
  // L20(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L20_;
  }

L20_:;
  // c18 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c18 then L62() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L62()
    goto L62_;
  } else {
  // L23()
    goto L23_;
  }

L21_:;
  // c15 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c16 = `&&`(c11, c15)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L20(c16)
  // L20(c16)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c16_;
  goto L20_;

L22_:;
  // st srcrefs = r34
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r36 = dyn is_list(r34)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L60() else D8()
  // L60()
  goto L60_;

L23_:;
  // goto L26(NULL)
  // L26(NULL)
  Rsh_Fir_reg_r40_ = Rsh_const(CCP, 26);
  goto L26_;

L24_:;
  // c20 = `is.object`(dx8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c20 then L67() else L68(dx8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L67()
    goto L67_;
  } else {
  // L68(dx8)
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx8_;
    goto L68_;
  }

L25_:;
  // r39 = `-`(dx12, 1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // st `skip.echo` = r39
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // goto L26(r39)
  // L26(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L26_;

L26_:;
  // goto L27(r40)
  // L27(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L27_;

L27_:;
  // goto L28(r41)
  // L28(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L28_;

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // source = ldf source
  Rsh_Fir_reg_source = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L74() else D10()
  // L74()
  goto L74_;

D0_:;
  // deopt 0 [evaluated1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_evaluated1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L30_:;
  // evaluated2 = force? evaluated1
  Rsh_Fir_reg_evaluated2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_evaluated1_);
  // checkMissing(evaluated2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_evaluated2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // r11 = `!`(evaluated2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_evaluated2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c1 then L31() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L11()
    goto L11_;
  }

L31_:;
  // sym2 = ldf substitute
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base2 = ldf substitute in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard2 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r14 = dyn substitute(<sym exprs>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L12(r14)
  // L12(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L12_;

L33_:;
  // r12 = dyn base2(<sym exprs>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L12(r12)
  // L12(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L12_;

L34_:;
  // exprs1 = ld exprs
  Rsh_Fir_reg_exprs1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D1()
  // L36()
  goto L36_;

L35_:;
  // r15 = dyn base3(<sym exprs>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L13(r15)
  // L13(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L13_;

D1_:;
  // deopt 9 [exprs1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_exprs1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L36_:;
  // exprs2 = force? exprs1
  Rsh_Fir_reg_exprs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs1_);
  // checkMissing(exprs2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_exprs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // is_call = ldf `is.call` in base
  Rsh_Fir_reg_is_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r17 = dyn is_call(exprs2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_exprs2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_call, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L37() else D2()
  // L37()
  goto L37_;

D2_:;
  // deopt 12 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L13(r17)
  // L13(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L13_;

L38_:;
  // exprs3 = ld exprs
  Rsh_Fir_reg_exprs3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L39() else D3()
  // L39()
  goto L39_;

D3_:;
  // deopt 13 [exprs3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_exprs3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L39_:;
  // exprs4 = force? exprs3
  Rsh_Fir_reg_exprs4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs3_);
  // checkMissing(exprs4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_exprs4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(exprs4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_exprs4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c3 then L40() else L41(exprs4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L40()
    goto L40_;
  } else {
  // L41(exprs4)
    Rsh_Fir_reg_exprs6_ = Rsh_Fir_reg_exprs4_;
    goto L41_;
  }

L40_:;
  // dr = tryDispatchBuiltin.1("[[", exprs4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_exprs4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc then L42() else L41(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L42()
    goto L42_;
  } else {
  // L41(dr)
    Rsh_Fir_reg_exprs6_ = Rsh_Fir_reg_dr;
    goto L41_;
  }

L41_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r18 = dyn __(exprs6, 1.0)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_exprs6_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L15(r18)
  // L15(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L15_;

L42_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

L43_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r21 = dyn quote(<sym `{`>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L16(dx1, r21)
  // L16(dx1, r21)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L16_;

L44_:;
  // r19 = dyn base4(<sym `{`>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L16(dx1, r19)
  // L16(dx1, r19)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L16_;

L45_:;
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L46() else D4()
  // L46()
  goto L46_;

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p3 = prom<V +>{
  //   exprs7 = ld exprs;
  //   exprs8 = force? exprs7;
  //   checkMissing(exprs8);
  //   return exprs8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_3, CCP, RHO);
  // r24 = dyn as_list(p3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L47() else D5()
  // L47()
  goto L47_;

D5_:;
  // deopt 24 [r24]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L47_:;
  // c5 = `is.object`(r24)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c5 then L48() else L49(r24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L48()
    goto L48_;
  } else {
  // L49(r24)
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r24_;
    goto L49_;
  }

L48_:;
  // dr2 = tryDispatchBuiltin.1("[", r24)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L50() else L49(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L50()
    goto L50_;
  } else {
  // L49(dr2)
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_dr2_;
    goto L49_;
  }

L49_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r27 = dyn __1(r26, -1.0)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L18(r27)
  // L18(r27)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r27_;
  goto L18_;

L50_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L18(dx5)
  // L18(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L18_;

L51_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r30 = dyn missing(<sym skip.echo>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L19(r30)
  // L19(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L19_;

L52_:;
  // r28 = dyn base5(<sym skip.echo>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L19(r28)
  // L19(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L19_;

L53_:;
  // sym6 = ldf `is.list`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf `is.list` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard6 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // sym7 = ldf attr
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base7 = ldf attr in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard7 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L55_:;
  // r31 = dyn base6(<lang `<-`(srcrefs, attr(exprs, "srcref"))>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L21(c6, r31)
  // L21(c6, r31)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L21_;

L56_:;
  // exprs9 = ld exprs
  Rsh_Fir_reg_exprs9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L58() else D6()
  // L58()
  goto L58_;

L57_:;
  // r33 = dyn base7(<sym exprs>, "srcref")
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L22(c6, r33)
  // L22(c6, r33)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L22_;

D6_:;
  // deopt 36 [c6, exprs9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_exprs9_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L58_:;
  // exprs10 = force? exprs9
  Rsh_Fir_reg_exprs10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs9_);
  // checkMissing(exprs10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_exprs10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r35 = dyn attr(exprs10, "srcref")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_exprs10_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L59() else D7()
  // L59()
  goto L59_;

D7_:;
  // deopt 40 [c6, r35]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L22(c6, r35)
  // L22(c6, r35)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L22_;

D8_:;
  // deopt 43 [c14, r36]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L21(c14, r36)
  // L21(c14, r36)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r36_;
  goto L21_;

L62_:;
  // srcrefs = ld srcrefs
  Rsh_Fir_reg_srcrefs = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

D9_:;
  // deopt 45 [srcrefs]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_srcrefs;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L63_:;
  // srcrefs1 = force? srcrefs
  Rsh_Fir_reg_srcrefs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcrefs);
  // checkMissing(srcrefs1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_srcrefs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(srcrefs1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_srcrefs1_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c19 then L64() else L65(srcrefs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L64()
    goto L64_;
  } else {
  // L65(srcrefs1)
    Rsh_Fir_reg_srcrefs3_ = Rsh_Fir_reg_srcrefs1_;
    goto L65_;
  }

L64_:;
  // dr4 = tryDispatchBuiltin.1("[[", srcrefs1)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_srcrefs1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc2 then L66() else L65(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr4)
    Rsh_Fir_reg_srcrefs3_ = Rsh_Fir_reg_dr4_;
    goto L65_;
  }

L65_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r37 = dyn __2(srcrefs3, 1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_srcrefs3_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L24(r37)
  // L24(r37)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r37_;
  goto L24_;

L66_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L24(dx7)
  // L24(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L24_;

L67_:;
  // dr6 = tryDispatchBuiltin.1("[", dx8)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc3 then L69() else L68(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L69()
    goto L69_;
  } else {
  // L68(dr6)
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dr6_;
    goto L68_;
  }

L68_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r38 = dyn __3(dx10, 7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L25(r38)
  // L25(r38)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r38_;
  goto L25_;

L69_:;
  // dx11 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L25(dx11)
  // L25(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L25_;

D10_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p4 = prom<V +>{
  //   exprs11 = ld exprs;
  //   exprs12 = force? exprs11;
  //   checkMissing(exprs12);
  //   return exprs12;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_4, CCP, RHO);
  // p5 = prom<V +>{
  //   local1 = ld local;
  //   local2 = force? local1;
  //   checkMissing(local2);
  //   return local2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_5, CCP, RHO);
  // p6 = prom<V +>{
  //   print_1 = ld `print.`;
  //   print_2 = force? print_1;
  //   checkMissing(print_2);
  //   return print_2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_6, CCP, RHO);
  // p7 = prom<V +>{
  //   echo1 = ld echo;
  //   echo2 = force? echo1;
  //   checkMissing(echo2);
  //   return echo2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_7, CCP, RHO);
  // p8 = prom<V +>{
  //   max_deparse_length1 = ld `max.deparse.length`;
  //   max_deparse_length2 = force? max_deparse_length1;
  //   checkMissing(max_deparse_length2);
  //   return max_deparse_length2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_8, CCP, RHO);
  // p9 = prom<V +>{
  //   width_cutoff1 = ld `width.cutoff`;
  //   width_cutoff2 = force? width_cutoff1;
  //   checkMissing(width_cutoff2);
  //   return width_cutoff2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_9, CCP, RHO);
  // p10 = prom<V +>{
  //   deparseCtrl1 = ld deparseCtrl;
  //   deparseCtrl2 = force? deparseCtrl1;
  //   checkMissing(deparseCtrl2);
  //   return deparseCtrl2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_10, CCP, RHO);
  // p11 = prom<V +>{
  //   skip_echo1 = ld `skip.echo`;
  //   skip_echo2 = force? skip_echo1;
  //   checkMissing(skip_echo2);
  //   return skip_echo2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3460579492_11, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // r52 = dyn source[exprs, local, `print.eval`, echo, `max.deparse.length`, `width.cutoff`, deparseCtrl, `skip.echo`, `...`](p4, p5, p6, p7, p8, p9, p10, p11, ddd1)
  SEXP Rsh_Fir_array_args78[9];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args78[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args78[4] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args78[5] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args78[6] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args78[7] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args78[8] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names22[9];
  Rsh_Fir_array_arg_names22[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_arg_names22[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names22[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names22[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names22[6] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names22[7] = Rsh_const(CCP, 23);
  Rsh_Fir_array_arg_names22[8] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_source, 9, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L75() else D11()
  // L75()
  goto L75_;

D11_:;
  // deopt 83 [r52]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L75_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r52
  return Rsh_Fir_reg_r52_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3460579492_1(SEXP CCP, SEXP RHO) {
  // sym = ldf max
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf max in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
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
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r4 = dyn getOption("width")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn max(20.0, r4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r2 = dyn base(20.0, <lang getOption("width")>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_2(SEXP CCP, SEXP RHO) {
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r9 = dyn c("keepInteger", "showAttributes", "keepNA")
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1("keepInteger", "showAttributes", "keepNA")
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_3(SEXP CCP, SEXP RHO) {
  // exprs7 = ld exprs
  Rsh_Fir_reg_exprs7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // exprs8 = force? exprs7
  Rsh_Fir_reg_exprs8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs7_);
  // checkMissing(exprs8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_exprs8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return exprs8
  return Rsh_Fir_reg_exprs8_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_4(SEXP CCP, SEXP RHO) {
  // exprs11 = ld exprs
  Rsh_Fir_reg_exprs11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // exprs12 = force? exprs11
  Rsh_Fir_reg_exprs12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exprs11_);
  // checkMissing(exprs12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_exprs12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return exprs12
  return Rsh_Fir_reg_exprs12_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_5(SEXP CCP, SEXP RHO) {
  // local1 = ld local
  Rsh_Fir_reg_local1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // local2 = force? local1
  Rsh_Fir_reg_local2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_local1_);
  // checkMissing(local2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_local2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return local2
  return Rsh_Fir_reg_local2_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_6(SEXP CCP, SEXP RHO) {
  // print_1 = ld `print.`
  Rsh_Fir_reg_print_1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // print_2 = force? print_1
  Rsh_Fir_reg_print_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_print_1_);
  // checkMissing(print_2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_print_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return print_2
  return Rsh_Fir_reg_print_2_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_7(SEXP CCP, SEXP RHO) {
  // echo1 = ld echo
  Rsh_Fir_reg_echo1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // echo2 = force? echo1
  Rsh_Fir_reg_echo2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_echo1_);
  // checkMissing(echo2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_echo2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return echo2
  return Rsh_Fir_reg_echo2_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_8(SEXP CCP, SEXP RHO) {
  // max_deparse_length1 = ld `max.deparse.length`
  Rsh_Fir_reg_max_deparse_length1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // max_deparse_length2 = force? max_deparse_length1
  Rsh_Fir_reg_max_deparse_length2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_deparse_length1_);
  // checkMissing(max_deparse_length2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_max_deparse_length2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return max_deparse_length2
  return Rsh_Fir_reg_max_deparse_length2_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_9(SEXP CCP, SEXP RHO) {
  // width_cutoff1 = ld `width.cutoff`
  Rsh_Fir_reg_width_cutoff1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // width_cutoff2 = force? width_cutoff1
  Rsh_Fir_reg_width_cutoff2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_width_cutoff1_);
  // checkMissing(width_cutoff2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_width_cutoff2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return width_cutoff2
  return Rsh_Fir_reg_width_cutoff2_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_10(SEXP CCP, SEXP RHO) {
  // deparseCtrl1 = ld deparseCtrl
  Rsh_Fir_reg_deparseCtrl1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // deparseCtrl2 = force? deparseCtrl1
  Rsh_Fir_reg_deparseCtrl2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deparseCtrl1_);
  // checkMissing(deparseCtrl2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_deparseCtrl2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return deparseCtrl2
  return Rsh_Fir_reg_deparseCtrl2_;
}
SEXP Rsh_Fir_user_promise_inner3460579492_11(SEXP CCP, SEXP RHO) {
  // skip_echo1 = ld `skip.echo`
  Rsh_Fir_reg_skip_echo1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // skip_echo2 = force? skip_echo1
  Rsh_Fir_reg_skip_echo2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_skip_echo1_);
  // checkMissing(skip_echo2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_skip_echo2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return skip_echo2
  return Rsh_Fir_reg_skip_echo2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
