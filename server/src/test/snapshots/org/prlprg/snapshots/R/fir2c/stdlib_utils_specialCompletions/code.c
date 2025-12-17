#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4120097962_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4120097962_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4120097962_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4120097962_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner4120097962
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4120097962_, RHO, CCP);
  // st specialCompletions = r
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
SEXP Rsh_Fir_user_function_inner4120097962_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4120097962 dynamic dispatch ([text, spl])

  return Rsh_Fir_user_version_inner4120097962_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4120097962_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4120097962 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4120097962/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_spl;  // spl
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_spl1_;  // spl1
  SEXP Rsh_Fir_reg_spl2_;  // spl2
  SEXP Rsh_Fir_reg_which_max;  // which_max
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_spl3_;  // spl3
  SEXP Rsh_Fir_reg_spl4_;  // spl4
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_wm;  // wm
  SEXP Rsh_Fir_reg_wm1_;  // wm1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_spl5_;  // spl5
  SEXP Rsh_Fir_reg_spl6_;  // spl6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_spl8_;  // spl8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_wm2_;  // wm2
  SEXP Rsh_Fir_reg_wm3_;  // wm3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_opStart;  // opStart
  SEXP Rsh_Fir_reg_opStart1_;  // opStart1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_opStart4_;  // opStart4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_op;  // op
  SEXP Rsh_Fir_reg_op1_;  // op1
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_opStart5_;  // opStart5
  SEXP Rsh_Fir_reg_opStart6_;  // opStart6
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_substr;  // substr
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_text2_;  // text2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_opStart7_;  // opStart7
  SEXP Rsh_Fir_reg_opStart8_;  // opStart8
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_substr1_;  // substr1
  SEXP Rsh_Fir_reg_text3_;  // text3
  SEXP Rsh_Fir_reg_text4_;  // text4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_opEnd;  // opEnd
  SEXP Rsh_Fir_reg_opEnd1_;  // opEnd1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_op2_;  // op2
  SEXP Rsh_Fir_reg_op3_;  // op3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_helpCompletions;  // helpCompletions
  SEXP Rsh_Fir_reg_prefix;  // prefix
  SEXP Rsh_Fir_reg_prefix1_;  // prefix1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_suffix;  // suffix
  SEXP Rsh_Fir_reg_suffix1_;  // suffix1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_opStart9_;  // opStart9
  SEXP Rsh_Fir_reg_opStart10_;  // opStart10
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_specialOpCompletionsHelper;  // specialOpCompletionsHelper
  SEXP Rsh_Fir_reg_op4_;  // op4
  SEXP Rsh_Fir_reg_op5_;  // op5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_suffix2_;  // suffix2
  SEXP Rsh_Fir_reg_suffix3_;  // suffix3
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_prefix2_;  // prefix2
  SEXP Rsh_Fir_reg_prefix3_;  // prefix3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_comps;  // comps
  SEXP Rsh_Fir_reg_comps1_;  // comps1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_prefix4_;  // prefix4
  SEXP Rsh_Fir_reg_prefix5_;  // prefix5
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_op6_;  // op6
  SEXP Rsh_Fir_reg_op7_;  // op7
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_comps2_;  // comps2
  SEXP Rsh_Fir_reg_comps3_;  // comps3
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r47_;  // r47

  // Bind parameters
  Rsh_Fir_reg_text = PARAMS[0];
  Rsh_Fir_reg_spl = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st text = text
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_text, RHO);
  (void)(Rsh_Fir_reg_text);
  // st spl = spl
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_spl, RHO);
  (void)(Rsh_Fir_reg_spl);
  // sym = ldf `which.max`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `which.max` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L0_:;
  // st wm = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // c = `is.object`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L22() else L23(r4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L23(r4)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r4_;
    goto L23_;
  }

L2_:;
  // st op = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // spl5 = ld spl
  Rsh_Fir_reg_spl5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L3_:;
  // st opStart = dx3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // opStart = ld opStart
  Rsh_Fir_reg_opStart = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L4_:;
  // r13 = `+`(opStart4, r11)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_opStart4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st opEnd = r13
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // opStart5 = ld opStart
  Rsh_Fir_reg_opStart5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L5_:;
  // substr = ldf substr
  Rsh_Fir_reg_substr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

L7_:;
  // opStart9 = ld opStart
  Rsh_Fir_reg_opStart9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L52() else D20()
  // L52()
  goto L52_;

L9_:;
  // specialOpCompletionsHelper = ldf specialOpCompletionsHelper
  Rsh_Fir_reg_specialOpCompletionsHelper = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L58() else D23()
  // L58()
  goto L58_;

L11_:;
  // r42 = `==`(r40, 0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c5 then L64() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L64()
    goto L64_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L66() else D27()
  // L66()
  goto L66_;

L14_:;
  // spl1 = ld spl
  Rsh_Fir_reg_spl1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L15_:;
  // r = dyn base(<sym spl>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [spl1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_spl1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // spl2 = force? spl1
  Rsh_Fir_reg_spl2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spl1_);
  // checkMissing(spl2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_spl2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // which_max = ldf `which.max` in base
  Rsh_Fir_reg_which_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn which_max(spl2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_spl2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_max, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L18_:;
  // spl3 = ld spl
  Rsh_Fir_reg_spl3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r3 = dyn base1(<sym spl>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [spl3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_spl3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // spl4 = force? spl3
  Rsh_Fir_reg_spl4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spl3_);
  // checkMissing(spl4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_spl4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn names(spl4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_spl4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L22_:;
  // dr = tryDispatchBuiltin.1("[", r4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L24() else L23(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_dr;
    goto L23_;
  }

L23_:;
  // wm = ld wm
  Rsh_Fir_reg_wm = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L24_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D4_:;
  // deopt 13 [r7, wm]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_wm;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L25_:;
  // wm1 = force? wm
  Rsh_Fir_reg_wm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wm);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r8 = dyn __(r7, wm1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_wm1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L2_;

D5_:;
  // deopt 17 [spl5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_spl5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // spl6 = force? spl5
  Rsh_Fir_reg_spl6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_spl5_);
  // checkMissing(spl6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_spl6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(spl6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_spl6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c1 then L27() else L28(spl6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L28(spl6)
    Rsh_Fir_reg_spl8_ = Rsh_Fir_reg_spl6_;
    goto L28_;
  }

L27_:;
  // dr2 = tryDispatchBuiltin.1("[", spl6)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_spl6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc1 then L29() else L28(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr2)
    Rsh_Fir_reg_spl8_ = Rsh_Fir_reg_dr2_;
    goto L28_;
  }

L28_:;
  // wm2 = ld wm
  Rsh_Fir_reg_wm2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

D6_:;
  // deopt 19 [spl8, wm2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_spl8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_wm2_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L30_:;
  // wm3 = force? wm2
  Rsh_Fir_reg_wm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wm2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r9 = dyn __1(spl8, wm3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_spl8_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_wm3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L3_;

D7_:;
  // deopt 23 [opStart]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_opStart;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // opStart1 = force? opStart
  Rsh_Fir_reg_opStart1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opStart);
  // checkMissing(opStart1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_opStart1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // sym2 = ldf nchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf nchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard2 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // op = ld op
  Rsh_Fir_reg_op = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L33_:;
  // r10 = dyn base2(<sym op>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(opStart1, r10)
  // L4(opStart1, r10)
  Rsh_Fir_reg_opStart4_ = Rsh_Fir_reg_opStart1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

D8_:;
  // deopt 26 [opStart1, op]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_opStart1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_op;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // op1 = force? op
  Rsh_Fir_reg_op1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op);
  // checkMissing(op1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_op1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r12 = dyn nchar(op1, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_op1_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

D9_:;
  // deopt 32 [opStart1, r12]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_opStart1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L4(opStart1, r12)
  // L4(opStart1, r12)
  Rsh_Fir_reg_opStart4_ = Rsh_Fir_reg_opStart1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L4_;

D10_:;
  // deopt 35 [opStart5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_opStart5_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L36_:;
  // opStart6 = force? opStart5
  Rsh_Fir_reg_opStart6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opStart5_);
  // checkMissing(opStart6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_opStart6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r14 = `<`(opStart6, 1.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_opStart6_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c2 then L37() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L37()
    goto L37_;
  } else {
  // L5()
    goto L5_;
  }

L37_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r15 = dyn character()
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D12_:;
  // deopt 41 [r15]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L39_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

D13_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p = prom<V +>{
  //   text1 = ld text;
  //   text2 = force? text1;
  //   checkMissing(text2);
  //   return text2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_, CCP, RHO);
  // p1 = prom<V +>{
  //   opStart7 = ld opStart;
  //   opStart8 = force? opStart7;
  //   checkMissing(opStart8);
  //   r19 = `-`(opStart8, 1);
  //   return r19;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_1, CCP, RHO);
  // r21 = dyn substr(p, 1, p1)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L43() else D14()
  // L43()
  goto L43_;

D14_:;
  // deopt 50 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // st prefix = r21
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // substr1 = ldf substr
  Rsh_Fir_reg_substr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L44() else D15()
  // L44()
  goto L44_;

D15_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p2 = prom<V +>{
  //   text3 = ld text;
  //   text4 = force? text3;
  //   checkMissing(text4);
  //   return text4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_2, CCP, RHO);
  // p3 = prom<V +>{
  //   opEnd = ld opEnd;
  //   opEnd1 = force? opEnd;
  //   checkMissing(opEnd1);
  //   return opEnd1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_3, CCP, RHO);
  // r24 = dyn substr1(p2, p3, 1000000)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr1_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

D16_:;
  // deopt 57 [r24]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L45_:;
  // st suffix = r24
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // op2 = ld op
  Rsh_Fir_reg_op2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

D17_:;
  // deopt 59 [op2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_op2_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L46_:;
  // op3 = force? op2
  Rsh_Fir_reg_op3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op2_);
  // checkMissing(op3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_op3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r25 = `==`(op3, "?")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_op3_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c3 then L47() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L47()
    goto L47_;
  } else {
  // L7()
    goto L7_;
  }

L47_:;
  // helpCompletions = ldf helpCompletions
  Rsh_Fir_reg_helpCompletions = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

D18_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p4 = prom<V +>{
  //   prefix = ld prefix;
  //   prefix1 = force? prefix;
  //   checkMissing(prefix1);
  //   return prefix1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_4, CCP, RHO);
  // p5 = prom<V +>{
  //   suffix = ld suffix;
  //   suffix1 = force? suffix;
  //   checkMissing(suffix1);
  //   return suffix1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_5, CCP, RHO);
  // r28 = dyn helpCompletions(p4, p5)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_helpCompletions, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 67 [r28]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L49_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;

D20_:;
  // deopt 71 [opStart9]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_opStart9_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L52_:;
  // opStart10 = force? opStart9
  Rsh_Fir_reg_opStart10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opStart9_);
  // checkMissing(opStart10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_opStart10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r31 = `<=`(opStart10, 1.0)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_opStart10_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c4 then L53() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L53()
    goto L53_;
  } else {
  // L9()
    goto L9_;
  }

L53_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L54() else D21()
  // L54()
  goto L54_;

D21_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // r32 = dyn character1()
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // check L55() else D22()
  // L55()
  goto L55_;

D22_:;
  // deopt 77 [r32]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;

D23_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p6 = prom<V +>{
  //   op4 = ld op;
  //   op5 = force? op4;
  //   checkMissing(op5);
  //   return op5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_6, CCP, RHO);
  // p7 = prom<V +>{
  //   suffix2 = ld suffix;
  //   suffix3 = force? suffix2;
  //   checkMissing(suffix3);
  //   return suffix3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_7, CCP, RHO);
  // p8 = prom<V +>{
  //   prefix2 = ld prefix;
  //   prefix3 = force? prefix2;
  //   checkMissing(prefix3);
  //   return prefix3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_8, CCP, RHO);
  // r38 = dyn specialOpCompletionsHelper(p6, p7, p8)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_specialOpCompletionsHelper, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L59() else D24()
  // L59()
  goto L59_;

D24_:;
  // deopt 86 [r38]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L59_:;
  // st comps = r38
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard3 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // comps = ld comps
  Rsh_Fir_reg_comps = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L62() else D25()
  // L62()
  goto L62_;

L61_:;
  // r39 = dyn base3(<sym comps>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r39)
  // L11(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L11_;

D25_:;
  // deopt 90 [comps]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_comps;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L62_:;
  // comps1 = force? comps
  Rsh_Fir_reg_comps1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comps);
  // checkMissing(comps1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_comps1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r41 = dyn length(comps1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_comps1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L63() else D26()
  // L63()
  goto L63_;

D26_:;
  // deopt 93 [r41]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L11(r41)
  // L11(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L11_;

L64_:;
  // st comps = ""
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_const(CCP, 29), RHO);
  (void)(Rsh_const(CCP, 29));
  // goto L13()
  // L13()
  goto L13_;

D27_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // p9 = prom<V +>{
  //   prefix4 = ld prefix;
  //   prefix5 = force? prefix4;
  //   checkMissing(prefix5);
  //   return prefix5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_9, CCP, RHO);
  // p10 = prom<V +>{
  //   op6 = ld op;
  //   op7 = force? op6;
  //   checkMissing(op7);
  //   return op7;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_10, CCP, RHO);
  // p11 = prom<V +>{
  //   comps2 = ld comps;
  //   comps3 = force? comps2;
  //   checkMissing(comps3);
  //   return comps3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4120097962_11, CCP, RHO);
  // r47 = dyn sprintf("%s%s%s", p9, p10, p11)
  SEXP Rsh_Fir_array_args57[4];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args57[3] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 4, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L67() else D28()
  // L67()
  goto L67_;

D28_:;
  // deopt 107 [r47]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L67_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_(SEXP CCP, SEXP RHO) {
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return text2
  return Rsh_Fir_reg_text2_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_1(SEXP CCP, SEXP RHO) {
  // opStart7 = ld opStart
  Rsh_Fir_reg_opStart7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // opStart8 = force? opStart7
  Rsh_Fir_reg_opStart8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opStart7_);
  // checkMissing(opStart8)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_opStart8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r19 = `-`(opStart8, 1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_opStart8_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_2(SEXP CCP, SEXP RHO) {
  // text3 = ld text
  Rsh_Fir_reg_text3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // text4 = force? text3
  Rsh_Fir_reg_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text3_);
  // checkMissing(text4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return text4
  return Rsh_Fir_reg_text4_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_3(SEXP CCP, SEXP RHO) {
  // opEnd = ld opEnd
  Rsh_Fir_reg_opEnd = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // opEnd1 = force? opEnd
  Rsh_Fir_reg_opEnd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opEnd);
  // checkMissing(opEnd1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_opEnd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return opEnd1
  return Rsh_Fir_reg_opEnd1_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_4(SEXP CCP, SEXP RHO) {
  // prefix = ld prefix
  Rsh_Fir_reg_prefix = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // prefix1 = force? prefix
  Rsh_Fir_reg_prefix1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prefix);
  // checkMissing(prefix1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_prefix1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return prefix1
  return Rsh_Fir_reg_prefix1_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_5(SEXP CCP, SEXP RHO) {
  // suffix = ld suffix
  Rsh_Fir_reg_suffix = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // suffix1 = force? suffix
  Rsh_Fir_reg_suffix1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_suffix);
  // checkMissing(suffix1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_suffix1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return suffix1
  return Rsh_Fir_reg_suffix1_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_6(SEXP CCP, SEXP RHO) {
  // op4 = ld op
  Rsh_Fir_reg_op4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // op5 = force? op4
  Rsh_Fir_reg_op5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op4_);
  // checkMissing(op5)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_op5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return op5
  return Rsh_Fir_reg_op5_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_7(SEXP CCP, SEXP RHO) {
  // suffix2 = ld suffix
  Rsh_Fir_reg_suffix2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // suffix3 = force? suffix2
  Rsh_Fir_reg_suffix3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_suffix2_);
  // checkMissing(suffix3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_suffix3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return suffix3
  return Rsh_Fir_reg_suffix3_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_8(SEXP CCP, SEXP RHO) {
  // prefix2 = ld prefix
  Rsh_Fir_reg_prefix2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // prefix3 = force? prefix2
  Rsh_Fir_reg_prefix3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prefix2_);
  // checkMissing(prefix3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_prefix3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return prefix3
  return Rsh_Fir_reg_prefix3_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_9(SEXP CCP, SEXP RHO) {
  // prefix4 = ld prefix
  Rsh_Fir_reg_prefix4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // prefix5 = force? prefix4
  Rsh_Fir_reg_prefix5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prefix4_);
  // checkMissing(prefix5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_prefix5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return prefix5
  return Rsh_Fir_reg_prefix5_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_10(SEXP CCP, SEXP RHO) {
  // op6 = ld op
  Rsh_Fir_reg_op6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // op7 = force? op6
  Rsh_Fir_reg_op7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op6_);
  // checkMissing(op7)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_op7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return op7
  return Rsh_Fir_reg_op7_;
}
SEXP Rsh_Fir_user_promise_inner4120097962_11(SEXP CCP, SEXP RHO) {
  // comps2 = ld comps
  Rsh_Fir_reg_comps2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // comps3 = force? comps2
  Rsh_Fir_reg_comps3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comps2_);
  // checkMissing(comps3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_comps3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return comps3
  return Rsh_Fir_reg_comps3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
