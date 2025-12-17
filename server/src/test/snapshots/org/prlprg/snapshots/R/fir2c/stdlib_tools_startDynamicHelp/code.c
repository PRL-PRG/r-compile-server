#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2062688009_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2062688009_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2062688009_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2062688009_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2062688009_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2062688009
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2062688009_, RHO, CCP);
  // st startDynamicHelp = r
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
SEXP Rsh_Fir_user_function_inner2062688009_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2062688009 dynamic dispatch ([start])

  return Rsh_Fir_user_version_inner2062688009_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2062688009_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2062688009 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2062688009/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_start;  // start
  SEXP Rsh_Fir_reg_start_isMissing;  // start_isMissing
  SEXP Rsh_Fir_reg_start_orDefault;  // start_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_Sys_getenv;  // Sys_getenv
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_httpdPort;  // httpdPort
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_httpdPort1_;  // httpdPort1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_httpdPort2_;  // httpdPort2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_start1_;  // start1
  SEXP Rsh_Fir_reg_start2_;  // start2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_port;  // port
  SEXP Rsh_Fir_reg_port1_;  // port1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_startDynamicHelp;  // startDynamicHelp
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_port2_;  // port2
  SEXP Rsh_Fir_reg_port3_;  // port3
  SEXP Rsh_Fir_reg_invisible1_;  // invisible1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_start3_;  // start3
  SEXP Rsh_Fir_reg_start4_;  // start4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_port4_;  // port4
  SEXP Rsh_Fir_reg_port5_;  // port5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_port6_;  // port6
  SEXP Rsh_Fir_reg_port7_;  // port7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_start5_;  // start5
  SEXP Rsh_Fir_reg_start6_;  // start6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_port8_;  // port8
  SEXP Rsh_Fir_reg_port9_;  // port9
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_start7_;  // start7
  SEXP Rsh_Fir_reg_start8_;  // start8
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_ports;  // ports
  SEXP Rsh_Fir_reg_ports1_;  // ports1
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_Sys_time;  // Sys_time
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_ports2_;  // ports2
  SEXP Rsh_Fir_reg_ports3_;  // ports3
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_ports4_;  // ports4
  SEXP Rsh_Fir_reg_ports5_;  // ports5
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_invisible2_;  // invisible2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_message;  // message
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_ports6_;  // ports6
  SEXP Rsh_Fir_reg_ports7_;  // ports7
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_C_startHTTPD;  // C_startHTTPD
  SEXP Rsh_Fir_reg_C_startHTTPD1_;  // C_startHTTPD1
  SEXP Rsh_Fir_reg_ports8_;  // ports8
  SEXP Rsh_Fir_reg_ports9_;  // ports9
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_C_startHTTPD3_;  // C_startHTTPD3
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_ports11_;  // ports11
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_C_startHTTPD5_;  // C_startHTTPD5
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_status;  // status
  SEXP Rsh_Fir_reg_status1_;  // status1
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_httpdPort3_;  // httpdPort3
  SEXP Rsh_Fir_reg_ports12_;  // ports12
  SEXP Rsh_Fir_reg_ports13_;  // ports13
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_ports15_;  // ports15
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_status2_;  // status2
  SEXP Rsh_Fir_reg_status3_;  // status3
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_OK;  // OK
  SEXP Rsh_Fir_reg_OK1_;  // OK1
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_message1_;  // message1
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_warning1_;  // warning1
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_httpdPort4_;  // httpdPort4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_C_stopHTTPD;  // C_stopHTTPD
  SEXP Rsh_Fir_reg_C_stopHTTPD1_;  // C_stopHTTPD1
  SEXP Rsh_Fir_reg_vargs1_;  // vargs1
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_httpdPort5_;  // httpdPort5
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_httpdPort6_;  // httpdPort6
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_invisible3_;  // invisible3
  SEXP Rsh_Fir_reg_r116_;  // r116

  // Bind parameters
  Rsh_Fir_reg_start = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // start_isMissing = missing.0(start)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_start;
  Rsh_Fir_reg_start_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if start_isMissing then L0(TRUE) else L0(start)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_start_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_start_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(start)
    Rsh_Fir_reg_start_orDefault = Rsh_Fir_reg_start;
    goto L0_;
  }

L0_:;
  // st start = start_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_start_orDefault, RHO);
  (void)(Rsh_Fir_reg_start_orDefault);
  // sym = ldf nzchar
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf nzchar in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L49() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L49()
    goto L49_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // httpdPort2 = ldf httpdPort
  Rsh_Fir_reg_httpdPort2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

L5_:;
  // c1 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L70() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L70()
    goto L70_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // start3 = ld start
  Rsh_Fir_reg_start3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L83() else D22()
  // L83()
  goto L83_;

L7_:;
  // sym3 = ldf invisible
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf invisible in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

L11_:;
  // c9 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c9 then L87() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L87()
    goto L87_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L15()
  // L15()
  goto L15_;

L13_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L93() else D27()
  // L93()
  goto L93_;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // start5 = ld start
  Rsh_Fir_reg_start5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L96() else D29()
  // L96()
  goto L96_;

L16_:;
  // c17 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c17 then L100() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L100()
    goto L100_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // start7 = ld start
  Rsh_Fir_reg_start7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L104() else D33()
  // L104()
  goto L104_;

L19_:;
  // sym11 = ldf `.Call`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base11 = ldf `.Call` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard11 then L179() else L180()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L179()
    goto L179_;
  } else {
  // L180()
    goto L180_;
  }

L20_:;
  // c20 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c20 then L114() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L114()
    goto L114_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L23()
  // L23()
  goto L23_;

L22_:;
  // r60 = `/`(r57, 300.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // r61 = `+`(r56, r60)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // __3 = ldf `%%` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r62 = dyn __3(r61, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L123() else D46()
  // L123()
  goto L123_;

L23_:;
  // sym6 = ldf `as.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf `as.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard6 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L24_:;
  // st ports = r67
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // sym7 = ldf all
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf all in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard7 then L129() else L130()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L129()
    goto L129_;
  } else {
  // L130()
    goto L130_;
  }

L25_:;
  // c21 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c21 then L133() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L133()
    goto L133_;
  } else {
  // L26()
    goto L26_;
  }

L26_:;
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L139() else D52()
  // L139()
  goto L139_;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r74
  return Rsh_Fir_reg_r74_;

L29_:;
  // s = toForSeq(r80)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L30(i)
  // L30(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L30_;

L30_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // c22 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if c22 then L144() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L144()
    goto L144_;
  } else {
  // L38()
    goto L38_;
  }

L31_:;
  // st status = r83
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // status = ld status
  Rsh_Fir_reg_status = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L153() else D58()
  // L153()
  goto L153_;

L32_:;
  // vargs = dots[r87, dx1]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r89 = `.Call`(C_startHTTPD5, vargs, <missing>)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_C_startHTTPD5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L31(i11, r89)
  // L31(i11, r89)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r89_;
  goto L31_;

L33_:;
  // status2 = ld status
  Rsh_Fir_reg_status2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L159() else D61()
  // L159()
  goto L159_;

L34_:;
  // OK = ld OK
  Rsh_Fir_reg_OK = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L163() else D62()
  // L163()
  goto L163_;

L36_:;
  // goto L30(i7)
  // L30(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L30_;

L38_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym10 = ldf `.Call`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base10 = ldf `.Call` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard10 then L145() else L146()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L145()
    goto L145_;
  } else {
  // L146()
    goto L146_;
  }

L39_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L171() else D68()
  // L171()
  goto L171_;

L40_:;
  // goto L41()
  // L41()
  goto L41_;

L41_:;
  // sym12 = ldf invisible
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base12 = ldf invisible in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard12 then L184() else L185()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L184()
    goto L184_;
  } else {
  // L185()
    goto L185_;
  }

L42_:;
  // httpdPort5 = ldf httpdPort
  Rsh_Fir_reg_httpdPort5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L182() else D76()
  // L182()
  goto L182_;

L43_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r114
  return Rsh_Fir_reg_r114_;

L44_:;
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L46() else D0()
  // L46()
  goto L46_;

L45_:;
  // r = dyn base(<lang Sys.getenv("R_DISABLE_HTTPD")>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // r2 = dyn Sys_getenv("R_DISABLE_HTTPD")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L47() else D1()
  // L47()
  goto L47_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L47_:;
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r3 = dyn nzchar(r2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L48() else D2()
  // L48()
  goto L48_;

D2_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L1_;

L49_:;
  // httpdPort = ldf httpdPort
  Rsh_Fir_reg_httpdPort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L50() else D3()
  // L50()
  goto L50_;

D3_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2062688009_, CCP, RHO);
  // r5 = dyn httpdPort(p)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L51() else D4()
  // L51()
  goto L51_;

D4_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L51_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L52() else D5()
  // L52()
  goto L52_;

D5_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // r6 = dyn warning[, `immediate.`]("httpd server disabled by R_DISABLE_HTTPD", TRUE)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L53() else D6()
  // L53()
  goto L53_;

D6_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L53_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L54() else D7()
  // L54()
  goto L54_;

D7_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // r7 = dyn __("utils", "flush.console")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L55() else D8()
  // L55()
  goto L55_;

D8_:;
  // deopt 22 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L55_:;
  // checkFun.0(r7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r7_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args29));
  // r8 = r7 as cls
  Rsh_Fir_reg_r8_ = Rsh_Fir_cast(Rsh_Fir_reg_r7_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r9 = dyn r8()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r8_, 0, NULL, NULL, CCP, RHO);
  // check L56() else D9()
  // L56()
  goto L56_;

D9_:;
  // deopt 24 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L56_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // httpdPort1 = ldf httpdPort
  Rsh_Fir_reg_httpdPort1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L59() else D10()
  // L59()
  goto L59_;

L58_:;
  // r10 = dyn base1(<lang httpdPort()>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D10_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // r12 = dyn httpdPort1()
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort1_, 0, NULL, NULL, CCP, RHO);
  // check L60() else D11()
  // L60()
  goto L60_;

D11_:;
  // deopt 29 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L60_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r13 = dyn invisible(r12)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L61() else D12()
  // L61()
  goto L61_;

D12_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r13_;
  goto L3_;

D13_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // r16 = dyn httpdPort2()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort2_, 0, NULL, NULL, CCP, RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

D14_:;
  // deopt 37 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L65_:;
  // st port = r16
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L66_:;
  // start1 = ld start
  Rsh_Fir_reg_start1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L68() else D15()
  // L68()
  goto L68_;

L67_:;
  // r17 = dyn base2(<sym start>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L5_;

D15_:;
  // deopt 41 [start1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_start1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L68_:;
  // start2 = force? start1
  Rsh_Fir_reg_start2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start1_);
  // checkMissing(start2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_start2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r19 = dyn is_na(start2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_start2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L69() else D16()
  // L69()
  goto L69_;

D16_:;
  // deopt 44 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L5_;

L70_:;
  // port = ld port
  Rsh_Fir_reg_port = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L71() else D17()
  // L71()
  goto L71_;

D17_:;
  // deopt 45 [port]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_port;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L71_:;
  // port1 = force? port
  Rsh_Fir_reg_port1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_port);
  // checkMissing(port1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_port1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r20 = `<=`(port1, 0)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_port1_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c2 then L72() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L72()
    goto L72_;
  } else {
  // L7()
    goto L7_;
  }

L72_:;
  // startDynamicHelp = ldf startDynamicHelp
  Rsh_Fir_reg_startDynamicHelp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L73() else D18()
  // L73()
  goto L73_;

D18_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // r21 = dyn startDynamicHelp(TRUE)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_startDynamicHelp, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L74() else D19()
  // L74()
  goto L74_;

D19_:;
  // deopt 52 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L74_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

L77_:;
  // port2 = ld port
  Rsh_Fir_reg_port2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L79() else D20()
  // L79()
  goto L79_;

L78_:;
  // r24 = dyn base3(<sym port>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r24)
  // L9(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L9_;

D20_:;
  // deopt 58 [port2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_port2_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L79_:;
  // port3 = force? port2
  Rsh_Fir_reg_port3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_port2_);
  // checkMissing(port3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_port3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // invisible1 = ldf invisible in base
  Rsh_Fir_reg_invisible1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r26 = dyn invisible1(port3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_port3_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L80() else D21()
  // L80()
  goto L80_;

D21_:;
  // deopt 61 [r26]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L9_;

D22_:;
  // deopt 65 [start3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_start3_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L83_:;
  // start4 = force? start3
  Rsh_Fir_reg_start4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start3_);
  // checkMissing(start4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_start4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(start4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_start4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c3 then L84() else L11(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L84()
    goto L84_;
  } else {
  // L11(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L11_;
  }

L84_:;
  // port4 = ld port
  Rsh_Fir_reg_port4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L85() else D23()
  // L85()
  goto L85_;

D23_:;
  // deopt 67 [c3, port4]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_port4_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L85_:;
  // port5 = force? port4
  Rsh_Fir_reg_port5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_port4_);
  // checkMissing(port5)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_port5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(port5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_port5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c3, c6)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L11(c7)
  // L11(c7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c7_;
  goto L11_;

L87_:;
  // port6 = ld port
  Rsh_Fir_reg_port6_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L88() else D24()
  // L88()
  goto L88_;

D24_:;
  // deopt 70 [port6]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_port6_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L88_:;
  // port7 = force? port6
  Rsh_Fir_reg_port7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_port6_);
  // checkMissing(port7)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_port7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r29 = `>`(port7, 0)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_port7_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c10 then L89() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L89()
    goto L89_;
  } else {
  // L13()
    goto L13_;
  }

L89_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L90() else D25()
  // L90()
  goto L90_;

D25_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // r30 = dyn stop("server already running")
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L91() else D26()
  // L91()
  goto L91_;

D26_:;
  // deopt 77 [r30]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L14(r30)
  // L14(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L14_;

D27_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // r32 = dyn stop1("server could not be started on an earlier attempt")
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L94() else D28()
  // L94()
  goto L94_;

D28_:;
  // deopt 81 [r32]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L14(r32)
  // L14(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L14_;

D29_:;
  // deopt 84 [start5]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_start5_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L96_:;
  // start6 = force? start5
  Rsh_Fir_reg_start6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start5_);
  // checkMissing(start6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_start6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r34 = `!`(start6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_start6_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c11 then L97() else L16(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L97()
    goto L97_;
  } else {
  // L16(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L16_;
  }

L97_:;
  // port8 = ld port
  Rsh_Fir_reg_port8_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L98() else D30()
  // L98()
  goto L98_;

D30_:;
  // deopt 87 [c11, port8]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_port8_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L98_:;
  // port9 = force? port8
  Rsh_Fir_reg_port9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_port8_);
  // checkMissing(port9)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_port9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // r35 = `<=`(port9, 0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_port9_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // c15 = `&&`(c11, c14)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L16(c15)
  // L16(c15)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c15_;
  goto L16_;

L100_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L101() else D31()
  // L101()
  goto L101_;

D31_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // r36 = dyn stop2("no running server to stop")
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L102() else D32()
  // L102()
  goto L102_;

D32_:;
  // deopt 95 [r36]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L18()
  // L18()
  goto L18_;

D33_:;
  // deopt 98 [start7]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_start7_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L104_:;
  // start8 = force? start7
  Rsh_Fir_reg_start8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start7_);
  // checkMissing(start8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_start8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(start8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_start8_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c18 then L105() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L105()
    goto L105_;
  } else {
  // L19()
    goto L19_;
  }

L105_:;
  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L106() else D34()
  // L106()
  goto L106_;

D34_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // r38 = dyn __1("utils", "flush.console")
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L107() else D35()
  // L107()
  goto L107_;

D35_:;
  // deopt 104 [r38]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L107_:;
  // checkFun.0(r38)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r38_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args65));
  // r39 = r38 as cls
  Rsh_Fir_reg_r39_ = Rsh_Fir_cast(Rsh_Fir_reg_r38_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r40 = dyn r39()
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r39_, 0, NULL, NULL, CCP, RHO);
  // check L108() else D36()
  // L108()
  goto L108_;

D36_:;
  // deopt 106 [r40]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L108_:;
  // st OK = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 38), RHO);
  (void)(Rsh_const(CCP, 38));
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L109() else D37()
  // L109()
  goto L109_;

D37_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L109_:;
  // r41 = dyn getOption("help.ports")
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L110() else D38()
  // L110()
  goto L110_;

D38_:;
  // deopt 113 [r41]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L110_:;
  // st ports = r41
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard4 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // ports = ld ports
  Rsh_Fir_reg_ports = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L113() else D39()
  // L113()
  goto L113_;

L112_:;
  // r42 = dyn base4(<sym ports>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L20(r42)
  // L20(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L20_;

D39_:;
  // deopt 116 [ports]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_ports;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L113_:;
  // ports1 = force? ports
  Rsh_Fir_reg_ports1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ports);
  // checkMissing(ports1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_ports1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c19 = `==`(ports1, NULL)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_ports1_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L20(c19)
  // L20(c19)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_c19_;
  goto L20_;

L114_:;
  // __2 = ldf `::`
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L115() else D40()
  // L115()
  goto L115_;

D40_:;
  // deopt 123 [10000.0, 22000.0]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack28[1] = Rsh_const(CCP, 43);
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L115_:;
  // r44 = dyn __2("stats", "runif")
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L116() else D41()
  // L116()
  goto L116_;

D41_:;
  // deopt 126 [10000.0, 22000.0, r44]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack29[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(126, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L116_:;
  // checkFun.0(r44)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r44_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args72));
  // r45 = r44 as cls
  Rsh_Fir_reg_r45_ = Rsh_Fir_cast(Rsh_Fir_reg_r44_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r46 = dyn r45(10.0)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r45_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L117() else D42()
  // L117()
  goto L117_;

D42_:;
  // deopt 129 [10000.0, 22000.0, r46]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack30[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(129, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L117_:;
  // sym5 = ldf unclass
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base5 = ldf unclass in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard5 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L118_:;
  // Sys_time = ldf `Sys.time`
  Rsh_Fir_reg_Sys_time = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L120() else D43()
  // L120()
  goto L120_;

L119_:;
  // r53 = dyn base5(<lang Sys.time()>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L22(10000.0, 22000.0, r46, r53)
  // L22(10000.0, 22000.0, r46, r53)
  Rsh_Fir_reg_r54_ = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r53_;
  goto L22_;

D43_:;
  // deopt 132 [10000.0, 22000.0, r46]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack31[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(132, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L120_:;
  // r58 = dyn Sys_time()
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_time, 0, NULL, NULL, CCP, RHO);
  // check L121() else D44()
  // L121()
  goto L121_;

D44_:;
  // deopt 133 [10000.0, 22000.0, r46, r58]
  SEXP Rsh_Fir_array_deopt_stack32[4];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack32[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(133, 4, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L121_:;
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r59 = dyn unclass(r58)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L122() else D45()
  // L122()
  goto L122_;

D45_:;
  // deopt 135 [10000.0, 22000.0, r46, r59]
  SEXP Rsh_Fir_array_deopt_stack33[4];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_deopt_stack33[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(135, 4, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L22(10000.0, 22000.0, r46, r59)
  // L22(10000.0, 22000.0, r46, r59)
  Rsh_Fir_reg_r54_ = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r59_;
  goto L22_;

D46_:;
  // deopt 141 [r54, r55, r62]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(141, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L123_:;
  // r63 = `*`(r55, r62)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // r64 = `+`(r54, r63)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // st ports = r64
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // goto L23()
  // L23()
  goto L23_;

L125_:;
  // ports2 = ld ports
  Rsh_Fir_reg_ports2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L127() else D47()
  // L127()
  goto L127_;

L126_:;
  // r66 = dyn base6(<sym ports>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L24(r66)
  // L24(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L24_;

D47_:;
  // deopt 149 [ports2]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ports2_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L127_:;
  // ports3 = force? ports2
  Rsh_Fir_reg_ports3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ports2_);
  // checkMissing(ports3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_ports3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r68 = dyn as_integer(ports3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_ports3_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L128() else D48()
  // L128()
  goto L128_;

D48_:;
  // deopt 152 [r68]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L24(r68)
  // L24(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L24_;

L129_:;
  // ports4 = ld ports
  Rsh_Fir_reg_ports4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L131() else D49()
  // L131()
  goto L131_;

L130_:;
  // r69 = dyn base7(<lang `==`(ports, 0.0)>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L25(r69)
  // L25(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L25_;

D49_:;
  // deopt 156 [ports4]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_ports4_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L131_:;
  // ports5 = force? ports4
  Rsh_Fir_reg_ports5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ports4_);
  // checkMissing(ports5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_ports5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r71 = `==`(ports5, 0.0)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_ports5_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r72 = dyn all(r71)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L132() else D50()
  // L132()
  goto L132_;

D50_:;
  // deopt 161 [r72]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L25(r72)
  // L25(r72)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r72_;
  goto L25_;

L133_:;
  // sym8 = ldf invisible
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base8 = ldf invisible in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard8 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L134_:;
  // invisible2 = ldf invisible in base
  Rsh_Fir_reg_invisible2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r75 = dyn invisible2(0.0)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible2_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L136() else D51()
  // L136()
  goto L136_;

L135_:;
  // r73 = dyn base8(0.0)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L27(r73)
  // L27(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L27_;

D51_:;
  // deopt 166 [r75]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L136_:;
  // goto L27(r75)
  // L27(r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L27_;

D52_:;
  // deopt 171 []
  Rsh_Fir_deopt(171, 0, NULL, CCP, RHO);
  return R_NilValue;

L139_:;
  // r78 = dyn message[, appendLF]("starting httpd help server ...", FALSE)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L140() else D53()
  // L140()
  goto L140_;

D53_:;
  // deopt 175 [r78]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L140_:;
  // sym9 = ldf seq_along
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base9 = ldf seq_along in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard9 then L141() else L142()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L141()
    goto L141_;
  } else {
  // L142()
    goto L142_;
  }

L141_:;
  // ports6 = ld ports
  Rsh_Fir_reg_ports6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L143() else D54()
  // L143()
  goto L143_;

L142_:;
  // r79 = dyn base9(<sym ports>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L29(r79)
  // L29(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L29_;

D54_:;
  // deopt 177 [ports6]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_ports6_;
  Rsh_Fir_deopt(177, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L143_:;
  // ports7 = force? ports6
  Rsh_Fir_reg_ports7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ports6_);
  // checkMissing(ports7)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_ports7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // r81 = seq_along(ports7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_ports7_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L29(r81)
  // L29(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L29_;

L144_:;
  // goto L34()
  // L34()
  goto L34_;

L145_:;
  // C_startHTTPD = ld C_startHTTPD
  Rsh_Fir_reg_C_startHTTPD = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L147() else D55()
  // L147()
  goto L147_;

L146_:;
  // r82 = dyn base10(<sym C_startHTTPD>, "127.0.0.1", <lang `[`(ports, i)>)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L31(i2, r82)
  // L31(i2, r82)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L31_;

D55_:;
  // deopt 181 [i2, C_startHTTPD]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_C_startHTTPD;
  Rsh_Fir_deopt(181, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L147_:;
  // C_startHTTPD1 = force? C_startHTTPD
  Rsh_Fir_reg_C_startHTTPD1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_startHTTPD);
  // checkMissing(C_startHTTPD1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_C_startHTTPD1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // ports8 = ld ports
  Rsh_Fir_reg_ports8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L148() else D56()
  // L148()
  goto L148_;

D56_:;
  // deopt 183 [i2, C_startHTTPD1, "127.0.0.1", ports8]
  SEXP Rsh_Fir_array_deopt_stack43[4];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_C_startHTTPD1_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_ports8_;
  Rsh_Fir_deopt(183, 4, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L148_:;
  // ports9 = force? ports8
  Rsh_Fir_reg_ports9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ports8_);
  // checkMissing(ports9)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_ports9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(ports9)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_ports9_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c23 then L149() else L150(i2, C_startHTTPD1, "127.0.0.1", ports9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L149()
    goto L149_;
  } else {
  // L150(i2, C_startHTTPD1, "127.0.0.1", ports9)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_C_startHTTPD3_ = Rsh_Fir_reg_C_startHTTPD1_;
    Rsh_Fir_reg_r85_ = Rsh_const(CCP, 56);
    Rsh_Fir_reg_ports11_ = Rsh_Fir_reg_ports9_;
    goto L150_;
  }

L149_:;
  // dr = tryDispatchBuiltin.1("[", ports9)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_ports9_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc then L151() else L150(i2, C_startHTTPD1, "127.0.0.1", dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L151()
    goto L151_;
  } else {
  // L150(i2, C_startHTTPD1, "127.0.0.1", dr)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_C_startHTTPD3_ = Rsh_Fir_reg_C_startHTTPD1_;
    Rsh_Fir_reg_r85_ = Rsh_const(CCP, 56);
    Rsh_Fir_reg_ports11_ = Rsh_Fir_reg_dr;
    goto L150_;
  }

L150_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L152() else D57()
  // L152()
  goto L152_;

L151_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L32(i2, C_startHTTPD1, "127.0.0.1", dx)
  // L32(i2, C_startHTTPD1, "127.0.0.1", dx)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_C_startHTTPD5_ = Rsh_Fir_reg_C_startHTTPD1_;
  Rsh_Fir_reg_r87_ = Rsh_const(CCP, 56);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L32_;

D57_:;
  // deopt 185 [i9, C_startHTTPD3, r85, ports11, i12]
  SEXP Rsh_Fir_array_deopt_stack44[5];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_C_startHTTPD3_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_ports11_;
  Rsh_Fir_array_deopt_stack44[4] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(185, 5, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L152_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r88 = dyn __4(ports11, i13)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_ports11_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L32(i9, C_startHTTPD3, r85, r88)
  // L32(i9, C_startHTTPD3, r85, r88)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_C_startHTTPD5_ = Rsh_Fir_reg_C_startHTTPD3_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r88_;
  goto L32_;

D58_:;
  // deopt 190 [i7, status]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_status;
  Rsh_Fir_deopt(190, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L153_:;
  // status1 = force? status
  Rsh_Fir_reg_status1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_status);
  // checkMissing(status1)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_status1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // r90 = `==`(status1, 0)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_status1_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c24 then L154() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L154()
    goto L154_;
  } else {
  // L33()
    goto L33_;
  }

L154_:;
  // st OK = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // httpdPort3 = ldf httpdPort
  Rsh_Fir_reg_httpdPort3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L155() else D59()
  // L155()
  goto L155_;

D59_:;
  // deopt 198 [i7]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L155_:;
  // p1 = prom<V +>{
  //   ports12 = ld ports;
  //   ports13 = force? ports12;
  //   checkMissing(ports13);
  //   c25 = `is.object`(ports13);
  //   if c25 then L1() else L2(ports13);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", ports13);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(ports15):
  //   i16 = ld i;
  //   i17 = force? i16;
  //   __5 = ldf `[` in base;
  //   r91 = dyn __5(ports15, i17);
  //   goto L0(r91);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2062688009_1, CCP, RHO);
  // r93 = dyn httpdPort3(p1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort3_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L156() else D60()
  // L156()
  goto L156_;

D60_:;
  // deopt 200 [i7, r93]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(200, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L156_:;
  // goto L34()
  // L34()
  goto L34_;

D61_:;
  // deopt 205 [i7, status2]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_status2_;
  Rsh_Fir_deopt(205, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L159_:;
  // status3 = force? status2
  Rsh_Fir_reg_status3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_status2_);
  // checkMissing(status3)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_status3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // r95 = `!=`(status3, -2)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_status3_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r95)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c26 then L160() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L160()
    goto L160_;
  } else {
  // L36()
    goto L36_;
  }

L160_:;
  // goto L34()
  // L34()
  goto L34_;

D62_:;
  // deopt 216 [OK]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_OK;
  Rsh_Fir_deopt(216, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L163_:;
  // OK1 = force? OK
  Rsh_Fir_reg_OK1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OK);
  // checkMissing(OK1)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_OK1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // c27 = `as.logical`(OK1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_OK1_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c27 then L164() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L164()
    goto L164_;
  } else {
  // L39()
    goto L39_;
  }

L164_:;
  // message1 = ldf message
  Rsh_Fir_reg_message1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L165() else D63()
  // L165()
  goto L165_;

D63_:;
  // deopt 219 []
  Rsh_Fir_deopt(219, 0, NULL, CCP, RHO);
  return R_NilValue;

L165_:;
  // r97 = dyn message1(" done")
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message1_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L166() else D64()
  // L166()
  goto L166_;

D64_:;
  // deopt 221 [r97]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(221, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L166_:;
  // __6 = ldf `::`
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L167() else D65()
  // L167()
  goto L167_;

D65_:;
  // deopt 223 []
  Rsh_Fir_deopt(223, 0, NULL, CCP, RHO);
  return R_NilValue;

L167_:;
  // r98 = dyn __6("utils", "flush.console")
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L168() else D66()
  // L168()
  goto L168_;

D66_:;
  // deopt 226 [r98]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L168_:;
  // checkFun.0(r98)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r98_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args119));
  // r99 = r98 as cls
  Rsh_Fir_reg_r99_ = Rsh_Fir_cast(Rsh_Fir_reg_r98_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r100 = dyn r99()
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r99_, 0, NULL, NULL, CCP, RHO);
  // check L169() else D67()
  // L169()
  goto L169_;

D67_:;
  // deopt 228 [r100]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(228, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L169_:;
  // goto L40(r100)
  // L40(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L40_;

D68_:;
  // deopt 230 []
  Rsh_Fir_deopt(230, 0, NULL, CCP, RHO);
  return R_NilValue;

L171_:;
  // r102 = dyn warning1[, `immediate.`]("failed to start the httpd server", TRUE)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L172() else D69()
  // L172()
  goto L172_;

D69_:;
  // deopt 234 [r102]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L172_:;
  // __7 = ldf `::`
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L173() else D70()
  // L173()
  goto L173_;

D70_:;
  // deopt 236 []
  Rsh_Fir_deopt(236, 0, NULL, CCP, RHO);
  return R_NilValue;

L173_:;
  // r103 = dyn __7("utils", "flush.console")
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L174() else D71()
  // L174()
  goto L174_;

D71_:;
  // deopt 239 [r103]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(239, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L174_:;
  // checkFun.0(r103)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r103_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args122));
  // r104 = r103 as cls
  Rsh_Fir_reg_r104_ = Rsh_Fir_cast(Rsh_Fir_reg_r103_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r105 = dyn r104()
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r104_, 0, NULL, NULL, CCP, RHO);
  // check L175() else D72()
  // L175()
  goto L175_;

D72_:;
  // deopt 241 [r105]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L175_:;
  // httpdPort4 = ldf httpdPort
  Rsh_Fir_reg_httpdPort4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L176() else D73()
  // L176()
  goto L176_;

D73_:;
  // deopt 243 []
  Rsh_Fir_deopt(243, 0, NULL, CCP, RHO);
  return R_NilValue;

L176_:;
  // p2 = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2062688009_2, CCP, RHO);
  // r107 = dyn httpdPort4(p2)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort4_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L177() else D74()
  // L177()
  goto L177_;

D74_:;
  // deopt 245 [r107]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L177_:;
  // goto L40(r107)
  // L40(r107)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r107_;
  goto L40_;

L179_:;
  // C_stopHTTPD = ld C_stopHTTPD
  Rsh_Fir_reg_C_stopHTTPD = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // check L181() else D75()
  // L181()
  goto L181_;

L180_:;
  // r109 = dyn base11(<sym C_stopHTTPD>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L42()
  // L42()
  goto L42_;

D75_:;
  // deopt 247 [C_stopHTTPD]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_C_stopHTTPD;
  Rsh_Fir_deopt(247, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L181_:;
  // C_stopHTTPD1 = force? C_stopHTTPD
  Rsh_Fir_reg_C_stopHTTPD1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_stopHTTPD);
  // checkMissing(C_stopHTTPD1)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_C_stopHTTPD1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // vargs1 = dots[]
  Rsh_Fir_reg_vargs1_ = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 0, NULL, NULL);
  // r111 = `.Call`(C_stopHTTPD1, vargs1, <missing>)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_C_stopHTTPD1_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_vargs1_;
  Rsh_Fir_array_args126[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L42()
  // L42()
  goto L42_;

D76_:;
  // deopt 251 []
  Rsh_Fir_deopt(251, 0, NULL, CCP, RHO);
  return R_NilValue;

L182_:;
  // r112 = dyn httpdPort5(0)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort5_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L183() else D77()
  // L183()
  goto L183_;

D77_:;
  // deopt 253 [r112]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L183_:;
  // goto L41()
  // L41()
  goto L41_;

L184_:;
  // httpdPort6 = ldf httpdPort
  Rsh_Fir_reg_httpdPort6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L186() else D78()
  // L186()
  goto L186_;

L185_:;
  // r113 = dyn base12(<lang httpdPort()>)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L43(r113)
  // L43(r113)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r113_;
  goto L43_;

D78_:;
  // deopt 257 []
  Rsh_Fir_deopt(257, 0, NULL, CCP, RHO);
  return R_NilValue;

L186_:;
  // r115 = dyn httpdPort6()
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_httpdPort6_, 0, NULL, NULL, CCP, RHO);
  // check L187() else D79()
  // L187()
  goto L187_;

D79_:;
  // deopt 258 [r115]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L187_:;
  // invisible3 = ldf invisible in base
  Rsh_Fir_reg_invisible3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r116 = dyn invisible3(r115)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible3_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L188() else D80()
  // L188()
  goto L188_;

D80_:;
  // deopt 260 [r116]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(260, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L188_:;
  // goto L43(r116)
  // L43(r116)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r116_;
  goto L43_;
}
SEXP Rsh_Fir_user_promise_inner2062688009_(SEXP CCP, SEXP RHO) {
  // return -1
  return Rsh_const(CCP, 26);
}
SEXP Rsh_Fir_user_promise_inner2062688009_1(SEXP CCP, SEXP RHO) {
  // ports12 = ld ports
  Rsh_Fir_reg_ports12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ports13 = force? ports12
  Rsh_Fir_reg_ports13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ports12_);
  // checkMissing(ports13)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_ports13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(ports13)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_ports13_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c25 then L1() else L2(ports13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L1()
    goto L1_;
  } else {
  // L2(ports13)
    Rsh_Fir_reg_ports15_ = Rsh_Fir_reg_ports13_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", ports13)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_ports13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_ports15_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // i16 = ld i
  Rsh_Fir_reg_i16_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i17 = force? i16
  Rsh_Fir_reg_i17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i16_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r91 = dyn __5(ports15, i17)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_ports15_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r91)
  // L0(r91)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r91_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2062688009_2(SEXP CCP, SEXP RHO) {
  // return -1
  return Rsh_const(CCP, 26);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
