#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4259292012_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4259292012_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4259292012_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4259292012_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4259292012_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner4259292012
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4259292012_, RHO, CCP);
  // st `.canonicalize_quotes` = r
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
SEXP Rsh_Fir_user_function_inner4259292012_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4259292012 dynamic dispatch ([txt])

  return Rsh_Fir_user_version_inner4259292012_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4259292012_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4259292012 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4259292012/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_txt;  // txt
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_txt1_;  // txt1
  SEXP Rsh_Fir_reg_txt2_;  // txt2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_txt3_;  // txt3
  SEXP Rsh_Fir_reg_txt4_;  // txt4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_txt5_;  // txt5
  SEXP Rsh_Fir_reg_txt6_;  // txt6
  SEXP Rsh_Fir_reg_Encoding;  // Encoding
  SEXP Rsh_Fir_reg_txt7_;  // txt7
  SEXP Rsh_Fir_reg_txt8_;  // txt8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_txt9_;  // txt9
  SEXP Rsh_Fir_reg_txt10_;  // txt10
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_gsub1_;  // gsub1
  SEXP Rsh_Fir_reg_txt11_;  // txt11
  SEXP Rsh_Fir_reg_txt12_;  // txt12
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_enc;  // enc
  SEXP Rsh_Fir_reg_enc1_;  // enc1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_Encoding__;  // Encoding__
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_txt13_;  // txt13
  SEXP Rsh_Fir_reg_txt14_;  // txt14

  // Bind parameters
  Rsh_Fir_reg_txt = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st txt = txt
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_txt, RHO);
  (void)(Rsh_Fir_reg_txt);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // st txt = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L1_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L12() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // Encoding = ldf Encoding
  Rsh_Fir_reg_Encoding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L4_:;
  // txt1 = ld txt
  Rsh_Fir_reg_txt1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym txt>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [txt1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_txt1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // txt2 = force? txt1
  Rsh_Fir_reg_txt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt1_);
  // checkMissing(txt2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_txt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn as_character(txt2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_txt2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L8_:;
  // txt3 = ld txt
  Rsh_Fir_reg_txt3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r3 = dyn base1(<sym txt>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [txt3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_txt3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // txt4 = force? txt3
  Rsh_Fir_reg_txt4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt3_);
  // checkMissing(txt4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_txt4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn length(txt4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_txt4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L12_:;
  // txt5 = ld txt
  Rsh_Fir_reg_txt5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 14 [txt5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_txt5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L13_:;
  // txt6 = force? txt5
  Rsh_Fir_reg_txt6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt5_);
  // checkMissing(txt6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_txt6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return txt6
  return Rsh_Fir_reg_txt6_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   txt7 = ld txt;
  //   txt8 = force? txt7;
  //   checkMissing(txt8);
  //   return txt8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4259292012_, CCP, RHO);
  // r10 = dyn Encoding(p)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 22 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // st enc = r10
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   txt9 = ld txt;
  //   txt10 = force? txt9;
  //   checkMissing(txt10);
  //   return txt10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4259292012_1, CCP, RHO);
  // r12 = dyn gsub[, , , perl, useBytes]("(\u2018|\u2019)", "'", p1, TRUE, TRUE)
  SEXP Rsh_Fir_array_args14[5];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[5];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names5[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 5, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 33 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L19_:;
  // st txt = r12
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // gsub1 = ldf gsub
  Rsh_Fir_reg_gsub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p2 = prom<V +>{
  //   txt11 = ld txt;
  //   txt12 = force? txt11;
  //   checkMissing(txt12);
  //   return txt12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4259292012_2, CCP, RHO);
  // r14 = dyn gsub1[, , , perl, useBytes]("(\u201c|\u201d)", "\"", p2, TRUE, TRUE)
  SEXP Rsh_Fir_array_args16[5];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args16[4] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[5];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names6[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub1_, 5, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 44 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // st txt = r14
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // enc = ld enc
  Rsh_Fir_reg_enc = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 46 [enc]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_enc;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // enc1 = force? enc
  Rsh_Fir_reg_enc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_enc);
  // checkMissing(enc1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_enc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // l = ld txt
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // Encoding__ = ldf `Encoding<-`
  Rsh_Fir_reg_Encoding__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L23() else D12()
  // L23()
  goto L23_;

D12_:;
  // deopt 49 [enc1, l, enc1]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_enc1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_enc1_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L23_:;
  // r15 = dyn Encoding__(l, NULL, enc1)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_enc1_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding__, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L24() else D13()
  // L24()
  goto L24_;

D13_:;
  // deopt 51 [enc1, r15]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_enc1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L24_:;
  // st txt = r15
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // txt13 = ld txt
  Rsh_Fir_reg_txt13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L25() else D14()
  // L25()
  goto L25_;

D14_:;
  // deopt 53 [txt13]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_txt13_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L25_:;
  // txt14 = force? txt13
  Rsh_Fir_reg_txt14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt13_);
  // checkMissing(txt14)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_txt14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return txt14
  return Rsh_Fir_reg_txt14_;
}
SEXP Rsh_Fir_user_promise_inner4259292012_(SEXP CCP, SEXP RHO) {
  // txt7 = ld txt
  Rsh_Fir_reg_txt7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // txt8 = force? txt7
  Rsh_Fir_reg_txt8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt7_);
  // checkMissing(txt8)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_txt8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return txt8
  return Rsh_Fir_reg_txt8_;
}
SEXP Rsh_Fir_user_promise_inner4259292012_1(SEXP CCP, SEXP RHO) {
  // txt9 = ld txt
  Rsh_Fir_reg_txt9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // txt10 = force? txt9
  Rsh_Fir_reg_txt10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt9_);
  // checkMissing(txt10)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_txt10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return txt10
  return Rsh_Fir_reg_txt10_;
}
SEXP Rsh_Fir_user_promise_inner4259292012_2(SEXP CCP, SEXP RHO) {
  // txt11 = ld txt
  Rsh_Fir_reg_txt11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // txt12 = force? txt11
  Rsh_Fir_reg_txt12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_txt11_);
  // checkMissing(txt12)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_txt12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return txt12
  return Rsh_Fir_reg_txt12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
