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
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_12(SEXP CCP, SEXP RHO);
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
  // st `.parse_usage_as_much_as_possible` = r
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
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_expression;  // expression
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg__Rd_drop_nodes_with_tags;  // _Rd_drop_nodes_with_tags
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_as_character_Rd;  // as_character_Rd
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_txt;  // txt
  SEXP Rsh_Fir_reg_txt1_;  // txt1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_txt2_;  // txt2
  SEXP Rsh_Fir_reg_txt3_;  // txt3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg__dquote_method_markup;  // _dquote_method_markup
  SEXP Rsh_Fir_reg_txt4_;  // txt4
  SEXP Rsh_Fir_reg_txt5_;  // txt5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg__S3_method_markup_regexp;  // _S3_method_markup_regexp
  SEXP Rsh_Fir_reg__S3_method_markup_regexp1_;  // _S3_method_markup_regexp1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg__dquote_method_markup1_;  // _dquote_method_markup1
  SEXP Rsh_Fir_reg_txt6_;  // txt6
  SEXP Rsh_Fir_reg_txt7_;  // txt7
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg__S4_method_markup_regexp;  // _S4_method_markup_regexp
  SEXP Rsh_Fir_reg__S4_method_markup_regexp1_;  // _S4_method_markup_regexp1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_txt8_;  // txt8
  SEXP Rsh_Fir_reg_txt9_;  // txt9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_gsub1_;  // gsub1
  SEXP Rsh_Fir_reg_txt10_;  // txt10
  SEXP Rsh_Fir_reg_txt11_;  // txt11
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg__parse_text_as_much_as_possible;  // _parse_text_as_much_as_possible
  SEXP Rsh_Fir_reg_txt12_;  // txt12
  SEXP Rsh_Fir_reg_txt13_;  // txt13
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r42_;  // r42

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf length in base
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
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L9() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // _Rd_drop_nodes_with_tags = ldf `.Rd_drop_nodes_with_tags`
  Rsh_Fir_reg__Rd_drop_nodes_with_tags = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L4_:;
  // st txt = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

L5_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn length(x2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  // sym1 = ldf expression
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf expression in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r6 = dyn expression()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 0, NULL, NULL, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L11_:;
  // r4 = dyn base1()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D2_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   c1 = ldf c in base;
  //   r12 = dyn c1("COMMENT", "\\special");
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base2("COMMENT", "\\special");
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r14 = dyn _Rd_drop_nodes_with_tags(p, p1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Rd_drop_nodes_with_tags, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 17 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // st x = r14
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 22 ["Rd", l, "Rd"]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_const(CCP, 11);
  Rsh_Fir_deopt(22, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // r15 = dyn attr__(l, NULL, "Rd_tag", "Rd")
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 25 ["Rd", r15]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // st x = r15
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // as_character_Rd = ldf `as.character.Rd`
  Rsh_Fir_reg_as_character_Rd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r17 = dyn as_character_Rd(p2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character_Rd, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 30 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // st txt = r17
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // l1 = ld txt
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c2 = `is.object`(l1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L21("...", l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L21("...", l1)
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L21_;
  }

L20_:;
  // dr = tryDispatchBuiltin.0("[<-", l1, "...")
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21("...", dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21("...", dr)
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D8_:;
  // deopt 36 [r19, l3, "..."]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_const(CCP, 15);
  Rsh_Fir_deopt(36, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // p3 = prom<V +>{
  //   txt = ld txt;
  //   txt1 = force? txt;
  //   checkMissing(txt1);
  //   return txt1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   c3 = ldf c in base;
  //   r25 = dyn c3("\\dots", "\\ldots");
  //   goto L0(r25);
  // L2():
  //   r23 = dyn base3("\\dots", "\\ldots");
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_4, CCP, RHO);
  // r27 = dyn _in_(p3, p4)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 39 [r19, l3, "...", r27]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(39, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r28 = dyn ___(l3, "...", r27)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(r28)
  // L4(r28)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r28_;
  goto L4_;

D10_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p5 = prom<V +>{
  //   txt2 = ld txt;
  //   txt3 = force? txt2;
  //   checkMissing(txt3);
  //   return txt3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_5, CCP, RHO);
  // r30 = dyn paste[, collapse](p5, "")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 47 [r30]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // st txt = r30
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // _dquote_method_markup = ldf `.dquote_method_markup`
  Rsh_Fir_reg__dquote_method_markup = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

D12_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p6 = prom<V +>{
  //   txt4 = ld txt;
  //   txt5 = force? txt4;
  //   checkMissing(txt5);
  //   return txt5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_6, CCP, RHO);
  // p7 = prom<V +>{
  //   _S3_method_markup_regexp = ld `.S3_method_markup_regexp`;
  //   _S3_method_markup_regexp1 = force? _S3_method_markup_regexp;
  //   checkMissing(_S3_method_markup_regexp1);
  //   return _S3_method_markup_regexp1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_7, CCP, RHO);
  // r33 = dyn _dquote_method_markup(p6, p7)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__dquote_method_markup, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L28() else D13()
  // L28()
  goto L28_;

D13_:;
  // deopt 53 [r33]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L28_:;
  // st txt = r33
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // _dquote_method_markup1 = ldf `.dquote_method_markup`
  Rsh_Fir_reg__dquote_method_markup1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L29() else D14()
  // L29()
  goto L29_;

D14_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p8 = prom<V +>{
  //   txt6 = ld txt;
  //   txt7 = force? txt6;
  //   checkMissing(txt7);
  //   return txt7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_8, CCP, RHO);
  // p9 = prom<V +>{
  //   _S4_method_markup_regexp = ld `.S4_method_markup_regexp`;
  //   _S4_method_markup_regexp1 = force? _S4_method_markup_regexp;
  //   checkMissing(_S4_method_markup_regexp1);
  //   return _S4_method_markup_regexp1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_9, CCP, RHO);
  // r36 = dyn _dquote_method_markup1(p8, p9)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__dquote_method_markup1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L30() else D15()
  // L30()
  goto L30_;

D15_:;
  // deopt 59 [r36]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // st txt = r36
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L31() else D16()
  // L31()
  goto L31_;

D16_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p10 = prom<V +>{
  //   txt8 = ld txt;
  //   txt9 = force? txt8;
  //   checkMissing(txt9);
  //   return txt9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_10, CCP, RHO);
  // r38 = dyn gsub("(^|[^\\])\\\\($|[^abfnrtuUvx0-9'\"\\])", "\\1<unescaped bksl>\\2", p10)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L32() else D17()
  // L32()
  goto L32_;

D17_:;
  // deopt 66 [r38]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // st txt = r38
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // gsub1 = ldf gsub
  Rsh_Fir_reg_gsub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L33() else D18()
  // L33()
  goto L33_;

D18_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p11 = prom<V +>{
  //   txt10 = ld txt;
  //   txt11 = force? txt10;
  //   checkMissing(txt11);
  //   return txt11;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_11, CCP, RHO);
  // r40 = dyn gsub1("(^|[^\\])\\\\($|[^abfnrtuUvx0-9'\"\\])", "\\1<unescaped bksl>\\2", p11)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub1_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L34() else D19()
  // L34()
  goto L34_;

D19_:;
  // deopt 73 [r40]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L34_:;
  // st txt = r40
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // _parse_text_as_much_as_possible = ldf `.parse_text_as_much_as_possible`
  Rsh_Fir_reg__parse_text_as_much_as_possible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L35() else D20()
  // L35()
  goto L35_;

D20_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p12 = prom<V +>{
  //   txt12 = ld txt;
  //   txt13 = force? txt12;
  //   checkMissing(txt13);
  //   return txt13;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_12, CCP, RHO);
  // r42 = dyn _parse_text_as_much_as_possible(p12)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__parse_text_as_much_as_possible, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L36() else D21()
  // L36()
  goto L36_;

D21_:;
  // deopt 78 [r42]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L36_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn c1("COMMENT", "\\special")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base2("COMMENT", "\\special")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO) {
  // txt = ld txt
  Rsh_Fir_reg_txt = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // txt1 = force? txt
  Rsh_Fir_reg_txt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt);
  // checkMissing(txt1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_txt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return txt1
  return Rsh_Fir_reg_txt1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r25 = dyn c3("\\dots", "\\ldots")
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L0_;

L2_:;
  // r23 = dyn base3("\\dots", "\\ldots")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO) {
  // txt2 = ld txt
  Rsh_Fir_reg_txt2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // txt3 = force? txt2
  Rsh_Fir_reg_txt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt2_);
  // checkMissing(txt3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_txt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return txt3
  return Rsh_Fir_reg_txt3_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO) {
  // txt4 = ld txt
  Rsh_Fir_reg_txt4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // txt5 = force? txt4
  Rsh_Fir_reg_txt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt4_);
  // checkMissing(txt5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_txt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return txt5
  return Rsh_Fir_reg_txt5_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_7(SEXP CCP, SEXP RHO) {
  // _S3_method_markup_regexp = ld `.S3_method_markup_regexp`
  Rsh_Fir_reg__S3_method_markup_regexp = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // _S3_method_markup_regexp1 = force? _S3_method_markup_regexp
  Rsh_Fir_reg__S3_method_markup_regexp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__S3_method_markup_regexp);
  // checkMissing(_S3_method_markup_regexp1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg__S3_method_markup_regexp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return _S3_method_markup_regexp1
  return Rsh_Fir_reg__S3_method_markup_regexp1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_8(SEXP CCP, SEXP RHO) {
  // txt6 = ld txt
  Rsh_Fir_reg_txt6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // txt7 = force? txt6
  Rsh_Fir_reg_txt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt6_);
  // checkMissing(txt7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_txt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return txt7
  return Rsh_Fir_reg_txt7_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_9(SEXP CCP, SEXP RHO) {
  // _S4_method_markup_regexp = ld `.S4_method_markup_regexp`
  Rsh_Fir_reg__S4_method_markup_regexp = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // _S4_method_markup_regexp1 = force? _S4_method_markup_regexp
  Rsh_Fir_reg__S4_method_markup_regexp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__S4_method_markup_regexp);
  // checkMissing(_S4_method_markup_regexp1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg__S4_method_markup_regexp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return _S4_method_markup_regexp1
  return Rsh_Fir_reg__S4_method_markup_regexp1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_10(SEXP CCP, SEXP RHO) {
  // txt8 = ld txt
  Rsh_Fir_reg_txt8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // txt9 = force? txt8
  Rsh_Fir_reg_txt9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt8_);
  // checkMissing(txt9)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_txt9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return txt9
  return Rsh_Fir_reg_txt9_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_11(SEXP CCP, SEXP RHO) {
  // txt10 = ld txt
  Rsh_Fir_reg_txt10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // txt11 = force? txt10
  Rsh_Fir_reg_txt11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt10_);
  // checkMissing(txt11)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_txt11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return txt11
  return Rsh_Fir_reg_txt11_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_12(SEXP CCP, SEXP RHO) {
  // txt12 = ld txt
  Rsh_Fir_reg_txt12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // txt13 = force? txt12
  Rsh_Fir_reg_txt13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt12_);
  // checkMissing(txt13)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_txt13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return txt13
  return Rsh_Fir_reg_txt13_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
