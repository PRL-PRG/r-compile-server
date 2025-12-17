#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1236783023
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1236783023_, RHO, CCP);
  // st `.bad_DESCRIPTION_URL_field_parts` = r
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
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1236783023 dynamic dispatch ([s])

  return Rsh_Fir_user_version_inner1236783023_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1236783023 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1236783023/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg__get_urls_from_DESCRIPTION_URL_field;  // _get_urls_from_DESCRIPTION_URL_field
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_strsplit;  // strsplit
  SEXP Rsh_Fir_reg_s5_;  // s5
  SEXP Rsh_Fir_reg_s6_;  // s6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg__w_o_;  // _w_o_
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30

  // Bind parameters
  Rsh_Fir_reg_s = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L12() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // _get_urls_from_DESCRIPTION_URL_field = ldf `.get_urls_from_DESCRIPTION_URL_field`
  Rsh_Fir_reg__get_urls_from_DESCRIPTION_URL_field = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L3_:;
  // st z = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L4_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L5_:;
  // r22 = `==`(r19, r20)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L32() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // _w_o_ = ldf `%w/o%`
  Rsh_Fir_reg__w_o_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L36() else D14()
  // L36()
  goto L36_;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx3
  return Rsh_Fir_reg_dx3_;

L8_:;
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r = dyn base(<sym s>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [s1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn is_na(s2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L12_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r3 = dyn character()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p = prom<V +>{
  //   s3 = ld s;
  //   s4 = force? s3;
  //   checkMissing(s4);
  //   return s4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_, CCP, RHO);
  // r7 = dyn _get_urls_from_DESCRIPTION_URL_field(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__get_urls_from_DESCRIPTION_URL_field, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // st y = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // strsplit = ldf strsplit
  Rsh_Fir_reg_strsplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p1 = prom<V +>{
  //   s5 = ld s;
  //   s6 = force? s5;
  //   checkMissing(s6);
  //   return s6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_1, CCP, RHO);
  // r9 = dyn strsplit(p1, "[[:space:]]*(\\([^)]*\\))?([,[:space:]]+|$)")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // c1 = `is.object`(r9)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L22(r9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L22(r9)
    Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r9_;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.1("[[", r9)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(dr)
    Rsh_Fir_reg_r11_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r12 = dyn __(r11, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L3_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

L24_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

L25_:;
  // r13 = dyn base1(<sym y>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L4_;

D8_:;
  // deopt 28 [y]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r15 = dyn length(y1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L4(r15)
  // L4(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L4_;

L28_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

L29_:;
  // r18 = dyn base2(<sym z>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r14, r18)
  // L5(r14, r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_;
  goto L5_;

D10_:;
  // deopt 33 [r14, z]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r21 = dyn length1(z1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

D11_:;
  // deopt 36 [r14, r21]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L5(r14, r21)
  // L5(r14, r21)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L5_;

L32_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L33() else D12()
  // L33()
  goto L33_;

D12_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r23 = dyn character1()
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // check L34() else D13()
  // L34()
  goto L34_;

D13_:;
  // deopt 40 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_;

D14_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p2 = prom<V +>{
  //   z2 = ld z;
  //   z3 = force? z2;
  //   checkMissing(z3);
  //   return z3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_2, CCP, RHO);
  // p3 = prom<V +>{
  //   y2 = ld y;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   return y3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_3, CCP, RHO);
  // r26 = dyn _w_o_(p2, p3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__w_o_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

D15_:;
  // deopt 45 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // st z = r26
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L38() else D16()
  // L38()
  goto L38_;

D16_:;
  // deopt 47 [z4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L38_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(z5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c3 then L39() else L40(z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L39()
    goto L39_;
  } else {
  // L40(z5)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L40_;
  }

L39_:;
  // dr2 = tryDispatchBuiltin.1("[", z5)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc1 then L41() else L40(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L41()
    goto L41_;
  } else {
  // L40(dr2)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr2_;
    goto L40_;
  }

L40_:;
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L42() else D17()
  // L42()
  goto L42_;

L41_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L7(dx2)
  // L7(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D17_:;
  // deopt 50 [z7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L42_:;
  // p4 = prom<V +>{
  //   z8 = ld z;
  //   z9 = force? z8;
  //   checkMissing(z9);
  //   return z9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_4, CCP, RHO);
  // r28 = dyn grepl("^<?(svn://|doi:)", p4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L43() else D18()
  // L43()
  goto L43_;

D18_:;
  // deopt 53 [z7, r28]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L43_:;
  // r29 = `!`(r28)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r30 = dyn __1(z7, r29)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r30)
  // L7(r30)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r30_;
  goto L7_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO) {
  // s3 = ld s
  Rsh_Fir_reg_s3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s4 = force? s3
  Rsh_Fir_reg_s4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s3_);
  // checkMissing(s4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return s4
  return Rsh_Fir_reg_s4_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO) {
  // s5 = ld s
  Rsh_Fir_reg_s5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s6 = force? s5
  Rsh_Fir_reg_s6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s5_);
  // checkMissing(s6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return s6
  return Rsh_Fir_reg_s6_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO) {
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return z3
  return Rsh_Fir_reg_z3_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_3(SEXP CCP, SEXP RHO) {
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return y3
  return Rsh_Fir_reg_y3_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_4(SEXP CCP, SEXP RHO) {
  // z8 = ld z
  Rsh_Fir_reg_z8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z9 = force? z8
  Rsh_Fir_reg_z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z8_);
  // checkMissing(z9)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return z9
  return Rsh_Fir_reg_z9_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
