#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner303233784_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner303233784_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner303233784_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner303233784_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner303233784_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner303233784_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner303233784_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner303233784_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner303233784_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner303233784
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner303233784_, RHO, CCP);
  // st `.grid.at` = r
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
SEXP Rsh_Fir_user_function_inner303233784_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner303233784 dynamic dispatch ([side, n, log, equilogs, axp, usr2, nintLog])

  return Rsh_Fir_user_version_inner303233784_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner303233784_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner303233784 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner303233784/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_side;  // side
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_equilogs;  // equilogs
  SEXP Rsh_Fir_reg_axp;  // axp
  SEXP Rsh_Fir_reg_usr2_;  // usr2
  SEXP Rsh_Fir_reg_nintLog;  // nintLog
  SEXP Rsh_Fir_reg_nintLog_isMissing;  // nintLog_isMissing
  SEXP Rsh_Fir_reg_nintLog_orDefault;  // nintLog_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stopifnot;  // stopifnot
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_axp1_;  // axp1
  SEXP Rsh_Fir_reg_axp2_;  // axp2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_ax;  // ax
  SEXP Rsh_Fir_reg_ax1_;  // ax1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_equilogs1_;  // equilogs1
  SEXP Rsh_Fir_reg_equilogs2_;  // equilogs2
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_ax2_;  // ax2
  SEXP Rsh_Fir_reg_ax3_;  // ax3
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_ax5_;  // ax5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_axTicks;  // axTicks
  SEXP Rsh_Fir_reg_side1_;  // side1
  SEXP Rsh_Fir_reg_side2_;  // side2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ax6_;  // ax6
  SEXP Rsh_Fir_reg_ax7_;  // ax7
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_usr3_;  // usr3
  SEXP Rsh_Fir_reg_usr4_;  // usr4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_log3_;  // log3
  SEXP Rsh_Fir_reg_log4_;  // log4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_nintLog1_;  // nintLog1
  SEXP Rsh_Fir_reg_nintLog2_;  // nintLog2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_usr5_;  // usr5
  SEXP Rsh_Fir_reg_usr6_;  // usr6
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_usr8_;  // usr8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_usr9_;  // usr9
  SEXP Rsh_Fir_reg_usr10_;  // usr10
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_usr12_;  // usr12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_log5_;  // log5
  SEXP Rsh_Fir_reg_log6_;  // log6
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_at;  // at
  SEXP Rsh_Fir_reg_at1_;  // at1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_at2_;  // at2
  SEXP Rsh_Fir_reg_at3_;  // at3
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r52_;  // r52

  // Bind parameters
  Rsh_Fir_reg_side = PARAMS[0];
  Rsh_Fir_reg_n = PARAMS[1];
  Rsh_Fir_reg_log = PARAMS[2];
  Rsh_Fir_reg_equilogs = PARAMS[3];
  Rsh_Fir_reg_axp = PARAMS[4];
  Rsh_Fir_reg_usr2_ = PARAMS[5];
  Rsh_Fir_reg_nintLog = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st side = side
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_side, RHO);
  (void)(Rsh_Fir_reg_side);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st log = log
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_log, RHO);
  (void)(Rsh_Fir_reg_log);
  // st equilogs = equilogs
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_equilogs, RHO);
  (void)(Rsh_Fir_reg_equilogs);
  // st axp = axp
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_axp, RHO);
  (void)(Rsh_Fir_reg_axp);
  // st usr2 = usr2
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_usr2_, RHO);
  (void)(Rsh_Fir_reg_usr2_);
  // nintLog_isMissing = missing.0(nintLog)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_nintLog;
  Rsh_Fir_reg_nintLog_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if nintLog_isMissing then L0(NULL) else L0(nintLog)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nintLog_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_nintLog_orDefault = Rsh_const(CCP, 7);
    goto L0_;
  } else {
  // L0(nintLog)
    Rsh_Fir_reg_nintLog_orDefault = Rsh_Fir_reg_nintLog;
    goto L0_;
  }

L0_:;
  // st nintLog = nintLog_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_nintLog_orDefault, RHO);
  (void)(Rsh_Fir_reg_nintLog_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L1_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L3_:;
  // c8 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c8 then L30() else L4(c8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L30()
    goto L30_;
  } else {
  // L4(c8)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c8_;
    goto L4_;
  }

L4_:;
  // c19 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c19 then L36() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L36()
    goto L36_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // r13 = `>`(dx1, 0.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c17 = `&&`(c15, c16)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L4(c17)
  // L4(c17)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c17_;
  goto L4_;

L6_:;
  // goto L8()
  // L8()
  goto L8_;

L7_:;
  // st ax = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // axTicks = ldf axTicks
  Rsh_Fir_reg_axTicks = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

L9_:;
  // r29 = `!`(r27)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c21 then L48() else L10(c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L48()
    goto L48_;
  } else {
  // L10(c21)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L10_;
  }

L10_:;
  // c30 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c30 then L54() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L54()
    goto L54_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // st n = r31
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // r33 = `>=`(r31, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c28 = `&&`(c26, c27)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L10(c28)
  // L10(c28)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c28_;
  goto L10_;

L12_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 7);

L13_:;
  // st at = r35
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // log5 = ld log
  Rsh_Fir_reg_log5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L67() else D16()
  // L67()
  goto L67_;

L14_:;
  // usr9 = ld usr2
  Rsh_Fir_reg_usr9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L61() else D13()
  // L61()
  goto L61_;

L15_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

L16_:;
  // at2 = ld at
  Rsh_Fir_reg_at2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L71() else D18()
  // L71()
  goto L71_;

L17_:;
  // c34 = `is.object`(r41)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c34 then L72() else L73(r41)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L72()
    goto L72_;
  } else {
  // L73(r41)
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r41_;
    goto L73_;
  }

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx9
  return Rsh_Fir_reg_dx9_;

L19_:;
  // r51 = `-`(<missing>, r48)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r52 = dyn __3(r47, r51)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L18(r52)
  // L18(r52)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r52_;
  goto L18_;

L20_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L21_:;
  // r = dyn base(<sym n>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [n1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c = `==`(n2, NULL)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L23_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p = prom<V +>{
  //   sym1 = ldf `is.numeric`;
  //   base1 = ldf `is.numeric` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   axp1 = ld axp;
  //   axp2 = force? axp1;
  //   checkMissing(axp2);
  //   st ax = axp2;
  //   is_numeric = ldf `is.numeric` in base;
  //   r4 = dyn is_numeric(axp2);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base1(<lang `<-`(ax, axp)>);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner303233784_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf length;
  //   base2 = ldf length in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r7):
  //   r9 = `==`(r7, 3);
  //   return r9;
  // L1():
  //   ax = ld ax;
  //   ax1 = force? ax;
  //   checkMissing(ax1);
  //   length = ldf length in base;
  //   r8 = dyn length(ax1);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base2(<sym ax>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner303233784_1, CCP, RHO);
  // r11 = dyn stopifnot(p, p1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

D2_:;
  // deopt 8 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L25_:;
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

D3_:;
  // deopt 9 [log1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_log1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(log2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_log2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c2 then L27() else L3(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L3(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L3_;
  }

L27_:;
  // equilogs1 = ld equilogs
  Rsh_Fir_reg_equilogs1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 11 [c2, equilogs1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_equilogs1_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // equilogs2 = force? equilogs1
  Rsh_Fir_reg_equilogs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_equilogs1_);
  // checkMissing(equilogs2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_equilogs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(equilogs2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_equilogs2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // c6 = `&&`(c2, c5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L3(c6)
  // L3(c6)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c6_;
  goto L3_;

L30_:;
  // ax2 = ld ax
  Rsh_Fir_reg_ax2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D5_:;
  // deopt 14 [c8, ax2]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_ax2_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // ax3 = force? ax2
  Rsh_Fir_reg_ax3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ax2_);
  // checkMissing(ax3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ax3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(ax3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ax3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c11 then L32() else L33(c8, ax3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L32()
    goto L32_;
  } else {
  // L33(c8, ax3)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_ax5_ = Rsh_Fir_reg_ax3_;
    goto L33_;
  }

L32_:;
  // dr = tryDispatchBuiltin.1("[", ax3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_ax3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L34() else L33(c8, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L34()
    goto L34_;
  } else {
  // L33(c8, dr)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_ax5_ = Rsh_Fir_reg_dr;
    goto L33_;
  }

L33_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r12 = dyn __(ax5, 3)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ax5_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(c13, r12)
  // L5(c13, r12)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L5_;

L34_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L5(c8, dx)
  // L5(c8, dx)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L36_:;
  // l = ld ax
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c20 = `is.object`(l)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c20 then L37() else L38(1.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L37()
    goto L37_;
  } else {
  // L38(1.0, l)
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 24);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L38_;
  }

L37_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, 1.0)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args43);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc1 then L39() else L38(1.0, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L39()
    goto L39_;
  } else {
  // L38(1.0, dr2)
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 24);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L38_;
  }

L38_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r18 = dyn ___(l2, 1.0, 3)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r15, r18)
  // L7(r15, r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L7_;

L39_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L7(1.0, dx2)
  // L7(1.0, dx2)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 24);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D6_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p2 = prom<V +>{
  //   side1 = ld side;
  //   side2 = force? side1;
  //   checkMissing(side2);
  //   return side2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner303233784_2, CCP, RHO);
  // p3 = prom<V +>{
  //   ax6 = ld ax;
  //   ax7 = force? ax6;
  //   checkMissing(ax7);
  //   return ax7;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner303233784_3, CCP, RHO);
  // p4 = prom<V +>{
  //   usr3 = ld usr2;
  //   usr4 = force? usr3;
  //   checkMissing(usr4);
  //   return usr4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner303233784_4, CCP, RHO);
  // p5 = prom<V +>{
  //   log3 = ld log;
  //   log4 = force? log3;
  //   checkMissing(log4);
  //   return log4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner303233784_5, CCP, RHO);
  // p6 = prom<V +>{
  //   nintLog1 = ld nintLog;
  //   nintLog2 = force? nintLog1;
  //   checkMissing(nintLog2);
  //   return nintLog2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner303233784_6, CCP, RHO);
  // r25 = dyn axTicks[, axp, usr, log, nintLog](p2, p3, p4, p5, p6)
  SEXP Rsh_Fir_array_args52[5];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args52[3] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args52[4] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[5];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names9[4] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_axTicks, 5, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

D7_:;
  // deopt 42 [r25]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L42_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

L44_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L46() else D8()
  // L46()
  goto L46_;

L45_:;
  // r26 = dyn base3(<sym n>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L9_;

D8_:;
  // deopt 45 [n3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L46_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r28 = dyn is_na(n4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

D9_:;
  // deopt 48 [r28]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L9(r28)
  // L9(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L9_;

L48_:;
  // sym4 = ldf `as.integer`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf `as.integer` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard4 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L51() else D10()
  // L51()
  goto L51_;

L50_:;
  // r30 = dyn base4(<sym n>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(c21, r30)
  // L11(c21, r30)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L11_;

D10_:;
  // deopt 52 [c21, n5]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r32 = dyn as_integer(n6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L52() else D11()
  // L52()
  goto L52_;

D11_:;
  // deopt 55 [c21, r32]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L11(c21, r32)
  // L11(c21, r32)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L11_;

L54_:;
  // sym5 = ldf `seq.int`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf `seq.int` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard5 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // usr5 = ld usr2
  Rsh_Fir_reg_usr5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L57() else D12()
  // L57()
  goto L57_;

L56_:;
  // r34 = dyn base5[, , `length.out`](<lang `[`(usr2, 1)>, <lang `[`(usr2, 2)>, <lang `+`(n, 1)>)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L13_;

D12_:;
  // deopt 62 [usr5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_usr5_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L57_:;
  // usr6 = force? usr5
  Rsh_Fir_reg_usr6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_usr5_);
  // checkMissing(usr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_usr6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(usr6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_usr6_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c31 then L58() else L59(usr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L58()
    goto L58_;
  } else {
  // L59(usr6)
    Rsh_Fir_reg_usr8_ = Rsh_Fir_reg_usr6_;
    goto L59_;
  }

L58_:;
  // dr4 = tryDispatchBuiltin.1("[", usr6)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_usr6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc2 then L60() else L59(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L60()
    goto L60_;
  } else {
  // L59(dr4)
    Rsh_Fir_reg_usr8_ = Rsh_Fir_reg_dr4_;
    goto L59_;
  }

L59_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r36 = dyn __1(usr8, 1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_usr8_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L14(r36)
  // L14(r36)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r36_;
  goto L14_;

L60_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L14(dx4)
  // L14(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;

D13_:;
  // deopt 67 [usr9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_usr9_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L61_:;
  // usr10 = force? usr9
  Rsh_Fir_reg_usr10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_usr9_);
  // checkMissing(usr10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_usr10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(usr10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_usr10_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c32 then L62() else L63(usr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L62()
    goto L62_;
  } else {
  // L63(usr10)
    Rsh_Fir_reg_usr12_ = Rsh_Fir_reg_usr10_;
    goto L63_;
  }

L62_:;
  // dr6 = tryDispatchBuiltin.1("[", usr10)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_usr10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc3 then L64() else L63(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L64()
    goto L64_;
  } else {
  // L63(dr6)
    Rsh_Fir_reg_usr12_ = Rsh_Fir_reg_dr6_;
    goto L63_;
  }

L63_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r37 = dyn __2(usr12, 2)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_usr12_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r37)
  // L15(r37)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r37_;
  goto L15_;

L64_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L15(dx6)
  // L15(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L15_;

D14_:;
  // deopt 72 [n7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L65_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r38 = `+`(n8, 1)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r39 = dyn seq_int(dx5, dx7, r38)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L66() else D15()
  // L66()
  goto L66_;

D15_:;
  // deopt 78 [r39]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L13(r39)
  // L13(r39)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r39_;
  goto L13_;

D16_:;
  // deopt 80 [log5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_log5_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L67_:;
  // log6 = force? log5
  Rsh_Fir_reg_log6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log5_);
  // checkMissing(log6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_log6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c33 = `as.logical`(log6)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_log6_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c33 then L68() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L68()
    goto L68_;
  } else {
  // L16()
    goto L16_;
  }

L68_:;
  // at = ld at
  Rsh_Fir_reg_at = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L69() else D17()
  // L69()
  goto L69_;

D17_:;
  // deopt 83 [10.0, at]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_at;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L69_:;
  // at1 = force? at
  Rsh_Fir_reg_at1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at);
  // checkMissing(at1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_at1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r40 = `^`(10.0, at1)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_at1_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L17_;

D18_:;
  // deopt 86 [at2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_at2_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L71_:;
  // at3 = force? at2
  Rsh_Fir_reg_at3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at2_);
  // checkMissing(at3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_at3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // goto L17(at3)
  // L17(at3)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_at3_;
  goto L17_;

L72_:;
  // dr8 = tryDispatchBuiltin.1("[", r41)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args82);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc4 then L74() else L73(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr8)
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_dr8_;
    goto L73_;
  }

L73_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard6 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L74_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L18(dx8)
  // L18(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L18_;

L75_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

L76_:;
  // r46 = dyn base6(1, <lang `+`(n, 1)>)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(r43, r46)
  // L19(r43, r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
  goto L19_;

D19_:;
  // deopt 91 [r43, n9]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // r49 = `+`(n10, 1)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // c35 = ldf c in base
  Rsh_Fir_reg_c35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r50 = dyn c35(1, r49)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c35_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L78() else D20()
  // L78()
  goto L78_;

D20_:;
  // deopt 96 [r43, r50]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L19(r43, r50)
  // L19(r43, r50)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r50_;
  goto L19_;
}
SEXP Rsh_Fir_user_promise_inner303233784_(SEXP CCP, SEXP RHO) {
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // axp1 = ld axp
  Rsh_Fir_reg_axp1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // axp2 = force? axp1
  Rsh_Fir_reg_axp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_axp1_);
  // checkMissing(axp2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_axp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // st ax = axp2
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_axp2_, RHO);
  (void)(Rsh_Fir_reg_axp2_);
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r4 = dyn is_numeric(axp2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_axp2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base1(<lang `<-`(ax, axp)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner303233784_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r9 = `==`(r7, 3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // ax = ld ax
  Rsh_Fir_reg_ax = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ax1 = force? ax
  Rsh_Fir_reg_ax1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ax);
  // checkMissing(ax1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_ax1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r8 = dyn length(ax1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_ax1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base2(<sym ax>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner303233784_2(SEXP CCP, SEXP RHO) {
  // side1 = ld side
  Rsh_Fir_reg_side1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // side2 = force? side1
  Rsh_Fir_reg_side2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side1_);
  // checkMissing(side2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_side2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return side2
  return Rsh_Fir_reg_side2_;
}
SEXP Rsh_Fir_user_promise_inner303233784_3(SEXP CCP, SEXP RHO) {
  // ax6 = ld ax
  Rsh_Fir_reg_ax6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ax7 = force? ax6
  Rsh_Fir_reg_ax7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ax6_);
  // checkMissing(ax7)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ax7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return ax7
  return Rsh_Fir_reg_ax7_;
}
SEXP Rsh_Fir_user_promise_inner303233784_4(SEXP CCP, SEXP RHO) {
  // usr3 = ld usr2
  Rsh_Fir_reg_usr3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // usr4 = force? usr3
  Rsh_Fir_reg_usr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_usr3_);
  // checkMissing(usr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_usr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return usr4
  return Rsh_Fir_reg_usr4_;
}
SEXP Rsh_Fir_user_promise_inner303233784_5(SEXP CCP, SEXP RHO) {
  // log3 = ld log
  Rsh_Fir_reg_log3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // log4 = force? log3
  Rsh_Fir_reg_log4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log3_);
  // checkMissing(log4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_log4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return log4
  return Rsh_Fir_reg_log4_;
}
SEXP Rsh_Fir_user_promise_inner303233784_6(SEXP CCP, SEXP RHO) {
  // nintLog1 = ld nintLog
  Rsh_Fir_reg_nintLog1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // nintLog2 = force? nintLog1
  Rsh_Fir_reg_nintLog2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nintLog1_);
  // checkMissing(nintLog2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_nintLog2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return nintLog2
  return Rsh_Fir_reg_nintLog2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
