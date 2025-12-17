#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4169359922_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4169359922_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4169359922_(SEXP CCP, SEXP RHO);
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
  // r = clos inner4169359922
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4169359922_, RHO, CCP);
  // st dmultinom = r
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
SEXP Rsh_Fir_user_function_inner4169359922_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4169359922 dynamic dispatch ([x, size, prob, log])

  return Rsh_Fir_user_version_inner4169359922_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4169359922_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4169359922 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner4169359922/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_prob;  // prob
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_size_isMissing;  // size_isMissing
  SEXP Rsh_Fir_reg_size_orDefault;  // size_orDefault
  SEXP Rsh_Fir_reg_log_isMissing;  // log_isMissing
  SEXP Rsh_Fir_reg_log_orDefault;  // log_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_prob1_;  // prob1
  SEXP Rsh_Fir_reg_prob2_;  // prob2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_K;  // K
  SEXP Rsh_Fir_reg_K1_;  // K1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_prob3_;  // prob3
  SEXP Rsh_Fir_reg_prob4_;  // prob4
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_prob5_;  // prob5
  SEXP Rsh_Fir_reg_prob6_;  // prob6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_prob7_;  // prob7
  SEXP Rsh_Fir_reg_prob8_;  // prob8
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_prob9_;  // prob9
  SEXP Rsh_Fir_reg_prob10_;  // prob10
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_any2_;  // any2
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_N;  // N
  SEXP Rsh_Fir_reg_N1_;  // N1
  SEXP Rsh_Fir_reg_size3_;  // size3
  SEXP Rsh_Fir_reg_size4_;  // size4
  SEXP Rsh_Fir_reg_N3_;  // N3
  SEXP Rsh_Fir_reg_N4_;  // N4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_prob11_;  // prob11
  SEXP Rsh_Fir_reg_prob12_;  // prob12
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_i0_;  // i0
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_any3_;  // any3
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_any4_;  // any4
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_log3_;  // log3
  SEXP Rsh_Fir_reg_log4_;  // log4
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_prob13_;  // prob13
  SEXP Rsh_Fir_reg_prob14_;  // prob14
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_prob16_;  // prob16
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_size5_;  // size5
  SEXP Rsh_Fir_reg_size6_;  // size6
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_log5_;  // log5
  SEXP Rsh_Fir_reg_prob17_;  // prob17
  SEXP Rsh_Fir_reg_prob18_;  // prob18
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_sum2_;  // sum2
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_log6_;  // log6
  SEXP Rsh_Fir_reg_log7_;  // log7
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_r97_;  // r97

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_size = PARAMS[1];
  Rsh_Fir_reg_prob = PARAMS[2];
  Rsh_Fir_reg_log = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // size_isMissing = missing.0(size)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_size;
  Rsh_Fir_reg_size_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if size_isMissing then L0(NULL) else L0(size)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_size_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_size_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(size)
    Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_size;
    goto L0_;
  }

L0_:;
  // st size = size_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_size_orDefault, RHO);
  (void)(Rsh_Fir_reg_size_orDefault);
  // st prob = prob
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_prob, RHO);
  (void)(Rsh_Fir_reg_prob);
  // log_isMissing = missing.0(log)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_log;
  Rsh_Fir_reg_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if log_isMissing then L1(FALSE) else L1(log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_log_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(log)
    Rsh_Fir_reg_log_orDefault = Rsh_Fir_reg_log;
    goto L1_;
  }

L1_:;
  // st log = log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L2_:;
  // st K = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L3_:;
  // K = ld K
  Rsh_Fir_reg_K = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L52() else D4()
  // L52()
  goto L52_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L6_:;
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L8(c1) else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L8_;
  } else {
  // L64()
    goto L64_;
  }

L7_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r15 = dyn any(r14)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

L8_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c10 then L10(c10) else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L10(c10)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c10_;
    goto L10_;
  } else {
  // L70()
    goto L70_;
  }

L9_:;
  // c7 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c8 = `||`(c6, c7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L8(c8)
  // L8(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L8_;

L10_:;
  // c19 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c19 then L76() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L76()
    goto L76_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // st s = r21
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // r23 = `==`(r21, 0.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c17 = `||`(c15, c16)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L10(c17)
  // L10(c17)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c17_;
  goto L10_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // prob9 = ld prob
  Rsh_Fir_reg_prob9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L80() else D16()
  // L80()
  goto L80_;

L14_:;
  // st x = r28
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym7 = ldf any
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base7 = ldf any in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard7 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L15_:;
  // c20 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c20 then L90() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L90()
    goto L90_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym8 = ldf sum
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base8 = ldf sum in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard8 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L18_:;
  // st N = r38
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym9 = ldf `is.null`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base9 = ldf `is.null` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard9 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L19_:;
  // c22 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c22 then L101() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L101()
    goto L101_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // size3 = ld size
  Rsh_Fir_reg_size3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L104() else D28()
  // L104()
  goto L104_;

L21_:;
  // prob11 = ld prob
  Rsh_Fir_reg_prob11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L110() else D32()
  // L110()
  goto L110_;

L22_:;
  // goto L21()
  // L21()
  goto L21_;

L23_:;
  // c24 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c24 then L115() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L115()
    goto L115_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L38()
  // L38()
  goto L38_;

L25_:;
  // c26 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c26 then L124() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L124()
    goto L124_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // r51 = `!=`(dx1, 0.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // any4 = ldf any in base
  Rsh_Fir_reg_any4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r52 = dyn any4(r51)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any4_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L123() else D37()
  // L123()
  goto L123_;

L27_:;
  // sym12 = ldf all
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base12 = ldf all in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard12 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L28_:;
  // goto L29(0.0)
  // L29(0.0)
  Rsh_Fir_reg_r53_ = Rsh_const(CCP, 11);
  goto L29_;

L29_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r53
  return Rsh_Fir_reg_r53_;

L31_:;
  // c28 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c28 then L134() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L134()
    goto L134_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L140() else D42()
  // L140()
  goto L140_;

L33_:;
  // goto L34(1.0)
  // L34(1.0)
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 16);
  goto L34_;

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r59
  return Rsh_Fir_reg_r59_;

L36_:;
  // st x = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // prob13 = ld prob
  Rsh_Fir_reg_prob13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L145() else D44()
  // L145()
  goto L145_;

L37_:;
  // st prob = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // sym13 = ldf lgamma
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base13 = ldf lgamma in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard13 then L151() else L152()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L151()
    goto L151_;
  } else {
  // L152()
    goto L152_;
  }

L39_:;
  // sym14 = ldf sum
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base14 = ldf sum in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard14 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L40_:;
  // r90 = `+`(r73, r74)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // st r = r90
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // log6 = ld log
  Rsh_Fir_reg_log6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L163() else D52()
  // L163()
  goto L163_;

L41_:;
  // r88 = `-`(r84, r85)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r89 = dyn sum2(r88)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L162() else D51()
  // L162()
  goto L162_;

L42_:;
  // sym16 = ldf exp
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base16 = ldf exp in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard16 then L167() else L168()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L167()
    goto L167_;
  } else {
  // L168()
    goto L168_;
  }

L43_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r94
  return Rsh_Fir_reg_r94_;

L44_:;
  // prob1 = ld prob
  Rsh_Fir_reg_prob1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L46() else D0()
  // L46()
  goto L46_;

L45_:;
  // r = dyn base(<sym prob>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [prob1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_prob1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L46_:;
  // prob2 = force? prob1
  Rsh_Fir_reg_prob2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob1_);
  // checkMissing(prob2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_prob2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn length(prob2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_prob2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L47() else D1()
  // L47()
  goto L47_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L48_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D2()
  // L50()
  goto L50_;

L49_:;
  // r3 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D2_:;
  // deopt 9 [x1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L50_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn length1(x2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L51() else D3()
  // L51()
  goto L51_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;

D4_:;
  // deopt 12 [r4, K]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_K;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L52_:;
  // K1 = force? K
  Rsh_Fir_reg_K1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_K);
  // checkMissing(K1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_K1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r6 = `!=`(r4, K1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_K1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c then L53() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L53()
    goto L53_;
  } else {
  // L4()
    goto L4_;
  }

L53_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L54() else D5()
  // L54()
  goto L54_;

D5_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // r7 = dyn stop("x[] and prob[] must be equal length vectors.")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L55() else D6()
  // L55()
  goto L55_;

D6_:;
  // deopt 18 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L5()
  // L5()
  goto L5_;

L57_:;
  // sym3 = ldf `is.finite`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf `is.finite` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L58_:;
  // r9 = dyn base2(<lang `!`(is.finite(prob))>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

L59_:;
  // prob3 = ld prob
  Rsh_Fir_reg_prob3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L61() else D7()
  // L61()
  goto L61_;

L60_:;
  // r11 = dyn base3(<sym prob>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

D7_:;
  // deopt 25 [prob3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_prob3_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L61_:;
  // prob4 = force? prob3
  Rsh_Fir_reg_prob4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob3_);
  // checkMissing(prob4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_prob4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r13 = dyn is_finite(prob4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_prob4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L62() else D8()
  // L62()
  goto L62_;

D8_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L7_;

D9_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r15_;
  goto L6_;

L64_:;
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // prob5 = ld prob
  Rsh_Fir_reg_prob5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L67() else D10()
  // L67()
  goto L67_;

L66_:;
  // r16 = dyn base4(<lang `<`(prob, 0.0)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(c1, r16)
  // L9(c1, r16)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L9_;

D10_:;
  // deopt 34 [c1, prob5]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_prob5_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L67_:;
  // prob6 = force? prob5
  Rsh_Fir_reg_prob6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob5_);
  // checkMissing(prob6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_prob6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r18 = `<`(prob6, 0.0)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_prob6_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r19 = dyn any1(r18)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L68() else D11()
  // L68()
  goto L68_;

D11_:;
  // deopt 39 [c1, r19]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L9(c1, r19)
  // L9(c1, r19)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r19_;
  goto L9_;

L70_:;
  // sym5 = ldf sum
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf sum in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard5 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // prob7 = ld prob
  Rsh_Fir_reg_prob7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L73() else D12()
  // L73()
  goto L73_;

L72_:;
  // r20 = dyn base5(<sym prob>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(c10, r20)
  // L11(c10, r20)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

D12_:;
  // deopt 43 [c10, prob7]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_prob7_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L73_:;
  // prob8 = force? prob7
  Rsh_Fir_reg_prob8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob7_);
  // checkMissing(prob8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_prob8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r22 = dyn sum(prob8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_prob8_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L74() else D13()
  // L74()
  goto L74_;

D13_:;
  // deopt 46 [c10, r22]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L11(c10, r22)
  // L11(c10, r22)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L11_;

L76_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L77() else D14()
  // L77()
  goto L77_;

D14_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // r24 = dyn stop1("probabilities must be finite, non-negative and not all 0")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L78() else D15()
  // L78()
  goto L78_;

D15_:;
  // deopt 54 [r24]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L13()
  // L13()
  goto L13_;

D16_:;
  // deopt 57 [prob9]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_prob9_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L80_:;
  // prob10 = force? prob9
  Rsh_Fir_reg_prob10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob9_);
  // checkMissing(prob10)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_prob10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L81() else D17()
  // L81()
  goto L81_;

D17_:;
  // deopt 58 [prob10, s]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_prob10_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L81_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r26 = `/`(prob10, s1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_prob10_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // st prob = r26
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym6 = ldf `as.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base6 = ldf `as.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard6 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L82_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D18()
  // L84()
  goto L84_;

L83_:;
  // r27 = dyn base6(<lang `+`(x, 0.5)>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L14(r27)
  // L14(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L14_;

D18_:;
  // deopt 64 [x3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L84_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // r29 = `+`(x4, 0.5)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r30 = dyn as_integer(r29)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L85() else D19()
  // L85()
  goto L85_;

D19_:;
  // deopt 69 [r30]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L14(r30)
  // L14(r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r30_;
  goto L14_;

L86_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L88() else D20()
  // L88()
  goto L88_;

L87_:;
  // r31 = dyn base7(<lang `<`(x, 0.0)>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(r31)
  // L15(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L15_;

D20_:;
  // deopt 73 [x5]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L88_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r33 = `<`(x6, 0.0)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r34 = dyn any2(r33)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L89() else D21()
  // L89()
  goto L89_;

D21_:;
  // deopt 78 [r34]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r34_;
  goto L15_;

L90_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L91() else D22()
  // L91()
  goto L91_;

D22_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // r35 = dyn stop2("'x' must be non-negative")
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L92() else D23()
  // L92()
  goto L92_;

D23_:;
  // deopt 82 [r35]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L17()
  // L17()
  goto L17_;

L94_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L96() else D24()
  // L96()
  goto L96_;

L95_:;
  // r37 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L18(r37)
  // L18(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L18_;

D24_:;
  // deopt 87 [x7]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L96_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r39 = dyn sum1(x8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L97() else D25()
  // L97()
  goto L97_;

D25_:;
  // deopt 90 [r39]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L18(r39)
  // L18(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L18_;

L98_:;
  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L100() else D26()
  // L100()
  goto L100_;

L99_:;
  // r40 = dyn base9(<sym size>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L19(r40)
  // L19(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L19_;

D26_:;
  // deopt 93 [size1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_size1_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L100_:;
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c21 = `==`(size2, NULL)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L19(c21)
  // L19(c21)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_c21_;
  goto L19_;

L101_:;
  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L102() else D27()
  // L102()
  goto L102_;

D27_:;
  // deopt 96 [N]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_N;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L102_:;
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // st size = N1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_N1_, RHO);
  (void)(Rsh_Fir_reg_N1_);
  // goto L21()
  // L21()
  goto L21_;

D28_:;
  // deopt 99 [size3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_size3_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L104_:;
  // size4 = force? size3
  Rsh_Fir_reg_size4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size3_);
  // checkMissing(size4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_size4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // N3 = ld N
  Rsh_Fir_reg_N3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L105() else D29()
  // L105()
  goto L105_;

D29_:;
  // deopt 100 [size4, N3]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_size4_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_N3_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L105_:;
  // N4 = force? N3
  Rsh_Fir_reg_N4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N3_);
  // checkMissing(N4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_N4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r42 = `!=`(size4, N4)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_size4_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_N4_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c23 then L106() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L106()
    goto L106_;
  } else {
  // L22()
    goto L22_;
  }

L106_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L107() else D30()
  // L107()
  goto L107_;

D30_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L107_:;
  // r43 = dyn stop3("size != sum(x), i.e. one is wrong")
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L108() else D31()
  // L108()
  goto L108_;

D31_:;
  // deopt 106 [r43]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L21()
  // L21()
  goto L21_;

D32_:;
  // deopt 109 [prob11]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_prob11_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L110_:;
  // prob12 = force? prob11
  Rsh_Fir_reg_prob12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob11_);
  // checkMissing(prob12)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_prob12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r44 = `==`(prob12, 0.0)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_prob12_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // st i0 = r44
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard10 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // i0 = ld i0
  Rsh_Fir_reg_i0_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L113() else D33()
  // L113()
  goto L113_;

L112_:;
  // r45 = dyn base10(<sym i0>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L23(r45)
  // L23(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L23_;

D33_:;
  // deopt 116 [i0]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i0_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L113_:;
  // i1 = force? i0
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i0_);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // any3 = ldf any in base
  Rsh_Fir_reg_any3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r47 = dyn any3(i1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any3_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L114() else D34()
  // L114()
  goto L114_;

D34_:;
  // deopt 119 [r47]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L114_:;
  // goto L23(r47)
  // L23(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L23_;

L115_:;
  // sym11 = ldf any
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base11 = ldf any in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard11 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L118() else D35()
  // L118()
  goto L118_;

L117_:;
  // r48 = dyn base11(<lang `!=`(`[`(x, i0), 0.0)>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L25(r48)
  // L25(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L25_;

D35_:;
  // deopt 122 [x9]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L118_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(x10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c25 then L119() else L120(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L119()
    goto L119_;
  } else {
  // L120(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L120_;
  }

L119_:;
  // dr = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc then L121() else L120(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L121()
    goto L121_;
  } else {
  // L120(dr)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr;
    goto L120_;
  }

L120_:;
  // i2 = ld i0
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L122() else D36()
  // L122()
  goto L122_;

L121_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L26(dx)
  // L26(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L26_;

D36_:;
  // deopt 124 [x12, i2]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(124, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L122_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r50 = dyn __(x12, i3)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L26(r50)
  // L26(r50)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r50_;
  goto L26_;

D37_:;
  // deopt 130 [r52]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L25(r52)
  // L25(r52)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r52_;
  goto L25_;

L124_:;
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L125() else D38()
  // L125()
  goto L125_;

D38_:;
  // deopt 131 [log1]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_log1_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L125_:;
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c27 = `as.logical`(log2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_log2_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c27 then L126() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L126()
    goto L126_;
  } else {
  // L28()
    goto L28_;
  }

L126_:;
  // goto L29(-Infinity)
  // L29(-Infinity)
  Rsh_Fir_reg_r53_ = Rsh_const(CCP, 36);
  goto L29_;

L130_:;
  // i4 = ld i0
  Rsh_Fir_reg_i4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L132() else D39()
  // L132()
  goto L132_;

L131_:;
  // r56 = dyn base12(<sym i0>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L31(r56)
  // L31(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L31_;

D39_:;
  // deopt 142 [i4]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L132_:;
  // i5 = force? i4
  Rsh_Fir_reg_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i4_);
  // checkMissing(i5)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_i5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r58 = dyn all(i5)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L133() else D40()
  // L133()
  goto L133_;

D40_:;
  // deopt 145 [r58]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L133_:;
  // goto L31(r58)
  // L31(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L31_;

L134_:;
  // log3 = ld log
  Rsh_Fir_reg_log3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L135() else D41()
  // L135()
  goto L135_;

D41_:;
  // deopt 146 [log3]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_log3_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L135_:;
  // log4 = force? log3
  Rsh_Fir_reg_log4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log3_);
  // checkMissing(log4)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_log4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c29 = `as.logical`(log4)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_log4_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c29 then L136() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L136()
    goto L136_;
  } else {
  // L33()
    goto L33_;
  }

L136_:;
  // goto L34(0.0)
  // L34(0.0)
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 11);
  goto L34_;

D42_:;
  // deopt 155 [x13]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L140_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(x14)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c30 then L141() else L142(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L141()
    goto L141_;
  } else {
  // L142(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L142_;
  }

L141_:;
  // dr2 = tryDispatchBuiltin.1("[", x14)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc1 then L143() else L142(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L143()
    goto L143_;
  } else {
  // L142(dr2)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr2_;
    goto L142_;
  }

L142_:;
  // i6 = ld i0
  Rsh_Fir_reg_i6_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L144() else D43()
  // L144()
  goto L144_;

L143_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L36(dx2)
  // L36(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L36_;

D43_:;
  // deopt 157 [x16, i6]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_i6_;
  Rsh_Fir_deopt(157, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L144_:;
  // i7 = force? i6
  Rsh_Fir_reg_i7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i6_);
  // checkMissing(i7)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_i7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r62 = `!`(i7)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r63 = dyn __1(x16, r62)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L36(r63)
  // L36(r63)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r63_;
  goto L36_;

D44_:;
  // deopt 162 [prob13]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_prob13_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L145_:;
  // prob14 = force? prob13
  Rsh_Fir_reg_prob14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob13_);
  // checkMissing(prob14)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_prob14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(prob14)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_prob14_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c31 then L146() else L147(prob14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L146()
    goto L146_;
  } else {
  // L147(prob14)
    Rsh_Fir_reg_prob16_ = Rsh_Fir_reg_prob14_;
    goto L147_;
  }

L146_:;
  // dr4 = tryDispatchBuiltin.1("[", prob14)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_prob14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc2 then L148() else L147(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L148()
    goto L148_;
  } else {
  // L147(dr4)
    Rsh_Fir_reg_prob16_ = Rsh_Fir_reg_dr4_;
    goto L147_;
  }

L147_:;
  // i8 = ld i0
  Rsh_Fir_reg_i8_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L149() else D45()
  // L149()
  goto L149_;

L148_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L37(dx4)
  // L37(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L37_;

D45_:;
  // deopt 164 [prob16, i8]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_prob16_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(164, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L149_:;
  // i9 = force? i8
  Rsh_Fir_reg_i9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i8_);
  // checkMissing(i9)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_i9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // r64 = `!`(i9)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r65 = dyn __2(prob16, r64)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_prob16_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L37(r65)
  // L37(r65)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r65_;
  goto L37_;

L151_:;
  // size5 = ld size
  Rsh_Fir_reg_size5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L153() else D46()
  // L153()
  goto L153_;

L152_:;
  // r66 = dyn base13(<lang `+`(size, 1.0)>)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L39(r66)
  // L39(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L39_;

D46_:;
  // deopt 172 [size5]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_size5_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L153_:;
  // size6 = force? size5
  Rsh_Fir_reg_size6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size5_);
  // checkMissing(size6)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_size6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // r68 = `+`(size6, 1.0)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_size6_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // r69 = lgamma(r68)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(187, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L39(r69)
  // L39(r69)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r69_;
  goto L39_;

L154_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L156() else D47()
  // L156()
  goto L156_;

L155_:;
  // r72 = dyn base14(<lang `-`(`*`(x, log(prob)), lgamma(`+`(x, 1.0)))>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L40(r67, r72)
  // L40(r67, r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
  goto L40_;

D47_:;
  // deopt 178 [r67, x17]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L156_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // log5 = ldf log
  Rsh_Fir_reg_log5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L157() else D48()
  // L157()
  goto L157_;

D48_:;
  // deopt 180 [r67, x18]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(180, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L157_:;
  // p = prom<V +>{
  //   prob17 = ld prob;
  //   prob18 = force? prob17;
  //   checkMissing(prob18);
  //   return prob18;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169359922_, CCP, RHO);
  // r76 = dyn log5(p)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_log5_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L158() else D49()
  // L158()
  goto L158_;

D49_:;
  // deopt 182 [r67, x18, r76]
  SEXP Rsh_Fir_array_deopt_stack45[3];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(182, 3, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L158_:;
  // r77 = `*`(x18, r76)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // sym15 = ldf lgamma
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base15 = ldf lgamma in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args128);
  // if guard15 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L159_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L161() else D50()
  // L161()
  goto L161_;

L160_:;
  // r82 = dyn base15(<lang `+`(x, 1.0)>)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L41(r67, r77, r82)
  // L41(r67, r77, r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r82_;
  goto L41_;

D50_:;
  // deopt 184 [r67, r77, x19]
  SEXP Rsh_Fir_array_deopt_stack46[3];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(184, 3, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L161_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // r86 = `+`(x20, 1.0)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // r87 = lgamma(r86)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(187, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L41(r67, r77, r87)
  // L41(r67, r77, r87)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r87_;
  goto L41_;

D51_:;
  // deopt 191 [r83, r89]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(191, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L162_:;
  // goto L40(r83, r89)
  // L40(r83, r89)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r89_;
  goto L40_;

D52_:;
  // deopt 194 [log6]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_log6_;
  Rsh_Fir_deopt(194, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L163_:;
  // log7 = force? log6
  Rsh_Fir_reg_log7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log6_);
  // checkMissing(log7)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_log7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c32 = `as.logical`(log7)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_log7_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c32 then L164() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L164()
    goto L164_;
  } else {
  // L42()
    goto L42_;
  }

L164_:;
  // r91 = ld r
  Rsh_Fir_reg_r91_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L165() else D53()
  // L165()
  goto L165_;

D53_:;
  // deopt 196 [r91]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L165_:;
  // r92 = force? r91
  Rsh_Fir_reg_r92_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r91_);
  // checkMissing(r92)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r92_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r92
  return Rsh_Fir_reg_r92_;

L167_:;
  // r95 = ld r
  Rsh_Fir_reg_r95_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L169() else D54()
  // L169()
  goto L169_;

L168_:;
  // r93 = dyn base16(<sym r>)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L43(r93)
  // L43(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L43_;

D54_:;
  // deopt 199 [r95]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L169_:;
  // r96 = force? r95
  Rsh_Fir_reg_r96_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r95_);
  // checkMissing(r96)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r96_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // r97 = exp(r96)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(172, CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L43(r97)
  // L43(r97)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r97_;
  goto L43_;
}
SEXP Rsh_Fir_user_promise_inner4169359922_(SEXP CCP, SEXP RHO) {
  // prob17 = ld prob
  Rsh_Fir_reg_prob17_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // prob18 = force? prob17
  Rsh_Fir_reg_prob18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prob17_);
  // checkMissing(prob18)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_prob18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // return prob18
  return Rsh_Fir_reg_prob18_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
