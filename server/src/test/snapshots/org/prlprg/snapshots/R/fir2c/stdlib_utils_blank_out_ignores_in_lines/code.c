#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2973771521_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2973771521_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2973771521_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2973771521_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2973771521
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2973771521_, RHO, CCP);
  // st blank_out_ignores_in_lines = r
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
SEXP Rsh_Fir_user_function_inner2973771521_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2973771521 dynamic dispatch ([lines, ignore])

  return Rsh_Fir_user_version_inner2973771521_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2973771521_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2973771521 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2973771521/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_ignore;  // ignore
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_ignore1_;  // ignore1
  SEXP Rsh_Fir_reg_ignore2_;  // ignore2
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_ignore3_;  // ignore3
  SEXP Rsh_Fir_reg_ignore4_;  // ignore4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ignore6_;  // ignore6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_ignore7_;  // ignore7
  SEXP Rsh_Fir_reg_ignore8_;  // ignore8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_ignore10_;  // ignore10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_ignore11_;  // ignore11
  SEXP Rsh_Fir_reg_ignore12_;  // ignore12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_ignore14_;  // ignore14
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_ignore17_;  // ignore17
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_ignore18_;  // ignore18
  SEXP Rsh_Fir_reg_ignore19_;  // ignore19
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_do_call;  // do_call
  SEXP Rsh_Fir_reg_blank_out_regexp_matches;  // blank_out_regexp_matches
  SEXP Rsh_Fir_reg_blank_out_regexp_matches1_;  // blank_out_regexp_matches1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_lines1_;  // lines1
  SEXP Rsh_Fir_reg_lines2_;  // lines2
  SEXP Rsh_Fir_reg_re;  // re
  SEXP Rsh_Fir_reg_re1_;  // re1
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_lines3_;  // lines3
  SEXP Rsh_Fir_reg_lines4_;  // lines4

  // Bind parameters
  Rsh_Fir_reg_lines = PARAMS[0];
  Rsh_Fir_reg_ignore = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st lines = lines
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_lines, RHO);
  (void)(Rsh_Fir_reg_lines);
  // st ignore = ignore
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ignore, RHO);
  (void)(Rsh_Fir_reg_ignore);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L0_:;
  // st args = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf `is.list`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.list` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L1_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L17() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L5()
  // L5()
  goto L5_;

L3_:;
  // st args = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // ignore7 = ld ignore
  Rsh_Fir_reg_ignore7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L4_:;
  // st ignore = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // ignore11 = ld ignore
  Rsh_Fir_reg_ignore11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

L6_:;
  // s = toForSeq(dx6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 6);
  // goto L8(i)
  // L8(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L8_;

L7_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn __2(ignore17, r9)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ignore17_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r11_;
  goto L6_;

L8_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // c4 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if c4 then L35() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L35()
    goto L35_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st re = x
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L36() else D8()
  // L36()
  goto L36_;

L10_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L13_:;
  // ignore1 = ld ignore
  Rsh_Fir_reg_ignore1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L14_:;
  // r3 = dyn base1(<sym ignore>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 7 [ignore1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_ignore1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // ignore2 = force? ignore1
  Rsh_Fir_reg_ignore2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore1_);
  // checkMissing(ignore2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ignore2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn is_list(ignore2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ignore2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L17_:;
  // ignore3 = ld ignore
  Rsh_Fir_reg_ignore3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 11 [ignore3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_ignore3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // ignore4 = force? ignore3
  Rsh_Fir_reg_ignore4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore3_);
  // checkMissing(ignore4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ignore4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(ignore4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ignore4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L20(ignore4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20(ignore4)
    Rsh_Fir_reg_ignore6_ = Rsh_Fir_reg_ignore4_;
    goto L20_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("[", ignore4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_ignore4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_ignore6_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn __(ignore6, -1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ignore6_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L3_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D4_:;
  // deopt 17 [ignore7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ignore7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // ignore8 = force? ignore7
  Rsh_Fir_reg_ignore8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore7_);
  // checkMissing(ignore8)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_ignore8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(ignore8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_ignore8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c2 then L23() else L24(ignore8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L24(ignore8)
    Rsh_Fir_reg_ignore10_ = Rsh_Fir_reg_ignore8_;
    goto L24_;
  }

L23_:;
  // dr2 = tryDispatchBuiltin.1("[[", ignore8)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_ignore8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr2)
    Rsh_Fir_reg_ignore10_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r7 = dyn __1(ignore10, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ignore10_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r7_;
  goto L4_;

L25_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D5_:;
  // deopt 25 [ignore11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ignore11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // ignore12 = force? ignore11
  Rsh_Fir_reg_ignore12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore11_);
  // checkMissing(ignore12)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_ignore12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(ignore12)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_ignore12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c3 then L28() else L29(ignore12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L28()
    goto L28_;
  } else {
  // L29(ignore12)
    Rsh_Fir_reg_ignore14_ = Rsh_Fir_reg_ignore12_;
    goto L29_;
  }

L28_:;
  // dr4 = tryDispatchBuiltin.1("[", ignore12)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_ignore12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc2 then L30() else L29(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr4)
    Rsh_Fir_reg_ignore14_ = Rsh_Fir_reg_dr4_;
    goto L29_;
  }

L29_:;
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard2 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L30_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L6(dx5)
  // L6(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L6_;

L31_:;
  // ignore18 = ld ignore
  Rsh_Fir_reg_ignore18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

L32_:;
  // r8 = dyn base2(<sym ignore>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(ignore14, r8)
  // L7(ignore14, r8)
  Rsh_Fir_reg_ignore17_ = Rsh_Fir_reg_ignore14_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L7_;

D6_:;
  // deopt 29 [ignore14, ignore18]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ignore14_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_ignore18_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // ignore19 = force? ignore18
  Rsh_Fir_reg_ignore19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore18_);
  // checkMissing(ignore19)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ignore19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r10 = dyn nzchar(ignore19)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ignore19_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

D7_:;
  // deopt 32 [ignore14, r10]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_ignore14_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L7(ignore14, r10)
  // L7(ignore14, r10)
  Rsh_Fir_reg_ignore17_ = Rsh_Fir_reg_ignore14_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L7_;

L35_:;
  // lines3 = ld lines
  Rsh_Fir_reg_lines3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

D8_:;
  // deopt 35 [i2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // p = prom<V +>{
  //   blank_out_regexp_matches = ld blank_out_regexp_matches;
  //   blank_out_regexp_matches1 = force? blank_out_regexp_matches;
  //   checkMissing(blank_out_regexp_matches1);
  //   return blank_out_regexp_matches1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2973771521_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L2() else L3();
  // L0(r14):
  //   return r14;
  // L2():
  //   sym4 = ldf list;
  //   base4 = ldf list in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L4() else L5();
  // L3():
  //   r13 = dyn base3(<lang list(lines, re)>, <sym args>);
  //   goto L0(r13);
  // L1(r16):
  //   args = ld args;
  //   args1 = force? args;
  //   checkMissing(args1);
  //   c5 = ldf c in base;
  //   r18 = dyn c5(r16, args1);
  //   goto L0(r18);
  // L4():
  //   lines1 = ld lines;
  //   lines2 = force? lines1;
  //   checkMissing(lines2);
  //   re = ld re;
  //   re1 = force? re;
  //   checkMissing(re1);
  //   list1 = ldf list in base;
  //   r17 = dyn list1(lines2, re1);
  //   goto L1(r17);
  // L5():
  //   r15 = dyn base4(<sym lines>, <sym re>);
  //   goto L1(r15);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2973771521_1, CCP, RHO);
  // r20 = dyn do_call(p, p1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

D9_:;
  // deopt 38 [i2, r20]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // st lines = r20
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // goto L8(i2)
  // L8(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L8_;

D10_:;
  // deopt 43 [lines3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_lines3_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // lines4 = force? lines3
  Rsh_Fir_reg_lines4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines3_);
  // checkMissing(lines4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_lines4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return lines4
  return Rsh_Fir_reg_lines4_;
}
SEXP Rsh_Fir_user_promise_inner2973771521_(SEXP CCP, SEXP RHO) {
  // blank_out_regexp_matches = ld blank_out_regexp_matches
  Rsh_Fir_reg_blank_out_regexp_matches = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // blank_out_regexp_matches1 = force? blank_out_regexp_matches
  Rsh_Fir_reg_blank_out_regexp_matches1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_blank_out_regexp_matches);
  // checkMissing(blank_out_regexp_matches1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_blank_out_regexp_matches1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return blank_out_regexp_matches1
  return Rsh_Fir_reg_blank_out_regexp_matches1_;
}
SEXP Rsh_Fir_user_promise_inner2973771521_1(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard3 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r18 = dyn c5(r16, args1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard4 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r13 = dyn base3(<lang list(lines, re)>, <sym args>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;

L4_:;
  // lines1 = ld lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lines2 = force? lines1
  Rsh_Fir_reg_lines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines1_);
  // checkMissing(lines2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_lines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // re = ld re
  Rsh_Fir_reg_re = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // re1 = force? re
  Rsh_Fir_reg_re1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_re);
  // checkMissing(re1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_re1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r17 = dyn list1(lines2, re1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_lines2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_re1_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L1_;

L5_:;
  // r15 = dyn base4(<sym lines>, <sym re>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(r15)
  // L1(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
