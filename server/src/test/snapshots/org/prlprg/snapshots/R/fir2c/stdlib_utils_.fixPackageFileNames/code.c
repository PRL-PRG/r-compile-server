#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner818821182_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner818821182_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner818821182_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner818821182_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner818821182_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner818821182_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner818821182_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner818821182_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner818821182_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner818821182
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner818821182_, RHO, CCP);
  // st `.fixPackageFileNames` = r
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
SEXP Rsh_Fir_user_function_inner818821182_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner818821182 dynamic dispatch ([list])

  return Rsh_Fir_user_version_inner818821182_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner818821182_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner818821182 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner818821182/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_list3_;  // list3
  SEXP Rsh_Fir_reg_list4_;  // list4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_list5_;  // list5
  SEXP Rsh_Fir_reg_list6_;  // list6
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_list7_;  // list7
  SEXP Rsh_Fir_reg_list8_;  // list8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_list9_;  // list9
  SEXP Rsh_Fir_reg_list10_;  // list10
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_wrong;  // wrong
  SEXP Rsh_Fir_reg_wrong1_;  // wrong1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_list11_;  // list11
  SEXP Rsh_Fir_reg_list12_;  // list12
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_list14_;  // list14
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_wrong2_;  // wrong2
  SEXP Rsh_Fir_reg_wrong3_;  // wrong3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_wrong4_;  // wrong4
  SEXP Rsh_Fir_reg_wrong5_;  // wrong5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_list15_;  // list15
  SEXP Rsh_Fir_reg_list16_;  // list16
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_ok;  // ok
  SEXP Rsh_Fir_reg_ok1_;  // ok1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_list17_;  // list17
  SEXP Rsh_Fir_reg_list18_;  // list18
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_list20_;  // list20
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_ok2_;  // ok2
  SEXP Rsh_Fir_reg_ok3_;  // ok3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_ok4_;  // ok4
  SEXP Rsh_Fir_reg_ok5_;  // ok5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_tolower;  // tolower
  SEXP Rsh_Fir_reg_list21_;  // list21
  SEXP Rsh_Fir_reg_list22_;  // list22
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_make_unique;  // make_unique
  SEXP Rsh_Fir_reg_list23_;  // list23
  SEXP Rsh_Fir_reg_list24_;  // list24
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_list25_;  // list25
  SEXP Rsh_Fir_reg_list26_;  // list26
  SEXP Rsh_Fir_reg_list27_;  // list27
  SEXP Rsh_Fir_reg_list28_;  // list28
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_list29_;  // list29
  SEXP Rsh_Fir_reg_list30_;  // list30
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_list32_;  // list32
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_changed;  // changed
  SEXP Rsh_Fir_reg_changed1_;  // changed1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_changed2_;  // changed2
  SEXP Rsh_Fir_reg_changed3_;  // changed3
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_list33_;  // list33
  SEXP Rsh_Fir_reg_list34_;  // list34

  // Bind parameters
  Rsh_Fir_reg_list = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st list = list
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_list, RHO);
  (void)(Rsh_Fir_reg_list);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // st list = r1
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
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // r6 = `==`(r4, 0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L22() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L4_:;
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L34() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L34()
    goto L34_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L7()
  // L7()
  goto L7_;

L6_:;
  // st list0 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

L8_:;
  // c4 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L48() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L48()
    goto L48_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // st list0 = dx7
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // tolower = ldf tolower
  Rsh_Fir_reg_tolower = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L56() else D21()
  // L56()
  goto L56_;

L12_:;
  // l6 = ld list0
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c8 = `is.object`(l6)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c8 then L67() else L68(dx9, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L67()
    goto L67_;
  } else {
  // L68(dx9, l6)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L68_;
  }

L13_:;
  // st list0 = dx15
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // list33 = ld list0
  Rsh_Fir_reg_list33_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L71() else D30()
  // L71()
  goto L71_;

L14_:;
  // list1 = ld list
  Rsh_Fir_reg_list1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L15_:;
  // r = dyn base(<sym list>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [list1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_list1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // list2 = force? list1
  Rsh_Fir_reg_list2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list1_);
  // checkMissing(list2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_list2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn as_character(list2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_list2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  // list3 = ld list
  Rsh_Fir_reg_list3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r3 = dyn base1(<sym list>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [list3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_list3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // list4 = force? list3
  Rsh_Fir_reg_list4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list3_);
  // checkMissing(list4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_list4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn length(list4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_list4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
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
  // list5 = ld list
  Rsh_Fir_reg_list5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

D4_:;
  // deopt 15 [list5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_list5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // list6 = force? list5
  Rsh_Fir_reg_list6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list5_);
  // checkMissing(list6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_list6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return list6
  return Rsh_Fir_reg_list6_;

D5_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p = prom<V +>{
  //   list7 = ld list;
  //   list8 = force? list7;
  //   checkMissing(list8);
  //   return list8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner818821182_, CCP, RHO);
  // r10 = dyn gsub("[[:cntrl:]\"*/:<>?\\|]", "_", p)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

D6_:;
  // deopt 25 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // st list0 = r10
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p1 = prom<V +>{
  //   list9 = ld list0;
  //   list10 = force? list9;
  //   checkMissing(list10);
  //   return list10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner818821182_1, CCP, RHO);
  // r12 = dyn grep("^(con|prn|aux|clock\\$|nul|lpt[1-3]|com[1-4])(\\..*|)$", p1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L29() else D8()
  // L29()
  goto L29_;

D8_:;
  // deopt 31 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // st wrong = r12
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // wrong = ld wrong
  Rsh_Fir_reg_wrong = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

L31_:;
  // r13 = dyn base2(<sym wrong>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L4_;

D9_:;
  // deopt 35 [wrong]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_wrong;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // wrong1 = force? wrong
  Rsh_Fir_reg_wrong1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wrong);
  // checkMissing(wrong1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_wrong1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r15 = dyn length1(wrong1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_wrong1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D10_:;
  // deopt 38 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L4(r15)
  // L4(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L4_;

L34_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L35() else D11()
  // L35()
  goto L35_;

D11_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p2 = prom<V +>{
  //   list11 = ld list0;
  //   list12 = force? list11;
  //   checkMissing(list12);
  //   c2 = `is.object`(list12);
  //   if c2 then L1() else L2(list12);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", list12);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(list14):
  //   wrong2 = ld wrong;
  //   wrong3 = force? wrong2;
  //   __ = ldf `[` in base;
  //   r16 = dyn __(list14, wrong3);
  //   goto L0(r16);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner818821182_2, CCP, RHO);
  // r18 = dyn paste0("zz", p2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

D12_:;
  // deopt 43 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // l = ld list0
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c3 = `is.object`(l)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c3 then L37() else L38(r18, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L38(r18, l)
    Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L38_;
  }

L37_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r18)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L39() else L38(r18, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L39()
    goto L39_;
  } else {
  // L38(r18, dr2)
    Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L38_;
  }

L38_:;
  // wrong4 = ld wrong
  Rsh_Fir_reg_wrong4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

L39_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L6(r18, dx2)
  // L6(r18, dx2)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

D13_:;
  // deopt 45 [r20, l2, r18, wrong4]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_wrong4_;
  Rsh_Fir_deopt(45, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L40_:;
  // wrong5 = force? wrong4
  Rsh_Fir_reg_wrong5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wrong4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r23 = dyn ___(l2, r18, wrong5)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_wrong5_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r20, r23)
  // L6(r20, r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r23_;
  goto L6_;

D14_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p3 = prom<V +>{
  //   list15 = ld list0;
  //   list16 = force? list15;
  //   checkMissing(list16);
  //   return list16;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner818821182_3, CCP, RHO);
  // r26 = dyn grepl("^[[:alnum:]]", p3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

D15_:;
  // deopt 55 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L43_:;
  // st ok = r26
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard3 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L46() else D16()
  // L46()
  goto L46_;

L45_:;
  // r27 = dyn base3(<lang `!`(ok)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r27)
  // L8(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L8_;

D16_:;
  // deopt 59 [ok]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_ok;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // checkMissing(ok1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ok1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r29 = `!`(ok1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ok1_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r30 = dyn any(r29)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L47() else D17()
  // L47()
  goto L47_;

D17_:;
  // deopt 63 [r30]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L8(r30)
  // L8(r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r30_;
  goto L8_;

L48_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L49() else D18()
  // L49()
  goto L49_;

D18_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p4 = prom<V +>{
  //   list17 = ld list0;
  //   list18 = force? list17;
  //   checkMissing(list18);
  //   c5 = `is.object`(list18);
  //   if c5 then L1() else L2(list18);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", list18);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(list20):
  //   ok2 = ld ok;
  //   ok3 = force? ok2;
  //   checkMissing(ok3);
  //   r31 = `!`(ok3);
  //   __1 = ldf `[` in base;
  //   r32 = dyn __1(list20, r31);
  //   goto L0(r32);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner818821182_4, CCP, RHO);
  // r34 = dyn paste1("z", p4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L50() else D19()
  // L50()
  goto L50_;

D19_:;
  // deopt 68 [r34]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L50_:;
  // l3 = ld list0
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c6 = `is.object`(l3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c6 then L51() else L52(r34, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L51()
    goto L51_;
  } else {
  // L52(r34, l3)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L52_;
  }

L51_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l3, r34)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args51);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc3 then L53() else L52(r34, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L53()
    goto L53_;
  } else {
  // L52(r34, dr6)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L52_;
  }

L52_:;
  // ok4 = ld ok
  Rsh_Fir_reg_ok4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L54() else D20()
  // L54()
  goto L54_;

L53_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L10(r34, dx6)
  // L10(r34, dx6)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L10_;

D20_:;
  // deopt 70 [r36, l5, r34, ok4]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_ok4_;
  Rsh_Fir_deopt(70, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // ok5 = force? ok4
  Rsh_Fir_reg_ok5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok4_);
  // checkMissing(ok5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_ok5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r39 = `!`(ok5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ok5_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r40 = dyn ___1(l5, r34, r39)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(r36, r40)
  // L10(r36, r40)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r40_;
  goto L10_;

D21_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p5 = prom<V +>{
  //   list21 = ld list0;
  //   list22 = force? list21;
  //   checkMissing(list22);
  //   return list22;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner818821182_5, CCP, RHO);
  // r43 = dyn tolower(p5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tolower, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L57() else D22()
  // L57()
  goto L57_;

D22_:;
  // deopt 80 [r43]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L57_:;
  // st list1 = r43
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // make_unique = ldf `make.unique`
  Rsh_Fir_reg_make_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L58() else D23()
  // L58()
  goto L58_;

D23_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p6 = prom<V +>{
  //   list23 = ld list1;
  //   list24 = force? list23;
  //   checkMissing(list24);
  //   return list24;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner818821182_6, CCP, RHO);
  // r45 = dyn make_unique[, sep](p6, "_")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L59() else D24()
  // L59()
  goto L59_;

D24_:;
  // deopt 87 [r45]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L59_:;
  // st list2 = r45
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // list25 = ld list2
  Rsh_Fir_reg_list25_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L60() else D25()
  // L60()
  goto L60_;

D25_:;
  // deopt 89 [list25]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_list25_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L60_:;
  // list26 = force? list25
  Rsh_Fir_reg_list26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list25_);
  // checkMissing(list26)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_list26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // list27 = ld list1
  Rsh_Fir_reg_list27_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L61() else D26()
  // L61()
  goto L61_;

D26_:;
  // deopt 90 [list26, list27]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_list26_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_list27_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // list28 = force? list27
  Rsh_Fir_reg_list28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list27_);
  // checkMissing(list28)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_list28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // r46 = `!=`(list26, list28)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_list26_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_list28_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // st changed = r46
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // list29 = ld list2
  Rsh_Fir_reg_list29_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L62() else D27()
  // L62()
  goto L62_;

D27_:;
  // deopt 94 [list29]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_list29_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L62_:;
  // list30 = force? list29
  Rsh_Fir_reg_list30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list29_);
  // checkMissing(list30)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_list30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(list30)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_list30_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c7 then L63() else L64(list30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L63()
    goto L63_;
  } else {
  // L64(list30)
    Rsh_Fir_reg_list32_ = Rsh_Fir_reg_list30_;
    goto L64_;
  }

L63_:;
  // dr8 = tryDispatchBuiltin.1("[", list30)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_list30_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc4 then L65() else L64(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L65()
    goto L65_;
  } else {
  // L64(dr8)
    Rsh_Fir_reg_list32_ = Rsh_Fir_reg_dr8_;
    goto L64_;
  }

L64_:;
  // changed = ld changed
  Rsh_Fir_reg_changed = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L66() else D28()
  // L66()
  goto L66_;

L65_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L12(dx8)
  // L12(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L12_;

D28_:;
  // deopt 96 [list32, changed]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_list32_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_changed;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L66_:;
  // changed1 = force? changed
  Rsh_Fir_reg_changed1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_changed);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r47 = dyn __2(list32, changed1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_list32_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_changed1_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r47)
  // L12(r47)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r47_;
  goto L12_;

L67_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l6, dx9)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc5 then L69() else L68(dx9, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L69()
    goto L69_;
  } else {
  // L68(dx9, dr10)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr10_;
    goto L68_;
  }

L68_:;
  // changed2 = ld changed
  Rsh_Fir_reg_changed2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L70() else D29()
  // L70()
  goto L70_;

L69_:;
  // dx13 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L13(dx13)
  // L13(dx13)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
  goto L13_;

D29_:;
  // deopt 100 [dx11, l8, dx9, changed2]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_changed2_;
  Rsh_Fir_deopt(100, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L70_:;
  // changed3 = force? changed2
  Rsh_Fir_reg_changed3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_changed2_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r48 = dyn ___2(l8, dx9, changed3)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_changed3_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r48)
  // L13(r48)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r48_;
  goto L13_;

D30_:;
  // deopt 104 [list33]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_list33_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L71_:;
  // list34 = force? list33
  Rsh_Fir_reg_list34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list33_);
  // checkMissing(list34)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_list34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return list34
  return Rsh_Fir_reg_list34_;
}
SEXP Rsh_Fir_user_promise_inner818821182_(SEXP CCP, SEXP RHO) {
  // list7 = ld list
  Rsh_Fir_reg_list7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // list8 = force? list7
  Rsh_Fir_reg_list8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list7_);
  // checkMissing(list8)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_list8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return list8
  return Rsh_Fir_reg_list8_;
}
SEXP Rsh_Fir_user_promise_inner818821182_1(SEXP CCP, SEXP RHO) {
  // list9 = ld list0
  Rsh_Fir_reg_list9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // list10 = force? list9
  Rsh_Fir_reg_list10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list9_);
  // checkMissing(list10)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_list10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return list10
  return Rsh_Fir_reg_list10_;
}
SEXP Rsh_Fir_user_promise_inner818821182_2(SEXP CCP, SEXP RHO) {
  // list11 = ld list0
  Rsh_Fir_reg_list11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // list12 = force? list11
  Rsh_Fir_reg_list12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list11_);
  // checkMissing(list12)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_list12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(list12)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_list12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(list12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(list12)
    Rsh_Fir_reg_list14_ = Rsh_Fir_reg_list12_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", list12)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_list12_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_list14_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // wrong2 = ld wrong
  Rsh_Fir_reg_wrong2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // wrong3 = force? wrong2
  Rsh_Fir_reg_wrong3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wrong2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r16 = dyn __(list14, wrong3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_list14_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_wrong3_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner818821182_3(SEXP CCP, SEXP RHO) {
  // list15 = ld list0
  Rsh_Fir_reg_list15_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // list16 = force? list15
  Rsh_Fir_reg_list16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list15_);
  // checkMissing(list16)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_list16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return list16
  return Rsh_Fir_reg_list16_;
}
SEXP Rsh_Fir_user_promise_inner818821182_4(SEXP CCP, SEXP RHO) {
  // list17 = ld list0
  Rsh_Fir_reg_list17_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // list18 = force? list17
  Rsh_Fir_reg_list18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list17_);
  // checkMissing(list18)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_list18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(list18)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_list18_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(list18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(list18)
    Rsh_Fir_reg_list20_ = Rsh_Fir_reg_list18_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", list18)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_list18_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_list20_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // ok2 = ld ok
  Rsh_Fir_reg_ok2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // ok3 = force? ok2
  Rsh_Fir_reg_ok3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok2_);
  // checkMissing(ok3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ok3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r31 = `!`(ok3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_ok3_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r32 = dyn __1(list20, r31)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_list20_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r32_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner818821182_5(SEXP CCP, SEXP RHO) {
  // list21 = ld list0
  Rsh_Fir_reg_list21_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // list22 = force? list21
  Rsh_Fir_reg_list22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list21_);
  // checkMissing(list22)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_list22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return list22
  return Rsh_Fir_reg_list22_;
}
SEXP Rsh_Fir_user_promise_inner818821182_6(SEXP CCP, SEXP RHO) {
  // list23 = ld list1
  Rsh_Fir_reg_list23_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // list24 = force? list23
  Rsh_Fir_reg_list24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list23_);
  // checkMissing(list24)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_list24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return list24
  return Rsh_Fir_reg_list24_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
