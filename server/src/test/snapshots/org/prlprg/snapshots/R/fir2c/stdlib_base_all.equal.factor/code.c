#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2495938000_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2495938000_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2495938000_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2495938000
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2495938000_, RHO, CCP);
  // st `all.equal.factor` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner2495938000_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2495938000 dynamic dispatch ([target, current, `...`, `check.attributes`])

  return Rsh_Fir_user_version_inner2495938000_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2495938000_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2495938000 version 0 (*, *, dots, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2495938000/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_target;
  SEXP Rsh_Fir_reg_current;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_check_attributes;
  SEXP Rsh_Fir_reg_check_attributes_isMissing;
  SEXP Rsh_Fir_reg_check_attributes_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_current2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_check_attributes1_;
  SEXP Rsh_Fir_reg_check_attributes2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_attr_all_equal;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_class__1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_current5_;
  SEXP Rsh_Fir_reg_current6_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_nax;
  SEXP Rsh_Fir_reg_nax1_;
  SEXP Rsh_Fir_reg_nay;
  SEXP Rsh_Fir_reg_nay1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_levels;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_target7_;
  SEXP Rsh_Fir_reg_target8_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_target10_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_nax2_;
  SEXP Rsh_Fir_reg_nax3_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_levels1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_current9_;
  SEXP Rsh_Fir_reg_current10_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_current12_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_nay2_;
  SEXP Rsh_Fir_reg_nay3_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_msg4_;
  SEXP Rsh_Fir_reg_msg5_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_msg6_;
  SEXP Rsh_Fir_reg_msg7_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_msg8_;
  SEXP Rsh_Fir_reg_msg9_;

  // Bind parameters
  Rsh_Fir_reg_target = PARAMS[0];
  Rsh_Fir_reg_current = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_check_attributes = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st target = target
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_target, RHO);
  (void)(Rsh_Fir_reg_target);
  // st current = current
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_current, RHO);
  (void)(Rsh_Fir_reg_current);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // check_attributes_isMissing = missing.0(check_attributes)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_check_attributes;
  Rsh_Fir_reg_check_attributes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if check_attributes_isMissing then L0(TRUE) else L0(check_attributes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_check_attributes_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_check_attributes_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(check_attributes)
    Rsh_Fir_reg_check_attributes_orDefault = Rsh_Fir_reg_check_attributes;
    goto L0_;
  }

L0_:;
  // st `check.attributes` = check_attributes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_check_attributes_orDefault, RHO);
  (void)(Rsh_Fir_reg_check_attributes_orDefault);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args2);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c then L27() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L27()
    goto L27_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // check_attributes1 = ld `check.attributes`
  Rsh_Fir_reg_check_attributes1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L30() else D2()
  // L30()
  goto L30_;

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r9_ = Rsh_const(CCP, 7);
  goto L5_;

L5_:;
  // st msg = r9
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // l = ld current
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

L6_:;
  // st nax = r13
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L7_:;
  // st nay = r16
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L8_:;
  // st n = r19
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

L9_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L61() else D21()
  // L61()
  goto L61_;

L10_:;
  // st msg = r24
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard8 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L12_:;
  // levels = ldf levels
  Rsh_Fir_reg_levels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L70() else D26()
  // L70()
  goto L70_;

L13_:;
  // st msg = r31
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // goto L11()
  // L11()
  goto L11_;

L14_:;
  // st target = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // levels1 = ldf levels
  Rsh_Fir_reg_levels1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L80() else D30()
  // L80()
  goto L80_;

L15_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r44 = dyn __1(r41, dx3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L14(r44)
  // L14(r44)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r44_;
  goto L14_;

L16_:;
  // st current = dx5
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L90() else D34()
  // L90()
  goto L90_;

L17_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r55 = dyn __3(r52, dx7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L16(r55)
  // L16(r55)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r55_;
  goto L16_;

L18_:;
  // c11 = `as.logical`(r61)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c11 then L95() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L95()
    goto L95_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L11()
  // L11()
  goto L11_;

L20_:;
  // st msg = r63
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // goto L11()
  // L11()
  goto L11_;

L21_:;
  // c14 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c14 then L105() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L105()
    goto L105_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // msg8 = ld msg
  Rsh_Fir_reg_msg8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L107() else D41()
  // L107()
  goto L107_;

L23_:;
  // current1 = ld current
  Rsh_Fir_reg_current1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D0()
  // L25()
  goto L25_;

L24_:;
  // r = dyn base(<sym current>, "factor")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [current1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_current1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L25_:;
  // current2 = force? current1
  Rsh_Fir_reg_current2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1_);
  // checkMissing(current2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_current2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn inherits(current2, "factor", FALSE)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_current2_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L26() else D1()
  // L26()
  goto L26_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'current' is not a factor"
  return Rsh_const(CCP, 21);

D2_:;
  // deopt 14 [check_attributes1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_check_attributes1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L30_:;
  // check_attributes2 = force? check_attributes1
  Rsh_Fir_reg_check_attributes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_attributes1_);
  // checkMissing(check_attributes2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_check_attributes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(check_attributes2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_check_attributes2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c1 then L31() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L4()
    goto L4_;
  }

L31_:;
  // attr_all_equal = ldf `attr.all.equal`
  Rsh_Fir_reg_attr_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L32() else D3()
  // L32()
  goto L32_;

D3_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p = prom<V +>{
  //   target1 = ld target;
  //   target2 = force? target1;
  //   checkMissing(target2);
  //   return target2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   current3 = ld current;
  //   current4 = force? current3;
  //   checkMissing(current4);
  //   return current4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_1, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r8 = dyn attr_all_equal[, , `...`](p, p1, ddd1)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args18[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr_all_equal, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L33() else D4()
  // L33()
  goto L33_;

D4_:;
  // deopt 21 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

D5_:;
  // deopt 28 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_const(CCP, 7);
  Rsh_Fir_deopt(28, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // r10 = dyn class__(l, NULL, NULL)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

D6_:;
  // deopt 30 [NULL, r10]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // st current = r10
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // l1 = ld target
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

D7_:;
  // deopt 33 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_const(CCP, 7);
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L37_:;
  // r11 = dyn class__1(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D8_:;
  // deopt 35 [NULL, r11]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // st target = r11
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard1 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D9()
  // L41()
  goto L41_;

L40_:;
  // r12 = dyn base1(<sym target>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L6_;

D9_:;
  // deopt 39 [target3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_target3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L41_:;
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r14 = dyn is_na(target4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_target4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

D10_:;
  // deopt 42 [r14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L6_;

L43_:;
  // current5 = ld current
  Rsh_Fir_reg_current5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

L44_:;
  // r15 = dyn base2(<sym current>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L7_;

D11_:;
  // deopt 46 [current5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_current5_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // current6 = force? current5
  Rsh_Fir_reg_current6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current5_);
  // checkMissing(current6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_current6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r17 = dyn is_na1(current6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_current6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

D12_:;
  // deopt 49 [r17]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L7_;

L47_:;
  // nax = ld nax
  Rsh_Fir_reg_nax = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

L48_:;
  // r18 = dyn base3(<lang `!=`(nax, nay)>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L8_;

D13_:;
  // deopt 53 [nax]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_nax;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L49_:;
  // nax1 = force? nax
  Rsh_Fir_reg_nax1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nax);
  // checkMissing(nax1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_nax1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // nay = ld nay
  Rsh_Fir_reg_nay = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

D14_:;
  // deopt 54 [nax1, nay]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_nax1_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_nay;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // nay1 = force? nay
  Rsh_Fir_reg_nay1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nay);
  // checkMissing(nay1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_nay1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r20 = `!=`(nax1, nay1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_nax1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_nay1_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args31);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r21 = dyn sum(r20)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L51() else D15()
  // L51()
  goto L51_;

D15_:;
  // deopt 58 [r21]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r21_;
  goto L8_;

D16_:;
  // deopt 60 [n]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L52_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r22 = `>`(n1, 1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args34);
  // c2 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c2 then L53() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L53()
    goto L53_;
  } else {
  // L9()
    goto L9_;
  }

L53_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L56() else D17()
  // L56()
  goto L56_;

L55_:;
  // r23 = dyn base4(<sym msg>, <lang paste(n, "NA mismatches")>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L10_;

D17_:;
  // deopt 66 [msg]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L56_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L57() else D18()
  // L57()
  goto L57_;

D18_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p2 = prom<V +>{
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   return n3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_2, 0, NULL, CCP, RHO);
  // r26 = dyn paste(p2, "NA mismatches")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L58() else D19()
  // L58()
  goto L58_;

D19_:;
  // deopt 72 [r26]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L58_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r27 = dyn c3(msg1, r26)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L59() else D20()
  // L59()
  goto L59_;

D20_:;
  // deopt 74 [r27]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L10(r27)
  // L10(r27)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r27_;
  goto L10_;

D21_:;
  // deopt 76 [n4]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r29 = `==`(n5, 1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args43);
  // c4 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c4 then L62() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L62()
    goto L62_;
  } else {
  // L12()
    goto L12_;
  }

L62_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L65() else D22()
  // L65()
  goto L65_;

L64_:;
  // r30 = dyn base5(<sym msg>, <lang paste("1, NA mismatch")>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r30)
  // L13(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L13_;

D22_:;
  // deopt 82 [msg2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L65_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L66() else D23()
  // L66()
  goto L66_;

D23_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // r32 = dyn paste1("1, NA mismatch")
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L67() else D24()
  // L67()
  goto L67_;

D24_:;
  // deopt 87 [r32]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L67_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r33 = dyn c5(msg3, r32)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L68() else D25()
  // L68()
  goto L68_;

D25_:;
  // deopt 89 [r33]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L13(r33)
  // L13(r33)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L13_;

D26_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p3 = prom<V +>{
  //   target5 = ld target;
  //   target6 = force? target5;
  //   checkMissing(target6);
  //   return target6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_3, 0, NULL, CCP, RHO);
  // r35 = dyn levels(p3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L71() else D27()
  // L71()
  goto L71_;

D27_:;
  // deopt 94 [r35]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L71_:;
  // c6 = `is.object`(r35)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args52);
  // if c6 then L72() else L73(r35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L72()
    goto L72_;
  } else {
  // L73(r35)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r35_;
    goto L73_;
  }

L72_:;
  // dr = tryDispatchBuiltin.1("[", r35)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc then L74() else L73(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_dr;
    goto L73_;
  }

L73_:;
  // target7 = ld target
  Rsh_Fir_reg_target7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L75() else D28()
  // L75()
  goto L75_;

L74_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L14(dx)
  // L14(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L14_;

D28_:;
  // deopt 95 [r37, target7]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_target7_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L75_:;
  // target8 = force? target7
  Rsh_Fir_reg_target8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target7_);
  // checkMissing(target8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_target8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(target8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_target8_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args57);
  // if c7 then L76() else L77(r37, target8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L76()
    goto L76_;
  } else {
  // L77(r37, target8)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
    Rsh_Fir_reg_target10_ = Rsh_Fir_reg_target8_;
    goto L77_;
  }

L76_:;
  // dr2 = tryDispatchBuiltin.1("[", target8)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_target8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc1 then L78() else L77(r37, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L78()
    goto L78_;
  } else {
  // L77(r37, dr2)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
    Rsh_Fir_reg_target10_ = Rsh_Fir_reg_dr2_;
    goto L77_;
  }

L77_:;
  // nax2 = ld nax
  Rsh_Fir_reg_nax2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L79() else D29()
  // L79()
  goto L79_;

L78_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L15(r37, dx2)
  // L15(r37, dx2)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

D29_:;
  // deopt 97 [r39, target10, nax2]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_target10_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_nax2_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L79_:;
  // nax3 = force? nax2
  Rsh_Fir_reg_nax3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nax2_);
  // checkMissing(nax3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_nax3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r42 = `!`(nax3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_nax3_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args62);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r43 = dyn __(target10, r42)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_target10_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L15(r39, r43)
  // L15(r39, r43)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r43_;
  goto L15_;

D30_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p4 = prom<V +>{
  //   current7 = ld current;
  //   current8 = force? current7;
  //   checkMissing(current8);
  //   return current8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_4, 0, NULL, CCP, RHO);
  // r46 = dyn levels1(p4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels1_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L81() else D31()
  // L81()
  goto L81_;

D31_:;
  // deopt 106 [r46]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L81_:;
  // c8 = `is.object`(r46)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args66);
  // if c8 then L82() else L83(r46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L82()
    goto L82_;
  } else {
  // L83(r46)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
    goto L83_;
  }

L82_:;
  // dr4 = tryDispatchBuiltin.1("[", r46)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc2 then L84() else L83(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L84()
    goto L84_;
  } else {
  // L83(dr4)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_dr4_;
    goto L83_;
  }

L83_:;
  // current9 = ld current
  Rsh_Fir_reg_current9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L85() else D32()
  // L85()
  goto L85_;

L84_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L16(dx4)
  // L16(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L16_;

D32_:;
  // deopt 107 [r48, current9]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_current9_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L85_:;
  // current10 = force? current9
  Rsh_Fir_reg_current10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current9_);
  // checkMissing(current10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_current10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(current10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_current10_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args71);
  // if c9 then L86() else L87(r48, current10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L86()
    goto L86_;
  } else {
  // L87(r48, current10)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_current12_ = Rsh_Fir_reg_current10_;
    goto L87_;
  }

L86_:;
  // dr6 = tryDispatchBuiltin.1("[", current10)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_current10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc3 then L88() else L87(r48, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L88()
    goto L88_;
  } else {
  // L87(r48, dr6)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_current12_ = Rsh_Fir_reg_dr6_;
    goto L87_;
  }

L87_:;
  // nay2 = ld nay
  Rsh_Fir_reg_nay2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L89() else D33()
  // L89()
  goto L89_;

L88_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L17(r48, dx6)
  // L17(r48, dx6)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L17_;

D33_:;
  // deopt 109 [r50, current12, nay2]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_current12_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_nay2_;
  Rsh_Fir_deopt(109, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L89_:;
  // nay3 = force? nay2
  Rsh_Fir_reg_nay3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nay2_);
  // checkMissing(nay3)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_nay3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r53 = `!`(nay3)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_nay3_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args76);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r54 = dyn __2(current12, r53)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_current12_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L17(r50, r54)
  // L17(r50, r54)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r54_;
  goto L17_;

D34_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // p5 = prom<V +>{
  //   target11 = ld target;
  //   target12 = force? target11;
  //   checkMissing(target12);
  //   return target12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   current13 = ld current;
  //   current14 = force? current13;
  //   checkMissing(current14);
  //   return current14;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   check_attributes3 = ld `check.attributes`;
  //   check_attributes4 = force? check_attributes3;
  //   checkMissing(check_attributes4);
  //   return check_attributes4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_7, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r59 = dyn all_equal[, , `check.attributes`, `...`](p5, p6, p7, ddd2)
  SEXP Rsh_Fir_array_args81[4];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args81[3] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names23[3] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 4, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L91() else D35()
  // L91()
  goto L91_;

D35_:;
  // deopt 122 [r59]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L91_:;
  // st n = r59
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // sym6 = ldf `is.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf `is.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard6 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L92_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L94() else D36()
  // L94()
  goto L94_;

L93_:;
  // r60 = dyn base6(<sym n>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L18(r60)
  // L18(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L18_;

D36_:;
  // deopt 125 [n6]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L94_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c10 = `is.character`(n7)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args85);
  // goto L18(c10)
  // L18(c10)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_c10_;
  goto L18_;

L95_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard7 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L96_:;
  // msg4 = ld msg
  Rsh_Fir_reg_msg4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L98() else D37()
  // L98()
  goto L98_;

L97_:;
  // r62 = dyn base7(<sym msg>, <sym n>)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L20(r62)
  // L20(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L20_;

D37_:;
  // deopt 130 [msg4]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_msg4_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L98_:;
  // msg5 = force? msg4
  Rsh_Fir_reg_msg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg4_);
  // checkMissing(msg5)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_msg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L99() else D38()
  // L99()
  goto L99_;

D38_:;
  // deopt 132 [n8]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L99_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r64 = dyn c12(msg5, n9)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_msg5_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L100() else D39()
  // L100()
  goto L100_;

D39_:;
  // deopt 135 [r64]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L20(r64)
  // L20(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L20_;

L102_:;
  // msg6 = ld msg
  Rsh_Fir_reg_msg6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L104() else D40()
  // L104()
  goto L104_;

L103_:;
  // r65 = dyn base8(<sym msg>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L21(r65)
  // L21(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L21_;

D40_:;
  // deopt 140 [msg6]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_msg6_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L104_:;
  // msg7 = force? msg6
  Rsh_Fir_reg_msg7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg6_);
  // checkMissing(msg7)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_msg7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c13 = `==`(msg7, NULL)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_msg7_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args93);
  // goto L21(c13)
  // L21(c13)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_c13_;
  goto L21_;

L105_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 4);

D41_:;
  // deopt 145 [msg8]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_msg8_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L107_:;
  // msg9 = force? msg8
  Rsh_Fir_reg_msg9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg8_);
  // checkMissing(msg9)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_msg9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg9
  return Rsh_Fir_reg_msg9_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return target2
  return Rsh_Fir_reg_target2_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_current4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // current3 = ld current
  Rsh_Fir_reg_current3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current4 = force? current3
  Rsh_Fir_reg_current4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current3_);
  // checkMissing(current4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_current4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return current4
  return Rsh_Fir_reg_current4_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return n3
  return Rsh_Fir_reg_n3_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return target6
  return Rsh_Fir_reg_target6_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current7_;
  SEXP Rsh_Fir_reg_current8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // current7 = ld current
  Rsh_Fir_reg_current7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current8 = force? current7
  Rsh_Fir_reg_current8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current7_);
  // checkMissing(current8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_current8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return current8
  return Rsh_Fir_reg_current8_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target11_;
  SEXP Rsh_Fir_reg_target12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // target11 = ld target
  Rsh_Fir_reg_target11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target12 = force? target11
  Rsh_Fir_reg_target12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target11_);
  // checkMissing(target12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_target12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return target12
  return Rsh_Fir_reg_target12_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current13_;
  SEXP Rsh_Fir_reg_current14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // current13 = ld current
  Rsh_Fir_reg_current13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current14 = force? current13
  Rsh_Fir_reg_current14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current13_);
  // checkMissing(current14)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_current14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return current14
  return Rsh_Fir_reg_current14_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_check_attributes3_;
  SEXP Rsh_Fir_reg_check_attributes4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // check_attributes3 = ld `check.attributes`
  Rsh_Fir_reg_check_attributes3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check_attributes4 = force? check_attributes3
  Rsh_Fir_reg_check_attributes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_attributes3_);
  // checkMissing(check_attributes4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_check_attributes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return check_attributes4
  return Rsh_Fir_reg_check_attributes4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
